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

// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CompilerServices.SymbolWriter.AnonymousScopeEntry>
struct Dictionary_2_tB2A2DD9CE4AD18999E6D1B758611D42FC8A3F46E;
// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CompilerServices.SymbolWriter.CompileUnitEntry>
struct Dictionary_2_t0E7795843FF9461364317090380DAE89E72E0129;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CompilerServices.SymbolWriter.MethodEntry>
struct Dictionary_2_t68A729DB2681B958C040CFEB7F6E317E07021737;
// System.Collections.Generic.Dictionary`2<System.Int32,Mono.CompilerServices.SymbolWriter.SourceFileEntry>
struct Dictionary_2_t69FDAFC254C5DD792B4854F9EF4547BFB577A3AE;
// System.Collections.Generic.Dictionary`2<System.Object,Mono.CompilerServices.SymbolWriter.LocalVariableEntry>
struct Dictionary_2_t9D7A9116F07DC5DC4D3C68BB99A7DCA0D42A49BF;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,Mono.CompilerServices.SymbolWriter.LocalVariableEntry>
struct Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Mono.CompilerServices.SymbolWriter.LocalVariableEntry>
struct KeyCollection_tA27A09F76E2699892C08326EABE5A1936F02BF98;
// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>
struct List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E;
// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.CompileUnitEntry>
struct List_1_t21ECA163DE9069A39635956F4777B0995F5685D7;
// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LineNumberEntry>
struct List_1_t131E16D69BAD909D8931F32E827761AD183C0474;
// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LocalVariableEntry>
struct List_1_t504F807CA014CA67521A129AAE80D72629E16A3F;
// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.MethodEntry>
struct List_1_tE72E827E61BA3FD0B7618ECDDF2B6779E85094BC;
// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.NamespaceEntry>
struct List_1_t3CA94038EEB68D3E080094F3F425D749E5D1885A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.ScopeVariable>
struct List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A;
// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.SourceFileEntry>
struct List_1_tF87E3A8EADAEA4FD6477E6BAD6C6F60DCAD29BF1;
// System.Collections.Generic.Stack`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>
struct Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Mono.CompilerServices.SymbolWriter.LocalVariableEntry>
struct ValueCollection_t6D1733B1256A88BB80683B19B566B44D345D1D8D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Mono.CompilerServices.SymbolWriter.LocalVariableEntry>[]
struct EntryU5BU5D_t75C9C01C9AF5FF11473EDAAA5509091C1563B133;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Mono.CompilerServices.SymbolWriter.CodeBlockEntry[]
struct CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// Mono.CompilerServices.SymbolWriter.LineNumberEntry[]
struct LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682;
// Mono.CompilerServices.SymbolWriter.LocalVariableEntry[]
struct LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Mono.CompilerServices.SymbolWriter.ScopeVariable[]
struct ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// Mono.CompilerServices.SymbolWriter.CodeBlockEntry
struct CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// Mono.CompilerServices.SymbolWriter.CompileUnitEntry
struct CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631;
// Mono.Security.Cryptography.CryptoConvert
struct CryptoConvert_t9D12BC91CDF18F6AD3FCD5A31646B186D4577CC6;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F;
// System.Security.Cryptography.CspParameters
struct CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Security.Cryptography.DSA
struct DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41;
// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t93F6FE86F625186D42535B8E70AE3094A24367EB;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// Mono.CompilerServices.SymbolWriter.ICompileUnit
struct ICompileUnit_t68B68D4BD294166B6BE531EB2CDE65F2E12A822D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Mono.CompilerServices.SymbolWriter.IMethodDef
struct IMethodDef_tD9A0C0FF1DCAEE5E82160705E7F9E247E45D360F;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6;
// Mono.CompilerServices.SymbolWriter.LineNumberEntry
struct LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7;
// Mono.CompilerServices.SymbolWriter.LineNumberTable
struct LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E;
// Mono.CompilerServices.SymbolWriter.MethodEntry
struct MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365;
// Mono.CompilerServices.SymbolWriter.MonoSymbolFile
struct MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB;
// Mono.CompilerServices.SymbolWriter.MonoSymbolFileException
struct MonoSymbolFileException_t18E4D2638AAFC152AA16960F8270B0F676502777;
// Mono.CompilerServices.SymbolWriter.MyBinaryReader
struct MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296;
// Mono.CompilerServices.SymbolWriter.MyBinaryWriter
struct MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// Mono.CompilerServices.SymbolWriter.OffsetTable
struct OffsetTable_tB70460631855C3268C1794D1ED985FF8ACCE73CE;
// System.Security.Cryptography.RSA
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Mono.CompilerServices.SymbolWriter.SourceFileEntry
struct SourceFileEntry_tAE8059F2AAB5300BE9F9686F79F7FBDE79024D63;
// Mono.CompilerServices.SymbolWriter.SourceMethodBuilder
struct SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Mono.CompilerServices.SymbolWriter.LineNumberEntry/LocationComparer
struct LocationComparer_tC4E2576674989C6A014E6ED99EE8DF270FC88674;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICompileUnit_t68B68D4BD294166B6BE531EB2CDE65F2E12A822D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMethodDef_tD9A0C0FF1DCAEE5E82160705E7F9E247E45D360F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t131E16D69BAD909D8931F32E827761AD183C0474_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t504F807CA014CA67521A129AAE80D72629E16A3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocationComparer_tC4E2576674989C6A014E6ED99EE8DF270FC88674_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoSymbolFileException_t18E4D2638AAFC152AA16960F8270B0F676502777_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04BF76CC5FA781651FBAB40F0114159408E0A8E4;
IL2CPP_EXTERN_C String_t* _stringLiteral089B51603CD331D481FB97A66A3BCF6B69910A2D;
IL2CPP_EXTERN_C String_t* _stringLiteral0A796170302D4ECCE2B27627900D3B9D9A3D3399;
IL2CPP_EXTERN_C String_t* _stringLiteral3E7CDEF88C7996492BB7E1E0B7EACB28D5FA9942;
IL2CPP_EXTERN_C String_t* _stringLiteral64A37F267E22F574EC11C460E2100E5363519166;
IL2CPP_EXTERN_C String_t* _stringLiteral68EBFD53AB7351290BEC0E0677DF3FB55BCC5B1B;
IL2CPP_EXTERN_C String_t* _stringLiteral6E0DF06A17D39B9B051D58F259077F8A9AB6420A;
IL2CPP_EXTERN_C String_t* _stringLiteral9DA9E036CD70BC51B1B4D9FE71E664789891DB82;
IL2CPP_EXTERN_C String_t* _stringLiteralA803B5C4A99B0047C0E51A12E4F4FB254788BE99;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD;
IL2CPP_EXTERN_C String_t* _stringLiteralC24D4BB26A0E7B6991C0CC8ED4750FA1E3DA9A86;
IL2CPP_EXTERN_C String_t* _stringLiteralCAC57339D310D7C52C93208857637C74016D51CA;
IL2CPP_EXTERN_C String_t* _stringLiteralD7764DAE340A30DF12CAC1D83DBBA792E904A118;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoConvert_FromCapiKeyBlobDSA_mAF2E3C45876AF0740E2F920AF2FBF4D7E95AC27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoConvert_FromCapiKeyBlob_m24C4FE38E61CF65D9EC7AEA5EDB17856B4E24C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoConvert_FromCapiPrivateKeyBlobDSA_m8699F0FC7431A6D5BC7F50A4B8586AE8ED0D901F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoConvert_FromCapiPrivateKeyBlob_mC20AB6ADD36C51060199E6E6B896F0C10B371686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoConvert_FromCapiPublicKeyBlobDSA_mDE9A95D0B607E19C567A1EE012FA45C328DD100C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoConvert_FromCapiPublicKeyBlob_mDBB1FBFD641AE816C1323EF84777BEAE34129858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoConvert_FromHexChar_mE319F9D0D0879218BA2F529F447FC8250D60B427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoConvert_FromHex_m502BD546734727FF346AF8822973CD602958BDA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoConvert_ToCapiKeyBlob_m6590F48441E56EA11A126EB727FCEEAE4EADE6EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoConvert_ToCapiKeyBlob_m9F75148674A8134C0234D96351659690482A9219_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoConvert_ToCapiKeyBlob_mE204BA266322E69C7157E89F33D63871FC8A02BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m07331C3ACB4B57F2B95C0707B98864A1463680E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m8E28CB8BFAB7B07A80486E162EDA0D77DC7BBA6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBA7638F90B571A876FC528F29D478218DBDA8028_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5281C502FD03EDADD1A5D46CAC0BBB6587188395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m87AD398778DB1D31D3AB755704565AC835DC9DAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC1B9B1B33CED86692DCE632400585AE8680FCC5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDC840E876C6B054C905E9C9DCA061A25B02FCCBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_mCEFD84B3A71B51F4F217BDCD80B40538AAB2DB69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9E8D0298018B2316AFB6A97348F125624362C9BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mA707E29D9E3F7930E4F11A2164EFAFBE2003943F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mC3A94B68D113C92D9DDD2AEB756A98E6788C51E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1DF0970A29577F8E40C7CD3BD22570F5FB25D38B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m466237C3BD3CA64B0B9B12E4F2D805506242CC93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4F43ECFF4B04FBF6EA887AF7BF552BD95F247BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD40056B31951C1FAB921DAE7396C2D45911348DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m802BCC7C199236F6A0A9D2A1099E10361A62F7A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE587E0F7D1DC791314F679254E36E7AA845C8118_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6D90485EDAD2935E3692ED8660552CFA2076E9D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m4139AA331A407682416EA73FFDF8203ECA7848A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodEntry_CheckLineNumberTable_mDD6B7358DBB4A85E8185B8EB6D3846696A33CDE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodEntry_WriteData_mBBCF3F7F726B6CC6DD6E4970631A11AFDDBD9F1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodEntry_Write_mA81BFD36D29F4D96CECF75AC837082CE78A4B9B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_mF35DD40D75677DC00DD3EF124CBCDC9605746826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m61A940008508D306AD9CEA8A102AED24E408C943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m295DA8C7C60E81F646F4845BCFC44C29E839DF70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m5B49490C8E444A40DD6D5E8402E63DD0F9B390EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m8DA1897B26FEF5322B60F2A24C5D08F9B7E156A8_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5;
struct LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682;
struct LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Mono.CompilerServices.SymbolWriter.LocalVariableEntry>
struct Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t75C9C01C9AF5FF11473EDAAA5509091C1563B133* ____entries_1;
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
	KeyCollection_tA27A09F76E2699892C08326EABE5A1936F02BF98* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t6D1733B1256A88BB80683B19B566B44D345D1D8D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>
struct List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LineNumberEntry>
struct List_1_t131E16D69BAD909D8931F32E827761AD183C0474  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t131E16D69BAD909D8931F32E827761AD183C0474_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LocalVariableEntry>
struct List_1_t504F807CA014CA67521A129AAE80D72629E16A3F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t504F807CA014CA67521A129AAE80D72629E16A3F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.ScopeVariable>
struct List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>
struct Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};
struct Il2CppArrayBounds;

// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_1;
};

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// Mono.CompilerServices.SymbolWriter.CodeBlockEntry
struct CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D  : public RuntimeObject
{
	// System.Int32 Mono.CompilerServices.SymbolWriter.CodeBlockEntry::Index
	int32_t ___Index_0;
	// System.Int32 Mono.CompilerServices.SymbolWriter.CodeBlockEntry::Parent
	int32_t ___Parent_1;
	// Mono.CompilerServices.SymbolWriter.CodeBlockEntry/Type Mono.CompilerServices.SymbolWriter.CodeBlockEntry::BlockType
	int32_t ___BlockType_2;
	// System.Int32 Mono.CompilerServices.SymbolWriter.CodeBlockEntry::StartOffset
	int32_t ___StartOffset_3;
	// System.Int32 Mono.CompilerServices.SymbolWriter.CodeBlockEntry::EndOffset
	int32_t ___EndOffset_4;
};

// Mono.CompilerServices.SymbolWriter.CompileUnitEntry
struct CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631  : public RuntimeObject
{
	// System.Int32 Mono.CompilerServices.SymbolWriter.CompileUnitEntry::Index
	int32_t ___Index_0;
	// System.Int32 Mono.CompilerServices.SymbolWriter.CompileUnitEntry::DataOffset
	int32_t ___DataOffset_1;
	// Mono.CompilerServices.SymbolWriter.MonoSymbolFile Mono.CompilerServices.SymbolWriter.CompileUnitEntry::file
	MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file_2;
	// Mono.CompilerServices.SymbolWriter.SourceFileEntry Mono.CompilerServices.SymbolWriter.CompileUnitEntry::source
	SourceFileEntry_tAE8059F2AAB5300BE9F9686F79F7FBDE79024D63* ___source_3;
	// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.SourceFileEntry> Mono.CompilerServices.SymbolWriter.CompileUnitEntry::include_files
	List_1_tF87E3A8EADAEA4FD6477E6BAD6C6F60DCAD29BF1* ___include_files_4;
	// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.NamespaceEntry> Mono.CompilerServices.SymbolWriter.CompileUnitEntry::namespaces
	List_1_t3CA94038EEB68D3E080094F3F425D749E5D1885A* ___namespaces_5;
	// System.Boolean Mono.CompilerServices.SymbolWriter.CompileUnitEntry::creating
	bool ___creating_6;
};

// Mono.Security.Cryptography.CryptoConvert
struct CryptoConvert_t9D12BC91CDF18F6AD3FCD5A31646B186D4577CC6  : public RuntimeObject
{
};

// System.Security.Cryptography.CspParameters
struct CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_0;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_1;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_2;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_3;
	// System.Int32 System.Security.Cryptography.CspParameters::m_flags
	int32_t ___m_flags_4;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Mono.CompilerServices.SymbolWriter.LineNumberEntry
struct LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7  : public RuntimeObject
{
	// System.Int32 Mono.CompilerServices.SymbolWriter.LineNumberEntry::Row
	int32_t ___Row_0;
	// System.Int32 Mono.CompilerServices.SymbolWriter.LineNumberEntry::Column
	int32_t ___Column_1;
	// System.Int32 Mono.CompilerServices.SymbolWriter.LineNumberEntry::EndRow
	int32_t ___EndRow_2;
	// System.Int32 Mono.CompilerServices.SymbolWriter.LineNumberEntry::EndColumn
	int32_t ___EndColumn_3;
	// System.Int32 Mono.CompilerServices.SymbolWriter.LineNumberEntry::File
	int32_t ___File_4;
	// System.Int32 Mono.CompilerServices.SymbolWriter.LineNumberEntry::Offset
	int32_t ___Offset_5;
	// System.Boolean Mono.CompilerServices.SymbolWriter.LineNumberEntry::IsHidden
	bool ___IsHidden_6;
};

struct LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7_StaticFields
{
	// Mono.CompilerServices.SymbolWriter.LineNumberEntry Mono.CompilerServices.SymbolWriter.LineNumberEntry::Null
	LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* ___Null_7;
};

// Mono.CompilerServices.SymbolWriter.LineNumberTable
struct LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E  : public RuntimeObject
{
	// Mono.CompilerServices.SymbolWriter.LineNumberEntry[] Mono.CompilerServices.SymbolWriter.LineNumberTable::_line_numbers
	LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* ____line_numbers_0;
	// System.Int32 Mono.CompilerServices.SymbolWriter.LineNumberTable::LineBase
	int32_t ___LineBase_1;
	// System.Int32 Mono.CompilerServices.SymbolWriter.LineNumberTable::LineRange
	int32_t ___LineRange_2;
	// System.Byte Mono.CompilerServices.SymbolWriter.LineNumberTable::OpcodeBase
	uint8_t ___OpcodeBase_3;
	// System.Int32 Mono.CompilerServices.SymbolWriter.LineNumberTable::MaxAddressIncrement
	int32_t ___MaxAddressIncrement_4;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Mono.CompilerServices.SymbolWriter.MethodEntry
struct MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365  : public RuntimeObject
{
	// System.Int32 Mono.CompilerServices.SymbolWriter.MethodEntry::CompileUnitIndex
	int32_t ___CompileUnitIndex_0;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MethodEntry::Token
	int32_t ___Token_1;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MethodEntry::NamespaceID
	int32_t ___NamespaceID_2;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MethodEntry::DataOffset
	int32_t ___DataOffset_3;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MethodEntry::LocalVariableTableOffset
	int32_t ___LocalVariableTableOffset_4;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MethodEntry::LineNumberTableOffset
	int32_t ___LineNumberTableOffset_5;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MethodEntry::CodeBlockTableOffset
	int32_t ___CodeBlockTableOffset_6;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MethodEntry::ScopeVariableTableOffset
	int32_t ___ScopeVariableTableOffset_7;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MethodEntry::RealNameOffset
	int32_t ___RealNameOffset_8;
	// Mono.CompilerServices.SymbolWriter.MethodEntry/Flags Mono.CompilerServices.SymbolWriter.MethodEntry::flags
	int32_t ___flags_9;
	// System.Int32 Mono.CompilerServices.SymbolWriter.MethodEntry::index
	int32_t ___index_10;
	// Mono.CompilerServices.SymbolWriter.CompileUnitEntry Mono.CompilerServices.SymbolWriter.MethodEntry::CompileUnit
	CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631* ___CompileUnit_11;
	// Mono.CompilerServices.SymbolWriter.LocalVariableEntry[] Mono.CompilerServices.SymbolWriter.MethodEntry::locals
	LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* ___locals_12;
	// Mono.CompilerServices.SymbolWriter.CodeBlockEntry[] Mono.CompilerServices.SymbolWriter.MethodEntry::code_blocks
	CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* ___code_blocks_13;
	// Mono.CompilerServices.SymbolWriter.ScopeVariable[] Mono.CompilerServices.SymbolWriter.MethodEntry::scope_vars
	ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* ___scope_vars_14;
	// Mono.CompilerServices.SymbolWriter.LineNumberTable Mono.CompilerServices.SymbolWriter.MethodEntry::lnt
	LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* ___lnt_15;
	// System.String Mono.CompilerServices.SymbolWriter.MethodEntry::real_name
	String_t* ___real_name_16;
	// Mono.CompilerServices.SymbolWriter.MonoSymbolFile Mono.CompilerServices.SymbolWriter.MethodEntry::SymbolFile
	MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___SymbolFile_17;
};

// Mono.CompilerServices.SymbolWriter.SourceFileEntry
struct SourceFileEntry_tAE8059F2AAB5300BE9F9686F79F7FBDE79024D63  : public RuntimeObject
{
	// System.Int32 Mono.CompilerServices.SymbolWriter.SourceFileEntry::Index
	int32_t ___Index_0;
	// System.Int32 Mono.CompilerServices.SymbolWriter.SourceFileEntry::DataOffset
	int32_t ___DataOffset_1;
	// Mono.CompilerServices.SymbolWriter.MonoSymbolFile Mono.CompilerServices.SymbolWriter.SourceFileEntry::file
	MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file_2;
	// System.String Mono.CompilerServices.SymbolWriter.SourceFileEntry::file_name
	String_t* ___file_name_3;
	// System.Byte[] Mono.CompilerServices.SymbolWriter.SourceFileEntry::guid
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___guid_4;
	// System.Byte[] Mono.CompilerServices.SymbolWriter.SourceFileEntry::hash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hash_5;
	// System.Boolean Mono.CompilerServices.SymbolWriter.SourceFileEntry::creating
	bool ___creating_6;
	// System.Boolean Mono.CompilerServices.SymbolWriter.SourceFileEntry::auto_generated
	bool ___auto_generated_7;
};

// Mono.CompilerServices.SymbolWriter.SourceMethodBuilder
struct SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LocalVariableEntry> Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::_locals
	List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* ____locals_0;
	// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry> Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::_blocks
	List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E* ____blocks_1;
	// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.ScopeVariable> Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::_scope_vars
	List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* ____scope_vars_2;
	// System.Collections.Generic.Stack`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry> Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::_block_stack
	Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* ____block_stack_3;
	// System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LineNumberEntry> Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::method_lines
	List_1_t131E16D69BAD909D8931F32E827761AD183C0474* ___method_lines_4;
	// Mono.CompilerServices.SymbolWriter.ICompileUnit Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::_comp_unit
	RuntimeObject* ____comp_unit_5;
	// System.Int32 Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::ns_id
	int32_t ___ns_id_6;
	// Mono.CompilerServices.SymbolWriter.IMethodDef Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::method
	RuntimeObject* ___method_7;
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

// Mono.CompilerServices.SymbolWriter.LineNumberEntry/LocationComparer
struct LocationComparer_tC4E2576674989C6A014E6ED99EE8DF270FC88674  : public RuntimeObject
{
};

struct LocationComparer_tC4E2576674989C6A014E6ED99EE8DF270FC88674_StaticFields
{
	// Mono.CompilerServices.SymbolWriter.LineNumberEntry/LocationComparer Mono.CompilerServices.SymbolWriter.LineNumberEntry/LocationComparer::Default
	LocationComparer_tC4E2576674989C6A014E6ED99EE8DF270FC88674* ___Default_0;
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

// System.Security.Cryptography.DSA
struct DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41  : public AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8
{
};

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 
{
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Q_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___G_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Y_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___J_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___X_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Seed_6;
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_7;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___P_0;
	Il2CppSafeArray/*NONE*/* ___Q_1;
	Il2CppSafeArray/*NONE*/* ___G_2;
	Il2CppSafeArray/*NONE*/* ___Y_3;
	Il2CppSafeArray/*NONE*/* ___J_4;
	Il2CppSafeArray/*NONE*/* ___X_5;
	Il2CppSafeArray/*NONE*/* ___Seed_6;
	int32_t ___Counter_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___P_0;
	Il2CppSafeArray/*NONE*/* ___Q_1;
	Il2CppSafeArray/*NONE*/* ___G_2;
	Il2CppSafeArray/*NONE*/* ___Y_3;
	Il2CppSafeArray/*NONE*/* ___J_4;
	Il2CppSafeArray/*NONE*/* ___X_5;
	Il2CppSafeArray/*NONE*/* ___Seed_6;
	int32_t ___Counter_7;
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

// Mono.CompilerServices.SymbolWriter.LocalVariableEntry
struct LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A 
{
	// System.Int32 Mono.CompilerServices.SymbolWriter.LocalVariableEntry::Index
	int32_t ___Index_0;
	// System.String Mono.CompilerServices.SymbolWriter.LocalVariableEntry::Name
	String_t* ___Name_1;
	// System.Int32 Mono.CompilerServices.SymbolWriter.LocalVariableEntry::BlockIndex
	int32_t ___BlockIndex_2;
};
// Native definition for P/Invoke marshalling of Mono.CompilerServices.SymbolWriter.LocalVariableEntry
struct LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A_marshaled_pinvoke
{
	int32_t ___Index_0;
	char* ___Name_1;
	int32_t ___BlockIndex_2;
};
// Native definition for COM marshalling of Mono.CompilerServices.SymbolWriter.LocalVariableEntry
struct LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A_marshaled_com
{
	int32_t ___Index_0;
	Il2CppChar* ___Name_1;
	int32_t ___BlockIndex_2;
};

// Mono.CompilerServices.SymbolWriter.MyBinaryReader
struct MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296  : public BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158
{
};

// Mono.CompilerServices.SymbolWriter.MyBinaryWriter
struct MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750  : public BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E
{
};

// Mono.CompilerServices.SymbolWriter.NamespaceEntry
struct NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C 
{
	// System.String Mono.CompilerServices.SymbolWriter.NamespaceEntry::Name
	String_t* ___Name_0;
	// System.Int32 Mono.CompilerServices.SymbolWriter.NamespaceEntry::Index
	int32_t ___Index_1;
	// System.Int32 Mono.CompilerServices.SymbolWriter.NamespaceEntry::Parent
	int32_t ___Parent_2;
	// System.String[] Mono.CompilerServices.SymbolWriter.NamespaceEntry::UsingClauses
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___UsingClauses_3;
};
// Native definition for P/Invoke marshalling of Mono.CompilerServices.SymbolWriter.NamespaceEntry
struct NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Index_1;
	int32_t ___Parent_2;
	char** ___UsingClauses_3;
};
// Native definition for COM marshalling of Mono.CompilerServices.SymbolWriter.NamespaceEntry
struct NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Index_1;
	int32_t ___Parent_2;
	Il2CppChar** ___UsingClauses_3;
};

// System.Security.Cryptography.RSA
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A  : public AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8
{
};

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF 
{
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Exponent_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Modulus_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Q_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DP_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___InverseQ_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___D_7;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};

// Mono.CompilerServices.SymbolWriter.ScopeVariable
struct ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 
{
	// System.Int32 Mono.CompilerServices.SymbolWriter.ScopeVariable::Scope
	int32_t ___Scope_0;
	// System.Int32 Mono.CompilerServices.SymbolWriter.ScopeVariable::Index
	int32_t ___Index_1;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_t8681232A7210D3F07B00F86BEA8BCC0655CE9C0C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t8681232A7210D3F07B00F86BEA8BCC0655CE9C0C__padding[128];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_t2F35AB3C1D8BDFD5E55F1E2BEC84733D8EB0693C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t2F35AB3C1D8BDFD5E55F1E2BEC84733D8EB0693C__padding[16];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2220
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2220_tCD25EB8A318EF18F002B333AB0D659831FBB6A2D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2220_tCD25EB8A318EF18F002B333AB0D659831FBB6A2D__padding[2220];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=25
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D25_t858E6DB2A1A4D3103DAAA0BB12731D3450F1039E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D25_t858E6DB2A1A4D3103DAAA0BB12731D3450F1039E__padding[25];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_tD57011B09CFC79E75EAFCE62D6361C6967670839 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tD57011B09CFC79E75EAFCE62D6361C6967670839__padding[32];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3432
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3432_tBA1A73D2D00DC6DD9A40B88211ACFE248B8E968E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3432_tBA1A73D2D00DC6DD9A40B88211ACFE248B8E968E__padding[3432];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40834
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D40834_tD66798E476D46F4CDCACF8EB5D49C33E9E5068EF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40834_tD66798E476D46F4CDCACF8EB5D49C33E9E5068EF__padding[40834];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=46
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D46_t824FC64A925B420A619CCE848389F756A4F58D79 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D46_t824FC64A925B420A619CCE848389F756A4F58D79__padding[46];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=548
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D548_t3BF4A26EDA63DBB3596EDB7374F92ED24DAB3D42 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D548_t3BF4A26EDA63DBB3596EDB7374F92ED24DAB3D42__padding[548];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_t7BB91A6995D3B66F0A01EA228042A8242B4DA2D0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t7BB91A6995D3B66F0A01EA228042A8242B4DA2D0__padding[6];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D92_t58F257CE8E37E14088855F71CFC48D91AB961704 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D92_t58F257CE8E37E14088855F71CFC48D91AB961704__padding[92];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=970
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D970_tEED3A47EAFCBDCACEE5D5352F721765ACAB3A5D4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D970_tEED3A47EAFCBDCACEE5D5352F721765ACAB3A5D4__padding[970];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t3EC23875C9EB614B547F4087E0BC4469073622F8  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t3EC23875C9EB614B547F4087E0BC4469073622F8_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=970 <PrivateImplementationDetails>::05A01F0800C3AECA6D2BAA84A48E0A13F131DF6A
	__StaticArrayInitTypeSizeU3D970_tEED3A47EAFCBDCACEE5D5352F721765ACAB3A5D4 ___05A01F0800C3AECA6D2BAA84A48E0A13F131DF6A_0;
	// System.Int64 <PrivateImplementationDetails>::06EC8538256A9120B652A8883F2E74A6A465D12E
	int64_t ___06EC8538256A9120B652A8883F2E74A6A465D12E_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::145EF0C709D0A9A32ED67276E51E64ABBF85DFF8
	__StaticArrayInitTypeSizeU3D16_t2F35AB3C1D8BDFD5E55F1E2BEC84733D8EB0693C ___145EF0C709D0A9A32ED67276E51E64ABBF85DFF8_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=548 <PrivateImplementationDetails>::1B0C5592BF74F1BE1EF9043C98C76F79DF8571A9
	__StaticArrayInitTypeSizeU3D548_t3BF4A26EDA63DBB3596EDB7374F92ED24DAB3D42 ___1B0C5592BF74F1BE1EF9043C98C76F79DF8571A9_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40834 <PrivateImplementationDetails>::222223B7A3DE69F04D78FA9522BF8C67FF1A8111
	__StaticArrayInitTypeSizeU3D40834_tD66798E476D46F4CDCACF8EB5D49C33E9E5068EF ___222223B7A3DE69F04D78FA9522BF8C67FF1A8111_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40834 <PrivateImplementationDetails>::40CA4C5337F56FAA47051B56DB6616664F4D03DB
	__StaticArrayInitTypeSizeU3D40834_tD66798E476D46F4CDCACF8EB5D49C33E9E5068EF ___40CA4C5337F56FAA47051B56DB6616664F4D03DB_5;
	// System.Int64 <PrivateImplementationDetails>::504BD08902B7EE1EA70852EE7B30B06CD4130E90
	int64_t ___504BD08902B7EE1EA70852EE7B30B06CD4130E90_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=25 <PrivateImplementationDetails>::520CF800F0606F91536244A1DF77ED63A87C40B3
	__StaticArrayInitTypeSizeU3D25_t858E6DB2A1A4D3103DAAA0BB12731D3450F1039E ___520CF800F0606F91536244A1DF77ED63A87C40B3_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3432 <PrivateImplementationDetails>::5F1FE4E2D47CC028D6FC8C39FC97B55ABD1E1C62
	__StaticArrayInitTypeSizeU3D3432_tBA1A73D2D00DC6DD9A40B88211ACFE248B8E968E ___5F1FE4E2D47CC028D6FC8C39FC97B55ABD1E1C62_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=46 <PrivateImplementationDetails>::6C898CE16FD32F1CB8703CBE75666D363DF0B056
	__StaticArrayInitTypeSizeU3D46_t824FC64A925B420A619CCE848389F756A4F58D79 ___6C898CE16FD32F1CB8703CBE75666D363DF0B056_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2220 <PrivateImplementationDetails>::6EBBC0B0DCB3ADD455CF98033DA6896CBA950059
	__StaticArrayInitTypeSizeU3D2220_tCD25EB8A318EF18F002B333AB0D659831FBB6A2D ___6EBBC0B0DCB3ADD455CF98033DA6896CBA950059_10;
	// System.Int64 <PrivateImplementationDetails>::7460C27079517029EC4986406D3AD2253581764B
	int64_t ___7460C27079517029EC4986406D3AD2253581764B_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3432 <PrivateImplementationDetails>::784BD3BF37520FC8C86BCD1FE190B55328284B38
	__StaticArrayInitTypeSizeU3D3432_tBA1A73D2D00DC6DD9A40B88211ACFE248B8E968E ___784BD3BF37520FC8C86BCD1FE190B55328284B38_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3432 <PrivateImplementationDetails>::8312D8A943A5B744CF06F1D0004CCBD0B8CD9258
	__StaticArrayInitTypeSizeU3D3432_tBA1A73D2D00DC6DD9A40B88211ACFE248B8E968E ___8312D8A943A5B744CF06F1D0004CCBD0B8CD9258_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=970 <PrivateImplementationDetails>::9DC7FD659F6C477F4D122DD0EB2BF8EAE8F296F0
	__StaticArrayInitTypeSizeU3D970_tEED3A47EAFCBDCACEE5D5352F721765ACAB3A5D4 ___9DC7FD659F6C477F4D122DD0EB2BF8EAE8F296F0_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::A4629201E30C16B4B1475611963EE433913945D7
	__StaticArrayInitTypeSizeU3D32_tD57011B09CFC79E75EAFCE62D6361C6967670839 ___A4629201E30C16B4B1475611963EE433913945D7_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::A67BD9DE577B5E84315166E4D0BD10B598AD598E
	__StaticArrayInitTypeSizeU3D6_t7BB91A6995D3B66F0A01EA228042A8242B4DA2D0 ___A67BD9DE577B5E84315166E4D0BD10B598AD598E_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::AE1091975877C088C919C339BFCF41C2517153FF
	__StaticArrayInitTypeSizeU3D92_t58F257CE8E37E14088855F71CFC48D91AB961704 ___AE1091975877C088C919C339BFCF41C2517153FF_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2220 <PrivateImplementationDetails>::B7AFA9779723F7D86E8684AD4BF3C8F001DBCF81
	__StaticArrayInitTypeSizeU3D2220_tCD25EB8A318EF18F002B333AB0D659831FBB6A2D ___B7AFA9779723F7D86E8684AD4BF3C8F001DBCF81_18;
	// System.Int64 <PrivateImplementationDetails>::C75FBC0F1EDB774E06DF9B68691D418779ED255A
	int64_t ___C75FBC0F1EDB774E06DF9B68691D418779ED255A_19;
	// System.Int64 <PrivateImplementationDetails>::E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78
	int64_t ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::F11665C8721466F78A96C106B08F17FC29A12F6C
	__StaticArrayInitTypeSizeU3D128_t8681232A7210D3F07B00F86BEA8BCC0655CE9C0C ___F11665C8721466F78A96C106B08F17FC29A12F6C_21;
};

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E  : public DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41
{
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* ___store_2;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t93F6FE86F625186D42535B8E70AE3094A24367EB* ___dsa_7;
};

struct DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E_StaticFields
{
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;
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

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t897B29EF76C459408E11A42680C942716D809001* ___rsa_8;
};

struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_StaticFields
{
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;
};

// Mono.CompilerServices.SymbolWriter.MonoSymbolFileException
struct MonoSymbolFileException_t18E4D2638AAFC152AA16960F8270B0F676502777  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Security.Cryptography.CryptographicException
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Mono.CompilerServices.SymbolWriter.ScopeVariable[]
struct ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC  : public RuntimeArray
{
	ALIGN_FIELD (8) ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 m_Items[1];

	inline ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 value)
	{
		m_Items[index] = value;
	}
};
// Mono.CompilerServices.SymbolWriter.LocalVariableEntry[]
struct LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3  : public RuntimeArray
{
	ALIGN_FIELD (8) LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A m_Items[1];

	inline LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_1), (void*)NULL);
	}
	inline LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Name_1), (void*)NULL);
	}
};
// Mono.CompilerServices.SymbolWriter.LineNumberEntry[]
struct LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682  : public RuntimeArray
{
	ALIGN_FIELD (8) LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* m_Items[1];

	inline LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Mono.CompilerServices.SymbolWriter.CodeBlockEntry[]
struct CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5  : public RuntimeArray
{
	ALIGN_FIELD (8) CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* m_Items[1];

	inline CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* value)
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,Mono.CompilerServices.SymbolWriter.LocalVariableEntry>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m851377BCD58776955312B3239C784C0DA51455F5_gshared (Dictionary_2_t9D7A9116F07DC5DC4D3C68BB99A7DCA0D42A49BF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Mono.CompilerServices.SymbolWriter.LocalVariableEntry>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mBF9E49F05EEB73B222F0D22C0FC072B61BC1D2C2_gshared (Dictionary_2_t9D7A9116F07DC5DC4D3C68BB99A7DCA0D42A49BF* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Mono.CompilerServices.SymbolWriter.LocalVariableEntry>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFCB45D97D9611263C8A5E9E591BCCA100C63FEFD_gshared (Dictionary_2_t9D7A9116F07DC5DC4D3C68BB99A7DCA0D42A49BF* __this, RuntimeObject* ___key0, LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LocalVariableEntry>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* List_1_ToArray_mA707E29D9E3F7930E4F11A2164EFAFBE2003943F_gshared (List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LocalVariableEntry>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD40056B31951C1FAB921DAE7396C2D45911348DD_gshared (List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LocalVariableEntry>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m87AD398778DB1D31D3AB755704565AC835DC9DAC_gshared_inline (List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* __this, LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.ScopeVariable>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* List_1_ToArray_mC3A94B68D113C92D9DDD2AEB756A98E6788C51E2_gshared (List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.ScopeVariable>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4F43ECFF4B04FBF6EA887AF7BF552BD95F247BCD_gshared (List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.ScopeVariable>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mC1B9B1B33CED86692DCE632400585AE8680FCC5C_gshared_inline (List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* __this, ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CompilerServices.SymbolWriter.MyBinaryReader::ReadLeb128()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA (MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* __this, const RuntimeMethod* method) ;
// Mono.CompilerServices.SymbolWriter.CompileUnitEntry Mono.CompilerServices.SymbolWriter.MonoSymbolFile::GetCompileUnit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631* MonoSymbolFile_GetCompileUnit_m64562877654D614B369BE31D5473F7DFA1F0A948 (MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.MethodEntry::CheckLineNumberTable(Mono.CompilerServices.SymbolWriter.LineNumberEntry[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodEntry_CheckLineNumberTable_mDD6B7358DBB4A85E8185B8EB6D3846696A33CDE4 (LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* ___line_numbers0, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.LineNumberTable::.ctor(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.LineNumberEntry[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineNumberTable__ctor_mADCE0A0596F871F6B93BB550E9B57B11765F9818 (LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* ___lines1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Mono.CompilerServices.SymbolWriter.LocalVariableEntry>::.ctor()
inline void Dictionary_2__ctor_mBA7638F90B571A876FC528F29D478218DBDA8028 (Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014*, const RuntimeMethod*))Dictionary_2__ctor_m851377BCD58776955312B3239C784C0DA51455F5_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Mono.CompilerServices.SymbolWriter.LocalVariableEntry>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m8E28CB8BFAB7B07A80486E162EDA0D77DC7BBA6E (Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mBF9E49F05EEB73B222F0D22C0FC072B61BC1D2C2_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Mono.CompilerServices.SymbolWriter.LocalVariableEntry>::Add(TKey,TValue)
inline void Dictionary_2_Add_m07331C3ACB4B57F2B95C0707B98864A1463680E1 (Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014* __this, String_t* ___key0, LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014*, String_t*, LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A, const RuntimeMethod*))Dictionary_2_Add_mFCB45D97D9611263C8A5E9E591BCCA100C63FEFD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Mono.CompilerServices.SymbolWriter.MonoSymbolFileException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoSymbolFileException__ctor_mD87CF4F6762177DE54FE0BF992923FFC40207BC0 (MonoSymbolFileException_t18E4D2638AAFC152AA16960F8270B0F676502777* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.MyBinaryWriter::WriteLeb128(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295 (MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.LocalVariableEntry::Write(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.MyBinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVariableEntry_Write_mBE92AA7811F4097194AB9E6F03FE957079A77572 (LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* ___bw1, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.CodeBlockEntry::Write(Mono.CompilerServices.SymbolWriter.MyBinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeBlockEntry_Write_mE9F9733A34435CC22960F289A354E06640715119 (CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* __this, MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* ___bw0, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.ScopeVariable::Write(Mono.CompilerServices.SymbolWriter.MyBinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeVariable_Write_mED3EE718FAB63FE2207F167A54A82C3BBE378FD7 (ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1* __this, MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* ___bw0, const RuntimeMethod* method) ;
// Mono.CompilerServices.SymbolWriter.LineNumberEntry[] Mono.CompilerServices.SymbolWriter.LineNumberTable::get_LineNumbers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* LineNumberTable_get_LineNumbers_mD0407D8C10E493FFEB39784035E723501BFB8010_inline (LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* __this, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.LineNumberTable::Write(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.MyBinaryWriter,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineNumberTable_Write_m2412EA19B713E7D118D8B73DCB93DC7DABC356C7 (LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* ___bw1, bool ___hasColumnsInfo2, bool ___hasEndInfo3, const RuntimeMethod* method) ;
// Mono.CompilerServices.SymbolWriter.LineNumberTable Mono.CompilerServices.SymbolWriter.MethodEntry::GetLineNumberTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* MethodEntry_GetLineNumberTable_m0CD76DCD241A7FEF448EDDB724E9092C0D98C4F8 (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) ;
// Mono.CompilerServices.SymbolWriter.LocalVariableEntry[] Mono.CompilerServices.SymbolWriter.MethodEntry::GetLocals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* MethodEntry_GetLocals_mEEBB25E090F377C782F0FCF6A9DF01800744B85C (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) ;
// Mono.CompilerServices.SymbolWriter.CodeBlockEntry[] Mono.CompilerServices.SymbolWriter.MethodEntry::GetCodeBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* MethodEntry_GetCodeBlocks_m2D510E0B098C54DB9AC879B85DF8C3BC466F70A4 (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) ;
// Mono.CompilerServices.SymbolWriter.ScopeVariable[] Mono.CompilerServices.SymbolWriter.MethodEntry::GetScopeVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* MethodEntry_GetScopeVariables_mE9944A0DDAD4FA0FC70019E605BA678E9730063A (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) ;
// System.String Mono.CompilerServices.SymbolWriter.MethodEntry::GetRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodEntry_GetRealName_m8B37C3BBDE5DFB3DA908F4910EAAEAE7045D90FA (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// Mono.CompilerServices.SymbolWriter.MyBinaryReader Mono.CompilerServices.SymbolWriter.MonoSymbolFile::get_BinaryReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* MonoSymbolFile_get_BinaryReader_m9AD3F272D9661B06709E88E793384BF8FCD84C8F (MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* __this, const RuntimeMethod* method) ;
// Mono.CompilerServices.SymbolWriter.LineNumberTable Mono.CompilerServices.SymbolWriter.LineNumberTable::Read(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.MyBinaryReader,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* LineNumberTable_Read_m5A948E3760A12218CE84DB00D59A96F90674E77A (MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* ___br1, bool ___readColumnsInfo2, bool ___readEndInfo3, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.LocalVariableEntry::.ctor(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.MyBinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVariableEntry__ctor_m2CB1320870302FDA29010766584903E8037D7AAD (LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* ___reader1, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.CodeBlockEntry::.ctor(System.Int32,Mono.CompilerServices.SymbolWriter.MyBinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeBlockEntry__ctor_m5024FA09AB2D64D13C6F51098CA0C1D64EB17F43 (CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* __this, int32_t ___index0, MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* ___reader1, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.ScopeVariable::.ctor(Mono.CompilerServices.SymbolWriter.MyBinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeVariable__ctor_mBB5EF135D9C182EBA3BEF09FC4F394BC8A7DCB15 (ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1* __this, MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* ___reader0, const RuntimeMethod* method) ;
// System.String Mono.CompilerServices.SymbolWriter.MyBinaryReader::ReadString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MyBinaryReader_ReadString_m9399C03D275BECC3C49AE89EC242E981B5E83110 (MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* __this, int32_t ___offset0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.NamespaceEntry::.ctor(System.String,System.Int32,System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceEntry__ctor_m38F09AE26E54A8C0F8A5455F6098FE386D59C6E3 (NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* __this, String_t* ___name0, int32_t ___index1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___using_clauses2, int32_t ___parent3, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.NamespaceEntry::.ctor(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.MyBinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceEntry__ctor_m11185FB643E4C45B8A53CBDBD0B6210680C67D8A (NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* ___reader1, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.NamespaceEntry::Write(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.MyBinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceEntry_Write_mC3948415C3312E62F44D0A5CF25060EFDD5C690B (NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* ___bw1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String Mono.CompilerServices.SymbolWriter.NamespaceEntry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NamespaceEntry_ToString_mABA9A0632558B5B3093C04BB4BA6CB664DAC5D35 (NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LineNumberEntry>::.ctor()
inline void List_1__ctor_m1DF0970A29577F8E40C7CD3BD22570F5FB25D38B (List_1_t131E16D69BAD909D8931F32E827761AD183C0474* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t131E16D69BAD909D8931F32E827761AD183C0474*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::.ctor(Mono.CompilerServices.SymbolWriter.ICompileUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder__ctor_m2C48CD2DBC77F6D79BA46C185AB54DD6987F42B5 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, RuntimeObject* ___comp_unit0, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::MarkSequencePoint(System.Int32,Mono.CompilerServices.SymbolWriter.SourceFileEntry,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder_MarkSequencePoint_mA63C239057A90E3F6F766147493C49F28DAA933D (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, int32_t ___offset0, SourceFileEntry_tAE8059F2AAB5300BE9F9686F79F7FBDE79024D63* ___file1, int32_t ___line2, int32_t ___column3, int32_t ___end_line4, int32_t ___end_column5, bool ___is_hidden6, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.LineNumberEntry::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineNumberEntry__ctor_mDB333BD62004E9F402E437B6D5AD9FCD5EE3EF09 (LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* __this, int32_t ___file0, int32_t ___row1, int32_t ___column2, int32_t ___end_row3, int32_t ___end_column4, int32_t ___offset5, bool ___is_hidden6, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LineNumberEntry>::get_Count()
inline int32_t List_1_get_Count_mE587E0F7D1DC791314F679254E36E7AA845C8118_inline (List_1_t131E16D69BAD909D8931F32E827761AD183C0474* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t131E16D69BAD909D8931F32E827761AD183C0474*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LineNumberEntry>::get_Item(System.Int32)
inline LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* List_1_get_Item_m6D90485EDAD2935E3692ED8660552CFA2076E9D2 (List_1_t131E16D69BAD909D8931F32E827761AD183C0474* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* (*) (List_1_t131E16D69BAD909D8931F32E827761AD183C0474*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 Mono.CompilerServices.SymbolWriter.LineNumberEntry/LocationComparer::Compare(Mono.CompilerServices.SymbolWriter.LineNumberEntry,Mono.CompilerServices.SymbolWriter.LineNumberEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationComparer_Compare_mD783C31D4978CDCECD7561D8EA5DEB9C2B07D38E (LocationComparer_tC4E2576674989C6A014E6ED99EE8DF270FC88674* __this, LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* ___l10, LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* ___l21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LineNumberEntry>::set_Item(System.Int32,T)
inline void List_1_set_Item_m4139AA331A407682416EA73FFDF8203ECA7848A8 (List_1_t131E16D69BAD909D8931F32E827761AD183C0474* __this, int32_t ___index0, LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t131E16D69BAD909D8931F32E827761AD183C0474*, int32_t, LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LineNumberEntry>::Add(T)
inline void List_1_Add_mDC840E876C6B054C905E9C9DCA061A25B02FCCBF_inline (List_1_t131E16D69BAD909D8931F32E827761AD183C0474* __this, LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t131E16D69BAD909D8931F32E827761AD183C0474*, LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>::.ctor()
inline void Stack_1__ctor_m5B49490C8E444A40DD6D5E8402E63DD0F9B390EA (Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>::.ctor()
inline void List_1__ctor_m466237C3BD3CA64B0B9B12E4F2D805506242CC93 (List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Mono.CompilerServices.SymbolWriter.CodeBlockEntry Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::get_CurrentBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* SourceMethodBuilder_get_CurrentBlock_m1933E7516E618265C4AE087753550340B43D6C24 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>::get_Count()
inline int32_t List_1_get_Count_m802BCC7C199236F6A0A9D2A1099E10361A62F7A9_inline (List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Mono.CompilerServices.SymbolWriter.CodeBlockEntry::.ctor(System.Int32,System.Int32,Mono.CompilerServices.SymbolWriter.CodeBlockEntry/Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeBlockEntry__ctor_mFDF0943768FA69127DFFA33008EF4369C6298A6E (CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* __this, int32_t ___index0, int32_t ___parent1, int32_t ___type2, int32_t ___start_offset3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>::Push(T)
inline void Stack_1_Push_m295DA8C7C60E81F646F4845BCFC44C29E839DF70 (Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* __this, CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2*, CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>::Add(T)
inline void List_1_Add_m5281C502FD03EDADD1A5D46CAC0BBB6587188395_inline (List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E* __this, CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E*, CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.Stack`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>::Pop()
inline CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* Stack_1_Pop_m61A940008508D306AD9CEA8A102AED24E408C943 (Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* __this, const RuntimeMethod* method)
{
	return ((  CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* (*) (Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void Mono.CompilerServices.SymbolWriter.CodeBlockEntry::Close(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CodeBlockEntry_Close_m0C54C4720E9727659D715A4B508755EF873586DD_inline (CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* __this, int32_t ___end_offset0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>::CopyTo(T[],System.Int32)
inline void List_1_CopyTo_mCEFD84B3A71B51F4F217BDCD80B40538AAB2DB69 (List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E* __this, CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E*, CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5*, int32_t, const RuntimeMethod*))List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared)(__this, ___array0, ___arrayIndex1, method);
}
// System.Int32 System.Collections.Generic.Stack`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>::get_Count()
inline int32_t Stack_1_get_Count_m8DA1897B26FEF5322B60F2A24C5D08F9B7E156A8_inline (Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<Mono.CompilerServices.SymbolWriter.CodeBlockEntry>::Peek()
inline CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* Stack_1_Peek_mF35DD40D75677DC00DD3EF124CBCDC9605746826 (Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* __this, const RuntimeMethod* method)
{
	return ((  CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* (*) (Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LocalVariableEntry>::ToArray()
inline LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* List_1_ToArray_mA707E29D9E3F7930E4F11A2164EFAFBE2003943F (List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* __this, const RuntimeMethod* method)
{
	return ((  LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* (*) (List_1_t504F807CA014CA67521A129AAE80D72629E16A3F*, const RuntimeMethod*))List_1_ToArray_mA707E29D9E3F7930E4F11A2164EFAFBE2003943F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LocalVariableEntry>::.ctor()
inline void List_1__ctor_mD40056B31951C1FAB921DAE7396C2D45911348DD (List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t504F807CA014CA67521A129AAE80D72629E16A3F*, const RuntimeMethod*))List_1__ctor_mD40056B31951C1FAB921DAE7396C2D45911348DD_gshared)(__this, method);
}
// System.Void Mono.CompilerServices.SymbolWriter.LocalVariableEntry::.ctor(System.Int32,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVariableEntry__ctor_m11C6D50812FC55CE3848677F14C742724BFCDC68 (LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A* __this, int32_t ___index0, String_t* ___name1, int32_t ___block2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LocalVariableEntry>::Add(T)
inline void List_1_Add_m87AD398778DB1D31D3AB755704565AC835DC9DAC_inline (List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* __this, LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t504F807CA014CA67521A129AAE80D72629E16A3F*, LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A, const RuntimeMethod*))List_1_Add_m87AD398778DB1D31D3AB755704565AC835DC9DAC_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.ScopeVariable>::ToArray()
inline ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* List_1_ToArray_mC3A94B68D113C92D9DDD2AEB756A98E6788C51E2 (List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* __this, const RuntimeMethod* method)
{
	return ((  ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* (*) (List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A*, const RuntimeMethod*))List_1_ToArray_mC3A94B68D113C92D9DDD2AEB756A98E6788C51E2_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.ScopeVariable>::.ctor()
inline void List_1__ctor_m4F43ECFF4B04FBF6EA887AF7BF552BD95F247BCD (List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A*, const RuntimeMethod*))List_1__ctor_m4F43ECFF4B04FBF6EA887AF7BF552BD95F247BCD_gshared)(__this, method);
}
// System.Void Mono.CompilerServices.SymbolWriter.ScopeVariable::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopeVariable__ctor_m81B4ED386D9AF32FCCAC95F930FA94E529332720 (ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1* __this, int32_t ___scope0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.ScopeVariable>::Add(T)
inline void List_1_Add_mC1B9B1B33CED86692DCE632400585AE8680FCC5C_inline (List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* __this, ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A*, ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1, const RuntimeMethod*))List_1_Add_mC1B9B1B33CED86692DCE632400585AE8680FCC5C_gshared_inline)(__this, ___item0, method);
}
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::DefineMethod(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder_DefineMethod_mD89529C12C9172A0973FB60013B309F989AAF3B9 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, int32_t ___token1, const RuntimeMethod* method) ;
// Mono.CompilerServices.SymbolWriter.ScopeVariable[] Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::get_ScopeVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* SourceMethodBuilder_get_ScopeVariables_m914B0B4CF1C00F4883273E0AD2BC754719723666 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, const RuntimeMethod* method) ;
// Mono.CompilerServices.SymbolWriter.LocalVariableEntry[] Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::get_Locals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* SourceMethodBuilder_get_Locals_m511BF1125A812474B5E4E4EB99810DA44826C2AD (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Mono.CompilerServices.SymbolWriter.LineNumberEntry>::ToArray()
inline LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* List_1_ToArray_m9E8D0298018B2316AFB6A97348F125624362C9BD (List_1_t131E16D69BAD909D8931F32E827761AD183C0474* __this, const RuntimeMethod* method)
{
	return ((  LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* (*) (List_1_t131E16D69BAD909D8931F32E827761AD183C0474*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// Mono.CompilerServices.SymbolWriter.CodeBlockEntry[] Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::get_Blocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* SourceMethodBuilder_get_Blocks_m447E842F7272D13791D8D8E4EFD2622EB8F24288 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.MethodEntry::.ctor(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.CompileUnitEntry,System.Int32,Mono.CompilerServices.SymbolWriter.ScopeVariable[],Mono.CompilerServices.SymbolWriter.LocalVariableEntry[],Mono.CompilerServices.SymbolWriter.LineNumberEntry[],Mono.CompilerServices.SymbolWriter.CodeBlockEntry[],System.String,Mono.CompilerServices.SymbolWriter.MethodEntry/Flags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodEntry__ctor_mFDA91DE3DD2FC185EEB2099F45CA14E4BD1D805D (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631* ___comp_unit1, int32_t ___token2, ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* ___scope_vars3, LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* ___locals4, LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* ___lines5, CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* ___code_blocks6, String_t* ___real_name7, int32_t ___flags8, int32_t ___namespace_id9, const RuntimeMethod* method) ;
// System.Void Mono.CompilerServices.SymbolWriter.MonoSymbolFile::AddMethod(Mono.CompilerServices.SymbolWriter.MethodEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoSymbolFile_AddMethod_mA6C12237C34CFA7DC38C3CEA1737D5C07C5ACB57 (MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* __this, MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* ___entry0, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* CryptoConvert_FromCapiPrivateKeyBlob_mC20AB6ADD36C51060199E6E6B896F0C10B371686 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CryptoConvert_ToUInt32LE_mF52384E50EA618EDD7D96140A889BF33A3995435 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CryptoConvert_ToInt32LE_m40CADF5B775732A0D150C1A7B48024970671B0B2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C (RuntimeArray* ___array0, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_Trim_mC1F9273F7A3107AD0D5F30E7F9DE18C1C5807646 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_m5DDF42BBD1BBB5006C6E912240CAE64C8B14FA9C (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* __this, String_t* ___message0, Exception_t* ___inner1, const RuntimeMethod* method) ;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* RSA_Create_m37E9CF2FC80F578AE254DA559D23596065D741C7 (const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CspParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CspParameters__ctor_m348F366FF4C2A4EC40C3B09FBB7F9E8322F42645 (CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CspParameters::set_Flags(System.Security.Cryptography.CspProviderFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CspParameters_set_Flags_m9C1F8339A1C321C6EDCB76E6038B7786D9EA7F6A (CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_mA3DCFA0547797710101AC5DE6A3A0396EADF45CF (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* ___parameters0, const RuntimeMethod* method) ;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlobDSA(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* CryptoConvert_FromCapiPrivateKeyBlobDSA_m8699F0FC7431A6D5BC7F50A4B8586AE8ED0D901F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* DSA_Create_m30668002C142DC26B9E9F09191A4368098C6757F (const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSACryptoServiceProvider__ctor_mE92A8D3F8E70C4358BC8571E2A062C13AA1AA6DA (DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E* __this, CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* ___parameters0, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_GetBytesLE_mEE537A512F8B36797B62209C2E1CEF64C1142EB9 (int32_t ___val0, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* CryptoConvert_FromCapiPublicKeyBlob_mDBB1FBFD641AE816C1323EF84777BEAE34129858 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlobDSA(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* CryptoConvert_FromCapiPublicKeyBlobDSA_mDE9A95D0B607E19C567A1EE012FA45C328DD100C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* CryptoConvert_FromCapiKeyBlob_m24C4FE38E61CF65D9EC7AEA5EDB17856B4E24C15 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlobDSA(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* CryptoConvert_FromCapiKeyBlobDSA_mAF2E3C45876AF0740E2F920AF2FBF4D7E95AC27B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiKeyBlob_mE204BA266322E69C7157E89F33D63871FC8A02BA (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa0, bool ___includePrivateKey1, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.DSA,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiKeyBlob_m9F75148674A8134C0234D96351659690482A9219 (DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* ___dsa0, bool ___includePrivateKey1, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiPrivateKeyBlob_m1E13FA53A92E3101F007C11C5D4F0B12EFA97B1D (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa0, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiPublicKeyBlob_mFBE9CFF36CC1BEE35ED2F4DE56D8DFD8BFEBE437 (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa0, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.DSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiPrivateKeyBlob_mD523703D97C652B3A255B17EF7E1F58E7B2D790D (DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* ___dsa0, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.DSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiPublicKeyBlob_m68028F1F48F2B460483F24C13D334A8E9E530D8D (DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* ___dsa0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m64EE358F20093EE61D30F9A21638D9E9EE8F87EC (uint8_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Byte Mono.Security.Cryptography.CryptoConvert::FromHexChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CryptoConvert_FromHexChar_mE319F9D0D0879218BA2F529F447FC8250D60B427 (Il2CppChar ___c0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Mono.CompilerServices.SymbolWriter.MethodEntry/Flags Mono.CompilerServices.SymbolWriter.MethodEntry::get_MethodFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MethodEntry_get_MethodFlags_mD40474A1689B0509BAFA727D89EBA527529422D6 (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___flags_9;
		return L_0;
	}
}
// System.Int32 Mono.CompilerServices.SymbolWriter.MethodEntry::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MethodEntry_get_Index_m6FE8BFA3DDA55776AE376351CD15605BF01FFDD8 (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___index_10;
		return L_0;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.MethodEntry::set_Index(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodEntry_set_Index_m73A58124877AD9228615DCA3A5257FC862987593 (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___index_10 = L_0;
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.MethodEntry::.ctor(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.MyBinaryReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodEntry__ctor_m032AF6D23F924DD5967D4A7C921E5DA2F352A0F6 (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* ___reader1, int32_t ___index2, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_0 = ___file0;
		__this->___SymbolFile_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SymbolFile_17), (void*)L_0);
		int32_t L_1 = ___index2;
		__this->___index_10 = L_1;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_2 = ___reader1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_2);
		__this->___Token_1 = L_3;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_4 = ___reader1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		__this->___DataOffset_3 = L_5;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_6 = ___reader1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		__this->___LineNumberTableOffset_5 = L_7;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_8 = ___reader1;
		NullCheck(L_8);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9;
		L_9 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_8);
		NullCheck(L_9);
		int64_t L_10;
		L_10 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_9);
		V_0 = L_10;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_11 = ___reader1;
		NullCheck(L_11);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12;
		L_12 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_11);
		int32_t L_13 = __this->___DataOffset_3;
		NullCheck(L_12);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_12, ((int64_t)L_13));
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_14 = ___reader1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_14, NULL);
		__this->___CompileUnitIndex_0 = L_15;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_16 = ___reader1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_16, NULL);
		__this->___LocalVariableTableOffset_4 = L_17;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_18 = ___reader1;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_18, NULL);
		__this->___NamespaceID_2 = L_19;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_20 = ___reader1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_20, NULL);
		__this->___CodeBlockTableOffset_6 = L_21;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_22 = ___reader1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_22, NULL);
		__this->___ScopeVariableTableOffset_7 = L_23;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_24 = ___reader1;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_24, NULL);
		__this->___RealNameOffset_8 = L_25;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_26 = ___reader1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_26, NULL);
		__this->___flags_9 = L_27;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_28 = ___reader1;
		NullCheck(L_28);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_29;
		L_29 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_28);
		int64_t L_30 = V_0;
		NullCheck(L_29);
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_29, L_30);
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_31 = ___file0;
		int32_t L_32 = __this->___CompileUnitIndex_0;
		NullCheck(L_31);
		CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631* L_33;
		L_33 = MonoSymbolFile_GetCompileUnit_m64562877654D614B369BE31D5473F7DFA1F0A948(L_31, L_32, NULL);
		__this->___CompileUnit_11 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CompileUnit_11), (void*)L_33);
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.MethodEntry::.ctor(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.CompileUnitEntry,System.Int32,Mono.CompilerServices.SymbolWriter.ScopeVariable[],Mono.CompilerServices.SymbolWriter.LocalVariableEntry[],Mono.CompilerServices.SymbolWriter.LineNumberEntry[],Mono.CompilerServices.SymbolWriter.CodeBlockEntry[],System.String,Mono.CompilerServices.SymbolWriter.MethodEntry/Flags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodEntry__ctor_mFDA91DE3DD2FC185EEB2099F45CA14E4BD1D805D (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631* ___comp_unit1, int32_t ___token2, ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* ___scope_vars3, LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* ___locals4, LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* ___lines5, CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* ___code_blocks6, String_t* ___real_name7, int32_t ___flags8, int32_t ___namespace_id9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m07331C3ACB4B57F2B95C0707B98864A1463680E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m8E28CB8BFAB7B07A80486E162EDA0D77DC7BBA6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBA7638F90B571A876FC528F29D478218DBDA8028_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014* V_4 = NULL;
	LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* V_5 = NULL;
	int32_t V_6 = 0;
	LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B3_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_0 = ___file0;
		__this->___SymbolFile_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SymbolFile_17), (void*)L_0);
		String_t* L_1 = ___real_name7;
		__this->___real_name_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___real_name_16), (void*)L_1);
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_2 = ___locals4;
		__this->___locals_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___locals_12), (void*)L_2);
		CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_3 = ___code_blocks6;
		__this->___code_blocks_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___code_blocks_13), (void*)L_3);
		ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_4 = ___scope_vars3;
		__this->___scope_vars_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scope_vars_14), (void*)L_4);
		int32_t L_5 = ___flags8;
		__this->___flags_9 = L_5;
		__this->___index_10 = (-1);
		int32_t L_6 = ___token2;
		__this->___Token_1 = L_6;
		CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631* L_7 = ___comp_unit1;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Index_0;
		__this->___CompileUnitIndex_0 = L_8;
		CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631* L_9 = ___comp_unit1;
		__this->___CompileUnit_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CompileUnit_11), (void*)L_9);
		int32_t L_10 = ___namespace_id9;
		__this->___NamespaceID_2 = L_10;
		LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* L_11 = ___lines5;
		MethodEntry_CheckLineNumberTable_mDD6B7358DBB4A85E8185B8EB6D3846696A33CDE4(L_11, NULL);
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_12 = ___file0;
		LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* L_13 = ___lines5;
		LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* L_14 = (LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E*)il2cpp_codegen_object_new(LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		LineNumberTable__ctor_mADCE0A0596F871F6B93BB550E9B57B11765F9818(L_14, L_12, L_13, NULL);
		__this->___lnt_15 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lnt_15), (void*)L_14);
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_15 = ___file0;
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = L_16->___NumLineNumbers_10;
		LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* L_18 = ___lines5;
		NullCheck(L_18);
		NullCheck(L_16);
		L_16->___NumLineNumbers_10 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)(((RuntimeArray*)L_18)->max_length))));
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_19 = ___locals4;
		if (L_19)
		{
			goto IL_008b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_008f;
	}

IL_008b:
	{
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_20 = ___locals4;
		NullCheck(L_20);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_20)->max_length));
	}

IL_008f:
	{
		V_0 = G_B3_0;
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)32))))
		{
			goto IL_00da;
		}
	}
	{
		V_1 = 0;
		goto IL_00d5;
	}

IL_0099:
	{
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_22 = ___locals4;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		String_t* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___Name_1;
		V_2 = L_24;
		int32_t L_25 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		goto IL_00cd;
	}

IL_00ad:
	{
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_26 = ___locals4;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		String_t* L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___Name_1;
		String_t* L_29 = V_2;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_31 = ___flags8;
		___flags8 = ((int32_t)((int32_t)L_31|1));
		return;
	}

IL_00c9:
	{
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00cd:
	{
		int32_t L_33 = V_3;
		int32_t L_34 = V_0;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00d5:
	{
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0099;
		}
	}
	{
		return;
	}

IL_00da:
	{
		Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014* L_38 = (Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014*)il2cpp_codegen_object_new(Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Dictionary_2__ctor_mBA7638F90B571A876FC528F29D478218DBDA8028(L_38, Dictionary_2__ctor_mBA7638F90B571A876FC528F29D478218DBDA8028_RuntimeMethod_var);
		V_4 = L_38;
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_39 = ___locals4;
		V_5 = L_39;
		V_6 = 0;
		goto IL_0122;
	}

IL_00ea:
	{
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_40 = V_5;
		int32_t L_41 = V_6;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_7 = L_43;
		Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014* L_44 = V_4;
		LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A L_45 = V_7;
		String_t* L_46 = L_45.___Name_1;
		NullCheck(L_44);
		bool L_47;
		L_47 = Dictionary_2_ContainsKey_m8E28CB8BFAB7B07A80486E162EDA0D77DC7BBA6E(L_44, L_46, Dictionary_2_ContainsKey_m8E28CB8BFAB7B07A80486E162EDA0D77DC7BBA6E_RuntimeMethod_var);
		if (!L_47)
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_48 = ___flags8;
		___flags8 = ((int32_t)((int32_t)L_48|1));
		return;
	}

IL_010c:
	{
		Dictionary_2_tB192E5D658ED64C70EE58A9854A330021BEA0014* L_49 = V_4;
		LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A L_50 = V_7;
		String_t* L_51 = L_50.___Name_1;
		LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A L_52 = V_7;
		NullCheck(L_49);
		Dictionary_2_Add_m07331C3ACB4B57F2B95C0707B98864A1463680E1(L_49, L_51, L_52, Dictionary_2_Add_m07331C3ACB4B57F2B95C0707B98864A1463680E1_RuntimeMethod_var);
		int32_t L_53 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0122:
	{
		int32_t L_54 = V_6;
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_55 = V_5;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_00ea;
		}
	}
	{
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.MethodEntry::CheckLineNumberTable(Mono.CompilerServices.SymbolWriter.LineNumberEntry[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodEntry_CheckLineNumberTable_mDD6B7358DBB4A85E8185B8EB6D3846696A33CDE4 (LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* ___line_numbers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* V_3 = NULL;
	{
		V_0 = (-1);
		V_1 = (-1);
		LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* L_0 = ___line_numbers0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		V_2 = 0;
		goto IL_005f;
	}

IL_000c:
	{
		LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* L_1 = ___line_numbers0;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_5 = V_3;
		il2cpp_codegen_runtime_class_init_inline(LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7_il2cpp_TypeInfo_var);
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_6 = ((LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7_StaticFields*)il2cpp_codegen_static_fields_for(LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7_il2cpp_TypeInfo_var))->___Null_7;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_6);
		if (!L_7)
		{
			goto IL_0023;
		}
	}
	{
		MonoSymbolFileException_t18E4D2638AAFC152AA16960F8270B0F676502777* L_8 = (MonoSymbolFileException_t18E4D2638AAFC152AA16960F8270B0F676502777*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MonoSymbolFileException_t18E4D2638AAFC152AA16960F8270B0F676502777_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		MonoSymbolFileException__ctor_mD87CF4F6762177DE54FE0BF992923FFC40207BC0(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodEntry_CheckLineNumberTable_mDD6B7358DBB4A85E8185B8EB6D3846696A33CDE4_RuntimeMethod_var)));
	}

IL_0023:
	{
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_9 = V_3;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Offset_5;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0032;
		}
	}
	{
		MonoSymbolFileException_t18E4D2638AAFC152AA16960F8270B0F676502777* L_12 = (MonoSymbolFileException_t18E4D2638AAFC152AA16960F8270B0F676502777*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MonoSymbolFileException_t18E4D2638AAFC152AA16960F8270B0F676502777_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		MonoSymbolFileException__ctor_mD87CF4F6762177DE54FE0BF992923FFC40207BC0(L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodEntry_CheckLineNumberTable_mDD6B7358DBB4A85E8185B8EB6D3846696A33CDE4_RuntimeMethod_var)));
	}

IL_0032:
	{
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Offset_5;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_004b;
		}
	}
	{
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17 = L_16->___Row_0;
		V_1 = L_17;
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = L_18->___Offset_5;
		V_0 = L_19;
		goto IL_005b;
	}

IL_004b:
	{
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21 = L_20->___Row_0;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) <= ((int32_t)L_22)))
		{
			goto IL_005b;
		}
	}
	{
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = L_23->___Row_0;
		V_1 = L_24;
	}

IL_005b:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005f:
	{
		int32_t L_26 = V_2;
		LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* L_27 = ___line_numbers0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.MethodEntry::Write(Mono.CompilerServices.SymbolWriter.MyBinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodEntry_Write_mA81BFD36D29F4D96CECF75AC837082CE78A4B9B2 (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* ___bw0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___index_10;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->___DataOffset_3;
		if (L_1)
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodEntry_Write_mA81BFD36D29F4D96CECF75AC837082CE78A4B9B2_RuntimeMethod_var)));
	}

IL_0017:
	{
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_3 = ___bw0;
		int32_t L_4 = __this->___Token_1;
		NullCheck(L_3);
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, L_4);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_5 = ___bw0;
		int32_t L_6 = __this->___DataOffset_3;
		NullCheck(L_5);
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_5, L_6);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_7 = ___bw0;
		int32_t L_8 = __this->___LineNumberTableOffset_5;
		NullCheck(L_7);
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_7, L_8);
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.MethodEntry::WriteData(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.MyBinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodEntry_WriteData_mBBCF3F7F726B6CC6DD6E4970631A11AFDDBD9F1C (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* ___bw1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* V_6 = NULL;
	int32_t V_7 = 0;
	LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* V_8 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B17_0 = 0;
	{
		int32_t L_0 = __this->___index_10;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodEntry_WriteData_mBBCF3F7F726B6CC6DD6E4970631A11AFDDBD9F1C_RuntimeMethod_var)));
	}

IL_000f:
	{
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_2 = ___bw1;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(7 /* System.IO.Stream System.IO.BinaryWriter::get_BaseStream() */, L_2);
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
		__this->___LocalVariableTableOffset_4 = ((int32_t)L_4);
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_5 = __this->___locals_12;
		if (L_5)
		{
			goto IL_002c;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0034;
	}

IL_002c:
	{
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_6 = __this->___locals_12;
		NullCheck(L_6);
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
	}

IL_0034:
	{
		V_0 = G_B5_0;
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_7 = ___bw1;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_7, L_8, NULL);
		V_3 = 0;
		goto IL_0057;
	}

IL_0040:
	{
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_9 = __this->___locals_12;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_11 = ___file0;
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_12 = ___bw1;
		LocalVariableEntry_Write_mBE92AA7811F4097194AB9E6F03FE957079A77572(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), L_11, L_12, NULL);
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0057:
	{
		int32_t L_14 = V_3;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0040;
		}
	}
	{
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_16 = ___file0;
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = L_17->___LocalCount_19;
		int32_t L_19 = V_0;
		NullCheck(L_17);
		L_17->___LocalCount_19 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_20 = ___bw1;
		NullCheck(L_20);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21;
		L_21 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(7 /* System.IO.Stream System.IO.BinaryWriter::get_BaseStream() */, L_20);
		NullCheck(L_21);
		int64_t L_22;
		L_22 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_21);
		__this->___CodeBlockTableOffset_6 = ((int32_t)L_22);
		CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_23 = __this->___code_blocks_13;
		if (L_23)
		{
			goto IL_0086;
		}
	}
	{
		G_B11_0 = 0;
		goto IL_008e;
	}

IL_0086:
	{
		CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_24 = __this->___code_blocks_13;
		NullCheck(L_24);
		G_B11_0 = ((int32_t)(((RuntimeArray*)L_24)->max_length));
	}

IL_008e:
	{
		V_1 = G_B11_0;
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_25 = ___bw1;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_25, L_26, NULL);
		V_4 = 0;
		goto IL_00b0;
	}

IL_009b:
	{
		CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_27 = __this->___code_blocks_13;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_31 = ___bw1;
		NullCheck(L_30);
		CodeBlockEntry_Write_mE9F9733A34435CC22960F289A354E06640715119(L_30, L_31, NULL);
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b0:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = V_1;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_009b;
		}
	}
	{
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_35 = ___bw1;
		NullCheck(L_35);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_36;
		L_36 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(7 /* System.IO.Stream System.IO.BinaryWriter::get_BaseStream() */, L_35);
		NullCheck(L_36);
		int64_t L_37;
		L_37 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_36);
		__this->___ScopeVariableTableOffset_7 = ((int32_t)L_37);
		ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_38 = __this->___scope_vars_14;
		if (L_38)
		{
			goto IL_00d2;
		}
	}
	{
		G_B17_0 = 0;
		goto IL_00da;
	}

IL_00d2:
	{
		ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_39 = __this->___scope_vars_14;
		NullCheck(L_39);
		G_B17_0 = ((int32_t)(((RuntimeArray*)L_39)->max_length));
	}

IL_00da:
	{
		V_2 = G_B17_0;
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_40 = ___bw1;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_40, L_41, NULL);
		V_5 = 0;
		goto IL_0100;
	}

IL_00e7:
	{
		ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_42 = __this->___scope_vars_14;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_44 = ___bw1;
		ScopeVariable_Write_mED3EE718FAB63FE2207F167A54A82C3BBE378FD7(((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43))), L_44, NULL);
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0100:
	{
		int32_t L_46 = V_5;
		int32_t L_47 = V_2;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_00e7;
		}
	}
	{
		String_t* L_48 = __this->___real_name_16;
		if (!L_48)
		{
			goto IL_012b;
		}
	}
	{
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_49 = ___bw1;
		NullCheck(L_49);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_50;
		L_50 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(7 /* System.IO.Stream System.IO.BinaryWriter::get_BaseStream() */, L_49);
		NullCheck(L_50);
		int64_t L_51;
		L_51 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_50);
		__this->___RealNameOffset_8 = ((int32_t)L_51);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_52 = ___bw1;
		String_t* L_53 = __this->___real_name_16;
		NullCheck(L_52);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_52, L_53);
	}

IL_012b:
	{
		LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* L_54 = __this->___lnt_15;
		NullCheck(L_54);
		LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* L_55;
		L_55 = LineNumberTable_get_LineNumbers_mD0407D8C10E493FFEB39784035E723501BFB8010_inline(L_54, NULL);
		V_6 = L_55;
		V_7 = 0;
		goto IL_016c;
	}

IL_013d:
	{
		LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* L_56 = V_6;
		int32_t L_57 = V_7;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_8 = L_59;
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_60 = V_8;
		NullCheck(L_60);
		int32_t L_61 = L_60->___EndRow_2;
		if ((!(((uint32_t)L_61) == ((uint32_t)(-1)))))
		{
			goto IL_0158;
		}
	}
	{
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_62 = V_8;
		NullCheck(L_62);
		int32_t L_63 = L_62->___EndColumn_3;
		if ((((int32_t)L_63) == ((int32_t)(-1))))
		{
			goto IL_0166;
		}
	}

IL_0158:
	{
		int32_t L_64 = __this->___flags_9;
		__this->___flags_9 = ((int32_t)((int32_t)L_64|4));
	}

IL_0166:
	{
		int32_t L_65 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_016c:
	{
		int32_t L_66 = V_7;
		LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* L_67 = V_6;
		NullCheck(L_67);
		if ((((int32_t)L_66) < ((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length)))))
		{
			goto IL_013d;
		}
	}
	{
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_68 = ___bw1;
		NullCheck(L_68);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_69;
		L_69 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(7 /* System.IO.Stream System.IO.BinaryWriter::get_BaseStream() */, L_68);
		NullCheck(L_69);
		int64_t L_70;
		L_70 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_69);
		__this->___LineNumberTableOffset_5 = ((int32_t)L_70);
		LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* L_71 = __this->___lnt_15;
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_72 = ___file0;
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_73 = ___bw1;
		int32_t L_74 = __this->___flags_9;
		int32_t L_75 = __this->___flags_9;
		NullCheck(L_71);
		LineNumberTable_Write_m2412EA19B713E7D118D8B73DCB93DC7DABC356C7(L_71, L_72, L_73, (bool)((!(((uint32_t)((int32_t)((int32_t)L_74&2))) <= ((uint32_t)0)))? 1 : 0), (bool)((!(((uint32_t)((int32_t)((int32_t)L_75&4))) <= ((uint32_t)0)))? 1 : 0), NULL);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_76 = ___bw1;
		NullCheck(L_76);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_77;
		L_77 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(7 /* System.IO.Stream System.IO.BinaryWriter::get_BaseStream() */, L_76);
		NullCheck(L_77);
		int64_t L_78;
		L_78 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_77);
		__this->___DataOffset_3 = ((int32_t)L_78);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_79 = ___bw1;
		int32_t L_80 = __this->___CompileUnitIndex_0;
		NullCheck(L_79);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_79, L_80, NULL);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_81 = ___bw1;
		int32_t L_82 = __this->___LocalVariableTableOffset_4;
		NullCheck(L_81);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_81, L_82, NULL);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_83 = ___bw1;
		int32_t L_84 = __this->___NamespaceID_2;
		NullCheck(L_83);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_83, L_84, NULL);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_85 = ___bw1;
		int32_t L_86 = __this->___CodeBlockTableOffset_6;
		NullCheck(L_85);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_85, L_86, NULL);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_87 = ___bw1;
		int32_t L_88 = __this->___ScopeVariableTableOffset_7;
		NullCheck(L_87);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_87, L_88, NULL);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_89 = ___bw1;
		int32_t L_90 = __this->___RealNameOffset_8;
		NullCheck(L_89);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_89, L_90, NULL);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_91 = ___bw1;
		int32_t L_92 = __this->___flags_9;
		NullCheck(L_91);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_91, L_92, NULL);
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.MethodEntry::ReadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodEntry_ReadAll_m1F6A2A04555EDEF56025AFC266B8877FB1AE6C8F (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) 
{
	{
		LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* L_0;
		L_0 = MethodEntry_GetLineNumberTable_m0CD76DCD241A7FEF448EDDB724E9092C0D98C4F8(__this, NULL);
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_1;
		L_1 = MethodEntry_GetLocals_mEEBB25E090F377C782F0FCF6A9DF01800744B85C(__this, NULL);
		CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_2;
		L_2 = MethodEntry_GetCodeBlocks_m2D510E0B098C54DB9AC879B85DF8C3BC466F70A4(__this, NULL);
		ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_3;
		L_3 = MethodEntry_GetScopeVariables_mE9944A0DDAD4FA0FC70019E605BA678E9730063A(__this, NULL);
		String_t* L_4;
		L_4 = MethodEntry_GetRealName_m8B37C3BBDE5DFB3DA908F4910EAAEAE7045D90FA(__this, NULL);
		return;
	}
}
// Mono.CompilerServices.SymbolWriter.LineNumberTable Mono.CompilerServices.SymbolWriter.MethodEntry::GetLineNumberTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* MethodEntry_GetLineNumberTable_m0CD76DCD241A7FEF448EDDB724E9092C0D98C4F8 (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) 
{
	MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* V_0 = NULL;
	MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* V_1 = NULL;
	int64_t V_2 = 0;
	LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* V_3 = NULL;
	{
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_0 = __this->___SymbolFile_17;
		V_0 = L_0;
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0091:
			{// begin finally (depth: 1)
				MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* L_3 = __this->___lnt_15;
				if (!L_3)
				{
					goto IL_001e_1;
				}
			}
			{
				LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* L_4 = __this->___lnt_15;
				V_3 = L_4;
				goto IL_0098;
			}

IL_001e_1:
			{
				int32_t L_5 = __this->___LineNumberTableOffset_5;
				if (L_5)
				{
					goto IL_002a_1;
				}
			}
			{
				V_3 = (LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E*)NULL;
				goto IL_0098;
			}

IL_002a_1:
			{
				MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_6 = __this->___SymbolFile_17;
				NullCheck(L_6);
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_7;
				L_7 = MonoSymbolFile_get_BinaryReader_m9AD3F272D9661B06709E88E793384BF8FCD84C8F(L_6, NULL);
				V_1 = L_7;
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_8 = V_1;
				NullCheck(L_8);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9;
				L_9 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_8);
				NullCheck(L_9);
				int64_t L_10;
				L_10 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_9);
				V_2 = L_10;
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_11 = V_1;
				NullCheck(L_11);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12;
				L_12 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_11);
				int32_t L_13 = __this->___LineNumberTableOffset_5;
				NullCheck(L_12);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_12, ((int64_t)L_13));
				MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_14 = __this->___SymbolFile_17;
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_15 = V_1;
				int32_t L_16 = __this->___flags_9;
				int32_t L_17 = __this->___flags_9;
				LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* L_18;
				L_18 = LineNumberTable_Read_m5A948E3760A12218CE84DB00D59A96F90674E77A(L_14, L_15, (bool)((!(((uint32_t)((int32_t)((int32_t)L_16&2))) <= ((uint32_t)0)))? 1 : 0), (bool)((!(((uint32_t)((int32_t)((int32_t)L_17&4))) <= ((uint32_t)0)))? 1 : 0), NULL);
				__this->___lnt_15 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___lnt_15), (void*)L_18);
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_19 = V_1;
				NullCheck(L_19);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20;
				L_20 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_19);
				int64_t L_21 = V_2;
				NullCheck(L_20);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_20, L_21);
				LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* L_22 = __this->___lnt_15;
				V_3 = L_22;
				goto IL_0098;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* L_23 = V_3;
		return L_23;
	}
}
// Mono.CompilerServices.SymbolWriter.LocalVariableEntry[] Mono.CompilerServices.SymbolWriter.MethodEntry::GetLocals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* MethodEntry_GetLocals_mEEBB25E090F377C782F0FCF6A9DF01800744B85C (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* V_0 = NULL;
	MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* V_1 = NULL;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* V_4 = NULL;
	int32_t V_5 = 0;
	{
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_0 = __this->___SymbolFile_17;
		V_0 = L_0;
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ae:
			{// begin finally (depth: 1)
				MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_3 = __this->___locals_12;
				if (!L_3)
				{
					goto IL_0022_1;
				}
			}
			{
				LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_4 = __this->___locals_12;
				V_4 = L_4;
				goto IL_00b5;
			}

IL_0022_1:
			{
				int32_t L_5 = __this->___LocalVariableTableOffset_4;
				if (L_5)
				{
					goto IL_0032_1;
				}
			}
			{
				V_4 = (LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3*)NULL;
				goto IL_00b5;
			}

IL_0032_1:
			{
				MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_6 = __this->___SymbolFile_17;
				NullCheck(L_6);
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_7;
				L_7 = MonoSymbolFile_get_BinaryReader_m9AD3F272D9661B06709E88E793384BF8FCD84C8F(L_6, NULL);
				V_1 = L_7;
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_8 = V_1;
				NullCheck(L_8);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9;
				L_9 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_8);
				NullCheck(L_9);
				int64_t L_10;
				L_10 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_9);
				V_2 = L_10;
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_11 = V_1;
				NullCheck(L_11);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12;
				L_12 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_11);
				int32_t L_13 = __this->___LocalVariableTableOffset_4;
				NullCheck(L_12);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_12, ((int64_t)L_13));
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_14 = V_1;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_14, NULL);
				V_3 = L_15;
				int32_t L_16 = V_3;
				LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_17 = (LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3*)(LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3*)SZArrayNew(LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3_il2cpp_TypeInfo_var, (uint32_t)L_16);
				__this->___locals_12 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___locals_12), (void*)L_17);
				V_5 = 0;
				goto IL_0093_1;
			}

IL_0074_1:
			{
				LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_18 = __this->___locals_12;
				int32_t L_19 = V_5;
				MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_20 = __this->___SymbolFile_17;
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_21 = V_1;
				LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A L_22;
				memset((&L_22), 0, sizeof(L_22));
				LocalVariableEntry__ctor_m2CB1320870302FDA29010766584903E8037D7AAD((&L_22), L_20, L_21, /*hidden argument*/NULL);
				NullCheck(L_18);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A)L_22);
				int32_t L_23 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_0093_1:
			{
				int32_t L_24 = V_5;
				int32_t L_25 = V_3;
				if ((((int32_t)L_24) < ((int32_t)L_25)))
				{
					goto IL_0074_1;
				}
			}
			{
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_26 = V_1;
				NullCheck(L_26);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_27;
				L_27 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_26);
				int64_t L_28 = V_2;
				NullCheck(L_27);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_27, L_28);
				LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_29 = __this->___locals_12;
				V_4 = L_29;
				goto IL_00b5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b5:
	{
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_30 = V_4;
		return L_30;
	}
}
// Mono.CompilerServices.SymbolWriter.CodeBlockEntry[] Mono.CompilerServices.SymbolWriter.MethodEntry::GetCodeBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* MethodEntry_GetCodeBlocks_m2D510E0B098C54DB9AC879B85DF8C3BC466F70A4 (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* V_0 = NULL;
	MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* V_1 = NULL;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* V_4 = NULL;
	int32_t V_5 = 0;
	{
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_0 = __this->___SymbolFile_17;
		V_0 = L_0;
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a3:
			{// begin finally (depth: 1)
				MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_3 = __this->___code_blocks_13;
				if (!L_3)
				{
					goto IL_0022_1;
				}
			}
			{
				CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_4 = __this->___code_blocks_13;
				V_4 = L_4;
				goto IL_00aa;
			}

IL_0022_1:
			{
				int32_t L_5 = __this->___CodeBlockTableOffset_6;
				if (L_5)
				{
					goto IL_002f_1;
				}
			}
			{
				V_4 = (CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5*)NULL;
				goto IL_00aa;
			}

IL_002f_1:
			{
				MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_6 = __this->___SymbolFile_17;
				NullCheck(L_6);
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_7;
				L_7 = MonoSymbolFile_get_BinaryReader_m9AD3F272D9661B06709E88E793384BF8FCD84C8F(L_6, NULL);
				V_1 = L_7;
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_8 = V_1;
				NullCheck(L_8);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9;
				L_9 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_8);
				NullCheck(L_9);
				int64_t L_10;
				L_10 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_9);
				V_2 = L_10;
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_11 = V_1;
				NullCheck(L_11);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12;
				L_12 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_11);
				int32_t L_13 = __this->___CodeBlockTableOffset_6;
				NullCheck(L_12);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_12, ((int64_t)L_13));
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_14 = V_1;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_14, NULL);
				V_3 = L_15;
				int32_t L_16 = V_3;
				CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_17 = (CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5*)(CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5*)SZArrayNew(CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5_il2cpp_TypeInfo_var, (uint32_t)L_16);
				__this->___code_blocks_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___code_blocks_13), (void*)L_17);
				V_5 = 0;
				goto IL_0088_1;
			}

IL_0071_1:
			{
				CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_18 = __this->___code_blocks_13;
				int32_t L_19 = V_5;
				int32_t L_20 = V_5;
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_21 = V_1;
				CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* L_22 = (CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D*)il2cpp_codegen_object_new(CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D_il2cpp_TypeInfo_var);
				NullCheck(L_22);
				CodeBlockEntry__ctor_m5024FA09AB2D64D13C6F51098CA0C1D64EB17F43(L_22, L_20, L_21, NULL);
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_22);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D*)L_22);
				int32_t L_23 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_0088_1:
			{
				int32_t L_24 = V_5;
				int32_t L_25 = V_3;
				if ((((int32_t)L_24) < ((int32_t)L_25)))
				{
					goto IL_0071_1;
				}
			}
			{
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_26 = V_1;
				NullCheck(L_26);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_27;
				L_27 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_26);
				int64_t L_28 = V_2;
				NullCheck(L_27);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_27, L_28);
				CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_29 = __this->___code_blocks_13;
				V_4 = L_29;
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_30 = V_4;
		return L_30;
	}
}
// Mono.CompilerServices.SymbolWriter.ScopeVariable[] Mono.CompilerServices.SymbolWriter.MethodEntry::GetScopeVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* MethodEntry_GetScopeVariables_mE9944A0DDAD4FA0FC70019E605BA678E9730063A (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* V_0 = NULL;
	MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* V_1 = NULL;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_0 = __this->___SymbolFile_17;
		V_0 = L_0;
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a5:
			{// begin finally (depth: 1)
				MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_3 = __this->___scope_vars_14;
				if (!L_3)
				{
					goto IL_0022_1;
				}
			}
			{
				ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_4 = __this->___scope_vars_14;
				V_4 = L_4;
				goto IL_00ac;
			}

IL_0022_1:
			{
				int32_t L_5 = __this->___ScopeVariableTableOffset_7;
				if (L_5)
				{
					goto IL_002f_1;
				}
			}
			{
				V_4 = (ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC*)NULL;
				goto IL_00ac;
			}

IL_002f_1:
			{
				MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_6 = __this->___SymbolFile_17;
				NullCheck(L_6);
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_7;
				L_7 = MonoSymbolFile_get_BinaryReader_m9AD3F272D9661B06709E88E793384BF8FCD84C8F(L_6, NULL);
				V_1 = L_7;
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_8 = V_1;
				NullCheck(L_8);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9;
				L_9 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_8);
				NullCheck(L_9);
				int64_t L_10;
				L_10 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_9);
				V_2 = L_10;
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_11 = V_1;
				NullCheck(L_11);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12;
				L_12 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_11);
				int32_t L_13 = __this->___ScopeVariableTableOffset_7;
				NullCheck(L_12);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_12, ((int64_t)L_13));
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_14 = V_1;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_14, NULL);
				V_3 = L_15;
				int32_t L_16 = V_3;
				ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_17 = (ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC*)(ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC*)SZArrayNew(ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC_il2cpp_TypeInfo_var, (uint32_t)L_16);
				__this->___scope_vars_14 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___scope_vars_14), (void*)L_17);
				V_5 = 0;
				goto IL_008a_1;
			}

IL_0071_1:
			{
				ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_18 = __this->___scope_vars_14;
				int32_t L_19 = V_5;
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_20 = V_1;
				ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 L_21;
				memset((&L_21), 0, sizeof(L_21));
				ScopeVariable__ctor_mBB5EF135D9C182EBA3BEF09FC4F394BC8A7DCB15((&L_21), L_20, /*hidden argument*/NULL);
				NullCheck(L_18);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1)L_21);
				int32_t L_22 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
			}

IL_008a_1:
			{
				int32_t L_23 = V_5;
				int32_t L_24 = V_3;
				if ((((int32_t)L_23) < ((int32_t)L_24)))
				{
					goto IL_0071_1;
				}
			}
			{
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_25 = V_1;
				NullCheck(L_25);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_26;
				L_26 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_25);
				int64_t L_27 = V_2;
				NullCheck(L_26);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_26, L_27);
				ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_28 = __this->___scope_vars_14;
				V_4 = L_28;
				goto IL_00ac;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ac:
	{
		ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_29 = V_4;
		return L_29;
	}
}
// System.String Mono.CompilerServices.SymbolWriter.MethodEntry::GetRealName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodEntry_GetRealName_m8B37C3BBDE5DFB3DA908F4910EAAEAE7045D90FA (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) 
{
	MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_0 = __this->___SymbolFile_17;
		V_0 = L_0;
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				String_t* L_3 = __this->___real_name_16;
				if (!L_3)
				{
					goto IL_001e_1;
				}
			}
			{
				String_t* L_4 = __this->___real_name_16;
				V_1 = L_4;
				goto IL_0056;
			}

IL_001e_1:
			{
				int32_t L_5 = __this->___RealNameOffset_8;
				if (L_5)
				{
					goto IL_002a_1;
				}
			}
			{
				V_1 = (String_t*)NULL;
				goto IL_0056;
			}

IL_002a_1:
			{
				MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_6 = __this->___SymbolFile_17;
				NullCheck(L_6);
				MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_7;
				L_7 = MonoSymbolFile_get_BinaryReader_m9AD3F272D9661B06709E88E793384BF8FCD84C8F(L_6, NULL);
				int32_t L_8 = __this->___RealNameOffset_8;
				NullCheck(L_7);
				String_t* L_9;
				L_9 = MyBinaryReader_ReadString_m9399C03D275BECC3C49AE89EC242E981B5E83110(L_7, L_8, NULL);
				__this->___real_name_16 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___real_name_16), (void*)L_9);
				String_t* L_10 = __this->___real_name_16;
				V_1 = L_10;
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.Int32 Mono.CompilerServices.SymbolWriter.MethodEntry::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MethodEntry_CompareTo_m3EC274EFD1BE73EF8EAD882056454085DA43831E (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365*)CastclassClass((RuntimeObject*)L_0, MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365_il2cpp_TypeInfo_var));
		MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Token_1;
		int32_t L_3 = __this->___Token_1;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0017;
		}
	}
	{
		return 1;
	}

IL_0017:
	{
		MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Token_1;
		int32_t L_6 = __this->___Token_1;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0027;
		}
	}
	{
		return (-1);
	}

IL_0027:
	{
		return 0;
	}
}
// System.String Mono.CompilerServices.SymbolWriter.MethodEntry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MethodEntry_ToString_m4B60D34775EAD01011565CA0EF216E6A280A27DD (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA803B5C4A99B0047C0E51A12E4F4FB254788BE99);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = __this->___index_10;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6 = __this->___Token_1;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10 = __this->___CompileUnitIndex_0;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631* L_14 = __this->___CompileUnit_11;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralA803B5C4A99B0047C0E51A12E4F4FB254788BE99, L_13, NULL);
		return L_15;
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
// Conversion methods for marshalling of: Mono.CompilerServices.SymbolWriter.NamespaceEntry
IL2CPP_EXTERN_C void NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshal_pinvoke(const NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C& unmarshaled, NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___UsingClauses_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'UsingClauses' of type 'NamespaceEntry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___UsingClauses_3Exception, NULL);
}
IL2CPP_EXTERN_C void NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshal_pinvoke_back(const NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshaled_pinvoke& marshaled, NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C& unmarshaled)
{
	Exception_t* ___UsingClauses_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'UsingClauses' of type 'NamespaceEntry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___UsingClauses_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mono.CompilerServices.SymbolWriter.NamespaceEntry
IL2CPP_EXTERN_C void NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshal_pinvoke_cleanup(NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Mono.CompilerServices.SymbolWriter.NamespaceEntry
IL2CPP_EXTERN_C void NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshal_com(const NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C& unmarshaled, NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshaled_com& marshaled)
{
	Exception_t* ___UsingClauses_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'UsingClauses' of type 'NamespaceEntry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___UsingClauses_3Exception, NULL);
}
IL2CPP_EXTERN_C void NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshal_com_back(const NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshaled_com& marshaled, NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C& unmarshaled)
{
	Exception_t* ___UsingClauses_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'UsingClauses' of type 'NamespaceEntry'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___UsingClauses_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Mono.CompilerServices.SymbolWriter.NamespaceEntry
IL2CPP_EXTERN_C void NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshal_com_cleanup(NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C_marshaled_com& marshaled)
{
}
// System.Void Mono.CompilerServices.SymbolWriter.NamespaceEntry::.ctor(System.String,System.Int32,System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceEntry__ctor_m38F09AE26E54A8C0F8A5455F6098FE386D59C6E3 (NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* __this, String_t* ___name0, int32_t ___index1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___using_clauses2, int32_t ___parent3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* G_B2_0 = NULL;
	NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* G_B1_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_0 = NULL;
	NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* G_B3_1 = NULL;
	{
		String_t* L_0 = ___name0;
		__this->___Name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)L_0);
		int32_t L_1 = ___index1;
		__this->___Index_1 = L_1;
		int32_t L_2 = ___parent3;
		__this->___Parent_2 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___using_clauses2;
		G_B1_0 = __this;
		if (L_3)
		{
			G_B2_0 = __this;
			goto IL_0022;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_0022:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___using_clauses2;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		G_B3_1->___UsingClauses_3 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___UsingClauses_3), (void*)G_B3_0);
		return;
	}
}
IL2CPP_EXTERN_C  void NamespaceEntry__ctor_m38F09AE26E54A8C0F8A5455F6098FE386D59C6E3_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, int32_t ___index1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___using_clauses2, int32_t ___parent3, const RuntimeMethod* method)
{
	NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C*>(__this + _offset);
	NamespaceEntry__ctor_m38F09AE26E54A8C0F8A5455F6098FE386D59C6E3(_thisAdjusted, ___name0, ___index1, ___using_clauses2, ___parent3, method);
}
// System.Void Mono.CompilerServices.SymbolWriter.NamespaceEntry::.ctor(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.MyBinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceEntry__ctor_m11185FB643E4C45B8A53CBDBD0B6210680C67D8A (NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* ___reader1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_0 = ___reader1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_0);
		__this->___Name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Name_0), (void*)L_1);
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_2 = ___reader1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_2, NULL);
		__this->___Index_1 = L_3;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_4 = ___reader1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_4, NULL);
		__this->___Parent_2 = L_5;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_6 = ___reader1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = MyBinaryReader_ReadLeb128_m680634DB56A1D526870C8E33B16F58E24D6559FA(L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->___UsingClauses_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UsingClauses_3), (void*)L_9);
		V_1 = 0;
		goto IL_004d;
	}

IL_003b:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = __this->___UsingClauses_3;
		int32_t L_11 = V_1;
		MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* L_12 = ___reader1;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(22 /* System.String System.IO.BinaryReader::ReadString() */, L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (String_t*)L_13);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void NamespaceEntry__ctor_m11185FB643E4C45B8A53CBDBD0B6210680C67D8A_AdjustorThunk (RuntimeObject* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, MyBinaryReader_tEF0D802C2676D8D77C47E3DEB9E2690809C1D296* ___reader1, const RuntimeMethod* method)
{
	NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C*>(__this + _offset);
	NamespaceEntry__ctor_m11185FB643E4C45B8A53CBDBD0B6210680C67D8A(_thisAdjusted, ___file0, ___reader1, method);
}
// System.Void Mono.CompilerServices.SymbolWriter.NamespaceEntry::Write(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,Mono.CompilerServices.SymbolWriter.MyBinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamespaceEntry_Write_mC3948415C3312E62F44D0A5CF25060EFDD5C690B (NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* ___bw1, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_0 = ___bw1;
		String_t* L_1 = __this->___Name_0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_0, L_1);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_2 = ___bw1;
		int32_t L_3 = __this->___Index_1;
		NullCheck(L_2);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_2, L_3, NULL);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_4 = ___bw1;
		int32_t L_5 = __this->___Parent_2;
		NullCheck(L_4);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_4, L_5, NULL);
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_6 = ___bw1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = __this->___UsingClauses_3;
		NullCheck(L_7);
		NullCheck(L_6);
		MyBinaryWriter_WriteLeb128_m89C265ABE500BBA705FE9CD335A9556F9710D295(L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = __this->___UsingClauses_3;
		V_0 = L_8;
		V_1 = 0;
		goto IL_004c;
	}

IL_003d:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* L_13 = ___bw1;
		String_t* L_14 = V_2;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_13, L_14);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004c:
	{
		int32_t L_16 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void NamespaceEntry_Write_mC3948415C3312E62F44D0A5CF25060EFDD5C690B_AdjustorThunk (RuntimeObject* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, MyBinaryWriter_tCEA20E239D5CD356609B7FC4FA32EC1710B7D750* ___bw1, const RuntimeMethod* method)
{
	NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C*>(__this + _offset);
	NamespaceEntry_Write_mC3948415C3312E62F44D0A5CF25060EFDD5C690B(_thisAdjusted, ___file0, ___bw1, method);
}
// System.String Mono.CompilerServices.SymbolWriter.NamespaceEntry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NamespaceEntry_ToString_mABA9A0632558B5B3093C04BB4BA6CB664DAC5D35 (NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64A37F267E22F574EC11C460E2100E5363519166);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___Name_0;
		int32_t L_1 = __this->___Index_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = __this->___Parent_2;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral64A37F267E22F574EC11C460E2100E5363519166, L_0, L_3, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* NamespaceEntry_ToString_mABA9A0632558B5B3093C04BB4BA6CB664DAC5D35_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NamespaceEntry_t9547E05DF5E6326C627DE9A18D92FBF128C6683C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = NamespaceEntry_ToString_mABA9A0632558B5B3093C04BB4BA6CB664DAC5D35(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::.ctor(Mono.CompilerServices.SymbolWriter.ICompileUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder__ctor_m2C48CD2DBC77F6D79BA46C185AB54DD6987F42B5 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, RuntimeObject* ___comp_unit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1DF0970A29577F8E40C7CD3BD22570F5FB25D38B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t131E16D69BAD909D8931F32E827761AD183C0474_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___comp_unit0;
		__this->____comp_unit_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comp_unit_5), (void*)L_0);
		List_1_t131E16D69BAD909D8931F32E827761AD183C0474* L_1 = (List_1_t131E16D69BAD909D8931F32E827761AD183C0474*)il2cpp_codegen_object_new(List_1_t131E16D69BAD909D8931F32E827761AD183C0474_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m1DF0970A29577F8E40C7CD3BD22570F5FB25D38B(L_1, List_1__ctor_m1DF0970A29577F8E40C7CD3BD22570F5FB25D38B_RuntimeMethod_var);
		__this->___method_lines_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___method_lines_4), (void*)L_1);
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::.ctor(Mono.CompilerServices.SymbolWriter.ICompileUnit,System.Int32,Mono.CompilerServices.SymbolWriter.IMethodDef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder__ctor_m590FD27ECA94405AE1CFF1C0ECB06F56EE7E5FA2 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, RuntimeObject* ___comp_unit0, int32_t ___ns_id1, RuntimeObject* ___method2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comp_unit0;
		SourceMethodBuilder__ctor_m2C48CD2DBC77F6D79BA46C185AB54DD6987F42B5(__this, L_0, NULL);
		int32_t L_1 = ___ns_id1;
		__this->___ns_id_6 = L_1;
		RuntimeObject* L_2 = ___method2;
		__this->___method_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___method_7), (void*)L_2);
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::MarkSequencePoint(System.Int32,Mono.CompilerServices.SymbolWriter.SourceFileEntry,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder_MarkSequencePoint_m39F7A1BE068B90FC5BA8B4F85D92BA24BD95A9BF (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, int32_t ___offset0, SourceFileEntry_tAE8059F2AAB5300BE9F9686F79F7FBDE79024D63* ___file1, int32_t ___line2, int32_t ___column3, bool ___is_hidden4, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___offset0;
		SourceFileEntry_tAE8059F2AAB5300BE9F9686F79F7FBDE79024D63* L_1 = ___file1;
		int32_t L_2 = ___line2;
		int32_t L_3 = ___column3;
		bool L_4 = ___is_hidden4;
		SourceMethodBuilder_MarkSequencePoint_mA63C239057A90E3F6F766147493C49F28DAA933D(__this, L_0, L_1, L_2, L_3, (-1), (-1), L_4, NULL);
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::MarkSequencePoint(System.Int32,Mono.CompilerServices.SymbolWriter.SourceFileEntry,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder_MarkSequencePoint_mA63C239057A90E3F6F766147493C49F28DAA933D (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, int32_t ___offset0, SourceFileEntry_tAE8059F2AAB5300BE9F9686F79F7FBDE79024D63* ___file1, int32_t ___line2, int32_t ___column3, int32_t ___end_line4, int32_t ___end_column5, bool ___is_hidden6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDC840E876C6B054C905E9C9DCA061A25B02FCCBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE587E0F7D1DC791314F679254E36E7AA845C8118_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6D90485EDAD2935E3692ED8660552CFA2076E9D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4139AA331A407682416EA73FFDF8203ECA7848A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationComparer_tC4E2576674989C6A014E6ED99EE8DF270FC88674_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* V_0 = NULL;
	LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		SourceFileEntry_tAE8059F2AAB5300BE9F9686F79F7FBDE79024D63* L_0 = ___file1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		SourceFileEntry_tAE8059F2AAB5300BE9F9686F79F7FBDE79024D63* L_1 = ___file1;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Index_0;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		int32_t L_3 = ___line2;
		int32_t L_4 = ___column3;
		int32_t L_5 = ___end_line4;
		int32_t L_6 = ___end_column5;
		int32_t L_7 = ___offset0;
		bool L_8 = ___is_hidden6;
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_9 = (LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7*)il2cpp_codegen_object_new(LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		LineNumberEntry__ctor_mDB333BD62004E9F402E437B6D5AD9FCD5EE3EF09(L_9, G_B3_0, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		V_0 = L_9;
		List_1_t131E16D69BAD909D8931F32E827761AD183C0474* L_10 = __this->___method_lines_4;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mE587E0F7D1DC791314F679254E36E7AA845C8118_inline(L_10, List_1_get_Count_mE587E0F7D1DC791314F679254E36E7AA845C8118_RuntimeMethod_var);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		List_1_t131E16D69BAD909D8931F32E827761AD183C0474* L_12 = __this->___method_lines_4;
		List_1_t131E16D69BAD909D8931F32E827761AD183C0474* L_13 = __this->___method_lines_4;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mE587E0F7D1DC791314F679254E36E7AA845C8118_inline(L_13, List_1_get_Count_mE587E0F7D1DC791314F679254E36E7AA845C8118_RuntimeMethod_var);
		NullCheck(L_12);
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_15;
		L_15 = List_1_get_Item_m6D90485EDAD2935E3692ED8660552CFA2076E9D2(L_12, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), List_1_get_Item_m6D90485EDAD2935E3692ED8660552CFA2076E9D2_RuntimeMethod_var);
		V_1 = L_15;
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = L_16->___Offset_5;
		int32_t L_18 = ___offset0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0075;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LocationComparer_tC4E2576674989C6A014E6ED99EE8DF270FC88674_il2cpp_TypeInfo_var);
		LocationComparer_tC4E2576674989C6A014E6ED99EE8DF270FC88674* L_19 = ((LocationComparer_tC4E2576674989C6A014E6ED99EE8DF270FC88674_StaticFields*)il2cpp_codegen_static_fields_for(LocationComparer_tC4E2576674989C6A014E6ED99EE8DF270FC88674_il2cpp_TypeInfo_var))->___Default_0;
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_20 = V_0;
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_21 = V_1;
		NullCheck(L_19);
		int32_t L_22;
		L_22 = LocationComparer_Compare_mD783C31D4978CDCECD7561D8EA5DEB9C2B07D38E(L_19, L_20, L_21, NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		List_1_t131E16D69BAD909D8931F32E827761AD183C0474* L_23 = __this->___method_lines_4;
		List_1_t131E16D69BAD909D8931F32E827761AD183C0474* L_24 = __this->___method_lines_4;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_mE587E0F7D1DC791314F679254E36E7AA845C8118_inline(L_24, List_1_get_Count_mE587E0F7D1DC791314F679254E36E7AA845C8118_RuntimeMethod_var);
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_26 = V_0;
		NullCheck(L_23);
		List_1_set_Item_m4139AA331A407682416EA73FFDF8203ECA7848A8(L_23, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), L_26, List_1_set_Item_m4139AA331A407682416EA73FFDF8203ECA7848A8_RuntimeMethod_var);
	}

IL_0074:
	{
		return;
	}

IL_0075:
	{
		List_1_t131E16D69BAD909D8931F32E827761AD183C0474* L_27 = __this->___method_lines_4;
		LineNumberEntry_tA31ED5D086CBFEEE2B37A5AB4E3120C235E52DF7* L_28 = V_0;
		NullCheck(L_27);
		List_1_Add_mDC840E876C6B054C905E9C9DCA061A25B02FCCBF_inline(L_27, L_28, List_1_Add_mDC840E876C6B054C905E9C9DCA061A25B02FCCBF_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::StartBlock(Mono.CompilerServices.SymbolWriter.CodeBlockEntry/Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder_StartBlock_m80D6319D71670838C605C7FFF50E31BDAACC1B72 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, int32_t ___type0, int32_t ___start_offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5281C502FD03EDADD1A5D46CAC0BBB6587188395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m466237C3BD3CA64B0B9B12E4F2D805506242CC93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m802BCC7C199236F6A0A9D2A1099E10361A62F7A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m295DA8C7C60E81F646F4845BCFC44C29E839DF70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m5B49490C8E444A40DD6D5E8402E63DD0F9B390EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* V_1 = NULL;
	int32_t G_B7_0 = 0;
	{
		Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* L_0 = __this->____block_stack_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* L_1 = (Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2*)il2cpp_codegen_object_new(Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stack_1__ctor_m5B49490C8E444A40DD6D5E8402E63DD0F9B390EA(L_1, Stack_1__ctor_m5B49490C8E444A40DD6D5E8402E63DD0F9B390EA_RuntimeMethod_var);
		__this->____block_stack_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____block_stack_3), (void*)L_1);
	}

IL_0013:
	{
		List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E* L_2 = __this->____blocks_1;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E* L_3 = (List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E*)il2cpp_codegen_object_new(List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m466237C3BD3CA64B0B9B12E4F2D805506242CC93(L_3, List_1__ctor_m466237C3BD3CA64B0B9B12E4F2D805506242CC93_RuntimeMethod_var);
		__this->____blocks_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____blocks_1), (void*)L_3);
	}

IL_0026:
	{
		CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* L_4;
		L_4 = SourceMethodBuilder_get_CurrentBlock_m1933E7516E618265C4AE087753550340B43D6C24(__this, NULL);
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		G_B7_0 = (-1);
		goto IL_003c;
	}

IL_0031:
	{
		CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* L_5;
		L_5 = SourceMethodBuilder_get_CurrentBlock_m1933E7516E618265C4AE087753550340B43D6C24(__this, NULL);
		NullCheck(L_5);
		int32_t L_6 = L_5->___Index_0;
		G_B7_0 = L_6;
	}

IL_003c:
	{
		V_0 = G_B7_0;
		List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E* L_7 = __this->____blocks_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m802BCC7C199236F6A0A9D2A1099E10361A62F7A9_inline(L_7, List_1_get_Count_m802BCC7C199236F6A0A9D2A1099E10361A62F7A9_RuntimeMethod_var);
		int32_t L_9 = V_0;
		int32_t L_10 = ___type0;
		int32_t L_11 = ___start_offset1;
		CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* L_12 = (CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D*)il2cpp_codegen_object_new(CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		CodeBlockEntry__ctor_mFDF0943768FA69127DFFA33008EF4369C6298A6E(L_12, ((int32_t)il2cpp_codegen_add(L_8, 1)), L_9, L_10, L_11, NULL);
		V_1 = L_12;
		Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* L_13 = __this->____block_stack_3;
		CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m295DA8C7C60E81F646F4845BCFC44C29E839DF70(L_13, L_14, Stack_1_Push_m295DA8C7C60E81F646F4845BCFC44C29E839DF70_RuntimeMethod_var);
		List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E* L_15 = __this->____blocks_1;
		CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* L_16 = V_1;
		NullCheck(L_15);
		List_1_Add_m5281C502FD03EDADD1A5D46CAC0BBB6587188395_inline(L_15, L_16, List_1_Add_m5281C502FD03EDADD1A5D46CAC0BBB6587188395_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::EndBlock(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder_EndBlock_m9F3FCEFBAD6FF0C3C33E18D4151E133F44E2F948 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, int32_t ___end_offset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m61A940008508D306AD9CEA8A102AED24E408C943_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* L_0 = __this->____block_stack_3;
		NullCheck(L_0);
		CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* L_1;
		L_1 = Stack_1_Pop_m61A940008508D306AD9CEA8A102AED24E408C943(L_0, Stack_1_Pop_m61A940008508D306AD9CEA8A102AED24E408C943_RuntimeMethod_var);
		int32_t L_2 = ___end_offset0;
		NullCheck(L_1);
		CodeBlockEntry_Close_m0C54C4720E9727659D715A4B508755EF873586DD_inline(L_1, L_2, NULL);
		return;
	}
}
// Mono.CompilerServices.SymbolWriter.CodeBlockEntry[] Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::get_Blocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* SourceMethodBuilder_get_Blocks_m447E842F7272D13791D8D8E4EFD2622EB8F24288 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_mCEFD84B3A71B51F4F217BDCD80B40538AAB2DB69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m802BCC7C199236F6A0A9D2A1099E10361A62F7A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* V_0 = NULL;
	{
		List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E* L_0 = __this->____blocks_1;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_1 = (CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5*)(CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5*)SZArrayNew(CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_1;
	}

IL_000f:
	{
		List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E* L_2 = __this->____blocks_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m802BCC7C199236F6A0A9D2A1099E10361A62F7A9_inline(L_2, List_1_get_Count_m802BCC7C199236F6A0A9D2A1099E10361A62F7A9_RuntimeMethod_var);
		CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_4 = (CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5*)(CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5*)SZArrayNew(CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		List_1_t6BB70EF4BD8AF261CBBF96B04A06FADDAAC8D94E* L_5 = __this->____blocks_1;
		CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_6 = V_0;
		NullCheck(L_5);
		List_1_CopyTo_mCEFD84B3A71B51F4F217BDCD80B40538AAB2DB69(L_5, L_6, 0, List_1_CopyTo_mCEFD84B3A71B51F4F217BDCD80B40538AAB2DB69_RuntimeMethod_var);
		CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_7 = V_0;
		return L_7;
	}
}
// Mono.CompilerServices.SymbolWriter.CodeBlockEntry Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::get_CurrentBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* SourceMethodBuilder_get_CurrentBlock_m1933E7516E618265C4AE087753550340B43D6C24 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_mF35DD40D75677DC00DD3EF124CBCDC9605746826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m8DA1897B26FEF5322B60F2A24C5D08F9B7E156A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* L_0 = __this->____block_stack_3;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* L_1 = __this->____block_stack_3;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Stack_1_get_Count_m8DA1897B26FEF5322B60F2A24C5D08F9B7E156A8_inline(L_1, Stack_1_get_Count_m8DA1897B26FEF5322B60F2A24C5D08F9B7E156A8_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		Stack_1_t0822C821F1C2858F175B9BD8A8689A2AF4F9F8E2* L_3 = __this->____block_stack_3;
		NullCheck(L_3);
		CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* L_4;
		L_4 = Stack_1_Peek_mF35DD40D75677DC00DD3EF124CBCDC9605746826(L_3, Stack_1_Peek_mF35DD40D75677DC00DD3EF124CBCDC9605746826_RuntimeMethod_var);
		return L_4;
	}

IL_0022:
	{
		return (CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D*)NULL;
	}
}
// Mono.CompilerServices.SymbolWriter.LocalVariableEntry[] Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::get_Locals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* SourceMethodBuilder_get_Locals_m511BF1125A812474B5E4E4EB99810DA44826C2AD (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA707E29D9E3F7930E4F11A2164EFAFBE2003943F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* L_0 = __this->____locals_0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_1 = (LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3*)(LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3*)SZArrayNew(LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_1;
	}

IL_000f:
	{
		List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* L_2 = __this->____locals_0;
		NullCheck(L_2);
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_3;
		L_3 = List_1_ToArray_mA707E29D9E3F7930E4F11A2164EFAFBE2003943F(L_2, List_1_ToArray_mA707E29D9E3F7930E4F11A2164EFAFBE2003943F_RuntimeMethod_var);
		return L_3;
	}
}
// Mono.CompilerServices.SymbolWriter.ICompileUnit Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::get_SourceFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SourceMethodBuilder_get_SourceFile_m183BF98E849638BC4ACAFCF06DBF094E82CE0598 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comp_unit_5;
		return L_0;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::AddLocal(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder_AddLocal_m4B6DE79A4DDA4E9589F8ED16FCD638E775F1880D (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, int32_t ___index0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m87AD398778DB1D31D3AB755704565AC835DC9DAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD40056B31951C1FAB921DAE7396C2D45911348DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t504F807CA014CA67521A129AAE80D72629E16A3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* L_0 = __this->____locals_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* L_1 = (List_1_t504F807CA014CA67521A129AAE80D72629E16A3F*)il2cpp_codegen_object_new(List_1_t504F807CA014CA67521A129AAE80D72629E16A3F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mD40056B31951C1FAB921DAE7396C2D45911348DD(L_1, List_1__ctor_mD40056B31951C1FAB921DAE7396C2D45911348DD_RuntimeMethod_var);
		__this->____locals_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____locals_0), (void*)L_1);
	}

IL_0013:
	{
		CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* L_2;
		L_2 = SourceMethodBuilder_get_CurrentBlock_m1933E7516E618265C4AE087753550340B43D6C24(__this, NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0029;
	}

IL_001e:
	{
		CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* L_3;
		L_3 = SourceMethodBuilder_get_CurrentBlock_m1933E7516E618265C4AE087753550340B43D6C24(__this, NULL);
		NullCheck(L_3);
		int32_t L_4 = L_3->___Index_0;
		G_B5_0 = L_4;
	}

IL_0029:
	{
		V_0 = G_B5_0;
		List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* L_5 = __this->____locals_0;
		int32_t L_6 = ___index0;
		String_t* L_7 = ___name1;
		int32_t L_8 = V_0;
		LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A L_9;
		memset((&L_9), 0, sizeof(L_9));
		LocalVariableEntry__ctor_m11C6D50812FC55CE3848677F14C742724BFCDC68((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m87AD398778DB1D31D3AB755704565AC835DC9DAC_inline(L_5, L_9, List_1_Add_m87AD398778DB1D31D3AB755704565AC835DC9DAC_RuntimeMethod_var);
		return;
	}
}
// Mono.CompilerServices.SymbolWriter.ScopeVariable[] Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::get_ScopeVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* SourceMethodBuilder_get_ScopeVariables_m914B0B4CF1C00F4883273E0AD2BC754719723666 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mC3A94B68D113C92D9DDD2AEB756A98E6788C51E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* L_0 = __this->____scope_vars_2;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_1 = (ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC*)(ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC*)SZArrayNew(ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_1;
	}

IL_000f:
	{
		List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* L_2 = __this->____scope_vars_2;
		NullCheck(L_2);
		ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_3;
		L_3 = List_1_ToArray_mC3A94B68D113C92D9DDD2AEB756A98E6788C51E2(L_2, List_1_ToArray_mC3A94B68D113C92D9DDD2AEB756A98E6788C51E2_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::AddScopeVariable(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder_AddScopeVariable_m9353D72610DEB9ECB14B873D5A758540E9DFFB32 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, int32_t ___scope0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC1B9B1B33CED86692DCE632400585AE8680FCC5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4F43ECFF4B04FBF6EA887AF7BF552BD95F247BCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* L_0 = __this->____scope_vars_2;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* L_1 = (List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A*)il2cpp_codegen_object_new(List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m4F43ECFF4B04FBF6EA887AF7BF552BD95F247BCD(L_1, List_1__ctor_m4F43ECFF4B04FBF6EA887AF7BF552BD95F247BCD_RuntimeMethod_var);
		__this->____scope_vars_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scope_vars_2), (void*)L_1);
	}

IL_0013:
	{
		List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* L_2 = __this->____scope_vars_2;
		int32_t L_3 = ___scope0;
		int32_t L_4 = ___index1;
		ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ScopeVariable__ctor_m81B4ED386D9AF32FCCAC95F930FA94E529332720((&L_5), L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_mC1B9B1B33CED86692DCE632400585AE8680FCC5C_inline(L_2, L_5, List_1_Add_mC1B9B1B33CED86692DCE632400585AE8680FCC5C_RuntimeMethod_var);
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::DefineMethod(Mono.CompilerServices.SymbolWriter.MonoSymbolFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder_DefineMethod_m53482731756596458D2E1DEF09A8087F2134583D (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMethodDef_tD9A0C0FF1DCAEE5E82160705E7F9E247E45D360F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_0 = ___file0;
		RuntimeObject* L_1 = __this->___method_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Mono.CompilerServices.SymbolWriter.IMethodDef::get_Token() */, IMethodDef_tD9A0C0FF1DCAEE5E82160705E7F9E247E45D360F_il2cpp_TypeInfo_var, L_1);
		SourceMethodBuilder_DefineMethod_mD89529C12C9172A0973FB60013B309F989AAF3B9(__this, L_0, L_2, NULL);
		return;
	}
}
// System.Void Mono.CompilerServices.SymbolWriter.SourceMethodBuilder::DefineMethod(Mono.CompilerServices.SymbolWriter.MonoSymbolFile,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceMethodBuilder_DefineMethod_mD89529C12C9172A0973FB60013B309F989AAF3B9 (SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* __this, MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* ___file0, int32_t ___token1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICompileUnit_t68B68D4BD294166B6BE531EB2CDE65F2E12A822D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9E8D0298018B2316AFB6A97348F125624362C9BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* V_0 = NULL;
	{
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_0 = ___file0;
		RuntimeObject* L_1 = __this->____comp_unit_5;
		NullCheck(L_1);
		CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631* L_2;
		L_2 = InterfaceFuncInvoker0< CompileUnitEntry_tE8AA46C7E740C54574516F4F652AD09B1CD1F631* >::Invoke(0 /* Mono.CompilerServices.SymbolWriter.CompileUnitEntry Mono.CompilerServices.SymbolWriter.ICompileUnit::get_Entry() */, ICompileUnit_t68B68D4BD294166B6BE531EB2CDE65F2E12A822D_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = ___token1;
		ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_4;
		L_4 = SourceMethodBuilder_get_ScopeVariables_m914B0B4CF1C00F4883273E0AD2BC754719723666(__this, NULL);
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_5;
		L_5 = SourceMethodBuilder_get_Locals_m511BF1125A812474B5E4E4EB99810DA44826C2AD(__this, NULL);
		List_1_t131E16D69BAD909D8931F32E827761AD183C0474* L_6 = __this->___method_lines_4;
		NullCheck(L_6);
		LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* L_7;
		L_7 = List_1_ToArray_m9E8D0298018B2316AFB6A97348F125624362C9BD(L_6, List_1_ToArray_m9E8D0298018B2316AFB6A97348F125624362C9BD_RuntimeMethod_var);
		CodeBlockEntryU5BU5D_t39EE6EE69A01307050314DE214C4FB77CA7922C5* L_8;
		L_8 = SourceMethodBuilder_get_Blocks_m447E842F7272D13791D8D8E4EFD2622EB8F24288(__this, NULL);
		int32_t L_9 = __this->___ns_id_6;
		MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* L_10 = (MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365*)il2cpp_codegen_object_new(MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		MethodEntry__ctor_mFDA91DE3DD2FC185EEB2099F45CA14E4BD1D805D(L_10, L_0, L_2, L_3, L_4, L_5, L_7, L_8, (String_t*)NULL, 2, L_9, NULL);
		V_0 = L_10;
		MonoSymbolFile_tD256E431D52C008A280DC283B4B3F067FD87DEFB* L_11 = ___file0;
		MethodEntry_t71C84085D68ABFD553A505D33EADED5327ADB365* L_12 = V_0;
		NullCheck(L_11);
		MonoSymbolFile_AddMethod_mA6C12237C34CFA7DC38C3CEA1737D5C07C5ACB57(L_11, L_12, NULL);
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
// System.Void Mono.Security.Cryptography.CryptoConvert::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoConvert__ctor_m70CFCB07E02A928FAD52C34BAB0A4F2EBFCFE446 (CryptoConvert_t9D12BC91CDF18F6AD3FCD5A31646B186D4577CC6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CryptoConvert_ToInt32LE_m40CADF5B775732A0D150C1A7B48024970671B0B2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___offset1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t L_1 = ___offset1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 3));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bytes0;
		int32_t L_5 = ___offset1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 2));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___bytes0;
		int32_t L_9 = ___offset1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___bytes0;
		int32_t L_13 = ___offset1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)24)))|((int32_t)((int32_t)L_7<<((int32_t)16)))))|((int32_t)((int32_t)L_11<<8))))|(int32_t)L_15));
	}
}
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CryptoConvert_ToUInt32LE_mF52384E50EA618EDD7D96140A889BF33A3995435 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___offset1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t L_1 = ___offset1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 3));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bytes0;
		int32_t L_5 = ___offset1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 2));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___bytes0;
		int32_t L_9 = ___offset1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___bytes0;
		int32_t L_13 = ___offset1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)24)))|((int32_t)((int32_t)L_7<<((int32_t)16)))))|((int32_t)((int32_t)L_11<<8))))|(int32_t)L_15));
	}
}
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_GetBytesLE_mEE537A512F8B36797B62209C2E1CEF64C1142EB9 (int32_t ___val0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		int32_t L_2 = ___val0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_2&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_1;
		int32_t L_4 = ___val0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_4>>8))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_3;
		int32_t L_6 = ___val0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_6>>((int32_t)16)))&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_5;
		int32_t L_8 = ___val0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(L_8>>((int32_t)24)))&((int32_t)255)))));
		return L_7;
	}
}
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_Trim_mC1F9273F7A3107AD0D5F30E7F9DE18C1C5807646 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		NullCheck(L_4);
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5)));
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___array0;
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		NullCheck(L_10);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		return L_11;
	}

IL_0022:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0026:
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* CryptoConvert_FromCapiPrivateKeyBlob_m8A5B2A4151C934E667D5B8F209CA2AC12803CB48 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___blob0;
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_1;
		L_1 = CryptoConvert_FromCapiPrivateKeyBlob_mC20AB6ADD36C51060199E6E6B896F0C10B371686(L_0, 0, NULL);
		return L_1;
	}
}
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* CryptoConvert_FromCapiPrivateKeyBlob_mC20AB6ADD36C51060199E6E6B896F0C10B371686 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, int32_t ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___blob0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7764DAE340A30DF12CAC1D83DBBA792E904A118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPrivateKeyBlob_mC20AB6ADD36C51060199E6E6B896F0C10B371686_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___blob0;
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9DA9E036CD70BC51B1B4D9FE71E664789891DB82)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPrivateKeyBlob_mC20AB6ADD36C51060199E6E6B896F0C10B371686_RuntimeMethod_var)));
	}

IL_001f:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF));
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___blob0;
			int32_t L_6 = ___offset1;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			if ((!(((uint32_t)L_8) == ((uint32_t)7))))
			{
				goto IL_0053_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___blob0;
			int32_t L_10 = ___offset1;
			NullCheck(L_9);
			int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
			uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			if ((!(((uint32_t)L_12) == ((uint32_t)2))))
			{
				goto IL_0053_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___blob0;
			int32_t L_14 = ___offset1;
			NullCheck(L_13);
			int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 2));
			uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			if (L_16)
			{
				goto IL_0053_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___blob0;
			int32_t L_18 = ___offset1;
			NullCheck(L_17);
			int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 3));
			uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
			if (L_20)
			{
				goto IL_0053_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___blob0;
			int32_t L_22 = ___offset1;
			uint32_t L_23;
			L_23 = CryptoConvert_ToUInt32LE_mF52384E50EA618EDD7D96140A889BF33A3995435(L_21, ((int32_t)il2cpp_codegen_add(L_22, 8)), NULL);
			if ((((int32_t)L_23) == ((int32_t)((int32_t)843141970))))
			{
				goto IL_005e_1;
			}
		}

IL_0053_1:
		{
			CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_24 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
			NullCheck(L_24);
			CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E7CDEF88C7996492BB7E1E0B7EACB28D5FA9942)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPrivateKeyBlob_mC20AB6ADD36C51060199E6E6B896F0C10B371686_RuntimeMethod_var)));
		}

IL_005e_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___blob0;
			int32_t L_26 = ___offset1;
			int32_t L_27;
			L_27 = CryptoConvert_ToInt32LE_m40CADF5B775732A0D150C1A7B48024970671B0B2(L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)12))), NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
			V_2 = L_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___blob0;
			int32_t L_30 = ___offset1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_2;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_add(L_30, ((int32_t)16))), (RuntimeArray*)L_31, 0, 4, NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_2;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_32, NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
			L_34 = CryptoConvert_Trim_mC1F9273F7A3107AD0D5F30E7F9DE18C1C5807646(L_33, NULL);
			(&V_0)->___Exponent_0 = L_34;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Exponent_0), (void*)L_34);
			int32_t L_35 = ___offset1;
			V_3 = ((int32_t)il2cpp_codegen_add(L_35, ((int32_t)20)));
			V_4 = ((int32_t)(L_27>>3));
			int32_t L_36 = V_4;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_36);
			(&V_0)->___Modulus_1 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Modulus_1), (void*)L_37);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___blob0;
			int32_t L_39 = V_3;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_40 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = L_40.___Modulus_1;
			int32_t L_42 = V_4;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_38, L_39, (RuntimeArray*)L_41, 0, L_42, NULL);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_43 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = L_43.___Modulus_1;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_44, NULL);
			int32_t L_45 = V_3;
			int32_t L_46 = V_4;
			V_3 = ((int32_t)il2cpp_codegen_add(L_45, L_46));
			int32_t L_47 = V_4;
			V_5 = ((int32_t)(L_47>>1));
			int32_t L_48 = V_5;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_48);
			(&V_0)->___P_2 = L_49;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___P_2), (void*)L_49);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___blob0;
			int32_t L_51 = V_3;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_52 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = L_52.___P_2;
			int32_t L_54 = V_5;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_50, L_51, (RuntimeArray*)L_53, 0, L_54, NULL);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_55 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = L_55.___P_2;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_56, NULL);
			int32_t L_57 = V_3;
			int32_t L_58 = V_5;
			V_3 = ((int32_t)il2cpp_codegen_add(L_57, L_58));
			int32_t L_59 = V_5;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_59);
			(&V_0)->___Q_3 = L_60;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Q_3), (void*)L_60);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ___blob0;
			int32_t L_62 = V_3;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_63 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = L_63.___Q_3;
			int32_t L_65 = V_5;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_61, L_62, (RuntimeArray*)L_64, 0, L_65, NULL);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_66 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = L_66.___Q_3;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_67, NULL);
			int32_t L_68 = V_3;
			int32_t L_69 = V_5;
			V_3 = ((int32_t)il2cpp_codegen_add(L_68, L_69));
			int32_t L_70 = V_5;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_70);
			(&V_0)->___DP_4 = L_71;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___DP_4), (void*)L_71);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___blob0;
			int32_t L_73 = V_3;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_74 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = L_74.___DP_4;
			int32_t L_76 = V_5;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_72, L_73, (RuntimeArray*)L_75, 0, L_76, NULL);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_77 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = L_77.___DP_4;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_78, NULL);
			int32_t L_79 = V_3;
			int32_t L_80 = V_5;
			V_3 = ((int32_t)il2cpp_codegen_add(L_79, L_80));
			int32_t L_81 = V_5;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_81);
			(&V_0)->___DQ_5 = L_82;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___DQ_5), (void*)L_82);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ___blob0;
			int32_t L_84 = V_3;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_85 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = L_85.___DQ_5;
			int32_t L_87 = V_5;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_83, L_84, (RuntimeArray*)L_86, 0, L_87, NULL);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_88 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = L_88.___DQ_5;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_89, NULL);
			int32_t L_90 = V_3;
			int32_t L_91 = V_5;
			V_3 = ((int32_t)il2cpp_codegen_add(L_90, L_91));
			int32_t L_92 = V_5;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_92);
			(&V_0)->___InverseQ_6 = L_93;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___InverseQ_6), (void*)L_93);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___blob0;
			int32_t L_95 = V_3;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_96 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = L_96.___InverseQ_6;
			int32_t L_98 = V_5;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_94, L_95, (RuntimeArray*)L_97, 0, L_98, NULL);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_99 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = L_99.___InverseQ_6;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_100, NULL);
			int32_t L_101 = V_3;
			int32_t L_102 = V_5;
			V_3 = ((int32_t)il2cpp_codegen_add(L_101, L_102));
			int32_t L_103 = V_4;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_103);
			(&V_0)->___D_7 = L_104;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___D_7), (void*)L_104);
			int32_t L_105 = V_3;
			int32_t L_106 = V_4;
			int32_t L_107 = ___offset1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = ___blob0;
			NullCheck(L_108);
			if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_105, L_106)), L_107))) > ((int32_t)((int32_t)(((RuntimeArray*)L_108)->max_length)))))
			{
				goto IL_01e6_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = ___blob0;
			int32_t L_110 = V_3;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_111 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = L_111.___D_7;
			int32_t L_113 = V_4;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_109, L_110, (RuntimeArray*)L_112, 0, L_113, NULL);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_114 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = L_114.___D_7;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_115, NULL);
		}

IL_01e6_1:
		{
			goto IL_01f7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e8;
		}
		throw e;
	}

CATCH_01e8:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_116 = V_6;
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_117 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_117);
		CryptographicException__ctor_m5DDF42BBD1BBB5006C6E912240CAE64C8B14FA9C(L_117, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68EBFD53AB7351290BEC0E0677DF3FB55BCC5B1B)), L_116, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPrivateKeyBlob_mC20AB6ADD36C51060199E6E6B896F0C10B371686_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_01f7:
	{
		V_1 = (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A*)NULL;
	}
	try
	{// begin try (depth: 1)
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_118;
		L_118 = RSA_Create_m37E9CF2FC80F578AE254DA559D23596065D741C7(NULL);
		V_1 = L_118;
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_119 = V_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_120 = V_0;
		NullCheck(L_119);
		VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(13 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_119, L_120);
		goto IL_022b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0208;
		}
		throw e;
	}

CATCH_0208:
	{// begin catch(System.Security.Cryptography.CryptographicException)
		{
			V_7 = ((CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)IL2CPP_GET_ACTIVE_EXCEPTION(CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*));
		}
		try
		{// begin try (depth: 2)
			CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_121 = (CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3_il2cpp_TypeInfo_var)));
			NullCheck(L_121);
			CspParameters__ctor_m348F366FF4C2A4EC40C3B09FBB7F9E8322F42645(L_121, NULL);
			CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_122 = L_121;
			NullCheck(L_122);
			CspParameters_set_Flags_m9C1F8339A1C321C6EDCB76E6038B7786D9EA7F6A(L_122, 1, NULL);
			RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_123 = (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var)));
			NullCheck(L_123);
			RSACryptoServiceProvider__ctor_mA3DCFA0547797710101AC5DE6A3A0396EADF45CF(L_123, L_122, NULL);
			V_1 = L_123;
			RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_124 = V_1;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_125 = V_0;
			NullCheck(L_124);
			VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(13 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_124, L_125);
			goto IL_0229;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0225;
			}
			throw e;
		}

CATCH_0225:
		{// begin catch(System.Object)
			CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_126 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_126, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPrivateKeyBlob_mC20AB6ADD36C51060199E6E6B896F0C10B371686_RuntimeMethod_var)));
		}// end catch (depth: 2)

IL_0229:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_022b;
		}
	}// end catch (depth: 1)

IL_022b:
	{
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_127 = V_1;
		return L_127;
	}
}
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlobDSA(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* CryptoConvert_FromCapiPrivateKeyBlobDSA_mE9FFD97376B09D4E7BE174CF3329FD5F6BE57254 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___blob0;
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_1;
		L_1 = CryptoConvert_FromCapiPrivateKeyBlobDSA_m8699F0FC7431A6D5BC7F50A4B8586AE8ED0D901F(L_0, 0, NULL);
		return L_1;
	}
}
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlobDSA(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* CryptoConvert_FromCapiPrivateKeyBlobDSA_m8699F0FC7431A6D5BC7F50A4B8586AE8ED0D901F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, int32_t ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t* V_4 = NULL;
	CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___blob0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7764DAE340A30DF12CAC1D83DBBA792E904A118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPrivateKeyBlobDSA_m8699F0FC7431A6D5BC7F50A4B8586AE8ED0D901F_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___blob0;
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9DA9E036CD70BC51B1B4D9FE71E664789891DB82)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPrivateKeyBlobDSA_m8699F0FC7431A6D5BC7F50A4B8586AE8ED0D901F_RuntimeMethod_var)));
	}

IL_001f:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9));
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___blob0;
			int32_t L_6 = ___offset1;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			if ((!(((uint32_t)L_8) == ((uint32_t)7))))
			{
				goto IL_0053_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___blob0;
			int32_t L_10 = ___offset1;
			NullCheck(L_9);
			int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
			uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			if ((!(((uint32_t)L_12) == ((uint32_t)2))))
			{
				goto IL_0053_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___blob0;
			int32_t L_14 = ___offset1;
			NullCheck(L_13);
			int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 2));
			uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			if (L_16)
			{
				goto IL_0053_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___blob0;
			int32_t L_18 = ___offset1;
			NullCheck(L_17);
			int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 3));
			uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
			if (L_20)
			{
				goto IL_0053_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___blob0;
			int32_t L_22 = ___offset1;
			uint32_t L_23;
			L_23 = CryptoConvert_ToUInt32LE_mF52384E50EA618EDD7D96140A889BF33A3995435(L_21, ((int32_t)il2cpp_codegen_add(L_22, 8)), NULL);
			if ((((int32_t)L_23) == ((int32_t)((int32_t)844321604))))
			{
				goto IL_005e_1;
			}
		}

IL_0053_1:
		{
			CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_24 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
			NullCheck(L_24);
			CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E7CDEF88C7996492BB7E1E0B7EACB28D5FA9942)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPrivateKeyBlobDSA_m8699F0FC7431A6D5BC7F50A4B8586AE8ED0D901F_RuntimeMethod_var)));
		}

IL_005e_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___blob0;
			int32_t L_26 = ___offset1;
			int32_t L_27;
			L_27 = CryptoConvert_ToInt32LE_m40CADF5B775732A0D150C1A7B48024970671B0B2(L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)12))), NULL);
			V_2 = ((int32_t)(L_27>>3));
			int32_t L_28 = ___offset1;
			V_3 = ((int32_t)il2cpp_codegen_add(L_28, ((int32_t)16)));
			int32_t L_29 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_29);
			(&V_0)->___P_0 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___P_0), (void*)L_30);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___blob0;
			int32_t L_32 = V_3;
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_33 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = L_33.___P_0;
			int32_t L_35 = V_2;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_31, L_32, (RuntimeArray*)L_34, 0, L_35, NULL);
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_36 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = L_36.___P_0;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_37, NULL);
			int32_t L_38 = V_3;
			int32_t L_39 = V_2;
			V_3 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
			(&V_0)->___Q_1 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Q_1), (void*)L_40);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___blob0;
			int32_t L_42 = V_3;
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_43 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = L_43.___Q_1;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_41, L_42, (RuntimeArray*)L_44, 0, ((int32_t)20), NULL);
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_45 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = L_45.___Q_1;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_46, NULL);
			int32_t L_47 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_47, ((int32_t)20)));
			int32_t L_48 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_48);
			(&V_0)->___G_2 = L_49;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___G_2), (void*)L_49);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___blob0;
			int32_t L_51 = V_3;
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_52 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = L_52.___G_2;
			int32_t L_54 = V_2;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_50, L_51, (RuntimeArray*)L_53, 0, L_54, NULL);
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_55 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = L_55.___G_2;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_56, NULL);
			int32_t L_57 = V_3;
			int32_t L_58 = V_2;
			V_3 = ((int32_t)il2cpp_codegen_add(L_57, L_58));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
			(&V_0)->___X_5 = L_59;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___X_5), (void*)L_59);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___blob0;
			int32_t L_61 = V_3;
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_62 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = L_62.___X_5;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_60, L_61, (RuntimeArray*)L_63, 0, ((int32_t)20), NULL);
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_64 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = L_64.___X_5;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_65, NULL);
			int32_t L_66 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_66, ((int32_t)20)));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___blob0;
			int32_t L_68 = V_3;
			int32_t L_69;
			L_69 = CryptoConvert_ToInt32LE_m40CADF5B775732A0D150C1A7B48024970671B0B2(L_67, L_68, NULL);
			(&V_0)->___Counter_7 = L_69;
			int32_t L_70 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_70, 4));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
			(&V_0)->___Seed_6 = L_71;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Seed_6), (void*)L_71);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___blob0;
			int32_t L_73 = V_3;
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_74 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = L_74.___Seed_6;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_72, L_73, (RuntimeArray*)L_75, 0, ((int32_t)20), NULL);
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_76 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = L_76.___Seed_6;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_77, NULL);
			int32_t L_78 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_78, ((int32_t)20)));
			goto IL_0173;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0164;
		}
		throw e;
	}

CATCH_0164:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_79 = V_4;
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_80 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_80);
		CryptographicException__ctor_m5DDF42BBD1BBB5006C6E912240CAE64C8B14FA9C(L_80, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68EBFD53AB7351290BEC0E0677DF3FB55BCC5B1B)), L_79, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_80, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPrivateKeyBlobDSA_m8699F0FC7431A6D5BC7F50A4B8586AE8ED0D901F_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0173:
	{
		V_1 = (DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41*)NULL;
	}
	try
	{// begin try (depth: 1)
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_81;
		L_81 = DSA_Create_m30668002C142DC26B9E9F09191A4368098C6757F(NULL);
		V_1 = L_81;
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_82 = V_1;
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_83 = V_0;
		NullCheck(L_82);
		VirtualActionInvoker1< DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 >::Invoke(13 /* System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters) */, L_82, L_83);
		goto IL_01a7;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0184;
		}
		throw e;
	}

CATCH_0184:
	{// begin catch(System.Security.Cryptography.CryptographicException)
		{
			V_5 = ((CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)IL2CPP_GET_ACTIVE_EXCEPTION(CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*));
		}
		try
		{// begin try (depth: 2)
			CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_84 = (CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3_il2cpp_TypeInfo_var)));
			NullCheck(L_84);
			CspParameters__ctor_m348F366FF4C2A4EC40C3B09FBB7F9E8322F42645(L_84, NULL);
			CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_85 = L_84;
			NullCheck(L_85);
			CspParameters_set_Flags_m9C1F8339A1C321C6EDCB76E6038B7786D9EA7F6A(L_85, 1, NULL);
			DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E* L_86 = (DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E_il2cpp_TypeInfo_var)));
			NullCheck(L_86);
			DSACryptoServiceProvider__ctor_mE92A8D3F8E70C4358BC8571E2A062C13AA1AA6DA(L_86, L_85, NULL);
			V_1 = L_86;
			DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_87 = V_1;
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_88 = V_0;
			NullCheck(L_87);
			VirtualActionInvoker1< DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 >::Invoke(13 /* System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters) */, L_87, L_88);
			goto IL_01a5;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01a1;
			}
			throw e;
		}

CATCH_01a1:
		{// begin catch(System.Object)
			CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_89 = V_5;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_89, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPrivateKeyBlobDSA_m8699F0FC7431A6D5BC7F50A4B8586AE8ED0D901F_RuntimeMethod_var)));
		}// end catch (depth: 2)

IL_01a5:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01a7;
		}
	}// end catch (depth: 1)

IL_01a7:
	{
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_90 = V_1;
		return L_90;
	}
}
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiPrivateKeyBlob_m1E13FA53A92E3101F007C11C5D4F0B12EFA97B1D (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_0 = ___rsa0;
		NullCheck(L_0);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_1;
		L_1 = VirtualFuncInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF, bool >::Invoke(12 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, L_0, (bool)1);
		V_0 = L_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2.___Modulus_1;
		NullCheck(L_3);
		V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)20), ((int32_t)(L_4<<2)))), ((int32_t)(L_5>>1)))));
		V_2 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)36));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)82));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)83));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)65));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)50));
		int32_t L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = CryptoConvert_GetBytesLE_mEE537A512F8B36797B62209C2E1CEF64C1142EB9(((int32_t)(L_14<<3)), NULL);
		V_3 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18 = 0;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22 = 1;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_3;
		NullCheck(L_25);
		int32_t L_26 = 2;
		uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_3;
		NullCheck(L_29);
		int32_t L_30 = 3;
		uint8_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)L_31);
		V_4 = ((int32_t)16);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_32 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = L_32.___Exponent_0;
		NullCheck(L_33);
		V_5 = ((int32_t)(((RuntimeArray*)L_33)->max_length));
		goto IL_0091;
	}

IL_007a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
		int32_t L_35 = V_4;
		int32_t L_36 = L_35;
		V_4 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_37 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = L_37.___Exponent_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		V_5 = L_40;
		NullCheck(L_38);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint8_t)L_42);
	}

IL_0091:
	{
		int32_t L_43 = V_5;
		if ((((int32_t)L_43) > ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		V_4 = ((int32_t)20);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_44 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = L_44.___Modulus_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = L_45;
		NullCheck(L_46);
		V_6 = ((int32_t)(((RuntimeArray*)L_46)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = L_46;
		int32_t L_48 = V_6;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD((RuntimeArray*)L_47, 0, L_48, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_2;
		int32_t L_50 = V_4;
		int32_t L_51 = V_6;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_47, 0, (RuntimeArray*)L_49, L_50, L_51, NULL);
		int32_t L_52 = V_4;
		int32_t L_53 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, L_53));
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_54 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = L_54.___P_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = L_55;
		NullCheck(L_56);
		V_6 = ((int32_t)(((RuntimeArray*)L_56)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = L_56;
		int32_t L_58 = V_6;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD((RuntimeArray*)L_57, 0, L_58, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_2;
		int32_t L_60 = V_4;
		int32_t L_61 = V_6;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_57, 0, (RuntimeArray*)L_59, L_60, L_61, NULL);
		int32_t L_62 = V_4;
		int32_t L_63 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, L_63));
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_64 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = L_64.___Q_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = L_65;
		NullCheck(L_66);
		V_6 = ((int32_t)(((RuntimeArray*)L_66)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = L_66;
		int32_t L_68 = V_6;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD((RuntimeArray*)L_67, 0, L_68, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_2;
		int32_t L_70 = V_4;
		int32_t L_71 = V_6;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_67, 0, (RuntimeArray*)L_69, L_70, L_71, NULL);
		int32_t L_72 = V_4;
		int32_t L_73 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_add(L_72, L_73));
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_74 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = L_74.___DP_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = L_75;
		NullCheck(L_76);
		V_6 = ((int32_t)(((RuntimeArray*)L_76)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = L_76;
		int32_t L_78 = V_6;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD((RuntimeArray*)L_77, 0, L_78, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_2;
		int32_t L_80 = V_4;
		int32_t L_81 = V_6;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_77, 0, (RuntimeArray*)L_79, L_80, L_81, NULL);
		int32_t L_82 = V_4;
		int32_t L_83 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_add(L_82, L_83));
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_84 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = L_84.___DQ_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = L_85;
		NullCheck(L_86);
		V_6 = ((int32_t)(((RuntimeArray*)L_86)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = L_86;
		int32_t L_88 = V_6;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD((RuntimeArray*)L_87, 0, L_88, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_2;
		int32_t L_90 = V_4;
		int32_t L_91 = V_6;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_87, 0, (RuntimeArray*)L_89, L_90, L_91, NULL);
		int32_t L_92 = V_4;
		int32_t L_93 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_add(L_92, L_93));
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_94 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = L_94.___InverseQ_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = L_95;
		NullCheck(L_96);
		V_6 = ((int32_t)(((RuntimeArray*)L_96)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = L_96;
		int32_t L_98 = V_6;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD((RuntimeArray*)L_97, 0, L_98, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = V_2;
		int32_t L_100 = V_4;
		int32_t L_101 = V_6;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_97, 0, (RuntimeArray*)L_99, L_100, L_101, NULL);
		int32_t L_102 = V_4;
		int32_t L_103 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_add(L_102, L_103));
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_104 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = L_104.___D_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = L_105;
		NullCheck(L_106);
		V_6 = ((int32_t)(((RuntimeArray*)L_106)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = L_106;
		int32_t L_108 = V_6;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD((RuntimeArray*)L_107, 0, L_108, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = V_2;
		int32_t L_110 = V_4;
		int32_t L_111 = V_6;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_107, 0, (RuntimeArray*)L_109, L_110, L_111, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_2;
		return L_112;
	}
}
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.DSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiPrivateKeyBlob_mD523703D97C652B3A255B17EF7E1F58E7B2D790D (DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* ___dsa0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	{
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_0 = ___dsa0;
		NullCheck(L_0);
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_1;
		L_1 = VirtualFuncInvoker1< DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9, bool >::Invoke(12 /* System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSA::ExportParameters(System.Boolean) */, L_0, (bool)1);
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2.___P_0;
		NullCheck(L_3);
		V_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)16), L_4)), ((int32_t)20))), L_5)), ((int32_t)20))), 4)), ((int32_t)20))));
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)68));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)83));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)83));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)50));
		int32_t L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = CryptoConvert_GetBytesLE_mEE537A512F8B36797B62209C2E1CEF64C1142EB9(((int32_t)(L_14<<3)), NULL);
		V_2 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = 0;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = 1;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26 = 2;
		uint8_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30 = 3;
		uint8_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)L_31);
		V_3 = ((int32_t)16);
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_32 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = L_32.___P_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = L_33;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_34, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_1;
		int32_t L_36 = V_3;
		int32_t L_37 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_34, 0, (RuntimeArray*)L_35, L_36, L_37, NULL);
		int32_t L_38 = V_3;
		int32_t L_39 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_40 = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = L_40.___Q_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = L_41;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_42, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_1;
		int32_t L_44 = V_3;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_42, 0, (RuntimeArray*)L_43, L_44, ((int32_t)20), NULL);
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, ((int32_t)20)));
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_46 = L_40;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = L_46.___G_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = L_47;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_48, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_1;
		int32_t L_50 = V_3;
		int32_t L_51 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_48, 0, (RuntimeArray*)L_49, L_50, L_51, NULL);
		int32_t L_52 = V_3;
		int32_t L_53 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, L_53));
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_54 = L_46;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = L_54.___X_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = L_55;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_56, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_1;
		int32_t L_58 = V_3;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_56, 0, (RuntimeArray*)L_57, L_58, ((int32_t)20), NULL);
		int32_t L_59 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_59, ((int32_t)20)));
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_60 = L_54;
		int32_t L_61 = L_60.___Counter_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62;
		L_62 = CryptoConvert_GetBytesLE_mEE537A512F8B36797B62209C2E1CEF64C1142EB9(L_61, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = V_1;
		int32_t L_64 = V_3;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_62, 0, (RuntimeArray*)L_63, L_64, 4, NULL);
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = L_60.___Seed_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = L_66;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_67, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_1;
		int32_t L_69 = V_3;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_67, 0, (RuntimeArray*)L_68, L_69, ((int32_t)20), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_1;
		return L_70;
	}
}
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* CryptoConvert_FromCapiPublicKeyBlob_mBFE30013B4B46653D76F3F2AB9E5AE6782157ED2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___blob0;
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_1;
		L_1 = CryptoConvert_FromCapiPublicKeyBlob_mDBB1FBFD641AE816C1323EF84777BEAE34129858(L_0, 0, NULL);
		return L_1;
	}
}
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* CryptoConvert_FromCapiPublicKeyBlob_mDBB1FBFD641AE816C1323EF84777BEAE34129858 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, int32_t ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* V_3 = NULL;
	RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___blob0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7764DAE340A30DF12CAC1D83DBBA792E904A118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPublicKeyBlob_mDBB1FBFD641AE816C1323EF84777BEAE34129858_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___blob0;
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9DA9E036CD70BC51B1B4D9FE71E664789891DB82)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPublicKeyBlob_mDBB1FBFD641AE816C1323EF84777BEAE34129858_RuntimeMethod_var)));
	}

IL_001f:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___blob0;
			int32_t L_6 = ___offset1;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			if ((!(((uint32_t)L_8) == ((uint32_t)6))))
			{
				goto IL_004c_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___blob0;
			int32_t L_10 = ___offset1;
			NullCheck(L_9);
			int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
			uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			if ((!(((uint32_t)L_12) == ((uint32_t)2))))
			{
				goto IL_004c_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___blob0;
			int32_t L_14 = ___offset1;
			NullCheck(L_13);
			int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 2));
			uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			if (L_16)
			{
				goto IL_004c_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___blob0;
			int32_t L_18 = ___offset1;
			NullCheck(L_17);
			int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 3));
			uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
			if (L_20)
			{
				goto IL_004c_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___blob0;
			int32_t L_22 = ___offset1;
			uint32_t L_23;
			L_23 = CryptoConvert_ToUInt32LE_mF52384E50EA618EDD7D96140A889BF33A3995435(L_21, ((int32_t)il2cpp_codegen_add(L_22, 8)), NULL);
			if ((((int32_t)L_23) == ((int32_t)((int32_t)826364754))))
			{
				goto IL_0057_1;
			}
		}

IL_004c_1:
		{
			CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_24 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
			NullCheck(L_24);
			CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E7CDEF88C7996492BB7E1E0B7EACB28D5FA9942)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPublicKeyBlob_mDBB1FBFD641AE816C1323EF84777BEAE34129858_RuntimeMethod_var)));
		}

IL_0057_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___blob0;
			int32_t L_26 = ___offset1;
			int32_t L_27;
			L_27 = CryptoConvert_ToInt32LE_m40CADF5B775732A0D150C1A7B48024970671B0B2(L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)12))), NULL);
			il2cpp_codegen_initobj((&V_0), sizeof(RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
			(&V_0)->___Exponent_0 = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Exponent_0), (void*)L_28);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_29 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = L_29.___Exponent_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___blob0;
			int32_t L_32 = ___offset1;
			NullCheck(L_31);
			int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, ((int32_t)18)));
			uint8_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			NullCheck(L_30);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_34);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_35 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = L_35.___Exponent_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___blob0;
			int32_t L_38 = ___offset1;
			NullCheck(L_37);
			int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)17)));
			uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
			NullCheck(L_36);
			(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_40);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_41 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = L_41.___Exponent_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___blob0;
			int32_t L_44 = ___offset1;
			NullCheck(L_43);
			int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, ((int32_t)16)));
			uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
			NullCheck(L_42);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)L_46);
			int32_t L_47 = ___offset1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_47, ((int32_t)20)));
			V_2 = ((int32_t)(L_27>>3));
			int32_t L_48 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_48);
			(&V_0)->___Modulus_1 = L_49;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Modulus_1), (void*)L_49);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___blob0;
			int32_t L_51 = V_1;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_52 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = L_52.___Modulus_1;
			int32_t L_54 = V_2;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_50, L_51, (RuntimeArray*)L_53, 0, L_54, NULL);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_55 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = L_55.___Modulus_1;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_56, NULL);
			V_3 = (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A*)NULL;
		}
		try
		{// begin try (depth: 2)
			RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_57;
			L_57 = RSA_Create_m37E9CF2FC80F578AE254DA559D23596065D741C7(NULL);
			V_3 = L_57;
			RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_58 = V_3;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_59 = V_0;
			NullCheck(L_58);
			VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(13 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_58, L_59);
			goto IL_00fc_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e0_1;
			}
			throw e;
		}

CATCH_00e0_1:
		{// begin catch(System.Security.Cryptography.CryptographicException)
			CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_60 = (CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3_il2cpp_TypeInfo_var)));
			NullCheck(L_60);
			CspParameters__ctor_m348F366FF4C2A4EC40C3B09FBB7F9E8322F42645(L_60, NULL);
			CspParameters_t9004F77295A57F5D917C723ACBC835E9C54D18B3* L_61 = L_60;
			NullCheck(L_61);
			CspParameters_set_Flags_m9C1F8339A1C321C6EDCB76E6038B7786D9EA7F6A(L_61, 1, NULL);
			RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_62 = (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var)));
			NullCheck(L_62);
			RSACryptoServiceProvider__ctor_mA3DCFA0547797710101AC5DE6A3A0396EADF45CF(L_62, L_61, NULL);
			V_3 = L_62;
			RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_63 = V_3;
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_64 = V_0;
			NullCheck(L_63);
			VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(13 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_63, L_64);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00fc_1;
		}// end catch (depth: 2)

IL_00fc_1:
		{
			RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_65 = V_3;
			V_4 = L_65;
			goto IL_0110;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0101;
		}
		throw e;
	}

CATCH_0101:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_66 = V_5;
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_67 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_67);
		CryptographicException__ctor_m5DDF42BBD1BBB5006C6E912240CAE64C8B14FA9C(L_67, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68EBFD53AB7351290BEC0E0677DF3FB55BCC5B1B)), L_66, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_67, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPublicKeyBlob_mDBB1FBFD641AE816C1323EF84777BEAE34129858_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0110:
	{
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_68 = V_4;
		return L_68;
	}
}
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlobDSA(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* CryptoConvert_FromCapiPublicKeyBlobDSA_m5C2454AF929A8CD330B1AC24E10D25EECAD81B95 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___blob0;
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_1;
		L_1 = CryptoConvert_FromCapiPublicKeyBlobDSA_mDE9A95D0B607E19C567A1EE012FA45C328DD100C(L_0, 0, NULL);
		return L_1;
	}
}
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlobDSA(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* CryptoConvert_FromCapiPublicKeyBlobDSA_mDE9A95D0B607E19C567A1EE012FA45C328DD100C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, int32_t ___offset1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___blob0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7764DAE340A30DF12CAC1D83DBBA792E904A118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPublicKeyBlobDSA_mDE9A95D0B607E19C567A1EE012FA45C328DD100C_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___blob0;
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9DA9E036CD70BC51B1B4D9FE71E664789891DB82)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPublicKeyBlobDSA_mDE9A95D0B607E19C567A1EE012FA45C328DD100C_RuntimeMethod_var)));
	}

IL_001f:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___blob0;
			int32_t L_6 = ___offset1;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			if ((!(((uint32_t)L_8) == ((uint32_t)6))))
			{
				goto IL_004c_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___blob0;
			int32_t L_10 = ___offset1;
			NullCheck(L_9);
			int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
			uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			if ((!(((uint32_t)L_12) == ((uint32_t)2))))
			{
				goto IL_004c_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___blob0;
			int32_t L_14 = ___offset1;
			NullCheck(L_13);
			int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 2));
			uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			if (L_16)
			{
				goto IL_004c_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___blob0;
			int32_t L_18 = ___offset1;
			NullCheck(L_17);
			int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 3));
			uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
			if (L_20)
			{
				goto IL_004c_1;
			}
		}
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___blob0;
			int32_t L_22 = ___offset1;
			uint32_t L_23;
			L_23 = CryptoConvert_ToUInt32LE_mF52384E50EA618EDD7D96140A889BF33A3995435(L_21, ((int32_t)il2cpp_codegen_add(L_22, 8)), NULL);
			if ((((int32_t)L_23) == ((int32_t)((int32_t)827544388))))
			{
				goto IL_0057_1;
			}
		}

IL_004c_1:
		{
			CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_24 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
			NullCheck(L_24);
			CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E7CDEF88C7996492BB7E1E0B7EACB28D5FA9942)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPublicKeyBlobDSA_mDE9A95D0B607E19C567A1EE012FA45C328DD100C_RuntimeMethod_var)));
		}

IL_0057_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___blob0;
			int32_t L_26 = ___offset1;
			int32_t L_27;
			L_27 = CryptoConvert_ToInt32LE_m40CADF5B775732A0D150C1A7B48024970671B0B2(L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)12))), NULL);
			il2cpp_codegen_initobj((&V_0), sizeof(DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9));
			V_1 = ((int32_t)(L_27>>3));
			int32_t L_28 = ___offset1;
			V_2 = ((int32_t)il2cpp_codegen_add(L_28, ((int32_t)16)));
			int32_t L_29 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_29);
			(&V_0)->___P_0 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___P_0), (void*)L_30);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___blob0;
			int32_t L_32 = V_2;
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_33 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = L_33.___P_0;
			int32_t L_35 = V_1;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_31, L_32, (RuntimeArray*)L_34, 0, L_35, NULL);
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_36 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = L_36.___P_0;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_37, NULL);
			int32_t L_38 = V_2;
			int32_t L_39 = V_1;
			V_2 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
			(&V_0)->___Q_1 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Q_1), (void*)L_40);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___blob0;
			int32_t L_42 = V_2;
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_43 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = L_43.___Q_1;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_41, L_42, (RuntimeArray*)L_44, 0, ((int32_t)20), NULL);
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_45 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = L_45.___Q_1;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_46, NULL);
			int32_t L_47 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_47, ((int32_t)20)));
			int32_t L_48 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_48);
			(&V_0)->___G_2 = L_49;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___G_2), (void*)L_49);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___blob0;
			int32_t L_51 = V_2;
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_52 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = L_52.___G_2;
			int32_t L_54 = V_1;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_50, L_51, (RuntimeArray*)L_53, 0, L_54, NULL);
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_55 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = L_55.___G_2;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_56, NULL);
			int32_t L_57 = V_2;
			int32_t L_58 = V_1;
			V_2 = ((int32_t)il2cpp_codegen_add(L_57, L_58));
			int32_t L_59 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_59);
			(&V_0)->___Y_3 = L_60;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Y_3), (void*)L_60);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ___blob0;
			int32_t L_62 = V_2;
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_63 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = L_63.___Y_3;
			int32_t L_65 = V_1;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_61, L_62, (RuntimeArray*)L_64, 0, L_65, NULL);
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_66 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = L_66.___Y_3;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_67, NULL);
			int32_t L_68 = V_2;
			int32_t L_69 = V_1;
			V_2 = ((int32_t)il2cpp_codegen_add(L_68, L_69));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ___blob0;
			int32_t L_71 = V_2;
			int32_t L_72;
			L_72 = CryptoConvert_ToInt32LE_m40CADF5B775732A0D150C1A7B48024970671B0B2(L_70, L_71, NULL);
			(&V_0)->___Counter_7 = L_72;
			int32_t L_73 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_73, 4));
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
			(&V_0)->___Seed_6 = L_74;
			Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Seed_6), (void*)L_74);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ___blob0;
			int32_t L_76 = V_2;
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_77 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = L_77.___Seed_6;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_75, L_76, (RuntimeArray*)L_78, 0, ((int32_t)20), NULL);
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_79 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = L_79.___Seed_6;
			Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_80, NULL);
			int32_t L_81 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_81, ((int32_t)20)));
			DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_82;
			L_82 = DSA_Create_m30668002C142DC26B9E9F09191A4368098C6757F(NULL);
			DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_83 = L_82;
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_84 = V_0;
			NullCheck(L_83);
			VirtualActionInvoker1< DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 >::Invoke(13 /* System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters) */, L_83, L_84);
			V_3 = L_83;
			goto IL_017e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_016f;
		}
		throw e;
	}

CATCH_016f:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_85 = V_4;
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_86 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_86);
		CryptographicException__ctor_m5DDF42BBD1BBB5006C6E912240CAE64C8B14FA9C(L_86, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68EBFD53AB7351290BEC0E0677DF3FB55BCC5B1B)), L_85, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_86, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiPublicKeyBlobDSA_mDE9A95D0B607E19C567A1EE012FA45C328DD100C_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_017e:
	{
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_87 = V_3;
		return L_87;
	}
}
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiPublicKeyBlob_mFBE9CFF36CC1BEE35ED2F4DE56D8DFD8BFEBE437 (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_0 = ___rsa0;
		NullCheck(L_0);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_1;
		L_1 = VirtualFuncInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF, bool >::Invoke(12 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, L_0, (bool)0);
		V_0 = L_1;
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2.___Modulus_1;
		NullCheck(L_3);
		V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		int32_t L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)20), L_4)));
		V_2 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_2;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)36));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)82));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)83));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)65));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)49));
		int32_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = CryptoConvert_GetBytesLE_mEE537A512F8B36797B62209C2E1CEF64C1142EB9(((int32_t)(L_13<<3)), NULL);
		V_3 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17 = 0;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_3;
		NullCheck(L_28);
		int32_t L_29 = 3;
		uint8_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)L_30);
		V_4 = ((int32_t)16);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_31 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = L_31.___Exponent_0;
		NullCheck(L_32);
		V_5 = ((int32_t)(((RuntimeArray*)L_32)->max_length));
		goto IL_008b;
	}

IL_0074:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_2;
		int32_t L_34 = V_4;
		int32_t L_35 = L_34;
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_36 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = L_36.___Exponent_0;
		int32_t L_38 = V_5;
		int32_t L_39 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		V_5 = L_39;
		NullCheck(L_37);
		int32_t L_40 = L_39;
		uint8_t L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint8_t)L_41);
	}

IL_008b:
	{
		int32_t L_42 = V_5;
		if ((((int32_t)L_42) > ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		V_4 = ((int32_t)20);
		RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_43 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = L_43.___Modulus_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = L_44;
		NullCheck(L_45);
		V_6 = ((int32_t)(((RuntimeArray*)L_45)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = L_45;
		int32_t L_47 = V_6;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD((RuntimeArray*)L_46, 0, L_47, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_2;
		int32_t L_49 = V_4;
		int32_t L_50 = V_6;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_46, 0, (RuntimeArray*)L_48, L_49, L_50, NULL);
		int32_t L_51 = V_4;
		int32_t L_52 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_add(L_51, L_52));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_2;
		return L_53;
	}
}
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.DSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiPublicKeyBlob_m68028F1F48F2B460483F24C13D334A8E9E530D8D (DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* ___dsa0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	{
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_0 = ___dsa0;
		NullCheck(L_0);
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_1;
		L_1 = VirtualFuncInvoker1< DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9, bool >::Invoke(12 /* System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSA::ExportParameters(System.Boolean) */, L_0, (bool)0);
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2.___P_0;
		NullCheck(L_3);
		V_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		int32_t L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)16), L_4)), ((int32_t)20))), L_5)), L_6)), 4)), ((int32_t)20))));
		V_1 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)68));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)83));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)83));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)49));
		int32_t L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = CryptoConvert_GetBytesLE_mEE537A512F8B36797B62209C2E1CEF64C1142EB9(((int32_t)(L_15<<3)), NULL);
		V_2 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = 1;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = 2;
		uint8_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = 3;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)L_32);
		V_3 = ((int32_t)16);
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_33 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = L_33.___P_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = L_34;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_35, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_1;
		int32_t L_37 = V_3;
		int32_t L_38 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_35, 0, (RuntimeArray*)L_36, L_37, L_38, NULL);
		int32_t L_39 = V_3;
		int32_t L_40 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, L_40));
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_41 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = L_41.___Q_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = L_42;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_43, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_1;
		int32_t L_45 = V_3;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_43, 0, (RuntimeArray*)L_44, L_45, ((int32_t)20), NULL);
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, ((int32_t)20)));
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_47 = L_41;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = L_47.___G_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = L_48;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_49, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_1;
		int32_t L_51 = V_3;
		int32_t L_52 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_49, 0, (RuntimeArray*)L_50, L_51, L_52, NULL);
		int32_t L_53 = V_3;
		int32_t L_54 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_53, L_54));
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_55 = L_47;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = L_55.___Y_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = L_56;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_57, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_1;
		int32_t L_59 = V_3;
		int32_t L_60 = V_0;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_57, 0, (RuntimeArray*)L_58, L_59, L_60, NULL);
		int32_t L_61 = V_3;
		int32_t L_62 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(L_61, L_62));
		DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_63 = L_55;
		int32_t L_64 = L_63.___Counter_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65;
		L_65 = CryptoConvert_GetBytesLE_mEE537A512F8B36797B62209C2E1CEF64C1142EB9(L_64, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = V_1;
		int32_t L_67 = V_3;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_65, 0, (RuntimeArray*)L_66, L_67, 4, NULL);
		int32_t L_68 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_68, 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = L_63.___Seed_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = L_69;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_70, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_1;
		int32_t L_72 = V_3;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_70, 0, (RuntimeArray*)L_71, L_72, ((int32_t)20), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_1;
		return L_73;
	}
}
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* CryptoConvert_FromCapiKeyBlob_m6D96D8C0718D1F27D13F436819FEF5585C74FB88 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___blob0;
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_1;
		L_1 = CryptoConvert_FromCapiKeyBlob_m24C4FE38E61CF65D9EC7AEA5EDB17856B4E24C15(L_0, 0, NULL);
		return L_1;
	}
}
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* CryptoConvert_FromCapiKeyBlob_m24C4FE38E61CF65D9EC7AEA5EDB17856B4E24C15 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, int32_t ___offset1, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___blob0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7764DAE340A30DF12CAC1D83DBBA792E904A118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiKeyBlob_m24C4FE38E61CF65D9EC7AEA5EDB17856B4E24C15_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___blob0;
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9DA9E036CD70BC51B1B4D9FE71E664789891DB82)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiKeyBlob_m24C4FE38E61CF65D9EC7AEA5EDB17856B4E24C15_RuntimeMethod_var)));
	}

IL_001f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___blob0;
		int32_t L_6 = ___offset1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		uint8_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		uint8_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)6)))
		{
			goto IL_0044;
		}
	}
	{
		uint8_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)7)))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0054;
	}

IL_0030:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___blob0;
		int32_t L_13 = ___offset1;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)12)));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_15) == ((uint32_t)6))))
		{
			goto IL_0054;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___blob0;
		int32_t L_17 = ___offset1;
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_18;
		L_18 = CryptoConvert_FromCapiPublicKeyBlob_mDBB1FBFD641AE816C1323EF84777BEAE34129858(L_16, ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)12))), NULL);
		return L_18;
	}

IL_0044:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___blob0;
		int32_t L_20 = ___offset1;
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_21;
		L_21 = CryptoConvert_FromCapiPublicKeyBlob_mDBB1FBFD641AE816C1323EF84777BEAE34129858(L_19, L_20, NULL);
		return L_21;
	}

IL_004c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___blob0;
		int32_t L_23 = ___offset1;
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_24;
		L_24 = CryptoConvert_FromCapiPrivateKeyBlob_mC20AB6ADD36C51060199E6E6B896F0C10B371686(L_22, L_23, NULL);
		return L_24;
	}

IL_0054:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_25 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E0DF06A17D39B9B051D58F259077F8A9AB6420A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiKeyBlob_m24C4FE38E61CF65D9EC7AEA5EDB17856B4E24C15_RuntimeMethod_var)));
	}
}
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlobDSA(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* CryptoConvert_FromCapiKeyBlobDSA_mF9149B842B4DB5AEAD042CE2E1C22FBB8806CC0F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___blob0;
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_1;
		L_1 = CryptoConvert_FromCapiKeyBlobDSA_mAF2E3C45876AF0740E2F920AF2FBF4D7E95AC27B(L_0, 0, NULL);
		return L_1;
	}
}
// System.Security.Cryptography.DSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlobDSA(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* CryptoConvert_FromCapiKeyBlobDSA_mAF2E3C45876AF0740E2F920AF2FBF4D7E95AC27B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blob0, int32_t ___offset1, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___blob0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7764DAE340A30DF12CAC1D83DBBA792E904A118)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiKeyBlobDSA_mAF2E3C45876AF0740E2F920AF2FBF4D7E95AC27B_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___blob0;
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9DA9E036CD70BC51B1B4D9FE71E664789891DB82)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiKeyBlobDSA_mAF2E3C45876AF0740E2F920AF2FBF4D7E95AC27B_RuntimeMethod_var)));
	}

IL_001f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___blob0;
		int32_t L_6 = ___offset1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		uint8_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)6)))
		{
			goto IL_002d;
		}
	}
	{
		uint8_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)7)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_003d;
	}

IL_002d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___blob0;
		int32_t L_12 = ___offset1;
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_13;
		L_13 = CryptoConvert_FromCapiPublicKeyBlobDSA_mDE9A95D0B607E19C567A1EE012FA45C328DD100C(L_11, L_12, NULL);
		return L_13;
	}

IL_0035:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___blob0;
		int32_t L_15 = ___offset1;
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_16;
		L_16 = CryptoConvert_FromCapiPrivateKeyBlobDSA_m8699F0FC7431A6D5BC7F50A4B8586AE8ED0D901F(L_14, L_15, NULL);
		return L_16;
	}

IL_003d:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_17 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E0DF06A17D39B9B051D58F259077F8A9AB6420A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromCapiKeyBlobDSA_mAF2E3C45876AF0740E2F920AF2FBF4D7E95AC27B_RuntimeMethod_var)));
	}
}
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.AsymmetricAlgorithm,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiKeyBlob_m6590F48441E56EA11A126EB727FCEEAE4EADE6EE (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* ___keypair0, bool ___includePrivateKey1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_0 = ___keypair0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC24D4BB26A0E7B6991C0CC8ED4750FA1E3DA9A86)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_ToCapiKeyBlob_m6590F48441E56EA11A126EB727FCEEAE4EADE6EE_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_2 = ___keypair0;
		if (!((RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A*)IsInstClass((RuntimeObject*)L_2, RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_3 = ___keypair0;
		bool L_4 = ___includePrivateKey1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = CryptoConvert_ToCapiKeyBlob_mE204BA266322E69C7157E89F33D63871FC8A02BA(((RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A*)CastclassClass((RuntimeObject*)L_3, RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A_il2cpp_TypeInfo_var)), L_4, NULL);
		return L_5;
	}

IL_0023:
	{
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_6 = ___keypair0;
		if (!((DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41*)IsInstClass((RuntimeObject*)L_6, DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41_il2cpp_TypeInfo_var)))
		{
			goto IL_0038;
		}
	}
	{
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_7 = ___keypair0;
		bool L_8 = ___includePrivateKey1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = CryptoConvert_ToCapiKeyBlob_m9F75148674A8134C0234D96351659690482A9219(((DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41*)CastclassClass((RuntimeObject*)L_7, DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41_il2cpp_TypeInfo_var)), L_8, NULL);
		return L_9;
	}

IL_0038:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
}
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiKeyBlob_mE204BA266322E69C7157E89F33D63871FC8A02BA (RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ___rsa0, bool ___includePrivateKey1, const RuntimeMethod* method) 
{
	{
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_0 = ___rsa0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A796170302D4ECCE2B27627900D3B9D9A3D3399)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_ToCapiKeyBlob_mE204BA266322E69C7157E89F33D63871FC8A02BA_RuntimeMethod_var)));
	}

IL_000e:
	{
		bool L_2 = ___includePrivateKey1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_3 = ___rsa0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = CryptoConvert_ToCapiPrivateKeyBlob_m1E13FA53A92E3101F007C11C5D4F0B12EFA97B1D(L_3, NULL);
		return L_4;
	}

IL_0018:
	{
		RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_5 = ___rsa0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = CryptoConvert_ToCapiPublicKeyBlob_mFBE9CFF36CC1BEE35ED2F4DE56D8DFD8BFEBE437(L_5, NULL);
		return L_6;
	}
}
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.DSA,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_ToCapiKeyBlob_m9F75148674A8134C0234D96351659690482A9219 (DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* ___dsa0, bool ___includePrivateKey1, const RuntimeMethod* method) 
{
	{
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_0 = ___dsa0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCAC57339D310D7C52C93208857637C74016D51CA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_ToCapiKeyBlob_m9F75148674A8134C0234D96351659690482A9219_RuntimeMethod_var)));
	}

IL_000e:
	{
		bool L_2 = ___includePrivateKey1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_3 = ___dsa0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = CryptoConvert_ToCapiPrivateKeyBlob_mD523703D97C652B3A255B17EF7E1F58E7B2D790D(L_3, NULL);
		return L_4;
	}

IL_0018:
	{
		DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_5 = ___dsa0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = CryptoConvert_ToCapiPublicKeyBlob_m68028F1F48F2B460483F24C13D334A8E9E530D8D(L_5, NULL);
		return L_6;
	}
}
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoConvert_ToHex_mC87178570D07C2B00E58A004CB80F57831868EF7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		NullCheck(L_1);
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_2, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 2)), NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_10;
		L_10 = Byte_ToString_m64EE358F20093EE61D30F9A21638D9E9EE8F87EC((&V_3), _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD, L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0036:
	{
		int32_t L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		return L_16;
	}
}
// System.Byte Mono.Security.Cryptography.CryptoConvert::FromHexChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t CryptoConvert_FromHexChar_mE319F9D0D0879218BA2F529F447FC8250D60B427 (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)97))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)102))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)97))), ((int32_t)10))));
	}

IL_0013:
	{
		Il2CppChar L_3 = ___c0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)65))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_4 = ___c0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)70))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)65))), ((int32_t)10))));
	}

IL_0026:
	{
		Il2CppChar L_6 = ___c0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_7 = ___c0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_8 = ___c0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)48))));
	}

IL_0036:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral04BF76CC5FA781651FBAB40F0114159408E0A8E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromHexChar_mE319F9D0D0879218BA2F529F447FC8250D60B427_RuntimeMethod_var)));
	}
}
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::FromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConvert_FromHex_m502BD546734727FF346AF8822973CD602958BDA3 (String_t* ___hex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___hex0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___hex0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((!(((uint32_t)((int32_t)(L_2&1))) == ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral089B51603CD331D481FB97A66A3BCF6B69910A2D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptoConvert_FromHex_m502BD546734727FF346AF8822973CD602958BDA3_RuntimeMethod_var)));
	}

IL_001b:
	{
		String_t* L_4 = ___hex0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_5>>1)));
		V_0 = L_6;
		V_1 = 0;
		V_2 = 0;
		goto IL_0065;
	}

IL_002f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		String_t* L_9 = ___hex0;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		NullCheck(L_9);
		Il2CppChar L_12;
		L_12 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_11, NULL);
		uint8_t L_13;
		L_13 = CryptoConvert_FromHexChar_mE319F9D0D0879218BA2F529F447FC8250D60B427(L_12, NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_13<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		NullCheck(L_14);
		uint8_t* L_17 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)));
		int32_t L_18 = *((uint8_t*)L_17);
		String_t* L_19 = ___hex0;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		NullCheck(L_19);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, L_21, NULL);
		uint8_t L_23;
		L_23 = CryptoConvert_FromHexChar_mE319F9D0D0879218BA2F529F447FC8250D60B427(L_22, NULL);
		*((int8_t*)L_17) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_18, (int32_t)L_23)));
	}

IL_0065:
	{
		int32_t L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		return L_26;
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m5BC29434025AE3E4676D8ECC0263A91D2B071C95 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* LineNumberTable_get_LineNumbers_mD0407D8C10E493FFEB39784035E723501BFB8010_inline (LineNumberTable_t10E99D4E468945C47F7451D965B3028B579BE24E* __this, const RuntimeMethod* method) 
{
	{
		LineNumberEntryU5BU5D_t9C084CF16A654CB909098FF99DB4A9C11D91C682* L_0 = __this->____line_numbers_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CodeBlockEntry_Close_m0C54C4720E9727659D715A4B508755EF873586DD_inline (CodeBlockEntry_t2FB7B0CB2C74521F21B74C857083251272BA926D* __this, int32_t ___end_offset0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___end_offset0;
		__this->___EndOffset_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m87AD398778DB1D31D3AB755704565AC835DC9DAC_gshared_inline (List_1_t504F807CA014CA67521A129AAE80D72629E16A3F* __this, LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A ___item0, const RuntimeMethod* method) 
{
	LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_1 = (LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		LocalVariableEntryU5BU5D_t6735B6E417D91AEAD141A6F18FC8B8120C3C26C3* L_6 = V_0;
		int32_t L_7 = V_1;
		LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A)L_8);
		return;
	}

IL_0034:
	{
		LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A L_9 = ___item0;
		((  void (*) (List_1_t504F807CA014CA67521A129AAE80D72629E16A3F*, LocalVariableEntry_tF872170E05C4DC9E4534168312C990FEDA90DD6A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mC1B9B1B33CED86692DCE632400585AE8680FCC5C_gshared_inline (List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A* __this, ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 ___item0, const RuntimeMethod* method) 
{
	ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_1 = (ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ScopeVariableU5BU5D_t1D15A708546AD906FF99C3B86CF4D10818E3D8DC* L_6 = V_0;
		int32_t L_7 = V_1;
		ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1)L_8);
		return;
	}

IL_0034:
	{
		ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1 L_9 = ___item0;
		((  void (*) (List_1_t3AA706400C25C81CC8E0AF18A26D47BD850C562A*, ScopeVariable_t987E36BE9B6037B6801470E1DF5ECD49E383B3D1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
