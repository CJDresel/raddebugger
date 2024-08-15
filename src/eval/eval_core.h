// Copyright (c) 2024 Epic Games Tools
// Licensed under the MIT license (https://opensource.org/license/mit/)

#ifndef EVAL_CORE_H
#define EVAL_CORE_H

////////////////////////////////
//~ rjf: Messages

typedef enum E_MsgKind
{
  E_MsgKind_Null,
  E_MsgKind_MalformedInput,
  E_MsgKind_MissingInfo,
  E_MsgKind_ResolutionFailure,
  E_MsgKind_InterpretationError,
  E_MsgKind_COUNT
}
E_MsgKind;

typedef struct E_Msg E_Msg;
struct E_Msg
{
  E_Msg *next;
  E_MsgKind kind;
  void *location;
  String8 text;
};

typedef struct E_MsgList E_MsgList;
struct E_MsgList
{
  E_Msg *first;
  E_Msg *last;
  E_MsgKind max_kind;
  U64 count;
};

////////////////////////////////
//~ rjf: Evaluation Spaces

typedef U64 E_Space;
//
// NOTE(rjf): Evaluations occur within the context of a "space". Each "space"
// refers to a different offset or address space, but it's a bit looser of a
// concept than just address space, since it can also refer to offsets into
// a register block, only type information, or the "space" of all possibly
// values. It is also used to refer to spaces of unique IDs for key-value
// stores, e.g. for information in the debugger.
//
// Effectively, when considering the result of an evaluation, you use the
// value for understanding a key *into* a space, e.g. 1+2 -> 3, in the space
// of all values, or &foo, in the space of all addresses in PID: 1234.
//
// The values in the E_Space enum are reserved, but apart from those, any
// arbitrary value can be used, and then later interpreted.
//
enum
{
  E_Space_Null,
  E_Space_Types,     // values are not used; evaluation only contain type content
  E_Space_Values,    // values do not refer to any space, but are standalone numeric values
  E_Space_Regs,      // values index into evaluator thread's register block
};

////////////////////////////////
//~ rjf: Modules

typedef struct E_Module E_Module;
struct E_Module
{
  RDI_Parsed *rdi;
  Rng1U64 vaddr_range;
  E_Space space;
};

////////////////////////////////
//~ rjf: Generated Code

#include "eval/generated/eval.meta.h"

////////////////////////////////
//~ rjf: Basic Helper Functions

internal U64 e_hash_from_string(U64 seed, String8 string);

////////////////////////////////
//~ rjf: Message Functions

internal void e_msg(Arena *arena, E_MsgList *msgs, E_MsgKind kind, void *location, String8 text);
internal void e_msgf(Arena *arena, E_MsgList *msgs, E_MsgKind kind, void *location, char *fmt, ...);
internal void e_msg_list_concat_in_place(E_MsgList *dst, E_MsgList *to_push);

#endif // EVAL_CORE_H
