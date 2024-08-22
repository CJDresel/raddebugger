// Copyright (c) 2024 Epic Games Tools
// Licensed under the MIT license (https://opensource.org/license/mit/)

//- GENERATED CODE

C_LINKAGE_BEGIN
String8 e_token_kind_strings[6] =
{
str8_lit_comp("Null"),
str8_lit_comp("Identifier"),
str8_lit_comp("Numeric"),
str8_lit_comp("StringLiteral"),
str8_lit_comp("CharLiteral"),
str8_lit_comp("Symbol"),
};

String8 e_expr_kind_strings[44] =
{
str8_lit_comp("Nil"),
str8_lit_comp("Ref"),
str8_lit_comp("ArrayIndex"),
str8_lit_comp("MemberAccess"),
str8_lit_comp("Deref"),
str8_lit_comp("Address"),
str8_lit_comp("Cast"),
str8_lit_comp("Sizeof"),
str8_lit_comp("Neg"),
str8_lit_comp("LogNot"),
str8_lit_comp("BitNot"),
str8_lit_comp("Mul"),
str8_lit_comp("Div"),
str8_lit_comp("Mod"),
str8_lit_comp("Add"),
str8_lit_comp("Sub"),
str8_lit_comp("LShift"),
str8_lit_comp("RShift"),
str8_lit_comp("Less"),
str8_lit_comp("LsEq"),
str8_lit_comp("Grtr"),
str8_lit_comp("GrEq"),
str8_lit_comp("EqEq"),
str8_lit_comp("NtEq"),
str8_lit_comp("BitAnd"),
str8_lit_comp("BitXor"),
str8_lit_comp("BitOr"),
str8_lit_comp("LogAnd"),
str8_lit_comp("LogOr"),
str8_lit_comp("Ternary"),
str8_lit_comp("LeafBytecode"),
str8_lit_comp("LeafMember"),
str8_lit_comp("LeafStringLiteral"),
str8_lit_comp("LeafU64"),
str8_lit_comp("LeafF64"),
str8_lit_comp("LeafF32"),
str8_lit_comp("LeafIdent"),
str8_lit_comp("LeafID"),
str8_lit_comp("LeafFilePath"),
str8_lit_comp("TypeIdent"),
str8_lit_comp("Ptr"),
str8_lit_comp("Array"),
str8_lit_comp("Func"),
str8_lit_comp("Define"),
};

String8 e_interpretation_code_display_strings[11] =
{
str8_lit_comp(""),
str8_lit_comp("Cannot divide by zero."),
str8_lit_comp("Invalid operation."),
str8_lit_comp("Invalid operation types."),
str8_lit_comp("Failed memory read."),
str8_lit_comp("Failed register read."),
str8_lit_comp("Invalid frame base address."),
str8_lit_comp("Invalid module base address."),
str8_lit_comp("Invalid thread-local storage base address."),
str8_lit_comp("Insufficient evaluation machine stack space."),
str8_lit_comp("Malformed bytecode."),
};

E_OpInfo e_expr_kind_op_info_table[44] =
{
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("Nil") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("Ref") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp("["), str8_lit_comp("ArrayIndex") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp("."), str8_lit_comp("MemberAccess") },
{ E_OpKind_UnaryPrefix, 2, str8_lit_comp("*"), str8_lit_comp(""), str8_lit_comp("Deref") },
{ E_OpKind_UnaryPrefix, 2, str8_lit_comp("&"), str8_lit_comp(""), str8_lit_comp("Address") },
{ E_OpKind_Null, 1, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("Cast") },
{ E_OpKind_UnaryPrefix, 1, str8_lit_comp("sizeof"), str8_lit_comp(""), str8_lit_comp("Sizeof") },
{ E_OpKind_UnaryPrefix, 2, str8_lit_comp("-"), str8_lit_comp(""), str8_lit_comp("Neg") },
{ E_OpKind_UnaryPrefix, 2, str8_lit_comp("!"), str8_lit_comp(""), str8_lit_comp("LogNot") },
{ E_OpKind_UnaryPrefix, 2, str8_lit_comp("~"), str8_lit_comp(""), str8_lit_comp("BitNot") },
{ E_OpKind_Binary, 3, str8_lit_comp(""), str8_lit_comp("*"), str8_lit_comp("Mul") },
{ E_OpKind_Binary, 3, str8_lit_comp(""), str8_lit_comp("/"), str8_lit_comp("Div") },
{ E_OpKind_Binary, 3, str8_lit_comp(""), str8_lit_comp("%"), str8_lit_comp("Mod") },
{ E_OpKind_Binary, 4, str8_lit_comp(""), str8_lit_comp("+"), str8_lit_comp("Add") },
{ E_OpKind_Binary, 4, str8_lit_comp(""), str8_lit_comp("-"), str8_lit_comp("Sub") },
{ E_OpKind_Binary, 5, str8_lit_comp(""), str8_lit_comp("<<"), str8_lit_comp("LShift") },
{ E_OpKind_Binary, 5, str8_lit_comp(""), str8_lit_comp(">>"), str8_lit_comp("RShift") },
{ E_OpKind_Binary, 6, str8_lit_comp(""), str8_lit_comp("<"), str8_lit_comp("Less") },
{ E_OpKind_Binary, 6, str8_lit_comp(""), str8_lit_comp("<="), str8_lit_comp("LsEq") },
{ E_OpKind_Binary, 6, str8_lit_comp(""), str8_lit_comp(">"), str8_lit_comp("Grtr") },
{ E_OpKind_Binary, 6, str8_lit_comp(""), str8_lit_comp(">="), str8_lit_comp("GrEq") },
{ E_OpKind_Binary, 7, str8_lit_comp(""), str8_lit_comp("=="), str8_lit_comp("EqEq") },
{ E_OpKind_Binary, 7, str8_lit_comp(""), str8_lit_comp("!="), str8_lit_comp("NtEq") },
{ E_OpKind_Binary, 8, str8_lit_comp(""), str8_lit_comp("&"), str8_lit_comp("BitAnd") },
{ E_OpKind_Binary, 9, str8_lit_comp(""), str8_lit_comp("^"), str8_lit_comp("BitXor") },
{ E_OpKind_Binary, 10, str8_lit_comp(""), str8_lit_comp("|"), str8_lit_comp("BitOr") },
{ E_OpKind_Binary, 11, str8_lit_comp(""), str8_lit_comp("&&"), str8_lit_comp("LogAnd") },
{ E_OpKind_Binary, 12, str8_lit_comp(""), str8_lit_comp("||"), str8_lit_comp("LogOr") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp("?"), str8_lit_comp("Ternary") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("LeafBytecode") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("LeafMember") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("LeafStringLiteral") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("LeafU64") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("LeafF64") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("LeafF32") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("LeafIdent") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("LeafID") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("LeafFilePath") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("TypeIdent") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("Ptr") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("Array") },
{ E_OpKind_Null, 0, str8_lit_comp(""), str8_lit_comp(""), str8_lit_comp("Func") },
{ E_OpKind_Binary, 13, str8_lit_comp(""), str8_lit_comp("="), str8_lit_comp("Define") },
};

U8 e_kind_basic_byte_size_table[55] =
{
0,
0,
0xFF,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
8,
16,
32,
64,
1,
2,
4,
8,
16,
32,
64,
1,
2,
4,
4,
6,
8,
10,
16,
8,
16,
20,
32,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
};

String8 e_kind_basic_string_table[55] =
{
str8_lit_comp(""),
str8_lit_comp("void"),
str8_lit_comp("HANDLE"),
str8_lit_comp("HRESULT"),
str8_lit_comp("char8"),
str8_lit_comp("char16"),
str8_lit_comp("char32"),
str8_lit_comp("uchar8"),
str8_lit_comp("uchar16"),
str8_lit_comp("uchar32"),
str8_lit_comp("U8"),
str8_lit_comp("U16"),
str8_lit_comp("U32"),
str8_lit_comp("U64"),
str8_lit_comp("U128"),
str8_lit_comp("U256"),
str8_lit_comp("U512"),
str8_lit_comp("S8"),
str8_lit_comp("S16"),
str8_lit_comp("S32"),
str8_lit_comp("S64"),
str8_lit_comp("S128"),
str8_lit_comp("S256"),
str8_lit_comp("S512"),
str8_lit_comp("bool"),
str8_lit_comp("F16"),
str8_lit_comp("F32"),
str8_lit_comp("F32PP"),
str8_lit_comp("F48"),
str8_lit_comp("F64"),
str8_lit_comp("F80"),
str8_lit_comp("F128"),
str8_lit_comp("ComplexF32"),
str8_lit_comp("ComplexF64"),
str8_lit_comp("ComplexF80"),
str8_lit_comp("ComplexF128"),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp(""),
str8_lit_comp("struct"),
str8_lit_comp("class"),
str8_lit_comp("union"),
str8_lit_comp("enum"),
str8_lit_comp("typedef"),
str8_lit_comp("struct"),
str8_lit_comp("union"),
str8_lit_comp("class"),
str8_lit_comp("enum"),
str8_lit_comp(""),
str8_lit_comp(""),
};

C_LINKAGE_END

