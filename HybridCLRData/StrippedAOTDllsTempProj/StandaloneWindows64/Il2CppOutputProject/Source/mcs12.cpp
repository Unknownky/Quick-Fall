#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Char[],System.String>
struct Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1;
// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec[],Mono.CSharp.InflatedTypeSpec>
struct Dictionary_2_t41890955626B532CD8499ED496D1FDD2E8C8B3F9;
// System.Collections.Generic.Dictionary`2<Mono.CSharp.ITypeDefinition,Mono.CSharp.Attribute>
struct Dictionary_2_t9C818E73EAC0EF8CCB9BC8158F52B6F4B5CE7CE4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Mono.CSharp.AnonymousTypeClass>>
struct Dictionary_2_t3D59B6443750ED838DD47F7DF6309525EAE486C3;
// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CompilerServices.SymbolWriter.AnonymousScopeEntry>
struct Dictionary_2_tB2A2DD9CE4AD18999E6D1B758611D42FC8A3F46E;
// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CompilerServices.SymbolWriter.CompileUnitEntry>
struct Dictionary_2_t0E7795843FF9461364317090380DAE89E72E0129;
// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CompilerServices.SymbolWriter.MethodEntry>
struct Dictionary_2_t68A729DB2681B958C040CFEB7F6E317E07021737;
// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CompilerServices.SymbolWriter.SourceFileEntry>
struct Dictionary_2_t69FDAFC254C5DD792B4854F9EF4547BFB577A3AE;
// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CSharp.WarningRegions>
struct Dictionary_2_t038788E5ED93677430C8DB8342FB9559175CFE2D;
// System.Collections.Generic.Dictionary`2<Mono.CSharp.MethodSpec,Mono.CSharp.Method>
struct Dictionary_2_t9924329FC6FD5B48F1C6B2DE60A958C236DCC3BE;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Security.Permissions.SecurityAction,System.Security.PermissionSet>
struct Dictionary_2_tBE4D4B305852DFEADD92059FE44C53D94EE9BD38;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C;
// System.Collections.Generic.Dictionary`2<System.String,Mono.CSharp.FullNamedExpression>
struct Dictionary_2_tE72B46DD3AF5D2B0D8FE8F8A2CB40D7BFC344408;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,Mono.CSharp.MemberCore>
struct Dictionary_2_t4026024C28E7642D69023DF4232220DABDF97305;
// System.Collections.Generic.Dictionary`2<System.String,Mono.CSharp.RootNamespace>
struct Dictionary_2_tA5B3B7EE8D65278FB44A47B15E26905FA0CBDE54;
// System.Collections.Generic.Dictionary`2<System.String,Mono.CSharp.SourceFile>
struct Dictionary_2_tF982AB22796D1AEB2BD151B32F44F56C962E8992;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,Mono.CSharp.UsingAliasNamespace>
struct Dictionary_2_tA5DD3FE92CB9040016C5422D481C1AA4CF789603;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.XmlDocument>
struct Dictionary_2_t633806860DB887E17BA5510093E8337780ACBC0A;
// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec,Mono.CSharp.AwaiterDefinition>
struct Dictionary_2_t396CE241ED8639D2271DC630ABF590E62CB27EEC;
// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec,Mono.CSharp.MethodSpec>
struct Dictionary_2_t5A49EF7282FAC7DE51ABA634D2CA18AEB231C4FF;
// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec,Mono.CSharp.PointerContainer>
struct Dictionary_2_t2AE81F979C3AB1CFF1DBA6D6DAC0627E058C4179;
// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec,Mono.CSharp.ReferenceContainer>
struct Dictionary_2_tA28056E8AE3924D15B6CE8ACC2CF2A5FECD24F11;
// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec,Mono.CSharp.TypeInfo>
struct Dictionary_2_t5ABA0DF6EBFF684AA3CE012CD3D880CAA4D5533B;
// System.Collections.Generic.Dictionary`2<Mono.CSharp.ArrayContainer/TypeRankPair,Mono.CSharp.ArrayContainer>
struct Dictionary_2_tB7BE0F4A51864B6C073F4E77B17002731670FB31;
// System.Func`1<System.IO.Stream>
struct Func_1_t27101E7270E9DB09B04E7CC4B6DF698EA38F86CC;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEqualityComparer`1<System.Char[]>
struct IEqualityComparer_1_tBF9ADE2B21B829D419A0C99E6E7DE1C4C28A87CE;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Mono.CSharp.MethodSpec>
struct IList_1_t8D097B4878AC1B72CFD5F0B557D6C3004260BE00;
// System.Collections.Generic.IList`1<Mono.CSharp.TypeSpec>
struct IList_1_t2D36F2162F6F680EF15B93F5019C9F85220528C5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Char[],System.String>
struct KeyCollection_t34069A3E6F84E0841BD270BD83509913D6A5004D;
// Mono.CSharp.Tokenizer/KeywordEntry`1<System.Int32>
struct KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE;
// Mono.CSharp.Tokenizer/KeywordEntry`1<Mono.CSharp.Tokenizer/PreprocessorDirective>
struct KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<Mono.CSharp.MemberExpr,Mono.CSharp.NamedArgument>>
struct List_1_t67DF1B643A57D87515AB9922FD6867C03E72F6BB;
// System.Collections.Generic.List`1<Mono.CSharp.Tuple`2<System.String,System.String>>
struct List_1_t50B74CFD57A0635D906E03F8625EAD5FF7568557;
// System.Collections.Generic.List`1<Mono.CSharp.AssemblyResource>
struct List_1_t1F48D4DE5E778576CCC784710923E86DF3064F1A;
// System.Collections.Generic.List`1<Mono.CSharp.Attribute>
struct List_1_t76368EC744C2B43055BB6741A6B55B8A42E3559A;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.CompileUnitEntry>
struct List_1_t21ECA163DE9069A39635956F4777B0995F5685D7;
// System.Collections.Generic.List`1<Mono.CSharp.Constraints>
struct List_1_t0C642221C357C8B5718460C8EDE0F0D900B11E0A;
// System.Collections.Generic.List`1<Mono.CSharp.DocumentationParameter>
struct List_1_t4BC8C73EC8802E91AB3E163D377A17B318C63B87;
// System.Collections.Generic.List`1<Mono.CSharp.FieldDeclarator>
struct List_1_t08CBBE6DB8C8D5912A9E13B0B96C16F6437E85D9;
// System.Collections.Generic.List`1<Mono.CSharp.FieldInitializer>
struct List_1_t2899C2E6191052C69EA83E82F24B3DC0923203DB;
// System.Collections.Generic.List`1<Mono.CSharp.FullNamedExpression>
struct List_1_t801369823D1E524F6387B19DEA54FBE760196467;
// System.Collections.Generic.List`1<Mono.CSharp.ImportedModuleDefinition>
struct List_1_tB1541D8D39E844557376BB835945383011B8AB14;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Mono.CSharp.Location>
struct List_1_t124684566062F37FF59D2D03C2F0187ADEA53771;
// System.Collections.Generic.List`1<Mono.CSharp.MemberCore>
struct List_1_tA870AFD0B03495B8BFCA49CC956731ED588D5FB3;
// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.MethodEntry>
struct List_1_tE72E827E61BA3FD0B7618ECDDF2B6779E85094BC;
// System.Collections.Generic.List`1<Mono.CSharp.MissingTypeSpecReference>
struct List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Mono.CSharp.Parameter>
struct List_1_t6A6402B13DD48FEB1D96E2820FA5180990F1AADB;
// System.Collections.Generic.List`1<Mono.CSharp.SourceFile>
struct List_1_tE25B395EA25FA32FC05543838706BC98401701AB;
// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.SourceFileEntry>
struct List_1_tF87E3A8EADAEA4FD6477E6BAD6C6F60DCAD29BF1;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Mono.CSharp.TypeContainer>
struct List_1_t23CDEB7C07592B4EB2EE5294641CBBE7C893BD48;
// System.Collections.Generic.List`1<Mono.CSharp.TypeDefinition>
struct List_1_tD91DAADE3711AB2D2FDFC9E37811143C43B4B339;
// System.Collections.Generic.List`1<Mono.CSharp.TypeParameter>
struct List_1_tE140825940FA415795AD27377CE251A2BBF393CC;
// System.Collections.Generic.List`1<Mono.CSharp.UsingClause>
struct List_1_tEA6B5839BE18BC1549C769202D61E7D091D6C574;
// System.Collections.Generic.List`1<Mono.CSharp.SourceFile/LocationRegion>
struct List_1_tA4C0B9FD5DB7CDD926BFF93E2E2C12023DCDD0A8;
// System.Collections.Generic.List`1<Mono.CSharp.WarningRegions/PragmaCmd>
struct List_1_tE24D956C713B752E2CD669774B2A01D5C1445DED;
// System.Collections.Generic.Stack`1<System.Boolean>
struct Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<Mono.CSharp.Tokenizer/Position>
struct Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Char[],System.String>
struct ValueCollection_t23F26A4CF9C450A52DA3998031BB74EBB767EF52;
// System.Collections.Generic.Dictionary`2<System.Char[],System.String>[]
struct Dictionary_2U5BU5D_tB3D5B174D6C376DBA5BB7B48C3F60DBABD0D2F46;
// System.Collections.Generic.Dictionary`2/Entry<System.Char[],System.String>[]
struct EntryU5BU5D_tE73EFFA22C5F1A33EFA057E4308BD01A9A2B04B0;
// Mono.CSharp.Tokenizer/KeywordEntry`1<System.Int32>[]
struct KeywordEntry_1U5BU5D_tCB7E1065670548912647EED29D7FCDD320EFB205;
// Mono.CSharp.Tokenizer/KeywordEntry`1<Mono.CSharp.Tokenizer/PreprocessorDirective>[]
struct KeywordEntry_1U5BU5D_tCD7EC0B45DFBAE2FE37133CF321C0D3B059F0BB9;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
// Mono.CSharp.Tokenizer/KeywordEntry`1<System.Int32>[][]
struct KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19;
// Mono.CSharp.Tokenizer/KeywordEntry`1<System.Int32Enum>[][]
struct KeywordEntry_1U5BU5DU5BU5D_tD8B18FBA638863B6C4BAA7C745A29E428EAF1125;
// Mono.CSharp.Tokenizer/KeywordEntry`1<Mono.CSharp.Tokenizer/PreprocessorDirective>[][]
struct KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205;
// Mono.CSharp.TypeSpec[][]
struct TypeSpecU5BU5DU5BU5D_tA15D48E66CEC8E2215C85C6FB1BE5C5DB1DA816E;
// Mono.CSharp.Attributable[]
struct AttributableU5BU5D_tAAF76D924E96C4DA5A1CF722FB2605A021FDA69B;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// Mono.CSharp.BuiltinTypeSpec[]
struct BuiltinTypeSpecU5BU5D_t5CA69C3EB4913253599C11A54CCAC0AD965DC337;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Mono.CSharp.Constraints[]
struct ConstraintsU5BU5D_tA4A5C652E31A54B2B32307DE93EE3D57CA45C5F6;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_tD03A2225FB5B6207CCD9685C9878B507491DB0CC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Mono.CSharp.LocatedToken[]
struct LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF;
// Mono.CSharp.Location[]
struct LocationU5BU5D_t195DF0270FB27D79826996D4A5F1780C89F3E7B3;
// Mono.CSharp.MissingTypeSpecReference[]
struct MissingTypeSpecReferenceU5BU5D_t6A9AE9B2831F95432158DBC075B6D0152FB784E6;
// Mono.CSharp.Namespace[]
struct NamespaceU5BU5D_t5F9B085AF59803C3535382C211367C88C6C7230A;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Mono.CSharp.TypeParameterSpec[]
struct TypeParameterSpecU5BU5D_t64A1B999288B7F2C67551EDB151FC24CDB86D409;
// Mono.CSharp.TypeSpec[]
struct TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114;
// Mono.CSharp.Binary/PredefinedOperator[]
struct PredefinedOperatorU5BU5D_t4D23A813935839B4C5A1615203E853CFC15A7244;
// Mono.CSharp.Location/Checkpoint[]
struct CheckpointU5BU5D_tBDFE98DE1652432651D9224F448A434AA88990F1;
// Mono.CSharp.Tokenizer/Position[]
struct PositionU5BU5D_t5BA4B3782FF752A1FC46CDEA074468B5C021538A;
// Mono.CSharp.ATypeNameExpression
struct ATypeNameExpression_t5A86612FE7942AAF35D040012464E51E0399DB9E;
// Mono.CSharp.Arguments
struct Arguments_t84469B3B1FD40617E82265AE67589C2C5BC6DD85;
// Mono.CSharp.AssemblyAttributesPlaceholder
struct AssemblyAttributesPlaceholder_t0AAC165F7CFEB2652D6F5E8B408FBCADB037A582;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t87D45090370084F95DC55357D97AC3FBD578220A;
// Mono.CSharp.AssemblyBuilderExtension
struct AssemblyBuilderExtension_t88420E7A035438AE4A5F3936077CEF16BB49E0E0;
// Mono.CSharp.AssemblyDefinition
struct AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4;
// Mono.CSharp.Attributable
struct Attributable_t85D0C16B87884F896200C7B379A7026B7317E9CC;
// Mono.CSharp.Attribute
struct Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t25F34EEA4F7DBA1A8EEFA0685E986AEECE621C49;
// Mono.CSharp.Attributes
struct Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708;
// Mono.CSharp.BuiltinTypeSpec
struct BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198;
// Mono.CSharp.BuiltinTypes
struct BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B;
// Mono.CSharp.CharLiteral
struct CharLiteral_t1E6A7CFEE9EF888E93353573B577BBEA02B90559;
// Mono.CSharp.CompilationSourceFile
struct CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736;
// Mono.CompilerServices.SymbolWriter.CompileUnitEntry
struct CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631;
// Mono.CSharp.CompilerContext
struct CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2;
// Mono.CSharp.CompilerSettings
struct CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716;
// Mono.CSharp.Constraints
struct Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3;
// Mono.CSharp.Constructor
struct Constructor_t2200881FF868A83DFA2695D780716B13269A2FD3;
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_tABABEF93285F84BBF36A02B182D561FD32019316;
// Mono.CSharp.ConstructorInitializer
struct ConstructorInitializer_t82F960D141DBA7E40EF6A7ED2E0415C157AE03B2;
// Mono.CSharp.DecimalLiteral
struct DecimalLiteral_tC03D6E866095F8A6525F39C93E1206F7130F1EB6;
// Mono.CSharp.DocumentationBuilder
struct DocumentationBuilder_t7805D42F3A2BD1A40FE71A5A1D49B8CE3548D52D;
// Mono.CSharp.DoubleLiteral
struct DoubleLiteral_t51128E740EEDBB12E4B42437AB82302AAFD3AA3B;
// Mono.CSharp.ElementTypeSpec
struct ElementTypeSpec_t1E107D8DC289F63B322C8859BC395BFEDB97ECF8;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Mono.CSharp.Evaluator
struct Evaluator_t49C1B5F277766BBC996D3637DA3D1817455ED335;
// System.Exception
struct Exception_t;
// Mono.CSharp.Expression
struct Expression_t765E7793407091A8450573D552B39FDD6121FF49;
// Mono.CSharp.ExtensionMethodCandidates
struct ExtensionMethodCandidates_tA706B1A3BEC91D949C963B4789B32FBECA178E89;
// Mono.CSharp.FieldBase
struct FieldBase_t96B175700F10D6FD7C4EB7D78E05505EF54964FE;
// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_tFCE2E490435F978A3C4DC9340920C3C32CE74889;
// Mono.CSharp.FieldSpec
struct FieldSpec_tC371A27A87AB752D26DA024B1FB7EF5208B3C400;
// Mono.CSharp.FloatLiteral
struct FloatLiteral_t51F22CDF1AAAF07702F84B67067238201FE95883;
// Mono.CSharp.FullNamedExpression
struct FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D;
// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_tAF14CE746360ECC49846772B81BDF591555AFC43;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Mono.CSharp.ILiteralConstant
struct ILiteralConstant_t7CD39A7C987A647F33E991AD7E9BFF39C8CE6E30;
// Mono.CSharp.IMemberContext
struct IMemberContext_t02991223F3FEC57045D9FA372DB500892FFE0B7F;
// Mono.CSharp.IMemberDefinition
struct IMemberDefinition_t7BD6D3ACB1480099EF288B5FFB498EBFA7928FAA;
// Mono.CSharp.IModuleContext
struct IModuleContext_t8DC5CDC7042ADC67FD83F5131ADEBE4C5CA21489;
// Mono.CSharp.ITypeDefinition
struct ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8;
// Mono.CSharp.IntLiteral
struct IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42;
// Mono.CSharp.InternalErrorException
struct InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC;
// Mono.CSharp.LocatedToken
struct LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5;
// Mono.CSharp.LocationsBag
struct LocationsBag_t6488E8A26C8A41EFF904EF1AC8B4C93AABC7CF03;
// Mono.CSharp.LongLiteral
struct LongLiteral_t89E1D3294B9B21E3E82F8741599EECC3A58B4041;
// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A;
// Mono.CSharp.MemberCache
struct MemberCache_t817FD06922A8D2B1CF11AA1A2CA05CB978F96B3D;
// Mono.CSharp.MemberCore
struct MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// Mono.CSharp.MemberName
struct MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284;
// Mono.CSharp.MemberSpec
struct MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8;
// Mono.CSharp.MetadataImporter
struct MetadataImporter_tBE2149190CC515F27D35524428DE9B4B8082DD8A;
// Mono.CSharp.Method
struct Method_tE7D3135874028C57754EF0F469B99CD86C68EC6A;
// Mono.CSharp.MethodData
struct MethodData_tC18E902BAF199D80027581AAA48D7F3F5CD2C5B1;
// Mono.CSharp.MethodSpec
struct MethodSpec_t1F247458D5C0280C8F2D2D04F96F150CAB2D2873;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_tC7B7823951455CA3EFD8383CAC22E57DFC06A57A;
// Mono.CSharp.ModuleContainer
struct ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3;
// Mono.CompilerServices.SymbolWriter.MonoSymbolFile
struct MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB;
// Mono.CompilerServices.SymbolWriter.MyBinaryReader
struct MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296;
// Mono.CSharp.Namespace
struct Namespace_tE8910333D94014311495367D861D6671021F45EA;
// Mono.CSharp.NamespaceContainer
struct NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ObsoleteAttribute
struct ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A;
// Mono.CompilerServices.SymbolWriter.OffsetTable
struct OffsetTable_tB70460631855C3268C1794D1ED985FF8ACCE73CE;
// Mono.CSharp.ParametersCompiled
struct ParametersCompiled_tAE83A848B0899B138F2FBD903B4CAE7ABAE79403;
// Mono.CSharp.ParserSession
struct ParserSession_tE9F339A49DFCF899A338AE7D39CA9BAF6988447E;
// Mono.CSharp.PendingImplementation
struct PendingImplementation_t40A22C396FC99405A2DDCA619B22F1D97416C352;
// Mono.CSharp.PredefinedAttribute
struct PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B;
// Mono.CSharp.PredefinedAttributes
struct PredefinedAttributes_t57CF082A2D3A84BDE14293D534774A98E3C51A3D;
// Mono.CSharp.PredefinedDebuggableAttribute
struct PredefinedDebuggableAttribute_t962FD1589B80E728CC5DDCA46ADB5B857B76174D;
// Mono.CSharp.PredefinedDebuggerBrowsableAttribute
struct PredefinedDebuggerBrowsableAttribute_t96342004769384AE78E458E7C54C6C7DC5DA70D6;
// Mono.CSharp.PredefinedDecimalAttribute
struct PredefinedDecimalAttribute_tF5660F3969386763EAA22119CF25A4280AD86988;
// Mono.CSharp.PredefinedDynamicAttribute
struct PredefinedDynamicAttribute_tD8CE881BFB65BD9FAAA0748B1AEACAD7D040F8EA;
// Mono.CSharp.PredefinedMembers
struct PredefinedMembers_t9DE845834B7F4186887CB8C1A2086D85C8416B54;
// Mono.CSharp.PredefinedStateMachineAttribute
struct PredefinedStateMachineAttribute_t2F9C90CD90B0A3BE57719E3FD7B1C872A9DE8F68;
// Mono.CSharp.PredefinedTypes
struct PredefinedTypes_tDDDA15F9DCEC3B9C45B9D84A6B6F0051BDD88CF8;
// Mono.CSharp.Property
struct Property_t6C97FAAC2707D6F98A4B830C045A02B484D765EA;
// Mono.CSharp.PropertyBase
struct PropertyBase_t7861DAC749F3B502B1F573B39E9C3A1F2E4AE78A;
// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t2942A01F56306FF5B06D3823F4B9B88BC66C0718;
// Mono.CSharp.Report
struct Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27;
// Mono.CSharp.ReportPrinter
struct ReportPrinter_t06D9F4C348524BD3CA571A46CC2887C72F58FFEC;
// Mono.CSharp.ReturnParameter
struct ReturnParameter_t96B0FAE8128515B913C10905F663256FC78025D8;
// Mono.CSharp.RootNamespace
struct RootNamespace_tAC3359C1C3D9647B87E00B12288F32477C565D11;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Mono.CSharp.SeekableStreamReader
struct SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Mono.CSharp.SimpleMemberName
struct SimpleMemberName_tF82E5572C2318BC857235349241DACE90C310C12;
// Mono.CSharp.SourceFile
struct SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12;
// Mono.CompilerServices.SymbolWriter.SourceFileEntry
struct SourceFileEntry_tAE8059F2AAB5300BE9F9686F79F7FBDE79024D63;
// Mono.CompilerServices.SymbolWriter.SourceMethodBuilder
struct SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Mono.CSharp.StringLiteral
struct StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// Mono.CSharp.StructuralVisitor
struct StructuralVisitor_t67AB9A248269D1BF1711FC0F10C12BEE9F235D3E;
// Mono.CSharp.TimeReporter
struct TimeReporter_t1059732734CB0BA004363785410DBA2FC8C69247;
// Mono.CSharp.Token
struct Token_tAA1F2C0EBC0EBBEA0FEEC4E334E41DC04CECA57B;
// Mono.CSharp.Tokenizer
struct Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501;
// Mono.CSharp.ToplevelBlock
struct ToplevelBlock_tEBAA2D84DE8DE0A9161735A03EF2A423E2529FBE;
// System.Type
struct Type_t;
// Mono.CSharp.TypeArguments
struct TypeArguments_t5FDB3DD6FBA163B07E1B70BAF7477ECD56CF7501;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_tB9523559034D11ED3F97AF62D8C80E66D331F513;
// Mono.CSharp.TypeContainer
struct TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4;
// Mono.CSharp.TypeDefinition
struct TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0;
// Mono.CSharp.TypeExpression
struct TypeExpression_t82D76E7C41A5DCEB19803126329573520F20962A;
// Mono.CSharp.TypeParameter
struct TypeParameter_t2B529F20F82AE20A38AB99CBA0E31D7F88E12EF2;
// Mono.CSharp.TypeParameterSpec
struct TypeParameterSpec_t8805BC655FFA58ED1E4D1F284525983360CCCD18;
// Mono.CSharp.TypeParameters
struct TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C;
// Mono.CSharp.TypeSpec
struct TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253;
// Mono.CSharp.UIntLiteral
struct UIntLiteral_tE7E15D2BAA2D40F2165976E0E179176BFF936B0C;
// Mono.CSharp.ULongLiteral
struct ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE;
// Mono.CSharp.VarianceDecl
struct VarianceDecl_t3A7FBDFCEEC9E6A5569879FF85CFBCA154B94A10;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Mono.CSharp.WarningRegions
struct WarningRegions_tC187DC7F540F83465E907555DE5E1DF610FB06E3;
// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B;
// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F;
// Mono.CSharp.CSharpParser/OperatorDeclaration
struct OperatorDeclaration_tDB0137E00E926F0E8C7E242C2C28A0586D8713A4;
// Mono.CSharp.ImportedDefinition/AttributesBag
struct AttributesBag_t9AD498844B15459661D466B99C39D7D27AEDD993;
// Mono.CSharp.ModuleContainer/PatternMatchingHelper
struct PatternMatchingHelper_t9864BA6FA10DCF0245B7461151239DDBD25C298E;
// Mono.CSharp.Property/BackingFieldDeclaration
struct BackingFieldDeclaration_t7D8D30EAEFB3837AD6FA5AE77D15BAC675689387;
// Mono.CSharp.PropertyBase/PropertyMethod
struct PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729;
// Mono.CSharp.Tokenizer/IdentifiersComparer
struct IdentifiersComparer_t928D506738E14DEF81F7E2384D8AD6ED2D3FA965;
// Mono.CSharp.Tokenizer/LocatedTokenBuffer
struct LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9;
// Mono.CSharp.Tokenizer/Position
struct Position_t54676CA533325D551EE246260967D8F0BDDDB40A;

IL2CPP_EXTERN_C RuntimeClass* BackingFieldDeclaration_t7D8D30EAEFB3837AD6FA5AE77D15BAC675689387_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharLiteral_t1E6A7CFEE9EF888E93353573B577BBEA02B90559_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Constructor_t2200881FF868A83DFA2695D780716B13269A2FD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecimalLiteral_tC03D6E866095F8A6525F39C93E1206F7130F1EB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_tE5FF582554D79B704C6338F69E9A4CCC42E9BC0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Destructor_t71CBEB9748E646C108306086B289A61445E40B39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleLiteral_t51128E740EEDBB12E4B42437AB82302AAFD3AA3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementTypeSpec_t1E107D8DC289F63B322C8859BC395BFEDB97ECF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatLiteral_t51F22CDF1AAAF07702F84B67067238201FE95883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetIndexerMethod_t38D7E529DD1696F23F82FDD9032768F6E69476C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAssemblyDefinition_tB6C576CD5BA1C75C44CC6EA7F4F4AD547F18068B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMemberContext_t02991223F3FEC57045D9FA372DB500892FFE0B7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMemberDefinition_t7BD6D3ACB1480099EF288B5FFB498EBFA7928FAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IModuleContext_t8DC5CDC7042ADC67FD83F5131ADEBE4C5CA21489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IdentifiersComparer_t928D506738E14DEF81F7E2384D8AD6ED2D3FA965_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImportedDefinition_t3FA5B456C5B7F121CEE1BF9799987E21B3E5941C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Interface_t5643DC3C71719AD252703984022EF75B5A23ADBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t124684566062F37FF59D2D03C2F0187ADEA53771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LongLiteral_t89E1D3294B9B21E3E82F8741599EECC3A58B4041_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Modifiers_t7DB769FD64DE8A09DDEA001FB19123BB03241FA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Position_t54676CA533325D551EE246260967D8F0BDDDB40A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PreprocessorDirective_tAA081647C985CC6EE717A9564276EDFCA2911534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SetIndexerMethod_tA22D80016784BBEA077DF7013B5D5CD46C13EA29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIntLiteral_tE7E15D2BAA2D40F2165976E0E179176BFF936B0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral00F89CB2115A05D26324E757A0EDE36DEA79C83D;
IL2CPP_EXTERN_C String_t* _stringLiteral0226F08F1363B72919374BC9F1AABA0AF07295F0;
IL2CPP_EXTERN_C String_t* _stringLiteral02929E08A4A8D5FDF5C7A9F7575E4CA1F48AF9AA;
IL2CPP_EXTERN_C String_t* _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA;
IL2CPP_EXTERN_C String_t* _stringLiteral03133975784A1AD51581DE984DB04CC79C37CA84;
IL2CPP_EXTERN_C String_t* _stringLiteral06C011206E3BA3D0C859CC98AA4C81026E5D85D7;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0BB39DE8D1B747008B7AA481357BD906FEA90B6F;
IL2CPP_EXTERN_C String_t* _stringLiteral0CE918CF589A0B3A3BDB90F0F98BCC43CDF6169E;
IL2CPP_EXTERN_C String_t* _stringLiteral0CEBF7DFA17440E9873C47A2C1BE712F98DFA500;
IL2CPP_EXTERN_C String_t* _stringLiteral0D660B34626C034FAC6645FD0171ADB7194734FE;
IL2CPP_EXTERN_C String_t* _stringLiteral0E18A58B2D4C9FF72BE170F4F09231D2B7503E79;
IL2CPP_EXTERN_C String_t* _stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9;
IL2CPP_EXTERN_C String_t* _stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18;
IL2CPP_EXTERN_C String_t* _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral11749F9AE3825EC03111BADE7C63EFF333EC16A8;
IL2CPP_EXTERN_C String_t* _stringLiteral13CF489EDCE9FCC5FCC09F20D5FFB656CF1914AE;
IL2CPP_EXTERN_C String_t* _stringLiteral1593F0BA9565D41C31360961E958F85BB60F0C8B;
IL2CPP_EXTERN_C String_t* _stringLiteral16939FE1910D31A43CD6141A2BEC7CEABCFE2E89;
IL2CPP_EXTERN_C String_t* _stringLiteral17AC789B98C1E047CF7A7410585764A587BCAABC;
IL2CPP_EXTERN_C String_t* _stringLiteral1A9F773AF09A196B0A76B00E4B47084B3EA86D59;
IL2CPP_EXTERN_C String_t* _stringLiteral1B6D0EA4FFAEA7868BA3D296BF046EF1266CEC55;
IL2CPP_EXTERN_C String_t* _stringLiteral1BA78EAF18DC03ACDD0988489FF7BEF2216ABBDA;
IL2CPP_EXTERN_C String_t* _stringLiteral1BFAFC96CADBC9906896294E2AE00318DBB0EC5F;
IL2CPP_EXTERN_C String_t* _stringLiteral1E09244D56CC22562695A25998F44729431F0786;
IL2CPP_EXTERN_C String_t* _stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B;
IL2CPP_EXTERN_C String_t* _stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499;
IL2CPP_EXTERN_C String_t* _stringLiteral27BFBB9549E8D8EF46BE1E2522D3680074392232;
IL2CPP_EXTERN_C String_t* _stringLiteral286CC02C1E7ED462D7D2D31546D5144F88661A2F;
IL2CPP_EXTERN_C String_t* _stringLiteral28A2974B55097EBB10C3D44D4452824517C0783D;
IL2CPP_EXTERN_C String_t* _stringLiteral2A75E7E2D6559FF6687E45CC1702B4062287DD86;
IL2CPP_EXTERN_C String_t* _stringLiteral2CA5620FA3A763C5F6BD0E94D296422F4450BA25;
IL2CPP_EXTERN_C String_t* _stringLiteral2E1BE71521D34F8CE2CF34C520739F8F79240DAE;
IL2CPP_EXTERN_C String_t* _stringLiteral2E3ED7A81B1913E943A744C8F9E7D5EB5C672B4C;
IL2CPP_EXTERN_C String_t* _stringLiteral2ECA47452988C370602B26B2F5E3A7BF45020DD9;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
IL2CPP_EXTERN_C String_t* _stringLiteral2F54E075E182518EAB547F81ACFCBCDB50BE3F9F;
IL2CPP_EXTERN_C String_t* _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral32CF02B3D2A0CD265C9C6DDC9F55E5512647D122;
IL2CPP_EXTERN_C String_t* _stringLiteral33F3CCC8C96B52CBA9D88D899779B6191CE15B79;
IL2CPP_EXTERN_C String_t* _stringLiteral346AF0C282FFAB43667E4DFFB5694F745CA75BCC;
IL2CPP_EXTERN_C String_t* _stringLiteral3580987618C5FC08EBA826D318FA29BE8E98D503;
IL2CPP_EXTERN_C String_t* _stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C;
IL2CPP_EXTERN_C String_t* _stringLiteral36A06081C3E35FC0138A8A6DD98C00735D17BEDF;
IL2CPP_EXTERN_C String_t* _stringLiteral36A07254D81AF39088E2BED8EFC92E153ED48ECC;
IL2CPP_EXTERN_C String_t* _stringLiteral37A9BD79F04DE5D47223458B91D403BC9A9D5A25;
IL2CPP_EXTERN_C String_t* _stringLiteral384565B8399EC9A224FB52B7078096010121FA9F;
IL2CPP_EXTERN_C String_t* _stringLiteral38D3008511B528A5F192D58360168CA7329DE2AB;
IL2CPP_EXTERN_C String_t* _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
IL2CPP_EXTERN_C String_t* _stringLiteral396E0528902457DBB1089865A71B75F37DF9D919;
IL2CPP_EXTERN_C String_t* _stringLiteral3B5E495CDE8B6F083E7D5ACE1D945067609680FC;
IL2CPP_EXTERN_C String_t* _stringLiteral40238A1A323AEE2FA699BCF0BB5F71A5CCC87DA2;
IL2CPP_EXTERN_C String_t* _stringLiteral4072AE0751C91CD138A3BC243720FF52BADF4A33;
IL2CPP_EXTERN_C String_t* _stringLiteral41D64AA3D74B597B9451EEC117C35820FA05EFE0;
IL2CPP_EXTERN_C String_t* _stringLiteral443BD561FA5A81D321CAAF0B444C0CFB1C5811D4;
IL2CPP_EXTERN_C String_t* _stringLiteral46672195A32767D1647572DFD13322EE00EB5DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral48A60A9CECD6D02A0CDA9B08472E38323B485050;
IL2CPP_EXTERN_C String_t* _stringLiteral4A46FCCF84DD365C42370B71E9DED3EAD9A0413D;
IL2CPP_EXTERN_C String_t* _stringLiteral4D53A5AD071526BE62675FB8EBADCB1BD94A5394;
IL2CPP_EXTERN_C String_t* _stringLiteral4DE499DDD56B58043006A96AAA44ED6015EDF4EE;
IL2CPP_EXTERN_C String_t* _stringLiteral4EAE1BD4E16CD6350E63C03E0B6E695D1A24FD68;
IL2CPP_EXTERN_C String_t* _stringLiteral4FC62B7038BB5F13C1E7F7F9ECDFA4AF83E47B55;
IL2CPP_EXTERN_C String_t* _stringLiteral50D4804BC7D54E5E3D765D78A85B3784DBE80471;
IL2CPP_EXTERN_C String_t* _stringLiteral51BD44FCF32B791170C3F451E314F3366254FC8F;
IL2CPP_EXTERN_C String_t* _stringLiteral541BC3E626400B590FFDBE860C1855349210E425;
IL2CPP_EXTERN_C String_t* _stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C;
IL2CPP_EXTERN_C String_t* _stringLiteral55E606CEDF36876109C1C2004C2DCF1B25DE95A1;
IL2CPP_EXTERN_C String_t* _stringLiteral5660D9162CDEE78DEAF40FC47EAD439358400C41;
IL2CPP_EXTERN_C String_t* _stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D;
IL2CPP_EXTERN_C String_t* _stringLiteral57046FC2B1DAF399BC0B2381DB8D6833BEC364B6;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3482EA11FCCB04C793438C6428A672966E97B3;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5CAD421923F0F10D02AFE6EA17ED4E929131E356;
IL2CPP_EXTERN_C String_t* _stringLiteral5CD4A1EBA38CE129A43FCCDB456FAABF692D7A77;
IL2CPP_EXTERN_C String_t* _stringLiteral5CF637AF1571A6E5D0B437E9E082426D624A4FCA;
IL2CPP_EXTERN_C String_t* _stringLiteral5DFC03B35CE1610D507097EBBBD36CF45BCB4C2C;
IL2CPP_EXTERN_C String_t* _stringLiteral5F1AD834E43FF58996460E153DB6443AC606C163;
IL2CPP_EXTERN_C String_t* _stringLiteral614B501556B12B5890C878B29FB23C1807F2B680;
IL2CPP_EXTERN_C String_t* _stringLiteral61A88EF487F99DCB9558AAAD39471532DEE75F42;
IL2CPP_EXTERN_C String_t* _stringLiteral61C6D968B7FE88D4B8A63934DD5685C362457520;
IL2CPP_EXTERN_C String_t* _stringLiteral63AF870AAE93D50268073307FD25030EEC0D95CD;
IL2CPP_EXTERN_C String_t* _stringLiteral648807C9AFAA4DC700F1A2E0A031F9B6E5C6C0A9;
IL2CPP_EXTERN_C String_t* _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
IL2CPP_EXTERN_C String_t* _stringLiteral679D068D573133B9C7C465FC6CF9C9D07B531421;
IL2CPP_EXTERN_C String_t* _stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7;
IL2CPP_EXTERN_C String_t* _stringLiteral6A7C5B87AC840B649D5115CC2F065246EA1D14D2;
IL2CPP_EXTERN_C String_t* _stringLiteral6DDB7124DD049ECC81E9566485C5E72BD4A5B629;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9;
IL2CPP_EXTERN_C String_t* _stringLiteral6F0D5464DBDBB4D3360D072E96CE6F7573367007;
IL2CPP_EXTERN_C String_t* _stringLiteral6F531D091DEFD1AFE9482485551BED2FDAAA1A44;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral70D5BB232EC081D1665068C82CAC02B7BD9D4AAC;
IL2CPP_EXTERN_C String_t* _stringLiteral719C192C1C3B2B4A487A435DDE8EF62875B7EF52;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral72E4F2B36711053075F32D5A30CB39489E24F830;
IL2CPP_EXTERN_C String_t* _stringLiteral766E767D6A87AB03C7C3410F3665A93D03D6E9FA;
IL2CPP_EXTERN_C String_t* _stringLiteral7718D23232976A2B9CBCCE921B3BCD20392535CF;
IL2CPP_EXTERN_C String_t* _stringLiteral77A794A3BD42C8446401628093B7C7F1991DE865;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral804129BB0631EBA493C328765F1CF46B92854032;
IL2CPP_EXTERN_C String_t* _stringLiteral81506726C1AADD27FB26AE31CD77DB9EA916856A;
IL2CPP_EXTERN_C String_t* _stringLiteral83882E2E410B213AB2B2289E29DC55945FAD39F3;
IL2CPP_EXTERN_C String_t* _stringLiteral84F24DDFFD923E799FF50094D4A45E06FCF3753A;
IL2CPP_EXTERN_C String_t* _stringLiteral874E099F75FBE3190ABC93B8FA178199B0B90974;
IL2CPP_EXTERN_C String_t* _stringLiteral885E8075B193A06A546B761A4EB4705D41E77106;
IL2CPP_EXTERN_C String_t* _stringLiteral88C0741C046A3B080EFCD0A132406297FA25ED5C;
IL2CPP_EXTERN_C String_t* _stringLiteral89337E2EE35A3C198227FBA81922CE5F0C58D97F;
IL2CPP_EXTERN_C String_t* _stringLiteral8940E1FEA4EBF3CA20C44768AA93531C62B71B4A;
IL2CPP_EXTERN_C String_t* _stringLiteral8C1D304CED4C13075109A2D82DE6D8D24A9E3678;
IL2CPP_EXTERN_C String_t* _stringLiteral8C8269EFD7538FD0CB6E23BB80F827735CBE3148;
IL2CPP_EXTERN_C String_t* _stringLiteral8D577D09BE6675913B8BA73F6748E9853949790C;
IL2CPP_EXTERN_C String_t* _stringLiteral8EE09E18A37456CE351D2274725035E79FB3A519;
IL2CPP_EXTERN_C String_t* _stringLiteral8F3CE5B6F467C0748FD627C8CC7C35EB7B3715DE;
IL2CPP_EXTERN_C String_t* _stringLiteral8F674C823C816397FA5C45C038EC80F76BA8C3D1;
IL2CPP_EXTERN_C String_t* _stringLiteral8FD455660DEE28F6E1129CB741768AE1B879D49E;
IL2CPP_EXTERN_C String_t* _stringLiteral914D3FE4311E3B45D1C2C253676F4D06BE86BB4B;
IL2CPP_EXTERN_C String_t* _stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89;
IL2CPP_EXTERN_C String_t* _stringLiteral934962903D946CC131DF8E5E4E575453098EEF43;
IL2CPP_EXTERN_C String_t* _stringLiteral9AD0BAB2813AC84F1BA06E134DA49490A035C21E;
IL2CPP_EXTERN_C String_t* _stringLiteral9AEFD24EDA1559C9608DD3DFE1E1D00B790FCC10;
IL2CPP_EXTERN_C String_t* _stringLiteral9C48C24D4BF1ED95579220DFFA96B8E7E7AB87E0;
IL2CPP_EXTERN_C String_t* _stringLiteral9DD326A397A61E2FA04A8660D57EECB4F6400FF6;
IL2CPP_EXTERN_C String_t* _stringLiteralA041A903507FD76791B65E77B8DA1BF219158F7D;
IL2CPP_EXTERN_C String_t* _stringLiteralA57ABA1EBF0C3B34327C1BC77E11EA636CE5879E;
IL2CPP_EXTERN_C String_t* _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D;
IL2CPP_EXTERN_C String_t* _stringLiteralAA489EA826FC32F62BC08789E6EF6725A45BE807;
IL2CPP_EXTERN_C String_t* _stringLiteralABD1F3A40B040F4DAF19DEC8A0694EE1E093DE0B;
IL2CPP_EXTERN_C String_t* _stringLiteralAC8C96BFB2E5E8C8C23A5718E0F889B19931ED0E;
IL2CPP_EXTERN_C String_t* _stringLiteralAD522BF64F2D257409CB3BAC45086A2EA0B03C59;
IL2CPP_EXTERN_C String_t* _stringLiteralADB77DF075FAD2AAB1D976DE56FF0F5A0EF9FFF3;
IL2CPP_EXTERN_C String_t* _stringLiteralADF66A5CAF0DAD0B4EF8357CA4EB944F4D295FC2;
IL2CPP_EXTERN_C String_t* _stringLiteralB1868FA5803D4E948C556DEC84B3C733E6C6863C;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E01E5F06900F85A4610CB4BA177EBBE0318DA7;
IL2CPP_EXTERN_C String_t* _stringLiteralB71AC761E41F3E0C3BB177881103E0B2E4C41D9A;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB7DFAA77B73CFAF0D1250B876AC6883BB7B935F5;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E4FF0CFA5BFA9C6B5D1B00E29E0E6FD0696C9E;
IL2CPP_EXTERN_C String_t* _stringLiteralB9ED63726B3792A912D1DF4A5E4AEFDA0C6D02C9;
IL2CPP_EXTERN_C String_t* _stringLiteralBB78E0E46D9D9C28C85E1A7396B963FAB27BEEDB;
IL2CPP_EXTERN_C String_t* _stringLiteralBB95AED94347EEEE80FE2B58CC6819F8D88029C9;
IL2CPP_EXTERN_C String_t* _stringLiteralBCF454DB7FDBF0F41B3976B9C899E796D9F98460;
IL2CPP_EXTERN_C String_t* _stringLiteralBDFC6A686A02CB9B5949933296CF184A7F479267;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E;
IL2CPP_EXTERN_C String_t* _stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110;
IL2CPP_EXTERN_C String_t* _stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB;
IL2CPP_EXTERN_C String_t* _stringLiteralC3747F188640B86840534DC4DA86767C8D0029B1;
IL2CPP_EXTERN_C String_t* _stringLiteralC3EC0475D7BECB6F89847EE0E364B00D04507118;
IL2CPP_EXTERN_C String_t* _stringLiteralC49E78F79864500BC68069A2B0CA759020CF9ECE;
IL2CPP_EXTERN_C String_t* _stringLiteralC70F7519ACB4603C5746F4CE45DFF6C80BB7D971;
IL2CPP_EXTERN_C String_t* _stringLiteralC8372A5805DAD56DC02FB5A1D6C8824A7A916847;
IL2CPP_EXTERN_C String_t* _stringLiteralC94CA552630B8AC1ADF21BAF5252FC9092E4DDDC;
IL2CPP_EXTERN_C String_t* _stringLiteralCB2070BB5AC5DA50197474C74B7EA4D7BDEEBCB1;
IL2CPP_EXTERN_C String_t* _stringLiteralCE5DCE56D7A802E4581ED7F382622661E6A249BF;
IL2CPP_EXTERN_C String_t* _stringLiteralCEBC2707039661BD61D98F991B27F2B9CB160373;
IL2CPP_EXTERN_C String_t* _stringLiteralD03C3C7F3A363D2E45775B1A6E39D7D5E5BEA998;
IL2CPP_EXTERN_C String_t* _stringLiteralD525221FF38EAF1A30491622A0B39D5D960A7815;
IL2CPP_EXTERN_C String_t* _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA76693A9FA64254ABB2B353861DCD8EECC2E6B7;
IL2CPP_EXTERN_C String_t* _stringLiteralDB2D19A54B5DA10084F30BE52A1FE0F177622877;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralDB7748CA02D89CC8A0CA84CAE21A855DC0CD3281;
IL2CPP_EXTERN_C String_t* _stringLiteralDEF7342DCBF4F4F80F2C4D42F5991B8E851510BD;
IL2CPP_EXTERN_C String_t* _stringLiteralDFC500CF01D877A89AA3F6E3447F79A733BA63FF;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A;
IL2CPP_EXTERN_C String_t* _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralE5B7FB5BFBF1CF60857A40FCA10F830CC619AE16;
IL2CPP_EXTERN_C String_t* _stringLiteralE6461C88E6E5AFFAFB9C249C60DF48229221FCB4;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralE747075778EF804DB84BC324AFA920E00E86E082;
IL2CPP_EXTERN_C String_t* _stringLiteralE78B6B62D5E0894D83F62883AF16E1CFB8FC97BA;
IL2CPP_EXTERN_C String_t* _stringLiteralE87B562747A4E5118BE8446CC537D2F2CE52C5B7;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F;
IL2CPP_EXTERN_C String_t* _stringLiteralECC5FBBC8E0BED3B8718D6E2160AD386C9CEC212;
IL2CPP_EXTERN_C String_t* _stringLiteralECE7ACD2EBE43C9753D823F423714DB870E2FDC2;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralEFB72B9C996165F992B066EF15E829613D1056E3;
IL2CPP_EXTERN_C String_t* _stringLiteralF03448350C4EA24B8AA2B12DF7EF5312ECEECABB;
IL2CPP_EXTERN_C String_t* _stringLiteralF1207C821260E28631ECF6A4CCD7D175996DFB07;
IL2CPP_EXTERN_C String_t* _stringLiteralF156EE44F6A6B6D0E50C63B2A59018613A572921;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF49AECB5A7A9C87D4D672BA9D06F6929E0895580;
IL2CPP_EXTERN_C String_t* _stringLiteralF4E35F8C3B4DEB7662034D2DB84C95826A9E9496;
IL2CPP_EXTERN_C String_t* _stringLiteralF562554B3C0A160466BC4548319594F6F8AA61D0;
IL2CPP_EXTERN_C String_t* _stringLiteralF56887477425485B59C9C4926D0FEFC2946FA21E;
IL2CPP_EXTERN_C String_t* _stringLiteralF7219490E429E49E881EE2EFE4876A818537C3BA;
IL2CPP_EXTERN_C String_t* _stringLiteralF9CB9033B310B547B765ABF98EBCDDA468AFC4C9;
IL2CPP_EXTERN_C String_t* _stringLiteralFA64C5198DA424A59029D35F5A20C1CE27C16070;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C String_t* _stringLiteralFF88144D408B0CD04F7C405D1AD03B17DD5A833C;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayComparer_IsEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA5B793CAAEB81083356BF4057927F00B9D1E15F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m75FC00D2F6ABDA5C100FA4B917AA53D08679FA95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m6DE9BA94E7CF48DB003DE6B65FB5735135F038ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8A0F4C439E7AC9920D1029A4451254E0BFE84BD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0D6AF51604387B1A70281C32E5EDCDFBE9690750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC29426C7B2D46F9D186DCFD63670F9BAAE27E7CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC375013ACDAF624A1A1696998392F997941955E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m275C153933BEFF417D72F1BD5976E41A77DE23B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mF1252BCF050DC219DD15708981003D78C939E8BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5410959B3853773CB80C8493BFED492001168F23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFF3070F83F68FD0F10EA9D1EF3A53CCEE56B712B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberCore_GenerateDocComment_m9C36B8482271EA12F1CD2172FC2443AB1DA7801F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemberCore_IsAccessibleAs_m64DABDFA801EA789D239E68FDFE5FC675883EAA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m68EAE72219A7C7459E95260B09AB9EAD32F6B27F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m942017CBF9A74BAF54E0BAC2CBC3FA73F6234625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m024670CA23B430BF35DADCA63F4DF6B1778973BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m5B1B55EFA9D3F8469BCA9EE43F791B1B7375483F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_ToArray_m66CF092BE9D2A70AA67FD5F4BC2CA8A84088B5A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_ToArray_m890D1E5AC644DF0BFAF349445E0CB6FA648847E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m141F1BE46354DA6AD95BD4791941D8BB59594DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m1AEB6531CEC8C8917D39FB69EE344DF5F72045FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m214909CE46866ED73425C022CB87D3E96E110ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m5B2060AFE570B469BD60AB99341BE39E6448D191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m6EC8F6DFB03F48090B2768C311A6491293620005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mFD7C58157E038255E7D2C956BEC020F4835682CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tokenizer_AddKeyword_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3873DA659F0BC6D9FEE30AD9E0F3992A3A5A5DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tokenizer_AddKeyword_TisPreprocessorDirective_tAA081647C985CC6EE717A9564276EDFCA2911534_m2542978B773A6B2D5BD81C07CBA1B9561277533D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tokenizer_ParsePreprocessingDirective_m073C87279D8824C4985AE99E6AB3693BA9D2B37C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tokenizer_TokenizeBackslash_m77AFC13C8F2AF1D856AC1A48241B8158F9ED090C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tokenizer_TokenizeNumber_mAFCAB3E79394CE9F24E9F6B773B00101D59017DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tokenizer_putback_m217554D6533CE31AF351F557DAD16E75D64E414D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Dictionary_2U5BU5D_tB3D5B174D6C376DBA5BB7B48C3F60DBABD0D2F46;
struct KeywordEntry_1U5BU5D_tCB7E1065670548912647EED29D7FCDD320EFB205;
struct KeywordEntry_1U5BU5D_tCD7EC0B45DFBAE2FE37133CF321C0D3B059F0BB9;
struct KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19;
struct KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF;
struct LocationU5BU5D_t195DF0270FB27D79826996D4A5F1780C89F3E7B3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Char[],System.String>
struct Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE73EFFA22C5F1A33EFA057E4308BD01A9A2B04B0* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t34069A3E6F84E0841BD270BD83509913D6A5004D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t23F26A4CF9C450A52DA3998031BB74EBB767EF52* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// Mono.CSharp.Tokenizer/KeywordEntry`1<System.Int32>
struct KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE  : public RuntimeObject
{
	// T Mono.CSharp.Tokenizer/KeywordEntry`1::Token
	int32_t ___Token_0;
	// Mono.CSharp.Tokenizer/KeywordEntry`1<T> Mono.CSharp.Tokenizer/KeywordEntry`1::Next
	KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* ___Next_1;
	// System.Char[] Mono.CSharp.Tokenizer/KeywordEntry`1::Value
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Value_2;
};

// Mono.CSharp.Tokenizer/KeywordEntry`1<Mono.CSharp.Tokenizer/PreprocessorDirective>
struct KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794  : public RuntimeObject
{
	// T Mono.CSharp.Tokenizer/KeywordEntry`1::Token
	int32_t ___Token_0;
	// Mono.CSharp.Tokenizer/KeywordEntry`1<T> Mono.CSharp.Tokenizer/KeywordEntry`1::Next
	KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* ___Next_1;
	// System.Char[] Mono.CSharp.Tokenizer/KeywordEntry`1::Value
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Value_2;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mono.CSharp.Constraints>
struct List_1_t0C642221C357C8B5718460C8EDE0F0D900B11E0A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ConstraintsU5BU5D_tA4A5C652E31A54B2B32307DE93EE3D57CA45C5F6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0C642221C357C8B5718460C8EDE0F0D900B11E0A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ConstraintsU5BU5D_tA4A5C652E31A54B2B32307DE93EE3D57CA45C5F6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mono.CSharp.Location>
struct List_1_t124684566062F37FF59D2D03C2F0187ADEA53771  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LocationU5BU5D_t195DF0270FB27D79826996D4A5F1780C89F3E7B3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t124684566062F37FF59D2D03C2F0187ADEA53771_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LocationU5BU5D_t195DF0270FB27D79826996D4A5F1780C89F3E7B3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mono.CSharp.MissingTypeSpecReference>
struct List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MissingTypeSpecReferenceU5BU5D_t6A9AE9B2831F95432158DBC075B6D0152FB784E6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MissingTypeSpecReferenceU5BU5D_t6A9AE9B2831F95432158DBC075B6D0152FB784E6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<System.Boolean>
struct Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<Mono.CSharp.Tokenizer/Position>
struct Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	PositionU5BU5D_t5BA4B3782FF752A1FC46CDEA074468B5C021538A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};
struct Il2CppArrayBounds;

// Mono.CSharp.AssemblyDefinition
struct AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4  : public RuntimeObject
{
	// System.Reflection.Emit.AssemblyBuilder Mono.CSharp.AssemblyDefinition::Builder
	AssemblyBuilder_t87D45090370084F95DC55357D97AC3FBD578220A* ___Builder_0;
	// Mono.CSharp.AssemblyBuilderExtension Mono.CSharp.AssemblyDefinition::builder_extra
	AssemblyBuilderExtension_t88420E7A035438AE4A5F3936077CEF16BB49E0E0* ___builder_extra_1;
	// Mono.CompilerServices.SymbolWriter.MonoSymbolFile Mono.CSharp.AssemblyDefinition::symbol_writer
	MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___symbol_writer_2;
	// System.Boolean Mono.CSharp.AssemblyDefinition::is_cls_compliant
	bool ___is_cls_compliant_3;
	// System.Boolean Mono.CSharp.AssemblyDefinition::wrap_non_exception_throws
	bool ___wrap_non_exception_throws_4;
	// System.Boolean Mono.CSharp.AssemblyDefinition::wrap_non_exception_throws_custom
	bool ___wrap_non_exception_throws_custom_5;
	// System.Boolean Mono.CSharp.AssemblyDefinition::has_user_debuggable
	bool ___has_user_debuggable_6;
	// Mono.CSharp.ModuleContainer Mono.CSharp.AssemblyDefinition::module
	ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* ___module_7;
	// System.String Mono.CSharp.AssemblyDefinition::name
	String_t* ___name_8;
	// System.String Mono.CSharp.AssemblyDefinition::file_name
	String_t* ___file_name_9;
	// System.Byte[] Mono.CSharp.AssemblyDefinition::public_key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___public_key_10;
	// System.Byte[] Mono.CSharp.AssemblyDefinition::public_key_token
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___public_key_token_11;
	// System.Boolean Mono.CSharp.AssemblyDefinition::delay_sign
	bool ___delay_sign_12;
	// System.Reflection.StrongNameKeyPair Mono.CSharp.AssemblyDefinition::private_key
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___private_key_13;
	// Mono.CSharp.Attribute Mono.CSharp.AssemblyDefinition::cls_attribute
	Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* ___cls_attribute_14;
	// Mono.CSharp.Method Mono.CSharp.AssemblyDefinition::entry_point
	Method_tE7D3135874028C57754EF0F469B99CD86C68EC6A* ___entry_point_15;
	// System.Collections.Generic.List`1<Mono.CSharp.ImportedModuleDefinition> Mono.CSharp.AssemblyDefinition::added_modules
	List_1_tB1541D8D39E844557376BB835945383011B8AB14* ___added_modules_16;
	// System.Collections.Generic.Dictionary`2<System.Security.Permissions.SecurityAction,System.Security.PermissionSet> Mono.CSharp.AssemblyDefinition::declarative_security
	Dictionary_2_tBE4D4B305852DFEADD92059FE44C53D94EE9BD38* ___declarative_security_17;
	// System.Collections.Generic.Dictionary`2<Mono.CSharp.ITypeDefinition,Mono.CSharp.Attribute> Mono.CSharp.AssemblyDefinition::emitted_forwarders
	Dictionary_2_t9C818E73EAC0EF8CCB9BC8158F52B6F4B5CE7CE4* ___emitted_forwarders_18;
	// Mono.CSharp.AssemblyAttributesPlaceholder Mono.CSharp.AssemblyDefinition::module_target_attrs
	AssemblyAttributesPlaceholder_t0AAC165F7CFEB2652D6F5E8B408FBCADB037A582* ___module_target_attrs_19;
	// System.String Mono.CSharp.AssemblyDefinition::vi_product
	String_t* ___vi_product_20;
	// System.String Mono.CSharp.AssemblyDefinition::vi_product_version
	String_t* ___vi_product_version_21;
	// System.String Mono.CSharp.AssemblyDefinition::vi_company
	String_t* ___vi_company_22;
	// System.String Mono.CSharp.AssemblyDefinition::vi_copyright
	String_t* ___vi_copyright_23;
	// System.String Mono.CSharp.AssemblyDefinition::vi_trademark
	String_t* ___vi_trademark_24;
	// Mono.CSharp.MetadataImporter Mono.CSharp.AssemblyDefinition::<Importer>k__BackingField
	MetadataImporter_tBE2149190CC515F27D35524428DE9B4B8082DD8A* ___U3CImporterU3Ek__BackingField_25;
	// System.Boolean Mono.CSharp.AssemblyDefinition::<IsSatelliteAssembly>k__BackingField
	bool ___U3CIsSatelliteAssemblyU3Ek__BackingField_26;
};

// Mono.CSharp.Attributable
struct Attributable_t85D0C16B87884F896200C7B379A7026B7317E9CC  : public RuntimeObject
{
	// Mono.CSharp.Attributes Mono.CSharp.Attributable::attributes
	Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* ___attributes_0;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Mono.CSharp.Attributes
struct Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Mono.CSharp.Attribute> Mono.CSharp.Attributes::Attrs
	List_1_t76368EC744C2B43055BB6741A6B55B8A42E3559A* ___Attrs_0;
};

// Mono.CSharp.BuiltinTypes
struct BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B  : public RuntimeObject
{
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Object
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Object_0;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::ValueType
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___ValueType_1;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Attribute
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Attribute_2;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Int
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Int_3;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::UInt
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___UInt_4;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Long
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Long_5;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::ULong
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___ULong_6;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Float
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Float_7;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Double
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Double_8;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Char
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Char_9;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Short
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Short_10;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Decimal
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Decimal_11;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Bool
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Bool_12;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::SByte
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___SByte_13;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Byte
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Byte_14;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::UShort
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___UShort_15;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::String
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___String_16;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Enum
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Enum_17;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Delegate
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Delegate_18;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::MulticastDelegate
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___MulticastDelegate_19;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Void
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Void_20;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Array
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Array_21;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Type
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Type_22;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::IEnumerator
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___IEnumerator_23;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::IEnumerable
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___IEnumerable_24;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::IDisposable
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___IDisposable_25;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::IntPtr
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___IntPtr_26;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::UIntPtr
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___UIntPtr_27;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::RuntimeFieldHandle
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___RuntimeFieldHandle_28;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::RuntimeTypeHandle
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___RuntimeTypeHandle_29;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Exception
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Exception_30;
	// Mono.CSharp.BuiltinTypeSpec Mono.CSharp.BuiltinTypes::Dynamic
	BuiltinTypeSpec_t94EFDE2F1A54579F6BF45AAA14C559ADB696D198* ___Dynamic_31;
	// Mono.CSharp.Binary/PredefinedOperator[] Mono.CSharp.BuiltinTypes::OperatorsBinaryStandard
	PredefinedOperatorU5BU5D_t4D23A813935839B4C5A1615203E853CFC15A7244* ___OperatorsBinaryStandard_32;
	// Mono.CSharp.Binary/PredefinedOperator[] Mono.CSharp.BuiltinTypes::OperatorsBinaryEquality
	PredefinedOperatorU5BU5D_t4D23A813935839B4C5A1615203E853CFC15A7244* ___OperatorsBinaryEquality_33;
	// Mono.CSharp.Binary/PredefinedOperator[] Mono.CSharp.BuiltinTypes::OperatorsBinaryUnsafe
	PredefinedOperatorU5BU5D_t4D23A813935839B4C5A1615203E853CFC15A7244* ___OperatorsBinaryUnsafe_34;
	// Mono.CSharp.TypeSpec[][] Mono.CSharp.BuiltinTypes::OperatorsUnary
	TypeSpecU5BU5DU5BU5D_tA15D48E66CEC8E2215C85C6FB1BE5C5DB1DA816E* ___OperatorsUnary_35;
	// Mono.CSharp.TypeSpec[] Mono.CSharp.BuiltinTypes::OperatorsUnaryMutator
	TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* ___OperatorsUnaryMutator_36;
	// Mono.CSharp.TypeSpec[] Mono.CSharp.BuiltinTypes::BinaryPromotionsTypes
	TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* ___BinaryPromotionsTypes_37;
	// Mono.CSharp.BuiltinTypeSpec[] Mono.CSharp.BuiltinTypes::types
	BuiltinTypeSpecU5BU5D_t5CA69C3EB4913253599C11A54CCAC0AD965DC337* ___types_38;
};

// Mono.CSharp.CompilerContext
struct CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2  : public RuntimeObject
{
	// Mono.CSharp.Report Mono.CSharp.CompilerContext::report
	Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* ___report_1;
	// Mono.CSharp.BuiltinTypes Mono.CSharp.CompilerContext::builtin_types
	BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* ___builtin_types_2;
	// Mono.CSharp.CompilerSettings Mono.CSharp.CompilerContext::settings
	CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* ___settings_3;
	// System.Collections.Generic.Dictionary`2<System.String,Mono.CSharp.SourceFile> Mono.CSharp.CompilerContext::all_source_files
	Dictionary_2_tF982AB22796D1AEB2BD151B32F44F56C962E8992* ___all_source_files_4;
	// System.Boolean Mono.CSharp.CompilerContext::<IsRuntimeBinder>k__BackingField
	bool ___U3CIsRuntimeBinderU3Ek__BackingField_5;
	// Mono.CSharp.TimeReporter Mono.CSharp.CompilerContext::<TimeReporter>k__BackingField
	TimeReporter_t1059732734CB0BA004363785410DBA2FC8C69247* ___U3CTimeReporterU3Ek__BackingField_6;
};

struct CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2_StaticFields
{
	// Mono.CSharp.TimeReporter Mono.CSharp.CompilerContext::DisabledTimeReporter
	TimeReporter_t1059732734CB0BA004363785410DBA2FC8C69247* ___DisabledTimeReporter_0;
};

// Mono.CSharp.CompilerSettings
struct CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716  : public RuntimeObject
{
	// Mono.CSharp.Target Mono.CSharp.CompilerSettings::Target
	int32_t ___Target_0;
	// Mono.CSharp.Platform Mono.CSharp.CompilerSettings::Platform
	int32_t ___Platform_1;
	// System.String Mono.CSharp.CompilerSettings::TargetExt
	String_t* ___TargetExt_2;
	// System.Boolean Mono.CSharp.CompilerSettings::VerifyClsCompliance
	bool ___VerifyClsCompliance_3;
	// System.Boolean Mono.CSharp.CompilerSettings::Optimize
	bool ___Optimize_4;
	// Mono.CSharp.LanguageVersion Mono.CSharp.CompilerSettings::Version
	int32_t ___Version_5;
	// System.Boolean Mono.CSharp.CompilerSettings::EnhancedWarnings
	bool ___EnhancedWarnings_6;
	// System.Boolean Mono.CSharp.CompilerSettings::LoadDefaultReferences
	bool ___LoadDefaultReferences_7;
	// System.String Mono.CSharp.CompilerSettings::SdkVersion
	String_t* ___SdkVersion_8;
	// System.String Mono.CSharp.CompilerSettings::StrongNameKeyFile
	String_t* ___StrongNameKeyFile_9;
	// System.String Mono.CSharp.CompilerSettings::StrongNameKeyContainer
	String_t* ___StrongNameKeyContainer_10;
	// System.Boolean Mono.CSharp.CompilerSettings::StrongNameDelaySign
	bool ___StrongNameDelaySign_11;
	// System.Int32 Mono.CSharp.CompilerSettings::TabSize
	int32_t ___TabSize_12;
	// System.Boolean Mono.CSharp.CompilerSettings::WarningsAreErrors
	bool ___WarningsAreErrors_13;
	// System.Int32 Mono.CSharp.CompilerSettings::WarningLevel
	int32_t ___WarningLevel_14;
	// System.Collections.Generic.List`1<System.String> Mono.CSharp.CompilerSettings::AssemblyReferences
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___AssemblyReferences_15;
	// System.Collections.Generic.List`1<Mono.CSharp.Tuple`2<System.String,System.String>> Mono.CSharp.CompilerSettings::AssemblyReferencesAliases
	List_1_t50B74CFD57A0635D906E03F8625EAD5FF7568557* ___AssemblyReferencesAliases_16;
	// System.Collections.Generic.List`1<System.String> Mono.CSharp.CompilerSettings::Modules
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Modules_17;
	// System.Collections.Generic.List`1<System.String> Mono.CSharp.CompilerSettings::ReferencesLookupPaths
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ReferencesLookupPaths_18;
	// System.Text.Encoding Mono.CSharp.CompilerSettings::Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___Encoding_19;
	// System.String Mono.CSharp.CompilerSettings::DocumentationFile
	String_t* ___DocumentationFile_20;
	// System.String Mono.CSharp.CompilerSettings::MainClass
	String_t* ___MainClass_21;
	// System.String Mono.CSharp.CompilerSettings::OutputFile
	String_t* ___OutputFile_22;
	// System.Boolean Mono.CSharp.CompilerSettings::Checked
	bool ___Checked_23;
	// System.Boolean Mono.CSharp.CompilerSettings::StatementMode
	bool ___StatementMode_24;
	// System.Boolean Mono.CSharp.CompilerSettings::Unsafe
	bool ___Unsafe_25;
	// System.String Mono.CSharp.CompilerSettings::Win32ResourceFile
	String_t* ___Win32ResourceFile_26;
	// System.String Mono.CSharp.CompilerSettings::Win32IconFile
	String_t* ___Win32IconFile_27;
	// System.Collections.Generic.List`1<Mono.CSharp.AssemblyResource> Mono.CSharp.CompilerSettings::Resources
	List_1_t1F48D4DE5E778576CCC784710923E86DF3064F1A* ___Resources_28;
	// System.Boolean Mono.CSharp.CompilerSettings::GenerateDebugInfo
	bool ___GenerateDebugInfo_29;
	// System.Boolean Mono.CSharp.CompilerSettings::ParseOnly
	bool ___ParseOnly_30;
	// System.Boolean Mono.CSharp.CompilerSettings::TokenizeOnly
	bool ___TokenizeOnly_31;
	// System.Boolean Mono.CSharp.CompilerSettings::Timestamps
	bool ___Timestamps_32;
	// System.Int32 Mono.CSharp.CompilerSettings::DebugFlags
	int32_t ___DebugFlags_33;
	// System.Int32 Mono.CSharp.CompilerSettings::VerboseParserFlag
	int32_t ___VerboseParserFlag_34;
	// System.Int32 Mono.CSharp.CompilerSettings::FatalCounter
	int32_t ___FatalCounter_35;
	// System.Boolean Mono.CSharp.CompilerSettings::Stacktrace
	bool ___Stacktrace_36;
	// System.Boolean Mono.CSharp.CompilerSettings::BreakOnInternalError
	bool ___BreakOnInternalError_37;
	// System.Collections.Generic.List`1<System.String> Mono.CSharp.CompilerSettings::GetResourceStrings
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___GetResourceStrings_38;
	// System.Boolean Mono.CSharp.CompilerSettings::ShowFullPaths
	bool ___ShowFullPaths_39;
	// System.Boolean Mono.CSharp.CompilerSettings::StdLib
	bool ___StdLib_40;
	// Mono.CSharp.RuntimeVersion Mono.CSharp.CompilerSettings::StdLibRuntimeVersion
	int32_t ___StdLibRuntimeVersion_41;
	// System.String Mono.CSharp.CompilerSettings::RuntimeMetadataVersion
	String_t* ___RuntimeMetadataVersion_42;
	// System.Boolean Mono.CSharp.CompilerSettings::WriteMetadataOnly
	bool ___WriteMetadataOnly_43;
	// System.Collections.Generic.List`1<System.String> Mono.CSharp.CompilerSettings::conditional_symbols
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___conditional_symbols_44;
	// System.Collections.Generic.List`1<Mono.CSharp.SourceFile> Mono.CSharp.CompilerSettings::source_files
	List_1_tE25B395EA25FA32FC05543838706BC98401701AB* ___source_files_45;
	// System.Collections.Generic.List`1<System.Int32> Mono.CSharp.CompilerSettings::warnings_as_error
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___warnings_as_error_46;
	// System.Collections.Generic.List`1<System.Int32> Mono.CSharp.CompilerSettings::warnings_only
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___warnings_only_47;
	// System.Collections.Generic.HashSet`1<System.Int32> Mono.CSharp.CompilerSettings::warning_ignore_table
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___warning_ignore_table_48;
};

// Mono.CSharp.ExtensionMethodCandidates
struct ExtensionMethodCandidates_tA706B1A3BEC91D949C963B4789B32FBECA178E89  : public RuntimeObject
{
	// Mono.CSharp.NamespaceContainer Mono.CSharp.ExtensionMethodCandidates::container
	NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767* ___container_0;
	// System.Collections.Generic.IList`1<Mono.CSharp.MethodSpec> Mono.CSharp.ExtensionMethodCandidates::methods
	RuntimeObject* ___methods_1;
	// System.Int32 Mono.CSharp.ExtensionMethodCandidates::index
	int32_t ___index_2;
	// Mono.CSharp.IMemberContext Mono.CSharp.ExtensionMethodCandidates::context
	RuntimeObject* ___context_3;
};

// Mono.CSharp.ImportedDefinition
struct ImportedDefinition_t3FA5B456C5B7F121CEE1BF9799987E21B3E5941C  : public RuntimeObject
{
	// System.Reflection.MemberInfo Mono.CSharp.ImportedDefinition::provider
	MemberInfo_t* ___provider_0;
	// Mono.CSharp.ImportedDefinition/AttributesBag Mono.CSharp.ImportedDefinition::cattrs
	AttributesBag_t9AD498844B15459661D466B99C39D7D27AEDD993* ___cattrs_1;
	// Mono.CSharp.MetadataImporter Mono.CSharp.ImportedDefinition::importer
	MetadataImporter_tBE2149190CC515F27D35524428DE9B4B8082DD8A* ___importer_2;
};

// Mono.CSharp.LocatedToken
struct LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5  : public RuntimeObject
{
	// System.Int32 Mono.CSharp.LocatedToken::row
	int32_t ___row_0;
	// System.Int32 Mono.CSharp.LocatedToken::column
	int32_t ___column_1;
	// System.String Mono.CSharp.LocatedToken::value
	String_t* ___value_2;
	// Mono.CSharp.SourceFile Mono.CSharp.LocatedToken::file
	SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* ___file_3;
};

// Mono.CSharp.MemberSpec
struct MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8  : public RuntimeObject
{
	// Mono.CSharp.Modifiers Mono.CSharp.MemberSpec::modifiers
	int32_t ___modifiers_1;
	// Mono.CSharp.MemberSpec/StateFlags Mono.CSharp.MemberSpec::state
	int32_t ___state_2;
	// Mono.CSharp.IMemberDefinition Mono.CSharp.MemberSpec::definition
	RuntimeObject* ___definition_3;
	// Mono.CSharp.MemberKind Mono.CSharp.MemberSpec::Kind
	int32_t ___Kind_4;
	// Mono.CSharp.TypeSpec Mono.CSharp.MemberSpec::declaringType
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___declaringType_5;
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// Mono.CSharp.ParserSession
struct ParserSession_tE9F339A49DFCF899A338AE7D39CA9BAF6988447E  : public RuntimeObject
{
	// System.Security.Cryptography.MD5 Mono.CSharp.ParserSession::md5
	MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* ___md5_0;
	// System.Char[] Mono.CSharp.ParserSession::StreamReaderBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___StreamReaderBuffer_1;
	// System.Collections.Generic.Dictionary`2<System.Char[],System.String>[] Mono.CSharp.ParserSession::Identifiers
	Dictionary_2U5BU5D_tB3D5B174D6C376DBA5BB7B48C3F60DBABD0D2F46* ___Identifiers_2;
	// System.Collections.Generic.List`1<Mono.CSharp.Parameter> Mono.CSharp.ParserSession::ParametersStack
	List_1_t6A6402B13DD48FEB1D96E2820FA5180990F1AADB* ___ParametersStack_3;
	// System.Char[] Mono.CSharp.ParserSession::IDBuilder
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___IDBuilder_4;
	// System.Char[] Mono.CSharp.ParserSession::NumberBuilder
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___NumberBuilder_5;
	// Mono.CSharp.LocationsBag Mono.CSharp.ParserSession::<LocationsBag>k__BackingField
	LocationsBag_t6488E8A26C8A41EFF904EF1AC8B4C93AABC7CF03* ___U3CLocationsBagU3Ek__BackingField_6;
	// System.Boolean Mono.CSharp.ParserSession::<UseJayGlobalArrays>k__BackingField
	bool ___U3CUseJayGlobalArraysU3Ek__BackingField_7;
	// Mono.CSharp.LocatedToken[] Mono.CSharp.ParserSession::<LocatedTokens>k__BackingField
	LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* ___U3CLocatedTokensU3Ek__BackingField_8;
};

// Mono.CSharp.PredefinedAttributes
struct PredefinedAttributes_t57CF082A2D3A84BDE14293D534774A98E3C51A3D  : public RuntimeObject
{
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::ParamArray
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___ParamArray_0;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::Out
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___Out_1;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::Obsolete
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___Obsolete_2;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::DllImport
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___DllImport_3;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::MethodImpl
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___MethodImpl_4;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::MarshalAs
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___MarshalAs_5;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::In
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___In_6;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::IndexerName
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___IndexerName_7;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::Conditional
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___Conditional_8;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::CLSCompliant
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___CLSCompliant_9;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::Security
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___Security_10;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::Required
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___Required_11;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::Guid
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___Guid_12;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::AssemblyCulture
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___AssemblyCulture_13;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::AssemblyVersion
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___AssemblyVersion_14;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::AssemblyAlgorithmId
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___AssemblyAlgorithmId_15;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::AssemblyFlags
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___AssemblyFlags_16;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::AssemblyFileVersion
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___AssemblyFileVersion_17;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::ComImport
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___ComImport_18;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::CoClass
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___CoClass_19;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::AttributeUsage
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___AttributeUsage_20;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::DefaultParameterValue
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___DefaultParameterValue_21;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::OptionalParameter
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___OptionalParameter_22;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::UnverifiableCode
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___UnverifiableCode_23;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::DefaultCharset
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___DefaultCharset_24;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::TypeForwarder
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___TypeForwarder_25;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::FixedBuffer
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___FixedBuffer_26;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::CompilerGenerated
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___CompilerGenerated_27;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::InternalsVisibleTo
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___InternalsVisibleTo_28;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::RuntimeCompatibility
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___RuntimeCompatibility_29;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::DebuggerHidden
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___DebuggerHidden_30;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::UnsafeValueType
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___UnsafeValueType_31;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::UnmanagedFunctionPointer
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___UnmanagedFunctionPointer_32;
	// Mono.CSharp.PredefinedDebuggerBrowsableAttribute Mono.CSharp.PredefinedAttributes::DebuggerBrowsable
	PredefinedDebuggerBrowsableAttribute_t96342004769384AE78E458E7C54C6C7DC5DA70D6* ___DebuggerBrowsable_33;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::DebuggerStepThrough
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___DebuggerStepThrough_34;
	// Mono.CSharp.PredefinedDebuggableAttribute Mono.CSharp.PredefinedAttributes::Debuggable
	PredefinedDebuggableAttribute_t962FD1589B80E728CC5DDCA46ADB5B857B76174D* ___Debuggable_35;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::HostProtection
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___HostProtection_36;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::Extension
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___Extension_37;
	// Mono.CSharp.PredefinedDynamicAttribute Mono.CSharp.PredefinedAttributes::Dynamic
	PredefinedDynamicAttribute_tD8CE881BFB65BD9FAAA0748B1AEACAD7D040F8EA* ___Dynamic_38;
	// Mono.CSharp.PredefinedStateMachineAttribute Mono.CSharp.PredefinedAttributes::AsyncStateMachine
	PredefinedStateMachineAttribute_t2F9C90CD90B0A3BE57719E3FD7B1C872A9DE8F68* ___AsyncStateMachine_39;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::DefaultMember
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___DefaultMember_40;
	// Mono.CSharp.PredefinedDecimalAttribute Mono.CSharp.PredefinedAttributes::DecimalConstant
	PredefinedDecimalAttribute_tF5660F3969386763EAA22119CF25A4280AD86988* ___DecimalConstant_41;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::StructLayout
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___StructLayout_42;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::FieldOffset
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___FieldOffset_43;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::AssemblyProduct
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___AssemblyProduct_44;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::AssemblyCompany
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___AssemblyCompany_45;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::AssemblyCopyright
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___AssemblyCopyright_46;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::AssemblyTrademark
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___AssemblyTrademark_47;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::CallerMemberNameAttribute
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___CallerMemberNameAttribute_48;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::CallerLineNumberAttribute
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___CallerLineNumberAttribute_49;
	// Mono.CSharp.PredefinedAttribute Mono.CSharp.PredefinedAttributes::CallerFilePathAttribute
	PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___CallerFilePathAttribute_50;
};

// Mono.CSharp.PredefinedType
struct PredefinedType_t5DA2A9B7E40FB7142878A510CC2D8E5DE49443DE  : public RuntimeObject
{
	// System.String Mono.CSharp.PredefinedType::name
	String_t* ___name_0;
	// System.String Mono.CSharp.PredefinedType::ns
	String_t* ___ns_1;
	// System.Int32 Mono.CSharp.PredefinedType::arity
	int32_t ___arity_2;
	// Mono.CSharp.MemberKind Mono.CSharp.PredefinedType::kind
	int32_t ___kind_3;
	// Mono.CSharp.ModuleContainer Mono.CSharp.PredefinedType::module
	ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* ___module_4;
	// Mono.CSharp.TypeSpec Mono.CSharp.PredefinedType::type
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___type_5;
	// System.Boolean Mono.CSharp.PredefinedType::defined
	bool ___defined_6;
};

// Mono.CSharp.Report
struct Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CSharp.WarningRegions> Mono.CSharp.Report::warning_regions_table
	Dictionary_2_t038788E5ED93677430C8DB8342FB9559175CFE2D* ___warning_regions_table_1;
	// Mono.CSharp.ReportPrinter Mono.CSharp.Report::printer
	ReportPrinter_t06D9F4C348524BD3CA571A46CC2887C72F58FFEC* ___printer_2;
	// System.Int32 Mono.CSharp.Report::reporting_disabled
	int32_t ___reporting_disabled_3;
	// Mono.CSharp.CompilerSettings Mono.CSharp.Report::settings
	CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* ___settings_4;
	// System.Collections.Generic.List`1<System.String> Mono.CSharp.Report::extra_information
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___extra_information_5;
};

struct Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27_StaticFields
{
	// System.Int32[] Mono.CSharp.Report::AllWarnings
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___AllWarnings_6;
	// System.Collections.Generic.HashSet`1<System.Int32> Mono.CSharp.Report::AllWarningsHashSet
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___AllWarningsHashSet_7;
};

// Mono.CSharp.SeekableStreamReader
struct SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75  : public RuntimeObject
{
	// System.IO.StreamReader Mono.CSharp.SeekableStreamReader::reader
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___reader_1;
	// System.IO.Stream Mono.CSharp.SeekableStreamReader::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_2;
	// System.Char[] Mono.CSharp.SeekableStreamReader::buffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___buffer_3;
	// System.Int32 Mono.CSharp.SeekableStreamReader::read_ahead_length
	int32_t ___read_ahead_length_4;
	// System.Int32 Mono.CSharp.SeekableStreamReader::buffer_start
	int32_t ___buffer_start_5;
	// System.Int32 Mono.CSharp.SeekableStreamReader::char_count
	int32_t ___char_count_6;
	// System.Int32 Mono.CSharp.SeekableStreamReader::pos
	int32_t ___pos_7;
};

// Mono.CSharp.SourceFile
struct SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12  : public RuntimeObject
{
	// System.String Mono.CSharp.SourceFile::Name
	String_t* ___Name_1;
	// System.String Mono.CSharp.SourceFile::<FullPathName>k__BackingField
	String_t* ___U3CFullPathNameU3Ek__BackingField_2;
	// System.Int32 Mono.CSharp.SourceFile::Index
	int32_t ___Index_3;
	// System.Boolean Mono.CSharp.SourceFile::AutoGenerated
	bool ___AutoGenerated_4;
	// Mono.CompilerServices.SymbolWriter.SourceFileEntry Mono.CSharp.SourceFile::file
	SourceFileEntry_tAE8059F2AAB5300BE9F9686F79F7FBDE79024D63* ___file_5;
	// System.Byte[] Mono.CSharp.SourceFile::algGuid
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___algGuid_6;
	// System.Byte[] Mono.CSharp.SourceFile::checksum
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___checksum_7;
	// System.Collections.Generic.List`1<Mono.CSharp.SourceFile/LocationRegion> Mono.CSharp.SourceFile::hidden_lines
	List_1_tA4C0B9FD5DB7CDD926BFF93E2E2C12023DCDD0A8* ___hidden_lines_8;
	// System.Func`1<System.IO.Stream> Mono.CSharp.SourceFile::getStreamIfDynamicFile
	Func_1_t27101E7270E9DB09B04E7CC4B6DF698EA38F86CC* ___getStreamIfDynamicFile_9;
};

struct SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12_StaticFields
{
	// System.Byte[] Mono.CSharp.SourceFile::MD5Algorith
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___MD5Algorith_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Mono.CSharp.StructuralVisitor
struct StructuralVisitor_t67AB9A248269D1BF1711FC0F10C12BEE9F235D3E  : public RuntimeObject
{
};

// Mono.CSharp.Token
struct Token_tAA1F2C0EBC0EBBEA0FEEC4E334E41DC04CECA57B  : public RuntimeObject
{
};

// Mono.CSharp.TypeParameters
struct TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Mono.CSharp.TypeParameter> Mono.CSharp.TypeParameters::names
	List_1_tE140825940FA415795AD27377CE251A2BBF393CC* ___names_0;
	// Mono.CSharp.TypeParameterSpec[] Mono.CSharp.TypeParameters::types
	TypeParameterSpecU5BU5D_t64A1B999288B7F2C67551EDB151FC24CDB86D409* ___types_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Mono.CSharp.WarningRegions
struct WarningRegions_tC187DC7F540F83465E907555DE5E1DF610FB06E3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Mono.CSharp.WarningRegions/PragmaCmd> Mono.CSharp.WarningRegions::regions
	List_1_tE24D956C713B752E2CD669774B2A01D5C1445DED* ___regions_0;
};

// Mono.CSharp.Tokenizer/IdentifiersComparer
struct IdentifiersComparer_t928D506738E14DEF81F7E2384D8AD6ED2D3FA965  : public RuntimeObject
{
	// System.Int32 Mono.CSharp.Tokenizer/IdentifiersComparer::length
	int32_t ___length_0;
};

// Mono.CSharp.Tokenizer/LocatedTokenBuffer
struct LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9  : public RuntimeObject
{
	// Mono.CSharp.LocatedToken[] Mono.CSharp.Tokenizer/LocatedTokenBuffer::buffer
	LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* ___buffer_0;
	// System.Int32 Mono.CSharp.Tokenizer/LocatedTokenBuffer::pos
	int32_t ___pos_1;
};

// System.Collections.Generic.List`1/Enumerator<Mono.CSharp.Constraints>
struct Enumerator_t5B74FAEB3D9A04FF753DA78ACE9E1011E1750FEC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0C642221C357C8B5718460C8EDE0F0D900B11E0A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Runtime.InteropServices.CharSet>
struct Nullable_1_tF1C0E759F0C87D0170A0F5941BE1D089D089DC2A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Mono.CSharp.Operator/OpType>
struct Nullable_1_t20CAA964BC289FA660443DC407C630D16FA167EF 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Mono.CSharp.Location
struct Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F 
{
	// System.Int32 Mono.CSharp.Location::token
	int32_t ___token_0;
};

struct Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_StaticFields
{
	// System.Collections.Generic.List`1<Mono.CSharp.SourceFile> Mono.CSharp.Location::source_list
	List_1_tE25B395EA25FA32FC05543838706BC98401701AB* ___source_list_6;
	// Mono.CSharp.Location/Checkpoint[] Mono.CSharp.Location::checkpoints
	CheckpointU5BU5D_tBDFE98DE1652432651D9224F448A434AA88990F1* ___checkpoints_7;
	// System.Int32 Mono.CSharp.Location::checkpoint_index
	int32_t ___checkpoint_index_8;
	// Mono.CSharp.Location Mono.CSharp.Location::Null
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___Null_9;
	// System.Boolean Mono.CSharp.Location::InEmacs
	bool ___InEmacs_10;
};

// Mono.CSharp.MemberCore
struct MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791  : public Attributable_t85D0C16B87884F896200C7B379A7026B7317E9CC
{
	// Mono.CSharp.MemberName Mono.CSharp.MemberCore::member_name
	MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___member_name_1;
	// Mono.CSharp.Modifiers Mono.CSharp.MemberCore::mod_flags
	int32_t ___mod_flags_2;
	// Mono.CSharp.TypeContainer Mono.CSharp.MemberCore::Parent
	TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* ___Parent_3;
	// System.String Mono.CSharp.MemberCore::comment
	String_t* ___comment_4;
	// Mono.CSharp.MemberCore/Flags Mono.CSharp.MemberCore::caching_flags
	int32_t ___caching_flags_5;
};

// System.ObsoleteAttribute
struct ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;
};

// Mono.CSharp.PredefinedAttribute
struct PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B  : public PredefinedType_t5DA2A9B7E40FB7142878A510CC2D8E5DE49443DE
{
	// Mono.CSharp.MethodSpec Mono.CSharp.PredefinedAttribute::ctor
	MethodSpec_t1F247458D5C0280C8F2D2D04F96F150CAB2D2873* ___ctor_7;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Mono.CSharp.TypeParameterInflator
struct TypeParameterInflator_tAE61C211343A7100A0F509ADEEC16EA4F01BCEE4 
{
	// Mono.CSharp.TypeSpec Mono.CSharp.TypeParameterInflator::type
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___type_0;
	// Mono.CSharp.TypeParameterSpec[] Mono.CSharp.TypeParameterInflator::tparams
	TypeParameterSpecU5BU5D_t64A1B999288B7F2C67551EDB151FC24CDB86D409* ___tparams_1;
	// Mono.CSharp.TypeSpec[] Mono.CSharp.TypeParameterInflator::targs
	TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* ___targs_2;
	// Mono.CSharp.IModuleContext Mono.CSharp.TypeParameterInflator::context
	RuntimeObject* ___context_3;
};
// Native definition for P/Invoke marshalling of Mono.CSharp.TypeParameterInflator
struct TypeParameterInflator_tAE61C211343A7100A0F509ADEEC16EA4F01BCEE4_marshaled_pinvoke
{
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___type_0;
	TypeParameterSpecU5BU5D_t64A1B999288B7F2C67551EDB151FC24CDB86D409* ___tparams_1;
	TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* ___targs_2;
	RuntimeObject* ___context_3;
};
// Native definition for COM marshalling of Mono.CSharp.TypeParameterInflator
struct TypeParameterInflator_tAE61C211343A7100A0F509ADEEC16EA4F01BCEE4_marshaled_com
{
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___type_0;
	TypeParameterSpecU5BU5D_t64A1B999288B7F2C67551EDB151FC24CDB86D409* ___tparams_1;
	TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* ___targs_2;
	RuntimeObject* ___context_3;
};

// Mono.CSharp.TypeSpec
struct TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253  : public MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8
{
	// System.Type Mono.CSharp.TypeSpec::info
	Type_t* ___info_6;
	// Mono.CSharp.MemberCache Mono.CSharp.TypeSpec::cache
	MemberCache_t817FD06922A8D2B1CF11AA1A2CA05CB978F96B3D* ___cache_7;
	// System.Collections.Generic.IList`1<Mono.CSharp.TypeSpec> Mono.CSharp.TypeSpec::ifaces
	RuntimeObject* ___ifaces_8;
	// Mono.CSharp.TypeSpec Mono.CSharp.TypeSpec::base_type
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___base_type_9;
	// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec[],Mono.CSharp.InflatedTypeSpec> Mono.CSharp.TypeSpec::inflated_instances
	Dictionary_2_t41890955626B532CD8499ED496D1FDD2E8C8B3F9* ___inflated_instances_10;
};

struct TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253_StaticFields
{
	// Mono.CSharp.TypeSpec[] Mono.CSharp.TypeSpec::EmptyTypes
	TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* ___EmptyTypes_11;
	// System.Type Mono.CSharp.TypeSpec::TypeBuilder
	Type_t* ___TypeBuilder_12;
	// System.Type Mono.CSharp.TypeSpec::GenericTypeBuilder
	Type_t* ___GenericTypeBuilder_13;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Mono.CSharp.AbstractPropertyEventMethod
struct AbstractPropertyEventMethod_t2921C423B09FD059D74CD8EA709322CCF22C5E23  : public MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791
{
	// Mono.CSharp.MethodData Mono.CSharp.AbstractPropertyEventMethod::method_data
	MethodData_tC18E902BAF199D80027581AAA48D7F3F5CD2C5B1* ___method_data_6;
	// Mono.CSharp.ToplevelBlock Mono.CSharp.AbstractPropertyEventMethod::block
	ToplevelBlock_tEBAA2D84DE8DE0A9161735A03EF2A423E2529FBE* ___block_7;
	// System.Collections.Generic.Dictionary`2<System.Security.Permissions.SecurityAction,System.Security.PermissionSet> Mono.CSharp.AbstractPropertyEventMethod::declarative_security
	Dictionary_2_tBE4D4B305852DFEADD92059FE44C53D94EE9BD38* ___declarative_security_8;
	// System.String Mono.CSharp.AbstractPropertyEventMethod::prefix
	String_t* ___prefix_9;
	// Mono.CSharp.ReturnParameter Mono.CSharp.AbstractPropertyEventMethod::return_attributes
	ReturnParameter_t96B0FAE8128515B913C10905F663256FC78025D8* ___return_attributes_10;
	// Mono.CSharp.MethodSpec Mono.CSharp.AbstractPropertyEventMethod::<Spec>k__BackingField
	MethodSpec_t1F247458D5C0280C8F2D2D04F96F150CAB2D2873* ___U3CSpecU3Ek__BackingField_11;
};

// Mono.CSharp.Attribute
struct Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B  : public RuntimeObject
{
	// System.String Mono.CSharp.Attribute::ExplicitTarget
	String_t* ___ExplicitTarget_0;
	// System.AttributeTargets Mono.CSharp.Attribute::Target
	int32_t ___Target_1;
	// Mono.CSharp.ATypeNameExpression Mono.CSharp.Attribute::expression
	ATypeNameExpression_t5A86612FE7942AAF35D040012464E51E0399DB9E* ___expression_2;
	// Mono.CSharp.Arguments Mono.CSharp.Attribute::pos_args
	Arguments_t84469B3B1FD40617E82265AE67589C2C5BC6DD85* ___pos_args_3;
	// Mono.CSharp.Arguments Mono.CSharp.Attribute::named_args
	Arguments_t84469B3B1FD40617E82265AE67589C2C5BC6DD85* ___named_args_4;
	// System.Boolean Mono.CSharp.Attribute::resolve_error
	bool ___resolve_error_5;
	// System.Boolean Mono.CSharp.Attribute::arg_resolved
	bool ___arg_resolved_6;
	// System.Boolean Mono.CSharp.Attribute::nameEscaped
	bool ___nameEscaped_7;
	// Mono.CSharp.Location Mono.CSharp.Attribute::loc
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc_8;
	// Mono.CSharp.TypeSpec Mono.CSharp.Attribute::Type
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___Type_9;
	// Mono.CSharp.Attributable[] Mono.CSharp.Attribute::targets
	AttributableU5BU5D_tAAF76D924E96C4DA5A1CF722FB2605A021FDA69B* ___targets_10;
	// Mono.CSharp.IMemberContext Mono.CSharp.Attribute::context
	RuntimeObject* ___context_11;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<Mono.CSharp.MemberExpr,Mono.CSharp.NamedArgument>> Mono.CSharp.Attribute::named_values
	List_1_t67DF1B643A57D87515AB9922FD6867C03E72F6BB* ___named_values_14;
};

struct Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B_StaticFields
{
	// System.AttributeUsageAttribute Mono.CSharp.Attribute::DefaultUsageAttribute
	AttributeUsageAttribute_t25F34EEA4F7DBA1A8EEFA0685E986AEECE621C49* ___DefaultUsageAttribute_12;
	// System.Object[] Mono.CSharp.Attribute::EmptyObject
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyObject_13;
};

// Mono.CSharp.Constraints
struct Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3  : public RuntimeObject
{
	// Mono.CSharp.SimpleMemberName Mono.CSharp.Constraints::tparam
	SimpleMemberName_tF82E5572C2318BC857235349241DACE90C310C12* ___tparam_0;
	// System.Collections.Generic.List`1<Mono.CSharp.FullNamedExpression> Mono.CSharp.Constraints::constraints
	List_1_t801369823D1E524F6387B19DEA54FBE760196467* ___constraints_1;
	// Mono.CSharp.Location Mono.CSharp.Constraints::loc
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc_2;
	// System.Boolean Mono.CSharp.Constraints::resolved
	bool ___resolved_3;
	// System.Boolean Mono.CSharp.Constraints::resolving
	bool ___resolving_4;
};

// Mono.CSharp.DocumentationBuilder
struct DocumentationBuilder_t7805D42F3A2BD1A40FE71A5A1D49B8CE3548D52D  : public RuntimeObject
{
	// System.Xml.XmlDocument Mono.CSharp.DocumentationBuilder::XmlDocumentation
	XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___XmlDocumentation_0;
	// Mono.CSharp.ModuleContainer Mono.CSharp.DocumentationBuilder::module
	ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* ___module_1;
	// Mono.CSharp.ModuleContainer Mono.CSharp.DocumentationBuilder::doc_module
	ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* ___doc_module_2;
	// System.Xml.XmlWriter Mono.CSharp.DocumentationBuilder::XmlCommentOutput
	XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___XmlCommentOutput_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Xml.XmlDocument> Mono.CSharp.DocumentationBuilder::StoredDocuments
	Dictionary_2_t633806860DB887E17BA5510093E8337780ACBC0A* ___StoredDocuments_5;
	// Mono.CSharp.ParserSession Mono.CSharp.DocumentationBuilder::session
	ParserSession_tE9F339A49DFCF899A338AE7D39CA9BAF6988447E* ___session_6;
	// Mono.CSharp.MemberName Mono.CSharp.DocumentationBuilder::<ParsedName>k__BackingField
	MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___U3CParsedNameU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<Mono.CSharp.DocumentationParameter> Mono.CSharp.DocumentationBuilder::<ParsedParameters>k__BackingField
	List_1_t4BC8C73EC8802E91AB3E163D377A17B318C63B87* ___U3CParsedParametersU3Ek__BackingField_8;
	// Mono.CSharp.TypeExpression Mono.CSharp.DocumentationBuilder::<ParsedBuiltinType>k__BackingField
	TypeExpression_t82D76E7C41A5DCEB19803126329573520F20962A* ___U3CParsedBuiltinTypeU3Ek__BackingField_9;
	// System.Nullable`1<Mono.CSharp.Operator/OpType> Mono.CSharp.DocumentationBuilder::<ParsedOperator>k__BackingField
	Nullable_1_t20CAA964BC289FA660443DC407C630D16FA167EF ___U3CParsedOperatorU3Ek__BackingField_10;
};

struct DocumentationBuilder_t7805D42F3A2BD1A40FE71A5A1D49B8CE3548D52D_StaticFields
{
	// System.String Mono.CSharp.DocumentationBuilder::line_head
	String_t* ___line_head_4;
};

// Mono.CSharp.ElementTypeSpec
struct ElementTypeSpec_t1E107D8DC289F63B322C8859BC395BFEDB97ECF8  : public TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253
{
	// Mono.CSharp.TypeSpec Mono.CSharp.ElementTypeSpec::<Element>k__BackingField
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___U3CElementU3Ek__BackingField_14;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Mono.CSharp.Expression
struct Expression_t765E7793407091A8450573D552B39FDD6121FF49  : public RuntimeObject
{
	// Mono.CSharp.ExprClass Mono.CSharp.Expression::eclass
	uint8_t ___eclass_0;
	// Mono.CSharp.TypeSpec Mono.CSharp.Expression::type
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___type_1;
	// Mono.CSharp.Location Mono.CSharp.Expression::loc
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc_2;
};

// Mono.CSharp.MemberBase
struct MemberBase_tA0E80D03D08A038240C14848C5958026CE9B0F44  : public MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791
{
	// Mono.CSharp.FullNamedExpression Mono.CSharp.MemberBase::type_expr
	FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* ___type_expr_6;
	// Mono.CSharp.TypeSpec Mono.CSharp.MemberBase::member_type
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___member_type_7;
	// Mono.CSharp.TypeDefinition Mono.CSharp.MemberBase::Parent
	TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* ___Parent_8;
};

// Mono.CSharp.MemberName
struct MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284  : public RuntimeObject
{
	// System.String Mono.CSharp.MemberName::Name
	String_t* ___Name_1;
	// Mono.CSharp.TypeParameters Mono.CSharp.MemberName::TypeParameters
	TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* ___TypeParameters_2;
	// Mono.CSharp.FullNamedExpression Mono.CSharp.MemberName::ExplicitInterface
	FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* ___ExplicitInterface_3;
	// Mono.CSharp.Location Mono.CSharp.MemberName::Location
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___Location_4;
	// Mono.CSharp.MemberName Mono.CSharp.MemberName::Left
	MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___Left_5;
};

struct MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284_StaticFields
{
	// Mono.CSharp.MemberName Mono.CSharp.MemberName::Null
	MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___Null_0;
};

// Mono.CompilerServices.SymbolWriter.MonoSymbolFile
struct MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.MethodEntry> Mono.CompilerServices.SymbolWriter.MonoSymbolFile::methods
	List_1_tE72E827E61BA3FD0B7618ECDDF2B6779E85094BC* ___methods_0;
	// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.SourceFileEntry> Mono.CompilerServices.SymbolWriter.MonoSymbolFile::sources
	List_1_tF87E3A8EADAEA4FD6477E6BAD6C6F60DCAD29BF1* ___sources_1;
	// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.CompileUnitEntry> Mono.CompilerServices.SymbolWriter.MonoSymbolFile::comp_units
	List_1_t21ECA163DE9069A39635956F4777B0995F5685D7* ___comp_units_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CompilerServices.SymbolWriter.AnonymousScopeEntry> Mono.CompilerServices.SymbolWriter.MonoSymbolFile::anonymous_scopes
	Dictionary_2_tB2A2DD9CE4AD18999E6D1B758611D42FC8A3F46E* ___anonymous_scopes_3;
	// Mono.CompilerServices.SymbolWriter.OffsetTable Mono.CompilerServices.SymbolWriter.MonoSymbolFile::ot
	OffsetTable_tB70460631855C3268C1794D1ED985FF8ACCE73CE* ___ot_4;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MonoSymbolFile::last_type_index
	int32_t ___last_type_index_5;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MonoSymbolFile::last_method_index
	int32_t ___last_method_index_6;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MonoSymbolFile::last_namespace_index
	int32_t ___last_namespace_index_7;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MonoSymbolFile::MajorVersion
	int32_t ___MajorVersion_8;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MonoSymbolFile::MinorVersion
	int32_t ___MinorVersion_9;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MonoSymbolFile::NumLineNumbers
	int32_t ___NumLineNumbers_10;
	// Mono.CompilerServices.SymbolWriter.MyBinaryReader Mono.CompilerServices.SymbolWriter.MonoSymbolFile::reader
	MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* ___reader_11;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CompilerServices.SymbolWriter.SourceFileEntry> Mono.CompilerServices.SymbolWriter.MonoSymbolFile::source_file_hash
	Dictionary_2_t69FDAFC254C5DD792B4854F9EF4547BFB577A3AE* ___source_file_hash_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CompilerServices.SymbolWriter.CompileUnitEntry> Mono.CompilerServices.SymbolWriter.MonoSymbolFile::compile_unit_hash
	Dictionary_2_t0E7795843FF9461364317090380DAE89E72E0129* ___compile_unit_hash_13;
	// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.MethodEntry> Mono.CompilerServices.SymbolWriter.MonoSymbolFile::method_list
	List_1_tE72E827E61BA3FD0B7618ECDDF2B6779E85094BC* ___method_list_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CompilerServices.SymbolWriter.MethodEntry> Mono.CompilerServices.SymbolWriter.MonoSymbolFile::method_token_hash
	Dictionary_2_t68A729DB2681B958C040CFEB7F6E317E07021737* ___method_token_hash_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.CompilerServices.SymbolWriter.MonoSymbolFile::source_name_hash
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___source_name_hash_16;
	// System.Guid Mono.CompilerServices.SymbolWriter.MonoSymbolFile::guid
	Guid_t ___guid_17;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MonoSymbolFile::LineNumberCount
	int32_t ___LineNumberCount_18;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MonoSymbolFile::LocalCount
	int32_t ___LocalCount_19;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MonoSymbolFile::StringSize
	int32_t ___StringSize_20;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MonoSymbolFile::LineNumberSize
	int32_t ___LineNumberSize_21;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MonoSymbolFile::ExtendedLineNumberSize
	int32_t ___ExtendedLineNumberSize_22;
};

// Mono.CSharp.SimpleMemberName
struct SimpleMemberName_tF82E5572C2318BC857235349241DACE90C310C12  : public RuntimeObject
{
	// System.String Mono.CSharp.SimpleMemberName::Value
	String_t* ___Value_0;
	// Mono.CSharp.Location Mono.CSharp.SimpleMemberName::Location
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___Location_1;
};

// Mono.CSharp.Tokenizer
struct Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501  : public RuntimeObject
{
	// Mono.CSharp.SeekableStreamReader Mono.CSharp.Tokenizer::reader
	SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* ___reader_0;
	// Mono.CSharp.CompilationSourceFile Mono.CSharp.Tokenizer::source_file
	CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* ___source_file_1;
	// Mono.CSharp.CompilerContext Mono.CSharp.Tokenizer::context
	CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* ___context_2;
	// Mono.CSharp.Report Mono.CSharp.Tokenizer::Report
	Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* ___Report_3;
	// Mono.CSharp.SourceFile Mono.CSharp.Tokenizer::current_source
	SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* ___current_source_4;
	// Mono.CSharp.Location Mono.CSharp.Tokenizer::hidden_block_start
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___hidden_block_start_5;
	// System.Int32 Mono.CSharp.Tokenizer::ref_line
	int32_t ___ref_line_6;
	// System.Int32 Mono.CSharp.Tokenizer::line
	int32_t ___line_7;
	// System.Int32 Mono.CSharp.Tokenizer::col
	int32_t ___col_8;
	// System.Int32 Mono.CSharp.Tokenizer::previous_col
	int32_t ___previous_col_9;
	// System.Int32 Mono.CSharp.Tokenizer::current_token
	int32_t ___current_token_10;
	// System.Int32 Mono.CSharp.Tokenizer::tab_size
	int32_t ___tab_size_11;
	// System.Boolean Mono.CSharp.Tokenizer::handle_get_set
	bool ___handle_get_set_12;
	// System.Boolean Mono.CSharp.Tokenizer::handle_remove_add
	bool ___handle_remove_add_13;
	// System.Boolean Mono.CSharp.Tokenizer::handle_where
	bool ___handle_where_14;
	// System.Boolean Mono.CSharp.Tokenizer::lambda_arguments_parsing
	bool ___lambda_arguments_parsing_15;
	// System.Collections.Generic.List`1<Mono.CSharp.Location> Mono.CSharp.Tokenizer::escaped_identifiers
	List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* ___escaped_identifiers_16;
	// System.Int32 Mono.CSharp.Tokenizer::parsing_generic_less_than
	int32_t ___parsing_generic_less_than_17;
	// System.Boolean Mono.CSharp.Tokenizer::doc_processing
	bool ___doc_processing_18;
	// Mono.CSharp.Tokenizer/LocatedTokenBuffer Mono.CSharp.Tokenizer::ltb
	LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* ___ltb_19;
	// System.Int32 Mono.CSharp.Tokenizer::parsing_block
	int32_t ___parsing_block_20;
	// System.Boolean Mono.CSharp.Tokenizer::query_parsing
	bool ___query_parsing_21;
	// System.Int32 Mono.CSharp.Tokenizer::parsing_type
	int32_t ___parsing_type_22;
	// System.Boolean Mono.CSharp.Tokenizer::parsing_generic_declaration
	bool ___parsing_generic_declaration_23;
	// System.Boolean Mono.CSharp.Tokenizer::parsing_generic_declaration_doc
	bool ___parsing_generic_declaration_doc_24;
	// System.Int32 Mono.CSharp.Tokenizer::parsing_declaration
	int32_t ___parsing_declaration_25;
	// System.Boolean Mono.CSharp.Tokenizer::parsing_attribute_section
	bool ___parsing_attribute_section_26;
	// System.Boolean Mono.CSharp.Tokenizer::parsing_modifiers
	bool ___parsing_modifiers_27;
	// System.Boolean Mono.CSharp.Tokenizer::parsing_catch_when
	bool ___parsing_catch_when_28;
	// System.Int32 Mono.CSharp.Tokenizer::parsing_string_interpolation
	int32_t ___parsing_string_interpolation_29;
	// System.Collections.Generic.Stack`1<System.Boolean> Mono.CSharp.Tokenizer::parsing_string_interpolation_quoted
	Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* ___parsing_string_interpolation_quoted_30;
	// System.Boolean Mono.CSharp.Tokenizer::parsing_interpolation_format
	bool ___parsing_interpolation_format_31;
	// System.Text.StringBuilder Mono.CSharp.Tokenizer::xml_comment_buffer
	StringBuilder_t* ___xml_comment_buffer_38;
	// Mono.CSharp.XmlCommentState Mono.CSharp.Tokenizer::xml_doc_state
	int32_t ___xml_doc_state_39;
	// System.Boolean Mono.CSharp.Tokenizer::tokens_seen
	bool ___tokens_seen_40;
	// System.Boolean Mono.CSharp.Tokenizer::generated
	bool ___generated_41;
	// System.Boolean Mono.CSharp.Tokenizer::any_token_seen
	bool ___any_token_seen_42;
	// System.Boolean Mono.CSharp.Tokenizer::CompleteOnEOF
	bool ___CompleteOnEOF_55;
	// System.Int32 Mono.CSharp.Tokenizer::putback_char
	int32_t ___putback_char_56;
	// System.Object Mono.CSharp.Tokenizer::val
	RuntimeObject* ___val_57;
	// System.Collections.Generic.Stack`1<System.Int32> Mono.CSharp.Tokenizer::ifstack
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___ifstack_62;
	// System.Char[] Mono.CSharp.Tokenizer::id_builder
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___id_builder_65;
	// System.Collections.Generic.Dictionary`2<System.Char[],System.String>[] Mono.CSharp.Tokenizer::identifiers
	Dictionary_2U5BU5D_tB3D5B174D6C376DBA5BB7B48C3F60DBABD0D2F46* ___identifiers_66;
	// System.Char[] Mono.CSharp.Tokenizer::number_builder
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___number_builder_67;
	// System.Int32 Mono.CSharp.Tokenizer::number_pos
	int32_t ___number_pos_68;
	// System.Char[] Mono.CSharp.Tokenizer::value_builder
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value_builder_69;
	// System.Collections.Generic.Stack`1<Mono.CSharp.Tokenizer/Position> Mono.CSharp.Tokenizer::position_stack
	Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9* ___position_stack_70;
};

struct Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields
{
	// Mono.CSharp.Tokenizer/KeywordEntry`1<System.Int32>[][] Mono.CSharp.Tokenizer::keywords
	KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19* ___keywords_43;
	// Mono.CSharp.Tokenizer/KeywordEntry`1<Mono.CSharp.Tokenizer/PreprocessorDirective>[][] Mono.CSharp.Tokenizer::keywords_preprocessor
	KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205* ___keywords_preprocessor_44;
	// System.Collections.Generic.HashSet`1<System.String> Mono.CSharp.Tokenizer::keyword_strings
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___keyword_strings_45;
	// System.Globalization.NumberStyles Mono.CSharp.Tokenizer::styles
	int32_t ___styles_46;
	// System.Globalization.NumberFormatInfo Mono.CSharp.Tokenizer::csharp_format_info
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___csharp_format_info_47;
	// System.Char[] Mono.CSharp.Tokenizer::pragma_warning
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___pragma_warning_48;
	// System.Char[] Mono.CSharp.Tokenizer::pragma_warning_disable
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___pragma_warning_disable_49;
	// System.Char[] Mono.CSharp.Tokenizer::pragma_warning_restore
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___pragma_warning_restore_50;
	// System.Char[] Mono.CSharp.Tokenizer::pragma_checksum
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___pragma_checksum_51;
	// System.Char[] Mono.CSharp.Tokenizer::line_hidden
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___line_hidden_52;
	// System.Char[] Mono.CSharp.Tokenizer::line_default
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___line_default_53;
	// System.Char[] Mono.CSharp.Tokenizer::simple_whitespaces
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___simple_whitespaces_54;
};

// Mono.CSharp.TypeContainer
struct TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4  : public MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791
{
	// Mono.CSharp.MemberKind Mono.CSharp.TypeContainer::Kind
	int32_t ___Kind_6;
	// System.Collections.Generic.List`1<Mono.CSharp.TypeContainer> Mono.CSharp.TypeContainer::containers
	List_1_t23CDEB7C07592B4EB2EE5294641CBBE7C893BD48* ___containers_7;
	// Mono.CSharp.TypeDefinition Mono.CSharp.TypeContainer::main_container
	TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* ___main_container_8;
	// System.Collections.Generic.Dictionary`2<System.String,Mono.CSharp.MemberCore> Mono.CSharp.TypeContainer::defined_names
	Dictionary_2_t4026024C28E7642D69023DF4232220DABDF97305* ___defined_names_9;
	// System.Boolean Mono.CSharp.TypeContainer::is_defined
	bool ___is_defined_10;
	// System.Int32 Mono.CSharp.TypeContainer::<CounterAnonymousMethods>k__BackingField
	int32_t ___U3CCounterAnonymousMethodsU3Ek__BackingField_11;
	// System.Int32 Mono.CSharp.TypeContainer::<CounterAnonymousContainers>k__BackingField
	int32_t ___U3CCounterAnonymousContainersU3Ek__BackingField_12;
	// System.Int32 Mono.CSharp.TypeContainer::<CounterSwitchTypes>k__BackingField
	int32_t ___U3CCounterSwitchTypesU3Ek__BackingField_13;
	// Mono.CSharp.Attributes Mono.CSharp.TypeContainer::<UnattachedAttributes>k__BackingField
	Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* ___U3CUnattachedAttributesU3Ek__BackingField_14;
};

// Mono.CSharp.TypeParameter
struct TypeParameter_t2B529F20F82AE20A38AB99CBA0E31D7F88E12EF2  : public MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791
{
	// Mono.CSharp.Constraints Mono.CSharp.TypeParameter::constraints
	Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* ___constraints_7;
	// System.Reflection.Emit.GenericTypeParameterBuilder Mono.CSharp.TypeParameter::builder
	GenericTypeParameterBuilder_tAF14CE746360ECC49846772B81BDF591555AFC43* ___builder_8;
	// Mono.CSharp.TypeParameterSpec Mono.CSharp.TypeParameter::spec
	TypeParameterSpec_t8805BC655FFA58ED1E4D1F284525983360CCCD18* ___spec_9;
	// Mono.CSharp.VarianceDecl Mono.CSharp.TypeParameter::<VarianceDecl>k__BackingField
	VarianceDecl_t3A7FBDFCEEC9E6A5569879FF85CFBCA154B94A10* ___U3CVarianceDeclU3Ek__BackingField_10;
};

struct TypeParameter_t2B529F20F82AE20A38AB99CBA0E31D7F88E12EF2_StaticFields
{
	// System.String[] Mono.CSharp.TypeParameter::attribute_target
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_target_6;
};

// Mono.CSharp.CSharpParser/OperatorDeclaration
struct OperatorDeclaration_tDB0137E00E926F0E8C7E242C2C28A0586D8713A4  : public RuntimeObject
{
	// Mono.CSharp.Operator/OpType Mono.CSharp.CSharpParser/OperatorDeclaration::optype
	uint8_t ___optype_0;
	// Mono.CSharp.FullNamedExpression Mono.CSharp.CSharpParser/OperatorDeclaration::ret_type
	FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* ___ret_type_1;
	// Mono.CSharp.Location Mono.CSharp.CSharpParser/OperatorDeclaration::location
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___location_2;
};

// Mono.CSharp.Tokenizer/Position
struct Position_t54676CA533325D551EE246260967D8F0BDDDB40A  : public RuntimeObject
{
	// System.Int32 Mono.CSharp.Tokenizer/Position::position
	int32_t ___position_0;
	// System.Int32 Mono.CSharp.Tokenizer/Position::line
	int32_t ___line_1;
	// System.Int32 Mono.CSharp.Tokenizer/Position::ref_line
	int32_t ___ref_line_2;
	// System.Int32 Mono.CSharp.Tokenizer/Position::col
	int32_t ___col_3;
	// Mono.CSharp.Location Mono.CSharp.Tokenizer/Position::hidden
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___hidden_4;
	// System.Int32 Mono.CSharp.Tokenizer/Position::putback_char
	int32_t ___putback_char_5;
	// System.Int32 Mono.CSharp.Tokenizer/Position::previous_col
	int32_t ___previous_col_6;
	// System.Collections.Generic.Stack`1<System.Int32> Mono.CSharp.Tokenizer/Position::ifstack
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___ifstack_7;
	// System.Int32 Mono.CSharp.Tokenizer/Position::parsing_generic_less_than
	int32_t ___parsing_generic_less_than_8;
	// System.Int32 Mono.CSharp.Tokenizer/Position::current_token
	int32_t ___current_token_9;
	// System.Object Mono.CSharp.Tokenizer/Position::val
	RuntimeObject* ___val_10;
	// System.Int32 Mono.CSharp.Tokenizer/Position::parsing_string_interpolation
	int32_t ___parsing_string_interpolation_11;
	// System.Collections.Generic.Stack`1<System.Boolean> Mono.CSharp.Tokenizer/Position::parsing_string_interpolation_quoted
	Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* ___parsing_string_interpolation_quoted_12;
};

// Mono.CSharp.Constant
struct Constant_t40F4F9F606F3BDF667223C6E625B262D01629F84  : public Expression_t765E7793407091A8450573D552B39FDD6121FF49
{
};

struct Constant_t40F4F9F606F3BDF667223C6E625B262D01629F84_StaticFields
{
	// System.Globalization.NumberFormatInfo Mono.CSharp.Constant::nfi
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___nfi_3;
};

// Mono.CSharp.FieldBase
struct FieldBase_t96B175700F10D6FD7C4EB7D78E05505EF54964FE  : public MemberBase_tA0E80D03D08A038240C14848C5958026CE9B0F44
{
	// System.Reflection.Emit.FieldBuilder Mono.CSharp.FieldBase::FieldBuilder
	FieldBuilder_tFCE2E490435F978A3C4DC9340920C3C32CE74889* ___FieldBuilder_9;
	// Mono.CSharp.FieldSpec Mono.CSharp.FieldBase::spec
	FieldSpec_tC371A27A87AB752D26DA024B1FB7EF5208B3C400* ___spec_10;
	// Mono.CSharp.FieldBase/Status Mono.CSharp.FieldBase::status
	uint8_t ___status_11;
	// Mono.CSharp.Expression Mono.CSharp.FieldBase::initializer
	Expression_t765E7793407091A8450573D552B39FDD6121FF49* ___initializer_12;
	// System.Collections.Generic.List`1<Mono.CSharp.FieldDeclarator> Mono.CSharp.FieldBase::declarators
	List_1_t08CBBE6DB8C8D5912A9E13B0B96C16F6437E85D9* ___declarators_13;
};

struct FieldBase_t96B175700F10D6FD7C4EB7D78E05505EF54964FE_StaticFields
{
	// System.String[] Mono.CSharp.FieldBase::attribute_targets
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_targets_14;
};

// Mono.CSharp.FullNamedExpression
struct FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D  : public Expression_t765E7793407091A8450573D552B39FDD6121FF49
{
};

// Mono.CSharp.InterfaceMemberBase
struct InterfaceMemberBase_t4D64B2D2F08F79FD8D8815B8A8D9251C7FA00380  : public MemberBase_tA0E80D03D08A038240C14848C5958026CE9B0F44
{
	// System.Boolean Mono.CSharp.InterfaceMemberBase::IsInterface
	bool ___IsInterface_12;
	// System.Boolean Mono.CSharp.InterfaceMemberBase::IsExplicitImpl
	bool ___IsExplicitImpl_13;
	// System.Boolean Mono.CSharp.InterfaceMemberBase::is_external_implementation
	bool ___is_external_implementation_14;
	// Mono.CSharp.TypeSpec Mono.CSharp.InterfaceMemberBase::InterfaceType
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___InterfaceType_15;
	// Mono.CSharp.MethodSpec Mono.CSharp.InterfaceMemberBase::base_method
	MethodSpec_t1F247458D5C0280C8F2D2D04F96F150CAB2D2873* ___base_method_16;
	// Mono.CSharp.Modifiers Mono.CSharp.InterfaceMemberBase::explicit_mod_flags
	int32_t ___explicit_mod_flags_17;
	// System.Reflection.MethodAttributes Mono.CSharp.InterfaceMemberBase::flags
	int32_t ___flags_18;
};

// Mono.CSharp.InternalErrorException
struct InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC  : public Exception_t
{
};

// Mono.CSharp.ModuleContainer
struct ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3  : public TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4
{
	// Mono.CSharp.ModuleContainer/PatternMatchingHelper Mono.CSharp.ModuleContainer::pmh
	PatternMatchingHelper_t9864BA6FA10DCF0245B7461151239DDBD25C298E* ___pmh_15;
	// System.Nullable`1<System.Runtime.InteropServices.CharSet> Mono.CSharp.ModuleContainer::DefaultCharSet
	Nullable_1_tF1C0E759F0C87D0170A0F5941BE1D089D089DC2A ___DefaultCharSet_16;
	// System.Reflection.TypeAttributes Mono.CSharp.ModuleContainer::DefaultCharSetType
	int32_t ___DefaultCharSetType_17;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Mono.CSharp.AnonymousTypeClass>> Mono.CSharp.ModuleContainer::anonymous_types
	Dictionary_2_t3D59B6443750ED838DD47F7DF6309525EAE486C3* ___anonymous_types_18;
	// System.Collections.Generic.Dictionary`2<Mono.CSharp.ArrayContainer/TypeRankPair,Mono.CSharp.ArrayContainer> Mono.CSharp.ModuleContainer::array_types
	Dictionary_2_tB7BE0F4A51864B6C073F4E77B17002731670FB31* ___array_types_19;
	// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec,Mono.CSharp.PointerContainer> Mono.CSharp.ModuleContainer::pointer_types
	Dictionary_2_t2AE81F979C3AB1CFF1DBA6D6DAC0627E058C4179* ___pointer_types_20;
	// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec,Mono.CSharp.ReferenceContainer> Mono.CSharp.ModuleContainer::reference_types
	Dictionary_2_tA28056E8AE3924D15B6CE8ACC2CF2A5FECD24F11* ___reference_types_21;
	// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec,Mono.CSharp.MethodSpec> Mono.CSharp.ModuleContainer::attrs_cache
	Dictionary_2_t5A49EF7282FAC7DE51ABA634D2CA18AEB231C4FF* ___attrs_cache_22;
	// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec,Mono.CSharp.AwaiterDefinition> Mono.CSharp.ModuleContainer::awaiters
	Dictionary_2_t396CE241ED8639D2271DC630ABF590E62CB27EEC* ___awaiters_23;
	// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec,Mono.CSharp.TypeInfo> Mono.CSharp.ModuleContainer::type_info_cache
	Dictionary_2_t5ABA0DF6EBFF684AA3CE012CD3D880CAA4D5533B* ___type_info_cache_24;
	// Mono.CSharp.AssemblyDefinition Mono.CSharp.ModuleContainer::assembly
	AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4* ___assembly_25;
	// Mono.CSharp.CompilerContext Mono.CSharp.ModuleContainer::context
	CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* ___context_26;
	// Mono.CSharp.RootNamespace Mono.CSharp.ModuleContainer::global_ns
	RootNamespace_tAC3359C1C3D9647B87E00B12288F32477C565D11* ___global_ns_27;
	// System.Collections.Generic.Dictionary`2<System.String,Mono.CSharp.RootNamespace> Mono.CSharp.ModuleContainer::alias_ns
	Dictionary_2_tA5B3B7EE8D65278FB44A47B15E26905FA0CBDE54* ___alias_ns_28;
	// System.Reflection.Emit.ModuleBuilder Mono.CSharp.ModuleContainer::builder
	ModuleBuilder_tC7B7823951455CA3EFD8383CAC22E57DFC06A57A* ___builder_29;
	// System.Boolean Mono.CSharp.ModuleContainer::has_extenstion_method
	bool ___has_extenstion_method_30;
	// Mono.CSharp.PredefinedAttributes Mono.CSharp.ModuleContainer::predefined_attributes
	PredefinedAttributes_t57CF082A2D3A84BDE14293D534774A98E3C51A3D* ___predefined_attributes_31;
	// Mono.CSharp.PredefinedTypes Mono.CSharp.ModuleContainer::predefined_types
	PredefinedTypes_tDDDA15F9DCEC3B9C45B9D84A6B6F0051BDD88CF8* ___predefined_types_32;
	// Mono.CSharp.PredefinedMembers Mono.CSharp.ModuleContainer::predefined_members
	PredefinedMembers_t9DE845834B7F4186887CB8C1A2086D85C8416B54* ___predefined_members_33;
	// Mono.CSharp.Binary/PredefinedOperator[] Mono.CSharp.ModuleContainer::OperatorsBinaryEqualityLifted
	PredefinedOperatorU5BU5D_t4D23A813935839B4C5A1615203E853CFC15A7244* ___OperatorsBinaryEqualityLifted_34;
	// Mono.CSharp.Binary/PredefinedOperator[] Mono.CSharp.ModuleContainer::OperatorsBinaryLifted
	PredefinedOperatorU5BU5D_t4D23A813935839B4C5A1615203E853CFC15A7244* ___OperatorsBinaryLifted_35;
	// System.Int32 Mono.CSharp.ModuleContainer::<CounterAnonymousTypes>k__BackingField
	int32_t ___U3CCounterAnonymousTypesU3Ek__BackingField_37;
	// Mono.CSharp.DocumentationBuilder Mono.CSharp.ModuleContainer::<DocumentationBuilder>k__BackingField
	DocumentationBuilder_t7805D42F3A2BD1A40FE71A5A1D49B8CE3548D52D* ___U3CDocumentationBuilderU3Ek__BackingField_38;
	// Mono.CSharp.Evaluator Mono.CSharp.ModuleContainer::<Evaluator>k__BackingField
	Evaluator_t49C1B5F277766BBC996D3637DA3D1817455ED335* ___U3CEvaluatorU3Ek__BackingField_39;
	// System.Boolean Mono.CSharp.ModuleContainer::<HasTypesFullyDefined>k__BackingField
	bool ___U3CHasTypesFullyDefinedU3Ek__BackingField_40;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Mono.CSharp.ModuleContainer::<GetResourceStrings>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CGetResourceStringsU3Ek__BackingField_41;
};

struct ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3_StaticFields
{
	// System.String[] Mono.CSharp.ModuleContainer::attribute_targets
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_targets_36;
};

// Mono.CSharp.NamespaceContainer
struct NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767  : public TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4
{
	// Mono.CSharp.Namespace Mono.CSharp.NamespaceContainer::ns
	Namespace_tE8910333D94014311495367D861D6671021F45EA* ___ns_16;
	// Mono.CSharp.NamespaceContainer Mono.CSharp.NamespaceContainer::Parent
	NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767* ___Parent_17;
	// System.Collections.Generic.List`1<Mono.CSharp.UsingClause> Mono.CSharp.NamespaceContainer::clauses
	List_1_tEA6B5839BE18BC1549C769202D61E7D091D6C574* ___clauses_18;
	// System.Boolean Mono.CSharp.NamespaceContainer::DeclarationFound
	bool ___DeclarationFound_19;
	// Mono.CSharp.Namespace[] Mono.CSharp.NamespaceContainer::namespace_using_table
	NamespaceU5BU5D_t5F9B085AF59803C3535382C211367C88C6C7230A* ___namespace_using_table_20;
	// Mono.CSharp.TypeSpec[] Mono.CSharp.NamespaceContainer::types_using_table
	TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* ___types_using_table_21;
	// System.Collections.Generic.Dictionary`2<System.String,Mono.CSharp.UsingAliasNamespace> Mono.CSharp.NamespaceContainer::aliases
	Dictionary_2_tA5DD3FE92CB9040016C5422D481C1AA4CF789603* ___aliases_22;
};

struct NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767_StaticFields
{
	// Mono.CSharp.Namespace[] Mono.CSharp.NamespaceContainer::empty_namespaces
	NamespaceU5BU5D_t5F9B085AF59803C3535382C211367C88C6C7230A* ___empty_namespaces_15;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Mono.CSharp.TypeDefinition
struct TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0  : public TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4
{
	// System.Collections.Generic.List`1<Mono.CSharp.MemberCore> Mono.CSharp.TypeDefinition::members
	List_1_tA870AFD0B03495B8BFCA49CC956731ED588D5FB3* ___members_15;
	// System.Collections.Generic.List`1<Mono.CSharp.FieldInitializer> Mono.CSharp.TypeDefinition::initialized_fields
	List_1_t2899C2E6191052C69EA83E82F24B3DC0923203DB* ___initialized_fields_16;
	// System.Collections.Generic.List`1<Mono.CSharp.FieldInitializer> Mono.CSharp.TypeDefinition::initialized_static_fields
	List_1_t2899C2E6191052C69EA83E82F24B3DC0923203DB* ___initialized_static_fields_17;
	// System.Collections.Generic.Dictionary`2<Mono.CSharp.MethodSpec,Mono.CSharp.Method> Mono.CSharp.TypeDefinition::hoisted_base_call_proxies
	Dictionary_2_t9924329FC6FD5B48F1C6B2DE60A958C236DCC3BE* ___hoisted_base_call_proxies_18;
	// System.Collections.Generic.Dictionary`2<System.String,Mono.CSharp.FullNamedExpression> Mono.CSharp.TypeDefinition::Cache
	Dictionary_2_tE72B46DD3AF5D2B0D8FE8F8A2CB40D7BFC344408* ___Cache_19;
	// Mono.CSharp.FieldBase Mono.CSharp.TypeDefinition::first_nonstatic_field
	FieldBase_t96B175700F10D6FD7C4EB7D78E05505EF54964FE* ___first_nonstatic_field_20;
	// Mono.CSharp.TypeSpec Mono.CSharp.TypeDefinition::base_type
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___base_type_21;
	// Mono.CSharp.FullNamedExpression Mono.CSharp.TypeDefinition::base_type_expr
	FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* ___base_type_expr_22;
	// Mono.CSharp.TypeSpec[] Mono.CSharp.TypeDefinition::iface_exprs
	TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* ___iface_exprs_23;
	// System.Collections.Generic.List`1<Mono.CSharp.FullNamedExpression> Mono.CSharp.TypeDefinition::type_bases
	List_1_t801369823D1E524F6387B19DEA54FBE760196467* ___type_bases_24;
	// System.Collections.Generic.List`1<Mono.CSharp.TypeDefinition> Mono.CSharp.TypeDefinition::class_partial_parts
	List_1_tD91DAADE3711AB2D2FDFC9E37811143C43B4B339* ___class_partial_parts_25;
	// Mono.CSharp.TypeDefinition Mono.CSharp.TypeDefinition::InTransit
	TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* ___InTransit_26;
	// System.Reflection.Emit.TypeBuilder Mono.CSharp.TypeDefinition::TypeBuilder
	TypeBuilder_tB9523559034D11ED3F97AF62D8C80E66D331F513* ___TypeBuilder_27;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] Mono.CSharp.TypeDefinition::all_tp_builders
	GenericTypeParameterBuilderU5BU5D_tD03A2225FB5B6207CCD9685C9878B507491DB0CC* ___all_tp_builders_28;
	// Mono.CSharp.TypeParameters Mono.CSharp.TypeDefinition::all_type_parameters
	TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* ___all_type_parameters_29;
	// System.Boolean Mono.CSharp.TypeDefinition::has_normal_indexers
	bool ___has_normal_indexers_31;
	// System.String Mono.CSharp.TypeDefinition::indexer_name
	String_t* ___indexer_name_32;
	// System.Boolean Mono.CSharp.TypeDefinition::requires_delayed_unmanagedtype_check
	bool ___requires_delayed_unmanagedtype_check_33;
	// System.Boolean Mono.CSharp.TypeDefinition::error
	bool ___error_34;
	// System.Boolean Mono.CSharp.TypeDefinition::members_defined
	bool ___members_defined_35;
	// System.Boolean Mono.CSharp.TypeDefinition::members_defined_ok
	bool ___members_defined_ok_36;
	// System.Boolean Mono.CSharp.TypeDefinition::has_static_constructor
	bool ___has_static_constructor_37;
	// Mono.CSharp.TypeDefinition/CachedMethods Mono.CSharp.TypeDefinition::cached_method
	int32_t ___cached_method_38;
	// Mono.CSharp.TypeSpec Mono.CSharp.TypeDefinition::spec
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___spec_39;
	// Mono.CSharp.TypeSpec Mono.CSharp.TypeDefinition::current_type
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___current_type_40;
	// System.Int32 Mono.CSharp.TypeDefinition::DynamicSitesCounter
	int32_t ___DynamicSitesCounter_41;
	// System.Int32 Mono.CSharp.TypeDefinition::AnonymousMethodsCounter
	int32_t ___AnonymousMethodsCounter_42;
	// System.Int32 Mono.CSharp.TypeDefinition::MethodGroupsCounter
	int32_t ___MethodGroupsCounter_43;
	// Mono.CSharp.PendingImplementation Mono.CSharp.TypeDefinition::pending
	PendingImplementation_t40A22C396FC99405A2DDCA619B22F1D97416C352* ___pending_46;
	// Mono.CSharp.ParametersCompiled Mono.CSharp.TypeDefinition::<PrimaryConstructorParameters>k__BackingField
	ParametersCompiled_tAE83A848B0899B138F2FBD903B4CAE7ABAE79403* ___U3CPrimaryConstructorParametersU3Ek__BackingField_47;
	// Mono.CSharp.Arguments Mono.CSharp.TypeDefinition::<PrimaryConstructorBaseArguments>k__BackingField
	Arguments_t84469B3B1FD40617E82265AE67589C2C5BC6DD85* ___U3CPrimaryConstructorBaseArgumentsU3Ek__BackingField_48;
	// Mono.CSharp.Location Mono.CSharp.TypeDefinition::<PrimaryConstructorBaseArgumentsStart>k__BackingField
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___U3CPrimaryConstructorBaseArgumentsStartU3Ek__BackingField_49;
};

struct TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0_StaticFields
{
	// System.String[] Mono.CSharp.TypeDefinition::attribute_targets
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_targets_44;
	// System.String[] Mono.CSharp.TypeDefinition::attribute_targets_primary
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_targets_primary_45;
};

// Mono.CSharp.PropertyBase/PropertyMethod
struct PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729  : public AbstractPropertyEventMethod_t2921C423B09FD059D74CD8EA709322CCF22C5E23
{
	// Mono.CSharp.PropertyBase Mono.CSharp.PropertyBase/PropertyMethod::method
	PropertyBase_t7861DAC749F3B502B1F573B39E9C3A1F2E4AE78A* ___method_13;
	// System.Reflection.MethodAttributes Mono.CSharp.PropertyBase/PropertyMethod::flags
	int32_t ___flags_14;
};

// Mono.CSharp.ATypeNameExpression
struct ATypeNameExpression_t5A86612FE7942AAF35D040012464E51E0399DB9E  : public FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D
{
	// System.String Mono.CSharp.ATypeNameExpression::name
	String_t* ___name_3;
	// Mono.CSharp.TypeArguments Mono.CSharp.ATypeNameExpression::targs
	TypeArguments_t5FDB3DD6FBA163B07E1B70BAF7477ECD56CF7501* ___targs_4;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Mono.CSharp.CharConstant
struct CharConstant_t6F062535212C850E3047DDB583CE11E5E8D77624  : public Constant_t40F4F9F606F3BDF667223C6E625B262D01629F84
{
	// System.Char Mono.CSharp.CharConstant::Value
	Il2CppChar ___Value_4;
};

// Mono.CSharp.CompilationSourceFile
struct CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736  : public NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767
{
	// Mono.CSharp.SourceFile Mono.CSharp.CompilationSourceFile::file
	SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* ___file_23;
	// Mono.CompilerServices.SymbolWriter.CompileUnitEntry Mono.CSharp.CompilationSourceFile::comp_unit
	CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631* ___comp_unit_24;
	// System.Collections.Generic.Dictionary`2<System.String,Mono.CSharp.SourceFile> Mono.CSharp.CompilationSourceFile::include_files
	Dictionary_2_tF982AB22796D1AEB2BD151B32F44F56C962E8992* ___include_files_25;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> Mono.CSharp.CompilationSourceFile::conditionals
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ___conditionals_26;
};

// Mono.CSharp.DecimalConstant
struct DecimalConstant_t7FB5AC2ACA55CDAC13F35F8A8D5BF7B31A425BD4  : public Constant_t40F4F9F606F3BDF667223C6E625B262D01629F84
{
	// System.Decimal Mono.CSharp.DecimalConstant::Value
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Value_4;
};

// Mono.CSharp.Delegate
struct Delegate_tE5FF582554D79B704C6338F69E9A4CCC42E9BC0D  : public TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0
{
	// Mono.CSharp.FullNamedExpression Mono.CSharp.Delegate::ReturnType
	FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* ___ReturnType_50;
	// Mono.CSharp.ParametersCompiled Mono.CSharp.Delegate::parameters
	ParametersCompiled_tAE83A848B0899B138F2FBD903B4CAE7ABAE79403* ___parameters_51;
	// Mono.CSharp.Constructor Mono.CSharp.Delegate::Constructor
	Constructor_t2200881FF868A83DFA2695D780716B13269A2FD3* ___Constructor_52;
	// Mono.CSharp.Method Mono.CSharp.Delegate::InvokeBuilder
	Method_tE7D3135874028C57754EF0F469B99CD86C68EC6A* ___InvokeBuilder_53;
	// Mono.CSharp.Method Mono.CSharp.Delegate::BeginInvokeBuilder
	Method_tE7D3135874028C57754EF0F469B99CD86C68EC6A* ___BeginInvokeBuilder_54;
	// Mono.CSharp.Method Mono.CSharp.Delegate::EndInvokeBuilder
	Method_tE7D3135874028C57754EF0F469B99CD86C68EC6A* ___EndInvokeBuilder_55;
	// Mono.CSharp.Expression Mono.CSharp.Delegate::instance_expr
	Expression_t765E7793407091A8450573D552B39FDD6121FF49* ___instance_expr_58;
	// Mono.CSharp.ReturnParameter Mono.CSharp.Delegate::return_attributes
	ReturnParameter_t96B0FAE8128515B913C10905F663256FC78025D8* ___return_attributes_59;
	// System.Collections.Generic.Dictionary`2<System.Security.Permissions.SecurityAction,System.Security.PermissionSet> Mono.CSharp.Delegate::declarative_security
	Dictionary_2_tBE4D4B305852DFEADD92059FE44C53D94EE9BD38* ___declarative_security_60;
};

struct Delegate_tE5FF582554D79B704C6338F69E9A4CCC42E9BC0D_StaticFields
{
	// System.String[] Mono.CSharp.Delegate::attribute_targets
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_targets_56;
	// System.String Mono.CSharp.Delegate::InvokeMethodName
	String_t* ___InvokeMethodName_57;
};

// Mono.CSharp.DoubleConstant
struct DoubleConstant_t953C7B823FDF2461B86A64E5228A188D24058B4E  : public Constant_t40F4F9F606F3BDF667223C6E625B262D01629F84
{
	// System.Double Mono.CSharp.DoubleConstant::Value
	double ___Value_4;
};

// Mono.CSharp.Field
struct Field_tD6CD0907596C64D267AAC93A67834B0C9817F4E4  : public FieldBase_t96B175700F10D6FD7C4EB7D78E05505EF54964FE
{
};

// Mono.CSharp.FloatConstant
struct FloatConstant_tF32DBB7F7A2F1F074EC566510E0D9CA92640E1C8  : public Constant_t40F4F9F606F3BDF667223C6E625B262D01629F84
{
	// System.Double Mono.CSharp.FloatConstant::DoubleValue
	double ___DoubleValue_4;
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Mono.CSharp.IntegralConstant
struct IntegralConstant_t6492668D8C93B5C4C7DC695B98A792304D7D9774  : public Constant_t40F4F9F606F3BDF667223C6E625B262D01629F84
{
};

// Mono.CSharp.Interface
struct Interface_t5643DC3C71719AD252703984022EF75B5A23ADBB  : public TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0
{
};

// Mono.CSharp.MethodCore
struct MethodCore_t0D301677EEFAAEA98E27A5CF8D37ADB1A30910CF  : public InterfaceMemberBase_t4D64B2D2F08F79FD8D8815B8A8D9251C7FA00380
{
	// Mono.CSharp.ParametersCompiled Mono.CSharp.MethodCore::parameters
	ParametersCompiled_tAE83A848B0899B138F2FBD903B4CAE7ABAE79403* ___parameters_19;
	// Mono.CSharp.ToplevelBlock Mono.CSharp.MethodCore::block
	ToplevelBlock_tEBAA2D84DE8DE0A9161735A03EF2A423E2529FBE* ___block_20;
	// Mono.CSharp.MethodSpec Mono.CSharp.MethodCore::spec
	MethodSpec_t1F247458D5C0280C8F2D2D04F96F150CAB2D2873* ___spec_21;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Mono.CSharp.PropertyBasedMember
struct PropertyBasedMember_tB99A8BC6BA17227592330DEEB0A9F40300034337  : public InterfaceMemberBase_t4D64B2D2F08F79FD8D8815B8A8D9251C7FA00380
{
};

// Mono.CSharp.StringConstant
struct StringConstant_tA9CB6686EC163D3497B8C734398F514BB9D3A529  : public Constant_t40F4F9F606F3BDF667223C6E625B262D01629F84
{
	// System.String Mono.CSharp.StringConstant::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_4;
};

// Mono.CSharp.PropertyBase/GetMethod
struct GetMethod_t9E5E2DE29A4DA81D233C3FE15B560BF8CFB9E401  : public PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729
{
};

struct GetMethod_t9E5E2DE29A4DA81D233C3FE15B560BF8CFB9E401_StaticFields
{
	// System.String[] Mono.CSharp.PropertyBase/GetMethod::attribute_targets
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_targets_15;
};

// Mono.CSharp.PropertyBase/SetMethod
struct SetMethod_t0FC7A0295FBA08B342433D7871B4CFDBD4EB7812  : public PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729
{
	// Mono.CSharp.ParametersCompiled Mono.CSharp.PropertyBase/SetMethod::parameters
	ParametersCompiled_tAE83A848B0899B138F2FBD903B4CAE7ABAE79403* ___parameters_17;
};

struct SetMethod_t0FC7A0295FBA08B342433D7871B4CFDBD4EB7812_StaticFields
{
	// System.String[] Mono.CSharp.PropertyBase/SetMethod::attribute_targets
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_targets_15;
};

// Mono.CSharp.CharLiteral
struct CharLiteral_t1E6A7CFEE9EF888E93353573B577BBEA02B90559  : public CharConstant_t6F062535212C850E3047DDB583CE11E5E8D77624
{
};

// Mono.CSharp.Constructor
struct Constructor_t2200881FF868A83DFA2695D780716B13269A2FD3  : public MethodCore_t0D301677EEFAAEA98E27A5CF8D37ADB1A30910CF
{
	// System.Reflection.Emit.ConstructorBuilder Mono.CSharp.Constructor::ConstructorBuilder
	ConstructorBuilder_tABABEF93285F84BBF36A02B182D561FD32019316* ___ConstructorBuilder_22;
	// Mono.CSharp.ConstructorInitializer Mono.CSharp.Constructor::Initializer
	ConstructorInitializer_t82F960D141DBA7E40EF6A7ED2E0415C157AE03B2* ___Initializer_23;
	// System.Collections.Generic.Dictionary`2<System.Security.Permissions.SecurityAction,System.Security.PermissionSet> Mono.CSharp.Constructor::declarative_security
	Dictionary_2_tBE4D4B305852DFEADD92059FE44C53D94EE9BD38* ___declarative_security_24;
	// System.Boolean Mono.CSharp.Constructor::has_compliant_args
	bool ___has_compliant_args_25;
	// Mono.CompilerServices.SymbolWriter.SourceMethodBuilder Mono.CSharp.Constructor::debug_builder
	SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* ___debug_builder_26;
	// System.Boolean Mono.CSharp.Constructor::<IsPrimaryConstructor>k__BackingField
	bool ___U3CIsPrimaryConstructorU3Ek__BackingField_31;
};

struct Constructor_t2200881FF868A83DFA2695D780716B13269A2FD3_StaticFields
{
	// System.String[] Mono.CSharp.Constructor::attribute_targets
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_targets_28;
	// System.String Mono.CSharp.Constructor::ConstructorName
	String_t* ___ConstructorName_29;
	// System.String Mono.CSharp.Constructor::TypeConstructorName
	String_t* ___TypeConstructorName_30;
};

// Mono.CSharp.DecimalLiteral
struct DecimalLiteral_tC03D6E866095F8A6525F39C93E1206F7130F1EB6  : public DecimalConstant_t7FB5AC2ACA55CDAC13F35F8A8D5BF7B31A425BD4
{
};

// Mono.CSharp.DoubleLiteral
struct DoubleLiteral_t51128E740EEDBB12E4B42437AB82302AAFD3AA3B  : public DoubleConstant_t953C7B823FDF2461B86A64E5228A188D24058B4E
{
};

// Mono.CSharp.FloatLiteral
struct FloatLiteral_t51F22CDF1AAAF07702F84B67067238201FE95883  : public FloatConstant_tF32DBB7F7A2F1F074EC566510E0D9CA92640E1C8
{
};

// Mono.CSharp.IntConstant
struct IntConstant_t1248F9AD466C09DD97297C1BD2FB0A02B35B81F2  : public IntegralConstant_t6492668D8C93B5C4C7DC695B98A792304D7D9774
{
	// System.Int32 Mono.CSharp.IntConstant::Value
	int32_t ___Value_4;
};

// Mono.CSharp.LongConstant
struct LongConstant_t4C8AB01E65E7A813391590C810848B6F12A1F545  : public IntegralConstant_t6492668D8C93B5C4C7DC695B98A792304D7D9774
{
	// System.Int64 Mono.CSharp.LongConstant::Value
	int64_t ___Value_4;
};

// Mono.CSharp.MethodOrOperator
struct MethodOrOperator_t5A7835FC852DD5545D471174332B762CC061E8A4  : public MethodCore_t0D301677EEFAAEA98E27A5CF8D37ADB1A30910CF
{
	// Mono.CSharp.ReturnParameter Mono.CSharp.MethodOrOperator::return_attributes
	ReturnParameter_t96B0FAE8128515B913C10905F663256FC78025D8* ___return_attributes_22;
	// System.Collections.Generic.Dictionary`2<System.Security.Permissions.SecurityAction,System.Security.PermissionSet> Mono.CSharp.MethodOrOperator::declarative_security
	Dictionary_2_tBE4D4B305852DFEADD92059FE44C53D94EE9BD38* ___declarative_security_23;
	// Mono.CSharp.MethodData Mono.CSharp.MethodOrOperator::MethodData
	MethodData_tC18E902BAF199D80027581AAA48D7F3F5CD2C5B1* ___MethodData_24;
};

struct MethodOrOperator_t5A7835FC852DD5545D471174332B762CC061E8A4_StaticFields
{
	// System.String[] Mono.CSharp.MethodOrOperator::attribute_targets
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_targets_25;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// Mono.CSharp.PropertyBase
struct PropertyBase_t7861DAC749F3B502B1F573B39E9C3A1F2E4AE78A  : public PropertyBasedMember_tB99A8BC6BA17227592330DEEB0A9F40300034337
{
	// Mono.CSharp.PropertyBase/PropertyMethod Mono.CSharp.PropertyBase::get
	PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729* ___get_20;
	// Mono.CSharp.PropertyBase/PropertyMethod Mono.CSharp.PropertyBase::set
	PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729* ___set_21;
	// Mono.CSharp.PropertyBase/PropertyMethod Mono.CSharp.PropertyBase::first
	PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729* ___first_22;
	// System.Reflection.Emit.PropertyBuilder Mono.CSharp.PropertyBase::PropertyBuilder
	PropertyBuilder_t2942A01F56306FF5B06D3823F4B9B88BC66C0718* ___PropertyBuilder_23;
};

struct PropertyBase_t7861DAC749F3B502B1F573B39E9C3A1F2E4AE78A_StaticFields
{
	// System.String[] Mono.CSharp.PropertyBase::attribute_targets
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_targets_19;
};

// Mono.CSharp.StringLiteral
struct StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F  : public StringConstant_tA9CB6686EC163D3497B8C734398F514BB9D3A529
{
};

// Mono.CSharp.UIntConstant
struct UIntConstant_t0E3C312C759370A9BD1CEB544EA4BF307E457CDF  : public IntegralConstant_t6492668D8C93B5C4C7DC695B98A792304D7D9774
{
	// System.UInt32 Mono.CSharp.UIntConstant::Value
	uint32_t ___Value_4;
};

// Mono.CSharp.ULongConstant
struct ULongConstant_t3BE108DC942CA6794BCB8B99742A467622173792  : public IntegralConstant_t6492668D8C93B5C4C7DC695B98A792304D7D9774
{
	// System.UInt64 Mono.CSharp.ULongConstant::Value
	uint64_t ___Value_4;
};

// Mono.CSharp.Indexer/GetIndexerMethod
struct GetIndexerMethod_t38D7E529DD1696F23F82FDD9032768F6E69476C7  : public GetMethod_t9E5E2DE29A4DA81D233C3FE15B560BF8CFB9E401
{
	// Mono.CSharp.ParametersCompiled Mono.CSharp.Indexer/GetIndexerMethod::parameters
	ParametersCompiled_tAE83A848B0899B138F2FBD903B4CAE7ABAE79403* ___parameters_17;
};

// Mono.CSharp.Indexer/SetIndexerMethod
struct SetIndexerMethod_tA22D80016784BBEA077DF7013B5D5CD46C13EA29  : public SetMethod_t0FC7A0295FBA08B342433D7871B4CFDBD4EB7812
{
};

// Mono.CSharp.Property/BackingFieldDeclaration
struct BackingFieldDeclaration_t7D8D30EAEFB3837AD6FA5AE77D15BAC675689387  : public Field_tD6CD0907596C64D267AAC93A67834B0C9817F4E4
{
	// Mono.CSharp.Property Mono.CSharp.Property/BackingFieldDeclaration::property
	Property_t6C97FAAC2707D6F98A4B830C045A02B484D765EA* ___property_16;
};

// Mono.CSharp.Destructor
struct Destructor_t71CBEB9748E646C108306086B289A61445E40B39  : public MethodOrOperator_t5A7835FC852DD5545D471174332B762CC061E8A4
{
};

struct Destructor_t71CBEB9748E646C108306086B289A61445E40B39_StaticFields
{
	// System.String[] Mono.CSharp.Destructor::attribute_targets
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_targets_27;
	// System.String Mono.CSharp.Destructor::MetadataName
	String_t* ___MetadataName_28;
};

// Mono.CSharp.IntLiteral
struct IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42  : public IntConstant_t1248F9AD466C09DD97297C1BD2FB0A02B35B81F2
{
};

// Mono.CSharp.LongLiteral
struct LongLiteral_t89E1D3294B9B21E3E82F8741599EECC3A58B4041  : public LongConstant_t4C8AB01E65E7A813391590C810848B6F12A1F545
{
};

// Mono.CSharp.Property
struct Property_t6C97FAAC2707D6F98A4B830C045A02B484D765EA  : public PropertyBase_t7861DAC749F3B502B1F573B39E9C3A1F2E4AE78A
{
	// Mono.CSharp.Property/BackingFieldDeclaration Mono.CSharp.Property::<BackingField>k__BackingField
	BackingFieldDeclaration_t7D8D30EAEFB3837AD6FA5AE77D15BAC675689387* ___U3CBackingFieldU3Ek__BackingField_25;
	// Mono.CSharp.Expression Mono.CSharp.Property::<Initializer>k__BackingField
	Expression_t765E7793407091A8450573D552B39FDD6121FF49* ___U3CInitializerU3Ek__BackingField_26;
};

struct Property_t6C97FAAC2707D6F98A4B830C045A02B484D765EA_StaticFields
{
	// System.String[] Mono.CSharp.Property::attribute_target_auto
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___attribute_target_auto_24;
};

// Mono.CSharp.UIntLiteral
struct UIntLiteral_tE7E15D2BAA2D40F2165976E0E179176BFF936B0C  : public UIntConstant_t0E3C312C759370A9BD1CEB544EA4BF307E457CDF
{
};

// Mono.CSharp.ULongLiteral
struct ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE  : public ULongConstant_t3BE108DC942CA6794BCB8B99742A467622173792
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Dictionary`2<System.Char[],System.String>[]
struct Dictionary_2U5BU5D_tB3D5B174D6C376DBA5BB7B48C3F60DBABD0D2F46  : public RuntimeArray
{
	ALIGN_FIELD (8) Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* m_Items[1];

	inline Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.CSharp.LocatedToken[]
struct LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF  : public RuntimeArray
{
	ALIGN_FIELD (8) LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* m_Items[1];

	inline LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.CSharp.Tokenizer/KeywordEntry`1<System.Int32>[]
struct KeywordEntry_1U5BU5D_tCB7E1065670548912647EED29D7FCDD320EFB205  : public RuntimeArray
{
	ALIGN_FIELD (8) KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* m_Items[1];

	inline KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.CSharp.Tokenizer/KeywordEntry`1<System.Int32>[][]
struct KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19  : public RuntimeArray
{
	ALIGN_FIELD (8) KeywordEntry_1U5BU5D_tCB7E1065670548912647EED29D7FCDD320EFB205* m_Items[1];

	inline KeywordEntry_1U5BU5D_tCB7E1065670548912647EED29D7FCDD320EFB205* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeywordEntry_1U5BU5D_tCB7E1065670548912647EED29D7FCDD320EFB205** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeywordEntry_1U5BU5D_tCB7E1065670548912647EED29D7FCDD320EFB205* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline KeywordEntry_1U5BU5D_tCB7E1065670548912647EED29D7FCDD320EFB205* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeywordEntry_1U5BU5D_tCB7E1065670548912647EED29D7FCDD320EFB205** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeywordEntry_1U5BU5D_tCB7E1065670548912647EED29D7FCDD320EFB205* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.CSharp.Tokenizer/KeywordEntry`1<Mono.CSharp.Tokenizer/PreprocessorDirective>[]
struct KeywordEntry_1U5BU5D_tCD7EC0B45DFBAE2FE37133CF321C0D3B059F0BB9  : public RuntimeArray
{
	ALIGN_FIELD (8) KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* m_Items[1];

	inline KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.CSharp.Tokenizer/KeywordEntry`1<Mono.CSharp.Tokenizer/PreprocessorDirective>[][]
struct KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205  : public RuntimeArray
{
	ALIGN_FIELD (8) KeywordEntry_1U5BU5D_tCD7EC0B45DFBAE2FE37133CF321C0D3B059F0BB9* m_Items[1];

	inline KeywordEntry_1U5BU5D_tCD7EC0B45DFBAE2FE37133CF321C0D3B059F0BB9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeywordEntry_1U5BU5D_tCD7EC0B45DFBAE2FE37133CF321C0D3B059F0BB9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeywordEntry_1U5BU5D_tCD7EC0B45DFBAE2FE37133CF321C0D3B059F0BB9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline KeywordEntry_1U5BU5D_tCD7EC0B45DFBAE2FE37133CF321C0D3B059F0BB9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeywordEntry_1U5BU5D_tCD7EC0B45DFBAE2FE37133CF321C0D3B059F0BB9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeywordEntry_1U5BU5D_tCD7EC0B45DFBAE2FE37133CF321C0D3B059F0BB9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// Mono.CSharp.TypeSpec[]
struct TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114  : public RuntimeArray
{
	ALIGN_FIELD (8) TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* m_Items[1];

	inline TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.CSharp.Location[]
struct LocationU5BU5D_t195DF0270FB27D79826996D4A5F1780C89F3E7B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F m_Items[1];

	inline Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<Mono.CSharp.Location>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFF3070F83F68FD0F10EA9D1EF3A53CCEE56B712B_gshared (List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.CSharp.Location>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m275C153933BEFF417D72F1BD5976E41A77DE23B6_gshared_inline (List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Mono.CSharp.Location>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF1252BCF050DC219DD15708981003D78C939E8BC_gshared (List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m25F8C6095172E75DEE8A43E857889659DFC4DCE9_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::AddKeyword<System.Int32>(Mono.CSharp.Tokenizer/KeywordEntry`1<T>[][],System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_AddKeyword_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3873DA659F0BC6D9FEE30AD9E0F3992A3A5A5DB0_gshared (KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19* ___keywords0, String_t* ___kw1, int32_t ___token2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::AddKeyword<System.Int32Enum>(Mono.CSharp.Tokenizer/KeywordEntry`1<T>[][],System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_AddKeyword_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m88EAB0EB5681AAF426E3F508616E36CA5E6A9D7C_gshared (KeywordEntry_1U5BU5DU5BU5D_tD8B18FBA638863B6C4BAA7C745A29E428EAF1125* ___keywords0, String_t* ___kw1, int32_t ___token2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Char>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.ArrayComparer::IsEqual<System.Byte>(T[],T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayComparer_IsEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA5B793CAAEB81083356BF4057927F00B9D1E15F3_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array10, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array21, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_gshared_inline (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m141F1BE46354DA6AD95BD4791941D8BB59594DCA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Boolean>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD7C58157E038255E7D2C956BEC020F4835682CA_gshared_inline (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Boolean>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Stack_1_Pop_m68EAE72219A7C7459E95260B09AB9EAD32F6B27F_gshared (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m6EC8F6DFB03F48090B2768C311A6491293620005_gshared (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Boolean>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m024670CA23B430BF35DADCA63F4DF6B1778973BB_gshared (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, bool ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Char>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, Il2CppChar ___value1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.Stack`1<System.Int32>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Stack_1_ToArray_m66CF092BE9D2A70AA67FD5F4BC2CA8A84088B5A7_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m214909CE46866ED73425C022CB87D3E96E110ED3_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.Stack`1<System.Boolean>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Stack_1_ToArray_m890D1E5AC644DF0BFAF349445E0CB6FA648847E9_gshared (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m5B2060AFE570B469BD60AB99341BE39E6448D191_gshared (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Mono.CSharp.SourceFile Mono.CSharp.Location::get_SourceFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* Location_get_SourceFile_mC1E46ACCBC208E8414AE8064067E6AE3CCF83A26 (Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Location::get_Row()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Location_get_Row_mF258AE3243F9B1052CDEAD530A7C26AF1B1A7EA8 (Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Location::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Location_get_Column_m294860C178F51F8F92069B8595010A07AA646BFF (Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F* __this, const RuntimeMethod* method) ;
// System.String Mono.CSharp.LocatedToken::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LocatedToken_get_Value_m263F59DAA5084E7D2F377B82EFA1A66E86C13E24_inline (LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Location::.ctor(Mono.CSharp.SourceFile,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location__ctor_mC6B21F2E96C725F5B7CBFB2476132D9520C9E78F (Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F* __this, SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* ___file0, int32_t ___row1, int32_t ___column2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::check_incorrect_doc_comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_check_incorrect_doc_comment_m016964722F7CA23A327E6C1588926527C7B2F251 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::reset_doc_comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_reset_doc_comment_m4C3EDD6A7ED41486DE74D7103D00F5AD36ED57D4 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.CSharp.Location>::.ctor()
inline void List_1__ctor_mFF3070F83F68FD0F10EA9D1EF3A53CCEE56B712B (List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t124684566062F37FF59D2D03C2F0187ADEA53771*, const RuntimeMethod*))List_1__ctor_mFF3070F83F68FD0F10EA9D1EF3A53CCEE56B712B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.CSharp.Location>::Add(T)
inline void List_1_Add_m275C153933BEFF417D72F1BD5976E41A77DE23B6_inline (List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t124684566062F37FF59D2D03C2F0187ADEA53771*, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F, const RuntimeMethod*))List_1_Add_m275C153933BEFF417D72F1BD5976E41A77DE23B6_gshared_inline)(__this, ___item0, method);
}
// Mono.CSharp.Location Mono.CSharp.Expression::get_Location()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F Expression_get_Location_m3D9275E6E3D4C3F546D8E638F0B2533C38258620_inline (Expression_t765E7793407091A8450573D552B39FDD6121FF49* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Mono.CSharp.Location>::Contains(T)
inline bool List_1_Contains_mF1252BCF050DC219DD15708981003D78C939E8BC (List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t124684566062F37FF59D2D03C2F0187ADEA53771*, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F, const RuntimeMethod*))List_1_Contains_mF1252BCF050DC219DD15708981003D78C939E8BC_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<Mono.CSharp.Tokenizer/Position>::.ctor(System.Int32)
inline void Stack_1__ctor_m1AEB6531CEC8C8917D39FB69EE344DF5F72045FC (Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9*, int32_t, const RuntimeMethod*))Stack_1__ctor_m25F8C6095172E75DEE8A43E857889659DFC4DCE9_gshared)(__this, ___capacity0, method);
}
// Mono.CSharp.SourceFile Mono.CSharp.CompilationSourceFile::get_SourceFile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* CompilationSourceFile_get_SourceFile_mD4C9C9D916DD200F3CAC75049E6B186FEE999C02_inline (CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* __this, const RuntimeMethod* method) ;
// Mono.CSharp.LocatedToken[] Mono.CSharp.ParserSession::get_LocatedTokens()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* ParserSession_get_LocatedTokens_m7F7D94B39EF86CC0C50FAB086BC4C9F2DCCBAE6B_inline (ParserSession_tE9F339A49DFCF899A338AE7D39CA9BAF6988447E* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer/LocatedTokenBuffer::.ctor(Mono.CSharp.LocatedToken[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocatedTokenBuffer__ctor_mBAACEC3D5657C4B39A5D1BA95DC386E5AA5EE1CB (LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* __this, LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// Mono.CSharp.CompilerSettings Mono.CSharp.CompilerContext::get_Settings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline (CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer/Position::.ctor(Mono.CSharp.Tokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Position__ctor_mB4455C58FECA440B129693B3EBCC9B3485F0D382 (Position_t54676CA533325D551EE246260967D8F0BDDDB40A* __this, Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* ___t0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Mono.CSharp.Tokenizer/Position>::Push(T)
inline void Stack_1_Push_m5B1B55EFA9D3F8469BCA9EE43F791B1B7375483F (Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9* __this, Position_t54676CA533325D551EE246260967D8F0BDDDB40A* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9*, Position_t54676CA533325D551EE246260967D8F0BDDDB40A*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.Stack`1<Mono.CSharp.Tokenizer/Position>::Pop()
inline Position_t54676CA533325D551EE246260967D8F0BDDDB40A* Stack_1_Pop_m942017CBF9A74BAF54E0BAC2CBC3FA73F6234625 (Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9* __this, const RuntimeMethod* method)
{
	return ((  Position_t54676CA533325D551EE246260967D8F0BDDDB40A* (*) (Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void Mono.CSharp.SeekableStreamReader::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeekableStreamReader_set_Position_m62278E8B403D6AF0758B1620F94C214EA92EA7F7 (SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void Mono.CSharp.Tokenizer::AddKeyword<System.Int32>(Mono.CSharp.Tokenizer/KeywordEntry`1<T>[][],System.String,T)
inline void Tokenizer_AddKeyword_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3873DA659F0BC6D9FEE30AD9E0F3992A3A5A5DB0 (KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19* ___keywords0, String_t* ___kw1, int32_t ___token2, const RuntimeMethod* method)
{
	((  void (*) (KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19*, String_t*, int32_t, const RuntimeMethod*))Tokenizer_AddKeyword_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3873DA659F0BC6D9FEE30AD9E0F3992A3A5A5DB0_gshared)(___keywords0, ___kw1, ___token2, method);
}
// System.Void Mono.CSharp.Tokenizer::AddKeyword<Mono.CSharp.Tokenizer/PreprocessorDirective>(Mono.CSharp.Tokenizer/KeywordEntry`1<T>[][],System.String,T)
inline void Tokenizer_AddKeyword_TisPreprocessorDirective_tAA081647C985CC6EE717A9564276EDFCA2911534_m2542978B773A6B2D5BD81C07CBA1B9561277533D (KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205* ___keywords0, String_t* ___kw1, int32_t ___token2, const RuntimeMethod* method)
{
	((  void (*) (KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205*, String_t*, int32_t, const RuntimeMethod*))Tokenizer_AddKeyword_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m88EAB0EB5681AAF426E3F508616E36CA5E6A9D7C_gshared)(___keywords0, ___kw1, ___token2, method);
}
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void Mono.CSharp.Tokenizer::AddKeyword(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83 (String_t* ___kw0, int32_t ___token1, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::AddPreprocessorKeyword(System.String,Mono.CSharp.Tokenizer/PreprocessorDirective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3 (String_t* ___kw0, int32_t ___directive1, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA (const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::peek_token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_peek_token_mAF963CC1D86BC58267185B27EED5781642976641 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::PushPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_PushPosition_mB7AD2611F8561B13DCEF78328C2A8F2BD5B20DFC (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::xtoken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_xtoken_m9CAFDB4C6A680DD16C7E816961892809988F468B (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// Mono.CSharp.Location Mono.CSharp.Tokenizer::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Report::FeatureIsNotAvailable(Mono.CSharp.CompilerContext,Mono.CSharp.Location,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Report_FeatureIsNotAvailable_m3B6E75516D3353EECA9E8695F328132F5390B5BD (Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* __this, CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* ___compiler0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc1, String_t* ___feature2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Expression::Error_VoidInvalidInTheContext(Mono.CSharp.Location,Mono.CSharp.Report)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expression_Error_VoidInvalidInTheContext_m8A0DA33BF8D8592DD2DA1733C05FB8C6AEB4FCCC (Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc0, Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* ___Report1, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::PopPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Report::Error(System.Int32,Mono.CSharp.Location,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919 (Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* __this, int32_t ___code0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc1, String_t* ___error2, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::is_identifier_start_character_slow_part(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_is_identifier_start_character_slow_part_m6614AFFEE1931747A22E503047CE3DAECACD20D6 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::is_identifier_part_character_slow_part(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_is_identifier_part_character_slow_part_mC6325EC6BC0EBCE43EFC2F195E3B28278E4936B1 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Globalization.UnicodeCategory System.Char::GetUnicodeCategory(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Char_GetUnicodeCategory_m77918F2C9C8E103453F2146071739767CA65F6DC (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(T)
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::is_identifier_start_character(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_is_identifier_start_character_m7260FDF47153E1BA05155D2BA5BE95D786F09FEE (int32_t ___c0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::is_identifier_part_character(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_is_identifier_part_character_m320FF0CA1E98E3F6B9C4506F7E41E116E3AF5A36 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::parse_less_than(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_parse_less_than_mED4B484E7F99EA932B9877CCC7621069F7807A64 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t* ___genericDimension0, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::peek_char()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::get_char()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::Error_NumericConstantTooLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Error_NumericConstantTooLong_mCE5111A5B9CE281E6599AA1CE8C4659D12268BC8 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::peek_char2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_peek_char2_m4B3F1B4AAB1173263D2A67BFEDA3EA4665BF271B (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Report::Warning(System.Int32,System.Int32,Mono.CSharp.Location,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Report_Warning_mB2724C097397520000542A4448087B39C37C928A (Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* __this, int32_t ___code0, int32_t ___level1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, String_t* ___message3, const RuntimeMethod* method) ;
// Mono.CSharp.BuiltinTypes Mono.CSharp.CompilerContext::get_BuiltinTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline (CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.ULongLiteral::.ctor(Mono.CSharp.BuiltinTypes,System.UInt64,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULongLiteral__ctor_m03D2584164233A5F7F386E2E407A4E997A084ED7 (ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE* __this, BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* ___types0, uint64_t ___l1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.UIntLiteral::.ctor(Mono.CSharp.BuiltinTypes,System.UInt32,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntLiteral__ctor_mC235DC0BE76C637B8B847D00CA99DBAF10F06AE7 (UIntLiteral_tE7E15D2BAA2D40F2165976E0E179176BFF936B0C* __this, BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* ___types0, uint32_t ___l1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.LongLiteral::.ctor(Mono.CSharp.BuiltinTypes,System.Int64,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongLiteral__ctor_m413D66C8A74D0CB62AF5926458BA94BBD92227F0 (LongLiteral_t89E1D3294B9B21E3E82F8741599EECC3A58B4041* __this, BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* ___types0, int64_t ___l1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.IntLiteral::.ctor(Mono.CSharp.BuiltinTypes,System.Int32,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntLiteral__ctor_m429683C923AFDC87A2F3642E9E6CC57544FEE1E2 (IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42* __this, BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* ___types0, int32_t ___l1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) ;
// Mono.CSharp.ILiteralConstant Mono.CSharp.Tokenizer::integer_type_suffix(System.UInt64,System.Int32,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_integer_type_suffix_m4C328322EA13241C258F9D0E132C0164C5C3E95D (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, uint64_t ___ul0, int32_t ___c1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Parse_m6023D6BA10DAAF7AA6443D08022299A0529B7107 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.DecimalLiteral::.ctor(Mono.CSharp.BuiltinTypes,System.Decimal,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalLiteral__ctor_m89849BBB4EAD571FD19663725DACC6DBBD8B13F2 (DecimalLiteral_tC03D6E866095F8A6525F39C93E1206F7130F1EB6* __this, BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* ___types0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Report::Error(System.Int32,Mono.CSharp.Location,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD (Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* __this, int32_t ___code0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc1, String_t* ___format2, String_t* ___arg3, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m0E74607D17E172B4F1306E62BD12CE2905FA5638 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.FloatLiteral::.ctor(Mono.CSharp.BuiltinTypes,System.Single,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatLiteral__ctor_m37D1CEF80F62A9043ECCA76EEEBFFFC36738B074 (FloatLiteral_t51F22CDF1AAAF07702F84B67067238201FE95883* __this, BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* ___types0, float ___f1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mA6BD954627BB3B2317D7BA7D4B29DCA53C660058 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.DoubleLiteral::.ctor(Mono.CSharp.BuiltinTypes,System.Double,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleLiteral__ctor_m906F4BC289A621D57F678F6DE4E9AFF51C3F3E5A (DoubleLiteral_t51128E740EEDBB12E4B42437AB82302AAFD3AA3B* __this, BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* ___types0, double ___d1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::is_hex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_is_hex_m0C98BA8DD79B5F36802A3B005D3F87A5FFAF443D (int32_t ___e0, const RuntimeMethod* method) ;
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UInt32_Parse_m5B91BE3C4654E3FA80F55AED00460D7234961E9E (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method) ;
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_m5D07DDFA6DA8E3F85D6E07EAE33756AF742CBAB0 (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method) ;
// Mono.CSharp.ILiteralConstant Mono.CSharp.Tokenizer::handle_hex(Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_handle_hex_mEE3B26772D1D8441B840B553C7201A07CED14298 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::decimal_digits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_decimal_digits_m216C1600B7DE48FEAA73067DE54EECE4AFF567BF (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::putback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_putback_m217554D6533CE31AF351F557DAD16E75D64E414D (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, const RuntimeMethod* method) ;
// Mono.CSharp.ILiteralConstant Mono.CSharp.Tokenizer::adjust_int(System.Int32,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc1, const RuntimeMethod* method) ;
// System.TypeCode Mono.CSharp.Tokenizer::real_type_suffix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_real_type_suffix_m9186CF1BA335DB5207368F79FC0D773AF9811B9F (int32_t ___c0, const RuntimeMethod* method) ;
// Mono.CSharp.ILiteralConstant Mono.CSharp.Tokenizer::adjust_real(System.TypeCode,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_adjust_real_m5795B836B2E7B8DAA8987EF4E373C48EDCBB3213 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___t0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc1, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::getHex(System.Int32,System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_getHex_m9B19E8F678EBFA008E3A813358388F87C5AF64D3 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___count0, int32_t* ___surrogate1, bool* ___error2, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::EscapeUnicode(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_EscapeUnicode_m6ECB2CD09691BC03C7473597C12495FAADF91374 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___ch0, int32_t* ___surrogate1, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.SeekableStreamReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeekableStreamReader_Read_mBC8FFD4D6E233325F0FBFC987739EADCD28354E7 (SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::advance_line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_advance_line_m75BBC1A2DDC9A77C6B279A6E6D63F9E61D3ADFA7 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.SeekableStreamReader::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeekableStreamReader_Peek_m58A564CFFC8B298DCEB17B7D34CD9CAED0744512 (SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.InternalErrorException::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalErrorException__ctor_m033E52A8B3F71686F4DC77197816349D5CAB9701 (InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC* __this, String_t* ___message0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::TokenizePreprocessorKeyword(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizePreprocessorKeyword_m9A902756AAA399007F64D8CFDCDE7E6B67EE5D6E (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t* ___c0, const RuntimeMethod* method) ;
// Mono.CSharp.Tokenizer/PreprocessorDirective Mono.CSharp.Tokenizer::GetPreprocessorDirective(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_GetPreprocessorDirective_mBB14540054D54C3D56D4732741156CC2CEBD301A (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___id0, int32_t ___id_len1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Char>(T[]&,System.Int32)
inline void Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB**, int32_t, const RuntimeMethod*))Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_gshared)(___array0, ___newSize1, method);
}
// System.Void Mono.CSharp.Tokenizer::ReadToEndOfLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_ReadToEndOfLine_mD43187E9D07BBB288567FAB6723840FA9A9F5256 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.String Mono.CSharp.Tokenizer::InternIdentifier(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tokenizer_InternIdentifier_m6D0ACAD13122A0CE0A4ADD8B9338D18284860161 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___charBuffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimChars0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::IsTokenIdentifierEqual(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_IsTokenIdentifierEqual_m5F78CD40289588FCC34E5E8F1CCD68837662B35F (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___identifier0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Location::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Location_get_IsNull_mB0AF4B83C09E3D2775D5FC011F67CE749E7CBD69 (Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.SourceFile::RegisterHiddenScope(Mono.CSharp.Location,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceFile_RegisterHiddenScope_m39A4B57F3C9DF4AE24186AFCE6333BDC3E8F68AC (SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___start0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___end1, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::TokenizeNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizeNumber_mAFCAB3E79394CE9F24E9F6B773B00101D59017DA (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String Mono.CSharp.Tokenizer::TokenizeFileName(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tokenizer_TokenizeFileName_mBCD5522379E2C45A66F132884CCB582E9AEE5343 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t* ___c0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::ReadSingleLineComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_ReadSingleLineComment_m5B7AD63814EC394342F0BECF12D28B1A48DD71C3 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::Error_EndLineExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Error_EndLineExpected_m11ED1E600529CDBD83B6C60B8022AD030ADBC4B4 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// Mono.CSharp.SourceFile Mono.CSharp.CompilerContext::LookupFile(Mono.CSharp.CompilationSourceFile,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* CompilerContext_LookupFile_m2E93989AC5545C260EAD487B7CDA41209EF2F4FA (CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* __this, CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* ___comp_unit0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.CompilationSourceFile::AddIncludeFile(Mono.CSharp.SourceFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationSourceFile_AddIncludeFile_mC7EBD0BE20BEFC4CFAE718C14303B84F710711BB (CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* __this, SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* ___file0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOfAny(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.CompilerSettings::IsConditionalSymbolDefined(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompilerSettings_IsConditionalSymbolDefined_mE0F455B8D652BC5EE5A4E375B750D20A77E22C46 (CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* __this, String_t* ___symbol0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.CompilationSourceFile::AddDefine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationSourceFile_AddDefine_mBF19009799C35D96A2780958CAA56F6351217450 (CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.CompilationSourceFile::AddUndefine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationSourceFile_AddUndefine_mD2E581E68484724EBC5BBB62CCAEBB2D52725323 (CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte Mono.CSharp.Tokenizer::read_hex(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Tokenizer_read_hex_m010CFF0489C779C18FB90FDAD203DC4C7DCCEA40 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool* ___error0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
inline void List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, int32_t, const RuntimeMethod*))List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
inline void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
// System.Boolean Mono.CSharp.SourceFile::get_HasChecksum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SourceFile_get_HasChecksum_m111B197E3930BB30C9AAE893914BC4D3898351A5 (SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* __this, const RuntimeMethod* method) ;
// System.Byte[] Mono.CSharp.SourceFile::get_Checksum()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SourceFile_get_Checksum_m29CBF0D9BFC3F9C5983F7461E0DEBE5D01432D4B_inline (SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.ArrayComparer::IsEqual<System.Byte>(T[],T[])
inline bool ArrayComparer_IsEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA5B793CAAEB81083356BF4057927F00B9D1E15F3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array10, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array21, const RuntimeMethod* method)
{
	return ((  bool (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ArrayComparer_IsEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA5B793CAAEB81083356BF4057927F00B9D1E15F3_gshared)(___array10, ___array21, method);
}
// System.Void Mono.CSharp.Report::Warning(System.Int32,System.Int32,Mono.CSharp.Location,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Report_Warning_m462594FD369AE2148FE2671DC4FFE246037C40F1 (Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* __this, int32_t ___code0, int32_t ___level1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, String_t* ___format3, String_t* ___arg4, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.SourceFile::SetChecksum(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceFile_SetChecksum_m8CC40BFB73977BE38C47710873622BB0AC708C5A (SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___algorithmGuid0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___checksum1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::ReadPragmaWarningComment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_ReadPragmaWarningComment_m97DEBB052435F9FDCE30D8A939CC8109A26E2846 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, const RuntimeMethod* method) ;
// Mono.CSharp.WarningRegions Mono.CSharp.Report::RegisterWarningRegion(Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WarningRegions_tC187DC7F540F83465E907555DE5E1DF610FB06E3* Report_RegisterWarningRegion_m6D6456316314C3820FFFE7A44275E082DBFB481A (Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___location0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.WarningRegions::WarningDisable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarningRegions_WarningDisable_mC6EB2879475C17EE1EBB27ED420816BB78BEE055 (WarningRegions_tC187DC7F540F83465E907555DE5E1DF610FB06E3* __this, int32_t ___line0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.WarningRegions::WarningEnable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarningRegions_WarningEnable_m4C2BBC16F1CBA97CCC445AAB845B7ACC4EBE5170 (WarningRegions_tC187DC7F540F83465E907555DE5E1DF610FB06E3* __this, int32_t ___line0, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::TokenizePragmaWarningIdentifier(System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizePragmaWarningIdentifier_m8C39CFA1DC983EBD4CF36CCAD0D608AD9A27DA19 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t* ___c0, bool* ___identifier1, const RuntimeMethod* method) ;
// Mono.CSharp.Report Mono.CSharp.CompilerContext::get_Report()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* CompilerContext_get_Report_mA84DAB5EC71A6AC5A70003D9FE5D7A2226984DDD_inline (CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.WarningRegions::WarningDisable(Mono.CSharp.Location,System.Int32,Mono.CSharp.Report)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarningRegions_WarningDisable_mDCDCB8595A28CEE85F102039EEDB95F621E4410F (WarningRegions_tC187DC7F540F83465E907555DE5E1DF610FB06E3* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___location0, int32_t ___code1, Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* ___Report2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.WarningRegions::WarningEnable(Mono.CSharp.Location,System.Int32,Mono.CSharp.CompilerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WarningRegions_WarningEnable_m4691AB33242A4CB36380FFFB29135AADF412F2E2 (WarningRegions_tC187DC7F540F83465E907555DE5E1DF610FB06E3* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___location0, int32_t ___code1, CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* ___context2, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::ParsePragmaChecksum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_ParsePragmaChecksum_m8269F65AC318F477C8BF3FA36F657EED1B15DAB0 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.CompilationSourceFile::IsConditionalDefined(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompilationSourceFile_IsConditionalDefined_mB41C522347AC284AFA07CA1EDCA5304B96B9E8B4 (CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::pp_expr(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_pp_expr_mC6C26351B37D0086A4DAF7D507CE1D61D773E308 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t** ___s0, bool ___isTerm1, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::Error_InvalidDirective()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Error_InvalidDirective_m3C4A5AEF84A71813AF60BF2A6B28C177B5C9F672 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::eval_val(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_eval_val_m9FF8B86A86C2E2BF91BC66DCE3494C1FBD0B4EAF (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::pp_primary(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_pp_primary_m516651836429219F401E0E45A2F0A604E104BA9D (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t** ___s0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::pp_unary(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_pp_unary_m3496EBC8F08141A6659A062526017127466D150A (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t** ___s0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::pp_eq(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_pp_eq_mBB79CC4299EC6F7BF47AA5F9AE04E9CD9BC7C3EE (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t** ___s0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::pp_and(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_pp_and_m1BEB6FE5D5F58009B53BD07E0127859172304375 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t** ___s0, const RuntimeMethod* method) ;
// Mono.CSharp.XmlCommentState Mono.CSharp.Tokenizer::get_doc_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tokenizer_get_doc_state_m176FCD00A57BE1E90AA05268FE9AC71825968539_inline (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::set_doc_state(Mono.CSharp.XmlCommentState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_set_doc_state_mFE7CEE1075A7FCE92074719BBB7629115DF69A0E (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Mono.CSharp.Tokenizer/PreprocessorDirective Mono.CSharp.Tokenizer::get_cmd_arg(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_get_cmd_arg_m3F1B511F14BFC9CA13A04477EE3541B92AB49DE5 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t** ___arg0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
inline int32_t Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_inline (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_gshared_inline)(__this, method);
}
// System.Void Mono.CSharp.Tokenizer::Error_UnexpectedDirective(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Error_UnexpectedDirective_m2307917243591D6A15FFAAAEEAD8C693FE0D2A93 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t* ___extra0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
inline int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor(System.Int32)
inline void Stack_1__ctor_m141F1BE46354DA6AD95BD4791941D8BB59594DCA (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, int32_t, const RuntimeMethod*))Stack_1__ctor_m141F1BE46354DA6AD95BD4791941D8BB59594DCA_gshared)(__this, ___capacity0, method);
}
// T System.Collections.Generic.Stack`1<System.Int32>::Peek()
inline int32_t Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_gshared)(__this, method);
}
// System.Boolean Mono.CSharp.Tokenizer::eval(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_eval_m0C75F23C91EADA3209CE511AB5D53205DC22F9AC (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
inline void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, int32_t, const RuntimeMethod*))Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared)(__this, ___item0, method);
}
// System.Void Mono.CSharp.Tokenizer::Error_TokensSeen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Error_TokensSeen_m7831A365E93428C5EFAE2F3BEA536614482E37F1 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::PreProcessDefinition(System.Boolean,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_PreProcessDefinition_mC79F9D5593279077BE548AC73336DB2AF10DD6D6 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool ___is_define0, String_t* ___ident1, bool ___caller_is_taking2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::ParsePragmaDirective()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_ParsePragmaDirective_mFA6370C649214BB64CBD0A9531246F822CE6C421 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::PreProcessLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_PreProcessLine_m7B9C7C576A980C11F9DD93FC4FC7FF2205894D87 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Mono.CSharp.Location Mono.CSharp.Location::op_Subtraction(Mono.CSharp.Location,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F Location_op_Subtraction_mC44C585EA311B1A2A2D7A1AEF1A681270C470D85 (Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc0, int32_t ___columns1, const RuntimeMethod* method) ;
// System.String Mono.CSharp.Tokenizer::CreateStringFromBuilder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tokenizer_CreateStringFromBuilder_mF1DA2E778A70B38CB033AB8BB212C55039FA1071 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___pos0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.StringLiteral::.ctor(Mono.CSharp.BuiltinTypes,System.String,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringLiteral__ctor_m48BD6CE9DA8881B4E31CD1304BA9B3D7DE752A6B (StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F* __this, BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* ___types0, String_t* ___s1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::escape(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_escape_mC78396709ADE0CF7C4CC33402C0C8BEDA6B52B75 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, int32_t* ___surrogate1, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::consume_identifier(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_consume_identifier_mB55320A0CCAE29FD6121CAEC215A46A8B55336E2 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, bool ___quoted1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::GetKeyword(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_GetKeyword_m9B9C31351710F59E78FE336F80778817372203A0 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___id0, int32_t ___id_len1, const RuntimeMethod* method) ;
// Mono.CSharp.LocatedToken Mono.CSharp.Tokenizer/LocatedTokenBuffer::Create(System.String,Mono.CSharp.SourceFile,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* LocatedTokenBuffer_Create_m244D232DD2BA9CDECD2B4F9C844C2671ECDFEA81 (LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* __this, String_t* ___value0, SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* ___file1, int32_t ___row2, int32_t ___column3, const RuntimeMethod* method) ;
// Mono.CSharp.Location Mono.CSharp.LocatedToken::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F LocatedToken_get_Location_m0BE20259CCEAE8260414B1C68EAD616F8DD2C427 (LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::AddEscapedIdentifier(Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_AddEscapedIdentifier_m13CC2DB4043D12DB0BB334C248BE5B55F8F95624 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char[],System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m6DE9BA94E7CF48DB003DE6B65FB5735135F038ED (Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Mono.CSharp.Tokenizer/IdentifiersComparer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentifiersComparer__ctor_m80EC36DF2278F50F193B7A9CE7DDE49674EA4EAC (IdentifiersComparer_t928D506738E14DEF81F7E2384D8AD6ED2D3FA965* __this, int32_t ___length0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Char[],System.String>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m8A0F4C439E7AC9920D1029A4451254E0BFE84BD5 (Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mF67467217142A79C407188798209E4524D74D34F_gshared)(__this, ___capacity0, ___comparer1, method);
}
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Char[],System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_m75FC00D2F6ABDA5C100FA4B917AA53D08679FA95 (Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 Mono.CSharp.Tokenizer::TokenizeInterpolationFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizeInterpolationFormat_mF8E8E86DB64A757E0BD39B994AA6E10560D6C98B (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::consume_identifier(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_consume_identifier_mA3CDD0FB064E5414BF4F12184E52DC10817382A6 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___s0, const RuntimeMethod* method) ;
// Mono.CSharp.LocatedToken Mono.CSharp.Tokenizer/LocatedTokenBuffer::Create(Mono.CSharp.SourceFile,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1 (LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* __this, SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* ___file0, int32_t ___row1, int32_t ___column2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Boolean>::get_Count()
inline int32_t Stack_1_get_Count_mFD7C58157E038255E7D2C956BEC020F4835682CA_inline (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10*, const RuntimeMethod*))Stack_1_get_Count_mFD7C58157E038255E7D2C956BEC020F4835682CA_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<System.Boolean>::Pop()
inline bool Stack_1_Pop_m68EAE72219A7C7459E95260B09AB9EAD32F6B27F (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10*, const RuntimeMethod*))Stack_1_Pop_m68EAE72219A7C7459E95260B09AB9EAD32F6B27F_gshared)(__this, method);
}
// System.Int32 Mono.CSharp.Tokenizer::TokenizeInterpolatedString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizeInterpolatedString_m2C1749798ABE09EDC8CFCF84CF74CF658A974AA6 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool ___quoted0, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::TokenizeOpenParens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizeOpenParens_mDE3FE2D43F94CB118459AF969BD923719C76CCB4 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::TokenizePossibleNullableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizePossibleNullableType_m814460423EEA49AB219E2626582BF78D762FFCBF (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::TokenizeLessThan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizeLessThan_m88E1262780CFF110C29B2B169BEE2ADE5765634F (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::handle_one_line_xml_comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_handle_one_line_xml_comment_mDD2FF245BF39EA48A01A9539B9BBC4855EE27881 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::WarningMisplacedComment(Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_WarningMisplacedComment_m2783E2511B56B7B6A2EED57524768E9F9EA7B1D9 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc0, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::update_formatted_doc_comment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_update_formatted_doc_comment_m72E942B5271ECAFA44A85920596E644AFE0681E8 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___current_comment_start0, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::is_number(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_is_number_m129EBBC19E912D73534F74BBC251E3FE3FD14EBE (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, bool ___dotLead1, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::Eror_WrongPreprocessorLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Eror_WrongPreprocessorLocation_m9663849FA3CAA93F1C91E40ECB761E9A64910A53 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::ParsePreprocessingDirective(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_ParsePreprocessingDirective_m073C87279D8824C4985AE99E6AB3693BA9D2B37C (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool ___caller_is_taking0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Tokenizer::ScanClosingInterpolationBrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_ScanClosingInterpolationBrace_m25817CECFB17117025C6F3ECAF1B7F33A8F9542D (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::consume_string(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_consume_string_m3EC30B0C354899F5D6E08CC0953F7E12BBFDF199 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool ___quoted0, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.Tokenizer::TokenizeBackslash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizeBackslash_m77AFC13C8F2AF1D856AC1A48241B8158F9ED090C (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.CharLiteral::.ctor(Mono.CSharp.BuiltinTypes,System.Char,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharLiteral__ctor_m8347068CBC7024E2E1C5AB68CDB9A97C004297B7 (CharLiteral_t1E6A7CFEE9EF888E93353573B577BBEA02B90559* __this, BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* ___types0, Il2CppChar ___c1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Tokenizer::DiscardPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_DiscardPosition_mC96BF22E1E9339ECF8D2BF0B0506E53A0EF871E0 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Boolean>::.ctor()
inline void Stack_1__ctor_m6EC8F6DFB03F48090B2768C311A6491293620005 (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10*, const RuntimeMethod*))Stack_1__ctor_m6EC8F6DFB03F48090B2768C311A6491293620005_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Boolean>::Push(T)
inline void Stack_1_Push_m024670CA23B430BF35DADCA63F4DF6B1778973BB (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, bool ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10*, bool, const RuntimeMethod*))Stack_1_Push_m024670CA23B430BF35DADCA63F4DF6B1778973BB_gshared)(__this, ___item0, method);
}
// System.Int32 System.Array::IndexOf<System.Char>(T[],T)
inline int32_t Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, Il2CppChar, const RuntimeMethod*))Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_gshared)(___array0, ___value1, method);
}
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilder_ToString_m8A0AC56824DF98812AFBCD745AC6C911873CA8C0 (StringBuilder_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29 (StringBuilder_t* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.LocatedToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocatedToken__ctor_mF31867F3FA93F30627E8C60B7CE72B79BAE2985B (LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.SeekableStreamReader::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SeekableStreamReader_get_Position_m488E9B0E53AAE2CE845DA0D174721D8B3FA5A7E6 (SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.Stack`1<System.Int32>::ToArray()
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Stack_1_ToArray_m66CF092BE9D2A70AA67FD5F4BC2CA8A84088B5A7 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_ToArray_m66CF092BE9D2A70AA67FD5F4BC2CA8A84088B5A7_gshared)(__this, method);
}
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C (RuntimeArray* ___array0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void Stack_1__ctor_m214909CE46866ED73425C022CB87D3E96E110ED3 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, RuntimeObject*, const RuntimeMethod*))Stack_1__ctor_m214909CE46866ED73425C022CB87D3E96E110ED3_gshared)(__this, ___collection0, method);
}
// T[] System.Collections.Generic.Stack`1<System.Boolean>::ToArray()
inline BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Stack_1_ToArray_m890D1E5AC644DF0BFAF349445E0CB6FA648847E9 (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, const RuntimeMethod* method)
{
	return ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10*, const RuntimeMethod*))Stack_1_ToArray_m890D1E5AC644DF0BFAF349445E0CB6FA648847E9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void Stack_1__ctor_m5B2060AFE570B469BD60AB99341BE39E6448D191 (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10*, RuntimeObject*, const RuntimeMethod*))Stack_1__ctor_m5B2060AFE570B469BD60AB99341BE39E6448D191_gshared)(__this, ___collection0, method);
}
// System.Void Mono.CSharp.MemberName::.ctor(System.String,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName__ctor_m4F282421FC7E6C35C97293BB2C7FDD373987256A (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, String_t* ___name0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc1, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.MemberName::.ctor(Mono.CSharp.MemberName,System.String,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName__ctor_m12D12EFF57C9DE8FC6C877BFED691B4134D848EB (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___left0, String_t* ___name1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.MemberName::.ctor(System.String,Mono.CSharp.TypeParameters,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName__ctor_m56966B17F3656CFA427E2D7EB75FEBC827505964 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, String_t* ___name0, TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* ___tparams1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.TypeParameters::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeParameters_get_Count_m60206511FDD4CA5FCD7DB3D7FD262F24F9FE55F8 (TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* __this, const RuntimeMethod* method) ;
// System.String Mono.CSharp.MemberName::MakeName(System.String,Mono.CSharp.TypeParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberName_MakeName_mF2BADE3011B08F0C10E2F5323676D344C2532EA2 (String_t* ___name0, TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* ___args1, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.MemberName::CreateMetadataName(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName_CreateMetadataName_m7620D7EB82D4073404D50BC8C6E8D559D404E0B1 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.String Mono.CSharp.MemberName::get_Basename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberName_get_Basename_m16738ECB37BC0EAA61A1DAE517768C6BABEDB0C6 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String Mono.CSharp.MemberName::GetSignatureForDocumentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberName_GetSignatureForDocumentation_m5CB85778B47BC60263831BCF897FA4036F830FE4 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, const RuntimeMethod* method) ;
// System.String Mono.CSharp.TypeParameters::GetSignatureForError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeParameters_GetSignatureForError_m4B1519A9698801EBDC334C764634660D2B283924 (TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String Mono.CSharp.MemberName::GetSignatureForError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberName_GetSignatureForError_mC20A020346E3990DC2A13B828C328735DA610A73 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.MemberName::Equals(Mono.CSharp.MemberName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberName_Equals_mDAB36280A6588505D936013D0F0256ED86ED9AC0 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___other0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9 (RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.MemberName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName__ctor_m77520255EBB9DD2F91F91C554D662DDD9F76DDD1 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Attributable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attributable__ctor_m8F847A42FBA9A44DF676B8B419C0C2607CDACB77 (Attributable_t85D0C16B87884F896200C7B379A7026B7317E9CC* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Attributable::AddAttributes(Mono.CSharp.Attributes,Mono.CSharp.IMemberContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attributable_AddAttributes_m4CF3D6A0DCB3D61B39AB640AE34F5187FE2973D5 (Attributable_t85D0C16B87884F896200C7B379A7026B7317E9CC* __this, Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* ___attrs0, RuntimeObject* ___context1, const RuntimeMethod* method) ;
// Mono.CSharp.TypeDefinition Mono.CSharp.TypeContainer::get_PartialContainer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* TypeContainer_get_PartialContainer_m1B9CD976A1A9B2318B261A6FFF3679675E0DFF46_inline (TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* __this, const RuntimeMethod* method) ;
// Mono.CSharp.Modifiers Mono.CSharp.MemberCore::get_ModFlags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) ;
// Mono.CSharp.Report Mono.CSharp.MemberCore::get_Report()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) ;
// Mono.CSharp.Location Mono.CSharp.MemberCore::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) ;
// Mono.CSharp.PropertyBase Mono.CSharp.PropertyBase/PropertyMethod::get_Property()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyBase_t7861DAC749F3B502B1F573B39E9C3A1F2E4AE78A* PropertyMethod_get_Property_mEA0F1CB5124C72DB173B02E38F25D261BDAA069A_inline (PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729* __this, const RuntimeMethod* method) ;
// Mono.CSharp.PropertyBase/PropertyMethod Mono.CSharp.PropertyBase::get_AccessorSecond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729* PropertyBase_get_AccessorSecond_mDCFF2452CD7EF6E142A672EF690F4B69F825E469 (PropertyBase_t7861DAC749F3B502B1F573B39E9C3A1F2E4AE78A* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.MemberCore::get_IsCompilerGenerated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_get_IsCompilerGenerated_m359DC71A9CBADACCB06F3395B82002A2D6F7C6A8 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Mono.CSharp.Constraints>::GetEnumerator()
inline Enumerator_t5B74FAEB3D9A04FF753DA78ACE9E1011E1750FEC List_1_GetEnumerator_m5410959B3853773CB80C8493BFED492001168F23 (List_1_t0C642221C357C8B5718460C8EDE0F0D900B11E0A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5B74FAEB3D9A04FF753DA78ACE9E1011E1750FEC (*) (List_1_t0C642221C357C8B5718460C8EDE0F0D900B11E0A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Mono.CSharp.Constraints>::Dispose()
inline void Enumerator_Dispose_m0D6AF51604387B1A70281C32E5EDCDFBE9690750 (Enumerator_t5B74FAEB3D9A04FF753DA78ACE9E1011E1750FEC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5B74FAEB3D9A04FF753DA78ACE9E1011E1750FEC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Mono.CSharp.Constraints>::get_Current()
inline Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* Enumerator_get_Current_mC375013ACDAF624A1A1696998392F997941955E3_inline (Enumerator_t5B74FAEB3D9A04FF753DA78ACE9E1011E1750FEC* __this, const RuntimeMethod* method)
{
	return ((  Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* (*) (Enumerator_t5B74FAEB3D9A04FF753DA78ACE9E1011E1750FEC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Mono.CSharp.SimpleMemberName Mono.CSharp.Constraints::get_TypeParameter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SimpleMemberName_tF82E5572C2318BC857235349241DACE90C310C12* Constraints_get_TypeParameter_mB18B345E5E93C33C643E708B63B4BFA1782B3EDA_inline (Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* __this, const RuntimeMethod* method) ;
// Mono.CSharp.TypeParameter Mono.CSharp.TypeParameters::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeParameter_t2B529F20F82AE20A38AB99CBA0E31D7F88E12EF2* TypeParameters_Find_mABA74ABED4B898B7C3A2472F11D387BF5B832DD7 (TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* __this, String_t* ___name0, const RuntimeMethod* method) ;
// Mono.CSharp.Location Mono.CSharp.Constraints::get_Location()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F Constraints_get_Location_mD57166C0D0D07FB4DAA99994BBFBDE9D1C18E9DE_inline (Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Report::Error(System.Int32,Mono.CSharp.Location,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Report_Error_mECB29E463C732E8326A07CCEC1D698F9C90E9324 (Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* __this, int32_t ___code0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc1, String_t* ___format2, String_t* ___arg13, String_t* ___arg24, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.TypeParameter::set_Constraints(Mono.CSharp.Constraints)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypeParameter_set_Constraints_mA71527E68CD7B95F84EA1F454346B49AE6248A96_inline (TypeParameter_t2B529F20F82AE20A38AB99CBA0E31D7F88E12EF2* __this, Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Mono.CSharp.Constraints>::MoveNext()
inline bool Enumerator_MoveNext_mC29426C7B2D46F9D186DCFD63670F9BAAE27E7CF (Enumerator_t5B74FAEB3D9A04FF753DA78ACE9E1011E1750FEC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5B74FAEB3D9A04FF753DA78ACE9E1011E1750FEC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// Mono.CSharp.Attributes Mono.CSharp.Attributable::get_OptAttributes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* Attributable_get_OptAttributes_m76221D813DCA68D74D95082325387D9D38D7D0D0_inline (Attributable_t85D0C16B87884F896200C7B379A7026B7317E9CC* __this, const RuntimeMethod* method) ;
// Mono.CSharp.PredefinedAttributes Mono.CSharp.ModuleContainer::get_PredefinedAttributes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PredefinedAttributes_t57CF082A2D3A84BDE14293D534774A98E3C51A3D* ModuleContainer_get_PredefinedAttributes_mB95732B524E5A581FB7224BF03FA58AB06F12801_inline (ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* __this, const RuntimeMethod* method) ;
// Mono.CSharp.Attribute Mono.CSharp.Attributes::Search(Mono.CSharp.PredefinedAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* Attributes_Search_mC4E48DC4E8C70D15201A4019497DA1AFF844118D (Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* __this, PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* ___t0, const RuntimeMethod* method) ;
// System.ObsoleteAttribute Mono.CSharp.Attribute::GetObsoleteAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* Attribute_GetObsoleteAttribute_mB05ED76BFEEBDBDEAF58BD6DB15024EC26B28975 (Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.AttributeTester::Report_ObsoleteMessage(System.ObsoleteAttribute,System.String,Mono.CSharp.Location,Mono.CSharp.Report)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeTester_Report_ObsoleteMessage_m33D7F496D9D835DB5CB33B3A43B825324DD6299E (ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* ___oa0, String_t* ___member1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* ___Report3, const RuntimeMethod* method) ;
// Mono.CSharp.TypeSpec Mono.CSharp.TypeManager::GetElementType(Mono.CSharp.TypeSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* TypeManager_GetElementType_mCDF7400C70E2ADBFBE17DE763B3CF7C896D88B69 (TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___t0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.TypeManager::HasElementType(Mono.CSharp.TypeSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeManager_HasElementType_m43C42652B48B14D1A4F148DA872BCE40BF34DA13 (TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___t0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.TypeSpec::get_IsGenericParameter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeSpec_get_IsGenericParameter_mD975213A749D0D97574532399038205975962C6C (TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* __this, const RuntimeMethod* method) ;
// Mono.CSharp.TypeSpec Mono.CSharp.MemberSpec::get_DeclaringType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* MemberSpec_get_DeclaringType_m6DE2BB6C790F14D412375998D53D761C0E204B39_inline (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.MemberSpec::get_IsGeneric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_get_IsGeneric_m24EDC4FBA89ECA000B3CEF441BE8C0D1F7633DCA (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.MemberCore::IsAccessibleAs(Mono.CSharp.TypeSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_IsAccessibleAs_m64DABDFA801EA789D239E68FDFE5FC675883EAA0 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___p0, const RuntimeMethod* method) ;
// Mono.CSharp.Modifiers Mono.CSharp.MemberSpec::get_Modifiers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemberSpec_get_Modifiers_m39EEE8049BD4DC30E7EB1E13494B1C2E8456707C_inline (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) ;
// Mono.CSharp.ITypeDefinition Mono.CSharp.TypeSpec::get_MemberDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeSpec_get_MemberDefinition_m39FDBD0A7AA64A224B5502E5226B9D83178526A9 (TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* __this, const RuntimeMethod* method) ;
// Mono.CSharp.AssemblyDefinition Mono.CSharp.ModuleContainer::get_DeclaringAssembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4* ModuleContainer_get_DeclaringAssembly_mA530F7AF1609929909AD333C386ACB047E986946_inline (ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.TypeDefinition::IsBaseTypeDefinition(Mono.CSharp.TypeSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeDefinition_IsBaseTypeDefinition_m615932427E69B0B3F69443D929250619E9212887 (TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* __this, TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___baseType0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.TypeDefinition::get_IsTopLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeDefinition_get_IsTopLevel_m0E6E2B59314942226A0440A1B0D15D7762882B92 (TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.InternalErrorException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalErrorException__ctor_m4A29894B229D02AFEC7C54495BAA3C1ED58E7DC6 (InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.MemberCore::get_HasClsCompliantAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_get_HasClsCompliantAttribute_m6820CF22683FB9D649A1570E140DF98DEAA9DD71 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) ;
// Mono.CSharp.ExtensionMethodCandidates Mono.CSharp.NamespaceContainer::LookupExtensionMethod(Mono.CSharp.IMemberContext,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtensionMethodCandidates_tA706B1A3BEC91D949C963B4789B32FBECA178E89* NamespaceContainer_LookupExtensionMethod_m7C4EAEEC175131C10EE24A3F4E21579311C2CC7B (NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767* __this, RuntimeObject* ___invocationContext0, String_t* ___name1, int32_t ___arity2, int32_t ___position3, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Attribute::GetClsCompliantAttributeValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Attribute_GetClsCompliantAttributeValue_m23F64C229EEBB60E8622B5CAECF6EECCCB6E0B83 (Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Boolean> Mono.CSharp.MemberCore::get_CLSAttributeValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 MemberCore_get_CLSAttributeValue_m81BDDF5AA8AABC38B8D4B17807B638B122A7C888 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.AssemblyDefinition::get_HasCLSCompliantAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssemblyDefinition_get_HasCLSCompliantAttribute_m11735C13ECEC4BFF4F842297B8E04414B49F32FF (AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4* __this, const RuntimeMethod* method) ;
// Mono.CSharp.Location Mono.CSharp.Attribute::get_Location()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F Attribute_get_Location_m4100C4CD567A86EF2AE254B70D1C8707A2391F47_inline (Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.MemberCore::IsExposedFromAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_IsExposedFromAssembly_m01340BE6E7C9AA9E12A55554DA9909359109BF21 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.Report::Warning(System.Int32,System.Int32,Mono.CSharp.Location,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Report_Warning_m2F245AECE15B1C5558624C9F64C3731228E78CCA (Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* __this, int32_t ___code0, int32_t ___level1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, String_t* ___format3, String_t* ___arg14, String_t* ___arg25, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.MemberCore::Warning_IdentifierNotCompliant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_Warning_IdentifierNotCompliant_mE8D049D5678B3B9774B4CF4703A5D14AB0CDEE91 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.TypeParameters::VerifyClsCompliance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeParameters_VerifyClsCompliance_mD9017A31A115D0A5AB37875583EA2EEF63A7EAAB (TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* __this, const RuntimeMethod* method) ;
// Mono.CSharp.MemberName Mono.CSharp.MemberCore::get_MemberName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* MemberCore_get_MemberName_m16D36021FD32FFCD05BA9443F8DD5A3D4252FF5D_inline (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.Constructor::IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Constructor_IsDefault_mA77035CABD48A30ED6187F0C5BD42754EE6D89D5 (Constructor_t2200881FF868A83DFA2695D780716B13269A2FD3* __this, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.DocumentationBuilder::GenerateDocumentationForMember(Mono.CSharp.MemberCore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentationBuilder_GenerateDocumentationForMember_mC93B6984F12FCC36B4360D8C57C38F84D3CC8117 (DocumentationBuilder_t7805D42F3A2BD1A40FE71A5A1D49B8CE3548D52D* __this, MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* ___mc0, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.InternalErrorException::.ctor(Mono.CSharp.MemberCore,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalErrorException__ctor_m167FEF007B1B1D886B802AFE0733386AE53F3416 (InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC* __this, MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* ___mc0, Exception_t* ___e1, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.MemberCore::get_IsObsolete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_get_IsObsolete_m6DE885381391D98CCA35FE0F03B104784ADBD298 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.MemberCore::get_IsUnsafe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_get_IsUnsafe_m0724042A308E0B631A23E70B2EBFB118300B9BC9 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Mono.CSharp.MissingTypeSpecReference> Mono.CSharp.MemberSpec::GetMissingDependencies(Mono.CSharp.MemberSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154* MemberSpec_GetMissingDependencies_m16EBF30826E1A5F5A8038B6BB6B9EE46F1627190 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* ___caller0, const RuntimeMethod* method) ;
// Mono.CSharp.TypeSpec Mono.CSharp.ElementTypeSpec::get_Element()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ElementTypeSpec_get_Element_mDC8F9630E918782949F485361A73CC5D845F0B2A_inline (ElementTypeSpec_t1E107D8DC289F63B322C8859BC395BFEDB97ECF8* __this, const RuntimeMethod* method) ;
// Mono.CSharp.IMemberDefinition Mono.CSharp.MemberSpec::get_MemberDefinition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MemberSpec_get_MemberDefinition_mAD848667961881D4F253751A92B09AB10BBF4DC4_inline (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline)(__this, method);
}
// Mono.CSharp.Property Mono.CSharp.Property/BackingFieldDeclaration::get_OriginalProperty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Property_t6C97FAAC2707D6F98A4B830C045A02B484D765EA* BackingFieldDeclaration_get_OriginalProperty_m76D2E4564B15E3B9EA614FADF2760D489047354F_inline (BackingFieldDeclaration_t7D8D30EAEFB3837AD6FA5AE77D15BAC675689387* __this, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Mono.CSharp.TypeSpec Mono.CSharp.TypeParameterInflator::get_TypeInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* TypeParameterInflator_get_TypeInstance_m7448B4953E5E9716C2FD345F2BAFCDAB6D49C9A2_inline (TypeParameterInflator_tAE61C211343A7100A0F509ADEEC16EA4F01BCEE4* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.TypeSpec::get_IsGenericOrParentIsGeneric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeSpec_get_IsGenericOrParentIsGeneric_mA77AA2D25C96DE0134E222D3DDF88DE29E2EE9E6 (TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.TypeManager::IsNestedChildOf(Mono.CSharp.TypeSpec,Mono.CSharp.ITypeDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeManager_IsNestedChildOf_mC7D3BC68AED5B962721BD7467C432EF80DB71ADD (TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___type0, RuntimeObject* ___parent1, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.TypeManager::IsFamilyAccessible(Mono.CSharp.TypeSpec,Mono.CSharp.TypeSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeManager_IsFamilyAccessible_m2CA4299EE8D576D059934F0802CCDEFE33C188E3 (TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___type0, TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___parent1, const RuntimeMethod* method) ;
// System.Boolean Mono.CSharp.MemberSpec::IsCLSCompliant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_IsCLSCompliant_m69BE9F74E3A4FEE35C99E8DC09D67EBF0C4F1DB2 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.CSharp.CSharpParser/OperatorDeclaration::.ctor(Mono.CSharp.Operator/OpType,Mono.CSharp.FullNamedExpression,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperatorDeclaration__ctor_mF9914F238865C3BB27407F26FD254028D8C2FA83 (OperatorDeclaration_tDB0137E00E926F0E8C7E242C2C28A0586D8713A4* __this, uint8_t ___op0, FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* ___ret_type1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___location2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		uint8_t L_0 = ___op0;
		__this->___optype_0 = L_0;
		FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* L_1 = ___ret_type1;
		__this->___ret_type_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ret_type_1), (void*)L_1);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_2 = ___location2;
		__this->___location_2 = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.CSharp.Token::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Token__ctor_mC84458F10E4BDE3C69ECCAE98182FF181868F456 (Token_tAA1F2C0EBC0EBBEA0FEEC4E334E41DC04CECA57B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.CSharp.LocatedToken::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocatedToken__ctor_mF31867F3FA93F30627E8C60B7CE72B79BAE2985B (LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Mono.CSharp.LocatedToken::.ctor(System.String,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocatedToken__ctor_mBD78B49595F5D0F2E00EA6EB5F5253F3593895A4 (LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* __this, String_t* ___value0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___value0;
		__this->___value_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_2), (void*)L_0);
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_1;
		L_1 = Location_get_SourceFile_mC1E46ACCBC208E8414AE8064067E6AE3CCF83A26((&___loc1), NULL);
		__this->___file_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___file_3), (void*)L_1);
		int32_t L_2;
		L_2 = Location_get_Row_mF258AE3243F9B1052CDEAD530A7C26AF1B1A7EA8((&___loc1), NULL);
		__this->___row_0 = L_2;
		int32_t L_3;
		L_3 = Location_get_Column_m294860C178F51F8F92069B8595010A07AA646BFF((&___loc1), NULL);
		__this->___column_1 = L_3;
		return;
	}
}
// System.String Mono.CSharp.LocatedToken::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocatedToken_ToString_mBCEAE9CF7473BC996A5F4340A90CB0BF54317571 (LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABD1F3A40B040F4DAF19DEC8A0694EE1E093DE0B);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = LocatedToken_get_Value_m263F59DAA5084E7D2F377B82EFA1A66E86C13E24_inline(__this, NULL);
		int32_t L_1 = __this->___row_0;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = __this->___column_1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralABD1F3A40B040F4DAF19DEC8A0694EE1E093DE0B, L_0, L_3, L_6, NULL);
		return L_7;
	}
}
// Mono.CSharp.Location Mono.CSharp.LocatedToken::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F LocatedToken_get_Location_m0BE20259CCEAE8260414B1C68EAD616F8DD2C427 (LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* __this, const RuntimeMethod* method) 
{
	{
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_0 = __this->___file_3;
		int32_t L_1 = __this->___row_0;
		int32_t L_2 = __this->___column_1;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Location__ctor_mC6B21F2E96C725F5B7CBFB2476132D9520C9E78F((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String Mono.CSharp.LocatedToken::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocatedToken_get_Value_m263F59DAA5084E7D2F377B82EFA1A66E86C13E24 (LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value_2;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Mono.CSharp.Tokenizer::get_PropertyParsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_get_PropertyParsing_mDA28C91AF5430DC3B30F4AB82B27797A5BEAAAD0 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___handle_get_set_12;
		return L_0;
	}
}
// System.Void Mono.CSharp.Tokenizer::set_PropertyParsing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_set_PropertyParsing_m4407CC0F9456B155643B76B22412DA3D1062AC45 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___handle_get_set_12 = L_0;
		return;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::get_EventParsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_get_EventParsing_mBF1962007BF9AADEC8137088108590BF53BCE5E4 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___handle_remove_add_13;
		return L_0;
	}
}
// System.Void Mono.CSharp.Tokenizer::set_EventParsing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_set_EventParsing_mB4E391A86A27C6B1DAE3761D58D6EA40D837825D (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___handle_remove_add_13 = L_0;
		return;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::get_ConstraintsParsing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_get_ConstraintsParsing_m40EF4F520A72B9C842DA0092E682A275D54405C1 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___handle_where_14;
		return L_0;
	}
}
// System.Void Mono.CSharp.Tokenizer::set_ConstraintsParsing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_set_ConstraintsParsing_m2E254381459EF02B53305FCB73B663C3F4A5186B (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___handle_where_14 = L_0;
		return;
	}
}
// Mono.CSharp.XmlCommentState Mono.CSharp.Tokenizer::get_doc_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_get_doc_state_m176FCD00A57BE1E90AA05268FE9AC71825968539 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___xml_doc_state_39;
		return L_0;
	}
}
// System.Void Mono.CSharp.Tokenizer::set_doc_state(Mono.CSharp.XmlCommentState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_set_doc_state_mFE7CEE1075A7FCE92074719BBB7629115DF69A0E (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Tokenizer_check_incorrect_doc_comment_m016964722F7CA23A327E6C1588926527C7B2F251(__this, NULL);
		Tokenizer_reset_doc_comment_m4C3EDD6A7ED41486DE74D7103D00F5AD36ED57D4(__this, NULL);
	}

IL_000f:
	{
		int32_t L_1 = ___value0;
		__this->___xml_doc_state_39 = L_1;
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::AddEscapedIdentifier(Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_AddEscapedIdentifier_m13CC2DB4043D12DB0BB334C248BE5B55F8F95624 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m275C153933BEFF417D72F1BD5976E41A77DE23B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFF3070F83F68FD0F10EA9D1EF3A53CCEE56B712B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t124684566062F37FF59D2D03C2F0187ADEA53771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* L_0 = __this->___escaped_identifiers_16;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* L_1 = (List_1_t124684566062F37FF59D2D03C2F0187ADEA53771*)il2cpp_codegen_object_new(List_1_t124684566062F37FF59D2D03C2F0187ADEA53771_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mFF3070F83F68FD0F10EA9D1EF3A53CCEE56B712B(L_1, List_1__ctor_mFF3070F83F68FD0F10EA9D1EF3A53CCEE56B712B_RuntimeMethod_var);
		__this->___escaped_identifiers_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___escaped_identifiers_16), (void*)L_1);
	}

IL_0013:
	{
		List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* L_2 = __this->___escaped_identifiers_16;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_3 = ___loc0;
		NullCheck(L_2);
		List_1_Add_m275C153933BEFF417D72F1BD5976E41A77DE23B6_inline(L_2, L_3, List_1_Add_m275C153933BEFF417D72F1BD5976E41A77DE23B6_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::IsEscapedIdentifier(Mono.CSharp.ATypeNameExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_IsEscapedIdentifier_mD4BE9019FF64B6BBEAFE991915B06A9F1D0D4152 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, ATypeNameExpression_t5A86612FE7942AAF35D040012464E51E0399DB9E* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mF1252BCF050DC219DD15708981003D78C939E8BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* L_0 = __this->___escaped_identifiers_16;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* L_1 = __this->___escaped_identifiers_16;
		ATypeNameExpression_t5A86612FE7942AAF35D040012464E51E0399DB9E* L_2 = ___name0;
		NullCheck(L_2);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_3;
		L_3 = Expression_get_Location_m3D9275E6E3D4C3F546D8E638F0B2533C38258620_inline(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = List_1_Contains_mF1252BCF050DC219DD15708981003D78C939E8BC(L_1, L_3, List_1_Contains_mF1252BCF050DC219DD15708981003D78C939E8BC_RuntimeMethod_var);
		return L_4;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_get_Line_m18472AE72F7683A427276B8A94616238864B4DDB (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___ref_line_6;
		return L_0;
	}
}
// System.Void Mono.CSharp.Tokenizer::.ctor(Mono.CSharp.SeekableStreamReader,Mono.CSharp.CompilationSourceFile,Mono.CSharp.ParserSession,Mono.CSharp.Report)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer__ctor_mCE60D52FE875A395E6210FD242AEBF69EFC217AA (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* ___input0, CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* ___file1, ParserSession_tE9F339A49DFCF899A338AE7D39CA9BAF6988447E* ___session2, Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* ___report3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m1AEB6531CEC8C8917D39FB69EE344DF5F72045FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___ref_line_6 = 1;
		__this->___line_7 = 1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___value_builder_69 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_builder_69), (void*)L_0);
		Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9* L_1 = (Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9*)il2cpp_codegen_object_new(Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stack_1__ctor_m1AEB6531CEC8C8917D39FB69EE344DF5F72045FC(L_1, 2, Stack_1__ctor_m1AEB6531CEC8C8917D39FB69EE344DF5F72045FC_RuntimeMethod_var);
		__this->___position_stack_70 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___position_stack_70), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_2 = ___file1;
		__this->___source_file_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_file_1), (void*)L_2);
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_3 = ___file1;
		NullCheck(L_3);
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_4;
		L_4 = VirtualFuncInvoker0< CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* >::Invoke(51 /* Mono.CSharp.CompilerContext Mono.CSharp.MemberCore::get_Compiler() */, L_3);
		__this->___context_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___context_2), (void*)L_4);
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_5 = ___file1;
		NullCheck(L_5);
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_6;
		L_6 = CompilationSourceFile_get_SourceFile_mD4C9C9D916DD200F3CAC75049E6B186FEE999C02_inline(L_5, NULL);
		__this->___current_source_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_source_4), (void*)L_6);
		ParserSession_tE9F339A49DFCF899A338AE7D39CA9BAF6988447E* L_7 = ___session2;
		NullCheck(L_7);
		Dictionary_2U5BU5D_tB3D5B174D6C376DBA5BB7B48C3F60DBABD0D2F46* L_8 = L_7->___Identifiers_2;
		__this->___identifiers_66 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___identifiers_66), (void*)L_8);
		ParserSession_tE9F339A49DFCF899A338AE7D39CA9BAF6988447E* L_9 = ___session2;
		NullCheck(L_9);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = L_9->___IDBuilder_4;
		__this->___id_builder_65 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_builder_65), (void*)L_10);
		ParserSession_tE9F339A49DFCF899A338AE7D39CA9BAF6988447E* L_11 = ___session2;
		NullCheck(L_11);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = L_11->___NumberBuilder_5;
		__this->___number_builder_67 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___number_builder_67), (void*)L_12);
		ParserSession_tE9F339A49DFCF899A338AE7D39CA9BAF6988447E* L_13 = ___session2;
		NullCheck(L_13);
		LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* L_14;
		L_14 = ParserSession_get_LocatedTokens_m7F7D94B39EF86CC0C50FAB086BC4C9F2DCCBAE6B_inline(L_13, NULL);
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_15 = (LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9*)il2cpp_codegen_object_new(LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		LocatedTokenBuffer__ctor_mBAACEC3D5657C4B39A5D1BA95DC386E5AA5EE1CB(L_15, L_14, NULL);
		__this->___ltb_19 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ltb_19), (void*)L_15);
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_16 = ___report3;
		__this->___Report_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Report_3), (void*)L_16);
		SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* L_17 = ___input0;
		__this->___reader_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reader_0), (void*)L_17);
		__this->___putback_char_56 = (-1);
		StringBuilder_t* L_18 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_18, NULL);
		__this->___xml_comment_buffer_38 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xml_comment_buffer_38), (void*)L_18);
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_19 = __this->___context_2;
		NullCheck(L_19);
		CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* L_20;
		L_20 = CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21 = L_20->___DocumentationFile_20;
		__this->___doc_processing_18 = (bool)((!(((RuntimeObject*)(String_t*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_22 = __this->___context_2;
		NullCheck(L_22);
		CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* L_23;
		L_23 = CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24 = L_23->___TabSize_12;
		__this->___tab_size_11 = L_24;
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::PushPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_PushPosition_mB7AD2611F8561B13DCEF78328C2A8F2BD5B20DFC (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Position_t54676CA533325D551EE246260967D8F0BDDDB40A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m5B1B55EFA9D3F8469BCA9EE43F791B1B7375483F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9* L_0 = __this->___position_stack_70;
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_1 = (Position_t54676CA533325D551EE246260967D8F0BDDDB40A*)il2cpp_codegen_object_new(Position_t54676CA533325D551EE246260967D8F0BDDDB40A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Position__ctor_mB4455C58FECA440B129693B3EBCC9B3485F0D382(L_1, __this, NULL);
		NullCheck(L_0);
		Stack_1_Push_m5B1B55EFA9D3F8469BCA9EE43F791B1B7375483F(L_0, L_1, Stack_1_Push_m5B1B55EFA9D3F8469BCA9EE43F791B1B7375483F_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::PopPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m942017CBF9A74BAF54E0BAC2CBC3FA73F6234625_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Position_t54676CA533325D551EE246260967D8F0BDDDB40A* V_0 = NULL;
	{
		Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9* L_0 = __this->___position_stack_70;
		NullCheck(L_0);
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_1;
		L_1 = Stack_1_Pop_m942017CBF9A74BAF54E0BAC2CBC3FA73F6234625(L_0, Stack_1_Pop_m942017CBF9A74BAF54E0BAC2CBC3FA73F6234625_RuntimeMethod_var);
		V_0 = L_1;
		SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* L_2 = __this->___reader_0;
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___position_0;
		NullCheck(L_2);
		SeekableStreamReader_set_Position_m62278E8B403D6AF0758B1620F94C214EA92EA7F7(L_2, L_4, NULL);
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___ref_line_2;
		__this->___ref_line_6 = L_6;
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___line_1;
		__this->___line_7 = L_8;
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___col_3;
		__this->___col_8 = L_10;
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_11 = V_0;
		NullCheck(L_11);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_12 = L_11->___hidden_4;
		__this->___hidden_block_start_5 = L_12;
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___putback_char_5;
		__this->___putback_char_56 = L_14;
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->___previous_col_6;
		__this->___previous_col_9 = L_16;
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_17 = V_0;
		NullCheck(L_17);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_18 = L_17->___ifstack_7;
		__this->___ifstack_62 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ifstack_62), (void*)L_18);
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___parsing_generic_less_than_8;
		__this->___parsing_generic_less_than_17 = L_20;
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = L_21->___parsing_string_interpolation_11;
		__this->___parsing_string_interpolation_29 = L_22;
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_23 = V_0;
		NullCheck(L_23);
		Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* L_24 = L_23->___parsing_string_interpolation_quoted_12;
		__this->___parsing_string_interpolation_quoted_30 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parsing_string_interpolation_quoted_30), (void*)L_24);
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = L_25->___current_token_9;
		__this->___current_token_10 = L_26;
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_27 = V_0;
		NullCheck(L_27);
		RuntimeObject* L_28 = L_27->___val_10;
		__this->___val_57 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_28);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::DiscardPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_DiscardPosition_mC96BF22E1E9339ECF8D2BF0B0506E53A0EF871E0 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m942017CBF9A74BAF54E0BAC2CBC3FA73F6234625_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t1A47FEB9A334A2E5BD9458190E790DC8B449C5D9* L_0 = __this->___position_stack_70;
		NullCheck(L_0);
		Position_t54676CA533325D551EE246260967D8F0BDDDB40A* L_1;
		L_1 = Stack_1_Pop_m942017CBF9A74BAF54E0BAC2CBC3FA73F6234625(L_0, Stack_1_Pop_m942017CBF9A74BAF54E0BAC2CBC3FA73F6234625_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::AddKeyword(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83 (String_t* ___kw0, int32_t ___token1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_AddKeyword_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3873DA659F0BC6D9FEE30AD9E0F3992A3A5A5DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keyword_strings_45;
		String_t* L_1 = ___kw0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_0, L_1, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19* L_3 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keywords_43;
		String_t* L_4 = ___kw0;
		int32_t L_5 = ___token1;
		Tokenizer_AddKeyword_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3873DA659F0BC6D9FEE30AD9E0F3992A3A5A5DB0(L_3, L_4, L_5, Tokenizer_AddKeyword_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3873DA659F0BC6D9FEE30AD9E0F3992A3A5A5DB0_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::AddPreprocessorKeyword(System.String,Mono.CSharp.Tokenizer/PreprocessorDirective)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3 (String_t* ___kw0, int32_t ___directive1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_AddKeyword_TisPreprocessorDirective_tAA081647C985CC6EE717A9564276EDFCA2911534_m2542978B773A6B2D5BD81C07CBA1B9561277533D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205* L_0 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keywords_preprocessor_44;
		String_t* L_1 = ___kw0;
		int32_t L_2 = ___directive1;
		Tokenizer_AddKeyword_TisPreprocessorDirective_tAA081647C985CC6EE717A9564276EDFCA2911534_m2542978B773A6B2D5BD81C07CBA1B9561277533D(L_0, L_1, L_2, Tokenizer_AddKeyword_TisPreprocessorDirective_tAA081647C985CC6EE717A9564276EDFCA2911534_m2542978B773A6B2D5BD81C07CBA1B9561277533D_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer__cctor_m9BDE48FFD5AD22A83EA2A72CBD37CD682B94E95F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0226F08F1363B72919374BC9F1AABA0AF07295F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06C011206E3BA3D0C859CC98AA4C81026E5D85D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BB39DE8D1B747008B7AA481357BD906FEA90B6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CE918CF589A0B3A3BDB90F0F98BCC43CDF6169E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CEBF7DFA17440E9873C47A2C1BE712F98DFA500);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1593F0BA9565D41C31360961E958F85BB60F0C8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16939FE1910D31A43CD6141A2BEC7CEABCFE2E89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A9F773AF09A196B0A76B00E4B47084B3EA86D59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B6D0EA4FFAEA7868BA3D296BF046EF1266CEC55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BFAFC96CADBC9906896294E2AE00318DBB0EC5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27BFBB9549E8D8EF46BE1E2522D3680074392232);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral286CC02C1E7ED462D7D2D31546D5144F88661A2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A2974B55097EBB10C3D44D4452824517C0783D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CA5620FA3A763C5F6BD0E94D296422F4450BA25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E3ED7A81B1913E943A744C8F9E7D5EB5C672B4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ECA47452988C370602B26B2F5E3A7BF45020DD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32CF02B3D2A0CD265C9C6DDC9F55E5512647D122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33F3CCC8C96B52CBA9D88D899779B6191CE15B79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral346AF0C282FFAB43667E4DFFB5694F745CA75BCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3580987618C5FC08EBA826D318FA29BE8E98D503);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36A07254D81AF39088E2BED8EFC92E153ED48ECC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37A9BD79F04DE5D47223458B91D403BC9A9D5A25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral384565B8399EC9A224FB52B7078096010121FA9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38D3008511B528A5F192D58360168CA7329DE2AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B5E495CDE8B6F083E7D5ACE1D945067609680FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40238A1A323AEE2FA699BCF0BB5F71A5CCC87DA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41D64AA3D74B597B9451EEC117C35820FA05EFE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443BD561FA5A81D321CAAF0B444C0CFB1C5811D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50D4804BC7D54E5E3D765D78A85B3784DBE80471);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral541BC3E626400B590FFDBE860C1855349210E425);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55E606CEDF36876109C1C2004C2DCF1B25DE95A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57046FC2B1DAF399BC0B2381DB8D6833BEC364B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CAD421923F0F10D02AFE6EA17ED4E929131E356);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CF637AF1571A6E5D0B437E9E082426D624A4FCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DFC03B35CE1610D507097EBBBD36CF45BCB4C2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral614B501556B12B5890C878B29FB23C1807F2B680);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61A88EF487F99DCB9558AAAD39471532DEE75F42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61C6D968B7FE88D4B8A63934DD5685C362457520);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral648807C9AFAA4DC700F1A2E0A031F9B6E5C6C0A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral679D068D573133B9C7C465FC6CF9C9D07B531421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A7C5B87AC840B649D5115CC2F065246EA1D14D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F531D091DEFD1AFE9482485551BED2FDAAA1A44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral766E767D6A87AB03C7C3410F3665A93D03D6E9FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81506726C1AADD27FB26AE31CD77DB9EA916856A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83882E2E410B213AB2B2289E29DC55945FAD39F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885E8075B193A06A546B761A4EB4705D41E77106);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89337E2EE35A3C198227FBA81922CE5F0C58D97F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8940E1FEA4EBF3CA20C44768AA93531C62B71B4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C1D304CED4C13075109A2D82DE6D8D24A9E3678);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F3CE5B6F467C0748FD627C8CC7C35EB7B3715DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD455660DEE28F6E1129CB741768AE1B879D49E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral934962903D946CC131DF8E5E4E575453098EEF43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AD0BAB2813AC84F1BA06E134DA49490A035C21E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C48C24D4BF1ED95579220DFFA96B8E7E7AB87E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DD326A397A61E2FA04A8660D57EECB4F6400FF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA041A903507FD76791B65E77B8DA1BF219158F7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA489EA826FC32F62BC08789E6EF6725A45BE807);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC8C96BFB2E5E8C8C23A5718E0F889B19931ED0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD522BF64F2D257409CB3BAC45086A2EA0B03C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADB77DF075FAD2AAB1D976DE56FF0F5A0EF9FFF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1868FA5803D4E948C556DEC84B3C733E6C6863C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E4FF0CFA5BFA9C6B5D1B00E29E0E6FD0696C9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9ED63726B3792A912D1DF4A5E4AEFDA0C6D02C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB95AED94347EEEE80FE2B58CC6819F8D88029C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCF454DB7FDBF0F41B3976B9C899E796D9F98460);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3EC0475D7BECB6F89847EE0E364B00D04507118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC70F7519ACB4603C5746F4CE45DFF6C80BB7D971);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC94CA552630B8AC1ADF21BAF5252FC9092E4DDDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB2070BB5AC5DA50197474C74B7EA4D7BDEEBCB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEBC2707039661BD61D98F991B27F2B9CB160373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD03C3C7F3A363D2E45775B1A6E39D7D5E5BEA998);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD525221FF38EAF1A30491622A0B39D5D960A7815);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB7748CA02D89CC8A0CA84CAE21A855DC0CD3281);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF7342DCBF4F4F80F2C4D42F5991B8E851510BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFC500CF01D877A89AA3F6E3447F79A733BA63FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3165827D406DD8F354BE7515C630A771E98916A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5B7FB5BFBF1CF60857A40FCA10F830CC619AE16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE747075778EF804DB84BC324AFA920E00E86E082);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECC5FBBC8E0BED3B8718D6E2160AD386C9CEC212);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECE7ACD2EBE43C9753D823F423714DB870E2FDC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF49AECB5A7A9C87D4D672BA9D06F6929E0895580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4E35F8C3B4DEB7662034D2DB84C95826A9E9496);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF56887477425485B59C9C4926D0FEFC2946FA21E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7219490E429E49E881EE2EFE4876A818537C3BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck(_stringLiteral885E8075B193A06A546B761A4EB4705D41E77106);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0;
		L_0 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteral885E8075B193A06A546B761A4EB4705D41E77106, NULL);
		((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_warning_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_warning_48), (void*)L_0);
		NullCheck(_stringLiteralE747075778EF804DB84BC324AFA920E00E86E082);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteralE747075778EF804DB84BC324AFA920E00E86E082, NULL);
		((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_warning_disable_49 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_warning_disable_49), (void*)L_1);
		NullCheck(_stringLiteral41D64AA3D74B597B9451EEC117C35820FA05EFE0);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2;
		L_2 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteral41D64AA3D74B597B9451EEC117C35820FA05EFE0, NULL);
		((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_warning_restore_50 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_warning_restore_50), (void*)L_2);
		NullCheck(_stringLiteralBCF454DB7FDBF0F41B3976B9C899E796D9F98460);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteralBCF454DB7FDBF0F41B3976B9C899E796D9F98460, NULL);
		((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_checksum_51 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_checksum_51), (void*)L_3);
		NullCheck(_stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4;
		L_4 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteral0E62D1EEC1CF40EEC3E55E672939594A78C717D9, NULL);
		((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___line_hidden_52 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___line_hidden_52), (void*)L_4);
		NullCheck(_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5;
		L_5 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044, NULL);
		((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___line_default_53 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___line_default_53), (void*)L_5);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)9));
		((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___simple_whitespaces_54 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___simple_whitespaces_54), (void*)L_8);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_9 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_9, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keyword_strings_45 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keyword_strings_45), (void*)L_9);
		KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19* L_10 = (KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19*)(KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19*)SZArrayNew(KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keywords_43 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keywords_43), (void*)L_10);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralB8E4FF0CFA5BFA9C6B5D1B00E29E0E6FD0696C9E, ((int32_t)341), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralADB77DF075FAD2AAB1D976DE56FF0F5A0EF9FFF3, ((int32_t)361), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral32CF02B3D2A0CD265C9C6DDC9F55E5512647D122, ((int32_t)360), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral3580987618C5FC08EBA826D318FA29BE8E98D503, ((int32_t)359), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral28A2974B55097EBB10C3D44D4452824517C0783D, ((int32_t)261), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral0BB39DE8D1B747008B7AA481357BD906FEA90B6F, ((int32_t)262), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7, ((int32_t)263), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C, ((int32_t)264), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2, ((int32_t)265), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralCB2070BB5AC5DA50197474C74B7EA4D7BDEEBCB1, ((int32_t)266), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7, ((int32_t)267), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralD03C3C7F3A363D2E45775B1A6E39D7D5E5BEA998, ((int32_t)268), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral38D3008511B528A5F192D58360168CA7329DE2AB, ((int32_t)269), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7, ((int32_t)270), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral55E606CEDF36876109C1C2004C2DCF1B25DE95A1, ((int32_t)271), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral614B501556B12B5890C878B29FB23C1807F2B680, ((int32_t)272), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral2E3ED7A81B1913E943A744C8F9E7D5EB5C672B4C, ((int32_t)273), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralA041A903507FD76791B65E77B8DA1BF219158F7D, ((int32_t)274), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D, ((int32_t)275), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044, ((int32_t)276), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral1B6D0EA4FFAEA7868BA3D296BF046EF1266CEC55, ((int32_t)277), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralF56887477425485B59C9C4926D0FEFC2946FA21E, ((int32_t)278), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8, ((int32_t)279), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral443BD561FA5A81D321CAAF0B444C0CFB1C5811D4, ((int32_t)280), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral384565B8399EC9A224FB52B7078096010121FA9F, ((int32_t)281), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F, ((int32_t)282), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralB1868FA5803D4E948C556DEC84B3C733E6C6863C, ((int32_t)283), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral541BC3E626400B590FFDBE860C1855349210E425, ((int32_t)284), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, ((int32_t)285), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral5DFC03B35CE1610D507097EBBBD36CF45BCB4C2C, ((int32_t)286), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralF4E35F8C3B4DEB7662034D2DB84C95826A9E9496, ((int32_t)287), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29, ((int32_t)288), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralECE7ACD2EBE43C9753D823F423714DB870E2FDC2, ((int32_t)289), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral3B5E495CDE8B6F083E7D5ACE1D945067609680FC, ((int32_t)290), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralDFC500CF01D877A89AA3F6E3447F79A733BA63FF, ((int32_t)291), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, ((int32_t)368), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral61A88EF487F99DCB9558AAAD39471532DEE75F42, ((int32_t)292), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral40238A1A323AEE2FA699BCF0BB5F71A5CCC87DA2, ((int32_t)293), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110, ((int32_t)294), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72, ((int32_t)295), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralF49AECB5A7A9C87D4D672BA9D06F6929E0895580, ((int32_t)296), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral89337E2EE35A3C198227FBA81922CE5F0C58D97F, ((int32_t)297), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralC3EC0475D7BECB6F89847EE0E364B00D04507118, ((int32_t)298), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral50D4804BC7D54E5E3D765D78A85B3784DBE80471, ((int32_t)299), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7, ((int32_t)300), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralCEBC2707039661BD61D98F991B27F2B9CB160373, ((int32_t)301), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral33F3CCC8C96B52CBA9D88D899779B6191CE15B79, ((int32_t)302), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, ((int32_t)303), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral0FACD530D9781E204FA5DC4E8F07428706A07E18, ((int32_t)304), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralC203279FC91536021E64CC54092300BDE54D3FEB, ((int32_t)305), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral9C48C24D4BF1ED95579220DFFA96B8E7E7AB87E0, ((int32_t)306), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralDEF7342DCBF4F4F80F2C4D42F5991B8E851510BD, ((int32_t)307), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral8940E1FEA4EBF3CA20C44768AA93531C62B71B4A, ((int32_t)308), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral6A7C5B87AC840B649D5115CC2F065246EA1D14D2, ((int32_t)309), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral286CC02C1E7ED462D7D2D31546D5144F88661A2F, ((int32_t)310), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral934962903D946CC131DF8E5E4E575453098EEF43, ((int32_t)311), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral2ECA47452988C370602B26B2F5E3A7BF45020DD9, ((int32_t)312), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral5CAD421923F0F10D02AFE6EA17ED4E929131E356, ((int32_t)313), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralF7219490E429E49E881EE2EFE4876A818537C3BA, ((int32_t)315), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499, ((int32_t)314), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB, ((int32_t)316), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral83882E2E410B213AB2B2289E29DC55945FAD39F3, ((int32_t)317), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, ((int32_t)369), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7, ((int32_t)318), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralBB95AED94347EEEE80FE2B58CC6819F8D88029C9, ((int32_t)319), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralC94CA552630B8AC1ADF21BAF5252FC9092E4DDDC, ((int32_t)320), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral1A9F773AF09A196B0A76B00E4B47084B3EA86D59, ((int32_t)321), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE, ((int32_t)322), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral766E767D6A87AB03C7C3410F3665A93D03D6E9FA, ((int32_t)323), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral679D068D573133B9C7C465FC6CF9C9D07B531421, ((int32_t)324), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralD525221FF38EAF1A30491622A0B39D5D960A7815, ((int32_t)325), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral36A07254D81AF39088E2BED8EFC92E153ED48ECC, ((int32_t)326), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, ((int32_t)327), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral0CEBF7DFA17440E9873C47A2C1BE712F98DFA500, ((int32_t)328), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralECC5FBBC8E0BED3B8718D6E2160AD386C9CEC212, ((int32_t)329), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralE3165827D406DD8F354BE7515C630A771E98916A, ((int32_t)330), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1, ((int32_t)331), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral0CE918CF589A0B3A3BDB90F0F98BCC43CDF6169E, ((int32_t)332), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral61C6D968B7FE88D4B8A63934DD5685C362457520, ((int32_t)333), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E, ((int32_t)334), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralE5B7FB5BFBF1CF60857A40FCA10F830CC619AE16, ((int32_t)335), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral5CF637AF1571A6E5D0B437E9E082426D624A4FCA, ((int32_t)336), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9, ((int32_t)337), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral8C1D304CED4C13075109A2D82DE6D8D24A9E3678, ((int32_t)338), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralAD522BF64F2D257409CB3BAC45086A2EA0B03C59, ((int32_t)340), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral57046FC2B1DAF399BC0B2381DB8D6833BEC364B6, ((int32_t)342), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral9AD0BAB2813AC84F1BA06E134DA49490A035C21E, ((int32_t)339), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral1593F0BA9565D41C31360961E958F85BB60F0C8B, ((int32_t)344), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral06C011206E3BA3D0C859CC98AA4C81026E5D85D7, ((int32_t)346), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral6F531D091DEFD1AFE9482485551BED2FDAAA1A44, ((int32_t)347), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralAA489EA826FC32F62BC08789E6EF6725A45BE807, ((int32_t)348), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral0226F08F1363B72919374BC9F1AABA0AF07295F0, ((int32_t)349), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral20825170D1B0DA2A733E78D5B035FF14697DA12B, ((int32_t)350), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral2CA5620FA3A763C5F6BD0E94D296422F4450BA25, ((int32_t)351), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral346AF0C282FFAB43667E4DFFB5694F745CA75BCC, ((int32_t)352), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralAC8C96BFB2E5E8C8C23A5718E0F889B19931ED0E, ((int32_t)353), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral27BFBB9549E8D8EF46BE1E2522D3680074392232, ((int32_t)354), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralDB7748CA02D89CC8A0CA84CAE21A855DC0CD3281, ((int32_t)355), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral16939FE1910D31A43CD6141A2BEC7CEABCFE2E89, ((int32_t)356), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral81506726C1AADD27FB26AE31CD77DB9EA916856A, ((int32_t)362), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteral648807C9AFAA4DC700F1A2E0A031F9B6E5C6C0A9, ((int32_t)363), NULL);
		Tokenizer_AddKeyword_m7CE56E132C90ABA53AB88787E18B09C3A663BA83(_stringLiteralB9ED63726B3792A912D1DF4A5E4AEFDA0C6D02C9, ((int32_t)365), NULL);
		KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205* L_11 = (KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205*)(KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205*)SZArrayNew(KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keywords_preprocessor_44 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keywords_preprocessor_44), (void*)L_11);
		Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3(_stringLiteral9159DA1F77BE2EFD8476CAFF9D0D735473E85E89, 1, NULL);
		Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3(_stringLiteral1BFAFC96CADBC9906896294E2AE00318DBB0EC5F, 2, NULL);
		Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3(_stringLiteral61A88EF487F99DCB9558AAAD39471532DEE75F42, ((int32_t)2051), NULL);
		Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3(_stringLiteral9DD326A397A61E2FA04A8660D57EECB4F6400FF6, 4, NULL);
		Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3(_stringLiteral37A9BD79F04DE5D47223458B91D403BC9A9D5A25, ((int32_t)2053), NULL);
		Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3(_stringLiteral443BD561FA5A81D321CAAF0B444C0CFB1C5811D4, 6, NULL);
		Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3(_stringLiteral8F3CE5B6F467C0748FD627C8CC7C35EB7B3715DE, ((int32_t)2055), NULL);
		Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3(_stringLiteral8FD455660DEE28F6E1129CB741768AE1B879D49E, ((int32_t)2056), NULL);
		Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3(_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, ((int32_t)9), NULL);
		Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3(_stringLiteral885E8075B193A06A546B761A4EB4705D41E77106, ((int32_t)10), NULL);
		Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3(_stringLiteralC70F7519ACB4603C5746F4CE45DFF6C80BB7D971, ((int32_t)1035), NULL);
		Tokenizer_AddPreprocessorKeyword_mBBF77A10400893531D054B2C19122E37C340C3D3(_stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D, ((int32_t)1036), NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_12;
		L_12 = NumberFormatInfo_get_InvariantInfo_m4689F466D2607C7369BCE394E3FB3681A6E644FA(NULL);
		((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___csharp_format_info_47 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___csharp_format_info_47), (void*)L_12);
		((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___styles_46 = ((int32_t)167);
		return;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::GetKeyword(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_GetKeyword_m9B9C31351710F59E78FE336F80778817372203A0 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___id0, int32_t ___id_len1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03133975784A1AD51581DE984DB04CC79C37CA84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F0D5464DBDBB4D3360D072E96CE6F7573367007);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AEFD24EDA1559C9608DD3DFE1E1D00B790FCC10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57ABA1EBF0C3B34327C1BC77E11EA636CE5879E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E01E5F06900F85A4610CB4BA177EBBE0318DA7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B87_0 = 0;
	{
		int32_t L_0 = ___id_len1;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19* L_1 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keywords_43;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19* L_2 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keywords_43;
		int32_t L_3 = ___id_len1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		KeywordEntry_1U5BU5D_tCB7E1065670548912647EED29D7FCDD320EFB205* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (L_5)
		{
			goto IL_0015;
		}
	}

IL_0013:
	{
		return (-1);
	}

IL_0015:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___id0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint16_t L_8 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)95)));
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)27))))
		{
			goto IL_0023;
		}
	}
	{
		return (-1);
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		KeywordEntry_1U5BU5DU5BU5D_tF92312EA3B5227E4CC3E9E6DBAED7F03C8595F19* L_10 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keywords_43;
		int32_t L_11 = ___id_len1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		KeywordEntry_1U5BU5D_tCB7E1065670548912647EED29D7FCDD320EFB205* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_1 = L_16;
		KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* L_17 = V_1;
		if (L_17)
		{
			goto IL_0032;
		}
	}
	{
		return (-1);
	}

IL_0032:
	{
		KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = L_18->___Token_0;
		V_2 = L_19;
		V_4 = 1;
		goto IL_005e;
	}

IL_003e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = ___id0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint16_t L_23 = (uint16_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* L_24 = V_1;
		NullCheck(L_24);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = L_24->___Value_2;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint16_t L_28 = (uint16_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((((int32_t)L_23) == ((int32_t)L_28)))
		{
			goto IL_0058;
		}
	}
	{
		V_2 = 0;
		KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* L_29 = V_1;
		NullCheck(L_29);
		KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* L_30 = L_29->___Next_1;
		V_1 = L_30;
		goto IL_0063;
	}

IL_0058:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_005e:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = ___id_len1;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_003e;
		}
	}

IL_0063:
	{
		int32_t L_34 = V_2;
		if (L_34)
		{
			goto IL_0069;
		}
	}
	{
		KeywordEntry_1_tF3DC92ED1F5E5C4F92B32A4180D90CAFAF90D5CE* L_35 = V_1;
		if (L_35)
		{
			goto IL_0032;
		}
	}

IL_0069:
	{
		int32_t L_36 = V_2;
		if (L_36)
		{
			goto IL_006e;
		}
	}
	{
		return (-1);
	}

IL_006e:
	{
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) > ((int32_t)((int32_t)284))))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)263))))
		{
			goto IL_0161;
		}
	}
	{
		int32_t L_39 = V_2;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)276))))
		{
			goto IL_0189;
		}
	}
	{
		int32_t L_40 = V_2;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)284))))
		{
			goto IL_0173;
		}
	}
	{
		goto IL_05fb;
	}

IL_009c:
	{
		int32_t L_41 = V_2;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)301))))
		{
			goto IL_03c3;
		}
	}
	{
		int32_t L_42 = V_2;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)315))))
		{
			goto IL_0161;
		}
	}
	{
		int32_t L_43 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract(L_43, ((int32_t)335))))
		{
			case 0:
			{
				goto IL_03c3;
			}
			case 1:
			{
				goto IL_05fb;
			}
			case 2:
			{
				goto IL_05fb;
			}
			case 3:
			{
				goto IL_05fb;
			}
			case 4:
			{
				goto IL_01cd;
			}
			case 5:
			{
				goto IL_05fb;
			}
			case 6:
			{
				goto IL_05fb;
			}
			case 7:
			{
				goto IL_03d5;
			}
			case 8:
			{
				goto IL_05fb;
			}
			case 9:
			{
				goto IL_01f7;
			}
			case 10:
			{
				goto IL_05fb;
			}
			case 11:
			{
				goto IL_03b1;
			}
			case 12:
			{
				goto IL_03b1;
			}
			case 13:
			{
				goto IL_03b1;
			}
			case 14:
			{
				goto IL_03b1;
			}
			case 15:
			{
				goto IL_03b1;
			}
			case 16:
			{
				goto IL_03b1;
			}
			case 17:
			{
				goto IL_03b1;
			}
			case 18:
			{
				goto IL_03b1;
			}
			case 19:
			{
				goto IL_03b1;
			}
			case 20:
			{
				goto IL_03b1;
			}
			case 21:
			{
				goto IL_03b1;
			}
			case 22:
			{
				goto IL_05fb;
			}
			case 23:
			{
				goto IL_05fb;
			}
			case 24:
			{
				goto IL_05fb;
			}
			case 25:
			{
				goto IL_05fb;
			}
			case 26:
			{
				goto IL_05fb;
			}
			case 27:
			{
				goto IL_04fe;
			}
			case 28:
			{
				goto IL_05f1;
			}
			case 29:
			{
				goto IL_05fb;
			}
			case 30:
			{
				goto IL_01ab;
			}
			case 31:
			{
				goto IL_05fb;
			}
			case 32:
			{
				goto IL_05fb;
			}
			case 33:
			{
				goto IL_014f;
			}
			case 34:
			{
				goto IL_014f;
			}
		}
	}
	{
		goto IL_05fb;
	}

IL_014f:
	{
		bool L_44 = __this->___handle_get_set_12;
		if (L_44)
		{
			goto IL_05fb;
		}
	}
	{
		V_2 = (-1);
		goto IL_05fb;
	}

IL_0161:
	{
		bool L_45 = __this->___handle_remove_add_13;
		if (L_45)
		{
			goto IL_05fb;
		}
	}
	{
		V_2 = (-1);
		goto IL_05fb;
	}

IL_0173:
	{
		int32_t L_46 = __this->___parsing_declaration_25;
		if (L_46)
		{
			goto IL_05fb;
		}
	}
	{
		V_2 = ((int32_t)358);
		goto IL_05fb;
	}

IL_0189:
	{
		int32_t L_47;
		L_47 = Tokenizer_peek_token_mAF963CC1D86BC58267185B27EED5781642976641(__this, NULL);
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)379)))))
		{
			goto IL_05fb;
		}
	}
	{
		int32_t L_48;
		L_48 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		V_2 = ((int32_t)426);
		goto IL_05fb;
	}

IL_01ab:
	{
		int32_t L_49 = __this->___current_token_10;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)269))))
		{
			goto IL_05fb;
		}
	}
	{
		bool L_50 = __this->___parsing_catch_when_28;
		if (L_50)
		{
			goto IL_05fb;
		}
	}
	{
		V_2 = (-1);
		goto IL_05fb;
	}

IL_01cd:
	{
		bool L_51 = __this->___handle_where_14;
		if (!L_51)
		{
			goto IL_01e5;
		}
	}
	{
		int32_t L_52 = __this->___current_token_10;
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)379)))))
		{
			goto IL_05fb;
		}
	}

IL_01e5:
	{
		bool L_53 = __this->___query_parsing_21;
		if (L_53)
		{
			goto IL_05fb;
		}
	}
	{
		V_2 = (-1);
		goto IL_05fb;
	}

IL_01f7:
	{
		bool L_54 = __this->___query_parsing_21;
		if (L_54)
		{
			goto IL_05fb;
		}
	}
	{
		bool L_55 = __this->___lambda_arguments_parsing_15;
		if (L_55)
		{
			goto IL_0212;
		}
	}
	{
		int32_t L_56 = __this->___parsing_block_20;
		if (L_56)
		{
			goto IL_0219;
		}
	}

IL_0212:
	{
		V_2 = (-1);
		goto IL_05fb;
	}

IL_0219:
	{
		Tokenizer_PushPosition_mB7AD2611F8561B13DCEF78328C2A8F2BD5B20DFC(__this, NULL);
		__this->___parsing_generic_less_than_17 = 1;
		int32_t L_57;
		L_57 = Tokenizer_xtoken_m9CAFDB4C6A680DD16C7E816961892809988F468B(__this, NULL);
		V_5 = L_57;
		int32_t L_58 = V_5;
		if ((((int32_t)L_58) > ((int32_t)((int32_t)295))))
		{
			goto IL_02a3;
		}
	}
	{
		int32_t L_59 = V_5;
		if ((((int32_t)L_59) > ((int32_t)((int32_t)270))))
		{
			goto IL_0269;
		}
	}
	{
		int32_t L_60 = V_5;
		if ((((int32_t)L_60) == ((int32_t)((int32_t)265))))
		{
			goto IL_02fe;
		}
	}
	{
		int32_t L_61 = V_5;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)267))))
		{
			goto IL_02fe;
		}
	}
	{
		int32_t L_62 = V_5;
		if ((((int32_t)L_62) == ((int32_t)((int32_t)270))))
		{
			goto IL_02fe;
		}
	}
	{
		goto IL_0376;
	}

IL_0269:
	{
		int32_t L_63 = V_5;
		if ((((int32_t)L_63) > ((int32_t)((int32_t)279))))
		{
			goto IL_028c;
		}
	}
	{
		int32_t L_64 = V_5;
		if ((((int32_t)L_64) == ((int32_t)((int32_t)275))))
		{
			goto IL_02fe;
		}
	}
	{
		int32_t L_65 = V_5;
		if ((((int32_t)L_65) == ((int32_t)((int32_t)279))))
		{
			goto IL_02fe;
		}
	}
	{
		goto IL_0376;
	}

IL_028c:
	{
		int32_t L_66 = V_5;
		if ((((int32_t)L_66) == ((int32_t)((int32_t)288))))
		{
			goto IL_02fe;
		}
	}
	{
		int32_t L_67 = V_5;
		if ((((int32_t)L_67) == ((int32_t)((int32_t)295))))
		{
			goto IL_02fe;
		}
	}
	{
		goto IL_0376;
	}

IL_02a3:
	{
		int32_t L_68 = V_5;
		if ((((int32_t)L_68) > ((int32_t)((int32_t)322))))
		{
			goto IL_02cc;
		}
	}
	{
		int32_t L_69 = V_5;
		if ((((int32_t)L_69) == ((int32_t)((int32_t)300))))
		{
			goto IL_02fe;
		}
	}
	{
		int32_t L_70 = V_5;
		if ((((int32_t)L_70) == ((int32_t)((int32_t)304))))
		{
			goto IL_02fe;
		}
	}
	{
		int32_t L_71 = V_5;
		if ((((int32_t)L_71) == ((int32_t)((int32_t)322))))
		{
			goto IL_02fe;
		}
	}
	{
		goto IL_0376;
	}

IL_02cc:
	{
		int32_t L_72 = V_5;
		if ((((int32_t)L_72) > ((int32_t)((int32_t)331))))
		{
			goto IL_02ec;
		}
	}
	{
		int32_t L_73 = V_5;
		if ((((int32_t)L_73) == ((int32_t)((int32_t)330))))
		{
			goto IL_02fe;
		}
	}
	{
		int32_t L_74 = V_5;
		if ((((int32_t)L_74) == ((int32_t)((int32_t)331))))
		{
			goto IL_02fe;
		}
	}
	{
		goto IL_0376;
	}

IL_02ec:
	{
		int32_t L_75 = V_5;
		if ((((int32_t)L_75) == ((int32_t)((int32_t)337))))
		{
			goto IL_0363;
		}
	}
	{
		int32_t L_76 = V_5;
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)422)))))
		{
			goto IL_0376;
		}
	}

IL_02fe:
	{
		int32_t L_77;
		L_77 = Tokenizer_xtoken_m9CAFDB4C6A680DD16C7E816961892809988F468B(__this, NULL);
		V_3 = L_77;
		int32_t L_78 = V_3;
		if ((((int32_t)L_78) == ((int32_t)((int32_t)380))))
		{
			goto IL_0376;
		}
	}
	{
		int32_t L_79 = V_3;
		if ((((int32_t)L_79) == ((int32_t)((int32_t)378))))
		{
			goto IL_0376;
		}
	}
	{
		int32_t L_80 = V_3;
		if ((((int32_t)L_80) == ((int32_t)((int32_t)348))))
		{
			goto IL_0376;
		}
	}
	{
		int32_t L_81 = V_3;
		if ((((int32_t)L_81) == ((int32_t)((int32_t)385))))
		{
			goto IL_0376;
		}
	}
	{
		V_2 = ((int32_t)345);
		__this->___query_parsing_21 = (bool)1;
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_82 = __this->___context_2;
		NullCheck(L_82);
		CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* L_83;
		L_83 = CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline(L_82, NULL);
		NullCheck(L_83);
		int32_t L_84 = L_83->___Version_5;
		if ((((int32_t)L_84) > ((int32_t)2)))
		{
			goto IL_03a6;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_85 = __this->___Report_3;
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_86 = __this->___context_2;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_87;
		L_87 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_85);
		Report_FeatureIsNotAvailable_m3B6E75516D3353EECA9E8695F328132F5390B5BD(L_85, L_86, L_87, _stringLiteralB1E01E5F06900F85A4610CB4BA177EBBE0318DA7, NULL);
		goto IL_03a6;
	}

IL_0363:
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_88;
		L_88 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_89 = __this->___Report_3;
		Expression_Error_VoidInvalidInTheContext_m8A0DA33BF8D8592DD2DA1733C05FB8C6AEB4FCCC(L_88, L_89, NULL);
		goto IL_03a6;
	}

IL_0376:
	{
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_90 = __this->___id_builder_65;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)102));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_91 = __this->___id_builder_65;
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)114));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_92 = __this->___id_builder_65;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)((int32_t)111));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_93 = __this->___id_builder_65;
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppChar)((int32_t)109));
		return (-1);
	}

IL_03a6:
	{
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		goto IL_05fb;
	}

IL_03b1:
	{
		bool L_94 = __this->___query_parsing_21;
		if (L_94)
		{
			goto IL_05fb;
		}
	}
	{
		V_2 = (-1);
		goto IL_05fb;
	}

IL_03c3:
	{
		Tokenizer_check_incorrect_doc_comment_m016964722F7CA23A327E6C1588926527C7B2F251(__this, NULL);
		__this->___parsing_modifiers_27 = (bool)0;
		goto IL_05fb;
	}

IL_03d5:
	{
		int32_t L_95 = __this->___parsing_block_20;
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_03e5;
		}
	}
	{
		V_2 = (-1);
		goto IL_05fb;
	}

IL_03e5:
	{
		Tokenizer_PushPosition_mB7AD2611F8561B13DCEF78328C2A8F2BD5B20DFC(__this, NULL);
		int32_t L_96;
		L_96 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		V_3 = L_96;
		int32_t L_97 = V_3;
		if ((((int32_t)L_97) == ((int32_t)((int32_t)272))))
		{
			goto IL_0414;
		}
	}
	{
		int32_t L_98 = V_3;
		if ((((int32_t)L_98) == ((int32_t)((int32_t)323))))
		{
			goto IL_0414;
		}
	}
	{
		int32_t L_99 = V_3;
		if ((((int32_t)L_99) == ((int32_t)((int32_t)296))))
		{
			goto IL_0414;
		}
	}
	{
		int32_t L_100 = V_3;
		G_B87_0 = ((((int32_t)L_100) == ((int32_t)((int32_t)337)))? 1 : 0);
		goto IL_0415;
	}

IL_0414:
	{
		G_B87_0 = 1;
	}

IL_0415:
	{
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		if (!G_B87_0)
		{
			goto IL_0487;
		}
	}
	{
		int32_t L_101 = V_3;
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)337)))))
		{
			goto IL_0456;
		}
	}
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_102 = __this->___context_2;
		NullCheck(L_102);
		CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* L_103;
		L_103 = CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline(L_102, NULL);
		NullCheck(L_103);
		int32_t L_104 = L_103->___Version_5;
		if ((((int32_t)L_104) > ((int32_t)2)))
		{
			goto IL_0485;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_105 = __this->___Report_3;
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_106 = __this->___context_2;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_107;
		L_107 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_105);
		Report_FeatureIsNotAvailable_m3B6E75516D3353EECA9E8695F328132F5390B5BD(L_105, L_106, L_107, _stringLiteral9AEFD24EDA1559C9608DD3DFE1E1D00B790FCC10, NULL);
		goto IL_0485;
	}

IL_0456:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_108 = __this->___context_2;
		NullCheck(L_108);
		CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* L_109;
		L_109 = CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline(L_108, NULL);
		NullCheck(L_109);
		int32_t L_110 = L_109->___Version_5;
		if ((!(((uint32_t)L_110) == ((uint32_t)1))))
		{
			goto IL_0485;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_111 = __this->___Report_3;
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_112 = __this->___context_2;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_113;
		L_113 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_111);
		Report_FeatureIsNotAvailable_m3B6E75516D3353EECA9E8695F328132F5390B5BD(L_111, L_112, L_113, _stringLiteral03133975784A1AD51581DE984DB04CC79C37CA84, NULL);
	}

IL_0485:
	{
		int32_t L_114 = V_2;
		return L_114;
	}

IL_0487:
	{
		int32_t L_115 = V_3;
		if ((((int32_t)L_115) >= ((int32_t)((int32_t)370))))
		{
			goto IL_04b1;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_116 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_117;
		L_117 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_116);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_116, ((int32_t)267), L_117, _stringLiteralA57ABA1EBF0C3B34327C1BC77E11EA636CE5879E, NULL);
		int32_t L_118;
		L_118 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		return L_118;
	}

IL_04b1:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_119 = __this->___id_builder_65;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)112));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_120 = __this->___id_builder_65;
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)97));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_121 = __this->___id_builder_65;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)((int32_t)114));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_122 = __this->___id_builder_65;
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppChar)((int32_t)116));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_123 = __this->___id_builder_65;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppChar)((int32_t)105));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_124 = __this->___id_builder_65;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppChar)((int32_t)97));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_125 = __this->___id_builder_65;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(6), (Il2CppChar)((int32_t)108));
		V_2 = (-1);
		goto IL_05fb;
	}

IL_04fe:
	{
		bool L_126 = __this->___parsing_modifiers_27;
		if (!L_126)
		{
			goto IL_0525;
		}
	}
	{
		bool L_127 = __this->___parsing_attribute_section_26;
		if (L_127)
		{
			goto IL_051e;
		}
	}
	{
		int32_t L_128;
		L_128 = Tokenizer_peek_token_mAF963CC1D86BC58267185B27EED5781642976641(__this, NULL);
		if ((!(((uint32_t)L_128) == ((uint32_t)((int32_t)375)))))
		{
			goto IL_05b8;
		}
	}

IL_051e:
	{
		V_2 = (-1);
		goto IL_05b8;
	}

IL_0525:
	{
		int32_t L_129 = __this->___parsing_block_20;
		if ((((int32_t)L_129) <= ((int32_t)0)))
		{
			goto IL_05b6;
		}
	}
	{
		int32_t L_130;
		L_130 = Tokenizer_peek_token_mAF963CC1D86BC58267185B27EED5781642976641(__this, NULL);
		V_5 = L_130;
		int32_t L_131 = V_5;
		if ((((int32_t)L_131) == ((int32_t)((int32_t)277))))
		{
			goto IL_05b8;
		}
	}
	{
		int32_t L_132 = V_5;
		if ((((int32_t)L_132) == ((int32_t)((int32_t)422))))
		{
			goto IL_0556;
		}
	}
	{
		int32_t L_133 = V_5;
		if ((((int32_t)L_133) == ((int32_t)((int32_t)423))))
		{
			goto IL_05b8;
		}
	}
	{
		goto IL_0580;
	}

IL_0556:
	{
		Tokenizer_PushPosition_mB7AD2611F8561B13DCEF78328C2A8F2BD5B20DFC(__this, NULL);
		int32_t L_134;
		L_134 = Tokenizer_xtoken_m9CAFDB4C6A680DD16C7E816961892809988F468B(__this, NULL);
		int32_t L_135;
		L_135 = Tokenizer_xtoken_m9CAFDB4C6A680DD16C7E816961892809988F468B(__this, NULL);
		if ((((int32_t)L_135) == ((int32_t)((int32_t)343))))
		{
			goto IL_0578;
		}
	}
	{
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		goto IL_0580;
	}

IL_0578:
	{
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		goto IL_05b8;
	}

IL_0580:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_136 = __this->___id_builder_65;
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)97));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_137 = __this->___id_builder_65;
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)115));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_138 = __this->___id_builder_65;
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)((int32_t)121));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_139 = __this->___id_builder_65;
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppChar)((int32_t)110));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_140 = __this->___id_builder_65;
		NullCheck(L_140);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppChar)((int32_t)99));
		V_2 = (-1);
		goto IL_05b8;
	}

IL_05b6:
	{
		V_2 = (-1);
	}

IL_05b8:
	{
		int32_t L_141 = V_2;
		if ((!(((uint32_t)L_141) == ((uint32_t)((int32_t)362)))))
		{
			goto IL_05fb;
		}
	}
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_142 = __this->___context_2;
		NullCheck(L_142);
		CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* L_143;
		L_143 = CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline(L_142, NULL);
		NullCheck(L_143);
		int32_t L_144 = L_143->___Version_5;
		if ((((int32_t)L_144) > ((int32_t)4)))
		{
			goto IL_05fb;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_145 = __this->___Report_3;
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_146 = __this->___context_2;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_147;
		L_147 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_145);
		Report_FeatureIsNotAvailable_m3B6E75516D3353EECA9E8695F328132F5390B5BD(L_145, L_146, L_147, _stringLiteral6F0D5464DBDBB4D3360D072E96CE6F7573367007, NULL);
		goto IL_05fb;
	}

IL_05f1:
	{
		int32_t L_148 = __this->___parsing_block_20;
		if (L_148)
		{
			goto IL_05fb;
		}
	}
	{
		V_2 = (-1);
	}

IL_05fb:
	{
		int32_t L_149 = V_2;
		return L_149;
	}
}
// Mono.CSharp.Tokenizer/PreprocessorDirective Mono.CSharp.Tokenizer::GetPreprocessorDirective(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_GetPreprocessorDirective_mBB14540054D54C3D56D4732741156CC2CEBD301A (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___id0, int32_t ___id_len1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___id_len1;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205* L_1 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keywords_preprocessor_44;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205* L_2 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keywords_preprocessor_44;
		int32_t L_3 = ___id_len1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		KeywordEntry_1U5BU5D_tCD7EC0B45DFBAE2FE37133CF321C0D3B059F0BB9* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (L_5)
		{
			goto IL_0015;
		}
	}

IL_0013:
	{
		return (int32_t)(0);
	}

IL_0015:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___id0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint16_t L_8 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)95)));
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)27))))
		{
			goto IL_0023;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		KeywordEntry_1U5BU5DU5BU5D_t010065745C4D66C2315B45C942B4D7F240BD9205* L_10 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keywords_preprocessor_44;
		int32_t L_11 = ___id_len1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		KeywordEntry_1U5BU5D_tCD7EC0B45DFBAE2FE37133CF321C0D3B059F0BB9* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_1 = L_16;
		KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* L_17 = V_1;
		if (L_17)
		{
			goto IL_0032;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0032:
	{
		V_2 = 0;
	}

IL_0034:
	{
		KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = L_18->___Token_0;
		V_2 = L_19;
		V_3 = 1;
		goto IL_005b;
	}

IL_003f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = ___id0;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint16_t L_23 = (uint16_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* L_24 = V_1;
		NullCheck(L_24);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = L_24->___Value_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint16_t L_28 = (uint16_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((((int32_t)L_23) == ((int32_t)L_28)))
		{
			goto IL_0057;
		}
	}
	{
		V_2 = 0;
		KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* L_29 = V_1;
		NullCheck(L_29);
		KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* L_30 = L_29->___Next_1;
		V_1 = L_30;
		goto IL_005f;
	}

IL_0057:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_005b:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = ___id_len1;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_003f;
		}
	}

IL_005f:
	{
		int32_t L_34 = V_2;
		if (L_34)
		{
			goto IL_0065;
		}
	}
	{
		KeywordEntry_1_t9388879AF3940B301F7E102967CE76B26F9DE794* L_35 = V_1;
		if (L_35)
		{
			goto IL_0034;
		}
	}

IL_0065:
	{
		int32_t L_36 = V_2;
		return L_36;
	}
}
// Mono.CSharp.Location Mono.CSharp.Tokenizer::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_0 = __this->___current_source_4;
		int32_t L_1 = __this->___ref_line_6;
		int32_t L_2 = __this->___col_8;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Location__ctor_mC6B21F2E96C725F5B7CBFB2476132D9520C9E78F((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::is_identifier_start_character(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_is_identifier_start_character_m7260FDF47153E1BA05155D2BA5BE95D786F09FEE (int32_t ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___c0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)97))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___c0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0019;
		}
	}

IL_000a:
	{
		int32_t L_2 = ___c0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = ___c0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		int32_t L_4 = ___c0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_001b;
		}
	}

IL_0019:
	{
		return (bool)1;
	}

IL_001b:
	{
		int32_t L_5 = ___c0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0025;
		}
	}
	{
		return (bool)0;
	}

IL_0025:
	{
		int32_t L_6 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Tokenizer_is_identifier_start_character_slow_part_m6614AFFEE1931747A22E503047CE3DAECACD20D6(((int32_t)(uint16_t)L_6), NULL);
		return L_7;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::is_identifier_part_character(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_is_identifier_part_character_m320FF0CA1E98E3F6B9C4506F7E41E116E3AF5A36 (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)97))))
		{
			goto IL_000c;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)122))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		Il2CppChar L_2 = ___c0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65))))
		{
			goto IL_0018;
		}
	}
	{
		Il2CppChar L_3 = ___c0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)90))))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		Il2CppChar L_4 = ___c0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)95))))
		{
			goto IL_0027;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppChar L_6 = ___c0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)57))))
		{
			goto IL_0029;
		}
	}

IL_0027:
	{
		return (bool)1;
	}

IL_0029:
	{
		Il2CppChar L_7 = ___c0;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0033:
	{
		Il2CppChar L_8 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Tokenizer_is_identifier_part_character_slow_part_mC6325EC6BC0EBCE43EFC2F195E3B28278E4936B1(L_8, NULL);
		return L_9;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::is_identifier_start_character_slow_part(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_is_identifier_start_character_slow_part_m6614AFFEE1931747A22E503047CE3DAECACD20D6 (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Char_GetUnicodeCategory_m77918F2C9C8E103453F2146071739767CA65F6DC(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_0037;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_0037;
			}
			case 4:
			{
				goto IL_0037;
			}
			case 5:
			{
				goto IL_0039;
			}
			case 6:
			{
				goto IL_0039;
			}
			case 7:
			{
				goto IL_0039;
			}
			case 8:
			{
				goto IL_0039;
			}
			case 9:
			{
				goto IL_0037;
			}
		}
	}
	{
		goto IL_0039;
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		return (bool)0;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::is_identifier_part_character_slow_part(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_is_identifier_part_character_slow_part_mC6325EC6BC0EBCE43EFC2F195E3B28278E4936B1 (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Char_GetUnicodeCategory_m77918F2C9C8E103453F2146071739767CA65F6DC(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_005b;
			}
			case 1:
			{
				goto IL_005b;
			}
			case 2:
			{
				goto IL_005b;
			}
			case 3:
			{
				goto IL_005b;
			}
			case 4:
			{
				goto IL_005b;
			}
			case 5:
			{
				goto IL_005b;
			}
			case 6:
			{
				goto IL_005b;
			}
			case 7:
			{
				goto IL_0069;
			}
			case 8:
			{
				goto IL_005b;
			}
			case 9:
			{
				goto IL_005b;
			}
			case 10:
			{
				goto IL_0069;
			}
			case 11:
			{
				goto IL_0069;
			}
			case 12:
			{
				goto IL_0069;
			}
			case 13:
			{
				goto IL_0069;
			}
			case 14:
			{
				goto IL_0069;
			}
			case 15:
			{
				goto IL_005d;
			}
			case 16:
			{
				goto IL_0069;
			}
			case 17:
			{
				goto IL_0069;
			}
			case 18:
			{
				goto IL_005b;
			}
		}
	}
	{
		goto IL_0069;
	}

IL_005b:
	{
		return (bool)1;
	}

IL_005d:
	{
		Il2CppChar L_3 = ___c0;
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)((int32_t)65279)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0069:
	{
		return (bool)0;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::IsKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_IsKeyword_mB3ECDEDDE66DDEBA00C9EB4650E2946DE736CC85 (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___keyword_strings_45;
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_0, L_1, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::TokenizeOpenParens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizeOpenParens_mDE3FE2D43F94CB118459AF969BD923719C76CCB4 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		__this->___current_token_10 = (-1);
		V_1 = 0;
		V_2 = (bool)0;
		V_3 = (bool)0;
	}

IL_000d:
	{
		int32_t L_0 = __this->___current_token_10;
		V_0 = L_0;
		int32_t L_1;
		L_1 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		int32_t L_2 = __this->___current_token_10;
		V_4 = L_2;
		int32_t L_3 = V_4;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)313))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_4 = V_4;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)279))))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_5 = V_4;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)267))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)265))))
		{
			goto IL_03d9;
		}
	}
	{
		int32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)267))))
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_0428;
	}

IL_005e:
	{
		int32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)270))))
		{
			goto IL_03d9;
		}
	}
	{
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)275))))
		{
			goto IL_03d9;
		}
	}
	{
		int32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)279))))
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_0428;
	}

IL_0087:
	{
		int32_t L_11 = V_4;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)300))))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)288))))
		{
			goto IL_03d9;
		}
	}
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)295))))
		{
			goto IL_03d9;
		}
	}
	{
		int32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)300))))
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_0428;
	}

IL_00b9:
	{
		int32_t L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)304))))
		{
			goto IL_03d9;
		}
	}
	{
		int32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)306))))
		{
			goto IL_041f;
		}
	}
	{
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)313))))
		{
			goto IL_041f;
		}
	}
	{
		goto IL_0428;
	}

IL_00e2:
	{
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)337))))
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_19 = V_4;
		if ((((int32_t)L_19) > ((int32_t)((int32_t)318))))
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)316))))
		{
			goto IL_03d9;
		}
	}
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)318))))
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_0428;
	}

IL_0111:
	{
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)322))))
		{
			goto IL_03d9;
		}
	}
	{
		int32_t L_23 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)330))))
		{
			case 0:
			{
				goto IL_03d9;
			}
			case 1:
			{
				goto IL_03d9;
			}
			case 2:
			{
				goto IL_0428;
			}
			case 3:
			{
				goto IL_0428;
			}
			case 4:
			{
				goto IL_03d9;
			}
		}
	}
	{
		int32_t L_24 = V_4;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)337))))
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_0428;
	}

IL_014f:
	{
		int32_t L_25 = V_4;
		if ((((int32_t)L_25) > ((int32_t)((int32_t)378))))
		{
			goto IL_019a;
		}
	}
	{
		int32_t L_26 = V_4;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)357))))
		{
			goto IL_0412;
		}
	}
	{
		int32_t L_27 = V_4;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)363))))
		{
			goto IL_0384;
		}
	}
	{
		int32_t L_28 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract(L_28, ((int32_t)373))))
		{
			case 0:
			{
				goto IL_03f8;
			}
			case 1:
			{
				goto IL_0409;
			}
			case 2:
			{
				goto IL_0428;
			}
			case 3:
			{
				goto IL_01d8;
			}
			case 4:
			{
				goto IL_0369;
			}
			case 5:
			{
				goto IL_03e6;
			}
		}
	}
	{
		goto IL_0428;
	}

IL_019a:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)390))))
		{
			goto IL_0412;
		}
	}
	{
		int32_t L_30 = V_4;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)395))))
		{
			goto IL_0369;
		}
	}
	{
		int32_t L_31 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract(L_31, ((int32_t)418))))
		{
			case 0:
			{
				goto IL_03f8;
			}
			case 1:
			{
				goto IL_0428;
			}
			case 2:
			{
				goto IL_0409;
			}
			case 3:
			{
				goto IL_0428;
			}
			case 4:
			{
				goto IL_0384;
			}
		}
	}
	{
		goto IL_0428;
	}

IL_01d8:
	{
		int32_t L_32;
		L_32 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		int32_t L_33 = __this->___current_token_10;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)343)))))
		{
			goto IL_01f2;
		}
	}
	{
		return ((int32_t)423);
	}

IL_01f2:
	{
		bool L_34 = V_2;
		if (!L_34)
		{
			goto IL_020e;
		}
	}
	{
		int32_t L_35 = __this->___current_token_10;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)380)))))
		{
			goto IL_0208;
		}
	}
	{
		return ((int32_t)375);
	}

IL_0208:
	{
		return ((int32_t)424);
	}

IL_020e:
	{
		bool L_36 = V_3;
		if (!L_36)
		{
			goto IL_0363;
		}
	}
	{
		int32_t L_37 = __this->___current_token_10;
		V_4 = L_37;
		int32_t L_38 = V_4;
		if ((((int32_t)L_38) > ((int32_t)((int32_t)334))))
		{
			goto IL_031c;
		}
	}
	{
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) > ((int32_t)((int32_t)288))))
		{
			goto IL_02a0;
		}
	}
	{
		int32_t L_40 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract(L_40, ((int32_t)264))))
		{
			case 0:
			{
				goto IL_035d;
			}
			case 1:
			{
				goto IL_035d;
			}
			case 2:
			{
				goto IL_0363;
			}
			case 3:
			{
				goto IL_035d;
			}
			case 4:
			{
				goto IL_0363;
			}
			case 5:
			{
				goto IL_0363;
			}
			case 6:
			{
				goto IL_035d;
			}
			case 7:
			{
				goto IL_035d;
			}
			case 8:
			{
				goto IL_0363;
			}
			case 9:
			{
				goto IL_0363;
			}
			case 10:
			{
				goto IL_0363;
			}
			case 11:
			{
				goto IL_035d;
			}
			case 12:
			{
				goto IL_035d;
			}
			case 13:
			{
				goto IL_035d;
			}
			case 14:
			{
				goto IL_0363;
			}
			case 15:
			{
				goto IL_035d;
			}
		}
	}
	{
		int32_t L_41 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract(L_41, ((int32_t)285))))
		{
			case 0:
			{
				goto IL_035d;
			}
			case 1:
			{
				goto IL_0363;
			}
			case 2:
			{
				goto IL_035d;
			}
			case 3:
			{
				goto IL_035d;
			}
		}
	}
	{
		goto IL_0363;
	}

IL_02a0:
	{
		int32_t L_42 = V_4;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)295))))
		{
			goto IL_035d;
		}
	}
	{
		int32_t L_43 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract(L_43, ((int32_t)300))))
		{
			case 0:
			{
				goto IL_035d;
			}
			case 1:
			{
				goto IL_0363;
			}
			case 2:
			{
				goto IL_035d;
			}
			case 3:
			{
				goto IL_035d;
			}
		}
	}
	{
		int32_t L_44 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract(L_44, ((int32_t)318))))
		{
			case 0:
			{
				goto IL_035d;
			}
			case 1:
			{
				goto IL_035d;
			}
			case 2:
			{
				goto IL_0363;
			}
			case 3:
			{
				goto IL_0363;
			}
			case 4:
			{
				goto IL_035d;
			}
			case 5:
			{
				goto IL_0363;
			}
			case 6:
			{
				goto IL_0363;
			}
			case 7:
			{
				goto IL_035d;
			}
			case 8:
			{
				goto IL_035d;
			}
			case 9:
			{
				goto IL_035d;
			}
			case 10:
			{
				goto IL_0363;
			}
			case 11:
			{
				goto IL_035d;
			}
			case 12:
			{
				goto IL_035d;
			}
			case 13:
			{
				goto IL_035d;
			}
			case 14:
			{
				goto IL_035d;
			}
			case 15:
			{
				goto IL_035d;
			}
			case 16:
			{
				goto IL_035d;
			}
		}
	}
	{
		goto IL_0363;
	}

IL_031c:
	{
		int32_t L_45 = V_4;
		if ((((int32_t)L_45) > ((int32_t)((int32_t)381))))
		{
			goto IL_0342;
		}
	}
	{
		int32_t L_46 = V_4;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)363))))
		{
			goto IL_035d;
		}
	}
	{
		int32_t L_47 = V_4;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)375))))
		{
			goto IL_035d;
		}
	}
	{
		int32_t L_48 = V_4;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)381))))
		{
			goto IL_035d;
		}
	}
	{
		goto IL_0363;
	}

IL_0342:
	{
		int32_t L_49 = V_4;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)384))))
		{
			goto IL_035d;
		}
	}
	{
		int32_t L_50 = V_4;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)421))))
		{
			goto IL_035d;
		}
	}
	{
		int32_t L_51 = V_4;
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)422)))))
		{
			goto IL_0363;
		}
	}

IL_035d:
	{
		return ((int32_t)424);
	}

IL_0363:
	{
		return ((int32_t)375);
	}

IL_0369:
	{
		int32_t L_52 = V_0;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)422))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_53 = V_0;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)420))))
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0428;
	}

IL_0384:
	{
		int32_t L_54 = V_0;
		if ((((int32_t)L_54) > ((int32_t)((int32_t)377))))
		{
			goto IL_039a;
		}
	}
	{
		int32_t L_55 = V_0;
		if ((((int32_t)L_55) == ((int32_t)(-1))))
		{
			goto IL_03c3;
		}
	}
	{
		int32_t L_56 = V_0;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)377))))
		{
			goto IL_03b4;
		}
	}
	{
		goto IL_03d0;
	}

IL_039a:
	{
		int32_t L_57 = V_0;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)378))))
		{
			goto IL_03c3;
		}
	}
	{
		int32_t L_58 = V_0;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)395))))
		{
			goto IL_03c3;
		}
	}
	{
		int32_t L_59 = V_0;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)418))))
		{
			goto IL_03c3;
		}
	}
	{
		goto IL_03d0;
	}

IL_03b4:
	{
		int32_t L_60 = V_1;
		if (L_60)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (bool)0;
		V_3 = (bool)1;
		goto IL_000d;
	}

IL_03c3:
	{
		int32_t L_61 = V_1;
		if (L_61)
		{
			goto IL_000d;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_000d;
	}

IL_03d0:
	{
		int32_t L_62 = 0;
		V_2 = (bool)L_62;
		V_3 = (bool)L_62;
		goto IL_000d;
	}

IL_03d9:
	{
		int32_t L_63 = V_1;
		if (L_63)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_000d;
	}

IL_03e6:
	{
		int32_t L_64 = V_1;
		if (L_64)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = ((int32_t)100);
		int32_t L_65 = 0;
		V_2 = (bool)L_65;
		V_3 = (bool)L_65;
		goto IL_000d;
	}

IL_03f8:
	{
		int32_t L_66 = V_1;
		int32_t L_67 = L_66;
		V_1 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		if (L_67)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_000d;
	}

IL_0409:
	{
		int32_t L_68 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
		goto IL_000d;
	}

IL_0412:
	{
		int32_t L_69 = V_1;
		if (L_69)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_000d;
	}

IL_041f:
	{
		int32_t L_70 = 0;
		V_2 = (bool)L_70;
		V_3 = (bool)L_70;
		goto IL_000d;
	}

IL_0428:
	{
		return ((int32_t)375);
	}
}
// System.Boolean Mono.CSharp.Tokenizer::IsValidIdentifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_IsValidIdentifier_mD8B5874644E6F25F79794940CC5C538DD89A2C95 (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		String_t* L_3 = ___s0;
		NullCheck(L_3);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Tokenizer_is_identifier_start_character_m7260FDF47153E1BA05155D2BA5BE95D786F09FEE(L_4, NULL);
		if (L_5)
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		V_0 = 1;
		goto IL_0035;
	}

IL_0021:
	{
		String_t* L_6 = ___s0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Tokenizer_is_identifier_part_character_m320FF0CA1E98E3F6B9C4506F7E41E116E3AF5A36(L_8, NULL);
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		int32_t L_11 = V_0;
		String_t* L_12 = ___s0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::parse_less_than(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_parse_less_than_mED4B484E7F99EA932B9877CCC7621069F7807A64 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t* ___genericDimension0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;

IL_0000:
	{
		int32_t L_0;
		L_0 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)373)))))
		{
			goto IL_0031;
		}
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)257)))))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)1;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)374)))))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_5;
		L_5 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		V_0 = L_5;
		goto IL_0048;
	}

IL_0031:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)294))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)306)))))
		{
			goto IL_0048;
		}
	}

IL_0041:
	{
		int32_t L_8;
		L_8 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		V_0 = L_8;
	}

IL_0048:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)300))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)275))))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)267))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)265))))
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)267))))
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_01a4;
	}

IL_007e:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)270))))
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)275))))
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_01a4;
	}

IL_0099:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) > ((int32_t)((int32_t)288))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)279))))
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)288))))
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_01a4;
	}

IL_00bc:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)294))))
		{
			goto IL_017b;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)295))))
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)300))))
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_01a4;
	}

IL_00e2:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)322))))
		{
			goto IL_012a;
		}
	}
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) > ((int32_t)((int32_t)306))))
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)304))))
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)306))))
		{
			goto IL_017b;
		}
	}
	{
		goto IL_01a4;
	}

IL_010a:
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)316))))
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)318))))
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)322))))
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_01a4;
	}

IL_012a:
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)337))))
		{
			goto IL_015c;
		}
	}
	{
		int32_t L_30 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)330))))
		{
			case 0:
			{
				goto IL_01a6;
			}
			case 1:
			{
				goto IL_01a6;
			}
			case 2:
			{
				goto IL_01a4;
			}
			case 3:
			{
				goto IL_01a4;
			}
			case 4:
			{
				goto IL_01a6;
			}
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)337))))
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_01a4;
	}

IL_015c:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)378))))
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)420))))
		{
			goto IL_0176;
		}
	}
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)422))))
		{
			goto IL_01a6;
		}
	}
	{
		goto IL_01a4;
	}

IL_0176:
	{
		int32_t* L_35 = ___genericDimension0;
		*((int32_t*)L_35) = (int32_t)1;
		return (bool)1;
	}

IL_017b:
	{
		return (bool)1;
	}

IL_017d:
	{
		int32_t* L_36 = ___genericDimension0;
		int32_t* L_37 = L_36;
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)L_37) = (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39;
		L_39 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		V_0 = L_39;
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)378))))
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_41 = V_0;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)420)))))
		{
			goto IL_01a2;
		}
	}
	{
		int32_t* L_42 = ___genericDimension0;
		int32_t* L_43 = L_42;
		int32_t L_44 = *((int32_t*)L_43);
		*((int32_t*)L_43) = (int32_t)((int32_t)il2cpp_codegen_add(L_44, 1));
		return (bool)1;
	}

IL_01a2:
	{
		return (bool)0;
	}

IL_01a4:
	{
		return (bool)0;
	}

IL_01a6:
	{
		int32_t L_45;
		L_45 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		V_0 = L_45;
		int32_t L_46 = V_0;
		if ((!(((uint32_t)L_46) == ((uint32_t)((int32_t)420)))))
		{
			goto IL_01b7;
		}
	}
	{
		return (bool)1;
	}

IL_01b7:
	{
		int32_t L_47 = V_0;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)378))))
		{
			goto IL_0000;
		}
	}
	{
		int32_t L_48 = V_0;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)377))))
		{
			goto IL_0000;
		}
	}
	{
		int32_t L_49 = V_0;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)395))))
		{
			goto IL_0000;
		}
	}
	{
		int32_t L_50 = V_0;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)357))))
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_51 = V_0;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)390))))
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_52 = V_0;
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)418)))))
		{
			goto IL_01fb;
		}
	}
	{
		int32_t* L_53 = ___genericDimension0;
		bool L_54;
		L_54 = Tokenizer_parse_less_than_mED4B484E7F99EA932B9877CCC7621069F7807A64(__this, L_53, NULL);
		if (L_54)
		{
			goto IL_01a6;
		}
	}
	{
		return (bool)0;
	}

IL_01fb:
	{
		int32_t L_55 = V_0;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)373)))))
		{
			goto IL_021c;
		}
	}

IL_0203:
	{
		int32_t L_56;
		L_56 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		V_0 = L_56;
		int32_t L_57 = V_0;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)374))))
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_58 = V_0;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)378))))
		{
			goto IL_0203;
		}
	}
	{
		return (bool)0;
	}

IL_021c:
	{
		return (bool)0;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::peek_token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_peek_token_mAF963CC1D86BC58267185B27EED5781642976641 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		Tokenizer_PushPosition_mB7AD2611F8561B13DCEF78328C2A8F2BD5B20DFC(__this, NULL);
		int32_t L_0;
		L_0 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		return L_0;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::TokenizePossibleNullableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizePossibleNullableType_m814460423EEA49AB219E2626582BF78D762FFCBF (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B81_0 = 0;
	{
		int32_t L_0 = __this->___parsing_block_20;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->___parsing_type_22;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		return ((int32_t)357);
	}

IL_0017:
	{
		int32_t L_2;
		L_2 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4;
		L_4 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)417);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_003b;
		}
	}
	{
		return ((int32_t)364);
	}

IL_003b:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)32))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)44))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)59))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0055;
		}
	}

IL_004f:
	{
		return ((int32_t)357);
	}

IL_0055:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)42))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)48))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)57))))
		{
			goto IL_006a;
		}
	}

IL_0064:
	{
		return ((int32_t)394);
	}

IL_006a:
	{
		Tokenizer_PushPosition_mB7AD2611F8561B13DCEF78328C2A8F2BD5B20DFC(__this, NULL);
		__this->___current_token_10 = ((int32_t)258);
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		int32_t L_13;
		L_13 = Tokenizer_xtoken_m9CAFDB4C6A680DD16C7E816961892809988F468B(__this, NULL);
		V_5 = L_13;
		int32_t L_14 = V_5;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)325))))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_15 = V_5;
		if ((((int32_t)L_15) > ((int32_t)((int32_t)302))))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)285))))
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_17 = V_5;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)302))))
		{
			goto IL_0182;
		}
	}
	{
		goto IL_01a2;
	}

IL_00b9:
	{
		int32_t L_18 = V_5;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)303))))
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_19 = V_5;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)325))))
		{
			goto IL_0182;
		}
	}
	{
		goto IL_01a2;
	}

IL_00d6:
	{
		int32_t L_20 = V_5;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)380))))
		{
			goto IL_0136;
		}
	}
	{
		int32_t L_21 = V_5;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)327))))
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_22 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract(L_22, ((int32_t)366))))
		{
			case 0:
			{
				goto IL_0182;
			}
			case 1:
			{
				goto IL_01a2;
			}
			case 2:
			{
				goto IL_01a2;
			}
			case 3:
			{
				goto IL_01a2;
			}
			case 4:
			{
				goto IL_01a2;
			}
			case 5:
			{
				goto IL_01a2;
			}
			case 6:
			{
				goto IL_01a2;
			}
			case 7:
			{
				goto IL_018a;
			}
			case 8:
			{
				goto IL_01a2;
			}
			case 9:
			{
				goto IL_0192;
			}
			case 10:
			{
				goto IL_018a;
			}
			case 11:
			{
				goto IL_017a;
			}
			case 12:
			{
				goto IL_018a;
			}
			case 13:
			{
				goto IL_018a;
			}
			case 14:
			{
				goto IL_018a;
			}
		}
	}
	{
		goto IL_01a2;
	}

IL_0136:
	{
		int32_t L_23 = V_5;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)394))))
		{
			goto IL_018a;
		}
	}
	{
		int32_t L_24 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)417))))
		{
			case 0:
			{
				goto IL_018a;
			}
			case 1:
			{
				goto IL_019a;
			}
			case 2:
			{
				goto IL_019a;
			}
			case 3:
			{
				goto IL_018a;
			}
			case 4:
			{
				goto IL_0182;
			}
			case 5:
			{
				goto IL_01a2;
			}
			case 6:
			{
				goto IL_0192;
			}
			case 7:
			{
				goto IL_0192;
			}
			case 8:
			{
				goto IL_019a;
			}
			case 9:
			{
				goto IL_01a2;
			}
			case 10:
			{
				goto IL_017a;
			}
		}
	}
	{
		goto IL_01a2;
	}

IL_017a:
	{
		V_1 = ((int32_t)364);
		goto IL_01a4;
	}

IL_0182:
	{
		V_1 = ((int32_t)394);
		goto IL_01a4;
	}

IL_018a:
	{
		V_1 = ((int32_t)357);
		goto IL_01a4;
	}

IL_0192:
	{
		V_1 = (-1);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		goto IL_01a4;
	}

IL_019a:
	{
		V_1 = (-1);
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		goto IL_01a4;
	}

IL_01a2:
	{
		V_1 = (-1);
	}

IL_01a4:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_03a2;
		}
	}
	{
		int32_t L_28;
		L_28 = Tokenizer_xtoken_m9CAFDB4C6A680DD16C7E816961892809988F468B(__this, NULL);
		V_6 = L_28;
		int32_t L_29 = V_6;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)294))))
		{
			goto IL_0228;
		}
	}
	{
		int32_t L_30 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract(L_30, ((int32_t)371))))
		{
			case 0:
			{
				goto IL_0228;
			}
			case 1:
			{
				goto IL_0256;
			}
			case 2:
			{
				goto IL_0244;
			}
			case 3:
			{
				goto IL_0256;
			}
			case 4:
			{
				goto IL_023e;
			}
			case 5:
			{
				goto IL_024c;
			}
			case 6:
			{
				goto IL_0256;
			}
			case 7:
			{
				goto IL_0228;
			}
			case 8:
			{
				goto IL_0233;
			}
			case 9:
			{
				goto IL_0228;
			}
		}
	}
	{
		int32_t L_31 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract(L_31, ((int32_t)418))))
		{
			case 0:
			{
				goto IL_0252;
			}
			case 1:
			{
				goto IL_0252;
			}
			case 2:
			{
				goto IL_0256;
			}
			case 3:
			{
				goto IL_0256;
			}
			case 4:
			{
				goto IL_0256;
			}
			case 5:
			{
				goto IL_023e;
			}
			case 6:
			{
				goto IL_023e;
			}
			case 7:
			{
				goto IL_0252;
			}
			case 8:
			{
				goto IL_0256;
			}
			case 9:
			{
				goto IL_0244;
			}
		}
	}
	{
		goto IL_0256;
	}

IL_0228:
	{
		V_1 = ((int32_t)357);
		goto IL_03a2;
	}

IL_0233:
	{
		V_1 = ((int32_t)394);
		goto IL_03a2;
	}

IL_023e:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		goto IL_0256;
	}

IL_0244:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0256;
	}

IL_024c:
	{
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		goto IL_0256;
	}

IL_0252:
	{
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0256:
	{
		V_8 = 1;
		V_9 = 0;
		V_10 = 0;
		goto IL_0378;
	}

IL_0264:
	{
		int32_t L_36 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract(L_36, ((int32_t)371))))
		{
			case 0:
			{
				goto IL_02c0;
			}
			case 1:
			{
				goto IL_02d4;
			}
			case 2:
			{
				goto IL_02e8;
			}
			case 3:
			{
				goto IL_02f3;
			}
			case 4:
			{
				goto IL_02cb;
			}
			case 5:
			{
				goto IL_02fb;
			}
		}
	}
	{
		int32_t L_37 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract(L_37, ((int32_t)418))))
		{
			case 0:
			{
				goto IL_02df;
			}
			case 1:
			{
				goto IL_02df;
			}
			case 2:
			{
				goto IL_0311;
			}
			case 3:
			{
				goto IL_0327;
			}
			case 4:
			{
				goto IL_0327;
			}
			case 5:
			{
				goto IL_02cb;
			}
			case 6:
			{
				goto IL_02cb;
			}
			case 7:
			{
				goto IL_02df;
			}
			case 8:
			{
				goto IL_0327;
			}
			case 9:
			{
				goto IL_02e8;
			}
		}
	}
	{
		goto IL_0327;
	}

IL_02c0:
	{
		int32_t L_38 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		goto IL_0378;
	}

IL_02cb:
	{
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		goto IL_0378;
	}

IL_02d4:
	{
		int32_t L_40 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
		goto IL_0378;
	}

IL_02df:
	{
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		goto IL_0378;
	}

IL_02e8:
	{
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		goto IL_0378;
	}

IL_02f3:
	{
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
		goto IL_0378;
	}

IL_02fb:
	{
		int32_t L_44 = V_2;
		if ((((int32_t)L_44) <= ((int32_t)0)))
		{
			goto IL_0305;
		}
	}
	{
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		goto IL_0378;
	}

IL_0305:
	{
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		return ((int32_t)357);
	}

IL_0311:
	{
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_031b;
		}
	}
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_47, 1));
		goto IL_0378;
	}

IL_031b:
	{
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		return ((int32_t)357);
	}

IL_0327:
	{
		int32_t L_48 = V_10;
		if (L_48)
		{
			goto IL_0378;
		}
	}
	{
		int32_t L_49 = V_7;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)380))))
		{
			goto IL_038b;
		}
	}
	{
		int32_t L_50 = V_2;
		if (L_50)
		{
			goto IL_0378;
		}
	}
	{
		int32_t L_51 = V_7;
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)378)))))
		{
			goto IL_0353;
		}
	}
	{
		int32_t L_52 = V_3;
		if (L_52)
		{
			goto IL_0378;
		}
	}
	{
		int32_t L_53 = V_4;
		if (L_53)
		{
			goto IL_0378;
		}
	}
	{
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		return ((int32_t)357);
	}

IL_0353:
	{
		int32_t L_54 = V_7;
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)379)))))
		{
			goto IL_0369;
		}
	}
	{
		int32_t L_55 = V_9;
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		V_9 = L_56;
		int32_t L_57 = V_8;
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_0378;
		}
	}
	{
		goto IL_038b;
	}

IL_0369:
	{
		int32_t L_58 = V_7;
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)394)))))
		{
			goto IL_0378;
		}
	}
	{
		int32_t L_59 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0378:
	{
		int32_t L_60;
		L_60 = Tokenizer_xtoken_m9CAFDB4C6A680DD16C7E816961892809988F468B(__this, NULL);
		int32_t L_61 = L_60;
		V_7 = L_61;
		if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)257)))))
		{
			goto IL_0264;
		}
	}

IL_038b:
	{
		int32_t L_62 = V_9;
		int32_t L_63 = V_8;
		if ((((int32_t)L_62) == ((int32_t)L_63)))
		{
			goto IL_0395;
		}
	}
	{
		int32_t L_64 = V_10;
		if (!L_64)
		{
			goto IL_039c;
		}
	}

IL_0395:
	{
		G_B81_0 = ((int32_t)394);
		goto IL_03a1;
	}

IL_039c:
	{
		G_B81_0 = ((int32_t)357);
	}

IL_03a1:
	{
		V_1 = G_B81_0;
	}

IL_03a2:
	{
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		int32_t L_65 = V_1;
		return L_65;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::decimal_digits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_decimal_digits_m216C1600B7DE48FEAA73067DE54EECE4AFF567BF (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		V_1 = (bool)0;
		int32_t L_0 = ___c0;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_1 = __this->___number_pos_68;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_0019;
		}
	}
	{
		Tokenizer_Error_NumericConstantTooLong_mCE5111A5B9CE281E6599AA1CE8C4659D12268BC8(__this, NULL);
	}

IL_0019:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->___number_builder_67;
		int32_t L_3 = __this->___number_pos_68;
		V_2 = L_3;
		int32_t L_4 = V_2;
		__this->___number_pos_68 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_2;
		int32_t L_6 = ___c0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)((int32_t)(uint16_t)L_6));
		goto IL_0075;
	}

IL_0035:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)48))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_9 = __this->___number_pos_68;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_0052;
		}
	}
	{
		Tokenizer_Error_NumericConstantTooLong_mCE5111A5B9CE281E6599AA1CE8C4659D12268BC8(__this, NULL);
	}

IL_0052:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = __this->___number_builder_67;
		int32_t L_11 = __this->___number_pos_68;
		V_2 = L_11;
		int32_t L_12 = V_2;
		__this->___number_pos_68 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppChar)((int32_t)(uint16_t)L_14));
		int32_t L_15;
		L_15 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_1 = (bool)1;
	}

IL_0075:
	{
		int32_t L_16;
		L_16 = Tokenizer_peek_char2_m4B3F1B4AAB1173263D2A67BFEDA3EA4665BF271B(__this, NULL);
		int32_t L_17 = L_16;
		V_0 = L_17;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}

IL_0080:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::is_hex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_is_hex_m0C98BA8DD79B5F36802A3B005D3F87A5FFAF443D (int32_t ___e0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___e0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)48))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___e0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0024;
		}
	}

IL_000a:
	{
		int32_t L_2 = ___e0;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = ___e0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0024;
		}
	}

IL_0014:
	{
		int32_t L_4 = ___e0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)97))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = ___e0;
		return (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)102)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.TypeCode Mono.CSharp.Tokenizer::real_type_suffix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_real_type_suffix_m9186CF1BA335DB5207368F79FC0D773AF9811B9F (int32_t ___c0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___c0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)77))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___c0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)68))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_2 = ___c0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)70))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3 = ___c0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)77))))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0030;
	}

IL_0016:
	{
		int32_t L_4 = ___c0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)100))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = ___c0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)102))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_6 = ___c0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)109))))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0030;
	}

IL_0027:
	{
		return (int32_t)(((int32_t)13));
	}

IL_002a:
	{
		return (int32_t)(((int32_t)14));
	}

IL_002d:
	{
		return (int32_t)(((int32_t)15));
	}

IL_0030:
	{
		return (int32_t)(0);
	}
}
// Mono.CSharp.ILiteralConstant Mono.CSharp.Tokenizer::integer_type_suffix(System.UInt64,System.Int32,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_integer_type_suffix_m4C328322EA13241C258F9D0E132C0164C5C3E95D (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, uint64_t ___ul0, int32_t ___c1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongLiteral_t89E1D3294B9B21E3E82F8741599EECC3A58B4041_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIntLiteral_tE7E15D2BAA2D40F2165976E0E179176BFF936B0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EAE1BD4E16CD6350E63C03E0B6E695D1A24FD68);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	uint32_t V_3 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		int32_t L_0 = ___c1;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}
	{
		V_2 = (bool)1;
	}

IL_000a:
	{
		int32_t L_1 = ___c1;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)85))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___c1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)76))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_3 = ___c1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)85))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0061;
	}

IL_001b:
	{
		int32_t L_4 = ___c1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)108))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_5 = ___c1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0061;
		}
	}

IL_0025:
	{
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		V_2 = (bool)0;
	}

IL_002a:
	{
		V_0 = (bool)1;
		int32_t L_7;
		L_7 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		goto IL_0063;
	}

IL_0035:
	{
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_9 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_10;
		L_10 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_9);
		Report_Warning_mB2724C097397520000542A4448087B39C37C928A(L_9, ((int32_t)78), 4, L_10, _stringLiteral4EAE1BD4E16CD6350E63C03E0B6E695D1A24FD68, NULL);
	}

IL_0051:
	{
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		V_2 = (bool)0;
	}

IL_0056:
	{
		V_1 = (bool)1;
		int32_t L_12;
		L_12 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		goto IL_0063;
	}

IL_0061:
	{
		V_2 = (bool)0;
	}

IL_0063:
	{
		int32_t L_13;
		L_13 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		___c1 = L_13;
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_000a;
		}
	}

IL_006e:
	{
		bool L_15 = V_1;
		bool L_16 = V_0;
		if (!((int32_t)((int32_t)L_15&(int32_t)L_16)))
		{
			goto IL_0086;
		}
	}
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_17 = __this->___context_2;
		NullCheck(L_17);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_18;
		L_18 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_17, NULL);
		uint64_t L_19 = ___ul0;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_20 = ___loc2;
		ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE* L_21 = (ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE*)il2cpp_codegen_object_new(ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ULongLiteral__ctor_m03D2584164233A5F7F386E2E407A4E997A084ED7(L_21, L_18, L_19, L_20, NULL);
		return L_21;
	}

IL_0086:
	{
		bool L_22 = V_0;
		if (!L_22)
		{
			goto IL_00bd;
		}
	}
	{
		uint64_t L_23 = ___ul0;
		if (((int64_t)((int64_t)L_23&((int64_t)-4294967296LL))))
		{
			goto IL_00aa;
		}
	}
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_24 = __this->___context_2;
		NullCheck(L_24);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_25;
		L_25 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_24, NULL);
		uint64_t L_26 = ___ul0;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_27 = ___loc2;
		UIntLiteral_tE7E15D2BAA2D40F2165976E0E179176BFF936B0C* L_28 = (UIntLiteral_tE7E15D2BAA2D40F2165976E0E179176BFF936B0C*)il2cpp_codegen_object_new(UIntLiteral_tE7E15D2BAA2D40F2165976E0E179176BFF936B0C_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		UIntLiteral__ctor_mC235DC0BE76C637B8B847D00CA99DBAF10F06AE7(L_28, L_25, ((int32_t)(uint32_t)L_26), L_27, NULL);
		return L_28;
	}

IL_00aa:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_29 = __this->___context_2;
		NullCheck(L_29);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_30;
		L_30 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_29, NULL);
		uint64_t L_31 = ___ul0;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_32 = ___loc2;
		ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE* L_33 = (ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE*)il2cpp_codegen_object_new(ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		ULongLiteral__ctor_m03D2584164233A5F7F386E2E407A4E997A084ED7(L_33, L_30, L_31, L_32, NULL);
		return L_33;
	}

IL_00bd:
	{
		bool L_34 = V_1;
		if (!L_34)
		{
			goto IL_00f3;
		}
	}
	{
		uint64_t L_35 = ___ul0;
		if (!((int64_t)((int64_t)L_35&((int64_t)(std::numeric_limits<int64_t>::min)()))))
		{
			goto IL_00e0;
		}
	}
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_36 = __this->___context_2;
		NullCheck(L_36);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_37;
		L_37 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_36, NULL);
		uint64_t L_38 = ___ul0;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_39 = ___loc2;
		ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE* L_40 = (ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE*)il2cpp_codegen_object_new(ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		ULongLiteral__ctor_m03D2584164233A5F7F386E2E407A4E997A084ED7(L_40, L_37, L_38, L_39, NULL);
		return L_40;
	}

IL_00e0:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_41 = __this->___context_2;
		NullCheck(L_41);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_42;
		L_42 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_41, NULL);
		uint64_t L_43 = ___ul0;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_44 = ___loc2;
		LongLiteral_t89E1D3294B9B21E3E82F8741599EECC3A58B4041* L_45 = (LongLiteral_t89E1D3294B9B21E3E82F8741599EECC3A58B4041*)il2cpp_codegen_object_new(LongLiteral_t89E1D3294B9B21E3E82F8741599EECC3A58B4041_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		LongLiteral__ctor_m413D66C8A74D0CB62AF5926458BA94BBD92227F0(L_45, L_42, L_43, L_44, NULL);
		return L_45;
	}

IL_00f3:
	{
		uint64_t L_46 = ___ul0;
		if (((int64_t)((int64_t)L_46&((int64_t)-4294967296LL))))
		{
			goto IL_0132;
		}
	}
	{
		uint64_t L_47 = ___ul0;
		V_3 = ((int32_t)(uint32_t)L_47);
		uint32_t L_48 = V_3;
		if (!((int32_t)((int32_t)L_48&((int32_t)-2147483648LL))))
		{
			goto IL_011f;
		}
	}
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_49 = __this->___context_2;
		NullCheck(L_49);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_50;
		L_50 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_49, NULL);
		uint32_t L_51 = V_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_52 = ___loc2;
		UIntLiteral_tE7E15D2BAA2D40F2165976E0E179176BFF936B0C* L_53 = (UIntLiteral_tE7E15D2BAA2D40F2165976E0E179176BFF936B0C*)il2cpp_codegen_object_new(UIntLiteral_tE7E15D2BAA2D40F2165976E0E179176BFF936B0C_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		UIntLiteral__ctor_mC235DC0BE76C637B8B847D00CA99DBAF10F06AE7(L_53, L_50, L_51, L_52, NULL);
		return L_53;
	}

IL_011f:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_54 = __this->___context_2;
		NullCheck(L_54);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_55;
		L_55 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_54, NULL);
		uint32_t L_56 = V_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_57 = ___loc2;
		IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42* L_58 = (IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42*)il2cpp_codegen_object_new(IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		IntLiteral__ctor_m429683C923AFDC87A2F3642E9E6CC57544FEE1E2(L_58, L_55, L_56, L_57, NULL);
		return L_58;
	}

IL_0132:
	{
		uint64_t L_59 = ___ul0;
		if (!((int64_t)((int64_t)L_59&((int64_t)(std::numeric_limits<int64_t>::min)()))))
		{
			goto IL_0152;
		}
	}
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_60 = __this->___context_2;
		NullCheck(L_60);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_61;
		L_61 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_60, NULL);
		uint64_t L_62 = ___ul0;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_63 = ___loc2;
		ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE* L_64 = (ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE*)il2cpp_codegen_object_new(ULongLiteral_tBDB8D423E76DEE08856959ADA9017DDA4AFB62BE_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		ULongLiteral__ctor_m03D2584164233A5F7F386E2E407A4E997A084ED7(L_64, L_61, L_62, L_63, NULL);
		return L_64;
	}

IL_0152:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_65 = __this->___context_2;
		NullCheck(L_65);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_66;
		L_66 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_65, NULL);
		uint64_t L_67 = ___ul0;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_68 = ___loc2;
		LongLiteral_t89E1D3294B9B21E3E82F8741599EECC3A58B4041* L_69 = (LongLiteral_t89E1D3294B9B21E3E82F8741599EECC3A58B4041*)il2cpp_codegen_object_new(LongLiteral_t89E1D3294B9B21E3E82F8741599EECC3A58B4041_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		LongLiteral__ctor_m413D66C8A74D0CB62AF5926458BA94BBD92227F0(L_69, L_66, L_67, L_68, NULL);
		return L_69;
	}
}
// Mono.CSharp.ILiteralConstant Mono.CSharp.Tokenizer::adjust_int(System.Int32,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->___number_pos_68;
			if ((((int32_t)L_0) <= ((int32_t)((int32_t)9))))
			{
				goto IL_004b_1;
			}
		}
		{
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->___number_builder_67;
			NullCheck(L_1);
			int32_t L_2 = 0;
			uint16_t L_3 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
			V_0 = ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)48)))));
			V_1 = 1;
			goto IL_0033_1;
		}

IL_001b_1:
		{
			uint64_t L_4 = V_0;
			if (il2cpp_codegen_check_mul_oveflow_u64(L_4, ((int64_t)((int32_t)10))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5_RuntimeMethod_var);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = __this->___number_builder_67;
			int32_t L_6 = V_1;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			uint16_t L_8 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			if (((int64_t)L_8 - (int64_t)((int32_t)48) < (int64_t)kIl2CppInt32Min) || ((int64_t)L_8 - (int64_t)((int32_t)48) > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5_RuntimeMethod_var);
			if ((int64_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)48)))) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5_RuntimeMethod_var);
			if ((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_4, ((int64_t)((int32_t)10)))) > kIl2CppUInt64Max - (uint64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)48))))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5_RuntimeMethod_var);
			V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_4, ((int64_t)((int32_t)10)))), ((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)48)))))));
			int32_t L_9 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		}

IL_0033_1:
		{
			int32_t L_10 = V_1;
			int32_t L_11 = __this->___number_pos_68;
			if ((((int32_t)L_10) < ((int32_t)L_11)))
			{
				goto IL_001b_1;
			}
		}
		{
			uint64_t L_12 = V_0;
			int32_t L_13 = ___c0;
			Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_14 = ___loc1;
			RuntimeObject* L_15;
			L_15 = Tokenizer_integer_type_suffix_m4C328322EA13241C258F9D0E132C0164C5C3E95D(__this, L_12, L_13, L_14, NULL);
			V_2 = L_15;
			goto IL_00d9;
		}

IL_004b_1:
		{
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = __this->___number_builder_67;
			NullCheck(L_16);
			int32_t L_17 = 0;
			uint16_t L_18 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, ((int32_t)48)));
			V_4 = 1;
			goto IL_0075_1;
		}

IL_005c_1:
		{
			uint32_t L_19 = V_3;
			if ((uint64_t)(uint32_t)L_19 * (uint64_t)(uint32_t)((int32_t)10) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5_RuntimeMethod_var);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = __this->___number_builder_67;
			int32_t L_21 = V_4;
			NullCheck(L_20);
			int32_t L_22 = L_21;
			uint16_t L_23 = (uint16_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			if (((int64_t)L_23 - (int64_t)((int32_t)48) < (int64_t)kIl2CppInt32Min) || ((int64_t)L_23 - (int64_t)((int32_t)48) > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5_RuntimeMethod_var);
			if ((int64_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_23, ((int32_t)48)))) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5_RuntimeMethod_var);
			if ((uint64_t)(uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)10))) + (uint64_t)(uint32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, ((int32_t)48)))) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5_RuntimeMethod_var);
			V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)10))), (int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, ((int32_t)48))))));
			int32_t L_24 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		}

IL_0075_1:
		{
			int32_t L_25 = V_4;
			int32_t L_26 = __this->___number_pos_68;
			if ((((int32_t)L_25) < ((int32_t)L_26)))
			{
				goto IL_005c_1;
			}
		}
		{
			uint32_t L_27 = V_3;
			int32_t L_28 = ___c0;
			Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_29 = ___loc1;
			RuntimeObject* L_30;
			L_30 = Tokenizer_integer_type_suffix_m4C328322EA13241C258F9D0E132C0164C5C3E95D(__this, ((int64_t)(uint64_t)L_27), L_28, L_29, NULL);
			V_2 = L_30;
			goto IL_00d9;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008c;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a8;
		}
		throw e;
	}

CATCH_008c:
	{// begin catch(System.OverflowException)
		Tokenizer_Error_NumericConstantTooLong_mCE5111A5B9CE281E6599AA1CE8C4659D12268BC8(__this, NULL);
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_31 = __this->___context_2;
		NullCheck(L_31);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_32;
		L_32 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_31, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_33 = ___loc1;
		IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42* L_34 = (IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		IntLiteral__ctor_m429683C923AFDC87A2F3642E9E6CC57544FEE1E2(L_34, L_32, 0, L_33, NULL);
		V_2 = L_34;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d9;
	}// end catch (depth: 1)

CATCH_00a8:
	{// begin catch(System.FormatException)
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_35 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_36;
		L_36 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_35);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_35, ((int32_t)1013), L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF156EE44F6A6B6D0E50C63B2A59018613A572921)), NULL);
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_37 = __this->___context_2;
		NullCheck(L_37);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_38;
		L_38 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_37, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_39 = ___loc1;
		IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42* L_40 = (IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42_il2cpp_TypeInfo_var)));
		NullCheck(L_40);
		IntLiteral__ctor_m429683C923AFDC87A2F3642E9E6CC57544FEE1E2(L_40, L_38, 0, L_39, NULL);
		V_2 = L_40;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d9;
	}// end catch (depth: 1)

IL_00d9:
	{
		RuntimeObject* L_41 = V_2;
		return L_41;
	}
}
// Mono.CSharp.ILiteralConstant Mono.CSharp.Tokenizer::adjust_real(System.TypeCode,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_adjust_real_m5795B836B2E7B8DAA8987EF4E373C48EDCBB3213 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___t0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecimalLiteral_tC03D6E866095F8A6525F39C93E1206F7130F1EB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleLiteral_t51128E740EEDBB12E4B42437AB82302AAFD3AA3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatLiteral_t51F22CDF1AAAF07702F84B67067238201FE95883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->___number_builder_67;
		int32_t L_1 = __this->___number_pos_68;
		String_t* L_2;
		L_2 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_0, 0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = ___t0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)13))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_4 = ___t0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_00e7;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_5 = __this->___context_2;
		NullCheck(L_5);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_6;
		L_6 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_5, NULL);
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___styles_46;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_9 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___csharp_format_info_47;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_10;
		L_10 = Decimal_Parse_m6023D6BA10DAAF7AA6443D08022299A0529B7107(L_7, L_8, L_9, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_11 = ___loc1;
		DecimalLiteral_tC03D6E866095F8A6525F39C93E1206F7130F1EB6* L_12 = (DecimalLiteral_tC03D6E866095F8A6525F39C93E1206F7130F1EB6*)il2cpp_codegen_object_new(DecimalLiteral_tC03D6E866095F8A6525F39C93E1206F7130F1EB6_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		DecimalLiteral__ctor_m89849BBB4EAD571FD19663725DACC6DBBD8B13F2(L_12, L_6, L_10, L_11, NULL);
		V_1 = L_12;
		goto IL_0145;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0048;
		}
		throw e;
	}

CATCH_0048:
	{// begin catch(System.OverflowException)
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_13 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_14;
		L_14 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_13);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_13, ((int32_t)594), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA76693A9FA64254ABB2B353861DCD8EECC2E6B7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56ED31BBF7FE6AF09919B65DEE19B95A754AA73D)), NULL);
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_15 = __this->___context_2;
		NullCheck(L_15);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_16;
		L_16 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_17 = ((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))))->___Zero_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_18 = ___loc1;
		DecimalLiteral_tC03D6E866095F8A6525F39C93E1206F7130F1EB6* L_19 = (DecimalLiteral_tC03D6E866095F8A6525F39C93E1206F7130F1EB6*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecimalLiteral_tC03D6E866095F8A6525F39C93E1206F7130F1EB6_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		DecimalLiteral__ctor_m89849BBB4EAD571FD19663725DACC6DBBD8B13F2(L_19, L_16, L_17, L_18, NULL);
		V_1 = L_19;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0145;
	}// end catch (depth: 1)

IL_0085:
	{
	}
	try
	{// begin try (depth: 1)
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_20 = __this->___context_2;
		NullCheck(L_20);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_21;
		L_21 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_20, NULL);
		String_t* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		int32_t L_23 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___styles_46;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_24 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___csharp_format_info_47;
		float L_25;
		L_25 = Single_Parse_m0E74607D17E172B4F1306E62BD12CE2905FA5638(L_22, L_23, L_24, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_26 = ___loc1;
		FloatLiteral_t51F22CDF1AAAF07702F84B67067238201FE95883* L_27 = (FloatLiteral_t51F22CDF1AAAF07702F84B67067238201FE95883*)il2cpp_codegen_object_new(FloatLiteral_t51F22CDF1AAAF07702F84B67067238201FE95883_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		FloatLiteral__ctor_m37D1CEF80F62A9043ECCA76EEEBFFFC36738B074(L_27, L_21, L_25, L_26, NULL);
		V_1 = L_27;
		goto IL_0145;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ad;
		}
		throw e;
	}

CATCH_00ad:
	{// begin catch(System.OverflowException)
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_28 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_29;
		L_29 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_28);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_28, ((int32_t)594), L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA76693A9FA64254ABB2B353861DCD8EECC2E6B7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29)), NULL);
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_30 = __this->___context_2;
		NullCheck(L_30);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_31;
		L_31 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_30, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_32 = ___loc1;
		FloatLiteral_t51F22CDF1AAAF07702F84B67067238201FE95883* L_33 = (FloatLiteral_t51F22CDF1AAAF07702F84B67067238201FE95883*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FloatLiteral_t51F22CDF1AAAF07702F84B67067238201FE95883_il2cpp_TypeInfo_var)));
		NullCheck(L_33);
		FloatLiteral__ctor_m37D1CEF80F62A9043ECCA76EEEBFFFC36738B074(L_33, L_31, (0.0f), L_32, NULL);
		V_1 = L_33;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0145;
	}// end catch (depth: 1)

IL_00e7:
	{
	}
	try
	{// begin try (depth: 1)
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_34 = __this->___context_2;
		NullCheck(L_34);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_35;
		L_35 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_34, NULL);
		String_t* L_36 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		int32_t L_37 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___styles_46;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_38 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___csharp_format_info_47;
		double L_39;
		L_39 = Double_Parse_mA6BD954627BB3B2317D7BA7D4B29DCA53C660058(L_36, L_37, L_38, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_40 = ___loc1;
		DoubleLiteral_t51128E740EEDBB12E4B42437AB82302AAFD3AA3B* L_41 = (DoubleLiteral_t51128E740EEDBB12E4B42437AB82302AAFD3AA3B*)il2cpp_codegen_object_new(DoubleLiteral_t51128E740EEDBB12E4B42437AB82302AAFD3AA3B_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		DoubleLiteral__ctor_m906F4BC289A621D57F678F6DE4E9AFF51C3F3E5A(L_41, L_35, L_39, L_40, NULL);
		V_1 = L_41;
		goto IL_0145;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010c;
		}
		throw e;
	}

CATCH_010c:
	{// begin catch(System.OverflowException)
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_42 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_43 = ___loc1;
		NullCheck(L_42);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_42, ((int32_t)594), L_43, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA76693A9FA64254ABB2B353861DCD8EECC2E6B7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8)), NULL);
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_44 = __this->___context_2;
		NullCheck(L_44);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_45;
		L_45 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_44, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_46 = ___loc1;
		DoubleLiteral_t51128E740EEDBB12E4B42437AB82302AAFD3AA3B* L_47 = (DoubleLiteral_t51128E740EEDBB12E4B42437AB82302AAFD3AA3B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DoubleLiteral_t51128E740EEDBB12E4B42437AB82302AAFD3AA3B_il2cpp_TypeInfo_var)));
		NullCheck(L_47);
		DoubleLiteral__ctor_m906F4BC289A621D57F678F6DE4E9AFF51C3F3E5A(L_47, L_45, (0.0), L_46, NULL);
		V_1 = L_47;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0145;
	}// end catch (depth: 1)

IL_0145:
	{
		RuntimeObject* L_48 = V_1;
		return L_48;
	}
}
// Mono.CSharp.ILiteralConstant Mono.CSharp.Tokenizer::handle_hex(Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_handle_hex_mEE3B26772D1D8441B840B553C7201A07CED14298 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0;
		L_0 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		goto IL_0032;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Tokenizer_is_hex_m0C98BA8DD79B5F36802A3B005D3F87A5FFAF443D(L_1, NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->___number_builder_67;
		int32_t L_4 = __this->___number_pos_68;
		V_3 = L_4;
		int32_t L_5 = V_3;
		__this->___number_pos_68 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_3;
		int32_t L_7 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Il2CppChar)((int32_t)(uint16_t)L_7));
		int32_t L_8;
		L_8 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
	}

IL_0032:
	{
		int32_t L_9;
		L_9 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		int32_t L_10 = L_9;
		V_0 = L_10;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0009;
		}
	}

IL_003d:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = __this->___number_builder_67;
		int32_t L_12 = __this->___number_pos_68;
		String_t* L_13;
		L_13 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_11, 0, L_12, NULL);
		V_2 = L_13;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_14 = __this->___number_pos_68;
			if ((((int32_t)L_14) > ((int32_t)8)))
			{
				goto IL_0068_1;
			}
		}
		{
			String_t* L_15 = V_2;
			uint32_t L_16;
			L_16 = UInt32_Parse_m5B91BE3C4654E3FA80F55AED00460D7234961E9E(L_15, ((int32_t)515), NULL);
			V_1 = ((int64_t)(uint64_t)L_16);
			goto IL_0074_1;
		}

IL_0068_1:
		{
			String_t* L_17 = V_2;
			uint64_t L_18;
			L_18 = UInt64_Parse_m5D07DDFA6DA8E3F85D6E07EAE33756AF742CBAB0(L_17, ((int32_t)515), NULL);
			V_1 = L_18;
		}

IL_0074_1:
		{
			uint64_t L_19 = V_1;
			int32_t L_20;
			L_20 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
			Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_21 = ___loc0;
			RuntimeObject* L_22;
			L_22 = Tokenizer_integer_type_suffix_m4C328322EA13241C258F9D0E132C0164C5C3E95D(__this, L_19, L_20, L_21, NULL);
			V_4 = L_22;
			goto IL_00d5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a3;
		}
		throw e;
	}

CATCH_0086:
	{// begin catch(System.OverflowException)
		Tokenizer_Error_NumericConstantTooLong_mCE5111A5B9CE281E6599AA1CE8C4659D12268BC8(__this, NULL);
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_23 = __this->___context_2;
		NullCheck(L_23);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_24;
		L_24 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_23, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_25 = ___loc0;
		IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42* L_26 = (IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		IntLiteral__ctor_m429683C923AFDC87A2F3642E9E6CC57544FEE1E2(L_26, L_24, 0, L_25, NULL);
		V_4 = L_26;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d5;
	}// end catch (depth: 1)

CATCH_00a3:
	{// begin catch(System.FormatException)
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_27 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_28;
		L_28 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_27);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_27, ((int32_t)1013), L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF156EE44F6A6B6D0E50C63B2A59018613A572921)), NULL);
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_29 = __this->___context_2;
		NullCheck(L_29);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_30;
		L_30 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_29, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_31 = ___loc0;
		IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42* L_32 = (IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntLiteral_tC5661C46AC4D17FF7ED5BAACFF89B6F87DEF0A42_il2cpp_TypeInfo_var)));
		NullCheck(L_32);
		IntLiteral__ctor_m429683C923AFDC87A2F3642E9E6CC57544FEE1E2(L_32, L_30, 0, L_31, NULL);
		V_4 = L_32;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d5;
	}// end catch (depth: 1)

IL_00d5:
	{
		RuntimeObject* L_33 = V_4;
		return L_33;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::is_number(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_is_number_m129EBBC19E912D73534F74BBC251E3FE3FD14EBE (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, bool ___dotLead1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		__this->___number_pos_68 = 0;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_0;
		L_0 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		V_1 = L_0;
		bool L_1 = ___dotLead1;
		if (L_1)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_2 = ___c0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_3;
		L_3 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_4 = L_3;
		int32_t L_4 = V_4;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)120))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_003f;
		}
	}

IL_002a:
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_6 = V_1;
		RuntimeObject* L_7;
		L_7 = Tokenizer_handle_hex_mEE3B26772D1D8441B840B553C7201A07CED14298(__this, L_6, NULL);
		RuntimeObject* L_8 = L_7;
		V_0 = L_8;
		__this->___val_57 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_8);
		return ((int32_t)421);
	}

IL_003f:
	{
		int32_t L_9 = ___c0;
		bool L_10;
		L_10 = Tokenizer_decimal_digits_m216C1600B7DE48FEAA73067DE54EECE4AFF567BF(__this, L_9, NULL);
		int32_t L_11;
		L_11 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		___c0 = L_11;
	}

IL_004f:
	{
		V_2 = (bool)0;
		int32_t L_12 = ___c0;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_00a2;
		}
	}
	{
		bool L_13 = ___dotLead1;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_14;
		L_14 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
	}

IL_0060:
	{
		bool L_15;
		L_15 = Tokenizer_decimal_digits_m216C1600B7DE48FEAA73067DE54EECE4AFF567BF(__this, ((int32_t)46), NULL);
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		V_2 = (bool)1;
		int32_t L_16;
		L_16 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		___c0 = L_16;
		goto IL_00a2;
	}

IL_0076:
	{
		Tokenizer_putback_m217554D6533CE31AF351F557DAD16E75D64E414D(__this, ((int32_t)46), NULL);
		int32_t L_17 = __this->___number_pos_68;
		__this->___number_pos_68 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_18 = V_1;
		RuntimeObject* L_19;
		L_19 = Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5(__this, (-1), L_18, NULL);
		RuntimeObject* L_20 = L_19;
		V_0 = L_20;
		__this->___val_57 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_20);
		return ((int32_t)421);
	}

IL_00a2:
	{
		int32_t L_21 = ___c0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)101))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_22 = ___c0;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_01a4;
		}
	}

IL_00af:
	{
		V_2 = (bool)1;
		int32_t L_23;
		L_23 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_24 = __this->___number_pos_68;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_00cb;
		}
	}
	{
		Tokenizer_Error_NumericConstantTooLong_mCE5111A5B9CE281E6599AA1CE8C4659D12268BC8(__this, NULL);
	}

IL_00cb:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = __this->___number_builder_67;
		int32_t L_26 = __this->___number_pos_68;
		V_5 = L_26;
		int32_t L_27 = V_5;
		__this->___number_pos_68 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_5;
		int32_t L_29 = ___c0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Il2CppChar)((int32_t)(uint16_t)L_29));
		int32_t L_30;
		L_30 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		___c0 = L_30;
		int32_t L_31 = ___c0;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_012a;
		}
	}
	{
		int32_t L_32 = __this->___number_pos_68;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_0108;
		}
	}
	{
		Tokenizer_Error_NumericConstantTooLong_mCE5111A5B9CE281E6599AA1CE8C4659D12268BC8(__this, NULL);
	}

IL_0108:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = __this->___number_builder_67;
		int32_t L_34 = __this->___number_pos_68;
		V_5 = L_34;
		int32_t L_35 = V_5;
		__this->___number_pos_68 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_5;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Il2CppChar)((int32_t)43));
		___c0 = (-1);
		goto IL_0194;
	}

IL_012a:
	{
		int32_t L_37 = ___c0;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0164;
		}
	}
	{
		int32_t L_38 = __this->___number_pos_68;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_0142;
		}
	}
	{
		Tokenizer_Error_NumericConstantTooLong_mCE5111A5B9CE281E6599AA1CE8C4659D12268BC8(__this, NULL);
	}

IL_0142:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_39 = __this->___number_builder_67;
		int32_t L_40 = __this->___number_pos_68;
		V_5 = L_40;
		int32_t L_41 = V_5;
		__this->___number_pos_68 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_5;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (Il2CppChar)((int32_t)45));
		___c0 = (-1);
		goto IL_0194;
	}

IL_0164:
	{
		int32_t L_43 = __this->___number_pos_68;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_0177;
		}
	}
	{
		Tokenizer_Error_NumericConstantTooLong_mCE5111A5B9CE281E6599AA1CE8C4659D12268BC8(__this, NULL);
	}

IL_0177:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_44 = __this->___number_builder_67;
		int32_t L_45 = __this->___number_pos_68;
		V_5 = L_45;
		int32_t L_46 = V_5;
		__this->___number_pos_68 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_5;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (Il2CppChar)((int32_t)43));
	}

IL_0194:
	{
		int32_t L_48 = ___c0;
		bool L_49;
		L_49 = Tokenizer_decimal_digits_m216C1600B7DE48FEAA73067DE54EECE4AFF567BF(__this, L_48, NULL);
		int32_t L_50;
		L_50 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		___c0 = L_50;
	}

IL_01a4:
	{
		int32_t L_51 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		int32_t L_52;
		L_52 = Tokenizer_real_type_suffix_m9186CF1BA335DB5207368F79FC0D773AF9811B9F(L_51, NULL);
		V_3 = L_52;
		int32_t L_53 = V_3;
		if (L_53)
		{
			goto IL_01bc;
		}
	}
	{
		bool L_54 = V_2;
		if (L_54)
		{
			goto IL_01bc;
		}
	}
	{
		int32_t L_55 = ___c0;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_56 = V_1;
		RuntimeObject* L_57;
		L_57 = Tokenizer_adjust_int_mAD0081A2CFDC1EB3E50A85EC8DDE9B983CACB0A5(__this, L_55, L_56, NULL);
		V_0 = L_57;
		goto IL_01d1;
	}

IL_01bc:
	{
		V_2 = (bool)1;
		int32_t L_58 = V_3;
		if (!L_58)
		{
			goto IL_01c8;
		}
	}
	{
		int32_t L_59;
		L_59 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
	}

IL_01c8:
	{
		int32_t L_60 = V_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_61 = V_1;
		RuntimeObject* L_62;
		L_62 = Tokenizer_adjust_real_m5795B836B2E7B8DAA8987EF4E373C48EDCBB3213(__this, L_60, L_61, NULL);
		V_0 = L_62;
	}

IL_01d1:
	{
		RuntimeObject* L_63 = V_0;
		__this->___val_57 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_63);
		return ((int32_t)421);
	}
}
// System.Int32 Mono.CSharp.Tokenizer::getHex(System.Int32,System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_getHex_m9B19E8F678EBFA008E3A813358388F87C5AF64D3 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___count0, int32_t* ___surrogate1, bool* ___error2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B3_0 = 0;
	{
		V_1 = 0;
		int32_t L_0 = ___count0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 4;
		goto IL_000a;
	}

IL_0009:
	{
		int32_t L_1 = ___count0;
		G_B3_0 = L_1;
	}

IL_000a:
	{
		V_3 = G_B3_0;
		int32_t L_2;
		L_2 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		bool* L_3 = ___error2;
		*((int8_t*)L_3) = (int8_t)0;
		int32_t* L_4 = ___surrogate1;
		*((int32_t*)L_4) = (int32_t)0;
		V_0 = 0;
		goto IL_0087;
	}

IL_001c:
	{
		int32_t L_5;
		L_5 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)48)));
		goto IL_0061;
	}

IL_0034:
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)65))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)70))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)65))), ((int32_t)10)));
		goto IL_0061;
	}

IL_0048:
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)97))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)102))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)97))), ((int32_t)10)));
		goto IL_0061;
	}

IL_005c:
	{
		bool* L_15 = ___error2;
		*((int8_t*)L_15) = (int8_t)1;
		return 0;
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16))), L_17));
		int32_t L_18 = ___count0;
		if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_19;
		L_19 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) == ((int32_t)(-1))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_21 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Tokenizer_is_hex_m0C98BA8DD79B5F36802A3B005D3F87A5FFAF443D(((int32_t)(uint16_t)L_21), NULL);
		if (!L_22)
		{
			goto IL_008b;
		}
	}

IL_0083:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0087:
	{
		int32_t L_24 = V_0;
		int32_t L_25 = V_3;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_001c;
		}
	}

IL_008b:
	{
		int32_t L_26 = V_3;
		if ((!(((uint32_t)L_26) == ((uint32_t)8))))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_009c;
		}
	}
	{
		bool* L_28 = ___error2;
		*((int8_t*)L_28) = (int8_t)1;
		return 0;
	}

IL_009c:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)65536))))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t* L_30 = ___surrogate1;
		int32_t L_31 = V_1;
		*((int32_t*)L_30) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_31, ((int32_t)65536)))%((int32_t)1024))), ((int32_t)56320)));
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_32, ((int32_t)65536)))/((int32_t)1024))), ((int32_t)55296)));
	}

IL_00cd:
	{
		int32_t L_33 = V_1;
		return L_33;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::escape(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_escape_mC78396709ADE0CF7C4CC33402C0C8BEDA6B52B75 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, int32_t* ___surrogate1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D577D09BE6675913B8BA73F6748E9853949790C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		int32_t L_0;
		L_0 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_1 = L_0;
		int32_t L_1 = ___c0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)92))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t* L_2 = ___surrogate1;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t L_3 = ___c0;
		return L_3;
	}

IL_0011:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)85))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)39))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)39))))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00e7;
	}

IL_0030:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)48))))
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)85))))
		{
			goto IL_00de;
		}
	}
	{
		goto IL_00e7;
	}

IL_0045:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)97))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)97))))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_00e7;
	}

IL_0059:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)98))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)102))))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_15 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)110))))
		{
			case 0:
			{
				goto IL_00a2;
			}
			case 1:
			{
				goto IL_00e7;
			}
			case 2:
			{
				goto IL_00e7;
			}
			case 3:
			{
				goto IL_00e7;
			}
			case 4:
			{
				goto IL_00b1;
			}
			case 5:
			{
				goto IL_00e7;
			}
			case 6:
			{
				goto IL_00a7;
			}
			case 7:
			{
				goto IL_00de;
			}
			case 8:
			{
				goto IL_00ac;
			}
			case 9:
			{
				goto IL_00e7;
			}
			case 10:
			{
				goto IL_00ce;
			}
		}
	}
	{
		goto IL_00e7;
	}

IL_009a:
	{
		V_2 = 7;
		goto IL_0111;
	}

IL_009e:
	{
		V_2 = 8;
		goto IL_0111;
	}

IL_00a2:
	{
		V_2 = ((int32_t)10);
		goto IL_0111;
	}

IL_00a7:
	{
		V_2 = ((int32_t)9);
		goto IL_0111;
	}

IL_00ac:
	{
		V_2 = ((int32_t)11);
		goto IL_0111;
	}

IL_00b1:
	{
		V_2 = ((int32_t)13);
		goto IL_0111;
	}

IL_00b6:
	{
		V_2 = ((int32_t)92);
		goto IL_0111;
	}

IL_00bb:
	{
		V_2 = ((int32_t)12);
		goto IL_0111;
	}

IL_00c0:
	{
		V_2 = 0;
		goto IL_0111;
	}

IL_00c4:
	{
		V_2 = ((int32_t)34);
		goto IL_0111;
	}

IL_00c9:
	{
		V_2 = ((int32_t)39);
		goto IL_0111;
	}

IL_00ce:
	{
		int32_t* L_16 = ___surrogate1;
		int32_t L_17;
		L_17 = Tokenizer_getHex_m9B19E8F678EBFA008E3A813358388F87C5AF64D3(__this, (-1), L_16, (&V_0), NULL);
		V_2 = L_17;
		bool L_18 = V_0;
		if (L_18)
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_19 = V_2;
		return L_19;
	}

IL_00de:
	{
		int32_t L_20 = V_1;
		int32_t* L_21 = ___surrogate1;
		int32_t L_22;
		L_22 = Tokenizer_EscapeUnicode_m6ECB2CD09691BC03C7473597C12495FAADF91374(__this, L_20, L_21, NULL);
		return L_22;
	}

IL_00e7:
	{
		int32_t* L_23 = ___surrogate1;
		*((int32_t*)L_23) = (int32_t)0;
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_24 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_25;
		L_25 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		int32_t L_26 = V_1;
		V_3 = ((int32_t)(uint16_t)L_26);
		String_t* L_27;
		L_27 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		NullCheck(L_24);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_24, ((int32_t)1009), L_25, _stringLiteral8D577D09BE6675913B8BA73F6748E9853949790C, L_27, NULL);
		int32_t L_28 = V_1;
		return L_28;
	}

IL_0111:
	{
		int32_t L_29;
		L_29 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t* L_30 = ___surrogate1;
		*((int32_t*)L_30) = (int32_t)0;
		int32_t L_31 = V_2;
		return L_31;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::EscapeUnicode(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_EscapeUnicode_m6ECB2CD09691BC03C7473597C12495FAADF91374 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___ch0, int32_t* ___surrogate1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C8269EFD7538FD0CB6E23BB80F827735CBE3148);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___ch0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)85)))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t* L_1 = ___surrogate1;
		int32_t L_2;
		L_2 = Tokenizer_getHex_m9B19E8F678EBFA008E3A813358388F87C5AF64D3(__this, 8, L_1, (&V_0), NULL);
		___ch0 = L_2;
		goto IL_001f;
	}

IL_0013:
	{
		int32_t* L_3 = ___surrogate1;
		int32_t L_4;
		L_4 = Tokenizer_getHex_m9B19E8F678EBFA008E3A813358388F87C5AF64D3(__this, 4, L_3, (&V_0), NULL);
		___ch0 = L_4;
	}

IL_001f:
	{
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_6 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_7;
		L_7 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_6);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_6, ((int32_t)1009), L_7, _stringLiteral8C8269EFD7538FD0CB6E23BB80F827735CBE3148, NULL);
	}

IL_003d:
	{
		int32_t L_8 = ___ch0;
		return L_8;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::get_char()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___putback_char_56;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->___putback_char_56;
		V_0 = L_1;
		__this->___putback_char_56 = (-1);
		goto IL_0025;
	}

IL_0019:
	{
		SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* L_2 = __this->___reader_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SeekableStreamReader_Read_mBC8FFD4D6E233325F0FBFC987739EADCD28354E7(L_2, NULL);
		V_0 = L_3;
	}

IL_0025:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)13))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_6;
		L_6 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0040;
		}
	}
	{
		__this->___putback_char_56 = (-1);
	}

IL_0040:
	{
		V_0 = ((int32_t)10);
		Tokenizer_advance_line_m75BBC1A2DDC9A77C6B279A6E6D63F9E61D3ADFA7(__this, NULL);
		goto IL_008e;
	}

IL_004b:
	{
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0058;
		}
	}
	{
		Tokenizer_advance_line_m75BBC1A2DDC9A77C6B279A6E6D63F9E61D3ADFA7(__this, NULL);
		goto IL_008e;
	}

IL_0058:
	{
		int32_t L_8 = __this->___col_8;
		__this->___col_8 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		goto IL_008e;
	}

IL_0068:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)8232))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)8233))))
		{
			goto IL_0080;
		}
	}
	{
		Tokenizer_advance_line_m75BBC1A2DDC9A77C6B279A6E6D63F9E61D3ADFA7(__this, NULL);
		goto IL_008e;
	}

IL_0080:
	{
		int32_t L_11 = __this->___col_8;
		__this->___col_8 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_008e:
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Void Mono.CSharp.Tokenizer::advance_line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_advance_line_m75BBC1A2DDC9A77C6B279A6E6D63F9E61D3ADFA7 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___line_7;
		__this->___line_7 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___ref_line_6;
		__this->___ref_line_6 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = __this->___col_8;
		__this->___previous_col_9 = L_2;
		__this->___col_8 = 0;
		return;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::peek_char()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___putback_char_56;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001a;
		}
	}
	{
		SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* L_1 = __this->___reader_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SeekableStreamReader_Read_mBC8FFD4D6E233325F0FBFC987739EADCD28354E7(L_1, NULL);
		__this->___putback_char_56 = L_2;
	}

IL_001a:
	{
		int32_t L_3 = __this->___putback_char_56;
		return L_3;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::peek_char2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_peek_char2_m4B3F1B4AAB1173263D2A67BFEDA3EA4665BF271B (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___putback_char_56;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = __this->___putback_char_56;
		return L_1;
	}

IL_0010:
	{
		SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* L_2 = __this->___reader_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SeekableStreamReader_Peek_m58A564CFFC8B298DCEB17B7D34CD9CAED0744512(L_2, NULL);
		return L_3;
	}
}
// System.Void Mono.CSharp.Tokenizer::putback(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_putback_m217554D6533CE31AF351F557DAD16E75D64E414D (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___putback_char_56;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_1 = __this->___putback_char_56;
		Il2CppChar L_2 = ((Il2CppChar)((int32_t)(uint16_t)L_1));
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)), &L_2);
		int32_t L_4 = ___c0;
		Il2CppChar L_5 = ((Il2CppChar)((int32_t)(uint16_t)L_4));
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)), &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72E4F2B36711053075F32D5A30CB39489E24F830)), L_3, L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_10;
		L_10 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_11 = L_10;
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var)), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC* L_13 = (InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		InternalErrorException__ctor_m033E52A8B3F71686F4DC77197816349D5CAB9701(L_13, L_7, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tokenizer_putback_m217554D6533CE31AF351F557DAD16E75D64E414D_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_14 = ___c0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)10))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_15 = __this->___col_8;
		if (!L_15)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_16 = ___c0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)8232))))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_17 = ___c0;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)8233))))
		{
			goto IL_0087;
		}
	}

IL_005d:
	{
		int32_t L_18 = __this->___line_7;
		__this->___line_7 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		int32_t L_19 = __this->___ref_line_6;
		__this->___ref_line_6 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		int32_t L_20 = __this->___previous_col_9;
		__this->___col_8 = L_20;
		goto IL_0095;
	}

IL_0087:
	{
		int32_t L_21 = __this->___col_8;
		__this->___col_8 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0095:
	{
		int32_t L_22 = ___c0;
		__this->___putback_char_56 = L_22;
		return;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::advance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_advance_m01FFDBE0C393AA08A64026BA3237B14E00539348 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___CompleteOnEOF_55;
		return L_1;
	}

IL_0010:
	{
		return (bool)1;
	}
}
// System.Object Mono.CSharp.Tokenizer::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_get_Value_m4A42980FE126BD31C7D327DE733C025DCDE4C33C (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___val_57;
		return L_0;
	}
}
// System.Object Mono.CSharp.Tokenizer::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tokenizer_value_mFDEEEA02FEFCCF29E5AB1D75D57685E07072AD16 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___val_57;
		return L_0;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Tokenizer_xtoken_m9CAFDB4C6A680DD16C7E816961892809988F468B(__this, NULL);
		__this->___current_token_10 = L_0;
		int32_t L_1 = __this->___current_token_10;
		return L_1;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::TokenizePreprocessorKeyword(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizePreprocessorKeyword_m9A902756AAA399007F64D8CFDCDE7E6B67EE5D6E (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;

IL_0000:
	{
		int32_t* L_0 = ___c0;
		int32_t L_1;
		L_1 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t* L_2 = ___c0;
		int32_t L_3 = *((int32_t*)L_2);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)32))))
		{
			goto IL_0000;
		}
	}
	{
		int32_t* L_4 = ___c0;
		int32_t L_5 = *((int32_t*)L_4);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)9))))
		{
			goto IL_0000;
		}
	}
	{
		V_0 = 0;
		goto IL_0071;
	}

IL_0018:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = __this->___id_builder_65;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t* L_9 = ___c0;
		int32_t L_10 = *((int32_t*)L_9);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppChar)((int32_t)(uint16_t)L_10));
		int32_t* L_11 = ___c0;
		int32_t L_12;
		L_12 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		*((int32_t*)L_11) = (int32_t)L_12;
		int32_t* L_13 = ___c0;
		int32_t L_14 = *((int32_t*)L_13);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_15;
		L_15 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)85))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0071;
		}
	}

IL_0046:
	{
		int32_t* L_18 = ___c0;
		int32_t* L_19 = ___c0;
		int32_t L_20 = *((int32_t*)L_19);
		int32_t L_21;
		L_21 = Tokenizer_EscapeUnicode_m6ECB2CD09691BC03C7473597C12495FAADF91374(__this, L_20, (&V_2), NULL);
		*((int32_t*)L_18) = (int32_t)L_21;
		int32_t L_22 = V_2;
		if (!L_22)
		{
			goto IL_0071;
		}
	}
	{
		int32_t* L_23 = ___c0;
		int32_t L_24 = *((int32_t*)L_23);
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Tokenizer_is_identifier_part_character_m320FF0CA1E98E3F6B9C4506F7E41E116E3AF5A36(((int32_t)(uint16_t)L_24), NULL);
		if (!L_25)
		{
			goto IL_006e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = __this->___id_builder_65;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t* L_29 = ___c0;
		int32_t L_30 = *((int32_t*)L_29);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Il2CppChar)((int32_t)(uint16_t)L_30));
	}

IL_006e:
	{
		int32_t* L_31 = ___c0;
		int32_t L_32 = V_2;
		*((int32_t*)L_31) = (int32_t)L_32;
	}

IL_0071:
	{
		int32_t* L_33 = ___c0;
		int32_t L_34 = *((int32_t*)L_33);
		if ((((int32_t)L_34) == ((int32_t)(-1))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t* L_35 = ___c0;
		int32_t L_36 = *((int32_t*)L_35);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)97))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t* L_37 = ___c0;
		int32_t L_38 = *((int32_t*)L_37);
		if ((((int32_t)L_38) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0018;
		}
	}

IL_0082:
	{
		int32_t L_39 = V_0;
		return L_39;
	}
}
// Mono.CSharp.Tokenizer/PreprocessorDirective Mono.CSharp.Tokenizer::get_cmd_arg(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_get_cmd_arg_m3F1B511F14BFC9CA13A04477EE3541B92AB49DE5 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t** ___arg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		__this->___tokens_seen_40 = (bool)0;
		String_t** L_0 = ___arg0;
		*((RuntimeObject**)L_0) = (RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = __this->___id_builder_65;
		int32_t L_2;
		L_2 = Tokenizer_TokenizePreprocessorKeyword_m9A902756AAA399007F64D8CFDCDE7E6B67EE5D6E(__this, (&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Tokenizer_GetPreprocessorDirective_mBB14540054D54C3D56D4732741156CC2CEBD301A(L_1, L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (!((int32_t)((int32_t)L_4&((int32_t)1024))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		return L_5;
	}

IL_002d:
	{
		int32_t L_6;
		L_6 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_0 = L_6;
	}

IL_0034:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)9))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_9 = V_1;
		V_2 = ((int32_t)((int32_t)L_9&((int32_t)2048)));
		V_3 = 0;
		goto IL_0102;
	}

IL_004d:
	{
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_12 = V_2;
		if (!L_12)
		{
			goto IL_00b2;
		}
	}
	{
		V_2 = 1;
		int32_t L_13;
		L_13 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_4 = L_13;
		int32_t L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)85))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_00d4;
		}
	}

IL_006f:
	{
		int32_t L_16 = V_0;
		int32_t L_17;
		L_17 = Tokenizer_EscapeUnicode_m6ECB2CD09691BC03C7473597C12495FAADF91374(__this, L_16, (&V_5), NULL);
		V_0 = L_17;
		int32_t L_18 = V_5;
		if (!L_18)
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Tokenizer_is_identifier_part_character_m320FF0CA1E98E3F6B9C4506F7E41E116E3AF5A36(((int32_t)(uint16_t)L_19), NULL);
		if (!L_20)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_21 = V_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = __this->___value_builder_69;
		NullCheck(L_22);
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_009f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_23 = (&__this->___value_builder_69);
		int32_t L_24 = V_3;
		Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F(L_23, ((int32_t)il2cpp_codegen_multiply(L_24, 2)), Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
	}

IL_009f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = __this->___value_builder_69;
		int32_t L_26 = V_3;
		int32_t L_27 = L_26;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Il2CppChar)((int32_t)(uint16_t)L_28));
	}

IL_00ad:
	{
		int32_t L_29 = V_5;
		V_0 = L_29;
		goto IL_00d4;
	}

IL_00b2:
	{
		V_2 = (-1);
		goto IL_00d4;
	}

IL_00b6:
	{
		int32_t L_30 = V_0;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_31;
		L_31 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_32;
		L_32 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		Tokenizer_ReadToEndOfLine_mD43187E9D07BBB288567FAB6723840FA9A9F5256(__this, NULL);
		goto IL_011e;
	}

IL_00d4:
	{
		int32_t L_33 = V_3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_34 = __this->___value_builder_69;
		NullCheck(L_34);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))
		{
			goto IL_00ed;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_35 = (&__this->___value_builder_69);
		int32_t L_36 = V_3;
		Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F(L_35, ((int32_t)il2cpp_codegen_multiply(L_36, 2)), Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
	}

IL_00ed:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = __this->___value_builder_69;
		int32_t L_38 = V_3;
		int32_t L_39 = L_38;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_40 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (Il2CppChar)((int32_t)(uint16_t)L_40));
		int32_t L_41;
		L_41 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_0 = L_41;
	}

IL_0102:
	{
		int32_t L_42 = V_0;
		if ((((int32_t)L_42) == ((int32_t)(-1))))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_43 = V_0;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)10))))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_44 = V_0;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)8232))))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_45 = V_0;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)8233)))))
		{
			goto IL_004d;
		}
	}

IL_011e:
	{
		int32_t L_46 = V_3;
		if (!L_46)
		{
			goto IL_0157;
		}
	}
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) <= ((int32_t)((int32_t)512))))
		{
			goto IL_013a;
		}
	}
	{
		String_t** L_48 = ___arg0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_49 = __this->___value_builder_69;
		int32_t L_50 = V_3;
		String_t* L_51;
		L_51 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_49, 0, L_50, NULL);
		*((RuntimeObject**)L_48) = (RuntimeObject*)L_51;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_48, (void*)(RuntimeObject*)L_51);
		goto IL_0149;
	}

IL_013a:
	{
		String_t** L_52 = ___arg0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_53 = __this->___value_builder_69;
		int32_t L_54 = V_3;
		String_t* L_55;
		L_55 = Tokenizer_InternIdentifier_m6D0ACAD13122A0CE0A4ADD8B9338D18284860161(__this, L_53, L_54, NULL);
		*((RuntimeObject**)L_52) = (RuntimeObject*)L_55;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_52, (void*)(RuntimeObject*)L_55);
	}

IL_0149:
	{
		String_t** L_56 = ___arg0;
		String_t** L_57 = L_56;
		String_t* L_58 = *((String_t**)L_57);
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___simple_whitespaces_54;
		NullCheck(L_58);
		String_t* L_60;
		L_60 = String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5(L_58, L_59, NULL);
		*((RuntimeObject**)L_57) = (RuntimeObject*)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_57, (void*)(RuntimeObject*)L_60);
	}

IL_0157:
	{
		int32_t L_61 = V_1;
		return L_61;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::PreProcessLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_PreProcessLine_m7B9C7C576A980C11F9DD93FC4FC7FF2205894D87 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE87B562747A4E5118BE8446CC537D2F2CE52C5B7);
		s_Il2CppMethodInitialized = true;
	}
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_0;
		L_0 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Tokenizer_TokenizePreprocessorKeyword_m9A902756AAA399007F64D8CFDCDE7E6B67EE5D6E(__this, (&V_1), NULL);
		V_2 = L_1;
		int32_t L_2 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___line_default_53;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0072;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___line_default_53;
		bool L_5;
		L_5 = Tokenizer_IsTokenIdentifierEqual_m5F78CD40289588FCC34E5E8F1CCD68837662B35F(__this, L_4, NULL);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_6 = __this->___source_file_1;
		NullCheck(L_6);
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_7;
		L_7 = CompilationSourceFile_get_SourceFile_mD4C9C9D916DD200F3CAC75049E6B186FEE999C02_inline(L_6, NULL);
		__this->___current_source_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_source_4), (void*)L_7);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F* L_8 = (&__this->___hidden_block_start_5);
		bool L_9;
		L_9 = Location_get_IsNull_mB0AF4B83C09E3D2775D5FC011F67CE749E7CBD69(L_8, NULL);
		if (L_9)
		{
			goto IL_0064;
		}
	}
	{
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_10 = __this->___current_source_4;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_11 = __this->___hidden_block_start_5;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_12 = V_0;
		NullCheck(L_10);
		SourceFile_RegisterHiddenScope_m39A4B57F3C9DF4AE24186AFCE6333BDC3E8F68AC(L_10, L_11, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_13 = ((Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_StaticFields*)il2cpp_codegen_static_fields_for(Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var))->___Null_9;
		__this->___hidden_block_start_5 = L_13;
	}

IL_0064:
	{
		int32_t L_14 = __this->___line_7;
		__this->___ref_line_6 = L_14;
		return (bool)1;
	}

IL_0072:
	{
		int32_t L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___line_hidden_52;
		NullCheck(L_16);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_00a1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___line_hidden_52;
		bool L_18;
		L_18 = Tokenizer_IsTokenIdentifierEqual_m5F78CD40289588FCC34E5E8F1CCD68837662B35F(__this, L_17, NULL);
		if (L_18)
		{
			goto IL_008b;
		}
	}
	{
		return (bool)0;
	}

IL_008b:
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F* L_19 = (&__this->___hidden_block_start_5);
		bool L_20;
		L_20 = Location_get_IsNull_mB0AF4B83C09E3D2775D5FC011F67CE749E7CBD69(L_19, NULL);
		if (!L_20)
		{
			goto IL_009f;
		}
	}
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_21 = V_0;
		__this->___hidden_block_start_5 = L_21;
	}

IL_009f:
	{
		return (bool)1;
	}

IL_00a1:
	{
		int32_t L_22 = V_2;
		if (L_22)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)48))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) <= ((int32_t)((int32_t)57))))
		{
			goto IL_00b6;
		}
	}

IL_00ae:
	{
		Tokenizer_ReadToEndOfLine_mD43187E9D07BBB288567FAB6723840FA9A9F5256(__this, NULL);
		return (bool)0;
	}

IL_00b6:
	{
		int32_t L_25 = V_1;
		int32_t L_26;
		L_26 = Tokenizer_TokenizeNumber_mAFCAB3E79394CE9F24E9F6B773B00101D59017DA(__this, L_25, NULL);
		V_3 = L_26;
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) >= ((int32_t)1)))
		{
			goto IL_00cd;
		}
	}
	{
		Tokenizer_ReadToEndOfLine_mD43187E9D07BBB288567FAB6723840FA9A9F5256(__this, NULL);
		int32_t L_28 = V_3;
		return (bool)((!(((uint32_t)L_28) <= ((uint32_t)0)))? 1 : 0);
	}

IL_00cd:
	{
		int32_t L_29;
		L_29 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_1 = L_29;
		int32_t L_30 = V_1;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_00ec;
		}
	}

IL_00d9:
	{
		int32_t L_31;
		L_31 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_1 = L_31;
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)32))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)9))))
		{
			goto IL_00d9;
		}
	}
	{
		goto IL_00f3;
	}

IL_00ec:
	{
		int32_t L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00f3;
		}
	}
	{
		V_1 = 0;
	}

IL_00f3:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)10))))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)47))))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_37 = V_1;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)34))))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_38 = V_1;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)8232))))
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_39 = V_1;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)8233))))
		{
			goto IL_0130;
		}
	}
	{
		Tokenizer_ReadToEndOfLine_mD43187E9D07BBB288567FAB6723840FA9A9F5256(__this, NULL);
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_40 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_41 = V_0;
		NullCheck(L_40);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_40, ((int32_t)1578), L_41, _stringLiteralE87B562747A4E5118BE8446CC537D2F2CE52C5B7, NULL);
		return (bool)1;
	}

IL_0130:
	{
		V_4 = (String_t*)NULL;
		int32_t L_42 = V_1;
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0155;
		}
	}
	{
		String_t* L_43;
		L_43 = Tokenizer_TokenizeFileName_mBCD5522379E2C45A66F132884CCB582E9AEE5343(__this, (&V_1), NULL);
		V_4 = L_43;
		goto IL_014b;
	}

IL_0144:
	{
		int32_t L_44;
		L_44 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_1 = L_44;
	}

IL_014b:
	{
		int32_t L_45 = V_1;
		if ((((int32_t)L_45) == ((int32_t)((int32_t)32))))
		{
			goto IL_0144;
		}
	}
	{
		int32_t L_46 = V_1;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)9))))
		{
			goto IL_0144;
		}
	}

IL_0155:
	{
		int32_t L_47 = V_1;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)10))))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_48 = V_1;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)8232))))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_49 = V_1;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)8233))))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_50 = V_1;
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0177;
		}
	}
	{
		Tokenizer_ReadSingleLineComment_m5B7AD63814EC394342F0BECF12D28B1A48DD71C3(__this, NULL);
		goto IL_0185;
	}

IL_0177:
	{
		Tokenizer_ReadToEndOfLine_mD43187E9D07BBB288567FAB6723840FA9A9F5256(__this, NULL);
		Tokenizer_Error_EndLineExpected_m11ED1E600529CDBD83B6C60B8022AD030ADBC4B4(__this, NULL);
		return (bool)1;
	}

IL_0185:
	{
		String_t* L_51 = V_4;
		if (!L_51)
		{
			goto IL_01b3;
		}
	}
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_52 = __this->___context_2;
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_53 = __this->___source_file_1;
		String_t* L_54 = V_4;
		NullCheck(L_52);
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_55;
		L_55 = CompilerContext_LookupFile_m2E93989AC5545C260EAD487B7CDA41209EF2F4FA(L_52, L_53, L_54, NULL);
		__this->___current_source_4 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_source_4), (void*)L_55);
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_56 = __this->___source_file_1;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_57 = __this->___current_source_4;
		NullCheck(L_56);
		CompilationSourceFile_AddIncludeFile_mC7EBD0BE20BEFC4CFAE718C14303B84F710711BB(L_56, L_57, NULL);
	}

IL_01b3:
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F* L_58 = (&__this->___hidden_block_start_5);
		bool L_59;
		L_59 = Location_get_IsNull_mB0AF4B83C09E3D2775D5FC011F67CE749E7CBD69(L_58, NULL);
		if (L_59)
		{
			goto IL_01dd;
		}
	}
	{
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_60 = __this->___current_source_4;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_61 = __this->___hidden_block_start_5;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_62 = V_0;
		NullCheck(L_60);
		SourceFile_RegisterHiddenScope_m39A4B57F3C9DF4AE24186AFCE6333BDC3E8F68AC(L_60, L_61, L_62, NULL);
		il2cpp_codegen_runtime_class_init_inline(Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_63 = ((Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_StaticFields*)il2cpp_codegen_static_fields_for(Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var))->___Null_9;
		__this->___hidden_block_start_5 = L_63;
	}

IL_01dd:
	{
		int32_t L_64 = V_3;
		__this->___ref_line_6 = L_64;
		return (bool)1;
	}
}
// System.Void Mono.CSharp.Tokenizer::PreProcessDefinition(System.Boolean,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_PreProcessDefinition_mC79F9D5593279077BE548AC73336DB2AF10DD6D6 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool ___is_define0, String_t* ___ident1, bool ___caller_is_taking2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3747F188640B86840534DC4DA86767C8D0029B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFB72B9C996165F992B066EF15E829613D1056E3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___ident1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = ___ident1;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_4 = ___ident1;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}

IL_0022:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_6 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_7;
		L_7 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_6);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_6, ((int32_t)1001), L_7, _stringLiteralC3747F188640B86840534DC4DA86767C8D0029B1, NULL);
		return;
	}

IL_003e:
	{
		String_t* L_8 = ___ident1;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___simple_whitespaces_54;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = String_IndexOfAny_mC7AA4AE42B38667BDB9B214AA6230F322306CFF6(L_8, L_9, NULL);
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0053;
		}
	}
	{
		Tokenizer_Error_EndLineExpected_m11ED1E600529CDBD83B6C60B8022AD030ADBC4B4(__this, NULL);
		return;
	}

IL_0053:
	{
		String_t* L_11 = ___ident1;
		NullCheck(L_11);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Tokenizer_is_identifier_start_character_m7260FDF47153E1BA05155D2BA5BE95D786F09FEE(L_12, NULL);
		if (L_13)
		{
			goto IL_007d;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_14 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_15;
		L_15 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		String_t* L_16 = ___ident1;
		NullCheck(L_14);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_14, ((int32_t)1001), L_15, _stringLiteralEFB72B9C996165F992B066EF15E829613D1056E3, L_16, NULL);
	}

IL_007d:
	{
		String_t* L_17 = ___ident1;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_17, 1, NULL);
		V_0 = L_18;
		V_1 = 0;
		goto IL_00b8;
	}

IL_0089:
	{
		String_t* L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Tokenizer_is_identifier_part_character_m320FF0CA1E98E3F6B9C4506F7E41E116E3AF5A36(L_21, NULL);
		if (L_22)
		{
			goto IL_00b4;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_23 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_24;
		L_24 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		String_t* L_25 = ___ident1;
		NullCheck(L_23);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_23, ((int32_t)1001), L_24, _stringLiteralEFB72B9C996165F992B066EF15E829613D1056E3, L_25, NULL);
		return;
	}

IL_00b4:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00b8:
	{
		int32_t L_27 = V_1;
		String_t* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0089;
		}
	}
	{
		bool L_30 = ___caller_is_taking2;
		if (L_30)
		{
			goto IL_00c5;
		}
	}
	{
		return;
	}

IL_00c5:
	{
		bool L_31 = ___is_define0;
		if (!L_31)
		{
			goto IL_00e9;
		}
	}
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_32 = __this->___context_2;
		NullCheck(L_32);
		CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* L_33;
		L_33 = CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline(L_32, NULL);
		String_t* L_34 = ___ident1;
		NullCheck(L_33);
		bool L_35;
		L_35 = CompilerSettings_IsConditionalSymbolDefined_mE0F455B8D652BC5EE5A4E375B750D20A77E22C46(L_33, L_34, NULL);
		if (!L_35)
		{
			goto IL_00dc;
		}
	}
	{
		return;
	}

IL_00dc:
	{
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_36 = __this->___source_file_1;
		String_t* L_37 = ___ident1;
		NullCheck(L_36);
		CompilationSourceFile_AddDefine_mBF19009799C35D96A2780958CAA56F6351217450(L_36, L_37, NULL);
		return;
	}

IL_00e9:
	{
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_38 = __this->___source_file_1;
		String_t* L_39 = ___ident1;
		NullCheck(L_38);
		CompilationSourceFile_AddUndefine_mD2E581E68484724EBC5BBB62CCAEBB2D52725323(L_38, L_39, NULL);
		return;
	}
}
// System.Byte Mono.CSharp.Tokenizer::read_hex(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Tokenizer_read_hex_m010CFF0489C779C18FB90FDAD203DC4C7DCCEA40 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool* ___error0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)48))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)57))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)48)));
		goto IL_0045;
	}

IL_0018:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)65))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)70))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)65))), ((int32_t)10)));
		goto IL_0045;
	}

IL_002c:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)97))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)102))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)97))), ((int32_t)10)));
		goto IL_0045;
	}

IL_0040:
	{
		bool* L_10 = ___error0;
		*((int8_t*)L_10) = (int8_t)1;
		return (uint8_t)0;
	}

IL_0045:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16)));
		int32_t L_12;
		L_12 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)48))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)57))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)48)))));
		goto IL_0095;
	}

IL_0064:
	{
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)65))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)70))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)65))), ((int32_t)10)))));
		goto IL_0095;
	}

IL_007a:
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)97))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)102))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_24, ((int32_t)97))), ((int32_t)10)))));
		goto IL_0095;
	}

IL_0090:
	{
		bool* L_25 = ___error0;
		*((int8_t*)L_25) = (int8_t)1;
		return (uint8_t)0;
	}

IL_0095:
	{
		bool* L_26 = ___error0;
		*((int8_t*)L_26) = (int8_t)0;
		int32_t L_27 = V_0;
		return (uint8_t)((int32_t)(uint8_t)L_27);
	}
}
// System.Boolean Mono.CSharp.Tokenizer::ParsePragmaChecksum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_ParsePragmaChecksum_m8269F65AC318F477C8BF3FA36F657EED1B15DAB0 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayComparer_IsEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA5B793CAAEB81083356BF4057927F00B9D1E15F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5660D9162CDEE78DEAF40FC47EAD439358400C41);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* V_2 = NULL;
	bool V_3 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_6 = NULL;
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F V_7;
	memset((&V_7), 0, sizeof(V_7));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	{
		int32_t L_0;
		L_0 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)34))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		String_t* L_2;
		L_2 = Tokenizer_TokenizeFileName_mBCD5522379E2C45A66F132884CCB582E9AEE5343(__this, (&V_0), NULL);
		V_1 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)32))))
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_4 = __this->___context_2;
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_5 = __this->___source_file_1;
		String_t* L_6 = V_1;
		NullCheck(L_4);
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_7;
		L_7 = CompilerContext_LookupFile_m2E93989AC5545C260EAD487B7CDA41209EF2F4FA(L_4, L_5, L_6, NULL);
		V_2 = L_7;
		int32_t L_8;
		L_8 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_9;
		L_9 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)123))))
		{
			goto IL_0047;
		}
	}

IL_0045:
	{
		return (bool)0;
	}

IL_0047:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_4 = L_10;
		V_5 = 0;
		goto IL_006d;
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_4;
		int32_t L_12 = V_5;
		uint8_t L_13;
		L_13 = Tokenizer_read_hex_m010CFF0489C779C18FB90FDAD203DC4C7DCCEA40(__this, (&V_3), NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)L_13);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_15 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_006d:
	{
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) < ((int32_t)4)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_17;
		L_17 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)45))))
		{
			goto IL_00b9;
		}
	}
	{
		return (bool)0;
	}

IL_007e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_4;
		int32_t L_19 = V_5;
		uint8_t L_20;
		L_20 = Tokenizer_read_hex_m010CFF0489C779C18FB90FDAD203DC4C7DCCEA40(__this, (&V_3), NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)L_20);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_0090;
		}
	}
	{
		return (bool)0;
	}

IL_0090:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24 = L_23;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		uint8_t L_25;
		L_25 = Tokenizer_read_hex_m010CFF0489C779C18FB90FDAD203DC4C7DCCEA40(__this, (&V_3), NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)L_25);
		bool L_26 = V_3;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		return (bool)0;
	}

IL_00a7:
	{
		int32_t L_27;
		L_27 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)45))))
		{
			goto IL_00b3;
		}
	}
	{
		return (bool)0;
	}

IL_00b3:
	{
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b9:
	{
		int32_t L_29 = V_5;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)10))))
		{
			goto IL_007e;
		}
	}
	{
		goto IL_00d9;
	}

IL_00c1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_4;
		int32_t L_31 = V_5;
		uint8_t L_32;
		L_32 = Tokenizer_read_hex_m010CFF0489C779C18FB90FDAD203DC4C7DCCEA40(__this, (&V_3), NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)L_32);
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		return (bool)0;
	}

IL_00d3:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d9:
	{
		int32_t L_35 = V_5;
		if ((((int32_t)L_35) < ((int32_t)((int32_t)16))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_36;
		L_36 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_37;
		L_37 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		if ((((int32_t)L_37) == ((int32_t)((int32_t)34))))
		{
			goto IL_00f5;
		}
	}

IL_00f3:
	{
		return (bool)0;
	}

IL_00f5:
	{
		int32_t L_38;
		L_38 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_0 = L_38;
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)32))))
		{
			goto IL_0103;
		}
	}
	{
		return (bool)0;
	}

IL_0103:
	{
		int32_t L_40;
		L_40 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		if ((((int32_t)L_40) == ((int32_t)((int32_t)34))))
		{
			goto IL_010f;
		}
	}
	{
		return (bool)0;
	}

IL_010f:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_41 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B(L_41, ((int32_t)16), List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		V_6 = L_41;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_42;
		L_42 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		V_7 = L_42;
		int32_t L_43;
		L_43 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_43;
		goto IL_0144;
	}

IL_0129:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_44 = V_6;
		uint8_t L_45;
		L_45 = Tokenizer_read_hex_m010CFF0489C779C18FB90FDAD203DC4C7DCCEA40(__this, (&V_3), NULL);
		NullCheck(L_44);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_44, L_45, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		bool L_46 = V_3;
		if (!L_46)
		{
			goto IL_013d;
		}
	}
	{
		return (bool)0;
	}

IL_013d:
	{
		int32_t L_47;
		L_47 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_47;
	}

IL_0144:
	{
		int32_t L_48 = V_0;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)34))))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_49 = V_0;
		if ((!(((uint32_t)L_49) == ((uint32_t)(-1)))))
		{
			goto IL_0129;
		}
	}

IL_014d:
	{
		int32_t L_50 = V_0;
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_015a;
		}
	}
	{
		Tokenizer_ReadSingleLineComment_m5B7AD63814EC394342F0BECF12D28B1A48DD71C3(__this, NULL);
		goto IL_0166;
	}

IL_015a:
	{
		int32_t L_51;
		L_51 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		if ((((int32_t)L_51) == ((int32_t)((int32_t)34))))
		{
			goto IL_0166;
		}
	}
	{
		return (bool)0;
	}

IL_0166:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_52 = __this->___context_2;
		NullCheck(L_52);
		CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* L_53;
		L_53 = CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline(L_52, NULL);
		NullCheck(L_53);
		bool L_54 = L_53->___GenerateDebugInfo_29;
		if (!L_54)
		{
			goto IL_01cc;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_55 = V_6;
		NullCheck(L_55);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56;
		L_56 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_55, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		V_8 = L_56;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_57 = V_2;
		NullCheck(L_57);
		bool L_58;
		L_58 = SourceFile_get_HasChecksum_m111B197E3930BB30C9AAE893914BC4D3898351A5(L_57, NULL);
		if (!L_58)
		{
			goto IL_01b6;
		}
	}
	{
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_59 = V_2;
		NullCheck(L_59);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60;
		L_60 = SourceFile_get_Checksum_m29CBF0D9BFC3F9C5983F7461E0DEBE5D01432D4B_inline(L_59, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_8;
		bool L_62;
		L_62 = ArrayComparer_IsEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA5B793CAAEB81083356BF4057927F00B9D1E15F3(L_60, L_61, ArrayComparer_IsEqual_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA5B793CAAEB81083356BF4057927F00B9D1E15F3_RuntimeMethod_var);
		if (L_62)
		{
			goto IL_01b6;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_63 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_64 = V_7;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_65 = V_2;
		NullCheck(L_65);
		String_t* L_66 = L_65->___Name_1;
		NullCheck(L_63);
		Report_Warning_m462594FD369AE2148FE2671DC4FFE246037C40F1(L_63, ((int32_t)1697), 1, L_64, _stringLiteral5660D9162CDEE78DEAF40FC47EAD439358400C41, L_66, NULL);
	}

IL_01b6:
	{
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_67 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_8;
		NullCheck(L_67);
		SourceFile_SetChecksum_m8CC40BFB73977BE38C47710873622BB0AC708C5A(L_67, L_68, L_69, NULL);
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_70 = __this->___current_source_4;
		NullCheck(L_70);
		L_70->___AutoGenerated_4 = (bool)1;
	}

IL_01cc:
	{
		return (bool)1;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::IsTokenIdentifierEqual(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_IsTokenIdentifierEqual_m5F78CD40289588FCC34E5E8F1CCD68837662B35F (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___identifier0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___identifier0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = __this->___id_builder_65;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) == ((int32_t)L_7)))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0017:
	{
		int32_t L_9 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = ___identifier0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::ScanClosingInterpolationBrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_ScanClosingInterpolationBrace_m25817CECFB17117025C6F3ECAF1B7F33A8F9542D (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Tokenizer_PushPosition_mB7AD2611F8561B13DCEF78328C2A8F2BD5B20DFC(__this, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		V_1 = 0;
	}

IL_0010:
	{
		SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* L_0 = __this->___reader_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SeekableStreamReader_Read_mBC8FFD4D6E233325F0FBFC987739EADCD28354E7(L_0, NULL);
		V_2 = L_1;
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)125))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_004a;
	}

IL_002c:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_004a;
	}

IL_0032:
	{
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&V_0), (bool)0, Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		goto IL_004a;
	}

IL_003c:
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)((int32_t)(L_6%2))) == ((uint32_t)1))))
		{
			goto IL_004a;
		}
	}
	{
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&V_0), (bool)1, Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
	}

IL_004a:
	{
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0010;
		}
	}
	{
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		bool L_8;
		L_8 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&V_0), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		return L_8;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::TokenizeNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizeNumber_mAFCAB3E79394CE9F24E9F6B773B00101D59017DA (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_TokenizeNumber_mAFCAB3E79394CE9F24E9F6B773B00101D59017DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		__this->___number_pos_68 = 0;
		int32_t L_0 = ___value0;
		bool L_1;
		L_1 = Tokenizer_decimal_digits_m216C1600B7DE48FEAA73067DE54EECE4AFF567BF(__this, L_0, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->___number_builder_67;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint16_t L_4 = (uint16_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)48)));
	}
	try
	{// begin try (depth: 1)
		{
			V_1 = 1;
			goto IL_0035_1;
		}

IL_001f_1:
		{
			uint32_t L_5 = V_0;
			if ((uint64_t)(uint32_t)L_5 * (uint64_t)(uint32_t)((int32_t)10) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tokenizer_TokenizeNumber_mAFCAB3E79394CE9F24E9F6B773B00101D59017DA_RuntimeMethod_var);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = __this->___number_builder_67;
			int32_t L_7 = V_1;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			uint16_t L_9 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			if (((int64_t)L_9 - (int64_t)((int32_t)48) < (int64_t)kIl2CppInt32Min) || ((int64_t)L_9 - (int64_t)((int32_t)48) > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tokenizer_TokenizeNumber_mAFCAB3E79394CE9F24E9F6B773B00101D59017DA_RuntimeMethod_var);
			if ((int64_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, ((int32_t)48)))) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tokenizer_TokenizeNumber_mAFCAB3E79394CE9F24E9F6B773B00101D59017DA_RuntimeMethod_var);
			if ((uint64_t)(uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)10))) + (uint64_t)(uint32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, ((int32_t)48)))) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tokenizer_TokenizeNumber_mAFCAB3E79394CE9F24E9F6B773B00101D59017DA_RuntimeMethod_var);
			V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)10))), (int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, ((int32_t)48))))));
			int32_t L_10 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		}

IL_0035_1:
		{
			int32_t L_11 = V_1;
			int32_t L_12 = __this->___number_pos_68;
			if ((((int32_t)L_11) < ((int32_t)L_12)))
			{
				goto IL_001f_1;
			}
		}
		{
			uint32_t L_13 = V_0;
			V_2 = L_13;
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0042;
		}
		throw e;
	}

CATCH_0042:
	{// begin catch(System.OverflowException)
		Tokenizer_Error_NumericConstantTooLong_mCE5111A5B9CE281E6599AA1CE8C4659D12268BC8(__this, NULL);
		V_2 = (-1);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		int32_t L_14 = V_2;
		return L_14;
	}
}
// System.String Mono.CSharp.Tokenizer::TokenizeFileName(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tokenizer_TokenizeFileName_mBCD5522379E2C45A66F132884CCB582E9AEE5343 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D53A5AD071526BE62675FB8EBADCB1BD94A5394);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		goto IL_002a;
	}

IL_0008:
	{
		int32_t* L_1 = ___c0;
		int32_t L_2;
		L_2 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		*((int32_t*)L_1) = (int32_t)L_2;
		int32_t* L_3 = ___c0;
		int32_t L_4 = *((int32_t*)L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t* L_5 = ___c0;
		int32_t L_6;
		L_6 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		*((int32_t*)L_5) = (int32_t)L_6;
		goto IL_0047;
	}

IL_0020:
	{
		StringBuilder_t* L_7 = V_0;
		int32_t* L_8 = ___c0;
		int32_t L_9 = *((int32_t*)L_8);
		NullCheck(L_7);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)(uint16_t)L_9), NULL);
	}

IL_002a:
	{
		int32_t* L_11 = ___c0;
		int32_t L_12 = *((int32_t*)L_11);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t* L_13 = ___c0;
		int32_t L_14 = *((int32_t*)L_13);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)10))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t* L_15 = ___c0;
		int32_t L_16 = *((int32_t*)L_15);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)8232))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t* L_17 = ___c0;
		int32_t L_18 = *((int32_t*)L_17);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)8233)))))
		{
			goto IL_0008;
		}
	}

IL_0047:
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_19, NULL);
		if (L_20)
		{
			goto IL_006b;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_21 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_22;
		L_22 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_21);
		Report_Warning_mB2724C097397520000542A4448087B39C37C928A(L_21, ((int32_t)1709), 1, L_22, _stringLiteral4D53A5AD071526BE62675FB8EBADCB1BD94A5394, NULL);
	}

IL_006b:
	{
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		return L_24;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::TokenizePragmaWarningIdentifier(System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizePragmaWarningIdentifier_m8C39CFA1DC983EBD4CF36CCAD0D608AD9A27DA19 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t* ___c0, bool* ___identifier1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		int32_t* L_0 = ___c0;
		int32_t L_1 = *((int32_t*)L_0);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)48))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t* L_2 = ___c0;
		int32_t L_3 = *((int32_t*)L_2);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0018;
		}
	}

IL_000c:
	{
		int32_t* L_4 = ___c0;
		int32_t L_5 = *((int32_t*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Tokenizer_is_identifier_start_character_m7260FDF47153E1BA05155D2BA5BE95D786F09FEE(L_5, NULL);
		if (!L_6)
		{
			goto IL_0195;
		}
	}

IL_0018:
	{
		int32_t* L_7 = ___c0;
		int32_t L_8 = *((int32_t*)L_7);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)48))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t* L_9 = ___c0;
		int32_t L_10 = *((int32_t*)L_9);
		if ((((int32_t)L_10) > ((int32_t)((int32_t)57))))
		{
			goto IL_0089;
		}
	}
	{
		__this->___number_pos_68 = 0;
		int32_t* L_11 = ___c0;
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13;
		L_13 = Tokenizer_TokenizeNumber_mAFCAB3E79394CE9F24E9F6B773B00101D59017DA(__this, L_12, NULL);
		V_0 = L_13;
		int32_t* L_14 = ___c0;
		int32_t L_15;
		L_15 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		*((int32_t*)L_14) = (int32_t)L_15;
		int32_t* L_16 = ___c0;
		int32_t L_17 = *((int32_t*)L_16);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)32))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t* L_18 = ___c0;
		int32_t L_19 = *((int32_t*)L_18);
		if ((((int32_t)L_19) == ((int32_t)((int32_t)9))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t* L_20 = ___c0;
		int32_t L_21 = *((int32_t*)L_20);
		if ((((int32_t)L_21) == ((int32_t)((int32_t)44))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t* L_22 = ___c0;
		int32_t L_23 = *((int32_t*)L_22);
		if ((((int32_t)L_23) == ((int32_t)((int32_t)10))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t* L_24 = ___c0;
		int32_t L_25 = *((int32_t*)L_24);
		if ((((int32_t)L_25) == ((int32_t)(-1))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t* L_26 = ___c0;
		int32_t L_27 = *((int32_t*)L_26);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)8232))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t* L_28 = ___c0;
		int32_t L_29 = *((int32_t*)L_28);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)8233))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t* L_30 = ___c0;
		int32_t L_31 = *((int32_t*)L_30);
		int32_t L_32;
		L_32 = Tokenizer_ReadPragmaWarningComment_m97DEBB052435F9FDCE30D8A939CC8109A26E2846(__this, L_31, NULL);
		return L_32;
	}

IL_0089:
	{
		V_1 = 0;
		V_0 = (-1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = __this->___id_builder_65;
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t* L_36 = ___c0;
		int32_t L_37 = *((int32_t*)L_36);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppChar)((int32_t)(uint16_t)L_37));
		goto IL_0144;
	}

IL_00a1:
	{
		int32_t* L_38 = ___c0;
		SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* L_39 = __this->___reader_0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = SeekableStreamReader_Read_mBC8FFD4D6E233325F0FBFC987739EADCD28354E7(L_39, NULL);
		*((int32_t*)L_38) = (int32_t)L_40;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = __this->___id_builder_65;
		int32_t L_42 = V_1;
		int32_t* L_43 = ___c0;
		int32_t L_44 = *((int32_t*)L_43);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (Il2CppChar)((int32_t)(uint16_t)L_44));
		int32_t* L_45 = ___c0;
		int32_t L_46 = *((int32_t*)L_45);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)48))))
		{
			goto IL_0122;
		}
	}
	{
		int32_t* L_47 = ___c0;
		int32_t L_48 = *((int32_t*)L_47);
		if ((((int32_t)L_48) > ((int32_t)((int32_t)57))))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_49 = V_1;
		if ((!(((uint32_t)L_49) == ((uint32_t)6))))
		{
			goto IL_0140;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_50 = __this->___id_builder_65;
		NullCheck(L_50);
		int32_t L_51 = 0;
		uint16_t L_52 = (uint16_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)67)))))
		{
			goto IL_0140;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_53 = __this->___id_builder_65;
		NullCheck(L_53);
		int32_t L_54 = 1;
		uint16_t L_55 = (uint16_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)83)))))
		{
			goto IL_0140;
		}
	}
	{
		V_0 = 0;
		V_2 = ((int32_t)1000);
		V_3 = 0;
		goto IL_011c;
	}

IL_00ed:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_56 = __this->___id_builder_65;
		int32_t L_57 = V_3;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 2));
		uint16_t L_59 = (uint16_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_4 = L_59;
		Il2CppChar L_60 = V_4;
		if ((((int32_t)L_60) < ((int32_t)((int32_t)48))))
		{
			goto IL_0105;
		}
	}
	{
		Il2CppChar L_61 = V_4;
		if ((((int32_t)L_61) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0109;
		}
	}

IL_0105:
	{
		V_0 = (-1);
		goto IL_0140;
	}

IL_0109:
	{
		int32_t L_62 = V_0;
		Il2CppChar L_63 = V_4;
		int32_t L_64 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_62, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract((int32_t)L_63, ((int32_t)48))), L_64))));
		int32_t L_65 = V_2;
		V_2 = ((int32_t)(L_65/((int32_t)10)));
		int32_t L_66 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_011c:
	{
		int32_t L_67 = V_3;
		if ((((int32_t)L_67) < ((int32_t)4)))
		{
			goto IL_00ed;
		}
	}
	{
		goto IL_0140;
	}

IL_0122:
	{
		int32_t* L_68 = ___c0;
		int32_t L_69 = *((int32_t*)L_68);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)97))))
		{
			goto IL_012e;
		}
	}
	{
		int32_t* L_70 = ___c0;
		int32_t L_71 = *((int32_t*)L_70);
		if ((((int32_t)L_71) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0140;
		}
	}

IL_012e:
	{
		int32_t* L_72 = ___c0;
		int32_t L_73 = *((int32_t*)L_72);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)65))))
		{
			goto IL_013a;
		}
	}
	{
		int32_t* L_74 = ___c0;
		int32_t L_75 = *((int32_t*)L_74);
		if ((((int32_t)L_75) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0140;
		}
	}

IL_013a:
	{
		int32_t* L_76 = ___c0;
		int32_t L_77 = *((int32_t*)L_76);
		if ((!(((uint32_t)L_77) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_0150;
		}
	}

IL_0140:
	{
		int32_t L_78 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_0144:
	{
		int32_t* L_79 = ___c0;
		int32_t L_80 = *((int32_t*)L_79);
		if ((((int32_t)L_80) < ((int32_t)((int32_t)512))))
		{
			goto IL_00a1;
		}
	}

IL_0150:
	{
		int32_t L_81 = V_0;
		if ((((int32_t)L_81) >= ((int32_t)0)))
		{
			goto IL_0163;
		}
	}
	{
		bool* L_82 = ___identifier1;
		*((int8_t*)L_82) = (int8_t)1;
		int32_t L_83 = V_1;
		V_0 = L_83;
		goto IL_0163;
	}

IL_015b:
	{
		int32_t* L_84 = ___c0;
		int32_t L_85;
		L_85 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		*((int32_t*)L_84) = (int32_t)L_85;
	}

IL_0163:
	{
		int32_t* L_86 = ___c0;
		int32_t L_87 = *((int32_t*)L_86);
		if ((((int32_t)L_87) == ((int32_t)((int32_t)32))))
		{
			goto IL_015b;
		}
	}
	{
		int32_t* L_88 = ___c0;
		int32_t L_89 = *((int32_t*)L_88);
		if ((((int32_t)L_89) == ((int32_t)((int32_t)9))))
		{
			goto IL_015b;
		}
	}
	{
		int32_t* L_90 = ___c0;
		int32_t L_91 = *((int32_t*)L_90);
		if ((!(((uint32_t)L_91) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_0187;
		}
	}
	{
		int32_t* L_92 = ___c0;
		int32_t L_93;
		L_93 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		*((int32_t*)L_92) = (int32_t)L_93;
		goto IL_0187;
	}

IL_017f:
	{
		int32_t* L_94 = ___c0;
		int32_t L_95;
		L_95 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		*((int32_t*)L_94) = (int32_t)L_95;
	}

IL_0187:
	{
		int32_t* L_96 = ___c0;
		int32_t L_97 = *((int32_t*)L_96);
		if ((((int32_t)L_97) == ((int32_t)((int32_t)32))))
		{
			goto IL_017f;
		}
	}
	{
		int32_t* L_98 = ___c0;
		int32_t L_99 = *((int32_t*)L_98);
		if ((((int32_t)L_99) == ((int32_t)((int32_t)9))))
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_100 = V_0;
		return L_100;
	}

IL_0195:
	{
		int32_t* L_101 = ___c0;
		int32_t L_102 = *((int32_t*)L_101);
		int32_t L_103;
		L_103 = Tokenizer_ReadPragmaWarningComment_m97DEBB052435F9FDCE30D8A939CC8109A26E2846(__this, L_102, NULL);
		return L_103;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::ReadPragmaWarningComment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_ReadPragmaWarningComment_m97DEBB052435F9FDCE30D8A939CC8109A26E2846 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF156EE44F6A6B6D0E50C63B2A59018613A572921);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___c0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_000d;
		}
	}
	{
		Tokenizer_ReadSingleLineComment_m5B7AD63814EC394342F0BECF12D28B1A48DD71C3(__this, NULL);
		goto IL_002f;
	}

IL_000d:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_1 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_2;
		L_2 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_1);
		Report_Warning_mB2724C097397520000542A4448087B39C37C928A(L_1, ((int32_t)1692), 1, L_2, _stringLiteralF156EE44F6A6B6D0E50C63B2A59018613A572921, NULL);
		Tokenizer_ReadToEndOfLine_mD43187E9D07BBB288567FAB6723840FA9A9F5256(__this, NULL);
	}

IL_002f:
	{
		return (-1);
	}
}
// System.Void Mono.CSharp.Tokenizer::ReadToEndOfLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_ReadToEndOfLine_mD43187E9D07BBB288567FAB6723840FA9A9F5256 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;

IL_0000:
	{
		int32_t L_0;
		L_0 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)8232))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)8233)))))
		{
			goto IL_0000;
		}
	}

IL_0020:
	{
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::ReadSingleLineComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_ReadSingleLineComment_m5B7AD63814EC394342F0BECF12D28B1A48DD71C3 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CD4A1EBA38CE129A43FCCDB456FAABF692D7A77);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)47))))
		{
			goto IL_0026;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_1 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_2;
		L_2 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_1);
		Report_Warning_mB2724C097397520000542A4448087B39C37C928A(L_1, ((int32_t)1696), 1, L_2, _stringLiteral5CD4A1EBA38CE129A43FCCDB456FAABF692D7A77, NULL);
	}

IL_0026:
	{
		Tokenizer_ReadToEndOfLine_mD43187E9D07BBB288567FAB6723840FA9A9F5256(__this, NULL);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::ParsePragmaDirective()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_ParsePragmaDirective_mFA6370C649214BB64CBD0A9531246F822CE6C421 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A75E7E2D6559FF6687E45CC1702B4062287DD86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70D5BB232EC081D1665068C82CAC02B7BD9D4AAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88C0741C046A3B080EFCD0A132406297FA25ED5C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		int32_t L_0;
		L_0 = Tokenizer_TokenizePreprocessorKeyword_m9A902756AAA399007F64D8CFDCDE7E6B67EE5D6E(__this, (&V_0), NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_warning_48;
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0167;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_warning_48;
		bool L_4;
		L_4 = Tokenizer_IsTokenIdentifierEqual_m5F78CD40289588FCC34E5E8F1CCD68837662B35F(__this, L_3, NULL);
		if (!L_4)
		{
			goto IL_0167;
		}
	}
	{
		int32_t L_5;
		L_5 = Tokenizer_TokenizePreprocessorKeyword_m9A902756AAA399007F64D8CFDCDE7E6B67EE5D6E(__this, (&V_0), NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_warning_disable_49;
		NullCheck(L_7);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_0144;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_warning_disable_49;
		bool L_9;
		L_9 = Tokenizer_IsTokenIdentifierEqual_m5F78CD40289588FCC34E5E8F1CCD68837662B35F(__this, L_8, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_warning_restore_50;
		bool L_12;
		L_12 = Tokenizer_IsTokenIdentifierEqual_m5F78CD40289588FCC34E5E8F1CCD68837662B35F(__this, L_11, NULL);
		if (!L_12)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_0064;
	}

IL_005d:
	{
		int32_t L_13;
		L_13 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_0 = L_13;
	}

IL_0064:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)32))))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)9))))
		{
			goto IL_005d;
		}
	}
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_16;
		L_16 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		V_3 = L_16;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)10))))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)47))))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)8232))))
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)8233)))))
		{
			goto IL_00cf;
		}
	}

IL_008f:
	{
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_009a;
		}
	}
	{
		Tokenizer_ReadSingleLineComment_m5B7AD63814EC394342F0BECF12D28B1A48DD71C3(__this, NULL);
	}

IL_009a:
	{
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00b6;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_23 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_24 = V_3;
		NullCheck(L_23);
		WarningRegions_tC187DC7F540F83465E907555DE5E1DF610FB06E3* L_25;
		L_25 = Report_RegisterWarningRegion_m6D6456316314C3820FFFE7A44275E082DBFB481A(L_23, L_24, NULL);
		int32_t L_26;
		L_26 = Location_get_Row_mF258AE3243F9B1052CDEAD530A7C26AF1B1A7EA8((&V_3), NULL);
		NullCheck(L_25);
		WarningRegions_WarningDisable_mC6EB2879475C17EE1EBB27ED420816BB78BEE055(L_25, L_26, NULL);
		return;
	}

IL_00b6:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_27 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_28 = V_3;
		NullCheck(L_27);
		WarningRegions_tC187DC7F540F83465E907555DE5E1DF610FB06E3* L_29;
		L_29 = Report_RegisterWarningRegion_m6D6456316314C3820FFFE7A44275E082DBFB481A(L_27, L_28, NULL);
		int32_t L_30;
		L_30 = Location_get_Row_mF258AE3243F9B1052CDEAD530A7C26AF1B1A7EA8((&V_3), NULL);
		NullCheck(L_29);
		WarningRegions_WarningEnable_m4C2BBC16F1CBA97CCC445AAB845B7ACC4EBE5170(L_29, L_30, NULL);
		return;
	}

IL_00cf:
	{
		V_5 = (bool)0;
		int32_t L_31;
		L_31 = Tokenizer_TokenizePragmaWarningIdentifier_m8C39CFA1DC983EBD4CF36CCAD0D608AD9A27DA19(__this, (&V_0), (&V_5), NULL);
		V_4 = L_31;
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_0125;
		}
	}
	{
		bool L_33 = V_5;
		if (L_33)
		{
			goto IL_0125;
		}
	}
	{
		bool L_34 = V_2;
		if (!L_34)
		{
			goto IL_010b;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_35 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_36 = V_3;
		NullCheck(L_35);
		WarningRegions_tC187DC7F540F83465E907555DE5E1DF610FB06E3* L_37;
		L_37 = Report_RegisterWarningRegion_m6D6456316314C3820FFFE7A44275E082DBFB481A(L_35, L_36, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_38 = V_3;
		int32_t L_39 = V_4;
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_40 = __this->___context_2;
		NullCheck(L_40);
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_41;
		L_41 = CompilerContext_get_Report_mA84DAB5EC71A6AC5A70003D9FE5D7A2226984DDD_inline(L_40, NULL);
		NullCheck(L_37);
		WarningRegions_WarningDisable_mDCDCB8595A28CEE85F102039EEDB95F621E4410F(L_37, L_38, L_39, L_41, NULL);
		goto IL_0125;
	}

IL_010b:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_42 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_43 = V_3;
		NullCheck(L_42);
		WarningRegions_tC187DC7F540F83465E907555DE5E1DF610FB06E3* L_44;
		L_44 = Report_RegisterWarningRegion_m6D6456316314C3820FFFE7A44275E082DBFB481A(L_42, L_43, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_45 = V_3;
		int32_t L_46 = V_4;
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_47 = __this->___context_2;
		NullCheck(L_44);
		WarningRegions_WarningEnable_m4691AB33242A4CB36380FFFB29135AADF412F2E2(L_44, L_45, L_46, L_47, NULL);
	}

IL_0125:
	{
		int32_t L_48 = V_4;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_49 = V_0;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)10))))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_50 = V_0;
		if ((((int32_t)L_50) == ((int32_t)(-1))))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_51 = V_0;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)8232))))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_52 = V_0;
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)8233)))))
		{
			goto IL_00cf;
		}
	}

IL_0143:
	{
		return;
	}

IL_0144:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_53 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_54;
		L_54 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_53);
		Report_Warning_mB2724C097397520000542A4448087B39C37C928A(L_53, ((int32_t)1634), 1, L_54, _stringLiteral88C0741C046A3B080EFCD0A132406297FA25ED5C, NULL);
		Tokenizer_ReadToEndOfLine_mD43187E9D07BBB288567FAB6723840FA9A9F5256(__this, NULL);
		return;
	}

IL_0167:
	{
		int32_t L_55 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_56 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_checksum_51;
		NullCheck(L_56);
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)(((RuntimeArray*)L_56)->max_length))))))
		{
			goto IL_01a8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_57 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___pragma_checksum_51;
		bool L_58;
		L_58 = Tokenizer_IsTokenIdentifierEqual_m5F78CD40289588FCC34E5E8F1CCD68837662B35F(__this, L_57, NULL);
		if (!L_58)
		{
			goto IL_01a8;
		}
	}
	{
		int32_t L_59 = V_0;
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_018b;
		}
	}
	{
		bool L_60;
		L_60 = Tokenizer_ParsePragmaChecksum_m8269F65AC318F477C8BF3FA36F657EED1B15DAB0(__this, NULL);
		if (L_60)
		{
			goto IL_01a7;
		}
	}

IL_018b:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_61 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_62;
		L_62 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_61);
		Report_Warning_mB2724C097397520000542A4448087B39C37C928A(L_61, ((int32_t)1695), 1, L_62, _stringLiteral70D5BB232EC081D1665068C82CAC02B7BD9D4AAC, NULL);
	}

IL_01a7:
	{
		return;
	}

IL_01a8:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_63 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_64;
		L_64 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_63);
		Report_Warning_mB2724C097397520000542A4448087B39C37C928A(L_63, ((int32_t)1633), 1, L_64, _stringLiteral2A75E7E2D6559FF6687E45CC1702B4062287DD86, NULL);
		Tokenizer_ReadToEndOfLine_mD43187E9D07BBB288567FAB6723840FA9A9F5256(__this, NULL);
		return;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::eval_val(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_eval_val_m9FF8B86A86C2E2BF91BC66DCE3494C1FBD0B4EAF (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
	}

IL_000f:
	{
		String_t* L_2 = ___s0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}

IL_001e:
	{
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_4 = __this->___source_file_1;
		String_t* L_5 = ___s0;
		NullCheck(L_4);
		bool L_6;
		L_6 = CompilationSourceFile_IsConditionalDefined_mB41C522347AC284AFA07CA1EDCA5304B96B9E8B4(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::pp_primary(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_pp_primary_m516651836429219F401E0E45A2F0A604E104BA9D (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t** ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		String_t** L_0 = ___s0;
		String_t** L_1 = L_0;
		String_t* L_2 = *((String_t**)L_1);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_2, NULL);
		*((RuntimeObject**)L_1) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)L_3);
		String_t** L_4 = ___s0;
		String_t* L_5 = *((String_t**)L_4);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		String_t** L_8 = ___s0;
		String_t* L_9 = *((String_t**)L_8);
		NullCheck(L_9);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, 0, NULL);
		V_1 = L_10;
		Il2CppChar L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_0063;
		}
	}
	{
		String_t** L_12 = ___s0;
		String_t** L_13 = L_12;
		String_t* L_14 = *((String_t**)L_13);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_14, 1, NULL);
		*((RuntimeObject**)L_13) = (RuntimeObject*)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)(RuntimeObject*)L_15);
		String_t** L_16 = ___s0;
		bool L_17;
		L_17 = Tokenizer_pp_expr_mC6C26351B37D0086A4DAF7D507CE1D61D773E308(__this, L_16, (bool)0, NULL);
		V_2 = L_17;
		String_t** L_18 = ___s0;
		String_t* L_19 = *((String_t**)L_18);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_19, NULL);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		String_t** L_21 = ___s0;
		String_t* L_22 = *((String_t**)L_21);
		NullCheck(L_22);
		Il2CppChar L_23;
		L_23 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_22, 0, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_005b;
		}
	}
	{
		String_t** L_24 = ___s0;
		String_t** L_25 = L_24;
		String_t* L_26 = *((String_t**)L_25);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_26, 1, NULL);
		*((RuntimeObject**)L_25) = (RuntimeObject*)L_27;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_25, (void*)(RuntimeObject*)L_27);
		bool L_28 = V_2;
		return L_28;
	}

IL_005b:
	{
		Tokenizer_Error_InvalidDirective_m3C4A5AEF84A71813AF60BF2A6B28C177B5C9F672(__this, NULL);
		return (bool)0;
	}

IL_0063:
	{
		Il2CppChar L_29 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Tokenizer_is_identifier_start_character_m7260FDF47153E1BA05155D2BA5BE95D786F09FEE(L_29, NULL);
		if (!L_30)
		{
			goto IL_00b4;
		}
	}
	{
		V_3 = 1;
		goto IL_00a0;
	}

IL_006f:
	{
		String_t** L_31 = ___s0;
		String_t* L_32 = *((String_t**)L_31);
		int32_t L_33 = V_3;
		NullCheck(L_32);
		Il2CppChar L_34;
		L_34 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_32, L_33, NULL);
		V_1 = L_34;
		Il2CppChar L_35 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Tokenizer_is_identifier_part_character_m320FF0CA1E98E3F6B9C4506F7E41E116E3AF5A36(L_35, NULL);
		if (!L_36)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_37 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		goto IL_00a0;
	}

IL_0086:
	{
		String_t** L_38 = ___s0;
		String_t* L_39 = *((String_t**)L_38);
		int32_t L_40 = V_3;
		NullCheck(L_39);
		String_t* L_41;
		L_41 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_39, 0, L_40, NULL);
		bool L_42;
		L_42 = Tokenizer_eval_val_m9FF8B86A86C2E2BF91BC66DCE3494C1FBD0B4EAF(__this, L_41, NULL);
		String_t** L_43 = ___s0;
		String_t** L_44 = L_43;
		String_t* L_45 = *((String_t**)L_44);
		int32_t L_46 = V_3;
		NullCheck(L_45);
		String_t* L_47;
		L_47 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_45, L_46, NULL);
		*((RuntimeObject**)L_44) = (RuntimeObject*)L_47;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_44, (void*)(RuntimeObject*)L_47);
		return L_42;
	}

IL_00a0:
	{
		int32_t L_48 = V_3;
		int32_t L_49 = V_0;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_006f;
		}
	}
	{
		String_t** L_50 = ___s0;
		String_t* L_51 = *((String_t**)L_50);
		bool L_52;
		L_52 = Tokenizer_eval_val_m9FF8B86A86C2E2BF91BC66DCE3494C1FBD0B4EAF(__this, L_51, NULL);
		String_t** L_53 = ___s0;
		*((RuntimeObject**)L_53) = (RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_53, (void*)(RuntimeObject*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		return L_52;
	}

IL_00b4:
	{
		Tokenizer_Error_InvalidDirective_m3C4A5AEF84A71813AF60BF2A6B28C177B5C9F672(__this, NULL);
		return (bool)0;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::pp_unary(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_pp_unary_m3496EBC8F08141A6659A062526017127466D150A (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t** ___s0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t** L_0 = ___s0;
		String_t** L_1 = L_0;
		String_t* L_2 = *((String_t**)L_1);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_2, NULL);
		*((RuntimeObject**)L_1) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)L_3);
		String_t** L_4 = ___s0;
		String_t* L_5 = *((String_t**)L_4);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		String_t** L_8 = ___s0;
		String_t* L_9 = *((String_t**)L_8);
		NullCheck(L_9);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, 0, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		String_t** L_12 = ___s0;
		String_t* L_13 = *((String_t**)L_12);
		NullCheck(L_13);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_13, 1, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_0039;
		}
	}
	{
		Tokenizer_Error_InvalidDirective_m3C4A5AEF84A71813AF60BF2A6B28C177B5C9F672(__this, NULL);
		return (bool)0;
	}

IL_0039:
	{
		String_t** L_15 = ___s0;
		String_t** L_16 = L_15;
		String_t* L_17 = *((String_t**)L_16);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_17, 1, NULL);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_18);
		String_t** L_19 = ___s0;
		bool L_20;
		L_20 = Tokenizer_pp_primary_m516651836429219F401E0E45A2F0A604E104BA9D(__this, L_19, NULL);
		return (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
	}

IL_004e:
	{
		String_t** L_21 = ___s0;
		bool L_22;
		L_22 = Tokenizer_pp_primary_m516651836429219F401E0E45A2F0A604E104BA9D(__this, L_21, NULL);
		return L_22;
	}

IL_0056:
	{
		Tokenizer_Error_InvalidDirective_m3C4A5AEF84A71813AF60BF2A6B28C177B5C9F672(__this, NULL);
		return (bool)0;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::pp_eq(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_pp_eq_mBB79CC4299EC6F7BF47AA5F9AE04E9CD9BC7C3EE (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t** ___s0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		String_t** L_0 = ___s0;
		bool L_1;
		L_1 = Tokenizer_pp_unary_m3496EBC8F08141A6659A062526017127466D150A(__this, L_0, NULL);
		V_0 = L_1;
		String_t** L_2 = ___s0;
		String_t** L_3 = L_2;
		String_t* L_4 = *((String_t**)L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_4, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		String_t** L_6 = ___s0;
		String_t* L_7 = *((String_t**)L_6);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_008a;
		}
	}
	{
		String_t** L_10 = ___s0;
		String_t* L_11 = *((String_t**)L_10);
		NullCheck(L_11);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, 0, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) <= ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		String_t** L_14 = ___s0;
		String_t* L_15 = *((String_t**)L_14);
		NullCheck(L_15);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, 1, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_004e;
		}
	}
	{
		String_t** L_17 = ___s0;
		String_t** L_18 = L_17;
		String_t* L_19 = *((String_t**)L_18);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_19, 2, NULL);
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_20);
		bool L_21 = V_0;
		String_t** L_22 = ___s0;
		bool L_23;
		L_23 = Tokenizer_pp_unary_m3496EBC8F08141A6659A062526017127466D150A(__this, L_22, NULL);
		return (bool)((((int32_t)L_21) == ((int32_t)L_23))? 1 : 0);
	}

IL_004e:
	{
		Tokenizer_Error_InvalidDirective_m3C4A5AEF84A71813AF60BF2A6B28C177B5C9F672(__this, NULL);
		return (bool)0;
	}

IL_0056:
	{
		String_t** L_24 = ___s0;
		String_t* L_25 = *((String_t**)L_24);
		NullCheck(L_25);
		Il2CppChar L_26;
		L_26 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, 0, NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) <= ((int32_t)1)))
		{
			goto IL_008a;
		}
	}
	{
		String_t** L_28 = ___s0;
		String_t* L_29 = *((String_t**)L_28);
		NullCheck(L_29);
		Il2CppChar L_30;
		L_30 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_29, 1, NULL);
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_008a;
		}
	}
	{
		String_t** L_31 = ___s0;
		String_t** L_32 = L_31;
		String_t* L_33 = *((String_t**)L_32);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_33, 2, NULL);
		*((RuntimeObject**)L_32) = (RuntimeObject*)L_34;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_32, (void*)(RuntimeObject*)L_34);
		bool L_35 = V_0;
		String_t** L_36 = ___s0;
		bool L_37;
		L_37 = Tokenizer_pp_unary_m3496EBC8F08141A6659A062526017127466D150A(__this, L_36, NULL);
		return (bool)((((int32_t)((((int32_t)L_35) == ((int32_t)L_37))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_008a:
	{
		bool L_38 = V_0;
		return L_38;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::pp_and(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_pp_and_m1BEB6FE5D5F58009B53BD07E0127859172304375 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t** ___s0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		String_t** L_0 = ___s0;
		bool L_1;
		L_1 = Tokenizer_pp_eq_mBB79CC4299EC6F7BF47AA5F9AE04E9CD9BC7C3EE(__this, L_0, NULL);
		V_0 = L_1;
		String_t** L_2 = ___s0;
		String_t** L_3 = L_2;
		String_t* L_4 = *((String_t**)L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_4, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		String_t** L_6 = ___s0;
		String_t* L_7 = *((String_t**)L_6);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		String_t** L_10 = ___s0;
		String_t* L_11 = *((String_t**)L_10);
		NullCheck(L_11);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, 0, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) <= ((int32_t)2)))
		{
			goto IL_004d;
		}
	}
	{
		String_t** L_14 = ___s0;
		String_t* L_15 = *((String_t**)L_14);
		NullCheck(L_15);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, 1, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_004d;
		}
	}
	{
		String_t** L_17 = ___s0;
		String_t** L_18 = L_17;
		String_t* L_19 = *((String_t**)L_18);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_19, 2, NULL);
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_20);
		bool L_21 = V_0;
		String_t** L_22 = ___s0;
		bool L_23;
		L_23 = Tokenizer_pp_and_m1BEB6FE5D5F58009B53BD07E0127859172304375(__this, L_22, NULL);
		return (bool)((int32_t)((int32_t)L_21&(int32_t)L_23));
	}

IL_004d:
	{
		Tokenizer_Error_InvalidDirective_m3C4A5AEF84A71813AF60BF2A6B28C177B5C9F672(__this, NULL);
		return (bool)0;
	}

IL_0055:
	{
		bool L_24 = V_0;
		return L_24;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::pp_expr(System.String&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_pp_expr_mC6C26351B37D0086A4DAF7D507CE1D61D773E308 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t** ___s0, bool ___isTerm1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		String_t** L_0 = ___s0;
		bool L_1;
		L_1 = Tokenizer_pp_and_m1BEB6FE5D5F58009B53BD07E0127859172304375(__this, L_0, NULL);
		V_0 = L_1;
		String_t** L_2 = ___s0;
		String_t** L_3 = L_2;
		String_t* L_4 = *((String_t**)L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_4, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_5);
		String_t** L_6 = ___s0;
		String_t* L_7 = *((String_t**)L_6);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		String_t** L_10 = ___s0;
		String_t* L_11 = *((String_t**)L_10);
		NullCheck(L_11);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, 0, NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)124)))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) <= ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		String_t** L_14 = ___s0;
		String_t* L_15 = *((String_t**)L_14);
		NullCheck(L_15);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, 1, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)124)))))
		{
			goto IL_004e;
		}
	}
	{
		String_t** L_17 = ___s0;
		String_t** L_18 = L_17;
		String_t* L_19 = *((String_t**)L_18);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_19, 2, NULL);
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_20);
		bool L_21 = V_0;
		String_t** L_22 = ___s0;
		bool L_23 = ___isTerm1;
		bool L_24;
		L_24 = Tokenizer_pp_expr_mC6C26351B37D0086A4DAF7D507CE1D61D773E308(__this, L_22, L_23, NULL);
		return (bool)((int32_t)((int32_t)L_21|(int32_t)L_24));
	}

IL_004e:
	{
		Tokenizer_Error_InvalidDirective_m3C4A5AEF84A71813AF60BF2A6B28C177B5C9F672(__this, NULL);
		return (bool)0;
	}

IL_0056:
	{
		bool L_25 = ___isTerm1;
		if (!L_25)
		{
			goto IL_0061;
		}
	}
	{
		Tokenizer_Error_EndLineExpected_m11ED1E600529CDBD83B6C60B8022AD030ADBC4B4(__this, NULL);
		return (bool)0;
	}

IL_0061:
	{
		bool L_26 = V_0;
		return L_26;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::eval(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_eval_m0C75F23C91EADA3209CE511AB5D53205DC22F9AC (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Tokenizer_pp_expr_mC6C26351B37D0086A4DAF7D507CE1D61D773E308(__this, (&___s0), (bool)1, NULL);
		V_0 = L_0;
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_1, NULL);
		___s0 = L_2;
		String_t* L_3 = ___s0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void Mono.CSharp.Tokenizer::Error_NumericConstantTooLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Error_NumericConstantTooLong_mCE5111A5B9CE281E6599AA1CE8C4659D12268BC8 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36A06081C3E35FC0138A8A6DD98C00735D17BEDF);
		s_Il2CppMethodInitialized = true;
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_0 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1;
		L_1 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_0);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_0, ((int32_t)1021), L_1, _stringLiteral36A06081C3E35FC0138A8A6DD98C00735D17BEDF, NULL);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::Error_InvalidDirective()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Error_InvalidDirective_m3C4A5AEF84A71813AF60BF2A6B28C177B5C9F672 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6461C88E6E5AFFAFB9C249C60DF48229221FCB4);
		s_Il2CppMethodInitialized = true;
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_0 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1;
		L_1 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_0);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_0, ((int32_t)1517), L_1, _stringLiteralE6461C88E6E5AFFAFB9C249C60DF48229221FCB4, NULL);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::Error_UnexpectedDirective(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Error_UnexpectedDirective_m2307917243591D6A15FFAAAEEAD8C693FE0D2A93 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, String_t* ___extra0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1207C821260E28631ECF6A4CCD7D175996DFB07);
		s_Il2CppMethodInitialized = true;
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_0 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1;
		L_1 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		String_t* L_2 = ___extra0;
		NullCheck(L_0);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_0, ((int32_t)1028), L_1, _stringLiteralF1207C821260E28631ECF6A4CCD7D175996DFB07, L_2, NULL);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::Error_TokensSeen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Error_TokensSeen_m7831A365E93428C5EFAE2F3BEA536614482E37F1 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC49E78F79864500BC68069A2B0CA759020CF9ECE);
		s_Il2CppMethodInitialized = true;
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_0 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1;
		L_1 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_0);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_0, ((int32_t)1032), L_1, _stringLiteralC49E78F79864500BC68069A2B0CA759020CF9ECE, NULL);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::Eror_WrongPreprocessorLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Eror_WrongPreprocessorLocation_m9663849FA3CAA93F1C91E40ECB761E9A64910A53 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F24DDFFD923E799FF50094D4A45E06FCF3753A);
		s_Il2CppMethodInitialized = true;
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_0 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1;
		L_1 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_0);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_0, ((int32_t)1040), L_1, _stringLiteral84F24DDFFD923E799FF50094D4A45E06FCF3753A, NULL);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::Error_EndLineExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_Error_EndLineExpected_m11ED1E600529CDBD83B6C60B8022AD030ADBC4B4 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CD4A1EBA38CE129A43FCCDB456FAABF692D7A77);
		s_Il2CppMethodInitialized = true;
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_0 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1;
		L_1 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_0);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_0, ((int32_t)1025), L_1, _stringLiteral5CD4A1EBA38CE129A43FCCDB456FAABF692D7A77, NULL);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::WarningMisplacedComment(Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_WarningMisplacedComment_m2783E2511B56B7B6A2EED57524768E9F9EA7B1D9 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7718D23232976A2B9CBCCE921B3BCD20392535CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Tokenizer_get_doc_state_m176FCD00A57BE1E90AA05268FE9AC71825968539_inline(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		Tokenizer_set_doc_state_mFE7CEE1075A7FCE92074719BBB7629115DF69A0E(__this, 2, NULL);
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_1 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_2 = ___loc0;
		NullCheck(L_1);
		Report_Warning_mB2724C097397520000542A4448087B39C37C928A(L_1, ((int32_t)1587), 2, L_2, _stringLiteral7718D23232976A2B9CBCCE921B3BCD20392535CF, NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Boolean Mono.CSharp.Tokenizer::ParsePreprocessingDirective(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tokenizer_ParsePreprocessingDirective_m073C87279D8824C4985AE99E6AB3693BA9D2B37C (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool ___caller_is_taking0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m141F1BE46354DA6AD95BD4791941D8BB59594DCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E18A58B2D4C9FF72BE170F4F09231D2B7503E79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13CF489EDCE9FCC5FCC09F20D5FFB656CF1914AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BA78EAF18DC03ACDD0988489FF7BEF2216ABBDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46672195A32767D1647572DFD13322EE00EB5DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FC62B7038BB5F13C1E7F7F9ECDFA4AF83E47B55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63AF870AAE93D50268073307FD25030EEC0D95CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DDB7124DD049ECC81E9566485C5E72BD4A5B629);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral874E099F75FBE3190ABC93B8FA178199B0B90974);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EE09E18A37456CE351D2274725035E79FB3A519);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral914D3FE4311E3B45D1C2C253676F4D06BE86BB4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDFC6A686A02CB9B5949933296CF184A7F479267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF562554B3C0A160466BC4548319594F6F8AA61D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA64C5198DA424A59029D35F5A20C1CE27C16070);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B15_0 = 0;
	{
		V_1 = (bool)0;
		int32_t L_0;
		L_0 = Tokenizer_get_cmd_arg_m3F1B511F14BFC9CA13A04477EE3541B92AB49DE5(__this, (&V_0), NULL);
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0334;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0060;
			}
			case 3:
			{
				goto IL_0351;
			}
			case 4:
			{
				goto IL_011b;
			}
			case 5:
			{
				goto IL_0351;
			}
			case 6:
			{
				goto IL_023f;
			}
		}
	}
	{
		int32_t L_2 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)2051))))
		{
			case 0:
			{
				goto IL_00af;
			}
			case 1:
			{
				goto IL_0351;
			}
			case 2:
			{
				goto IL_0196;
			}
			case 3:
			{
				goto IL_0351;
			}
			case 4:
			{
				goto IL_02f8;
			}
			case 5:
			{
				goto IL_0316;
			}
		}
	}
	{
		goto IL_0351;
	}

IL_0056:
	{
		V_1 = (bool)1;
		V_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		goto IL_00af;
	}

IL_0060:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_3 = __this->___ifstack_62;
		if (!L_3)
		{
			goto IL_0075;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_4 = __this->___ifstack_62;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_inline(L_4, Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0082;
		}
	}

IL_0075:
	{
		Tokenizer_Error_UnexpectedDirective_m2307917243591D6A15FFAAAEEAD8C693FE0D2A93(__this, _stringLiteral0E18A58B2D4C9FF72BE170F4F09231D2B7503E79, NULL);
		return (bool)1;
	}

IL_0082:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_6 = __this->___ifstack_62;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_6, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		if (((int32_t)(L_7&((int32_t)16))))
		{
			goto IL_00ad;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_8 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_9;
		L_9 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_8);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_8, ((int32_t)1027), L_9, _stringLiteral874E099F75FBE3190ABC93B8FA178199B0B90974, NULL);
	}

IL_00ad:
	{
		bool L_10 = ___caller_is_taking0;
		return L_10;
	}

IL_00af:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_11 = __this->___ifstack_62;
		if (L_11)
		{
			goto IL_00c3;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_12 = (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*)il2cpp_codegen_object_new(Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Stack_1__ctor_m141F1BE46354DA6AD95BD4791941D8BB59594DCA(L_12, 2, Stack_1__ctor_m141F1BE46354DA6AD95BD4791941D8BB59594DCA_RuntimeMethod_var);
		__this->___ifstack_62 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ifstack_62), (void*)L_12);
	}

IL_00c3:
	{
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_00c9;
		}
	}
	{
		G_B15_0 = 0;
		goto IL_00cb;
	}

IL_00c9:
	{
		G_B15_0 = ((int32_t)16);
	}

IL_00cb:
	{
		V_3 = G_B15_0;
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_14 = __this->___ifstack_62;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_inline(L_14, Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_00df;
		}
	}
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)(L_16|8));
		goto IL_00f2;
	}

IL_00df:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_17 = __this->___ifstack_62;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66(L_17, Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		if (!((int32_t)(L_18&1)))
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)(L_19|8));
	}

IL_00f2:
	{
		String_t* L_20 = V_0;
		bool L_21;
		L_21 = Tokenizer_eval_m0C75F23C91EADA3209CE511AB5D53205DC22F9AC(__this, L_20, NULL);
		bool L_22 = ___caller_is_taking0;
		if (!((int32_t)((int32_t)L_21&(int32_t)L_22)))
		{
			goto IL_010d;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_23 = __this->___ifstack_62;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_23, ((int32_t)(L_24|1)), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		return (bool)1;
	}

IL_010d:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_25 = __this->___ifstack_62;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_25, L_26, Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		return (bool)0;
	}

IL_011b:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_27 = __this->___ifstack_62;
		if (!L_27)
		{
			goto IL_0130;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_28 = __this->___ifstack_62;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_inline(L_28, Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		if (L_29)
		{
			goto IL_013d;
		}
	}

IL_0130:
	{
		Tokenizer_Error_UnexpectedDirective_m2307917243591D6A15FFAAAEEAD8C693FE0D2A93(__this, _stringLiteral1BA78EAF18DC03ACDD0988489FF7BEF2216ABBDA, NULL);
		return (bool)1;
	}

IL_013d:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_30 = __this->___ifstack_62;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_30, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		if (!((int32_t)(L_31&((int32_t)16))))
		{
			goto IL_0168;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_32 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_33;
		L_33 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_32);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_32, ((int32_t)1038), L_33, _stringLiteralBDFC6A686A02CB9B5949933296CF184A7F479267, NULL);
	}

IL_0168:
	{
		String_t* L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_34, NULL);
		if (!L_35)
		{
			goto IL_0176;
		}
	}
	{
		Tokenizer_Error_EndLineExpected_m11ED1E600529CDBD83B6C60B8022AD030ADBC4B4(__this, NULL);
	}

IL_0176:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_36 = __this->___ifstack_62;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_inline(L_36, Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		if (L_37)
		{
			goto IL_0185;
		}
	}
	{
		return (bool)1;
	}

IL_0185:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_38 = __this->___ifstack_62;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66(L_38, Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		return (bool)((!(((uint32_t)((int32_t)(L_39&1))) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0196:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_40 = __this->___ifstack_62;
		if (!L_40)
		{
			goto IL_01ab;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_41 = __this->___ifstack_62;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_inline(L_41, Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		if (L_42)
		{
			goto IL_01b8;
		}
	}

IL_01ab:
	{
		Tokenizer_Error_UnexpectedDirective_m2307917243591D6A15FFAAAEEAD8C693FE0D2A93(__this, _stringLiteral914D3FE4311E3B45D1C2C253676F4D06BE86BB4B, NULL);
		return (bool)1;
	}

IL_01b8:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_43 = __this->___ifstack_62;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_43, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		V_4 = L_44;
		int32_t L_45 = V_4;
		if (!((int32_t)(L_45&((int32_t)16))))
		{
			goto IL_01e9;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_46 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_47;
		L_47 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_46);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_46, ((int32_t)1038), L_47, _stringLiteralBDFC6A686A02CB9B5949933296CF184A7F479267, NULL);
		return (bool)1;
	}

IL_01e9:
	{
		int32_t L_48 = V_4;
		if (!((int32_t)(L_48&4)))
		{
			goto IL_01fc;
		}
	}
	{
		Tokenizer_Error_UnexpectedDirective_m2307917243591D6A15FFAAAEEAD8C693FE0D2A93(__this, _stringLiteral6DDB7124DD049ECC81E9566485C5E72BD4A5B629, NULL);
		return (bool)1;
	}

IL_01fc:
	{
		int32_t L_49 = V_4;
		if (!((int32_t)(L_49&1)))
		{
			goto IL_0210;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_50 = __this->___ifstack_62;
		NullCheck(L_50);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_50, 0, Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		return (bool)0;
	}

IL_0210:
	{
		String_t* L_51 = V_0;
		bool L_52;
		L_52 = Tokenizer_eval_m0C75F23C91EADA3209CE511AB5D53205DC22F9AC(__this, L_51, NULL);
		if (!L_52)
		{
			goto IL_0230;
		}
	}
	{
		int32_t L_53 = V_4;
		if (!((int32_t)(L_53&8)))
		{
			goto IL_0230;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_54 = __this->___ifstack_62;
		int32_t L_55 = V_4;
		NullCheck(L_54);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_54, ((int32_t)(L_55|1)), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		return (bool)1;
	}

IL_0230:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_56 = __this->___ifstack_62;
		int32_t L_57 = V_4;
		NullCheck(L_56);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_56, L_57, Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		return (bool)0;
	}

IL_023f:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_58 = __this->___ifstack_62;
		if (!L_58)
		{
			goto IL_0254;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_59 = __this->___ifstack_62;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_inline(L_59, Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		if (L_60)
		{
			goto IL_0261;
		}
	}

IL_0254:
	{
		Tokenizer_Error_UnexpectedDirective_m2307917243591D6A15FFAAAEEAD8C693FE0D2A93(__this, _stringLiteralF562554B3C0A160466BC4548319594F6F8AA61D0, NULL);
		return (bool)1;
	}

IL_0261:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_61 = __this->___ifstack_62;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66(L_61, Stack_1_Peek_m919AA48BFC239B260BB6A0639B8E027B60CB8B66_RuntimeMethod_var);
		V_5 = L_62;
		int32_t L_63 = V_5;
		if (!((int32_t)(L_63&((int32_t)16))))
		{
			goto IL_0292;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_64 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_65;
		L_65 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_64);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_64, ((int32_t)1038), L_65, _stringLiteralBDFC6A686A02CB9B5949933296CF184A7F479267, NULL);
		return (bool)1;
	}

IL_0292:
	{
		int32_t L_66 = V_5;
		if (!((int32_t)(L_66&4)))
		{
			goto IL_02a5;
		}
	}
	{
		Tokenizer_Error_UnexpectedDirective_m2307917243591D6A15FFAAAEEAD8C693FE0D2A93(__this, _stringLiteral13CF489EDCE9FCC5FCC09F20D5FFB656CF1914AE, NULL);
		return (bool)1;
	}

IL_02a5:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_67 = __this->___ifstack_62;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_67, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		String_t* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_69, NULL);
		if (!L_70)
		{
			goto IL_02c1;
		}
	}
	{
		Tokenizer_Error_EndLineExpected_m11ED1E600529CDBD83B6C60B8022AD030ADBC4B4(__this, NULL);
		return (bool)1;
	}

IL_02c1:
	{
		V_6 = (bool)0;
		int32_t L_71 = V_5;
		if (!((int32_t)(L_71&8)))
		{
			goto IL_02e6;
		}
	}
	{
		int32_t L_72 = V_5;
		V_6 = (bool)((((int32_t)((int32_t)(L_72&1))) == ((int32_t)0))? 1 : 0);
		bool L_73 = V_6;
		if (!L_73)
		{
			goto IL_02df;
		}
	}
	{
		int32_t L_74 = V_5;
		V_5 = ((int32_t)(L_74|1));
		goto IL_02e6;
	}

IL_02df:
	{
		int32_t L_75 = V_5;
		V_5 = ((int32_t)(L_75&((int32_t)-2)));
	}

IL_02e6:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_76 = __this->___ifstack_62;
		int32_t L_77 = V_5;
		NullCheck(L_76);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_76, ((int32_t)(L_77|4)), Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		bool L_78 = V_6;
		return L_78;
	}

IL_02f8:
	{
		bool L_79 = __this->___any_token_seen_42;
		if (!L_79)
		{
			goto IL_030b;
		}
	}
	{
		bool L_80 = ___caller_is_taking0;
		if (!L_80)
		{
			goto IL_0309;
		}
	}
	{
		Tokenizer_Error_TokensSeen_m7831A365E93428C5EFAE2F3BEA536614482E37F1(__this, NULL);
	}

IL_0309:
	{
		bool L_81 = ___caller_is_taking0;
		return L_81;
	}

IL_030b:
	{
		String_t* L_82 = V_0;
		bool L_83 = ___caller_is_taking0;
		Tokenizer_PreProcessDefinition_mC79F9D5593279077BE548AC73336DB2AF10DD6D6(__this, (bool)1, L_82, L_83, NULL);
		bool L_84 = ___caller_is_taking0;
		return L_84;
	}

IL_0316:
	{
		bool L_85 = __this->___any_token_seen_42;
		if (!L_85)
		{
			goto IL_0329;
		}
	}
	{
		bool L_86 = ___caller_is_taking0;
		if (!L_86)
		{
			goto IL_0327;
		}
	}
	{
		Tokenizer_Error_TokensSeen_m7831A365E93428C5EFAE2F3BEA536614482E37F1(__this, NULL);
	}

IL_0327:
	{
		bool L_87 = ___caller_is_taking0;
		return L_87;
	}

IL_0329:
	{
		String_t* L_88 = V_0;
		bool L_89 = ___caller_is_taking0;
		Tokenizer_PreProcessDefinition_mC79F9D5593279077BE548AC73336DB2AF10DD6D6(__this, (bool)0, L_88, L_89, NULL);
		bool L_90 = ___caller_is_taking0;
		return L_90;
	}

IL_0334:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_91 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_92;
		L_92 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_91);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_91, ((int32_t)1024), L_92, _stringLiteral46672195A32767D1647572DFD13322EE00EB5DA7, NULL);
		return (bool)1;
	}

IL_0351:
	{
		bool L_93 = ___caller_is_taking0;
		if (L_93)
		{
			goto IL_0356;
		}
	}
	{
		return (bool)0;
	}

IL_0356:
	{
		int32_t L_94 = V_2;
		if ((((int32_t)L_94) > ((int32_t)((int32_t)10))))
		{
			goto IL_036a;
		}
	}
	{
		int32_t L_95 = V_2;
		if ((((int32_t)L_95) == ((int32_t)((int32_t)9))))
		{
			goto IL_037f;
		}
	}
	{
		int32_t L_96 = V_2;
		if ((((int32_t)L_96) == ((int32_t)((int32_t)10))))
		{
			goto IL_039d;
		}
	}
	{
		goto IL_041c;
	}

IL_036a:
	{
		int32_t L_97 = V_2;
		if ((((int32_t)L_97) == ((int32_t)((int32_t)1035))))
		{
			goto IL_03bc;
		}
	}
	{
		int32_t L_98 = V_2;
		if ((((int32_t)L_98) == ((int32_t)((int32_t)1036))))
		{
			goto IL_03f3;
		}
	}
	{
		goto IL_041c;
	}

IL_037f:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_99 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_100;
		L_100 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		String_t* L_101 = V_0;
		NullCheck(L_99);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_99, ((int32_t)1029), L_100, _stringLiteral8EE09E18A37456CE351D2274725035E79FB3A519, L_101, NULL);
		return (bool)1;
	}

IL_039d:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_102 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_103;
		L_103 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		String_t* L_104 = V_0;
		NullCheck(L_102);
		Report_Warning_m462594FD369AE2148FE2671DC4FFE246037C40F1(L_102, ((int32_t)1030), 1, L_103, _stringLiteralFA64C5198DA424A59029D35F5A20C1CE27C16070, L_104, NULL);
		return (bool)1;
	}

IL_03bc:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_105 = __this->___context_2;
		NullCheck(L_105);
		CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* L_106;
		L_106 = CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline(L_105, NULL);
		NullCheck(L_106);
		int32_t L_107 = L_106->___Version_5;
		if ((!(((uint32_t)L_107) == ((uint32_t)1))))
		{
			goto IL_03eb;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_108 = __this->___Report_3;
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_109 = __this->___context_2;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_110;
		L_110 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_108);
		Report_FeatureIsNotAvailable_m3B6E75516D3353EECA9E8695F328132F5390B5BD(L_108, L_109, L_110, _stringLiteral63AF870AAE93D50268073307FD25030EEC0D95CD, NULL);
	}

IL_03eb:
	{
		Tokenizer_ParsePragmaDirective_mFA6370C649214BB64CBD0A9531246F822CE6C421(__this, NULL);
		return (bool)1;
	}

IL_03f3:
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_111;
		L_111 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		V_7 = L_111;
		bool L_112;
		L_112 = Tokenizer_PreProcessLine_m7B9C7C576A980C11F9DD93FC4FC7FF2205894D87(__this, NULL);
		if (L_112)
		{
			goto IL_041a;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_113 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_114 = V_7;
		NullCheck(L_113);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_113, ((int32_t)1576), L_114, _stringLiteral4FC62B7038BB5F13C1E7F7F9ECDFA4AF83E47B55, NULL);
	}

IL_041a:
	{
		bool L_115 = ___caller_is_taking0;
		return L_115;
	}

IL_041c:
	{
		Il2CppFakeBox<int32_t> L_116(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PreprocessorDirective_tAA081647C985CC6EE717A9564276EDFCA2911534_il2cpp_TypeInfo_var)), (&V_2));
		String_t* L_117;
		L_117 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_116), NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_118 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_118);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_118, L_117, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_118, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tokenizer_ParsePreprocessingDirective_m073C87279D8824C4985AE99E6AB3693BA9D2B37C_RuntimeMethod_var)));
	}
}
// System.Int32 Mono.CSharp.Tokenizer::consume_string(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_consume_string_m3EC30B0C354899F5D6E08CC0953F7E12BBFDF199 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool ___quoted0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00F89CB2115A05D26324E757A0EDE36DEA79C83D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral719C192C1C3B2B4A487A435DDE8EF62875B7EF52);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_0;
		L_0 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		V_2 = L_0;
		bool L_1 = ___quoted0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_2 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_3;
		L_3 = Location_op_Subtraction_mC44C585EA311B1A2A2D7A1AEF1A681270C470D85(L_2, 1, NULL);
		V_2 = L_3;
	}

IL_0014:
	{
		int32_t L_4 = __this->___putback_char_56;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_5 = __this->___putback_char_56;
		V_0 = L_5;
		__this->___putback_char_56 = (-1);
		goto IL_0039;
	}

IL_002d:
	{
		SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* L_6 = __this->___reader_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SeekableStreamReader_Read_mBC8FFD4D6E233325F0FBFC987739EADCD28354E7(L_6, NULL);
		V_0 = L_7;
	}

IL_0039:
	{
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_9 = __this->___col_8;
		__this->___col_8 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		bool L_10 = ___quoted0;
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_11;
		L_11 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = __this->___value_builder_69;
		NullCheck(L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0072;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_14 = (&__this->___value_builder_69);
		int32_t L_15 = V_1;
		Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F(L_14, ((int32_t)il2cpp_codegen_multiply(L_15, 2)), Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
	}

IL_0072:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = __this->___value_builder_69;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_0;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Il2CppChar)((int32_t)(uint16_t)L_19));
		int32_t L_20;
		L_20 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		goto IL_0014;
	}

IL_0089:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_21 = __this->___context_2;
		NullCheck(L_21);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_22;
		L_22 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_21, NULL);
		int32_t L_23 = V_1;
		String_t* L_24;
		L_24 = Tokenizer_CreateStringFromBuilder_mF1DA2E778A70B38CB033AB8BB212C55039FA1071(__this, L_23, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_25 = V_2;
		StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F* L_26 = (StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F*)il2cpp_codegen_object_new(StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		StringLiteral__ctor_m48BD6CE9DA8881B4E31CD1304BA9B3D7DE752A6B(L_26, L_22, L_24, L_25, NULL);
		V_3 = L_26;
		RuntimeObject* L_27 = V_3;
		__this->___val_57 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_27);
		return ((int32_t)421);
	}

IL_00af:
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)10))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)8232))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)8233)))))
		{
			goto IL_0133;
		}
	}

IL_00c4:
	{
		bool L_31 = ___quoted0;
		if (L_31)
		{
			goto IL_0128;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_32 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_33;
		L_33 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_32);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_32, ((int32_t)1010), L_33, _stringLiteral00F89CB2115A05D26324E757A0EDE36DEA79C83D, NULL);
		Tokenizer_advance_line_m75BBC1A2DDC9A77C6B279A6E6D63F9E61D3ADFA7(__this, NULL);
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) <= ((int32_t)1)))
		{
			goto IL_00fe;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_35 = __this->___value_builder_69;
		int32_t L_36 = V_1;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		uint16_t L_38 = (uint16_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_00fe:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_40 = __this->___context_2;
		NullCheck(L_40);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_41;
		L_41 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_40, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42 = __this->___value_builder_69;
		int32_t L_43 = V_1;
		String_t* L_44;
		L_44 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_42, 0, L_43, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_45 = V_2;
		StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F* L_46 = (StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F*)il2cpp_codegen_object_new(StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		StringLiteral__ctor_m48BD6CE9DA8881B4E31CD1304BA9B3D7DE752A6B(L_46, L_41, L_44, L_45, NULL);
		__this->___val_57 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_46);
		return ((int32_t)421);
	}

IL_0128:
	{
		Tokenizer_advance_line_m75BBC1A2DDC9A77C6B279A6E6D63F9E61D3ADFA7(__this, NULL);
		goto IL_01c0;
	}

IL_0133:
	{
		int32_t L_47 = V_0;
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_018d;
		}
	}
	{
		bool L_48 = ___quoted0;
		if (L_48)
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_49 = __this->___col_8;
		__this->___col_8 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_0;
		int32_t L_51;
		L_51 = Tokenizer_escape_mC78396709ADE0CF7C4CC33402C0C8BEDA6B52B75(__this, L_50, (&V_4), NULL);
		V_0 = L_51;
		int32_t L_52 = V_0;
		if ((!(((uint32_t)L_52) == ((uint32_t)(-1)))))
		{
			goto IL_015d;
		}
	}
	{
		return ((int32_t)259);
	}

IL_015d:
	{
		int32_t L_53 = V_4;
		if (!L_53)
		{
			goto IL_01c0;
		}
	}
	{
		int32_t L_54 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_55 = __this->___value_builder_69;
		NullCheck(L_55);
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)(((RuntimeArray*)L_55)->max_length))))))
		{
			goto IL_017a;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_56 = (&__this->___value_builder_69);
		int32_t L_57 = V_1;
		Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F(L_56, ((int32_t)il2cpp_codegen_multiply(L_57, 2)), Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
	}

IL_017a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = __this->___value_builder_69;
		int32_t L_59 = V_1;
		int32_t L_60 = L_59;
		V_1 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = V_0;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (Il2CppChar)((int32_t)(uint16_t)L_61));
		int32_t L_62 = V_4;
		V_0 = L_62;
		goto IL_01c0;
	}

IL_018d:
	{
		int32_t L_63 = V_0;
		if ((!(((uint32_t)L_63) == ((uint32_t)(-1)))))
		{
			goto IL_01b2;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_64 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_65;
		L_65 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_64);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_64, ((int32_t)1039), L_65, _stringLiteral719C192C1C3B2B4A487A435DDE8EF62875B7EF52, NULL);
		return ((int32_t)257);
	}

IL_01b2:
	{
		int32_t L_66 = __this->___col_8;
		__this->___col_8 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_01c0:
	{
		int32_t L_67 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_68 = __this->___value_builder_69;
		NullCheck(L_68);
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_01d9;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_69 = (&__this->___value_builder_69);
		int32_t L_70 = V_1;
		Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F(L_69, ((int32_t)il2cpp_codegen_multiply(L_70, 2)), Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
	}

IL_01d9:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_71 = __this->___value_builder_69;
		int32_t L_72 = V_1;
		int32_t L_73 = L_72;
		V_1 = ((int32_t)il2cpp_codegen_add(L_73, 1));
		int32_t L_74 = V_0;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (Il2CppChar)((int32_t)(uint16_t)L_74));
		goto IL_0014;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::consume_identifier(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_consume_identifier_mA3CDD0FB064E5414BF4F12184E52DC10817382A6 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___s0, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		int32_t L_0 = ___s0;
		int32_t L_1;
		L_1 = Tokenizer_consume_identifier_mB55320A0CCAE29FD6121CAEC215A46A8B55336E2(__this, L_0, (bool)0, NULL);
		int32_t L_2;
		L_2 = Tokenizer_get_doc_state_m176FCD00A57BE1E90AA05268FE9AC71825968539_inline(__this, NULL);
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		Tokenizer_set_doc_state_mFE7CEE1075A7FCE92074719BBB7629115DF69A0E(__this, 1, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::consume_identifier(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_consume_identifier_mB55320A0CCAE29FD6121CAEC215A46A8B55336E2 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___c0, bool ___quoted1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02929E08A4A8D5FDF5C7A9F7575E4CA1F48AF9AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral648807C9AFAA4DC700F1A2E0A031F9B6E5C6C0A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* G_B35_0 = NULL;
	Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* G_B35_1 = NULL;
	LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* G_B34_0 = NULL;
	Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* G_B34_1 = NULL;
	String_t* G_B36_0 = NULL;
	LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* G_B36_1 = NULL;
	Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* G_B36_2 = NULL;
	{
		V_0 = 0;
		int32_t L_0 = __this->___col_8;
		V_1 = L_0;
		bool L_1 = ___quoted1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
	}

IL_0010:
	{
		int32_t L_3 = ___c0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_4 = ___c0;
		int32_t L_5;
		L_5 = Tokenizer_escape_mC78396709ADE0CF7C4CC33402C0C8BEDA6B52B75(__this, L_4, (&V_3), NULL);
		___c0 = L_5;
		bool L_6 = ___quoted1;
		if (L_6)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_7 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Tokenizer_is_identifier_start_character_m7260FDF47153E1BA05155D2BA5BE95D786F09FEE(L_7, NULL);
		if (L_8)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_9 = V_3;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = __this->___id_builder_65;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = ___c0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Il2CppChar)((int32_t)(uint16_t)L_13));
		int32_t L_14 = V_3;
		___c0 = L_14;
		goto IL_006e;
	}

IL_0041:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_15 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_16;
		L_16 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		String_t* L_17;
		L_17 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&___c0), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, NULL);
		NullCheck(L_15);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_15, ((int32_t)1056), L_16, _stringLiteral02929E08A4A8D5FDF5C7A9F7575E4CA1F48AF9AA, L_17, NULL);
		return ((int32_t)259);
	}

IL_006e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = __this->___id_builder_65;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = ___c0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Il2CppChar)((int32_t)(uint16_t)L_21));
	}

IL_007c:
	try
	{// begin try (depth: 1)

IL_007c_1:
		{
			SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* L_22 = __this->___reader_0;
			NullCheck(L_22);
			int32_t L_23;
			L_23 = SeekableStreamReader_Read_mBC8FFD4D6E233325F0FBFC987739EADCD28354E7(L_22, NULL);
			___c0 = L_23;
			int32_t L_24 = ___c0;
			if ((((int32_t)L_24) < ((int32_t)((int32_t)97))))
			{
				goto IL_0093_1;
			}
		}
		{
			int32_t L_25 = ___c0;
			if ((((int32_t)L_25) <= ((int32_t)((int32_t)122))))
			{
				goto IL_00ac_1;
			}
		}

IL_0093_1:
		{
			int32_t L_26 = ___c0;
			if ((((int32_t)L_26) < ((int32_t)((int32_t)65))))
			{
				goto IL_009d_1;
			}
		}
		{
			int32_t L_27 = ___c0;
			if ((((int32_t)L_27) <= ((int32_t)((int32_t)90))))
			{
				goto IL_00ac_1;
			}
		}

IL_009d_1:
		{
			int32_t L_28 = ___c0;
			if ((((int32_t)L_28) == ((int32_t)((int32_t)95))))
			{
				goto IL_00ac_1;
			}
		}
		{
			int32_t L_29 = ___c0;
			if ((((int32_t)L_29) < ((int32_t)((int32_t)48))))
			{
				goto IL_00bc_1;
			}
		}
		{
			int32_t L_30 = ___c0;
			if ((((int32_t)L_30) > ((int32_t)((int32_t)57))))
			{
				goto IL_00bc_1;
			}
		}

IL_00ac_1:
		{
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = __this->___id_builder_65;
			int32_t L_32 = V_0;
			int32_t L_33 = L_32;
			V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
			int32_t L_34 = ___c0;
			NullCheck(L_31);
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (Il2CppChar)((int32_t)(uint16_t)L_34));
			goto IL_007c_1;
		}

IL_00bc_1:
		{
			int32_t L_35 = ___c0;
			if ((((int32_t)L_35) >= ((int32_t)((int32_t)128))))
			{
				goto IL_0147_1;
			}
		}
		{
			int32_t L_36 = ___c0;
			if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)92)))))
			{
				goto IL_0163_1;
			}
		}
		{
			int32_t L_37 = ___c0;
			int32_t L_38;
			L_38 = Tokenizer_escape_mC78396709ADE0CF7C4CC33402C0C8BEDA6B52B75(__this, L_37, (&V_4), NULL);
			___c0 = L_38;
			int32_t L_39 = ___c0;
			il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
			bool L_40;
			L_40 = Tokenizer_is_identifier_part_character_m320FF0CA1E98E3F6B9C4506F7E41E116E3AF5A36(((int32_t)(uint16_t)L_39), NULL);
			if (!L_40)
			{
				goto IL_00f3_1;
			}
		}
		{
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = __this->___id_builder_65;
			int32_t L_42 = V_0;
			int32_t L_43 = L_42;
			V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
			int32_t L_44 = ___c0;
			NullCheck(L_41);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Il2CppChar)((int32_t)(uint16_t)L_44));
			goto IL_007c_1;
		}

IL_00f3_1:
		{
			int32_t L_45 = V_4;
			if (!L_45)
			{
				goto IL_0100_1;
			}
		}
		{
			int32_t L_46 = V_4;
			___c0 = L_46;
			goto IL_007c_1;
		}

IL_0100_1:
		{
			int32_t L_47 = ___c0;
			if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)65279)))))
			{
				goto IL_0114_1;
			}
		}
		{
			int32_t L_48 = ___c0;
			__this->___putback_char_56 = L_48;
			goto IL_007c_1;
		}

IL_0114_1:
		{
			Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_49 = __this->___Report_3;
			Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_50;
			L_50 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
			String_t* L_51;
			L_51 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&___c0), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, NULL);
			NullCheck(L_49);
			Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_49, ((int32_t)1056), L_50, _stringLiteral02929E08A4A8D5FDF5C7A9F7575E4CA1F48AF9AA, L_51, NULL);
			V_5 = ((int32_t)259);
			goto IL_0255;
		}

IL_0147_1:
		{
			int32_t L_52 = ___c0;
			il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
			bool L_53;
			L_53 = Tokenizer_is_identifier_part_character_slow_part_mC6325EC6BC0EBCE43EFC2F195E3B28278E4936B1(((int32_t)(uint16_t)L_52), NULL);
			if (!L_53)
			{
				goto IL_0163_1;
			}
		}
		{
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_54 = __this->___id_builder_65;
			int32_t L_55 = V_0;
			int32_t L_56 = L_55;
			V_0 = ((int32_t)il2cpp_codegen_add(L_56, 1));
			int32_t L_57 = ___c0;
			NullCheck(L_54);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_56), (Il2CppChar)((int32_t)(uint16_t)L_57));
			goto IL_007c_1;
		}

IL_0163_1:
		{
			int32_t L_58 = ___c0;
			__this->___putback_char_56 = L_58;
			goto IL_019c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_016c;
		}
		throw e;
	}

CATCH_016c:
	{// begin catch(System.IndexOutOfRangeException)
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_59 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_60;
		L_60 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_59);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_59, ((int32_t)645), L_60, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF03448350C4EA24B8AA2B12DF7EF5312ECEECABB)), NULL);
		int32_t L_61 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		int32_t L_62 = __this->___col_8;
		int32_t L_63 = V_0;
		__this->___col_8 = ((int32_t)il2cpp_codegen_add(L_62, L_63));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_019c;
	}// end catch (depth: 1)

IL_019c:
	{
		int32_t L_64 = __this->___col_8;
		int32_t L_65 = V_0;
		__this->___col_8 = ((int32_t)il2cpp_codegen_add(L_64, ((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_66 = __this->___id_builder_65;
		NullCheck(L_66);
		int32_t L_67 = 0;
		uint16_t L_68 = (uint16_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		if ((((int32_t)L_68) < ((int32_t)((int32_t)95))))
		{
			goto IL_0201;
		}
	}
	{
		bool L_69 = ___quoted1;
		if (L_69)
		{
			goto IL_0201;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_70 = __this->___id_builder_65;
		int32_t L_71 = V_0;
		int32_t L_72;
		L_72 = Tokenizer_GetKeyword_m9B9C31351710F59E78FE336F80778817372203A0(__this, L_70, L_71, NULL);
		V_6 = L_72;
		int32_t L_73 = V_6;
		if ((((int32_t)L_73) == ((int32_t)(-1))))
		{
			goto IL_0201;
		}
	}
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_74 = __this->___ltb_19;
		int32_t L_75 = V_6;
		G_B34_0 = L_74;
		G_B34_1 = __this;
		if ((((int32_t)L_75) == ((int32_t)((int32_t)363))))
		{
			G_B35_0 = L_74;
			G_B35_1 = __this;
			goto IL_01e2;
		}
	}
	{
		G_B36_0 = ((String_t*)(NULL));
		G_B36_1 = G_B34_0;
		G_B36_2 = G_B34_1;
		goto IL_01e7;
	}

IL_01e2:
	{
		G_B36_0 = _stringLiteral648807C9AFAA4DC700F1A2E0A031F9B6E5C6C0A9;
		G_B36_1 = G_B35_0;
		G_B36_2 = G_B35_1;
	}

IL_01e7:
	{
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_76 = __this->___current_source_4;
		int32_t L_77 = __this->___ref_line_6;
		int32_t L_78 = V_1;
		NullCheck(G_B36_1);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_79;
		L_79 = LocatedTokenBuffer_Create_m244D232DD2BA9CDECD2B4F9C844C2671ECDFEA81(G_B36_1, G_B36_0, L_76, L_77, L_78, NULL);
		NullCheck(G_B36_2);
		G_B36_2->___val_57 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&G_B36_2->___val_57), (void*)L_79);
		int32_t L_80 = V_6;
		return L_80;
	}

IL_0201:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_81 = __this->___id_builder_65;
		int32_t L_82 = V_0;
		String_t* L_83;
		L_83 = Tokenizer_InternIdentifier_m6D0ACAD13122A0CE0A4ADD8B9338D18284860161(__this, L_81, L_82, NULL);
		V_2 = L_83;
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_84 = __this->___ltb_19;
		String_t* L_85 = V_2;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_86 = __this->___current_source_4;
		int32_t L_87 = __this->___ref_line_6;
		int32_t L_88 = V_1;
		NullCheck(L_84);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_89;
		L_89 = LocatedTokenBuffer_Create_m244D232DD2BA9CDECD2B4F9C844C2671ECDFEA81(L_84, L_85, L_86, L_87, L_88, NULL);
		__this->___val_57 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_89);
		bool L_90 = ___quoted1;
		if (!L_90)
		{
			goto IL_024f;
		}
	}
	{
		bool L_91 = __this->___parsing_attribute_section_26;
		if (!L_91)
		{
			goto IL_024f;
		}
	}
	{
		RuntimeObject* L_92 = __this->___val_57;
		NullCheck(((LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5*)CastclassClass((RuntimeObject*)L_92, LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5_il2cpp_TypeInfo_var)));
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_93;
		L_93 = LocatedToken_get_Location_m0BE20259CCEAE8260414B1C68EAD616F8DD2C427(((LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5*)CastclassClass((RuntimeObject*)L_92, LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5_il2cpp_TypeInfo_var)), NULL);
		Tokenizer_AddEscapedIdentifier_m13CC2DB4043D12DB0BB334C248BE5B55F8F95624(__this, L_93, NULL);
	}

IL_024f:
	{
		return ((int32_t)422);
	}

IL_0255:
	{
		int32_t L_94 = V_5;
		return L_94;
	}
}
// System.String Mono.CSharp.Tokenizer::InternIdentifier(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tokenizer_InternIdentifier_m6D0ACAD13122A0CE0A4ADD8B9338D18284860161 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___charBuffer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m75FC00D2F6ABDA5C100FA4B917AA53D08679FA95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m6DE9BA94E7CF48DB003DE6B65FB5735135F038ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8A0F4C439E7AC9920D1029A4451254E0BFE84BD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentifiersComparer_t928D506738E14DEF81F7E2384D8AD6ED2D3FA965_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* V_0 = NULL;
	String_t* V_1 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	int32_t G_B6_0 = 0;
	{
		Dictionary_2U5BU5D_tB3D5B174D6C376DBA5BB7B48C3F60DBABD0D2F46* L_0 = __this->___identifiers_66;
		int32_t L_1 = ___length1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* L_5 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___charBuffer0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m6DE9BA94E7CF48DB003DE6B65FB5735135F038ED(L_5, L_6, (&V_1), Dictionary_2_TryGetValue_m6DE9BA94E7CF48DB003DE6B65FB5735135F038ED_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_8 = V_1;
		return L_8;
	}

IL_0019:
	{
		int32_t L_9 = ___length1;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)20))))
		{
			goto IL_0022;
		}
	}
	{
		G_B6_0 = ((int32_t)100);
		goto IL_0024;
	}

IL_0022:
	{
		G_B6_0 = ((int32_t)10);
	}

IL_0024:
	{
		int32_t L_10 = ___length1;
		IdentifiersComparer_t928D506738E14DEF81F7E2384D8AD6ED2D3FA965* L_11 = (IdentifiersComparer_t928D506738E14DEF81F7E2384D8AD6ED2D3FA965*)il2cpp_codegen_object_new(IdentifiersComparer_t928D506738E14DEF81F7E2384D8AD6ED2D3FA965_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		IdentifiersComparer__ctor_m80EC36DF2278F50F193B7A9CE7DDE49674EA4EAC(L_11, L_10, NULL);
		Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* L_12 = (Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1*)il2cpp_codegen_object_new(Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Dictionary_2__ctor_m8A0F4C439E7AC9920D1029A4451254E0BFE84BD5(L_12, G_B6_0, L_11, Dictionary_2__ctor_m8A0F4C439E7AC9920D1029A4451254E0BFE84BD5_RuntimeMethod_var);
		V_0 = L_12;
		Dictionary_2U5BU5D_tB3D5B174D6C376DBA5BB7B48C3F60DBABD0D2F46* L_13 = __this->___identifiers_66;
		int32_t L_14 = ___length1;
		Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* L_15 = V_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1*)L_15);
	}

IL_0039:
	{
		int32_t L_16 = ___length1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_2 = L_17;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = ___charBuffer0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = V_2;
		int32_t L_20 = ___length1;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_18, (RuntimeArray*)L_19, L_20, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = ___charBuffer0;
		int32_t L_22 = ___length1;
		String_t* L_23;
		L_23 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_21, 0, L_22, NULL);
		V_1 = L_23;
		Dictionary_2_t6FD91310C81EFA48A7ABE680392056DDA4E26AE1* L_24 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = V_2;
		String_t* L_26 = V_1;
		NullCheck(L_24);
		Dictionary_2_Add_m75FC00D2F6ABDA5C100FA4B917AA53D08679FA95(L_24, L_25, L_26, Dictionary_2_Add_m75FC00D2F6ABDA5C100FA4B917AA53D08679FA95_RuntimeMethod_var);
		String_t* L_27 = V_1;
		return L_27;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::xtoken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_xtoken_m9CAFDB4C6A680DD16C7E816961892809988F468B (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m68EAE72219A7C7459E95260B09AB9EAD32F6B27F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mFD7C58157E038255E7D2C956BEC020F4835682CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11749F9AE3825EC03111BADE7C63EFF333EC16A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DE499DDD56B58043006A96AAA44ED6015EDF4EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8372A5805DAD56DC02FB5A1D6C8824A7A916847);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE5DCE56D7A802E4581ED7F382622661E6A249BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB2D19A54B5DA10084F30BE52A1FE0F177622877);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	Il2CppChar V_10 = 0x0;
	{
		bool L_0 = __this->___parsing_interpolation_format_31;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1;
		L_1 = Tokenizer_TokenizeInterpolationFormat_mF8E8E86DB64A757E0BD39B994AA6E10560D6C98B(__this, NULL);
		return L_1;
	}

IL_000f:
	{
		V_2 = (bool)0;
		goto IL_0d62;
	}

IL_0016:
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)160))))
		{
			goto IL_017a;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)94))))
		{
			goto IL_0151;
		}
	}
	{
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0d62;
			}
			case 1:
			{
				goto IL_0d1c;
			}
			case 2:
			{
				goto IL_0d1c;
			}
			case 3:
			{
				goto IL_0d1c;
			}
			case 4:
			{
				goto IL_0d1c;
			}
			case 5:
			{
				goto IL_0d1c;
			}
			case 6:
			{
				goto IL_0d1c;
			}
			case 7:
			{
				goto IL_0d1c;
			}
			case 8:
			{
				goto IL_0d1c;
			}
			case 9:
			{
				goto IL_01c9;
			}
			case 10:
			{
				goto IL_0b2d;
			}
			case 11:
			{
				goto IL_0d62;
			}
			case 12:
			{
				goto IL_0d62;
			}
			case 13:
			{
				goto IL_0d1c;
			}
			case 14:
			{
				goto IL_0d1c;
			}
			case 15:
			{
				goto IL_0d1c;
			}
			case 16:
			{
				goto IL_0d1c;
			}
			case 17:
			{
				goto IL_0d1c;
			}
			case 18:
			{
				goto IL_0d1c;
			}
			case 19:
			{
				goto IL_0d1c;
			}
			case 20:
			{
				goto IL_0d1c;
			}
			case 21:
			{
				goto IL_0d1c;
			}
			case 22:
			{
				goto IL_0d1c;
			}
			case 23:
			{
				goto IL_0d1c;
			}
			case 24:
			{
				goto IL_0d1c;
			}
			case 25:
			{
				goto IL_0d1c;
			}
			case 26:
			{
				goto IL_0d1c;
			}
			case 27:
			{
				goto IL_0d1c;
			}
			case 28:
			{
				goto IL_0d1c;
			}
			case 29:
			{
				goto IL_0d1c;
			}
			case 30:
			{
				goto IL_0d1c;
			}
			case 31:
			{
				goto IL_0d1c;
			}
			case 32:
			{
				goto IL_0d62;
			}
			case 33:
			{
				goto IL_068c;
			}
			case 34:
			{
				goto IL_0c09;
			}
			case 35:
			{
				goto IL_0b75;
			}
			case 36:
			{
				goto IL_0cbf;
			}
			case 37:
			{
				goto IL_0a5d;
			}
			case 38:
			{
				goto IL_0720;
			}
			case 39:
			{
				goto IL_0c6b;
			}
			case 40:
			{
				goto IL_036b;
			}
			case 41:
			{
				goto IL_0495;
			}
			case 42:
			{
				goto IL_07c8;
			}
			case 43:
			{
				goto IL_05d9;
			}
			case 44:
			{
				goto IL_049b;
			}
			case 45:
			{
				goto IL_062c;
			}
			case 46:
			{
				goto IL_0b4e;
			}
			case 47:
			{
				goto IL_0808;
			}
			case 48:
			{
				goto IL_0b1d;
			}
			case 49:
			{
				goto IL_0b1d;
			}
			case 50:
			{
				goto IL_0b1d;
			}
			case 51:
			{
				goto IL_0b1d;
			}
			case 52:
			{
				goto IL_0b1d;
			}
			case 53:
			{
				goto IL_0b1d;
			}
			case 54:
			{
				goto IL_0b1d;
			}
			case 55:
			{
				goto IL_0b1d;
			}
			case 56:
			{
				goto IL_0b1d;
			}
			case 57:
			{
				goto IL_0b1d;
			}
			case 58:
			{
				goto IL_0add;
			}
			case 59:
			{
				goto IL_04a1;
			}
			case 60:
			{
				goto IL_04fa;
			}
			case 61:
			{
				goto IL_06cc;
			}
			case 62:
			{
				goto IL_0541;
			}
			case 63:
			{
				goto IL_04d0;
			}
			case 64:
			{
				goto IL_0c72;
			}
		}
	}
	{
		int32_t L_5 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_029a;
			}
			case 1:
			{
				goto IL_01f1;
			}
			case 2:
			{
				goto IL_0365;
			}
			case 3:
			{
				goto IL_0a9d;
			}
		}
	}
	{
		goto IL_0d1c;
	}

IL_0151:
	{
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_6, ((int32_t)123))))
		{
			case 0:
			{
				goto IL_0200;
			}
			case 1:
			{
				goto IL_0774;
			}
			case 2:
			{
				goto IL_0229;
			}
			case 3:
			{
				goto IL_04a7;
			}
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)160))))
		{
			goto IL_0d62;
		}
	}
	{
		goto IL_0d1c;
	}

IL_017a:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)8233))))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)8232))))
		{
			goto IL_0b2d;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)8233))))
		{
			goto IL_0b2d;
		}
	}
	{
		goto IL_0d1c;
	}

IL_019d:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)65279))))
		{
			goto IL_0d62;
		}
	}
	{
		int32_t L_12 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)1048576))))
		{
			case 0:
			{
				goto IL_0d04;
			}
			case 1:
			{
				goto IL_0d0a;
			}
			case 2:
			{
				goto IL_0d10;
			}
			case 3:
			{
				goto IL_0d16;
			}
		}
	}
	{
		goto IL_0d1c;
	}

IL_01c9:
	{
		int32_t L_13 = __this->___col_8;
		int32_t L_14 = __this->___tab_size_11;
		int32_t L_15 = __this->___tab_size_11;
		int32_t L_16 = __this->___tab_size_11;
		__this->___col_8 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_13, 1)), L_14))/L_15)), L_16));
		goto IL_0d62;
	}

IL_01f1:
	{
		__this->___tokens_seen_40 = (bool)1;
		int32_t L_17 = V_1;
		int32_t L_18;
		L_18 = Tokenizer_consume_identifier_mA3CDD0FB064E5414BF4F12184E52DC10817382A6(__this, L_17, NULL);
		return L_18;
	}

IL_0200:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_19 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_20 = __this->___current_source_4;
		int32_t L_21 = __this->___ref_line_6;
		int32_t L_22 = __this->___col_8;
		NullCheck(L_19);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_23;
		L_23 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_19, L_20, L_21, L_22, NULL);
		__this->___val_57 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_23);
		return ((int32_t)371);
	}

IL_0229:
	{
		int32_t L_24 = __this->___parsing_string_interpolation_29;
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_0271;
		}
	}
	{
		int32_t L_25 = __this->___parsing_string_interpolation_29;
		__this->___parsing_string_interpolation_29 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* L_26 = __this->___parsing_string_interpolation_quoted_30;
		if (!L_26)
		{
			goto IL_0265;
		}
	}
	{
		Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* L_27 = __this->___parsing_string_interpolation_quoted_30;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Stack_1_get_Count_mFD7C58157E038255E7D2C956BEC020F4835682CA_inline(L_27, Stack_1_get_Count_mFD7C58157E038255E7D2C956BEC020F4835682CA_RuntimeMethod_var);
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_0265;
		}
	}
	{
		Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* L_29 = __this->___parsing_string_interpolation_quoted_30;
		NullCheck(L_29);
		bool L_30;
		L_30 = Stack_1_Pop_m68EAE72219A7C7459E95260B09AB9EAD32F6B27F(L_29, Stack_1_Pop_m68EAE72219A7C7459E95260B09AB9EAD32F6B27F_RuntimeMethod_var);
		V_5 = L_30;
		goto IL_0268;
	}

IL_0265:
	{
		V_5 = (bool)0;
	}

IL_0268:
	{
		bool L_31 = V_5;
		int32_t L_32;
		L_32 = Tokenizer_TokenizeInterpolatedString_m2C1749798ABE09EDC8CFCF84CF74CF658A974AA6(__this, L_31, NULL);
		return L_32;
	}

IL_0271:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_33 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_34 = __this->___current_source_4;
		int32_t L_35 = __this->___ref_line_6;
		int32_t L_36 = __this->___col_8;
		NullCheck(L_33);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_37;
		L_37 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_33, L_34, L_35, L_36, NULL);
		__this->___val_57 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_37);
		return ((int32_t)372);
	}

IL_029a:
	{
		int32_t L_38;
		L_38 = Tokenizer_get_doc_state_m176FCD00A57BE1E90AA05268FE9AC71825968539_inline(__this, NULL);
		if (L_38)
		{
			goto IL_02a9;
		}
	}
	{
		Tokenizer_set_doc_state_mFE7CEE1075A7FCE92074719BBB7629115DF69A0E(__this, 1, NULL);
	}

IL_02a9:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_39 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_40 = __this->___current_source_4;
		int32_t L_41 = __this->___ref_line_6;
		int32_t L_42 = __this->___col_8;
		NullCheck(L_39);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_43;
		L_43 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_39, L_40, L_41, L_42, NULL);
		__this->___val_57 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_43);
		int32_t L_44 = __this->___parsing_block_20;
		if (!L_44)
		{
			goto IL_02dc;
		}
	}
	{
		bool L_45 = __this->___lambda_arguments_parsing_15;
		if (!L_45)
		{
			goto IL_02e2;
		}
	}

IL_02dc:
	{
		return ((int32_t)373);
	}

IL_02e2:
	{
		int32_t L_46;
		L_46 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_3 = L_46;
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) > ((int32_t)((int32_t)44))))
		{
			goto IL_0313;
		}
	}
	{
		int32_t L_48 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract(L_48, ((int32_t)10))))
		{
			case 0:
			{
				goto IL_033c;
			}
			case 1:
			{
				goto IL_033c;
			}
			case 2:
			{
				goto IL_033c;
			}
			case 3:
			{
				goto IL_033c;
			}
		}
	}
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)32))))
		{
			goto IL_033c;
		}
	}
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)44))))
		{
			goto IL_0336;
		}
	}
	{
		goto IL_035f;
	}

IL_0313:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) > ((int32_t)((int32_t)93))))
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)47))))
		{
			goto IL_033c;
		}
	}
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)93))))
		{
			goto IL_0336;
		}
	}
	{
		goto IL_035f;
	}

IL_0324:
	{
		int32_t L_54 = V_3;
		if ((((int32_t)L_54) == ((int32_t)((int32_t)8232))))
		{
			goto IL_033c;
		}
	}
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)8233))))
		{
			goto IL_033c;
		}
	}
	{
		goto IL_035f;
	}

IL_0336:
	{
		return ((int32_t)373);
	}

IL_033c:
	{
		int32_t L_56;
		L_56 = Tokenizer_peek_token_mAF963CC1D86BC58267185B27EED5781642976641(__this, NULL);
		V_3 = L_56;
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)378))))
		{
			goto IL_0353;
		}
	}
	{
		int32_t L_58 = V_3;
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)374)))))
		{
			goto IL_0359;
		}
	}

IL_0353:
	{
		return ((int32_t)373);
	}

IL_0359:
	{
		return ((int32_t)427);
	}

IL_035f:
	{
		return ((int32_t)427);
	}

IL_0365:
	{
		return ((int32_t)374);
	}

IL_036b:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_59 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_60 = __this->___current_source_4;
		int32_t L_61 = __this->___ref_line_6;
		int32_t L_62 = __this->___col_8;
		NullCheck(L_59);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_63;
		L_63 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_59, L_60, L_61, L_62, NULL);
		__this->___val_57 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_63);
		int32_t L_64 = __this->___parsing_block_20;
		if (!L_64)
		{
			goto IL_048f;
		}
	}
	{
		bool L_65 = __this->___lambda_arguments_parsing_15;
		if (L_65)
		{
			goto IL_048f;
		}
	}
	{
		int32_t L_66 = __this->___current_token_10;
		V_7 = L_66;
		int32_t L_67 = V_7;
		if ((((int32_t)L_67) > ((int32_t)((int32_t)324))))
		{
			goto IL_03fa;
		}
	}
	{
		int32_t L_68 = V_7;
		if ((((int32_t)L_68) > ((int32_t)((int32_t)277))))
		{
			goto IL_03d2;
		}
	}
	{
		int32_t L_69 = V_7;
		if ((((int32_t)L_69) == ((int32_t)((int32_t)276))))
		{
			goto IL_0432;
		}
	}
	{
		int32_t L_70 = V_7;
		if ((((int32_t)L_70) == ((int32_t)((int32_t)277))))
		{
			goto IL_0432;
		}
	}
	{
		goto IL_0438;
	}

IL_03d2:
	{
		int32_t L_71 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract(L_71, ((int32_t)289))))
		{
			case 0:
			{
				goto IL_0432;
			}
			case 1:
			{
				goto IL_0432;
			}
			case 2:
			{
				goto IL_0438;
			}
			case 3:
			{
				goto IL_0432;
			}
		}
	}
	{
		int32_t L_72 = V_7;
		if ((((int32_t)L_72) == ((int32_t)((int32_t)324))))
		{
			goto IL_0432;
		}
	}
	{
		goto IL_0438;
	}

IL_03fa:
	{
		int32_t L_73 = V_7;
		if ((((int32_t)L_73) > ((int32_t)((int32_t)335))))
		{
			goto IL_0417;
		}
	}
	{
		int32_t L_74 = V_7;
		if ((((int32_t)L_74) == ((int32_t)((int32_t)329))))
		{
			goto IL_0432;
		}
	}
	{
		int32_t L_75 = V_7;
		if ((((int32_t)L_75) == ((int32_t)((int32_t)335))))
		{
			goto IL_0432;
		}
	}
	{
		goto IL_0438;
	}

IL_0417:
	{
		int32_t L_76 = V_7;
		if ((((int32_t)L_76) == ((int32_t)((int32_t)340))))
		{
			goto IL_0432;
		}
	}
	{
		int32_t L_77 = V_7;
		if ((((int32_t)L_77) == ((int32_t)((int32_t)420))))
		{
			goto IL_0432;
		}
	}
	{
		int32_t L_78 = V_7;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)422)))))
		{
			goto IL_0438;
		}
	}

IL_0432:
	{
		return ((int32_t)375);
	}

IL_0438:
	{
		int32_t L_79;
		L_79 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_6 = L_79;
		int32_t L_80 = V_6;
		if ((((int32_t)L_80) > ((int32_t)((int32_t)39))))
		{
			goto IL_0454;
		}
	}
	{
		int32_t L_81 = V_6;
		if ((((int32_t)L_81) == ((int32_t)((int32_t)34))))
		{
			goto IL_0466;
		}
	}
	{
		int32_t L_82 = V_6;
		if ((((int32_t)L_82) == ((int32_t)((int32_t)39))))
		{
			goto IL_0466;
		}
	}
	{
		goto IL_046c;
	}

IL_0454:
	{
		int32_t L_83 = V_6;
		if ((((int32_t)L_83) == ((int32_t)((int32_t)40))))
		{
			goto IL_0466;
		}
	}
	{
		int32_t L_84 = V_6;
		if ((((int32_t)L_84) == ((int32_t)((int32_t)48))))
		{
			goto IL_0466;
		}
	}
	{
		int32_t L_85 = V_6;
		if ((!(((uint32_t)L_85) == ((uint32_t)((int32_t)49)))))
		{
			goto IL_046c;
		}
	}

IL_0466:
	{
		return ((int32_t)375);
	}

IL_046c:
	{
		__this->___lambda_arguments_parsing_15 = (bool)1;
		Tokenizer_PushPosition_mB7AD2611F8561B13DCEF78328C2A8F2BD5B20DFC(__this, NULL);
		int32_t L_86;
		L_86 = Tokenizer_TokenizeOpenParens_mDE3FE2D43F94CB118459AF969BD923719C76CCB4(__this, NULL);
		V_0 = L_86;
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		__this->___lambda_arguments_parsing_15 = (bool)0;
		int32_t L_87 = V_0;
		return L_87;
	}

IL_048f:
	{
		return ((int32_t)375);
	}

IL_0495:
	{
		return ((int32_t)376);
	}

IL_049b:
	{
		return ((int32_t)378);
	}

IL_04a1:
	{
		return ((int32_t)380);
	}

IL_04a7:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_88 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_89 = __this->___current_source_4;
		int32_t L_90 = __this->___ref_line_6;
		int32_t L_91 = __this->___col_8;
		NullCheck(L_88);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_92;
		L_92 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_88, L_89, L_90, L_91, NULL);
		__this->___val_57 = L_92;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_92);
		return ((int32_t)381);
	}

IL_04d0:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_93 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_94 = __this->___current_source_4;
		int32_t L_95 = __this->___ref_line_6;
		int32_t L_96 = __this->___col_8;
		NullCheck(L_93);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_97;
		L_97 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_93, L_94, L_95, L_96, NULL);
		__this->___val_57 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_97);
		int32_t L_98;
		L_98 = Tokenizer_TokenizePossibleNullableType_m814460423EEA49AB219E2626582BF78D762FFCBF(__this, NULL);
		return L_98;
	}

IL_04fa:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_99 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_100 = __this->___current_source_4;
		int32_t L_101 = __this->___ref_line_6;
		int32_t L_102 = __this->___col_8;
		NullCheck(L_99);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_103;
		L_103 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_99, L_100, L_101, L_102, NULL);
		__this->___val_57 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_103);
		int32_t L_104 = __this->___parsing_generic_less_than_17;
		V_7 = L_104;
		int32_t L_105 = V_7;
		__this->___parsing_generic_less_than_17 = ((int32_t)il2cpp_codegen_add(L_105, 1));
		int32_t L_106 = V_7;
		if ((((int32_t)L_106) <= ((int32_t)0)))
		{
			goto IL_053a;
		}
	}
	{
		return ((int32_t)418);
	}

IL_053a:
	{
		int32_t L_107;
		L_107 = Tokenizer_TokenizeLessThan_m88E1262780CFF110C29B2B169BEE2ADE5765634F(__this, NULL);
		return L_107;
	}

IL_0541:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_108 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_109 = __this->___current_source_4;
		int32_t L_110 = __this->___ref_line_6;
		int32_t L_111 = __this->___col_8;
		NullCheck(L_108);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_112;
		L_112 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_108, L_109, L_110, L_111, NULL);
		__this->___val_57 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_112);
		int32_t L_113;
		L_113 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_113;
		int32_t L_114 = V_0;
		if ((!(((uint32_t)L_114) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_057d;
		}
	}
	{
		int32_t L_115;
		L_115 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)401);
	}

IL_057d:
	{
		int32_t L_116 = __this->___parsing_generic_less_than_17;
		if ((((int32_t)L_116) > ((int32_t)1)))
		{
			goto IL_0594;
		}
	}
	{
		int32_t L_117 = __this->___parsing_generic_less_than_17;
		if ((!(((uint32_t)L_117) == ((uint32_t)1))))
		{
			goto IL_05a8;
		}
	}
	{
		int32_t L_118 = V_0;
		if ((((int32_t)L_118) == ((int32_t)((int32_t)62))))
		{
			goto IL_05a8;
		}
	}

IL_0594:
	{
		int32_t L_119 = __this->___parsing_generic_less_than_17;
		__this->___parsing_generic_less_than_17 = ((int32_t)il2cpp_codegen_subtract(L_119, 1));
		return ((int32_t)420);
	}

IL_05a8:
	{
		int32_t L_120 = V_0;
		if ((!(((uint32_t)L_120) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_05d3;
		}
	}
	{
		int32_t L_121;
		L_121 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_122;
		L_122 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_122;
		int32_t L_123 = V_0;
		if ((!(((uint32_t)L_123) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_05cd;
		}
	}
	{
		int32_t L_124;
		L_124 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)412);
	}

IL_05cd:
	{
		return ((int32_t)399);
	}

IL_05d3:
	{
		return ((int32_t)387);
	}

IL_05d9:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_125 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_126 = __this->___current_source_4;
		int32_t L_127 = __this->___ref_line_6;
		int32_t L_128 = __this->___col_8;
		NullCheck(L_125);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_129;
		L_129 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_125, L_126, L_127, L_128, NULL);
		__this->___val_57 = L_129;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_129);
		int32_t L_130;
		L_130 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_130;
		int32_t L_131 = V_0;
		if ((!(((uint32_t)L_131) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0610;
		}
	}
	{
		V_0 = ((int32_t)396);
		goto IL_0623;
	}

IL_0610:
	{
		int32_t L_132 = V_0;
		if ((!(((uint32_t)L_132) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_061d;
		}
	}
	{
		V_0 = ((int32_t)409);
		goto IL_0623;
	}

IL_061d:
	{
		return ((int32_t)382);
	}

IL_0623:
	{
		int32_t L_133;
		L_133 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_134 = V_0;
		return L_134;
	}

IL_062c:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_135 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_136 = __this->___current_source_4;
		int32_t L_137 = __this->___ref_line_6;
		int32_t L_138 = __this->___col_8;
		NullCheck(L_135);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_139;
		L_139 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_135, L_136, L_137, L_138, NULL);
		__this->___val_57 = L_139;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_139);
		int32_t L_140;
		L_140 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_140;
		int32_t L_141 = V_0;
		if ((!(((uint32_t)L_141) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0663;
		}
	}
	{
		V_0 = ((int32_t)397);
		goto IL_0683;
	}

IL_0663:
	{
		int32_t L_142 = V_0;
		if ((!(((uint32_t)L_142) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_0670;
		}
	}
	{
		V_0 = ((int32_t)410);
		goto IL_0683;
	}

IL_0670:
	{
		int32_t L_143 = V_0;
		if ((!(((uint32_t)L_143) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_067d;
		}
	}
	{
		V_0 = ((int32_t)416);
		goto IL_0683;
	}

IL_067d:
	{
		return ((int32_t)383);
	}

IL_0683:
	{
		int32_t L_144;
		L_144 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_145 = V_0;
		return L_145;
	}

IL_068c:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_146 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_147 = __this->___current_source_4;
		int32_t L_148 = __this->___ref_line_6;
		int32_t L_149 = __this->___col_8;
		NullCheck(L_146);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_150;
		L_150 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_146, L_147, L_148, L_149, NULL);
		__this->___val_57 = L_150;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_150);
		int32_t L_151;
		L_151 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_151) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_06c6;
		}
	}
	{
		int32_t L_152;
		L_152 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)403);
	}

IL_06c6:
	{
		return ((int32_t)384);
	}

IL_06cc:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_153 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_154 = __this->___current_source_4;
		int32_t L_155 = __this->___ref_line_6;
		int32_t L_156 = __this->___col_8;
		NullCheck(L_153);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_157;
		L_157 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_153, L_154, L_155, L_156, NULL);
		__this->___val_57 = L_157;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_157);
		int32_t L_158;
		L_158 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_158;
		int32_t L_159 = V_0;
		if ((!(((uint32_t)L_159) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_0708;
		}
	}
	{
		int32_t L_160;
		L_160 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)402);
	}

IL_0708:
	{
		int32_t L_161 = V_0;
		if ((!(((uint32_t)L_161) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_071a;
		}
	}
	{
		int32_t L_162;
		L_162 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)343);
	}

IL_071a:
	{
		return ((int32_t)385);
	}

IL_0720:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_163 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_164 = __this->___current_source_4;
		int32_t L_165 = __this->___ref_line_6;
		int32_t L_166 = __this->___col_8;
		NullCheck(L_163);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_167;
		L_167 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_163, L_164, L_165, L_166, NULL);
		__this->___val_57 = L_167;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_167);
		int32_t L_168;
		L_168 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_168;
		int32_t L_169 = V_0;
		if ((!(((uint32_t)L_169) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_075c;
		}
	}
	{
		int32_t L_170;
		L_170 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)404);
	}

IL_075c:
	{
		int32_t L_171 = V_0;
		if ((!(((uint32_t)L_171) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_076e;
		}
	}
	{
		int32_t L_172;
		L_172 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)413);
	}

IL_076e:
	{
		return ((int32_t)388);
	}

IL_0774:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_173 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_174 = __this->___current_source_4;
		int32_t L_175 = __this->___ref_line_6;
		int32_t L_176 = __this->___col_8;
		NullCheck(L_173);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_177;
		L_177 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_173, L_174, L_175, L_176, NULL);
		__this->___val_57 = L_177;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_177);
		int32_t L_178;
		L_178 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_178;
		int32_t L_179 = V_0;
		if ((!(((uint32_t)L_179) == ((uint32_t)((int32_t)124)))))
		{
			goto IL_07b0;
		}
	}
	{
		int32_t L_180;
		L_180 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)405);
	}

IL_07b0:
	{
		int32_t L_181 = V_0;
		if ((!(((uint32_t)L_181) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_07c2;
		}
	}
	{
		int32_t L_182;
		L_182 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)415);
	}

IL_07c2:
	{
		return ((int32_t)389);
	}

IL_07c8:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_183 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_184 = __this->___current_source_4;
		int32_t L_185 = __this->___ref_line_6;
		int32_t L_186 = __this->___col_8;
		NullCheck(L_183);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_187;
		L_187 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_183, L_184, L_185, L_186, NULL);
		__this->___val_57 = L_187;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_187);
		int32_t L_188;
		L_188 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_188) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_0802;
		}
	}
	{
		int32_t L_189;
		L_189 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)406);
	}

IL_0802:
	{
		return ((int32_t)390);
	}

IL_0808:
	{
		int32_t L_190;
		L_190 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_190;
		int32_t L_191 = V_0;
		if ((!(((uint32_t)L_191) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_0844;
		}
	}
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_192 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_193 = __this->___current_source_4;
		int32_t L_194 = __this->___ref_line_6;
		int32_t L_195 = __this->___col_8;
		NullCheck(L_192);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_196;
		L_196 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_192, L_193, L_194, L_195, NULL);
		__this->___val_57 = L_196;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_196);
		int32_t L_197;
		L_197 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)407);
	}

IL_0844:
	{
		int32_t L_198 = V_0;
		if ((!(((uint32_t)L_198) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_090a;
		}
	}
	{
		int32_t L_199 = __this->___parsing_string_interpolation_29;
		if ((((int32_t)L_199) <= ((int32_t)0)))
		{
			goto IL_0875;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_200 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_201;
		L_201 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_200);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_200, ((int32_t)8077), L_201, _stringLiteralCE5DCE56D7A802E4581ED7F382622661E6A249BF, NULL);
		goto IL_0229;
	}

IL_0875:
	{
		int32_t L_202;
		L_202 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		bool L_203 = __this->___doc_processing_18;
		if (!L_203)
		{
			goto IL_08e3;
		}
	}
	{
		int32_t L_204;
		L_204 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_204) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_08ce;
		}
	}
	{
		int32_t L_205;
		L_205 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_206;
		L_206 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		int32_t L_207 = L_206;
		V_0 = L_207;
		if ((((int32_t)L_207) == ((int32_t)((int32_t)47))))
		{
			goto IL_08e3;
		}
	}
	{
		int32_t L_208;
		L_208 = Tokenizer_get_doc_state_m176FCD00A57BE1E90AA05268FE9AC71825968539_inline(__this, NULL);
		if (L_208)
		{
			goto IL_08b1;
		}
	}
	{
		Tokenizer_handle_one_line_xml_comment_mDD2FF245BF39EA48A01A9539B9BBC4855EE27881(__this, NULL);
		goto IL_08e3;
	}

IL_08b1:
	{
		int32_t L_209;
		L_209 = Tokenizer_get_doc_state_m176FCD00A57BE1E90AA05268FE9AC71825968539_inline(__this, NULL);
		if ((!(((uint32_t)L_209) == ((uint32_t)1))))
		{
			goto IL_08e3;
		}
	}
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_210;
		L_210 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_211;
		L_211 = Location_op_Subtraction_mC44C585EA311B1A2A2D7A1AEF1A681270C470D85(L_210, 3, NULL);
		Tokenizer_WarningMisplacedComment_m2783E2511B56B7B6A2EED57524768E9F9EA7B1D9(__this, L_211, NULL);
		goto IL_08e3;
	}

IL_08ce:
	{
		StringBuilder_t* L_212 = __this->___xml_comment_buffer_38;
		NullCheck(L_212);
		int32_t L_213;
		L_213 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_212, NULL);
		if ((((int32_t)L_213) <= ((int32_t)0)))
		{
			goto IL_08e3;
		}
	}
	{
		Tokenizer_set_doc_state_mFE7CEE1075A7FCE92074719BBB7629115DF69A0E(__this, 1, NULL);
	}

IL_08e3:
	{
		Tokenizer_ReadToEndOfLine_mD43187E9D07BBB288567FAB6723840FA9A9F5256(__this, NULL);
		bool L_214 = __this->___any_token_seen_42;
		bool L_215 = __this->___tokens_seen_40;
		__this->___any_token_seen_42 = (bool)((int32_t)((int32_t)L_214|(int32_t)L_215));
		__this->___tokens_seen_40 = (bool)0;
		V_2 = (bool)0;
		goto IL_0d62;
	}

IL_090a:
	{
		int32_t L_216 = V_0;
		if ((!(((uint32_t)L_216) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0a34;
		}
	}
	{
		int32_t L_217;
		L_217 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_8 = (bool)0;
		bool L_218 = __this->___doc_processing_18;
		if (!L_218)
		{
			goto IL_0973;
		}
	}
	{
		int32_t L_219;
		L_219 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_219) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0973;
		}
	}
	{
		int32_t L_220;
		L_220 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_221;
		L_221 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_221) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_094b;
		}
	}
	{
		int32_t L_222;
		L_222 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		goto IL_0d62;
	}

IL_094b:
	{
		int32_t L_223;
		L_223 = Tokenizer_get_doc_state_m176FCD00A57BE1E90AA05268FE9AC71825968539_inline(__this, NULL);
		if (L_223)
		{
			goto IL_0958;
		}
	}
	{
		V_8 = (bool)1;
		goto IL_0973;
	}

IL_0958:
	{
		int32_t L_224;
		L_224 = Tokenizer_get_doc_state_m176FCD00A57BE1E90AA05268FE9AC71825968539_inline(__this, NULL);
		if ((!(((uint32_t)L_224) == ((uint32_t)1))))
		{
			goto IL_0973;
		}
	}
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_225;
		L_225 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_226;
		L_226 = Location_op_Subtraction_mC44C585EA311B1A2A2D7A1AEF1A681270C470D85(L_225, 2, NULL);
		Tokenizer_WarningMisplacedComment_m2783E2511B56B7B6A2EED57524768E9F9EA7B1D9(__this, L_226, NULL);
	}

IL_0973:
	{
		V_9 = 0;
		bool L_227 = V_8;
		if (!L_227)
		{
			goto IL_09f7;
		}
	}
	{
		StringBuilder_t* L_228 = __this->___xml_comment_buffer_38;
		NullCheck(L_228);
		int32_t L_229;
		L_229 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_228, NULL);
		V_9 = L_229;
		StringBuilder_t* L_230 = __this->___xml_comment_buffer_38;
		String_t* L_231;
		L_231 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_230);
		StringBuilder_t* L_232;
		L_232 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_230, L_231, NULL);
		goto IL_09f7;
	}

IL_099a:
	{
		int32_t L_233 = V_0;
		if ((!(((uint32_t)L_233) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_09b4;
		}
	}
	{
		int32_t L_234;
		L_234 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_234) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_09b4;
		}
	}
	{
		int32_t L_235;
		L_235 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_2 = (bool)1;
		goto IL_0a02;
	}

IL_09b4:
	{
		bool L_236 = V_8;
		if (!L_236)
		{
			goto IL_09c6;
		}
	}
	{
		StringBuilder_t* L_237 = __this->___xml_comment_buffer_38;
		int32_t L_238 = V_0;
		NullCheck(L_237);
		StringBuilder_t* L_239;
		L_239 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_237, ((int32_t)(uint16_t)L_238), NULL);
	}

IL_09c6:
	{
		int32_t L_240 = V_0;
		if ((((int32_t)L_240) == ((int32_t)((int32_t)10))))
		{
			goto IL_09db;
		}
	}
	{
		int32_t L_241 = V_0;
		if ((((int32_t)L_241) == ((int32_t)((int32_t)8232))))
		{
			goto IL_09db;
		}
	}
	{
		int32_t L_242 = V_0;
		if ((!(((uint32_t)L_242) == ((uint32_t)((int32_t)8233)))))
		{
			goto IL_09f7;
		}
	}

IL_09db:
	{
		bool L_243 = __this->___any_token_seen_42;
		bool L_244 = __this->___tokens_seen_40;
		__this->___any_token_seen_42 = (bool)((int32_t)((int32_t)L_243|(int32_t)L_244));
		__this->___tokens_seen_40 = (bool)0;
		V_2 = (bool)0;
	}

IL_09f7:
	{
		int32_t L_245;
		L_245 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_246 = L_245;
		V_0 = L_246;
		if ((!(((uint32_t)L_246) == ((uint32_t)(-1)))))
		{
			goto IL_099a;
		}
	}

IL_0a02:
	{
		bool L_247 = V_2;
		if (L_247)
		{
			goto IL_0a20;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_248 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_249;
		L_249 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_248);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_248, ((int32_t)1035), L_249, _stringLiteralC8372A5805DAD56DC02FB5A1D6C8824A7A916847, NULL);
	}

IL_0a20:
	{
		bool L_250 = V_8;
		if (!L_250)
		{
			goto IL_0d62;
		}
	}
	{
		int32_t L_251 = V_9;
		Tokenizer_update_formatted_doc_comment_m72E942B5271ECAFA44A85920596E644AFE0681E8(__this, L_251, NULL);
		goto IL_0d62;
	}

IL_0a34:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_252 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_253 = __this->___current_source_4;
		int32_t L_254 = __this->___ref_line_6;
		int32_t L_255 = __this->___col_8;
		NullCheck(L_252);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_256;
		L_256 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_252, L_253, L_254, L_255, NULL);
		__this->___val_57 = L_256;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_256);
		return ((int32_t)392);
	}

IL_0a5d:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_257 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_258 = __this->___current_source_4;
		int32_t L_259 = __this->___ref_line_6;
		int32_t L_260 = __this->___col_8;
		NullCheck(L_257);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_261;
		L_261 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_257, L_258, L_259, L_260, NULL);
		__this->___val_57 = L_261;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_261);
		int32_t L_262;
		L_262 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_262) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_0a97;
		}
	}
	{
		int32_t L_263;
		L_263 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)408);
	}

IL_0a97:
	{
		return ((int32_t)391);
	}

IL_0a9d:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_264 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_265 = __this->___current_source_4;
		int32_t L_266 = __this->___ref_line_6;
		int32_t L_267 = __this->___col_8;
		NullCheck(L_264);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_268;
		L_268 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_264, L_265, L_266, L_267, NULL);
		__this->___val_57 = L_268;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_268);
		int32_t L_269;
		L_269 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_269) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_0ad7;
		}
	}
	{
		int32_t L_270;
		L_270 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)414);
	}

IL_0ad7:
	{
		return ((int32_t)393);
	}

IL_0add:
	{
		LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* L_271 = __this->___ltb_19;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_272 = __this->___current_source_4;
		int32_t L_273 = __this->___ref_line_6;
		int32_t L_274 = __this->___col_8;
		NullCheck(L_271);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_275;
		L_275 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(L_271, L_272, L_273, L_274, NULL);
		__this->___val_57 = L_275;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_275);
		int32_t L_276;
		L_276 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_276) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0b17;
		}
	}
	{
		int32_t L_277;
		L_277 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)395);
	}

IL_0b17:
	{
		return ((int32_t)379);
	}

IL_0b1d:
	{
		__this->___tokens_seen_40 = (bool)1;
		int32_t L_278 = V_1;
		int32_t L_279;
		L_279 = Tokenizer_is_number_m129EBBC19E912D73534F74BBC251E3FE3FD14EBE(__this, L_278, (bool)0, NULL);
		return L_279;
	}

IL_0b2d:
	{
		bool L_280 = __this->___any_token_seen_42;
		bool L_281 = __this->___tokens_seen_40;
		__this->___any_token_seen_42 = (bool)((int32_t)((int32_t)L_280|(int32_t)L_281));
		__this->___tokens_seen_40 = (bool)0;
		V_2 = (bool)0;
		goto IL_0d62;
	}

IL_0b4e:
	{
		__this->___tokens_seen_40 = (bool)1;
		int32_t L_282;
		L_282 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_282;
		int32_t L_283 = V_0;
		if ((((int32_t)L_283) < ((int32_t)((int32_t)48))))
		{
			goto IL_0b6f;
		}
	}
	{
		int32_t L_284 = V_0;
		if ((((int32_t)L_284) > ((int32_t)((int32_t)57))))
		{
			goto IL_0b6f;
		}
	}
	{
		int32_t L_285 = V_1;
		int32_t L_286;
		L_286 = Tokenizer_is_number_m129EBBC19E912D73534F74BBC251E3FE3FD14EBE(__this, L_285, (bool)1, NULL);
		return L_286;
	}

IL_0b6f:
	{
		return ((int32_t)377);
	}

IL_0b75:
	{
		bool L_287 = __this->___tokens_seen_40;
		bool L_288 = V_2;
		if (!((int32_t)((int32_t)L_287|(int32_t)L_288)))
		{
			goto IL_0b8b;
		}
	}
	{
		Tokenizer_Eror_WrongPreprocessorLocation_m9663849FA3CAA93F1C91E40ECB761E9A64910A53(__this, NULL);
		return ((int32_t)259);
	}

IL_0b8b:
	{
		bool L_289;
		L_289 = Tokenizer_ParsePreprocessingDirective_m073C87279D8824C4985AE99E6AB3693BA9D2B37C(__this, (bool)1, NULL);
		if (L_289)
		{
			goto IL_0d62;
		}
	}
	{
		V_4 = (bool)0;
		goto IL_0be8;
	}

IL_0b9c:
	{
		int32_t L_290 = __this->___col_8;
		if ((!(((uint32_t)L_290) == ((uint32_t)1))))
		{
			goto IL_0baa;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_0bae;
	}

IL_0baa:
	{
		bool L_291 = V_4;
		if (!L_291)
		{
			goto IL_0be8;
		}
	}

IL_0bae:
	{
		int32_t L_292 = V_1;
		if ((((int32_t)L_292) == ((int32_t)((int32_t)32))))
		{
			goto IL_0be8;
		}
	}
	{
		int32_t L_293 = V_1;
		if ((((int32_t)L_293) == ((int32_t)((int32_t)9))))
		{
			goto IL_0be8;
		}
	}
	{
		int32_t L_294 = V_1;
		if ((((int32_t)L_294) == ((int32_t)((int32_t)10))))
		{
			goto IL_0be8;
		}
	}
	{
		int32_t L_295 = V_1;
		if ((((int32_t)L_295) == ((int32_t)((int32_t)12))))
		{
			goto IL_0be8;
		}
	}
	{
		int32_t L_296 = V_1;
		if ((((int32_t)L_296) == ((int32_t)((int32_t)11))))
		{
			goto IL_0be8;
		}
	}
	{
		int32_t L_297 = V_1;
		if ((((int32_t)L_297) == ((int32_t)((int32_t)8232))))
		{
			goto IL_0be8;
		}
	}
	{
		int32_t L_298 = V_1;
		if ((((int32_t)L_298) == ((int32_t)((int32_t)8233))))
		{
			goto IL_0be8;
		}
	}
	{
		int32_t L_299 = V_1;
		if ((!(((uint32_t)L_299) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0be5;
		}
	}
	{
		bool L_300;
		L_300 = Tokenizer_ParsePreprocessingDirective_m073C87279D8824C4985AE99E6AB3693BA9D2B37C(__this, (bool)0, NULL);
		if (L_300)
		{
			goto IL_0bf3;
		}
	}

IL_0be5:
	{
		V_4 = (bool)0;
	}

IL_0be8:
	{
		int32_t L_301;
		L_301 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_302 = L_301;
		V_1 = L_302;
		if ((!(((uint32_t)L_302) == ((uint32_t)(-1)))))
		{
			goto IL_0b9c;
		}
	}

IL_0bf3:
	{
		int32_t L_303 = V_1;
		if ((((int32_t)L_303) == ((int32_t)(-1))))
		{
			goto IL_0c03;
		}
	}
	{
		__this->___tokens_seen_40 = (bool)0;
		goto IL_0d62;
	}

IL_0c03:
	{
		return ((int32_t)257);
	}

IL_0c09:
	{
		int32_t L_304 = __this->___parsing_string_interpolation_29;
		if ((((int32_t)L_304) <= ((int32_t)0)))
		{
			goto IL_0c63;
		}
	}
	{
		bool L_305;
		L_305 = Tokenizer_ScanClosingInterpolationBrace_m25817CECFB17117025C6F3ECAF1B7F33A8F9542D(__this, NULL);
		if (L_305)
		{
			goto IL_0c63;
		}
	}
	{
		__this->___parsing_string_interpolation_29 = 0;
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_306 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_307;
		L_307 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_306);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_306, ((int32_t)8076), L_307, _stringLiteralDB2D19A54B5DA10084F30BE52A1FE0F177622877, NULL);
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_308 = __this->___context_2;
		NullCheck(L_308);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_309;
		L_309 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_308, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_310;
		L_310 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F* L_311 = (StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F*)il2cpp_codegen_object_new(StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F_il2cpp_TypeInfo_var);
		NullCheck(L_311);
		StringLiteral__ctor_m48BD6CE9DA8881B4E31CD1304BA9B3D7DE752A6B(L_311, L_309, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_310, NULL);
		__this->___val_57 = L_311;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_311);
		return ((int32_t)367);
	}

IL_0c63:
	{
		int32_t L_312;
		L_312 = Tokenizer_consume_string_m3EC30B0C354899F5D6E08CC0953F7E12BBFDF199(__this, (bool)0, NULL);
		return L_312;
	}

IL_0c6b:
	{
		int32_t L_313;
		L_313 = Tokenizer_TokenizeBackslash_m77AFC13C8F2AF1D856AC1A48241B8158F9ED090C(__this, NULL);
		return L_313;
	}

IL_0c72:
	{
		int32_t L_314;
		L_314 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_1 = L_314;
		int32_t L_315 = V_1;
		if ((!(((uint32_t)L_315) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0c8d;
		}
	}
	{
		__this->___tokens_seen_40 = (bool)1;
		int32_t L_316;
		L_316 = Tokenizer_consume_string_m3EC30B0C354899F5D6E08CC0953F7E12BBFDF199(__this, (bool)1, NULL);
		return L_316;
	}

IL_0c8d:
	{
		int32_t L_317 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_318;
		L_318 = Tokenizer_is_identifier_start_character_m7260FDF47153E1BA05155D2BA5BE95D786F09FEE(L_317, NULL);
		if (!L_318)
		{
			goto IL_0c9e;
		}
	}
	{
		int32_t L_319 = V_1;
		int32_t L_320;
		L_320 = Tokenizer_consume_identifier_mB55320A0CCAE29FD6121CAEC215A46A8B55336E2(__this, L_319, (bool)1, NULL);
		return L_320;
	}

IL_0c9e:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_321 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_322;
		L_322 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_321);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_321, ((int32_t)1646), L_322, _stringLiteral11749F9AE3825EC03111BADE7C63EFF333EC16A8, NULL);
		return ((int32_t)259);
	}

IL_0cbf:
	{
		int32_t L_323;
		L_323 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_7 = L_323;
		int32_t L_324 = V_7;
		if ((((int32_t)L_324) == ((int32_t)((int32_t)34))))
		{
			goto IL_0cd5;
		}
	}
	{
		int32_t L_325 = V_7;
		if ((((int32_t)L_325) == ((int32_t)((int32_t)64))))
		{
			goto IL_0ce4;
		}
	}
	{
		goto IL_0d1c;
	}

IL_0cd5:
	{
		int32_t L_326;
		L_326 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_327;
		L_327 = Tokenizer_TokenizeInterpolatedString_m2C1749798ABE09EDC8CFCF84CF74CF658A974AA6(__this, (bool)0, NULL);
		return L_327;
	}

IL_0ce4:
	{
		int32_t L_328;
		L_328 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_329;
		L_329 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_329) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0d1c;
		}
	}
	{
		int32_t L_330;
		L_330 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_331;
		L_331 = Tokenizer_TokenizeInterpolatedString_m2C1749798ABE09EDC8CFCF84CF74CF658A974AA6(__this, (bool)1, NULL);
		return L_331;
	}

IL_0d04:
	{
		return ((int32_t)428);
	}

IL_0d0a:
	{
		return ((int32_t)429);
	}

IL_0d10:
	{
		return ((int32_t)430);
	}

IL_0d16:
	{
		return ((int32_t)431);
	}

IL_0d1c:
	{
		int32_t L_332 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		bool L_333;
		L_333 = Tokenizer_is_identifier_start_character_m7260FDF47153E1BA05155D2BA5BE95D786F09FEE(L_332, NULL);
		if (!L_333)
		{
			goto IL_0d33;
		}
	}
	{
		__this->___tokens_seen_40 = (bool)1;
		int32_t L_334 = V_1;
		int32_t L_335;
		L_335 = Tokenizer_consume_identifier_mA3CDD0FB064E5414BF4F12184E52DC10817382A6(__this, L_334, NULL);
		return L_335;
	}

IL_0d33:
	{
		int32_t L_336 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_337;
		L_337 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(((int32_t)(uint16_t)L_336), NULL);
		if (L_337)
		{
			goto IL_0d62;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_338 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_339;
		L_339 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		int32_t L_340 = V_1;
		V_10 = ((int32_t)(uint16_t)L_340);
		String_t* L_341;
		L_341 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_10), NULL);
		NullCheck(L_338);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_338, ((int32_t)1056), L_339, _stringLiteral4DE499DDD56B58043006A96AAA44ED6015EDF4EE, L_341, NULL);
	}

IL_0d62:
	{
		int32_t L_342;
		L_342 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_343 = L_342;
		V_1 = L_343;
		if ((!(((uint32_t)L_343) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		bool L_344 = __this->___CompleteOnEOF_55;
		if (!L_344)
		{
			goto IL_0d93;
		}
	}
	{
		bool L_345 = __this->___generated_41;
		if (!L_345)
		{
			goto IL_0d86;
		}
	}
	{
		return ((int32_t)433);
	}

IL_0d86:
	{
		__this->___generated_41 = (bool)1;
		return ((int32_t)432);
	}

IL_0d93:
	{
		return ((int32_t)257);
	}
}
// System.Int32 Mono.CSharp.Tokenizer::TokenizeBackslash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizeBackslash_m77AFC13C8F2AF1D856AC1A48241B8158F9ED090C (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharLiteral_t1E6A7CFEE9EF888E93353573B577BBEA02B90559_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00F89CB2115A05D26324E757A0EDE36DEA79C83D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17AC789B98C1E047CF7A7410585764A587BCAABC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51BD44FCF32B791170C3F451E314F3366254FC8F);
		s_Il2CppMethodInitialized = true;
	}
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_0;
		L_0 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_1 = L_1;
		__this->___tokens_seen_40 = (bool)1;
		int32_t L_2 = V_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_004f;
		}
	}
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_3 = __this->___context_2;
		NullCheck(L_3);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_4;
		L_4 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_3, NULL);
		int32_t L_5 = V_1;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_6 = V_0;
		CharLiteral_t1E6A7CFEE9EF888E93353573B577BBEA02B90559* L_7 = (CharLiteral_t1E6A7CFEE9EF888E93353573B577BBEA02B90559*)il2cpp_codegen_object_new(CharLiteral_t1E6A7CFEE9EF888E93353573B577BBEA02B90559_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		CharLiteral__ctor_m8347068CBC7024E2E1C5AB68CDB9A97C004297B7(L_7, L_4, ((int32_t)(uint16_t)L_5), L_6, NULL);
		__this->___val_57 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_7);
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_8 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_9 = V_0;
		NullCheck(L_8);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_8, ((int32_t)1011), L_9, _stringLiteral17AC789B98C1E047CF7A7410585764A587BCAABC, NULL);
		return ((int32_t)421);
	}

IL_004f:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)10))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)8232))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)8233)))))
		{
			goto IL_0080;
		}
	}

IL_0064:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_13 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_14 = V_0;
		NullCheck(L_13);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_13, ((int32_t)1010), L_14, _stringLiteral00F89CB2115A05D26324E757A0EDE36DEA79C83D, NULL);
		return ((int32_t)259);
	}

IL_0080:
	{
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = Tokenizer_escape_mC78396709ADE0CF7C4CC33402C0C8BEDA6B52B75(__this, L_15, (&V_2), NULL);
		V_1 = L_16;
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_0094;
		}
	}
	{
		return ((int32_t)259);
	}

IL_0094:
	{
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_009d;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_19 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tokenizer_TokenizeBackslash_m77AFC13C8F2AF1D856AC1A48241B8158F9ED090C_RuntimeMethod_var)));
	}

IL_009d:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_20 = __this->___context_2;
		NullCheck(L_20);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_21;
		L_21 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_20, NULL);
		int32_t L_22 = V_1;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_23 = V_0;
		CharLiteral_t1E6A7CFEE9EF888E93353573B577BBEA02B90559* L_24 = (CharLiteral_t1E6A7CFEE9EF888E93353573B577BBEA02B90559*)il2cpp_codegen_object_new(CharLiteral_t1E6A7CFEE9EF888E93353573B577BBEA02B90559_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		CharLiteral__ctor_m8347068CBC7024E2E1C5AB68CDB9A97C004297B7(L_24, L_21, ((int32_t)(uint16_t)L_22), L_23, NULL);
		V_3 = L_24;
		RuntimeObject* L_25 = V_3;
		__this->___val_57 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_25);
		int32_t L_26;
		L_26 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_1 = L_26;
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)39))))
		{
			goto IL_0101;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_28 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_29 = V_0;
		NullCheck(L_28);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_28, ((int32_t)1012), L_29, _stringLiteral51BD44FCF32B791170C3F451E314F3366254FC8F, NULL);
		goto IL_00f6;
	}

IL_00dc:
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)10))))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)39))))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)8232))))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)8233))))
		{
			goto IL_0101;
		}
	}

IL_00f6:
	{
		int32_t L_34;
		L_34 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_35 = L_34;
		V_1 = L_35;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00dc;
		}
	}

IL_0101:
	{
		return ((int32_t)421);
	}
}
// System.Int32 Mono.CSharp.Tokenizer::TokenizeLessThan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizeLessThan_m88E1262780CFF110C29B2B169BEE2ADE5765634F (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Tokenizer_PushPosition_mB7AD2611F8561B13DCEF78328C2A8F2BD5B20DFC(__this, NULL);
		V_1 = 0;
		bool L_0;
		L_0 = Tokenizer_parse_less_than_mED4B484E7F99EA932B9877CCC7621069F7807A64(__this, (&V_1), NULL);
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		bool L_1 = __this->___parsing_generic_declaration_23;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		bool L_2 = __this->___parsing_generic_declaration_doc_24;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3;
		L_3 = Tokenizer_token_m65EC6B130F76C4E73F64831DD51AD679FC42FAD2(__this, NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)377))))
		{
			goto IL_0037;
		}
	}

IL_002f:
	{
		V_0 = ((int32_t)419);
		goto IL_0059;
	}

IL_0037:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		__this->___val_57 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_7);
		Tokenizer_DiscardPosition_mC96BF22E1E9339ECF8D2BF0B0506E53A0EF871E0(__this, NULL);
		return ((int32_t)425);
	}

IL_0053:
	{
		V_0 = ((int32_t)418);
	}

IL_0059:
	{
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		int32_t L_8 = V_0;
		return L_8;
	}

IL_0061:
	{
		Tokenizer_PopPosition_m107AFA805F0509D8F77243FF9EDF7DA53FBC319C(__this, NULL);
		__this->___parsing_generic_less_than_17 = 0;
		int32_t L_9;
		L_9 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_11;
		L_11 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		int32_t L_12;
		L_12 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_14;
		L_14 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)411);
	}

IL_009a:
	{
		return ((int32_t)398);
	}

IL_00a0:
	{
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_16;
		L_16 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		return ((int32_t)400);
	}

IL_00b2:
	{
		return ((int32_t)386);
	}
}
// System.Int32 Mono.CSharp.Tokenizer::TokenizeInterpolatedString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizeInterpolatedString_m2C1749798ABE09EDC8CFCF84CF74CF658A974AA6 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, bool ___quoted0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m024670CA23B430BF35DADCA63F4DF6B1778973BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m6EC8F6DFB03F48090B2768C311A6491293620005_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D660B34626C034FAC6645FD0171ADB7194734FE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		V_0 = 0;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_0;
		L_0 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		V_1 = L_0;
	}

IL_0009:
	{
		int32_t L_1;
		L_1 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_2 = L_1;
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)34))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)34))))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_019a;
	}

IL_0026:
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)123))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_019a;
	}

IL_0038:
	{
		bool L_7 = ___quoted0;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_8;
		L_8 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_9;
		L_9 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		goto IL_019a;
	}

IL_0051:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_10 = __this->___context_2;
		NullCheck(L_10);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_11;
		L_11 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_10, NULL);
		int32_t L_12 = V_0;
		String_t* L_13;
		L_13 = Tokenizer_CreateStringFromBuilder_mF1DA2E778A70B38CB033AB8BB212C55039FA1071(__this, L_12, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_14 = V_1;
		StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F* L_15 = (StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F*)il2cpp_codegen_object_new(StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		StringLiteral__ctor_m48BD6CE9DA8881B4E31CD1304BA9B3D7DE752A6B(L_15, L_11, L_13, L_14, NULL);
		__this->___val_57 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_15);
		return ((int32_t)367);
	}

IL_0075:
	{
		int32_t L_16;
		L_16 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_0099;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = __this->___value_builder_69;
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_2;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Il2CppChar)((int32_t)(uint16_t)L_20));
		int32_t L_21;
		L_21 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		goto IL_019a;
	}

IL_0099:
	{
		int32_t L_22 = __this->___parsing_string_interpolation_29;
		__this->___parsing_string_interpolation_29 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		bool L_23 = ___quoted0;
		if (!L_23)
		{
			goto IL_00bd;
		}
	}
	{
		Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* L_24 = __this->___parsing_string_interpolation_quoted_30;
		if (L_24)
		{
			goto IL_00bd;
		}
	}
	{
		Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* L_25 = (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10*)il2cpp_codegen_object_new(Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Stack_1__ctor_m6EC8F6DFB03F48090B2768C311A6491293620005(L_25, Stack_1__ctor_m6EC8F6DFB03F48090B2768C311A6491293620005_RuntimeMethod_var);
		__this->___parsing_string_interpolation_quoted_30 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parsing_string_interpolation_quoted_30), (void*)L_25);
	}

IL_00bd:
	{
		Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* L_26 = __this->___parsing_string_interpolation_quoted_30;
		if (!L_26)
		{
			goto IL_00d1;
		}
	}
	{
		Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* L_27 = __this->___parsing_string_interpolation_quoted_30;
		bool L_28 = ___quoted0;
		NullCheck(L_27);
		Stack_1_Push_m024670CA23B430BF35DADCA63F4DF6B1778973BB(L_27, L_28, Stack_1_Push_m024670CA23B430BF35DADCA63F4DF6B1778973BB_RuntimeMethod_var);
	}

IL_00d1:
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_29 = __this->___context_2;
		NullCheck(L_29);
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_30;
		L_30 = CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline(L_29, NULL);
		int32_t L_31 = V_0;
		String_t* L_32;
		L_32 = Tokenizer_CreateStringFromBuilder_mF1DA2E778A70B38CB033AB8BB212C55039FA1071(__this, L_31, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_33 = V_1;
		StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F* L_34 = (StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F*)il2cpp_codegen_object_new(StringLiteral_tB909E8FD7DAA07FA24DD371BBA0B549D16E5B26F_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		StringLiteral__ctor_m48BD6CE9DA8881B4E31CD1304BA9B3D7DE752A6B(L_34, L_30, L_32, L_33, NULL);
		__this->___val_57 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_34);
		return ((int32_t)366);
	}

IL_00f5:
	{
		bool L_35 = ___quoted0;
		if (L_35)
		{
			goto IL_019a;
		}
	}
	{
		int32_t L_36 = __this->___col_8;
		__this->___col_8 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_2;
		int32_t L_38;
		L_38 = Tokenizer_escape_mC78396709ADE0CF7C4CC33402C0C8BEDA6B52B75(__this, L_37, (&V_3), NULL);
		V_2 = L_38;
		int32_t L_39 = V_2;
		if ((!(((uint32_t)L_39) == ((uint32_t)(-1)))))
		{
			goto IL_011d;
		}
	}
	{
		return ((int32_t)259);
	}

IL_011d:
	{
		int32_t L_40 = V_2;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)123))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_41 = V_2;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_014d;
		}
	}

IL_0127:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_42 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_43;
		L_43 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		int32_t L_44 = V_2;
		V_4 = ((int32_t)(uint16_t)L_44);
		String_t* L_45;
		L_45 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_4), NULL);
		NullCheck(L_42);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_42, ((int32_t)8087), L_43, _stringLiteral0D660B34626C034FAC6645FD0171ADB7194734FE, L_45, NULL);
	}

IL_014d:
	{
		int32_t L_46 = V_3;
		if (!L_46)
		{
			goto IL_019a;
		}
	}
	{
		int32_t L_47 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_48 = __this->___value_builder_69;
		NullCheck(L_48);
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
		{
			goto IL_0169;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_49 = (&__this->___value_builder_69);
		int32_t L_50 = V_0;
		Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F(L_49, ((int32_t)il2cpp_codegen_multiply(L_50, 2)), Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
	}

IL_0169:
	{
		int32_t L_51 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_52 = __this->___value_builder_69;
		NullCheck(L_52);
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))))
		{
			goto IL_0182;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_53 = (&__this->___value_builder_69);
		int32_t L_54 = V_0;
		Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F(L_53, ((int32_t)il2cpp_codegen_multiply(L_54, 2)), Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
	}

IL_0182:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_55 = __this->___value_builder_69;
		int32_t L_56 = V_0;
		int32_t L_57 = L_56;
		V_0 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		int32_t L_58 = V_2;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (Il2CppChar)((int32_t)(uint16_t)L_58));
		int32_t L_59 = V_3;
		V_2 = L_59;
		goto IL_019a;
	}

IL_0194:
	{
		return ((int32_t)257);
	}

IL_019a:
	{
		int32_t L_60 = __this->___col_8;
		__this->___col_8 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_62 = __this->___value_builder_69;
		NullCheck(L_62);
		if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)(((RuntimeArray*)L_62)->max_length))))))
		{
			goto IL_01c1;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_63 = (&__this->___value_builder_69);
		int32_t L_64 = V_0;
		Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F(L_63, ((int32_t)il2cpp_codegen_multiply(L_64, 2)), Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
	}

IL_01c1:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_65 = __this->___value_builder_69;
		int32_t L_66 = V_0;
		int32_t L_67 = L_66;
		V_0 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_2;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (Il2CppChar)((int32_t)(uint16_t)L_68));
		goto IL_0009;
	}
}
// System.Int32 Mono.CSharp.Tokenizer::TokenizeInterpolationFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tokenizer_TokenizeInterpolationFormat_mF8E8E86DB64A757E0BD39B994AA6E10560D6C98B (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D660B34626C034FAC6645FD0171ADB7194734FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E1BE71521D34F8CE2CF34C520739F8F79240DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB78E0E46D9D9C28C85E1A7396B963FAB27BEEDB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
	}

IL_0004:
	{
		int32_t L_0;
		L_0 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)92))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b4;
		}
	}
	{
		goto IL_013a;
	}

IL_0024:
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)123))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)125))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_013a;
	}

IL_0033:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		goto IL_013a;
	}

IL_003c:
	{
		int32_t L_7 = V_1;
		if (L_7)
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_8 = V_2;
		__this->___putback_char_56 = L_8;
		int32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_0066;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_10 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_11;
		L_11 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_10);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_10, ((int32_t)8089), L_11, _stringLiteral2E1BE71521D34F8CE2CF34C520739F8F79240DAE, NULL);
		goto IL_0098;
	}

IL_0066:
	{
		il2cpp_codegen_runtime_class_init_inline(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = ((Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_StaticFields*)il2cpp_codegen_static_fields_for(Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501_il2cpp_TypeInfo_var))->___simple_whitespaces_54;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = __this->___value_builder_69;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		uint16_t L_16 = (uint16_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17;
		L_17 = Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9(L_12, L_16, Array_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6E2BDAD7B5A1E51CA8029C65DCA4E847D543DDF9_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_18 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_19;
		L_19 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_18);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_18, ((int32_t)8088), L_19, _stringLiteralBB78E0E46D9D9C28C85E1A7396B963FAB27BEEDB, NULL);
	}

IL_0098:
	{
		int32_t L_20 = V_0;
		String_t* L_21;
		L_21 = Tokenizer_CreateStringFromBuilder_mF1DA2E778A70B38CB033AB8BB212C55039FA1071(__this, L_20, NULL);
		__this->___val_57 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_57), (void*)L_21);
		return ((int32_t)421);
	}

IL_00ab:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		goto IL_013a;
	}

IL_00b4:
	{
		int32_t L_23 = __this->___col_8;
		__this->___col_8 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = V_2;
		int32_t L_25;
		L_25 = Tokenizer_escape_mC78396709ADE0CF7C4CC33402C0C8BEDA6B52B75(__this, L_24, (&V_3), NULL);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00d6;
		}
	}
	{
		return ((int32_t)259);
	}

IL_00d6:
	{
		int32_t L_27 = V_2;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)123))))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0106;
		}
	}

IL_00e0:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_29 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_30;
		L_30 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		int32_t L_31 = V_2;
		V_4 = ((int32_t)(uint16_t)L_31);
		String_t* L_32;
		L_32 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_4), NULL);
		NullCheck(L_29);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_29, ((int32_t)8087), L_30, _stringLiteral0D660B34626C034FAC6645FD0171ADB7194734FE, L_32, NULL);
	}

IL_0106:
	{
		int32_t L_33 = V_3;
		if (!L_33)
		{
			goto IL_013a;
		}
	}
	{
		int32_t L_34 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_35 = __this->___value_builder_69;
		NullCheck(L_35);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_0122;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** L_36 = (&__this->___value_builder_69);
		int32_t L_37 = V_0;
		Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F(L_36, ((int32_t)il2cpp_codegen_multiply(L_37, 2)), Array_Resize_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m16C95D54B6842B97D4206989B72E2C82BD6A3C5F_RuntimeMethod_var);
	}

IL_0122:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_38 = __this->___value_builder_69;
		int32_t L_39 = V_0;
		int32_t L_40 = L_39;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		int32_t L_41 = V_2;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (Il2CppChar)((int32_t)(uint16_t)L_41));
		int32_t L_42 = V_3;
		V_2 = L_42;
		goto IL_013a;
	}

IL_0134:
	{
		return ((int32_t)257);
	}

IL_013a:
	{
		int32_t L_43 = __this->___col_8;
		__this->___col_8 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_44 = __this->___value_builder_69;
		int32_t L_45 = V_0;
		int32_t L_46 = L_45;
		V_0 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_2;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Il2CppChar)((int32_t)(uint16_t)L_47));
		goto IL_0004;
	}
}
// System.String Mono.CSharp.Tokenizer::CreateStringFromBuilder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tokenizer_CreateStringFromBuilder_mF1DA2E778A70B38CB033AB8BB212C55039FA1071 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___pos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___pos0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0009:
	{
		int32_t L_2 = ___pos0;
		if ((((int32_t)L_2) > ((int32_t)4)))
		{
			goto IL_001b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->___value_builder_69;
		int32_t L_4 = ___pos0;
		String_t* L_5;
		L_5 = Tokenizer_InternIdentifier_m6D0ACAD13122A0CE0A4ADD8B9338D18284860161(__this, L_3, L_4, NULL);
		return L_5;
	}

IL_001b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = __this->___value_builder_69;
		int32_t L_7 = ___pos0;
		String_t* L_8;
		L_8 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_6, 0, L_7, NULL);
		return L_8;
	}
}
// System.Void Mono.CSharp.Tokenizer::handle_one_line_xml_comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_handle_one_line_xml_comment_mDD2FF245BF39EA48A01A9539B9BBC4855EE27881 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		goto IL_0009;
	}

IL_0002:
	{
		int32_t L_0;
		L_0 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
	}

IL_0009:
	{
		int32_t L_1;
		L_1 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		int32_t L_2 = L_1;
		V_0 = L_2;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_002a;
	}

IL_0017:
	{
		StringBuilder_t* L_3 = __this->___xml_comment_buffer_38;
		int32_t L_4;
		L_4 = Tokenizer_get_char_mF42F58292240D8F9DF227BE28CABBBD84F0B1C88(__this, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_3, ((int32_t)(uint16_t)L_4), NULL);
	}

IL_002a:
	{
		int32_t L_6;
		L_6 = Tokenizer_peek_char_m3C8E0A1A3FC6F762DEE5CF0A2EC8C1D5DAB9EABB(__this, NULL);
		int32_t L_7 = L_6;
		V_0 = L_7;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)10))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0017;
		}
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)13))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_005a;
		}
	}

IL_0049:
	{
		StringBuilder_t* L_12 = __this->___xml_comment_buffer_38;
		String_t* L_13;
		L_13 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_12);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_13, NULL);
	}

IL_005a:
	{
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::update_formatted_doc_comment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_update_formatted_doc_comment_m72E942B5271ECAFA44A85920596E644AFE0681E8 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, int32_t ___current_comment_start0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	{
		StringBuilder_t* L_0 = __this->___xml_comment_buffer_38;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_0, NULL);
		int32_t L_2 = ___current_comment_start0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		StringBuilder_t* L_3 = __this->___xml_comment_buffer_38;
		int32_t L_4 = ___current_comment_start0;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		String_t* L_6;
		L_6 = StringBuilder_ToString_m8A0AC56824DF98812AFBCD745AC6C911873CA8C0(L_3, L_4, L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_7, L_9, NULL);
		V_1 = L_10;
		V_2 = 1;
		goto IL_00a7;
	}

IL_003f:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = L_14;
		String_t* L_15 = V_3;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_15, ((int32_t)42), NULL);
		V_4 = L_16;
		V_5 = (String_t*)NULL;
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_18 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_19)->max_length)), 1)))))
		{
			goto IL_005e;
		}
	}
	{
		return;
	}

IL_005e:
	{
		String_t* L_20 = V_3;
		V_5 = L_20;
		goto IL_006e;
	}

IL_0063:
	{
		String_t* L_21 = V_3;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		String_t* L_23;
		L_23 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_21, 0, L_22, NULL);
		V_5 = L_23;
	}

IL_006e:
	{
		String_t* L_24 = V_5;
		V_6 = L_24;
		V_7 = 0;
		goto IL_008b;
	}

IL_0077:
	{
		String_t* L_25 = V_6;
		int32_t L_26 = V_7;
		NullCheck(L_25);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_25, L_26, NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)32))))
		{
			goto IL_0085;
		}
	}
	{
		return;
	}

IL_0085:
	{
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_008b:
	{
		int32_t L_29 = V_7;
		String_t* L_30 = V_6;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_30, NULL);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0077;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = V_1;
		int32_t L_33 = V_2;
		String_t* L_34 = V_3;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		String_t* L_36;
		L_36 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_34, ((int32_t)il2cpp_codegen_add(L_35, 1)), NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_36);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (String_t*)L_36);
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00a7:
	{
		int32_t L_38 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = V_1;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		StringBuilder_t* L_40 = __this->___xml_comment_buffer_38;
		int32_t L_41 = ___current_comment_start0;
		int32_t L_42 = V_0;
		NullCheck(L_40);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_40, L_41, L_42, NULL);
		StringBuilder_t* L_44 = __this->___xml_comment_buffer_38;
		int32_t L_45 = ___current_comment_start0;
		String_t* L_46;
		L_46 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = V_1;
		String_t* L_48;
		L_48 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(L_46, L_47, NULL);
		NullCheck(L_44);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_44, L_45, L_48, NULL);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::check_incorrect_doc_comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_check_incorrect_doc_comment_m016964722F7CA23A327E6C1588926527C7B2F251 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		StringBuilder_t* L_0 = __this->___xml_comment_buffer_38;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_2;
		L_2 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		Tokenizer_WarningMisplacedComment_m2783E2511B56B7B6A2EED57524768E9F9EA7B1D9(__this, L_2, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.String Mono.CSharp.Tokenizer::consume_doc_comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tokenizer_consume_doc_comment_m0DD054BAA25D6DDE8611298BF3A57E7771856F5B (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		StringBuilder_t* L_0 = __this->___xml_comment_buffer_38;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		StringBuilder_t* L_2 = __this->___xml_comment_buffer_38;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		Tokenizer_reset_doc_comment_m4C3EDD6A7ED41486DE74D7103D00F5AD36ED57D4(__this, NULL);
		return L_3;
	}

IL_0020:
	{
		return (String_t*)NULL;
	}
}
// System.Void Mono.CSharp.Tokenizer::reset_doc_comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_reset_doc_comment_m4C3EDD6A7ED41486DE74D7103D00F5AD36ED57D4 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		StringBuilder_t* L_0 = __this->___xml_comment_buffer_38;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer::cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tokenizer_cleanup_mD8F1EDD15AA840E5AB4DA89E114F727F0D7E6456 (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral874E099F75FBE3190ABC93B8FA178199B0B90974);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDFC6A686A02CB9B5949933296CF184A7F479267);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_0 = __this->___ifstack_62;
		if (!L_0)
		{
			goto IL_005d;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_1 = __this->___ifstack_62;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_inline(L_1, Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_3 = __this->___ifstack_62;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_3, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		if (!((int32_t)(L_4&((int32_t)16))))
		{
			goto IL_0042;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_5 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_6;
		L_6 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_5);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_5, ((int32_t)1038), L_6, _stringLiteralBDFC6A686A02CB9B5949933296CF184A7F479267, NULL);
		return;
	}

IL_0042:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_7 = __this->___Report_3;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_8;
		L_8 = Tokenizer_get_Location_m575152BFA56FC014C0740FECD885E4CA93CEF89B(__this, NULL);
		NullCheck(L_7);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_7, ((int32_t)1027), L_8, _stringLiteral874E099F75FBE3190ABC93B8FA178199B0B90974, NULL);
	}

IL_005d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.CSharp.Tokenizer/IdentifiersComparer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentifiersComparer__ctor_m80EC36DF2278F50F193B7A9CE7DDE49674EA4EAC (IdentifiersComparer_t928D506738E14DEF81F7E2384D8AD6ED2D3FA965* __this, int32_t ___length0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___length0;
		__this->___length_0 = L_0;
		return;
	}
}
// System.Boolean Mono.CSharp.Tokenizer/IdentifiersComparer::Equals(System.Char[],System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IdentifiersComparer_Equals_mB664314C1608FFEB5F5E0D9853045804C2FD55FC (IdentifiersComparer_t928D506738E14DEF81F7E2384D8AD6ED2D3FA965* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___x0, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___y1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0012;
	}

IL_0004:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___x0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___y1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) == ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = __this->___length_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
// System.Int32 Mono.CSharp.Tokenizer/IdentifiersComparer::GetHashCode(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IdentifiersComparer_GetHashCode_m9834D53DDF78B2309F867223D4435057863339D5 (IdentifiersComparer_t928D506738E14DEF81F7E2384D8AD6ED2D3FA965* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0014;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___obj0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint16_t L_5 = (uint16_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_0<<5)), L_1)), (int32_t)L_5));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0014:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = __this->___length_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.CSharp.Tokenizer/LocatedTokenBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocatedTokenBuffer__ctor_m26A50EA3A31FA6A249E74057380F17D5FA6D59B3 (LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* L_0 = (LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF*)(LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF*)SZArrayNew(LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___buffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_0), (void*)L_0);
		return;
	}
}
// System.Void Mono.CSharp.Tokenizer/LocatedTokenBuffer::.ctor(Mono.CSharp.LocatedToken[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocatedTokenBuffer__ctor_mBAACEC3D5657C4B39A5D1BA95DC386E5AA5EE1CB (LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* __this, LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* G_B2_0 = NULL;
	LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* G_B2_1 = NULL;
	LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* G_B1_0 = NULL;
	LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* L_0 = ___buffer0;
		LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0012;
		}
	}
	{
		LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* L_2 = (LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF*)(LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF*)SZArrayNew(LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF_il2cpp_TypeInfo_var, (uint32_t)0);
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_0012:
	{
		NullCheck(G_B2_1);
		G_B2_1->___buffer_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___buffer_0), (void*)G_B2_0);
		return;
	}
}
// Mono.CSharp.LocatedToken Mono.CSharp.Tokenizer/LocatedTokenBuffer::Create(Mono.CSharp.SourceFile,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1 (LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* __this, SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* ___file0, int32_t ___row1, int32_t ___column2, const RuntimeMethod* method) 
{
	{
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_0 = ___file0;
		int32_t L_1 = ___row1;
		int32_t L_2 = ___column2;
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_3;
		L_3 = LocatedTokenBuffer_Create_m244D232DD2BA9CDECD2B4F9C844C2671ECDFEA81(__this, (String_t*)NULL, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Mono.CSharp.LocatedToken Mono.CSharp.Tokenizer/LocatedTokenBuffer::Create(System.String,Mono.CSharp.SourceFile,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* LocatedTokenBuffer_Create_m244D232DD2BA9CDECD2B4F9C844C2671ECDFEA81 (LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* __this, String_t* ___value0, SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* ___file1, int32_t ___row2, int32_t ___column3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* V_0 = NULL;
	{
		int32_t L_0 = __this->___pos_1;
		LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* L_1 = __this->___buffer_0;
		NullCheck(L_1);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_2 = (LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5*)il2cpp_codegen_object_new(LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LocatedToken__ctor_mF31867F3FA93F30627E8C60B7CE72B79BAE2985B(L_2, NULL);
		V_0 = L_2;
		goto IL_004b;
	}

IL_0018:
	{
		LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* L_3 = __this->___buffer_0;
		int32_t L_4 = __this->___pos_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_7 = V_0;
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_8 = (LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5*)il2cpp_codegen_object_new(LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		LocatedToken__ctor_mF31867F3FA93F30627E8C60B7CE72B79BAE2985B(L_8, NULL);
		V_0 = L_8;
		LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* L_9 = __this->___buffer_0;
		int32_t L_10 = __this->___pos_1;
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_11 = V_0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5*)L_11);
	}

IL_003d:
	{
		int32_t L_12 = __this->___pos_1;
		__this->___pos_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004b:
	{
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_13 = V_0;
		String_t* L_14 = ___value0;
		NullCheck(L_13);
		L_13->___value_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___value_2), (void*)L_14);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_15 = V_0;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_16 = ___file1;
		NullCheck(L_15);
		L_15->___file_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___file_3), (void*)L_16);
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_17 = V_0;
		int32_t L_18 = ___row2;
		NullCheck(L_17);
		L_17->___row_0 = L_18;
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_19 = V_0;
		int32_t L_20 = ___column3;
		NullCheck(L_19);
		L_19->___column_1 = L_20;
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_21 = V_0;
		return L_21;
	}
}
// System.Void Mono.CSharp.Tokenizer/LocatedTokenBuffer::CreateOptional(Mono.CSharp.SourceFile,System.Int32,System.Int32,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocatedTokenBuffer_CreateOptional_m10A88B2A032A3E4BEDA554AAD227C7B533C1AD6A (LocatedTokenBuffer_t383EF78583A5DFA421F01BF422B02502343318C9* __this, SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* ___file0, int32_t ___row1, int32_t ___col2, RuntimeObject** ___token3, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___token3;
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_1 = ___file0;
		int32_t L_2 = ___row1;
		int32_t L_3 = ___col2;
		LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* L_4;
		L_4 = LocatedTokenBuffer_Create_m435DE37082A6A5647A8C6860021ED51798F361F1(__this, L_1, L_2, L_3, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.CSharp.Tokenizer/Position::.ctor(Mono.CSharp.Tokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Position__ctor_mB4455C58FECA440B129693B3EBCC9B3485F0D382 (Position_t54676CA533325D551EE246260967D8F0BDDDB40A* __this, Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_ToArray_m66CF092BE9D2A70AA67FD5F4BC2CA8A84088B5A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_ToArray_m890D1E5AC644DF0BFAF349445E0CB6FA648847E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m214909CE46866ED73425C022CB87D3E96E110ED3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m5B2060AFE570B469BD60AB99341BE39E6448D191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mFD7C58157E038255E7D2C956BEC020F4835682CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_0 = ___t0;
		NullCheck(L_0);
		SeekableStreamReader_t3FB49576348CC48915906D7B50C6DF24536DAC75* L_1 = L_0->___reader_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SeekableStreamReader_get_Position_m488E9B0E53AAE2CE845DA0D174721D8B3FA5A7E6(L_1, NULL);
		__this->___position_0 = L_2;
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_3 = ___t0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___line_7;
		__this->___line_1 = L_4;
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___ref_line_6;
		__this->___ref_line_2 = L_6;
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_7 = ___t0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___col_8;
		__this->___col_3 = L_8;
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_9 = ___t0;
		NullCheck(L_9);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_10 = L_9->___hidden_block_start_5;
		__this->___hidden_4 = L_10;
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_11 = ___t0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___putback_char_56;
		__this->___putback_char_5 = L_12;
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_13 = ___t0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___previous_col_9;
		__this->___previous_col_6 = L_14;
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_15 = ___t0;
		NullCheck(L_15);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_16 = L_15->___ifstack_62;
		if (!L_16)
		{
			goto IL_0092;
		}
	}
	{
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_17 = ___t0;
		NullCheck(L_17);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_18 = L_17->___ifstack_62;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_inline(L_18, Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_0092;
		}
	}
	{
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_20 = ___t0;
		NullCheck(L_20);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_21 = L_20->___ifstack_62;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22;
		L_22 = Stack_1_ToArray_m66CF092BE9D2A70AA67FD5F4BC2CA8A84088B5A7(L_21, Stack_1_ToArray_m66CF092BE9D2A70AA67FD5F4BC2CA8A84088B5A7_RuntimeMethod_var);
		V_0 = L_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_0;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_25 = (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*)il2cpp_codegen_object_new(Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Stack_1__ctor_m214909CE46866ED73425C022CB87D3E96E110ED3(L_25, (RuntimeObject*)L_24, Stack_1__ctor_m214909CE46866ED73425C022CB87D3E96E110ED3_RuntimeMethod_var);
		__this->___ifstack_7 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ifstack_7), (void*)L_25);
	}

IL_0092:
	{
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_26 = ___t0;
		NullCheck(L_26);
		int32_t L_27 = L_26->___parsing_generic_less_than_17;
		__this->___parsing_generic_less_than_8 = L_27;
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_28 = ___t0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___current_token_10;
		__this->___current_token_9 = L_29;
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_30 = ___t0;
		NullCheck(L_30);
		RuntimeObject* L_31 = L_30->___val_57;
		__this->___val_10 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___val_10), (void*)L_31);
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_32 = ___t0;
		NullCheck(L_32);
		int32_t L_33 = L_32->___parsing_string_interpolation_29;
		__this->___parsing_string_interpolation_11 = L_33;
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_34 = ___t0;
		NullCheck(L_34);
		Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* L_35 = L_34->___parsing_string_interpolation_quoted_30;
		if (!L_35)
		{
			goto IL_00f5;
		}
	}
	{
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_36 = ___t0;
		NullCheck(L_36);
		Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* L_37 = L_36->___parsing_string_interpolation_quoted_30;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = Stack_1_get_Count_mFD7C58157E038255E7D2C956BEC020F4835682CA_inline(L_37, Stack_1_get_Count_mFD7C58157E038255E7D2C956BEC020F4835682CA_RuntimeMethod_var);
		if (!L_38)
		{
			goto IL_00f5;
		}
	}
	{
		Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* L_39 = ___t0;
		NullCheck(L_39);
		Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* L_40 = L_39->___parsing_string_interpolation_quoted_30;
		NullCheck(L_40);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_41;
		L_41 = Stack_1_ToArray_m890D1E5AC644DF0BFAF349445E0CB6FA648847E9(L_40, Stack_1_ToArray_m890D1E5AC644DF0BFAF349445E0CB6FA648847E9_RuntimeMethod_var);
		V_1 = L_41;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_42 = V_1;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_42, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_43 = V_1;
		Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* L_44 = (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10*)il2cpp_codegen_object_new(Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Stack_1__ctor_m5B2060AFE570B469BD60AB99341BE39E6448D191(L_44, (RuntimeObject*)L_43, Stack_1__ctor_m5B2060AFE570B469BD60AB99341BE39E6448D191_RuntimeMethod_var);
		__this->___parsing_string_interpolation_quoted_12 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parsing_string_interpolation_quoted_12), (void*)L_44);
	}

IL_00f5:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.CSharp.MemberName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName__ctor_m77520255EBB9DD2F91F91C554D662DDD9F76DDD1 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1 = ((Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_StaticFields*)il2cpp_codegen_static_fields_for(Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_il2cpp_TypeInfo_var))->___Null_9;
		MemberName__ctor_m4F282421FC7E6C35C97293BB2C7FDD373987256A(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Mono.CSharp.MemberName::.ctor(System.String,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName__ctor_m4F282421FC7E6C35C97293BB2C7FDD373987256A (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, String_t* ___name0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1 = ___loc1;
		MemberName__ctor_m12D12EFF57C9DE8FC6C877BFED691B4134D848EB(__this, (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284*)NULL, L_0, L_1, NULL);
		return;
	}
}
// System.Void Mono.CSharp.MemberName::.ctor(System.String,Mono.CSharp.TypeParameters,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName__ctor_m56966B17F3656CFA427E2D7EB75FEBC827505964 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, String_t* ___name0, TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* ___tparams1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___Name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_1), (void*)L_0);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1 = ___loc2;
		__this->___Location_4 = L_1;
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_2 = ___tparams1;
		__this->___TypeParameters_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeParameters_2), (void*)L_2);
		return;
	}
}
// System.Void Mono.CSharp.MemberName::.ctor(System.String,Mono.CSharp.TypeParameters,Mono.CSharp.FullNamedExpression,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName__ctor_mD5ECD4CA722AD3E1E5AAC92ABDA612ABAA672B62 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, String_t* ___name0, TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* ___tparams1, FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* ___explicitInterface2, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc3, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_1 = ___tparams1;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_2 = ___loc3;
		MemberName__ctor_m56966B17F3656CFA427E2D7EB75FEBC827505964(__this, L_0, L_1, L_2, NULL);
		FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* L_3 = ___explicitInterface2;
		__this->___ExplicitInterface_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ExplicitInterface_3), (void*)L_3);
		return;
	}
}
// System.Void Mono.CSharp.MemberName::.ctor(Mono.CSharp.MemberName,System.String,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName__ctor_m12D12EFF57C9DE8FC6C877BFED691B4134D848EB (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___left0, String_t* ___name1, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name1;
		__this->___Name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_1), (void*)L_0);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1 = ___loc2;
		__this->___Location_4 = L_1;
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_2 = ___left0;
		__this->___Left_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Left_5), (void*)L_2);
		return;
	}
}
// System.Void Mono.CSharp.MemberName::.ctor(Mono.CSharp.MemberName,System.String,Mono.CSharp.FullNamedExpression,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName__ctor_m2C3D00562E3F7E386DFAFDA47824FD4023AA3DBF (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___left0, String_t* ___name1, FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* ___explicitInterface2, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc3, const RuntimeMethod* method) 
{
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_0 = ___left0;
		String_t* L_1 = ___name1;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_2 = ___loc3;
		MemberName__ctor_m12D12EFF57C9DE8FC6C877BFED691B4134D848EB(__this, L_0, L_1, L_2, NULL);
		FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* L_3 = ___explicitInterface2;
		__this->___ExplicitInterface_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ExplicitInterface_3), (void*)L_3);
		return;
	}
}
// System.Void Mono.CSharp.MemberName::.ctor(Mono.CSharp.MemberName,Mono.CSharp.MemberName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName__ctor_mC33E3805EBA37E5D04E960F304200A3EAE006159 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___left0, MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___right1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_0 = ___right1;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Name_1;
		__this->___Name_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_1), (void*)L_1);
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_2 = ___right1;
		NullCheck(L_2);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_3 = L_2->___Location_4;
		__this->___Location_4 = L_3;
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_4 = ___right1;
		NullCheck(L_4);
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_5 = L_4->___TypeParameters_2;
		__this->___TypeParameters_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeParameters_2), (void*)L_5);
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_6 = ___left0;
		__this->___Left_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Left_5), (void*)L_6);
		return;
	}
}
// System.Int32 Mono.CSharp.MemberName::get_Arity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberName_get_Arity_mB5409DD102934A805CCE2DB58ABAE0BA88944966 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, const RuntimeMethod* method) 
{
	{
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_0 = __this->___TypeParameters_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_1 = __this->___TypeParameters_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TypeParameters_get_Count_m60206511FDD4CA5FCD7DB3D7FD262F24F9FE55F8(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return 0;
	}
}
// System.Boolean Mono.CSharp.MemberName::get_IsGeneric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberName_get_IsGeneric_m477F7DFFDB461CBB18A5DEDA06096AD2556F11BF (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, const RuntimeMethod* method) 
{
	{
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_0 = __this->___TypeParameters_2;
		return (bool)((!(((RuntimeObject*)(TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.String Mono.CSharp.MemberName::get_Basename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberName_get_Basename_m16738ECB37BC0EAA61A1DAE517768C6BABEDB0C6 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_0 = __this->___TypeParameters_2;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1 = __this->___Name_1;
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_2 = __this->___TypeParameters_2;
		il2cpp_codegen_runtime_class_init_inline(MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = MemberName_MakeName_mF2BADE3011B08F0C10E2F5323676D344C2532EA2(L_1, L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		String_t* L_4 = __this->___Name_1;
		return L_4;
	}
}
// System.Void Mono.CSharp.MemberName::CreateMetadataName(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName_CreateMetadataName_m7620D7EB82D4073404D50BC8C6E8D559D404E0B1 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_0 = __this->___Left_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_1 = __this->___Left_5;
		StringBuilder_t* L_2 = ___sb0;
		NullCheck(L_1);
		MemberName_CreateMetadataName_m7620D7EB82D4073404D50BC8C6E8D559D404E0B1(L_1, L_2, NULL);
	}

IL_0014:
	{
		StringBuilder_t* L_3 = ___sb0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_3, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		StringBuilder_t* L_5 = ___sb0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
	}

IL_0028:
	{
		StringBuilder_t* L_7 = ___sb0;
		String_t* L_8;
		L_8 = MemberName_get_Basename_m16738ECB37BC0EAA61A1DAE517768C6BABEDB0C6(__this, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, L_8, NULL);
		return;
	}
}
// System.String Mono.CSharp.MemberName::GetSignatureForDocumentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberName_GetSignatureForDocumentation_m5CB85778B47BC60263831BCF897FA4036F830FE4 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = MemberName_get_Basename_m16738ECB37BC0EAA61A1DAE517768C6BABEDB0C6(__this, NULL);
		V_0 = L_0;
		FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* L_1 = __this->___ExplicitInterface_3;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* L_2 = __this->___ExplicitInterface_3;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.CSharp.Expression::GetSignatureForError() */, L_2);
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_4, NULL);
		V_0 = L_5;
	}

IL_0026:
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_6 = __this->___Left_5;
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_7 = V_0;
		return L_7;
	}

IL_0030:
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_8 = __this->___Left_5;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = MemberName_GetSignatureForDocumentation_m5CB85778B47BC60263831BCF897FA4036F830FE4(L_8, NULL);
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_9, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_10, NULL);
		return L_11;
	}
}
// System.String Mono.CSharp.MemberName::GetSignatureForError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberName_GetSignatureForError_mC20A020346E3990DC2A13B828C328735DA610A73 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_0 = __this->___TypeParameters_2;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_1 = __this->___TypeParameters_2;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TypeParameters_GetSignatureForError_m4B1519A9698801EBDC334C764634660D2B283924(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_2, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		G_B3_0 = L_3;
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0025:
	{
		V_0 = G_B3_0;
		String_t* L_4 = __this->___Name_1;
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, L_5, NULL);
		V_0 = L_6;
		FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* L_7 = __this->___ExplicitInterface_3;
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* L_8 = __this->___ExplicitInterface_3;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.CSharp.Expression::GetSignatureForError() */, L_8);
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_9, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_10, NULL);
		V_0 = L_11;
	}

IL_0052:
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_12 = __this->___Left_5;
		if (L_12)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_13 = V_0;
		return L_13;
	}

IL_005c:
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_14 = __this->___Left_5;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = MemberName_GetSignatureForError_mC20A020346E3990DC2A13B828C328735DA610A73(L_14, NULL);
		String_t* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_15, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_16, NULL);
		return L_17;
	}
}
// System.Boolean Mono.CSharp.MemberName::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberName_Equals_mFC60D4A3B1973F6E7C95A6FA7911EDA304755EA5 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = MemberName_Equals_mDAB36280A6588505D936013D0F0256ED86ED9AC0(__this, ((MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284*)IsInstClass((RuntimeObject*)L_0, MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean Mono.CSharp.MemberName::Equals(Mono.CSharp.MemberName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberName_Equals_mDAB36280A6588505D936013D0F0256ED86ED9AC0 (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___other0, const RuntimeMethod* method) 
{
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_0 = ___other0;
		if ((!(((RuntimeObject*)(MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284*)__this) == ((RuntimeObject*)(MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_1 = ___other0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = __this->___Name_1;
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_3 = ___other0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___Name_1;
		bool L_5;
		L_5 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_6 = __this->___TypeParameters_2;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_7 = ___other0;
		NullCheck(L_7);
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_8 = L_7->___TypeParameters_2;
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_9 = __this->___TypeParameters_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TypeParameters_get_Count_m60206511FDD4CA5FCD7DB3D7FD262F24F9FE55F8(L_9, NULL);
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_11 = ___other0;
		NullCheck(L_11);
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_12 = L_11->___TypeParameters_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = TypeParameters_get_Count_m60206511FDD4CA5FCD7DB3D7FD262F24F9FE55F8(L_12, NULL);
		if ((((int32_t)L_10) == ((int32_t)L_13)))
		{
			goto IL_0048;
		}
	}

IL_0046:
	{
		return (bool)0;
	}

IL_0048:
	{
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_14 = __this->___TypeParameters_2;
		if (L_14)
		{
			goto IL_005a;
		}
	}
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_15 = ___other0;
		NullCheck(L_15);
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_16 = L_15->___TypeParameters_2;
		if (!L_16)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)0;
	}

IL_005a:
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_17 = __this->___Left_5;
		if (L_17)
		{
			goto IL_006c;
		}
	}
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_18 = ___other0;
		NullCheck(L_18);
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_19 = L_18->___Left_5;
		return (bool)((((RuntimeObject*)(MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284*)L_19) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_006c:
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_20 = __this->___Left_5;
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_21 = ___other0;
		NullCheck(L_21);
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_22 = L_21->___Left_5;
		NullCheck(L_20);
		bool L_23;
		L_23 = MemberName_Equals_mDAB36280A6588505D936013D0F0256ED86ED9AC0(L_20, L_22, NULL);
		return L_23;
	}
}
// System.Int32 Mono.CSharp.MemberName::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberName_GetHashCode_mC558FEB15F24CA75E5AEC53C6C5491CF2931CBBE (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* V_1 = NULL;
	{
		String_t* L_0 = __this->___Name_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_2 = __this->___Left_5;
		V_1 = L_2;
		goto IL_002a;
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Name_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		V_0 = ((int32_t)(L_3^L_6));
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_7 = V_1;
		NullCheck(L_7);
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_8 = L_7->___Left_5;
		V_1 = L_8;
	}

IL_002a:
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_9 = V_1;
		if (L_9)
		{
			goto IL_0015;
		}
	}
	{
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_10 = __this->___TypeParameters_2;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_11 = V_0;
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_12 = __this->___TypeParameters_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = TypeParameters_get_Count_m60206511FDD4CA5FCD7DB3D7FD262F24F9FE55F8(L_12, NULL);
		V_0 = ((int32_t)(L_11^((int32_t)(L_13<<5))));
	}

IL_0045:
	{
		int32_t L_14 = V_0;
		return ((int32_t)(L_14&((int32_t)2147483647LL)));
	}
}
// System.String Mono.CSharp.MemberName::MakeName(System.String,Mono.CSharp.TypeParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberName_MakeName_mF2BADE3011B08F0C10E2F5323676D344C2532EA2 (String_t* ___name0, TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_0 = ___args1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		String_t* L_1 = ___name0;
		return L_1;
	}

IL_0005:
	{
		String_t* L_2 = ___name0;
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_3 = ___args1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = TypeParameters_get_Count_m60206511FDD4CA5FCD7DB3D7FD262F24F9FE55F8(L_3, NULL);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(L_2, _stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C, L_6, NULL);
		return L_7;
	}
}
// System.Void Mono.CSharp.MemberName::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberName__cctor_m1C23CBE216BA7D0FC0A445EA9698661C12F2007D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_0 = (MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284*)il2cpp_codegen_object_new(MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemberName__ctor_m77520255EBB9DD2F91F91C554D662DDD9F76DDD1(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		((MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284_StaticFields*)il2cpp_codegen_static_fields_for(MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284_il2cpp_TypeInfo_var))->___Null_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284_StaticFields*)il2cpp_codegen_static_fields_for(MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284_il2cpp_TypeInfo_var))->___Null_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.CSharp.SimpleMemberName::.ctor(System.String,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleMemberName__ctor_mA74C2719FBA86229504E54B1F5BA817CE3AC8F58 (SimpleMemberName_tF82E5572C2318BC857235349241DACE90C310C12* __this, String_t* ___name0, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___Value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Value_0), (void*)L_0);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1 = ___loc1;
		__this->___Location_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Mono.CSharp.MemberCore::Mono.CSharp.IMemberDefinition.get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberCore_Mono_CSharp_IMemberDefinition_get_Name_m5772B01A753B0E36B49C4DA90EB558B1AD1C3EC4 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_0 = __this->___member_name_1;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Name_1;
		return L_1;
	}
}
// Mono.CSharp.MemberName Mono.CSharp.MemberCore::get_MemberName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* MemberCore_get_MemberName_m16D36021FD32FFCD05BA9443F8DD5A3D4252FF5D (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_0 = __this->___member_name_1;
		return L_0;
	}
}
// System.Void Mono.CSharp.MemberCore::set_ModFlags(Mono.CSharp.Modifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_set_ModFlags_m1643225D0572742DCA6B03212CE604BAC647ED12 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___mod_flags_2 = L_0;
		int32_t L_1 = ___value0;
		if (!((int32_t)((int32_t)L_1&((int32_t)1048576))))
		{
			goto IL_001b;
		}
	}
	{
		__this->___caching_flags_5 = ((int32_t)6144);
	}

IL_001b:
	{
		return;
	}
}
// Mono.CSharp.Modifiers Mono.CSharp.MemberCore::get_ModFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mod_flags_2;
		return L_0;
	}
}
// Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* MemberCore_get_Module_m170ACF18B7596C7BF3E71B90D5BB11B9856ED30E (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_0 = __this->___Parent_3;
		NullCheck(L_0);
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_1;
		L_1 = VirtualFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(27 /* Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module() */, L_0);
		return L_1;
	}
}
// Mono.CSharp.Location Mono.CSharp.MemberCore::get_Location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_0 = __this->___member_name_1;
		NullCheck(L_0);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1 = L_0->___Location_4;
		return L_1;
	}
}
// System.Void Mono.CSharp.MemberCore::.ctor(Mono.CSharp.TypeContainer,Mono.CSharp.MemberName,Mono.CSharp.Attributes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore__ctor_m8B4879569C6E34B52AA774E3AA64ECDD9FCE9AA1 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* ___parent0, MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___name1, Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* ___attrs2, const RuntimeMethod* method) 
{
	{
		Attributable__ctor_m8F847A42FBA9A44DF676B8B419C0C2607CDACB77(__this, NULL);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_0 = ___parent0;
		__this->___Parent_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Parent_3), (void*)L_0);
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_1 = ___name1;
		__this->___member_name_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___member_name_1), (void*)L_1);
		__this->___caching_flags_5 = ((int32_t)293);
		Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* L_2 = ___attrs2;
		Attributable_AddAttributes_m4CF3D6A0DCB3D61B39AB640AE34F5187FE2973D5(__this, L_2, __this, NULL);
		return;
	}
}
// System.Void Mono.CSharp.MemberCore::SetMemberName(Mono.CSharp.MemberName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_SetMemberName_mBA17107A7813D980FBD5B7993DA402E7BACC3460 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* ___new_name0, const RuntimeMethod* method) 
{
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_0 = ___new_name0;
		__this->___member_name_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___member_name_1), (void*)L_0);
		return;
	}
}
// System.Void Mono.CSharp.MemberCore::Accept(Mono.CSharp.StructuralVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_Accept_m6387D53F47FC7BB9CEC600ECF050A99323E5BFF3 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, StructuralVisitor_t67AB9A248269D1BF1711FC0F10C12BEE9F235D3E* ___visitor0, const RuntimeMethod* method) 
{
	{
		StructuralVisitor_t67AB9A248269D1BF1711FC0F10C12BEE9F235D3E* L_0 = ___visitor0;
		NullCheck(L_0);
		VirtualActionInvoker1< MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* >::Invoke(4 /* System.Void Mono.CSharp.StructuralVisitor::Visit(Mono.CSharp.MemberCore) */, L_0, __this);
		return;
	}
}
// System.Boolean Mono.CSharp.MemberCore::CheckAbstractAndExtern(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_CheckAbstractAndExtern_m0EBC82FA39D2EAFB3092BBAC8FD6279BDECD53BC (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, bool ___has_block0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_tE5FF582554D79B704C6338F69E9A4CCC42E9BC0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetIndexerMethod_t38D7E529DD1696F23F82FDD9032768F6E69476C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetIndexerMethod_tA22D80016784BBEA077DF7013B5D5CD46C13EA29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral396E0528902457DBB1089865A71B75F37DF9D919);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48A60A9CECD6D02A0CDA9B08472E38323B485050);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F674C823C816397FA5C45C038EC80F76BA8C3D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE78B6B62D5E0894D83F62883AF16E1CFB8FC97BA);
		s_Il2CppMethodInitialized = true;
	}
	PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729* V_0 = NULL;
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_0 = __this->___Parent_3;
		NullCheck(L_0);
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_1;
		L_1 = TypeContainer_get_PartialContainer_m1B9CD976A1A9B2318B261A6FFF3679675E0DFF46_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = ((TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4*)L_1)->___Kind_6;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)32768)))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		bool L_3 = ___has_block0;
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_4;
		L_4 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(__this, NULL);
		if (!((int32_t)((int32_t)L_4&((int32_t)2048))))
		{
			goto IL_004d;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_5;
		L_5 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_6;
		L_6 = MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB(__this, NULL);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_5);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_5, ((int32_t)179), L_6, _stringLiteral48A60A9CECD6D02A0CDA9B08472E38323B485050, L_7, NULL);
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_8;
		L_8 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(__this, NULL);
		if (!((int32_t)((int32_t)L_8&((int32_t)32))))
		{
			goto IL_0121;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_9;
		L_9 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_10;
		L_10 = MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB(__this, NULL);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_9);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_9, ((int32_t)500), L_10, _stringLiteral396E0528902457DBB1089865A71B75F37DF9D919, L_11, NULL);
		return (bool)0;
	}

IL_007e:
	{
		int32_t L_12;
		L_12 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(__this, NULL);
		if (((int32_t)((int32_t)L_12&((int32_t)133152))))
		{
			goto IL_0121;
		}
	}
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_13 = __this->___Parent_3;
		if (((Delegate_tE5FF582554D79B704C6338F69E9A4CCC42E9BC0D*)IsInstClass((RuntimeObject*)L_13, Delegate_tE5FF582554D79B704C6338F69E9A4CCC42E9BC0D_il2cpp_TypeInfo_var)))
		{
			goto IL_0121;
		}
	}
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_14;
		L_14 = VirtualFuncInvoker0< CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* >::Invoke(51 /* Mono.CSharp.CompilerContext Mono.CSharp.MemberCore::get_Compiler() */, __this);
		NullCheck(L_14);
		CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* L_15;
		L_15 = CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline(L_14, NULL);
		NullCheck(L_15);
		int32_t L_16 = L_15->___Version_5;
		if ((((int32_t)L_16) < ((int32_t)3)))
		{
			goto IL_00fe;
		}
	}
	{
		V_0 = ((PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729*)IsInstClass((RuntimeObject*)__this, PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729_il2cpp_TypeInfo_var));
		PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729* L_17 = V_0;
		if (((GetIndexerMethod_t38D7E529DD1696F23F82FDD9032768F6E69476C7*)IsInstClass((RuntimeObject*)L_17, GetIndexerMethod_t38D7E529DD1696F23F82FDD9032768F6E69476C7_il2cpp_TypeInfo_var)))
		{
			goto IL_00c9;
		}
	}
	{
		PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729* L_18 = V_0;
		if (!((SetIndexerMethod_tA22D80016784BBEA077DF7013B5D5CD46C13EA29*)IsInstClass((RuntimeObject*)L_18, SetIndexerMethod_tA22D80016784BBEA077DF7013B5D5CD46C13EA29_il2cpp_TypeInfo_var)))
		{
			goto IL_00cb;
		}
	}

IL_00c9:
	{
		V_0 = (PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729*)NULL;
	}

IL_00cb:
	{
		PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729* L_19 = V_0;
		if (!L_19)
		{
			goto IL_00fe;
		}
	}
	{
		PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729* L_20 = V_0;
		NullCheck(L_20);
		PropertyBase_t7861DAC749F3B502B1F573B39E9C3A1F2E4AE78A* L_21;
		L_21 = PropertyMethod_get_Property_mEA0F1CB5124C72DB173B02E38F25D261BDAA069A_inline(L_20, NULL);
		NullCheck(L_21);
		PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729* L_22;
		L_22 = PropertyBase_get_AccessorSecond_mDCFF2452CD7EF6E142A672EF690F4B69F825E469(L_21, NULL);
		if (L_22)
		{
			goto IL_00fe;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_23;
		L_23 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_24;
		L_24 = MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB(__this, NULL);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_23);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_23, ((int32_t)840), L_24, _stringLiteral8F674C823C816397FA5C45C038EC80F76BA8C3D1, L_25, NULL);
		return (bool)0;
	}

IL_00fe:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_26;
		L_26 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_27;
		L_27 = MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB(__this, NULL);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_26);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_26, ((int32_t)501), L_27, _stringLiteralE78B6B62D5E0894D83F62883AF16E1CFB8FC97BA, L_28, NULL);
		return (bool)0;
	}

IL_0121:
	{
		return (bool)1;
	}
}
// System.Void Mono.CSharp.MemberCore::CheckProtectedModifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_CheckProtectedModifier_m187E126FD9FD1E58E1684BE1109B18B7FF151939 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Destructor_t71CBEB9748E646C108306086B289A61445E40B39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4072AE0751C91CD138A3BC243720FF52BADF4A33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A46FCCF84DD365C42370B71E9DED3EAD9A0413D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71AC761E41F3E0C3BB177881103E0B2E4C41D9A);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(__this, NULL);
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_1 = __this->___Parent_3;
		NullCheck(L_1);
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_2;
		L_2 = TypeContainer_get_PartialContainer_m1B9CD976A1A9B2318B261A6FFF3679675E0DFF46_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = ((TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4*)L_2)->___Kind_6;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)4096)))))
		{
			goto IL_0044;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_4;
		L_4 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_5;
		L_5 = MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB(__this, NULL);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_4);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_4, ((int32_t)666), L_5, _stringLiteral4072AE0751C91CD138A3BC243720FF52BADF4A33, L_6, NULL);
		return;
	}

IL_0044:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_7 = __this->___Parent_3;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(L_7, NULL);
		if (!((int32_t)((int32_t)L_8&((int32_t)128))))
		{
			goto IL_0079;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_9;
		L_9 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_10;
		L_10 = MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB(__this, NULL);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_9);
		Report_Error_mBB72117C2A1AC9957CC8EC1ED95617ACFA5AE8DD(L_9, ((int32_t)1057), L_10, _stringLiteral4A46FCCF84DD365C42370B71E9DED3EAD9A0413D, L_11, NULL);
		return;
	}

IL_0079:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_12 = __this->___Parent_3;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(L_12, NULL);
		if (!((int32_t)((int32_t)L_13&((int32_t)64))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_14;
		L_14 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(__this, NULL);
		if (((int32_t)((int32_t)L_14&((int32_t)1024))))
		{
			goto IL_00c2;
		}
	}
	{
		if (((Destructor_t71CBEB9748E646C108306086B289A61445E40B39*)IsInstClass((RuntimeObject*)__this, Destructor_t71CBEB9748E646C108306086B289A61445E40B39_il2cpp_TypeInfo_var)))
		{
			goto IL_00c2;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_15;
		L_15 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_16;
		L_16 = MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB(__this, NULL);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_15);
		Report_Warning_m462594FD369AE2148FE2671DC4FFE246037C40F1(L_15, ((int32_t)628), 4, L_16, _stringLiteralB71AC761E41F3E0C3BB177881103E0B2E4C41D9A, L_17, NULL);
		return;
	}

IL_00c2:
	{
		return;
	}
}
// System.String Mono.CSharp.MemberCore::get_DocComment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberCore_get_DocComment_mA580C1AD94B0616E94994432A0731E6E2E443C37 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___comment_4;
		return L_0;
	}
}
// System.Void Mono.CSharp.MemberCore::set_DocComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_set_DocComment_m23A1EDAB5187E709D1D9D15DFF8B5CF013BBFEC0 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___comment_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comment_4), (void*)L_0);
		return;
	}
}
// System.String Mono.CSharp.MemberCore::GetSignatureForError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberCore_GetSignatureForError_mD70995642210EB43A2C7F7A7BE2AA4ED5994C68D (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_0 = __this->___Parent_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, L_0);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_3 = __this->___member_name_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = MemberName_GetSignatureForError_mC20A020346E3990DC2A13B828C328735DA610A73(L_3, NULL);
		return L_4;
	}

IL_001b:
	{
		String_t* L_5 = V_0;
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_6 = __this->___member_name_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = MemberName_GetSignatureForError_mC20A020346E3990DC2A13B828C328735DA610A73(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_5, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_7, NULL);
		return L_8;
	}
}
// System.Void Mono.CSharp.MemberCore::Emit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_Emit_m62746F0498B118886A44123940F2284EAE1A6ADE (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_0;
		L_0 = VirtualFuncInvoker0< CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* >::Invoke(51 /* Mono.CSharp.CompilerContext Mono.CSharp.MemberCore::get_Compiler() */, __this);
		NullCheck(L_0);
		CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* L_1;
		L_1 = CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2 = L_1->___VerifyClsCompliance_3;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(45 /* System.Boolean Mono.CSharp.MemberCore::VerifyClsCompliance() */, __this);
		return;
	}
}
// System.Boolean Mono.CSharp.MemberCore::get_IsAvailableForReuse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_get_IsAvailableForReuse_m4A13745A0CE95D2DB048D50AEACB7079D59AA909 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___caching_flags_5;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)262144)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Mono.CSharp.MemberCore::set_IsAvailableForReuse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_set_IsAvailableForReuse_mB9CB020711E2D30EA24A0C46FD7B0972796FEED6 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, bool ___value0, const RuntimeMethod* method) 
{
	MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* G_B2_0 = NULL;
	MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___caching_flags_5;
		G_B3_0 = ((int32_t)(((int32_t)((int32_t)L_1&((int32_t)-262145)))));
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0012:
	{
		int32_t L_2 = __this->___caching_flags_5;
		G_B3_0 = ((int32_t)(((int32_t)((int32_t)L_2|((int32_t)262144)))));
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___caching_flags_5 = G_B3_0;
		return;
	}
}
// System.Boolean Mono.CSharp.MemberCore::get_IsCompilerGenerated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_get_IsCompilerGenerated_m359DC71A9CBADACCB06F3395B82002A2D6F7C6A8 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mod_flags_2;
		if (!((int32_t)((int32_t)L_0&((int32_t)1048576))))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}

IL_0010:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_1 = __this->___Parent_3;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_2 = __this->___Parent_3;
		NullCheck(L_2);
		bool L_3;
		L_3 = MemberCore_get_IsCompilerGenerated_m359DC71A9CBADACCB06F3395B82002A2D6F7C6A8(L_2, NULL);
		return L_3;
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean Mono.CSharp.MemberCore::get_IsImported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_get_IsImported_mD47D927DCC06DA747A44DE4D8837598C2C43C656 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean Mono.CSharp.MemberCore::get_IsUsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_get_IsUsed_m8BDD4BAC957F8EE8423DD1EC8F94D3517D11A1A0 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___caching_flags_5;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)2048)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Mono.CSharp.Report Mono.CSharp.MemberCore::get_Report()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_0;
		L_0 = VirtualFuncInvoker0< CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* >::Invoke(51 /* Mono.CSharp.CompilerContext Mono.CSharp.MemberCore::get_Compiler() */, __this);
		NullCheck(L_0);
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_1;
		L_1 = CompilerContext_get_Report_mA84DAB5EC71A6AC5A70003D9FE5D7A2226984DDD_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Mono.CSharp.MemberCore::SetIsUsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_SetIsUsed_mB11783F4D4273D8957CCE0EFFC48430D68FF474E (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___caching_flags_5;
		__this->___caching_flags_5 = ((int32_t)((int32_t)L_0|((int32_t)2048)));
		return;
	}
}
// System.Void Mono.CSharp.MemberCore::SetIsAssigned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_SetIsAssigned_mE5C8BE0B783C517C0641853C3D5C5706533BB677 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___caching_flags_5;
		__this->___caching_flags_5 = ((int32_t)((int32_t)L_0|((int32_t)4096)));
		return;
	}
}
// System.Void Mono.CSharp.MemberCore::SetConstraints(System.Collections.Generic.List`1<Mono.CSharp.Constraints>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_SetConstraints_m631CF946D4D31A7F63A0B76C5EC1F39AD43D34B3 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, List_1_t0C642221C357C8B5718460C8EDE0F0D900B11E0A* ___constraints_list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0D6AF51604387B1A70281C32E5EDCDFBE9690750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC29426C7B2D46F9D186DCFD63670F9BAAE27E7CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC375013ACDAF624A1A1696998392F997941955E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5410959B3853773CB80C8493BFED492001168F23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F54E075E182518EAB547F81ACFCBCDB50BE3F9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F1AD834E43FF58996460E153DB6443AC606C163);
		s_Il2CppMethodInitialized = true;
	}
	TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* V_0 = NULL;
	Enumerator_t5B74FAEB3D9A04FF753DA78ACE9E1011E1750FEC V_1;
	memset((&V_1), 0, sizeof(V_1));
	Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* V_2 = NULL;
	TypeParameter_t2B529F20F82AE20A38AB99CBA0E31D7F88E12EF2* V_3 = NULL;
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_0 = __this->___member_name_1;
		NullCheck(L_0);
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_1 = L_0->___TypeParameters_2;
		V_0 = L_1;
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_2 = V_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_3;
		L_3 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_4;
		L_4 = MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB(__this, NULL);
		NullCheck(L_3);
		Report_Error_m771A38D544D45ADEFFF2BEC01CD45204D73BD919(L_3, ((int32_t)80), L_4, _stringLiteral2F54E075E182518EAB547F81ACFCBCDB50BE3F9F, NULL);
		return;
	}

IL_0028:
	{
		List_1_t0C642221C357C8B5718460C8EDE0F0D900B11E0A* L_5 = ___constraints_list0;
		NullCheck(L_5);
		Enumerator_t5B74FAEB3D9A04FF753DA78ACE9E1011E1750FEC L_6;
		L_6 = List_1_GetEnumerator_m5410959B3853773CB80C8493BFED492001168F23(L_5, List_1_GetEnumerator_m5410959B3853773CB80C8493BFED492001168F23_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0D6AF51604387B1A70281C32E5EDCDFBE9690750((&V_1), Enumerator_Dispose_m0D6AF51604387B1A70281C32E5EDCDFBE9690750_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0083_1;
			}

IL_0031_1:
			{
				Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* L_7;
				L_7 = Enumerator_get_Current_mC375013ACDAF624A1A1696998392F997941955E3_inline((&V_1), Enumerator_get_Current_mC375013ACDAF624A1A1696998392F997941955E3_RuntimeMethod_var);
				V_2 = L_7;
				TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_8 = V_0;
				Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* L_9 = V_2;
				NullCheck(L_9);
				SimpleMemberName_tF82E5572C2318BC857235349241DACE90C310C12* L_10;
				L_10 = Constraints_get_TypeParameter_mB18B345E5E93C33C643E708B63B4BFA1782B3EDA_inline(L_9, NULL);
				NullCheck(L_10);
				String_t* L_11 = L_10->___Value_0;
				NullCheck(L_8);
				TypeParameter_t2B529F20F82AE20A38AB99CBA0E31D7F88E12EF2* L_12;
				L_12 = TypeParameters_Find_mABA74ABED4B898B7C3A2472F11D387BF5B832DD7(L_8, L_11, NULL);
				V_3 = L_12;
				TypeParameter_t2B529F20F82AE20A38AB99CBA0E31D7F88E12EF2* L_13 = V_3;
				if (L_13)
				{
					goto IL_007c_1;
				}
			}
			{
				Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_14;
				L_14 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
				Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* L_15 = V_2;
				NullCheck(L_15);
				Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_16;
				L_16 = Constraints_get_Location_mD57166C0D0D07FB4DAA99994BBFBDE9D1C18E9DE_inline(L_15, NULL);
				String_t* L_17;
				L_17 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
				Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* L_18 = V_2;
				NullCheck(L_18);
				SimpleMemberName_tF82E5572C2318BC857235349241DACE90C310C12* L_19;
				L_19 = Constraints_get_TypeParameter_mB18B345E5E93C33C643E708B63B4BFA1782B3EDA_inline(L_18, NULL);
				NullCheck(L_19);
				String_t* L_20 = L_19->___Value_0;
				NullCheck(L_14);
				Report_Error_mECB29E463C732E8326A07CCEC1D698F9C90E9324(L_14, ((int32_t)699), L_16, _stringLiteral5F1AD834E43FF58996460E153DB6443AC606C163, L_17, L_20, NULL);
				goto IL_0083_1;
			}

IL_007c_1:
			{
				TypeParameter_t2B529F20F82AE20A38AB99CBA0E31D7F88E12EF2* L_21 = V_3;
				Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* L_22 = V_2;
				NullCheck(L_21);
				TypeParameter_set_Constraints_mA71527E68CD7B95F84EA1F454346B49AE6248A96_inline(L_21, L_22, NULL);
			}

IL_0083_1:
			{
				bool L_23;
				L_23 = Enumerator_MoveNext_mC29426C7B2D46F9D186DCFD63670F9BAAE27E7CF((&V_1), Enumerator_MoveNext_mC29426C7B2D46F9D186DCFD63670F9BAAE27E7CF_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0031_1;
				}
			}
			{
				goto IL_009c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009c:
	{
		return;
	}
}
// System.ObsoleteAttribute Mono.CSharp.MemberCore::GetAttributeObsolete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* MemberCore_GetAttributeObsolete_m7937DD5E270AB3AA79B9847964DEA3A742CEC3FA (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* V_0 = NULL;
	ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* V_1 = NULL;
	{
		int32_t L_0 = __this->___caching_flags_5;
		if (((int32_t)((int32_t)L_0&3)))
		{
			goto IL_000c;
		}
	}
	{
		return (ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A*)NULL;
	}

IL_000c:
	{
		int32_t L_1 = __this->___caching_flags_5;
		__this->___caching_flags_5 = ((int32_t)((int32_t)L_1&((int32_t)-2)));
		Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* L_2;
		L_2 = Attributable_get_OptAttributes_m76221D813DCA68D74D95082325387D9D38D7D0D0_inline(__this, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		return (ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A*)NULL;
	}

IL_0025:
	{
		Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* L_3;
		L_3 = Attributable_get_OptAttributes_m76221D813DCA68D74D95082325387D9D38D7D0D0_inline(__this, NULL);
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_4;
		L_4 = VirtualFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(27 /* Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module() */, __this);
		NullCheck(L_4);
		PredefinedAttributes_t57CF082A2D3A84BDE14293D534774A98E3C51A3D* L_5;
		L_5 = ModuleContainer_get_PredefinedAttributes_mB95732B524E5A581FB7224BF03FA58AB06F12801_inline(L_4, NULL);
		NullCheck(L_5);
		PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* L_6 = L_5->___Obsolete_2;
		NullCheck(L_3);
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_7;
		L_7 = Attributes_Search_mC4E48DC4E8C70D15201A4019497DA1AFF844118D(L_3, L_6, NULL);
		V_0 = L_7;
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_8 = V_0;
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		return (ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A*)NULL;
	}

IL_0046:
	{
		int32_t L_9 = __this->___caching_flags_5;
		__this->___caching_flags_5 = ((int32_t)((int32_t)L_9|2));
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_10 = V_0;
		NullCheck(L_10);
		ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* L_11;
		L_11 = Attribute_GetObsoleteAttribute_mB05ED76BFEEBDBDEAF58BD6DB15024EC26B28975(L_10, NULL);
		V_1 = L_11;
		ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* L_12 = V_1;
		if (L_12)
		{
			goto IL_0060;
		}
	}
	{
		return (ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A*)NULL;
	}

IL_0060:
	{
		ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* L_13 = V_1;
		return L_13;
	}
}
// System.Void Mono.CSharp.MemberCore::CheckObsoleteness(Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_CheckObsoleteness_m74BEDA1F5D377A533C509E5D2B4A592925963F21 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc0, const RuntimeMethod* method) 
{
	ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* V_0 = NULL;
	{
		ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* L_0;
		L_0 = VirtualFuncInvoker0< ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* >::Invoke(39 /* System.ObsoleteAttribute Mono.CSharp.MemberCore::GetAttributeObsolete() */, __this);
		V_0 = L_0;
		ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* L_2 = V_0;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_4 = ___loc0;
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_5;
		L_5 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		AttributeTester_Report_ObsoleteMessage_m33D7F496D9D835DB5CB33B3A43B825324DD6299E(L_2, L_3, L_4, L_5, NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean Mono.CSharp.MemberCore::IsAccessibleAs(Mono.CSharp.TypeSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_IsAccessibleAs_m64DABDFA801EA789D239E68FDFE5FC675883EAA0 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* V_3 = NULL;
	int32_t V_4 = 0;
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* V_5 = NULL;
	MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* V_6 = NULL;
	int32_t V_7 = 0;
	TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* V_8 = NULL;
	int32_t G_B40_0 = 0;
	{
		int32_t L_0 = __this->___mod_flags_2;
		if (!((int32_t)((int32_t)L_0&4)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_000c:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_1 = ___p0;
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_2;
		L_2 = TypeManager_GetElementType_mCDF7400C70E2ADBFBE17DE763B3CF7C896D88B69(L_1, NULL);
		___p0 = L_2;
	}

IL_0014:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_3 = ___p0;
		bool L_4;
		L_4 = TypeManager_HasElementType_m43C42652B48B14D1A4F148DA872BCE40BF34DA13(L_3, NULL);
		if (L_4)
		{
			goto IL_000c;
		}
	}
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_5 = ___p0;
		NullCheck(L_5);
		bool L_6;
		L_6 = TypeSpec_get_IsGenericParameter_mD975213A749D0D97574532399038205975962C6C(L_5, NULL);
		if (!L_6)
		{
			goto IL_0245;
		}
	}
	{
		return (bool)1;
	}

IL_0029:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_7 = ___p0;
		NullCheck(L_7);
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_8;
		L_8 = MemberSpec_get_DeclaringType_m6DE2BB6C790F14D412375998D53D761C0E204B39_inline(L_7, NULL);
		V_0 = L_8;
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_9 = ___p0;
		NullCheck(L_9);
		bool L_10;
		L_10 = MemberSpec_get_IsGeneric_m24EDC4FBA89ECA000B3CEF441BE8C0D1F7633DCA(L_9, NULL);
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_11 = ___p0;
		NullCheck(L_11);
		TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* L_12;
		L_12 = VirtualFuncInvoker0< TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* >::Invoke(25 /* Mono.CSharp.TypeSpec[] Mono.CSharp.TypeSpec::get_TypeArguments() */, L_11);
		V_3 = L_12;
		V_4 = 0;
		goto IL_005c;
	}

IL_0044:
	{
		TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* L_13 = V_3;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = L_16;
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_17 = V_5;
		bool L_18;
		L_18 = MemberCore_IsAccessibleAs_m64DABDFA801EA789D239E68FDFE5FC675883EAA0(__this, L_17, NULL);
		if (L_18)
		{
			goto IL_0056;
		}
	}
	{
		return (bool)0;
	}

IL_0056:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005c:
	{
		int32_t L_20 = V_4;
		TypeSpecU5BU5D_tF37510396B4CDE9B434827D5507C6D6C80088114* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0063:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_22 = ___p0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = MemberSpec_get_Modifiers_m39EEE8049BD4DC30E7EB1E13494B1C2E8456707C_inline(L_22, NULL);
		V_1 = ((int32_t)((int32_t)L_23&((int32_t)15)));
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_0242;
		}
	}
	{
		V_2 = (bool)0;
		V_6 = __this;
		goto IL_022a;
	}

IL_007e:
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_25 = V_6;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(L_25, NULL);
		V_7 = ((int32_t)((int32_t)L_26&((int32_t)15)));
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) > ((int32_t)4)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_28 = V_1;
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)4)))
		{
			goto IL_01cc;
		}
	}
	{
		goto IL_020e;
	}

IL_009e:
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)8)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)9))))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_020e;
	}

IL_00af:
	{
		int32_t L_32 = V_7;
		if ((((int32_t)L_32) == ((int32_t)4)))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_33 = V_7;
		if ((!(((uint32_t)L_33) == ((uint32_t)8))))
		{
			goto IL_0221;
		}
	}

IL_00bc:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_34 = ___p0;
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = TypeSpec_get_MemberDefinition_m39FDBD0A7AA64A224B5502E5226B9D83178526A9(L_34, NULL);
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_36 = V_6;
		NullCheck(L_36);
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_37;
		L_37 = VirtualFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(27 /* Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module() */, L_36);
		NullCheck(L_37);
		AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4* L_38;
		L_38 = ModuleContainer_get_DeclaringAssembly_mA530F7AF1609929909AD333C386ACB047E986946_inline(L_37, NULL);
		NullCheck(L_35);
		bool L_39;
		L_39 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(11 /* System.Boolean Mono.CSharp.ITypeDefinition::IsInternalAsPublic(Mono.CSharp.IAssemblyDefinition) */, ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var, L_35, L_38);
		V_2 = L_39;
		goto IL_0221;
	}

IL_00d9:
	{
		int32_t L_40 = V_7;
		if ((!(((uint32_t)L_40) == ((uint32_t)1))))
		{
			goto IL_00f6;
		}
	}
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_41 = V_6;
		NullCheck(L_41);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_42 = L_41->___Parent_3;
		NullCheck(L_42);
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_43;
		L_43 = TypeContainer_get_PartialContainer_m1B9CD976A1A9B2318B261A6FFF3679675E0DFF46_inline(L_42, NULL);
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_44 = V_0;
		NullCheck(L_43);
		bool L_45;
		L_45 = TypeDefinition_IsBaseTypeDefinition_m615932427E69B0B3F69443D929250619E9212887(L_43, L_44, NULL);
		V_2 = L_45;
		goto IL_0221;
	}

IL_00f6:
	{
		int32_t L_46 = V_7;
		if ((!(((uint32_t)L_46) == ((uint32_t)4))))
		{
			goto IL_0221;
		}
	}
	{
		goto IL_0124;
	}

IL_0100:
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_47 = V_6;
		NullCheck(L_47);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_48 = L_47->___Parent_3;
		NullCheck(L_48);
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_49;
		L_49 = TypeContainer_get_PartialContainer_m1B9CD976A1A9B2318B261A6FFF3679675E0DFF46_inline(L_48, NULL);
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_50 = V_0;
		NullCheck(L_49);
		bool L_51;
		L_51 = TypeDefinition_IsBaseTypeDefinition_m615932427E69B0B3F69443D929250619E9212887(L_49, L_50, NULL);
		if (!L_51)
		{
			goto IL_011b;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0221;
	}

IL_011b:
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_52 = V_6;
		NullCheck(L_52);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_53 = L_52->___Parent_3;
		V_6 = L_53;
	}

IL_0124:
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_54 = V_6;
		NullCheck(L_54);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_55 = L_54->___Parent_3;
		if (!L_55)
		{
			goto IL_0221;
		}
	}
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_56 = V_6;
		NullCheck(L_56);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_57 = L_56->___Parent_3;
		NullCheck(L_57);
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_58;
		L_58 = TypeContainer_get_PartialContainer_m1B9CD976A1A9B2318B261A6FFF3679675E0DFF46_inline(L_57, NULL);
		if (L_58)
		{
			goto IL_0100;
		}
	}
	{
		goto IL_0221;
	}

IL_0143:
	{
		int32_t L_59 = V_7;
		if ((!(((uint32_t)L_59) == ((uint32_t)8))))
		{
			goto IL_0165;
		}
	}
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_60 = ___p0;
		NullCheck(L_60);
		RuntimeObject* L_61;
		L_61 = TypeSpec_get_MemberDefinition_m39FDBD0A7AA64A224B5502E5226B9D83178526A9(L_60, NULL);
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_62 = V_6;
		NullCheck(L_62);
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_63;
		L_63 = VirtualFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(27 /* Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module() */, L_62);
		NullCheck(L_63);
		AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4* L_64;
		L_64 = ModuleContainer_get_DeclaringAssembly_mA530F7AF1609929909AD333C386ACB047E986946_inline(L_63, NULL);
		NullCheck(L_61);
		bool L_65;
		L_65 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(11 /* System.Boolean Mono.CSharp.ITypeDefinition::IsInternalAsPublic(Mono.CSharp.IAssemblyDefinition) */, ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var, L_61, L_64);
		V_2 = L_65;
		goto IL_0221;
	}

IL_0165:
	{
		int32_t L_66 = V_7;
		if ((!(((uint32_t)L_66) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_019f;
		}
	}
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_67 = V_6;
		NullCheck(L_67);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_68 = L_67->___Parent_3;
		NullCheck(L_68);
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_69;
		L_69 = TypeContainer_get_PartialContainer_m1B9CD976A1A9B2318B261A6FFF3679675E0DFF46_inline(L_68, NULL);
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_70 = V_0;
		NullCheck(L_69);
		bool L_71;
		L_71 = TypeDefinition_IsBaseTypeDefinition_m615932427E69B0B3F69443D929250619E9212887(L_69, L_70, NULL);
		if (!L_71)
		{
			goto IL_0198;
		}
	}
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_72 = ___p0;
		NullCheck(L_72);
		RuntimeObject* L_73;
		L_73 = TypeSpec_get_MemberDefinition_m39FDBD0A7AA64A224B5502E5226B9D83178526A9(L_72, NULL);
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_74 = V_6;
		NullCheck(L_74);
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_75;
		L_75 = VirtualFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(27 /* Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module() */, L_74);
		NullCheck(L_75);
		AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4* L_76;
		L_76 = ModuleContainer_get_DeclaringAssembly_mA530F7AF1609929909AD333C386ACB047E986946_inline(L_75, NULL);
		NullCheck(L_73);
		bool L_77;
		L_77 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(11 /* System.Boolean Mono.CSharp.ITypeDefinition::IsInternalAsPublic(Mono.CSharp.IAssemblyDefinition) */, ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var, L_73, L_76);
		G_B40_0 = ((int32_t)(L_77));
		goto IL_0199;
	}

IL_0198:
	{
		G_B40_0 = 0;
	}

IL_0199:
	{
		V_2 = (bool)G_B40_0;
		goto IL_0221;
	}

IL_019f:
	{
		int32_t L_78 = V_7;
		if ((((int32_t)L_78) == ((int32_t)1)))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_79 = V_7;
		if ((!(((uint32_t)L_79) == ((uint32_t)4))))
		{
			goto IL_0221;
		}
	}
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_80 = ___p0;
		NullCheck(L_80);
		RuntimeObject* L_81;
		L_81 = TypeSpec_get_MemberDefinition_m39FDBD0A7AA64A224B5502E5226B9D83178526A9(L_80, NULL);
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_82 = V_6;
		NullCheck(L_82);
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_83;
		L_83 = VirtualFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(27 /* Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module() */, L_82);
		NullCheck(L_83);
		AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4* L_84;
		L_84 = ModuleContainer_get_DeclaringAssembly_mA530F7AF1609929909AD333C386ACB047E986946_inline(L_83, NULL);
		NullCheck(L_81);
		bool L_85;
		L_85 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(11 /* System.Boolean Mono.CSharp.ITypeDefinition::IsInternalAsPublic(Mono.CSharp.IAssemblyDefinition) */, ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var, L_81, L_84);
		if (!L_85)
		{
			goto IL_00d9;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0221;
	}

IL_01cc:
	{
		int32_t L_86 = V_7;
		if ((!(((uint32_t)L_86) == ((uint32_t)4))))
		{
			goto IL_0221;
		}
	}
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_87 = V_6;
		NullCheck(L_87);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_88 = L_87->___Parent_3;
		V_8 = L_88;
	}

IL_01da:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_89 = V_8;
		NullCheck(L_89);
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_90;
		L_90 = VirtualFuncInvoker0< TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* >::Invoke(52 /* Mono.CSharp.TypeSpec Mono.CSharp.MemberCore::get_CurrentType() */, L_89);
		NullCheck(L_90);
		RuntimeObject* L_91;
		L_91 = TypeSpec_get_MemberDefinition_m39FDBD0A7AA64A224B5502E5226B9D83178526A9(L_90, NULL);
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_92 = V_0;
		NullCheck(L_92);
		RuntimeObject* L_93;
		L_93 = TypeSpec_get_MemberDefinition_m39FDBD0A7AA64A224B5502E5226B9D83178526A9(L_92, NULL);
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_91) == ((RuntimeObject*)(RuntimeObject*)L_93))? 1 : 0);
		bool L_94 = V_2;
		if (L_94)
		{
			goto IL_0221;
		}
	}
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_95 = V_8;
		NullCheck(L_95);
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_96;
		L_96 = TypeContainer_get_PartialContainer_m1B9CD976A1A9B2318B261A6FFF3679675E0DFF46_inline(L_95, NULL);
		NullCheck(L_96);
		bool L_97;
		L_97 = TypeDefinition_get_IsTopLevel_m0E6E2B59314942226A0440A1B0D15D7762882B92(L_96, NULL);
		if (L_97)
		{
			goto IL_0221;
		}
	}
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_98 = V_8;
		NullCheck(L_98);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_99 = ((MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791*)L_98)->___Parent_3;
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_100 = L_99;
		V_8 = L_100;
		if (L_100)
		{
			goto IL_01da;
		}
	}
	{
		goto IL_0221;
	}

IL_020e:
	{
		Il2CppFakeBox<int32_t> L_101(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Modifiers_t7DB769FD64DE8A09DDEA001FB19123BB03241FA6_il2cpp_TypeInfo_var)), (&V_7));
		String_t* L_102;
		L_102 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_101), NULL);
		InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC* L_103 = (InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC_il2cpp_TypeInfo_var)));
		NullCheck(L_103);
		InternalErrorException__ctor_m4A29894B229D02AFEC7C54495BAA3C1ED58E7DC6(L_103, L_102, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_103, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemberCore_IsAccessibleAs_m64DABDFA801EA789D239E68FDFE5FC675883EAA0_RuntimeMethod_var)));
	}

IL_0221:
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_104 = V_6;
		NullCheck(L_104);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_105 = L_104->___Parent_3;
		V_6 = L_105;
	}

IL_022a:
	{
		bool L_106 = V_2;
		if (L_106)
		{
			goto IL_023d;
		}
	}
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_107 = V_6;
		if (!L_107)
		{
			goto IL_023d;
		}
	}
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_108 = V_6;
		NullCheck(L_108);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_109 = L_108->___Parent_3;
		if (L_109)
		{
			goto IL_007e;
		}
	}

IL_023d:
	{
		bool L_110 = V_2;
		if (L_110)
		{
			goto IL_0242;
		}
	}
	{
		return (bool)0;
	}

IL_0242:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_111 = V_0;
		___p0 = L_111;
	}

IL_0245:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_112 = ___p0;
		if (L_112)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Mono.CSharp.MemberCore::IsClsComplianceRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_IsClsComplianceRequired_mE04D669496F3A903F99A3C50DEB8851AD2E05E72 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___caching_flags_5;
		if (((int32_t)((int32_t)L_0&4)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = __this->___caching_flags_5;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_1&8))) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0016:
	{
		int32_t L_2 = __this->___caching_flags_5;
		__this->___caching_flags_5 = ((int32_t)((int32_t)L_2&((int32_t)-5)));
		bool L_3;
		L_3 = MemberCore_get_HasClsCompliantAttribute_m6820CF22683FB9D649A1570E140DF98DEAA9DD71(__this, NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = __this->___caching_flags_5;
		if (!((int32_t)((int32_t)L_4&((int32_t)128))))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		int32_t L_5 = __this->___caching_flags_5;
		__this->___caching_flags_5 = ((int32_t)((int32_t)L_5|8));
		return (bool)1;
	}

IL_004d:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_6 = __this->___Parent_3;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.CSharp.Attributable::IsClsComplianceRequired() */, L_6);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_8 = __this->___caching_flags_5;
		__this->___caching_flags_5 = ((int32_t)((int32_t)L_8|8));
		return (bool)1;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.String[] Mono.CSharp.MemberCore::ConditionalConditions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* MemberCore_ConditionalConditions_m1D60F9DAF2D7783BD162C5C86347E766D629C7DB (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
// System.Boolean Mono.CSharp.MemberCore::IsExposedFromAssembly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_IsExposedFromAssembly_m01340BE6E7C9AA9E12A55554DA9909359109BF21 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(__this, NULL);
		if (((int32_t)((int32_t)L_0&3)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)((!(((RuntimeObject*)(NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767*)((NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767*)IsInstClass((RuntimeObject*)__this, NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0014:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_1 = __this->___Parent_3;
		NullCheck(L_1);
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_2;
		L_2 = TypeContainer_get_PartialContainer_m1B9CD976A1A9B2318B261A6FFF3679675E0DFF46_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_003a;
	}

IL_0022:
	{
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(L_3, NULL);
		if (((int32_t)((int32_t)L_4&3)))
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_5 = V_0;
		NullCheck(L_5);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_6 = ((MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791*)L_5)->___Parent_3;
		NullCheck(L_6);
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_7;
		L_7 = TypeContainer_get_PartialContainer_m1B9CD976A1A9B2318B261A6FFF3679675E0DFF46_inline(L_6, NULL);
		V_0 = L_7;
	}

IL_003a:
	{
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_8 = V_0;
		if (L_8)
		{
			goto IL_0022;
		}
	}
	{
		return (bool)1;
	}
}
// Mono.CSharp.ExtensionMethodCandidates Mono.CSharp.MemberCore::LookupExtensionMethod(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExtensionMethodCandidates_tA706B1A3BEC91D949C963B4789B32FBECA178E89* MemberCore_LookupExtensionMethod_mB9BA85EF95D607B4F87C7112A7AF875895184613 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, String_t* ___name0, int32_t ___arity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* V_0 = NULL;
	NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767* V_1 = NULL;
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_0 = __this->___Parent_3;
		V_0 = L_0;
	}

IL_0007:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_1 = V_0;
		V_1 = ((NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767*)IsInstClass((RuntimeObject*)L_1, NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767_il2cpp_TypeInfo_var));
		NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767* L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		NamespaceContainer_tF1D93D43B4A5B47E375B48CC99F466E8BF01D767* L_3 = V_1;
		String_t* L_4 = ___name0;
		int32_t L_5 = ___arity1;
		NullCheck(L_3);
		ExtensionMethodCandidates_tA706B1A3BEC91D949C963B4789B32FBECA178E89* L_6;
		L_6 = NamespaceContainer_LookupExtensionMethod_m7C4EAEEC175131C10EE24A3F4E21579311C2CC7B(L_3, __this, L_4, L_5, 0, NULL);
		return L_6;
	}

IL_001c:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_7 = V_0;
		NullCheck(L_7);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_8 = ((MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791*)L_7)->___Parent_3;
		V_0 = L_8;
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_9 = V_0;
		if (L_9)
		{
			goto IL_0007;
		}
	}
	{
		return (ExtensionMethodCandidates_tA706B1A3BEC91D949C963B4789B32FBECA178E89*)NULL;
	}
}
// Mono.CSharp.FullNamedExpression Mono.CSharp.MemberCore::LookupNamespaceAlias(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* MemberCore_LookupNamespaceAlias_m70DA5910277F60ADAA8787332116EFE0B20F0796 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_0 = __this->___Parent_3;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* L_2;
		L_2 = VirtualFuncInvoker1< FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D*, String_t* >::Invoke(42 /* Mono.CSharp.FullNamedExpression Mono.CSharp.MemberCore::LookupNamespaceAlias(System.String) */, L_0, L_1);
		return L_2;
	}
}
// Mono.CSharp.FullNamedExpression Mono.CSharp.MemberCore::LookupNamespaceOrType(System.String,System.Int32,Mono.CSharp.LookupMode,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* MemberCore_LookupNamespaceOrType_mE513E68A4E1E644821CD5C8FB0D2E5E1211E430C (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, String_t* ___name0, int32_t ___arity1, int32_t ___mode2, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc3, const RuntimeMethod* method) 
{
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_0 = __this->___Parent_3;
		String_t* L_1 = ___name0;
		int32_t L_2 = ___arity1;
		int32_t L_3 = ___mode2;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_4 = ___loc3;
		NullCheck(L_0);
		FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D* L_5;
		L_5 = VirtualFuncInvoker4< FullNamedExpression_tFA43693D93CFF427452F1054F635FDA701A52B2D*, String_t*, int32_t, int32_t, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F >::Invoke(43 /* Mono.CSharp.FullNamedExpression Mono.CSharp.MemberCore::LookupNamespaceOrType(System.String,System.Int32,Mono.CSharp.LookupMode,Mono.CSharp.Location) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Nullable`1<System.Boolean> Mono.CSharp.MemberCore::get_CLSAttributeValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 MemberCore_get_CLSAttributeValue_m81BDDF5AA8AABC38B8D4B17807B638B122A7C888 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* V_1 = NULL;
	{
		int32_t L_0 = __this->___caching_flags_5;
		if (((int32_t)((int32_t)L_0&((int32_t)32))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->___caching_flags_5;
		if (((int32_t)((int32_t)L_1&((int32_t)64))))
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_2 = V_0;
		return L_2;
	}

IL_0020:
	{
		int32_t L_3 = __this->___caching_flags_5;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_4), (bool)((((int32_t)((int32_t)((int32_t)L_3&((int32_t)128)))) == ((int32_t)0))? 1 : 0), /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		return L_4;
	}

IL_0035:
	{
		int32_t L_5 = __this->___caching_flags_5;
		__this->___caching_flags_5 = ((int32_t)((int32_t)L_5&((int32_t)-33)));
		Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* L_6;
		L_6 = Attributable_get_OptAttributes_m76221D813DCA68D74D95082325387D9D38D7D0D0_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_00a2;
		}
	}
	{
		Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* L_7;
		L_7 = Attributable_get_OptAttributes_m76221D813DCA68D74D95082325387D9D38D7D0D0_inline(__this, NULL);
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_8;
		L_8 = VirtualFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(27 /* Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module() */, __this);
		NullCheck(L_8);
		PredefinedAttributes_t57CF082A2D3A84BDE14293D534774A98E3C51A3D* L_9;
		L_9 = ModuleContainer_get_PredefinedAttributes_mB95732B524E5A581FB7224BF03FA58AB06F12801_inline(L_8, NULL);
		NullCheck(L_9);
		PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* L_10 = L_9->___CLSCompliant_9;
		NullCheck(L_7);
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_11;
		L_11 = Attributes_Search_mC4E48DC4E8C70D15201A4019497DA1AFF844118D(L_7, L_10, NULL);
		V_1 = L_11;
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_12 = V_1;
		if (!L_12)
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_13 = __this->___caching_flags_5;
		__this->___caching_flags_5 = ((int32_t)((int32_t)L_13|((int32_t)64)));
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_14 = V_1;
		NullCheck(L_14);
		bool L_15;
		L_15 = Attribute_GetClsCompliantAttributeValue_m23F64C229EEBB60E8622B5CAECF6EECCCB6E0B83(L_14, NULL);
		if (!L_15)
		{
			goto IL_0089;
		}
	}
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_16), (bool)1, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		return L_16;
	}

IL_0089:
	{
		int32_t L_17 = __this->___caching_flags_5;
		__this->___caching_flags_5 = ((int32_t)((int32_t)L_17|((int32_t)128)));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_18), (bool)0, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		return L_18;
	}

IL_00a2:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_19 = V_0;
		return L_19;
	}
}
// System.Boolean Mono.CSharp.MemberCore::get_HasClsCompliantAttribute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_get_HasClsCompliantAttribute_m6820CF22683FB9D649A1570E140DF98DEAA9DD71 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0;
		L_0 = MemberCore_get_CLSAttributeValue_m81BDDF5AA8AABC38B8D4B17807B638B122A7C888(__this, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Mono.CSharp.MemberCore::EnableOverloadChecks(Mono.CSharp.MemberCore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_EnableOverloadChecks_mD966F7F9415D03A1CE8FA1446B579856A446981B (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* ___overload0, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean Mono.CSharp.MemberCore::VerifyClsCompliance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_VerifyClsCompliance_m574E3F98C43598214F1DF5E569E3EA230E45DA09 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interface_t5643DC3C71719AD252703984022EF75B5A23ADBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E09244D56CC22562695A25998F44729431F0786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B3482EA11FCCB04C793438C6428A672966E97B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77A794A3BD42C8446401628093B7C7F1991DE865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral804129BB0631EBA493C328765F1CF46B92854032);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7DFAA77B73CFAF0D1250B876AC6883BB7B935F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9CB9033B310B547B765ABF98EBCDDA468AFC4C9);
		s_Il2CppMethodInitialized = true;
	}
	Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* V_0 = NULL;
	Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* V_1 = NULL;
	Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* V_2 = NULL;
	{
		bool L_0;
		L_0 = MemberCore_get_HasClsCompliantAttribute_m6820CF22683FB9D649A1570E140DF98DEAA9DD71(__this, NULL);
		if (!L_0)
		{
			goto IL_01eb;
		}
	}
	{
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_1;
		L_1 = VirtualFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(27 /* Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module() */, __this);
		NullCheck(L_1);
		AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4* L_2;
		L_2 = ModuleContainer_get_DeclaringAssembly_mA530F7AF1609929909AD333C386ACB047E986946_inline(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = AssemblyDefinition_get_HasCLSCompliantAttribute_m11735C13ECEC4BFF4F842297B8E04414B49F32FF(L_2, NULL);
		if (L_3)
		{
			goto IL_008f;
		}
	}
	{
		Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* L_4;
		L_4 = Attributable_get_OptAttributes_m76221D813DCA68D74D95082325387D9D38D7D0D0_inline(__this, NULL);
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_5;
		L_5 = VirtualFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(27 /* Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module() */, __this);
		NullCheck(L_5);
		PredefinedAttributes_t57CF082A2D3A84BDE14293D534774A98E3C51A3D* L_6;
		L_6 = ModuleContainer_get_PredefinedAttributes_mB95732B524E5A581FB7224BF03FA58AB06F12801_inline(L_5, NULL);
		NullCheck(L_6);
		PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* L_7 = L_6->___CLSCompliant_9;
		NullCheck(L_4);
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_8;
		L_8 = Attributes_Search_mC4E48DC4E8C70D15201A4019497DA1AFF844118D(L_4, L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = __this->___caching_flags_5;
		if (!((int32_t)((int32_t)L_9&((int32_t)128))))
		{
			goto IL_006b;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_10;
		L_10 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_11 = V_0;
		NullCheck(L_11);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_12;
		L_12 = Attribute_get_Location_m4100C4CD567A86EF2AE254B70D1C8707A2391F47_inline(L_11, NULL);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_10);
		Report_Warning_m462594FD369AE2148FE2671DC4FFE246037C40F1(L_10, ((int32_t)3021), 2, L_12, _stringLiteral1E09244D56CC22562695A25998F44729431F0786, L_13, NULL);
		goto IL_008d;
	}

IL_006b:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_14;
		L_14 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_15 = V_0;
		NullCheck(L_15);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_16;
		L_16 = Attribute_get_Location_m4100C4CD567A86EF2AE254B70D1C8707A2391F47_inline(L_15, NULL);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_14);
		Report_Warning_m462594FD369AE2148FE2671DC4FFE246037C40F1(L_14, ((int32_t)3014), 1, L_16, _stringLiteralB7DFAA77B73CFAF0D1250B876AC6883BB7B935F5, L_17, NULL);
	}

IL_008d:
	{
		return (bool)0;
	}

IL_008f:
	{
		bool L_18;
		L_18 = MemberCore_IsExposedFromAssembly_m01340BE6E7C9AA9E12A55554DA9909359109BF21(__this, NULL);
		if (L_18)
		{
			goto IL_00d7;
		}
	}
	{
		Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* L_19;
		L_19 = Attributable_get_OptAttributes_m76221D813DCA68D74D95082325387D9D38D7D0D0_inline(__this, NULL);
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_20;
		L_20 = VirtualFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(27 /* Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module() */, __this);
		NullCheck(L_20);
		PredefinedAttributes_t57CF082A2D3A84BDE14293D534774A98E3C51A3D* L_21;
		L_21 = ModuleContainer_get_PredefinedAttributes_mB95732B524E5A581FB7224BF03FA58AB06F12801_inline(L_20, NULL);
		NullCheck(L_21);
		PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* L_22 = L_21->___CLSCompliant_9;
		NullCheck(L_19);
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_23;
		L_23 = Attributes_Search_mC4E48DC4E8C70D15201A4019497DA1AFF844118D(L_19, L_22, NULL);
		V_1 = L_23;
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_24;
		L_24 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_25 = V_1;
		NullCheck(L_25);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_26;
		L_26 = Attribute_get_Location_m4100C4CD567A86EF2AE254B70D1C8707A2391F47_inline(L_25, NULL);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_24);
		Report_Warning_m462594FD369AE2148FE2671DC4FFE246037C40F1(L_24, ((int32_t)3019), 2, L_26, _stringLiteral77A794A3BD42C8446401628093B7C7F1991DE865, L_27, NULL);
		return (bool)0;
	}

IL_00d7:
	{
		int32_t L_28 = __this->___caching_flags_5;
		if (!((int32_t)((int32_t)L_28&((int32_t)128))))
		{
			goto IL_0174;
		}
	}
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_29 = __this->___Parent_3;
		if (!((Interface_t5643DC3C71719AD252703984022EF75B5A23ADBB*)IsInstSealed((RuntimeObject*)L_29, Interface_t5643DC3C71719AD252703984022EF75B5A23ADBB_il2cpp_TypeInfo_var)))
		{
			goto IL_0126;
		}
	}
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_30 = __this->___Parent_3;
		NullCheck(L_30);
		bool L_31;
		L_31 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.CSharp.Attributable::IsClsComplianceRequired() */, L_30);
		if (!L_31)
		{
			goto IL_0126;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_32;
		L_32 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_33;
		L_33 = MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB(__this, NULL);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_32);
		Report_Warning_m462594FD369AE2148FE2671DC4FFE246037C40F1(L_32, ((int32_t)3010), 1, L_33, _stringLiteral5B3482EA11FCCB04C793438C6428A672966E97B3, L_34, NULL);
		goto IL_0172;
	}

IL_0126:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_35 = __this->___Parent_3;
		NullCheck(L_35);
		int32_t L_36 = L_35->___Kind_6;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)2048)))))
		{
			goto IL_0172;
		}
	}
	{
		int32_t L_37;
		L_37 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(__this, NULL);
		if (!((int32_t)((int32_t)L_37&((int32_t)32))))
		{
			goto IL_0172;
		}
	}
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_38 = __this->___Parent_3;
		NullCheck(L_38);
		bool L_39;
		L_39 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.CSharp.Attributable::IsClsComplianceRequired() */, L_38);
		if (!L_39)
		{
			goto IL_0172;
		}
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_40;
		L_40 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_41;
		L_41 = MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB(__this, NULL);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_40);
		Report_Warning_m462594FD369AE2148FE2671DC4FFE246037C40F1(L_40, ((int32_t)3011), 1, L_41, _stringLiteral804129BB0631EBA493C328765F1CF46B92854032, L_42, NULL);
	}

IL_0172:
	{
		return (bool)0;
	}

IL_0174:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_43 = __this->___Parent_3;
		NullCheck(L_43);
		int32_t L_44 = L_43->___Kind_6;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)16777216))))
		{
			goto IL_0204;
		}
	}
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_45 = __this->___Parent_3;
		NullCheck(L_45);
		int32_t L_46 = L_45->___Kind_6;
		if (!L_46)
		{
			goto IL_0204;
		}
	}
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_47 = __this->___Parent_3;
		NullCheck(L_47);
		bool L_48;
		L_48 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.CSharp.Attributable::IsClsComplianceRequired() */, L_47);
		if (L_48)
		{
			goto IL_0204;
		}
	}
	{
		Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* L_49;
		L_49 = Attributable_get_OptAttributes_m76221D813DCA68D74D95082325387D9D38D7D0D0_inline(__this, NULL);
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_50;
		L_50 = VirtualFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(27 /* Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module() */, __this);
		NullCheck(L_50);
		PredefinedAttributes_t57CF082A2D3A84BDE14293D534774A98E3C51A3D* L_51;
		L_51 = ModuleContainer_get_PredefinedAttributes_mB95732B524E5A581FB7224BF03FA58AB06F12801_inline(L_50, NULL);
		NullCheck(L_51);
		PredefinedAttribute_t706C927D9113A85C639FA69FEAD27F1CE988A64B* L_52 = L_51->___CLSCompliant_9;
		NullCheck(L_49);
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_53;
		L_53 = Attributes_Search_mC4E48DC4E8C70D15201A4019497DA1AFF844118D(L_49, L_52, NULL);
		V_2 = L_53;
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_54;
		L_54 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* L_55 = V_2;
		NullCheck(L_55);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_56;
		L_56 = Attribute_get_Location_m4100C4CD567A86EF2AE254B70D1C8707A2391F47_inline(L_55, NULL);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_58 = __this->___Parent_3;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, L_58);
		NullCheck(L_54);
		Report_Warning_m2F245AECE15B1C5558624C9F64C3731228E78CCA(L_54, ((int32_t)3018), 1, L_56, _stringLiteralF9CB9033B310B547B765ABF98EBCDDA468AFC4C9, L_57, L_59, NULL);
		return (bool)0;
	}

IL_01eb:
	{
		bool L_60;
		L_60 = MemberCore_IsExposedFromAssembly_m01340BE6E7C9AA9E12A55554DA9909359109BF21(__this, NULL);
		if (L_60)
		{
			goto IL_01f5;
		}
	}
	{
		return (bool)0;
	}

IL_01f5:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_61 = __this->___Parent_3;
		NullCheck(L_61);
		bool L_62;
		L_62 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.CSharp.Attributable::IsClsComplianceRequired() */, L_61);
		if (L_62)
		{
			goto IL_0204;
		}
	}
	{
		return (bool)0;
	}

IL_0204:
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_63 = __this->___member_name_1;
		NullCheck(L_63);
		String_t* L_64 = L_63->___Name_1;
		NullCheck(L_64);
		Il2CppChar L_65;
		L_65 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_64, 0, NULL);
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_021f;
		}
	}
	{
		MemberCore_Warning_IdentifierNotCompliant_mE8D049D5678B3B9774B4CF4703A5D14AB0CDEE91(__this, NULL);
	}

IL_021f:
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_66 = __this->___member_name_1;
		NullCheck(L_66);
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_67 = L_66->___TypeParameters_2;
		if (!L_67)
		{
			goto IL_023c;
		}
	}
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_68 = __this->___member_name_1;
		NullCheck(L_68);
		TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* L_69 = L_68->___TypeParameters_2;
		NullCheck(L_69);
		TypeParameters_VerifyClsCompliance_mD9017A31A115D0A5AB37875583EA2EEF63A7EAAB(L_69, NULL);
	}

IL_023c:
	{
		return (bool)1;
	}
}
// System.Void Mono.CSharp.MemberCore::Warning_IdentifierNotCompliant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_Warning_IdentifierNotCompliant_mE8D049D5678B3B9774B4CF4703A5D14AB0CDEE91 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF88144D408B0CD04F7C405D1AD03B17DD5A833C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_0;
		L_0 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_1;
		L_1 = MemberCore_get_MemberName_m16D36021FD32FFCD05BA9443F8DD5A3D4252FF5D_inline(__this, NULL);
		NullCheck(L_1);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_2 = L_1->___Location_4;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_0);
		Report_Warning_m462594FD369AE2148FE2671DC4FFE246037C40F1(L_0, ((int32_t)3008), 1, L_2, _stringLiteralFF88144D408B0CD04F7C405D1AD03B17DD5A833C, L_3, NULL);
		return;
	}
}
// System.String Mono.CSharp.MemberCore::GetCallerMemberName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberCore_GetCallerMemberName_m1BBEEA23D0A37B31A21A3D77B67DB3A7C006CBE6 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_0;
		L_0 = MemberCore_get_MemberName_m16D36021FD32FFCD05BA9443F8DD5A3D4252FF5D_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->___Name_1;
		return L_1;
	}
}
// System.Void Mono.CSharp.MemberCore::GetCompletionStartingWith(System.String,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_GetCompletionStartingWith_mD71E8471FFC306781052AB36D35FC2ED92AAB68E (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, String_t* ___prefix0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___results1, const RuntimeMethod* method) 
{
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_0 = __this->___Parent_3;
		String_t* L_1 = ___prefix0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = ___results1;
		NullCheck(L_0);
		VirtualActionInvoker2< String_t*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(48 /* System.Void Mono.CSharp.MemberCore::GetCompletionStartingWith(System.String,System.Collections.Generic.List`1<System.String>) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void Mono.CSharp.MemberCore::GenerateDocComment(Mono.CSharp.DocumentationBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_GenerateDocComment_m9C36B8482271EA12F1CD2172FC2443AB1DA7801F (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, DocumentationBuilder_t7805D42F3A2BD1A40FE71A5A1D49B8CE3548D52D* ___builder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constructor_t2200881FF868A83DFA2695D780716B13269A2FD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADF66A5CAF0DAD0B4EF8357CA4EB944F4D295FC2);
		s_Il2CppMethodInitialized = true;
	}
	Constructor_t2200881FF868A83DFA2695D780716B13269A2FD3* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(33 /* System.String Mono.CSharp.MemberCore::get_DocComment() */, __this);
		if (L_0)
		{
			goto IL_0045;
		}
	}
	{
		bool L_1;
		L_1 = MemberCore_IsExposedFromAssembly_m01340BE6E7C9AA9E12A55554DA9909359109BF21(__this, NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		V_0 = ((Constructor_t2200881FF868A83DFA2695D780716B13269A2FD3*)IsInstClass((RuntimeObject*)__this, Constructor_t2200881FF868A83DFA2695D780716B13269A2FD3_il2cpp_TypeInfo_var));
		Constructor_t2200881FF868A83DFA2695D780716B13269A2FD3* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Constructor_t2200881FF868A83DFA2695D780716B13269A2FD3* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Constructor_IsDefault_mA77035CABD48A30ED6187F0C5BD42754EE6D89D5(L_3, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}

IL_0022:
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_5;
		L_5 = MemberCore_get_Report_mFF6B71EDEDA8C25FDD2309D56481D4E332915551(__this, NULL);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_6;
		L_6 = MemberCore_get_Location_m98E655C85836DFB97429B6984D1B7D0B718F16CB(__this, NULL);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(35 /* System.String Mono.CSharp.MemberCore::GetSignatureForError() */, __this);
		NullCheck(L_5);
		Report_Warning_m462594FD369AE2148FE2671DC4FFE246037C40F1(L_5, ((int32_t)1591), 4, L_6, _stringLiteralADF66A5CAF0DAD0B4EF8357CA4EB944F4D295FC2, L_7, NULL);
	}

IL_0044:
	{
		return;
	}

IL_0045:
	{
	}
	try
	{// begin try (depth: 1)
		DocumentationBuilder_t7805D42F3A2BD1A40FE71A5A1D49B8CE3548D52D* L_8 = ___builder0;
		NullCheck(L_8);
		DocumentationBuilder_GenerateDocumentationForMember_mC93B6984F12FCC36B4360D8C57C38F84D3CC8117(L_8, __this, NULL);
		goto IL_0058;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004f;
		}
		throw e;
	}

CATCH_004f:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_9 = V_1;
		InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC* L_10 = (InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalErrorException_tDF7AEE8C036147C4AEF53DD997EEA6C61D8688DC_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		InternalErrorException__ctor_m167FEF007B1B1D886B802AFE0733386AE53F3416(L_10, __this, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemberCore_GenerateDocComment_m9C36B8482271EA12F1CD2172FC2443AB1DA7801F_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0058:
	{
		return;
	}
}
// System.Void Mono.CSharp.MemberCore::WriteDebugSymbol(Mono.CompilerServices.SymbolWriter.MonoSymbolFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberCore_WriteDebugSymbol_mDCA04D980CBDEB659AC99F20C2E93E402F3D9FB4 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Mono.CSharp.CompilerContext Mono.CSharp.MemberCore::get_Compiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* MemberCore_get_Compiler_mF79A1FF6A5CB7470C38B6880C91D11C1EEE45ECF (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_0;
		L_0 = VirtualFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(27 /* Mono.CSharp.ModuleContainer Mono.CSharp.MemberCore::get_Module() */, __this);
		NullCheck(L_0);
		CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* L_1;
		L_1 = VirtualFuncInvoker0< CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* >::Invoke(51 /* Mono.CSharp.CompilerContext Mono.CSharp.MemberCore::get_Compiler() */, L_0);
		return L_1;
	}
}
// Mono.CSharp.TypeSpec Mono.CSharp.MemberCore::get_CurrentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* MemberCore_get_CurrentType_mC89C4454BF48D8D9AD5F658B7A2642A80E4FC878 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_0 = __this->___Parent_3;
		NullCheck(L_0);
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_1;
		L_1 = VirtualFuncInvoker0< TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* >::Invoke(52 /* Mono.CSharp.TypeSpec Mono.CSharp.MemberCore::get_CurrentType() */, L_0);
		return L_1;
	}
}
// Mono.CSharp.MemberCore Mono.CSharp.MemberCore::get_CurrentMemberDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* MemberCore_get_CurrentMemberDefinition_mE7F33659E9FB86465AC331A071284CB2D481CC1B (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		return __this;
	}
}
// Mono.CSharp.TypeParameters Mono.CSharp.MemberCore::get_CurrentTypeParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C* MemberCore_get_CurrentTypeParameters_mC3AEF9999E4AFD551CE625DFD3ED2C9278755E39 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		return (TypeParameters_tBC37A07639CDAD3962085722DCE2ED64A5C7756C*)NULL;
	}
}
// System.Boolean Mono.CSharp.MemberCore::get_IsObsolete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_get_IsObsolete_m6DE885381391D98CCA35FE0F03B104784ADBD298 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* L_0;
		L_0 = VirtualFuncInvoker0< ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* >::Invoke(39 /* System.ObsoleteAttribute Mono.CSharp.MemberCore::GetAttributeObsolete() */, __this);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_1 = __this->___Parent_3;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_2 = __this->___Parent_3;
		NullCheck(L_2);
		bool L_3;
		L_3 = MemberCore_get_IsObsolete_m6DE885381391D98CCA35FE0F03B104784ADBD298(L_2, NULL);
		return L_3;
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Boolean Mono.CSharp.MemberCore::get_IsUnsafe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_get_IsUnsafe_m0724042A308E0B631A23E70B2EBFB118300B9BC9 (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(__this, NULL);
		if (!((int32_t)((int32_t)L_0&((int32_t)8192))))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}

IL_0010:
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_1 = __this->___Parent_3;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_2 = __this->___Parent_3;
		NullCheck(L_2);
		bool L_3;
		L_3 = MemberCore_get_IsUnsafe_m0724042A308E0B631A23E70B2EBFB118300B9BC9(L_2, NULL);
		return L_3;
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean Mono.CSharp.MemberCore::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberCore_get_IsStatic_mA6C325DCCF02BA822EFA9BBC0EE70558DF388ECF (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline(__this, NULL);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.CSharp.MemberSpec::.ctor(Mono.CSharp.MemberKind,Mono.CSharp.TypeSpec,Mono.CSharp.IMemberDefinition,Mono.CSharp.Modifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberSpec__ctor_mDB9251CC76AA4749D772BE7DA9AD69165C2FF8E6 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, int32_t ___kind0, TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___declaringType1, RuntimeObject* ___definition2, int32_t ___modifiers3, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___kind0;
		__this->___Kind_4 = L_0;
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_1 = ___declaringType1;
		__this->___declaringType_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___declaringType_5), (void*)L_1);
		RuntimeObject* L_2 = ___definition2;
		__this->___definition_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___definition_3), (void*)L_2);
		int32_t L_3 = ___modifiers3;
		__this->___modifiers_1 = L_3;
		int32_t L_4 = ___kind0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)4194304)))))
		{
			goto IL_0034;
		}
	}
	{
		__this->___state_2 = ((int32_t)32);
		return;
	}

IL_0034:
	{
		__this->___state_2 = ((int32_t)21);
		return;
	}
}
// System.Int32 Mono.CSharp.MemberSpec::get_Arity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberSpec_get_Arity_m457C133C1E667823A35BE0D9975B6DD131AB1473 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// Mono.CSharp.TypeSpec Mono.CSharp.MemberSpec::get_DeclaringType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* MemberSpec_get_DeclaringType_m6DE2BB6C790F14D412375998D53D761C0E204B39 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_0 = __this->___declaringType_5;
		return L_0;
	}
}
// System.Void Mono.CSharp.MemberSpec::set_DeclaringType(Mono.CSharp.TypeSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberSpec_set_DeclaringType_mFDA289F5BD603E8A861E93F38E9E5E3C179BBB31 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___value0, const RuntimeMethod* method) 
{
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_0 = ___value0;
		__this->___declaringType_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___declaringType_5), (void*)L_0);
		return;
	}
}
// Mono.CSharp.IMemberDefinition Mono.CSharp.MemberSpec::get_MemberDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberSpec_get_MemberDefinition_mAD848667961881D4F253751A92B09AB10BBF4DC4 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___definition_3;
		return L_0;
	}
}
// Mono.CSharp.Modifiers Mono.CSharp.MemberSpec::get_Modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberSpec_get_Modifiers_m39EEE8049BD4DC30E7EB1E13494B1C2E8456707C (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___modifiers_1;
		return L_0;
	}
}
// System.Void Mono.CSharp.MemberSpec::set_Modifiers(Mono.CSharp.Modifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberSpec_set_Modifiers_mB22273526A80B5CE8CE219F5BD4B7FEF88432297 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___modifiers_1 = L_0;
		return;
	}
}
// System.String Mono.CSharp.MemberSpec::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberSpec_get_Name_mED11F769CF1E26340B092B23ED0374100D18A82A (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemberDefinition_t7BD6D3ACB1480099EF288B5FFB498EBFA7928FAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___definition_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Mono.CSharp.IMemberDefinition::get_Name() */, IMemberDefinition_t7BD6D3ACB1480099EF288B5FFB498EBFA7928FAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Mono.CSharp.MemberSpec::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_get_IsAbstract_m40D1479CBA80312AFD9E20DC15DCD8DE384032DA (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___modifiers_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Mono.CSharp.MemberSpec::get_IsAccessor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_get_IsAccessor_mC2C67A29D1F9E4EEC4121A1841437DD70F0E7855 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___state_2;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)512)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Mono.CSharp.MemberSpec::set_IsAccessor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberSpec_set_IsAccessor_m1B5CA8A5537684F5E0F7E1FC8DB6582971C4BBE9 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, bool ___value0, const RuntimeMethod* method) 
{
	MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* G_B2_0 = NULL;
	MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___state_2;
		G_B3_0 = ((int32_t)(((int32_t)((int32_t)L_1&((int32_t)-513)))));
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0012:
	{
		int32_t L_2 = __this->___state_2;
		G_B3_0 = ((int32_t)(((int32_t)((int32_t)L_2|((int32_t)512)))));
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___state_2 = G_B3_0;
		return;
	}
}
// System.Boolean Mono.CSharp.MemberSpec::get_IsGeneric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_get_IsGeneric_m24EDC4FBA89ECA000B3CEF441BE8C0D1F7633DCA (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___state_2;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)1024)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Mono.CSharp.MemberSpec::set_IsGeneric(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberSpec_set_IsGeneric_mBA150E7499EC372C497EDDA1B40A4729BCA1EFCB (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, bool ___value0, const RuntimeMethod* method) 
{
	MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* G_B2_0 = NULL;
	MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___state_2;
		G_B3_0 = ((int32_t)(((int32_t)((int32_t)L_1&((int32_t)-1025)))));
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0012:
	{
		int32_t L_2 = __this->___state_2;
		G_B3_0 = ((int32_t)(((int32_t)((int32_t)L_2|((int32_t)1024)))));
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___state_2 = G_B3_0;
		return;
	}
}
// System.Boolean Mono.CSharp.MemberSpec::get_IsNotCSharpCompatible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_get_IsNotCSharpCompatible_m0AFAB33F874AFA86A9693686860777F6DA1F7170 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___state_2;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)131072)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Mono.CSharp.MemberSpec::set_IsNotCSharpCompatible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberSpec_set_IsNotCSharpCompatible_m63E5612039E592D1F09171B25F167D14A7FC9EB9 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, bool ___value0, const RuntimeMethod* method) 
{
	MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* G_B2_0 = NULL;
	MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___state_2;
		G_B3_0 = ((int32_t)(((int32_t)((int32_t)L_1&((int32_t)-131073)))));
		G_B3_1 = G_B1_0;
		goto IL_001e;
	}

IL_0012:
	{
		int32_t L_2 = __this->___state_2;
		G_B3_0 = ((int32_t)(((int32_t)((int32_t)L_2|((int32_t)131072)))));
		G_B3_1 = G_B2_0;
	}

IL_001e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___state_2 = G_B3_0;
		return;
	}
}
// System.Boolean Mono.CSharp.MemberSpec::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_get_IsPrivate_mB5D5DB661151A4FC7E6B9DD0CE22E2169854908B (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___modifiers_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Mono.CSharp.MemberSpec::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_get_IsPublic_m576971D14739D1C3F648374A75E298759F2634CD (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___modifiers_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Mono.CSharp.MemberSpec::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_get_IsStatic_mFD8F405A6F08772A3D0561A19B5BB054AFA6351C (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___modifiers_1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.ObsoleteAttribute Mono.CSharp.MemberSpec::GetAttributeObsolete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* MemberSpec_GetAttributeObsolete_mB04FC06070DA0343737AAC849F09A2E8119E689A (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemberDefinition_t7BD6D3ACB1480099EF288B5FFB498EBFA7928FAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* G_B4_0 = NULL;
	ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->___state_2;
		if (((int32_t)((int32_t)L_0&3)))
		{
			goto IL_000c;
		}
	}
	{
		return (ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A*)NULL;
	}

IL_000c:
	{
		int32_t L_1 = __this->___state_2;
		__this->___state_2 = ((int32_t)((int32_t)L_1&((int32_t)-2)));
		RuntimeObject* L_2 = __this->___definition_3;
		NullCheck(L_2);
		ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* L_3;
		L_3 = InterfaceFuncInvoker0< ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* >::Invoke(4 /* System.ObsoleteAttribute Mono.CSharp.IMemberDefinition::GetAttributeObsolete() */, IMemberDefinition_t7BD6D3ACB1480099EF288B5FFB498EBFA7928FAA_il2cpp_TypeInfo_var, L_2);
		ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* L_4 = L_3;
		G_B3_0 = L_4;
		if (!L_4)
		{
			G_B4_0 = L_4;
			goto IL_0037;
		}
	}
	{
		int32_t L_5 = __this->___state_2;
		__this->___state_2 = ((int32_t)((int32_t)L_5|2));
		G_B4_0 = G_B3_0;
	}

IL_0037:
	{
		return G_B4_0;
	}
}
// System.Collections.Generic.List`1<Mono.CSharp.MissingTypeSpecReference> Mono.CSharp.MemberSpec::GetMissingDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154* MemberSpec_GetMissingDependencies_m6AB68408BA2E3E442BD265CFBA5694D69398EEA0 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154* L_0;
		L_0 = MemberSpec_GetMissingDependencies_m16EBF30826E1A5F5A8038B6BB6B9EE46F1627190(__this, __this, NULL);
		return L_0;
	}
}
// System.Collections.Generic.List`1<Mono.CSharp.MissingTypeSpecReference> Mono.CSharp.MemberSpec::GetMissingDependencies(Mono.CSharp.MemberSpec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154* MemberSpec_GetMissingDependencies_m16EBF30826E1A5F5A8038B6BB6B9EE46F1627190 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* ___caller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementTypeSpec_t1E107D8DC289F63B322C8859BC395BFEDB97ECF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImportedDefinition_t3FA5B456C5B7F121CEE1BF9799987E21B3E5941C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154* V_0 = NULL;
	{
		int32_t L_0 = __this->___state_2;
		if (((int32_t)((int32_t)L_0&((int32_t)48))))
		{
			goto IL_000d;
		}
	}
	{
		return (List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154*)NULL;
	}

IL_000d:
	{
		int32_t L_1 = __this->___state_2;
		__this->___state_2 = ((int32_t)((int32_t)L_1&((int32_t)-17)));
		RuntimeObject* L_2 = __this->___definition_3;
		if (!((ImportedDefinition_t3FA5B456C5B7F121CEE1BF9799987E21B3E5941C*)IsInstClass((RuntimeObject*)L_2, ImportedDefinition_t3FA5B456C5B7F121CEE1BF9799987E21B3E5941C_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* L_3 = ___caller0;
		List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154* L_4;
		L_4 = VirtualFuncInvoker1< List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154*, MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* >::Invoke(7 /* System.Collections.Generic.List`1<Mono.CSharp.MissingTypeSpecReference> Mono.CSharp.MemberSpec::ResolveMissingDependencies(Mono.CSharp.MemberSpec) */, __this, L_3);
		V_0 = L_4;
		goto IL_0051;
	}

IL_0033:
	{
		if (!((ElementTypeSpec_t1E107D8DC289F63B322C8859BC395BFEDB97ECF8*)IsInstClass((RuntimeObject*)__this, ElementTypeSpec_t1E107D8DC289F63B322C8859BC395BFEDB97ECF8_il2cpp_TypeInfo_var)))
		{
			goto IL_004f;
		}
	}
	{
		NullCheck(((ElementTypeSpec_t1E107D8DC289F63B322C8859BC395BFEDB97ECF8*)CastclassClass((RuntimeObject*)__this, ElementTypeSpec_t1E107D8DC289F63B322C8859BC395BFEDB97ECF8_il2cpp_TypeInfo_var)));
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_5;
		L_5 = ElementTypeSpec_get_Element_mDC8F9630E918782949F485361A73CC5D845F0B2A_inline(((ElementTypeSpec_t1E107D8DC289F63B322C8859BC395BFEDB97ECF8*)CastclassClass((RuntimeObject*)__this, ElementTypeSpec_t1E107D8DC289F63B322C8859BC395BFEDB97ECF8_il2cpp_TypeInfo_var)), NULL);
		MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* L_6 = ___caller0;
		NullCheck(L_5);
		List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154* L_7;
		L_7 = MemberSpec_GetMissingDependencies_m16EBF30826E1A5F5A8038B6BB6B9EE46F1627190(L_5, L_6, NULL);
		V_0 = L_7;
		goto IL_0051;
	}

IL_004f:
	{
		V_0 = (List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154*)NULL;
	}

IL_0051:
	{
		List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_9 = __this->___state_2;
		__this->___state_2 = ((int32_t)((int32_t)L_9|((int32_t)32)));
	}

IL_0063:
	{
		List_1_t28E907DEC0C4D793CAFF60E884AC79CE9B8D9154* L_10 = V_0;
		return L_10;
	}
}
// System.Boolean Mono.CSharp.MemberSpec::IsNotCLSCompliant(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_IsNotCLSCompliant_m45F34124478A2F28071912EFB197B2EEA7B7C1A4 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, bool* ___attrValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemberDefinition_t7BD6D3ACB1480099EF288B5FFB498EBFA7928FAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = MemberSpec_get_MemberDefinition_mAD848667961881D4F253751A92B09AB10BBF4DC4_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		L_1 = InterfaceFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(0 /* System.Nullable`1<System.Boolean> Mono.CSharp.IMemberDefinition::get_CLSAttributeValue() */, IMemberDefinition_t7BD6D3ACB1480099EF288B5FFB498EBFA7928FAA_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool* L_2 = ___attrValue0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_3 = V_0;
		V_1 = L_3;
		bool L_4;
		L_4 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_1), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		G_B1_0 = L_2;
		if (L_4)
		{
			G_B2_0 = L_2;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_001b:
	{
		bool L_5;
		L_5 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_1), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_5));
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_6 = V_0;
		V_1 = L_6;
		V_2 = (bool)0;
		bool L_7;
		L_7 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_1), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		bool L_8 = V_2;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0033:
	{
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_1), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		return L_9;
	}
}
// System.String Mono.CSharp.MemberSpec::GetSignatureForDocumentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberSpec_GetSignatureForDocumentation_m8337C0269703DD212554B04F63BC8FC3C58170D0 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_0;
		L_0 = MemberSpec_get_DeclaringType_m6DE2BB6C790F14D412375998D53D761C0E204B39_inline(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Mono.CSharp.MemberSpec::GetSignatureForDocumentation() */, L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String Mono.CSharp.MemberSpec::get_Name() */, __this);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_2, NULL);
		return L_3;
	}
}
// System.String Mono.CSharp.MemberSpec::GetSignatureForError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberSpec_GetSignatureForError_m02D7245AACEEBCBD39E733FB835443D121C30DBB (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackingFieldDeclaration_t7D8D30EAEFB3837AD6FA5AE77D15BAC675689387_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	BackingFieldDeclaration_t7D8D30EAEFB3837AD6FA5AE77D15BAC675689387* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = MemberSpec_get_MemberDefinition_mAD848667961881D4F253751A92B09AB10BBF4DC4_inline(__this, NULL);
		V_0 = ((BackingFieldDeclaration_t7D8D30EAEFB3837AD6FA5AE77D15BAC675689387*)IsInstSealed((RuntimeObject*)L_0, BackingFieldDeclaration_t7D8D30EAEFB3837AD6FA5AE77D15BAC675689387_il2cpp_TypeInfo_var));
		BackingFieldDeclaration_t7D8D30EAEFB3837AD6FA5AE77D15BAC675689387* L_1 = V_0;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String Mono.CSharp.MemberSpec::get_Name() */, __this);
		V_1 = L_2;
		goto IL_0029;
	}

IL_0018:
	{
		BackingFieldDeclaration_t7D8D30EAEFB3837AD6FA5AE77D15BAC675689387* L_3 = V_0;
		NullCheck(L_3);
		Property_t6C97FAAC2707D6F98A4B830C045A02B484D765EA* L_4;
		L_4 = BackingFieldDeclaration_get_OriginalProperty_m76D2E4564B15E3B9EA614FADF2760D489047354F_inline(L_3, NULL);
		NullCheck(L_4);
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_5;
		L_5 = MemberCore_get_MemberName_m16D36021FD32FFCD05BA9443F8DD5A3D4252FF5D_inline(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6 = L_5->___Name_1;
		V_1 = L_6;
	}

IL_0029:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_7;
		L_7 = MemberSpec_get_DeclaringType_m6DE2BB6C790F14D412375998D53D761C0E204B39_inline(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String Mono.CSharp.MemberSpec::GetSignatureForError() */, L_7);
		String_t* L_9 = V_1;
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_9, NULL);
		return L_10;
	}
}
// Mono.CSharp.MemberSpec Mono.CSharp.MemberSpec::InflateMember(Mono.CSharp.TypeParameterInflator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* MemberSpec_InflateMember_m14154E3F31F7155AB75C639506176BDE2BCAC99A (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, TypeParameterInflator_tAE61C211343A7100A0F509ADEEC16EA4F01BCEE4 ___inflator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		V_0 = ((MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8*)CastclassClass((RuntimeObject*)L_0, MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8_il2cpp_TypeInfo_var));
		MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* L_1 = V_0;
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_2;
		L_2 = TypeParameterInflator_get_TypeInstance_m7448B4953E5E9716C2FD345F2BAFCDAB6D49C9A2_inline((&___inflator0), NULL);
		NullCheck(L_1);
		L_1->___declaringType_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___declaringType_5), (void*)L_2);
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_3;
		L_3 = MemberSpec_get_DeclaringType_m6DE2BB6C790F14D412375998D53D761C0E204B39_inline(__this, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = TypeSpec_get_IsGenericOrParentIsGeneric_mA77AA2D25C96DE0134E222D3DDF88DE29E2EE9E6(L_3, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* L_5 = V_0;
		MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = L_6->___state_2;
		NullCheck(L_6);
		L_6->___state_2 = ((int32_t)((int32_t)L_7|((int32_t)4096)));
	}

IL_0038:
	{
		MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Mono.CSharp.MemberSpec::IsAccessible(Mono.CSharp.IMemberContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_IsAccessible_mF7C3C028CF7639204F3791A7B9B69CB200664E9E (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, RuntimeObject* ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemberContext_t02991223F3FEC57045D9FA372DB500892FFE0B7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModuleContext_t8DC5CDC7042ADC67FD83F5131ADEBE4C5CA21489_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* V_1 = NULL;
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	{
		int32_t L_0;
		L_0 = MemberSpec_get_Modifiers_m39EEE8049BD4DC30E7EB1E13494B1C2E8456707C_inline(__this, NULL);
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)15)));
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}

IL_0010:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_2;
		L_2 = MemberSpec_get_DeclaringType_m6DE2BB6C790F14D412375998D53D761C0E204B39_inline(__this, NULL);
		V_1 = L_2;
		RuntimeObject* L_3 = ___ctx0;
		NullCheck(L_3);
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_4;
		L_4 = InterfaceFuncInvoker0< TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* >::Invoke(0 /* Mono.CSharp.TypeSpec Mono.CSharp.IMemberContext::get_CurrentType() */, IMemberContext_t02991223F3FEC57045D9FA372DB500892FFE0B7F_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)4))))
		{
			goto IL_0047;
		}
	}
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_7 = V_1;
		if (L_7)
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = TypeSpec_get_MemberDefinition_m39FDBD0A7AA64A224B5502E5226B9D83178526A9(L_8, NULL);
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_10 = V_2;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = TypeSpec_get_MemberDefinition_m39FDBD0A7AA64A224B5502E5226B9D83178526A9(L_10, NULL);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)L_11))))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)1;
	}

IL_003a:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_12 = V_2;
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_13 = V_1;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = TypeSpec_get_MemberDefinition_m39FDBD0A7AA64A224B5502E5226B9D83178526A9(L_13, NULL);
		bool L_15;
		L_15 = TypeManager_IsNestedChildOf_mC7D3BC68AED5B962721BD7467C432EF80DB71ADD(L_12, L_14, NULL);
		return L_15;
	}

IL_0047:
	{
		int32_t L_16 = V_0;
		if (!((int32_t)((int32_t)L_16&8)))
		{
			goto IL_00b3;
		}
	}
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_17 = V_2;
		if (!L_17)
		{
			goto IL_005c;
		}
	}
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_18 = V_2;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = TypeSpec_get_MemberDefinition_m39FDBD0A7AA64A224B5502E5226B9D83178526A9(L_18, NULL);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Mono.CSharp.IAssemblyDefinition Mono.CSharp.ITypeDefinition::get_DeclaringAssembly() */, ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var, L_19);
		G_B13_0 = L_20;
		goto IL_006b;
	}

IL_005c:
	{
		RuntimeObject* L_21 = ___ctx0;
		NullCheck(L_21);
		ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* L_22;
		L_22 = InterfaceFuncInvoker0< ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* >::Invoke(0 /* Mono.CSharp.ModuleContainer Mono.CSharp.IModuleContext::get_Module() */, IModuleContext_t8DC5CDC7042ADC67FD83F5131ADEBE4C5CA21489_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_22);
		AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4* L_23;
		L_23 = ModuleContainer_get_DeclaringAssembly_mA530F7AF1609929909AD333C386ACB047E986946_inline(L_22, NULL);
		V_5 = L_23;
		RuntimeObject* L_24 = V_5;
		G_B13_0 = L_24;
	}

IL_006b:
	{
		V_4 = G_B13_0;
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_25 = V_1;
		if (L_25)
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject* L_26;
		L_26 = MemberSpec_get_MemberDefinition_mAD848667961881D4F253751A92B09AB10BBF4DC4_inline(__this, NULL);
		RuntimeObject* L_27 = V_4;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_26, ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var)));
		bool L_28;
		L_28 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(11 /* System.Boolean Mono.CSharp.ITypeDefinition::IsInternalAsPublic(Mono.CSharp.IAssemblyDefinition) */, ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_26, ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var)), L_27);
		V_3 = L_28;
		goto IL_0098;
	}

IL_0085:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_29;
		L_29 = MemberSpec_get_DeclaringType_m6DE2BB6C790F14D412375998D53D761C0E204B39_inline(__this, NULL);
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = TypeSpec_get_MemberDefinition_m39FDBD0A7AA64A224B5502E5226B9D83178526A9(L_29, NULL);
		RuntimeObject* L_31 = V_4;
		NullCheck(L_30);
		bool L_32;
		L_32 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(11 /* System.Boolean Mono.CSharp.ITypeDefinition::IsInternalAsPublic(Mono.CSharp.IAssemblyDefinition) */, ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var, L_30, L_31);
		V_3 = L_32;
	}

IL_0098:
	{
		bool L_33 = V_3;
		if (L_33)
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_34 = V_0;
		if ((!(((uint32_t)L_34) == ((uint32_t)8))))
		{
			goto IL_00b3;
		}
	}

IL_009f:
	{
		bool L_35 = V_3;
		return L_35;
	}

IL_00a1:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_36 = V_2;
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_37 = V_1;
		bool L_38;
		L_38 = TypeManager_IsFamilyAccessible_m2CA4299EE8D576D059934F0802CCDEFE33C188E3(L_36, L_37, NULL);
		if (!L_38)
		{
			goto IL_00ac;
		}
	}
	{
		return (bool)1;
	}

IL_00ac:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_39 = V_2;
		NullCheck(L_39);
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_40;
		L_40 = MemberSpec_get_DeclaringType_m6DE2BB6C790F14D412375998D53D761C0E204B39_inline(L_39, NULL);
		V_2 = L_40;
	}

IL_00b3:
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_41 = V_2;
		if (L_41)
		{
			goto IL_00a1;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean Mono.CSharp.MemberSpec::IsCLSCompliant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_IsCLSCompliant_m69BE9F74E3A4FEE35C99E8DC09D67EBF0C4F1DB2 (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAssemblyDefinition_tB6C576CD5BA1C75C44CC6EA7F4F4AD547F18068B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = __this->___state_2;
		if (!((int32_t)((int32_t)L_0&4)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_1 = __this->___state_2;
		__this->___state_2 = ((int32_t)((int32_t)L_1&((int32_t)-5)));
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, bool* >::Invoke(8 /* System.Boolean Mono.CSharp.MemberSpec::IsNotCLSCompliant(System.Boolean&) */, __this, (&V_0));
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		return (bool)0;
	}

IL_0025:
	{
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0054;
		}
	}
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_4;
		L_4 = MemberSpec_get_DeclaringType_m6DE2BB6C790F14D412375998D53D761C0E204B39_inline(__this, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_5;
		L_5 = MemberSpec_get_DeclaringType_m6DE2BB6C790F14D412375998D53D761C0E204B39_inline(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = MemberSpec_IsCLSCompliant_m69BE9F74E3A4FEE35C99E8DC09D67EBF0C4F1DB2(L_5, NULL);
		V_0 = L_6;
		goto IL_0054;
	}

IL_003e:
	{
		RuntimeObject* L_7;
		L_7 = MemberSpec_get_MemberDefinition_mAD848667961881D4F253751A92B09AB10BBF4DC4_inline(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_7, ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var)));
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Mono.CSharp.IAssemblyDefinition Mono.CSharp.ITypeDefinition::get_DeclaringAssembly() */, ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_7, ITypeDefinition_t003B486110AD5AB1228073439B8A75D3BF6B1FE8_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean Mono.CSharp.IAssemblyDefinition::get_IsCLSCompliant() */, IAssemblyDefinition_tB6C576CD5BA1C75C44CC6EA7F4F4AD547F18068B_il2cpp_TypeInfo_var, L_8);
		V_0 = L_9;
	}

IL_0054:
	{
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_11 = __this->___state_2;
		__this->___state_2 = ((int32_t)((int32_t)L_11|8));
	}

IL_0065:
	{
		int32_t L_12 = __this->___state_2;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_12&8))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean Mono.CSharp.MemberSpec::IsConditionallyExcluded(Mono.CSharp.IMemberContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberSpec_IsConditionallyExcluded_m1764B7D202124435BF4E136DB00F8D8A38E0426F (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, RuntimeObject* ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemberContext_t02991223F3FEC57045D9FA372DB500892FFE0B7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemberDefinition_t7BD6D3ACB1480099EF288B5FFB498EBFA7928FAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* V_1 = NULL;
	CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* V_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		int32_t L_0 = __this->___Kind_4;
		if (((int32_t)((int32_t)L_0&((int32_t)2056))))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		RuntimeObject* L_1;
		L_1 = MemberSpec_get_MemberDefinition_mAD848667961881D4F253751A92B09AB10BBF4DC4_inline(__this, NULL);
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = InterfaceFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(3 /* System.String[] Mono.CSharp.IMemberDefinition::ConditionalConditions() */, IMemberDefinition_t7BD6D3ACB1480099EF288B5FFB498EBFA7928FAA_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		RuntimeObject* L_4 = ___ctx0;
		NullCheck(L_4);
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_5;
		L_5 = InterfaceFuncInvoker0< MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* >::Invoke(2 /* Mono.CSharp.MemberCore Mono.CSharp.IMemberContext::get_CurrentMemberDefinition() */, IMemberContext_t02991223F3FEC57045D9FA372DB500892FFE0B7F_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		V_2 = (CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736*)NULL;
		goto IL_003a;
	}

IL_002c:
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_6 = V_1;
		V_2 = ((CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736*)IsInstClass((RuntimeObject*)L_6, CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736_il2cpp_TypeInfo_var));
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_7 = V_1;
		NullCheck(L_7);
		TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* L_8 = L_7->___Parent_3;
		V_1 = L_8;
	}

IL_003a:
	{
		MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_10 = V_2;
		if (!L_10)
		{
			goto IL_002c;
		}
	}

IL_0040:
	{
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_0;
		V_3 = L_12;
		V_4 = 0;
		goto IL_0062;
	}

IL_004a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_3;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = L_16;
		CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* L_17 = V_2;
		String_t* L_18 = V_5;
		NullCheck(L_17);
		bool L_19;
		L_19 = CompilationSourceFile_IsConditionalDefined_mB41C522347AC284AFA07CA1EDCA5304B96B9E8B4(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0062:
	{
		int32_t L_21 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_004a;
		}
	}

IL_0069:
	{
		return (bool)1;
	}
}
// System.String Mono.CSharp.MemberSpec::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberSpec_ToString_mE9AABC177997AE04CD0198CC58B813B85BAE12BC (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String Mono.CSharp.MemberSpec::GetSignatureForError() */, __this);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LocatedToken_get_Value_m263F59DAA5084E7D2F377B82EFA1A66E86C13E24_inline (LocatedToken_t2B1ADDAFBC27DB0AF4381BA8AD2B9010DB77B5B5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F Expression_get_Location_m3D9275E6E3D4C3F546D8E638F0B2533C38258620_inline (Expression_t765E7793407091A8450573D552B39FDD6121FF49* __this, const RuntimeMethod* method) 
{
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_0 = __this->___loc_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* CompilationSourceFile_get_SourceFile_mD4C9C9D916DD200F3CAC75049E6B186FEE999C02_inline (CompilationSourceFile_t6EF52FCEB70E0F75AF7118D66FF41A6F37CC7736* __this, const RuntimeMethod* method) 
{
	{
		SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* L_0 = __this->___file_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* ParserSession_get_LocatedTokens_m7F7D94B39EF86CC0C50FAB086BC4C9F2DCCBAE6B_inline (ParserSession_tE9F339A49DFCF899A338AE7D39CA9BAF6988447E* __this, const RuntimeMethod* method) 
{
	{
		LocatedTokenU5BU5D_t48677F85F4AA6FD97960E3555752C642C6211CEF* L_0 = __this->___U3CLocatedTokensU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* CompilerContext_get_Settings_mBF6DA3802D38BEACF92B2A53EED428894A8697A6_inline (CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* __this, const RuntimeMethod* method) 
{
	{
		CompilerSettings_t9A4FD2742C9A676DBFB26C547E1074EDD46DE716* L_0 = __this->___settings_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* CompilerContext_get_BuiltinTypes_m6BDE437BF87EAFA4496819BC135898EB07B071AB_inline (CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* __this, const RuntimeMethod* method) 
{
	{
		BuiltinTypes_t89A7492FC7DFD59BA72E40481D606E1D818AAF1B* L_0 = __this->___builtin_types_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SourceFile_get_Checksum_m29CBF0D9BFC3F9C5983F7461E0DEBE5D01432D4B_inline (SourceFile_tEAB34711BD66E0304202BEEB5E88DC65AB364C12* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___checksum_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* CompilerContext_get_Report_mA84DAB5EC71A6AC5A70003D9FE5D7A2226984DDD_inline (CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* __this, const RuntimeMethod* method) 
{
	{
		Report_tFEA2AE6C5592FE8FC6E9FECF4DDFC810D769AD27* L_0 = __this->___report_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tokenizer_get_doc_state_m176FCD00A57BE1E90AA05268FE9AC71825968539_inline (Tokenizer_t0E743D604A8778C3CD0023AE01C6812B9FC5A501* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___xml_doc_state_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* TypeContainer_get_PartialContainer_m1B9CD976A1A9B2318B261A6FFF3679675E0DFF46_inline (TypeContainer_tACC063BF303EE06992C274E881441749112C8AD4* __this, const RuntimeMethod* method) 
{
	{
		TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* L_0 = __this->___main_container_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemberCore_get_ModFlags_mF502E8027723AFDB12CD495F27FBB829F16DF9BA_inline (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___mod_flags_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyBase_t7861DAC749F3B502B1F573B39E9C3A1F2E4AE78A* PropertyMethod_get_Property_mEA0F1CB5124C72DB173B02E38F25D261BDAA069A_inline (PropertyMethod_tFC5084CFB2DD9F48CF64A4F359484D7879BE0729* __this, const RuntimeMethod* method) 
{
	{
		PropertyBase_t7861DAC749F3B502B1F573B39E9C3A1F2E4AE78A* L_0 = __this->___method_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SimpleMemberName_tF82E5572C2318BC857235349241DACE90C310C12* Constraints_get_TypeParameter_mB18B345E5E93C33C643E708B63B4BFA1782B3EDA_inline (Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* __this, const RuntimeMethod* method) 
{
	{
		SimpleMemberName_tF82E5572C2318BC857235349241DACE90C310C12* L_0 = __this->___tparam_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F Constraints_get_Location_mD57166C0D0D07FB4DAA99994BBFBDE9D1C18E9DE_inline (Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* __this, const RuntimeMethod* method) 
{
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_0 = __this->___loc_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypeParameter_set_Constraints_mA71527E68CD7B95F84EA1F454346B49AE6248A96_inline (TypeParameter_t2B529F20F82AE20A38AB99CBA0E31D7F88E12EF2* __this, Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* ___value0, const RuntimeMethod* method) 
{
	{
		Constraints_t28A50147F78E2D16B0142B666C5F3F36BDE5DBE3* L_0 = ___value0;
		__this->___constraints_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___constraints_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* Attributable_get_OptAttributes_m76221D813DCA68D74D95082325387D9D38D7D0D0_inline (Attributable_t85D0C16B87884F896200C7B379A7026B7317E9CC* __this, const RuntimeMethod* method) 
{
	{
		Attributes_t18199AFA714440049B766B8AC83BA2D3939BD708* L_0 = __this->___attributes_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PredefinedAttributes_t57CF082A2D3A84BDE14293D534774A98E3C51A3D* ModuleContainer_get_PredefinedAttributes_mB95732B524E5A581FB7224BF03FA58AB06F12801_inline (ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* __this, const RuntimeMethod* method) 
{
	{
		PredefinedAttributes_t57CF082A2D3A84BDE14293D534774A98E3C51A3D* L_0 = __this->___predefined_attributes_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* MemberSpec_get_DeclaringType_m6DE2BB6C790F14D412375998D53D761C0E204B39_inline (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_0 = __this->___declaringType_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemberSpec_get_Modifiers_m39EEE8049BD4DC30E7EB1E13494B1C2E8456707C_inline (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___modifiers_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4* ModuleContainer_get_DeclaringAssembly_mA530F7AF1609929909AD333C386ACB047E986946_inline (ModuleContainer_tBAC0EF32EE595E5B2CC2FD645C20727F8F0AB4C3* __this, const RuntimeMethod* method) 
{
	{
		AssemblyDefinition_tFF9D1587543E52156850258EB37594AF13D4A4E4* L_0 = __this->___assembly_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F Attribute_get_Location_m4100C4CD567A86EF2AE254B70D1C8707A2391F47_inline (Attribute_tD79CC8E58B3C22125CA566F04F80043431067D8B* __this, const RuntimeMethod* method) 
{
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_0 = __this->___loc_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* MemberCore_get_MemberName_m16D36021FD32FFCD05BA9443F8DD5A3D4252FF5D_inline (MemberCore_t32296A10D474448F6AD9B11A7D056AEAE43C8791* __this, const RuntimeMethod* method) 
{
	{
		MemberName_tCC8E5C00EC7C54FD96920FBE160CEAA8A9CC6284* L_0 = __this->___member_name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ElementTypeSpec_get_Element_mDC8F9630E918782949F485361A73CC5D845F0B2A_inline (ElementTypeSpec_t1E107D8DC289F63B322C8859BC395BFEDB97ECF8* __this, const RuntimeMethod* method) 
{
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_0 = __this->___U3CElementU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MemberSpec_get_MemberDefinition_mAD848667961881D4F253751A92B09AB10BBF4DC4_inline (MemberSpec_t85B82DECA3D1EAB1C93F1200254FC070117981C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___definition_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Property_t6C97FAAC2707D6F98A4B830C045A02B484D765EA* BackingFieldDeclaration_get_OriginalProperty_m76D2E4564B15E3B9EA614FADF2760D489047354F_inline (BackingFieldDeclaration_t7D8D30EAEFB3837AD6FA5AE77D15BAC675689387* __this, const RuntimeMethod* method) 
{
	{
		Property_t6C97FAAC2707D6F98A4B830C045A02B484D765EA* L_0 = __this->___property_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* TypeParameterInflator_get_TypeInstance_m7448B4953E5E9716C2FD345F2BAFCDAB6D49C9A2_inline (TypeParameterInflator_tAE61C211343A7100A0F509ADEEC16EA4F01BCEE4* __this, const RuntimeMethod* method) 
{
	{
		TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* L_0 = __this->___type_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m275C153933BEFF417D72F1BD5976E41A77DE23B6_gshared_inline (List_1_t124684566062F37FF59D2D03C2F0187ADEA53771* __this, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___item0, const RuntimeMethod* method) 
{
	LocationU5BU5D_t195DF0270FB27D79826996D4A5F1780C89F3E7B3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		LocationU5BU5D_t195DF0270FB27D79826996D4A5F1780C89F3E7B3* L_1 = (LocationU5BU5D_t195DF0270FB27D79826996D4A5F1780C89F3E7B3*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		LocationU5BU5D_t195DF0270FB27D79826996D4A5F1780C89F3E7B3* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		LocationU5BU5D_t195DF0270FB27D79826996D4A5F1780C89F3E7B3* L_6 = V_0;
		int32_t L_7 = V_1;
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F)L_8);
		return;
	}

IL_0034:
	{
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_9 = ___item0;
		((  void (*) (List_1_t124684566062F37FF59D2D03C2F0187ADEA53771*, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		uint8_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_8);
		return;
	}

IL_0034:
	{
		uint8_t L_9 = ___item0;
		((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_gshared_inline (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD7C58157E038255E7D2C956BEC020F4835682CA_gshared_inline (Stack_1_t8D3186FE2509C55DBAB6874CCCFA5F9713856E10* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___value_1;
		return L_0;
	}
}
