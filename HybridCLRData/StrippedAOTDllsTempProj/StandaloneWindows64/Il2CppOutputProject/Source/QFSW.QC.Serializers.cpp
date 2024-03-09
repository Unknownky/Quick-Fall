#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// QFSW.QC.BasicQcSerializer`1<System.Collections.DictionaryEntry>
struct BasicQcSerializer_1_tB008096075F26C145D5C6E3530FD6C0E956D4D83;
// QFSW.QC.BasicQcSerializer`1<System.Object>
struct BasicQcSerializer_1_tE044A152366EA1ACBB15C164A19CC3EFD7D5E4B1;
// QFSW.QC.BasicQcSerializer`1<System.String>
struct BasicQcSerializer_1_t93871D731D34F723C3C2514BCBDC6199BC35E479;
// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2>
struct BasicQcSerializer_1_tAF919273F8FCB712973E7172C36B24003E42D971;
// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2Int>
struct BasicQcSerializer_1_tF45D575D7B1D2E92BBD25E34F15FC2A7C69F1642;
// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3>
struct BasicQcSerializer_1_t3ECEF17BBA71291BACF60A478F5F012F0D33D009;
// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3Int>
struct BasicQcSerializer_1_t6BBF97CCFF550D3D54DE057CF562DF94B49A9AB0;
// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector4>
struct BasicQcSerializer_1_t43F132B1238CA90ADA6D6DF8B7BF7911B17C4257;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo>
struct Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD;
// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String>
struct Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54;
// QFSW.QC.Serializers.IEnumerableSerializer`1<System.Collections.IDictionary>
struct IEnumerableSerializer_1_t950EDC6110B5AF1AA608341123DBDA24242A4507;
// QFSW.QC.Serializers.IEnumerableSerializer`1<System.Collections.IEnumerable>
struct IEnumerableSerializer_1_tCCB5911049D51C994A7D9F0F6B25B713B46A5FA0;
// QFSW.QC.Serializers.IEnumerableSerializer`1<System.Object>
struct IEnumerableSerializer_1_t1A6EF940896CC2579A4B271F5DFB29573C26AAE2;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Reflection.PropertyInfo>
struct KeyCollection_t0F0E7DB33DA3F98822ACB896D592899A5E524C21;
// System.Collections.Generic.List`1<QFSW.QC.CollectionFormatter>
struct List_1_t4B20C0601D0BB30357BCA41FAF1F3D75B78712A7;
// System.Collections.Generic.List`1<QFSW.QC.TypeColorFormatter>
struct List_1_tA0138276D24E33D8B6D15A5C1BAD2E74685A79A5;
// QFSW.QC.PolymorphicQcSerializer`1<System.Collections.IEnumerable>
struct PolymorphicQcSerializer_1_t84B1069801EB9C4B04E82BEB58D0B1A3EA746585;
// QFSW.QC.PolymorphicQcSerializer`1<System.Runtime.CompilerServices.ITuple>
struct PolymorphicQcSerializer_1_tD070AD6108DA69AC3CDA7FC25A361E7115F1CB69;
// QFSW.QC.PolymorphicQcSerializer`1<System.Object>
struct PolymorphicQcSerializer_1_tA0FCBACA3E6A0CB5A6B3297FB36E30E3CDBD380C;
// QFSW.QC.PolymorphicQcSerializer`1<UnityEngine.Object>
struct PolymorphicQcSerializer_1_t2AFEF14FF1F6B7BD0CAB726B5B1691D27FD64EA1;
// QFSW.QC.PolymorphicQcSerializer`1<System.Type>
struct PolymorphicQcSerializer_1_tFC720B8A287BFE61DA076619A06538218A7F614C;
// QFSW.QC.Pool`1<System.Text.StringBuilder>
struct Pool_1_tF273DAAC8CCF968698D4628FD9281EB42503DC33;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Reflection.PropertyInfo>
struct ValueCollection_t01200D10F15F025B2DA5319DA603ED735B0415D4;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Reflection.PropertyInfo>[]
struct EntryU5BU5D_t937A6C3BB9832EDC205281072FF48B3610093B65;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// QFSW.QC.Serializers.DictionaryEntrySerializer
struct DictionaryEntrySerializer_t45A5FDE0A1EDEF1844362D5BBEBF2EAA2F45D706;
// QFSW.QC.GenericQcSerializer
struct GenericQcSerializer_tA4C9C1652AB0D84754B8645064FB41791C7E75EC;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// QFSW.QC.Serializers.IDictionarySerializer
struct IDictionarySerializer_t5123BBD703CBBCC861865C765965F33C18521384;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// QFSW.QC.Serializers.IEnumerableSerializer
struct IEnumerableSerializer_t075BEA17222EFDE2ADB615806290C8EF0D047F1E;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.CompilerServices.ITuple
struct ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066;
// QFSW.QC.Serializers.ITupleSerializer
struct ITupleSerializer_tDB50E570BA2EBA8A3E57D471F2D1B380E673B08B;
// QFSW.QC.Serializers.KeyValuePairSerializer
struct KeyValuePairSerializer_t11A352364C10613404B014F2A2E3AB45287B4BAD;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// QFSW.QC.QuantumTheme
struct QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// QFSW.QC.Serializers.StringSerializer
struct StringSerializer_t16CF641FEB901C4D0A4A2D00412873AF1377004E;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// System.Type
struct Type_t;
// QFSW.QC.Serializers.TypeSerialiazer
struct TypeSerialiazer_tCC8CF66050BD4AF8BA28DE18ECA1FBFE862E2CAC;
// QFSW.QC.Serializers.UnityObjectSerializer
struct UnityObjectSerializer_tCACECC75A30D799ABF96E749EE5A1C858C0B72D9;
// QFSW.QC.Serializers.Vector2IntSerializer
struct Vector2IntSerializer_t3BD4853F38D002AE19A5C0A757EF094B5AF0DFE6;
// QFSW.QC.Serializers.Vector2Serializer
struct Vector2Serializer_tE6CB761E9DC387B21F6F1C36CED2F2CC94393715;
// QFSW.QC.Serializers.Vector3IntSerializer
struct Vector3IntSerializer_t943AD61CB48BC221D7C994C46D195FDD6C826655;
// QFSW.QC.Serializers.Vector3Serializer
struct Vector3Serializer_t577925409165A6A5E9F1E36111DF8A3A6945E10E;
// QFSW.QC.Serializers.Vector4Serializer
struct Vector4Serializer_t137FD5B8640D3D97AD83C7002C20349C236E5FF1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0
struct U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4;

IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionExtensions_t4EC544219FF36656B78916C7133D3B0780AF9B7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E;
IL2CPP_EXTERN_C String_t* _stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1_SerializeRecursive_m9284B764A0A04D78D2996E5638C4229B851C4C59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_m213426DC6C518FB9C7FB0EFF7935AAF37BCE0B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_m4FB85D4FFA6C8AADEBF740F5B299C62F50A65A43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_m9F1DE7B609F88A154660857BE7A9C59A84486C63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_mAE5FDC2244FB106F2B5D1572B8E37DCCFC238504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_mC1528FB6C38D3F712460BDE2790EDCE8A10DF922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_mC1D86FD1515D7C92E17B0CF0364FD071BCD0794E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicQcSerializer_1__ctor_mC60D744164DA1A224F8745BE8CCCB5C51347A239_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB312BF20831D0F69AAD305FC2379BE6FA7FA7163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDB2D627136E5C4A957F94C6E141F7D8A76903436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8F36CF56D819CDD99C6A0D1D03CB579B8C7F4D92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mAD13B7443C10EB13729DF6B143308C01C53FAFCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEnumerableSerializer_1__ctor_m1535E9734024EACDF2928285AD4B909A39CE7724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEnumerableSerializer_1__ctor_m5B30E210B42194407AE36D20445E851437497F1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PolymorphicQcSerializer_1_SerializeRecursive_mE4DF3B9BB3BD14D4C503783B7C47CEEB667D5832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PolymorphicQcSerializer_1__ctor_m3A9F4CA918484590AD5F4F14663D99E5C5B349C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PolymorphicQcSerializer_1__ctor_m7B70EFAADC0BF546E527C26ACED7C4BBF4940E07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PolymorphicQcSerializer_1__ctor_mBAE454DDCF4BA353D7477728CA3DE5D9B813B5DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PolymorphicQcSerializer_1_get_Priority_m155E179F49ED3BACA1211A4DCD80A789865D79C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetObjectStreamU3Ed__0_System_Collections_IEnumerator_Reset_mC5BB735164FA9DBCF90CC9C3B44149831807C60C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0F1DEE69D59CD8656FCF5F5EE1574AE8DD333E83 
{
};

// QFSW.QC.BasicQcSerializer`1<System.Collections.DictionaryEntry>
struct BasicQcSerializer_1_tB008096075F26C145D5C6E3530FD6C0E956D4D83  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};

// QFSW.QC.BasicQcSerializer`1<System.String>
struct BasicQcSerializer_1_t93871D731D34F723C3C2514BCBDC6199BC35E479  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};

// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2>
struct BasicQcSerializer_1_tAF919273F8FCB712973E7172C36B24003E42D971  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};

// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2Int>
struct BasicQcSerializer_1_tF45D575D7B1D2E92BBD25E34F15FC2A7C69F1642  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};

// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3>
struct BasicQcSerializer_1_t3ECEF17BBA71291BACF60A478F5F012F0D33D009  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};

// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3Int>
struct BasicQcSerializer_1_t6BBF97CCFF550D3D54DE057CF562DF94B49A9AB0  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};

// QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector4>
struct BasicQcSerializer_1_t43F132B1238CA90ADA6D6DF8B7BF7911B17C4257  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.BasicQcSerializer`1::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo>
struct Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t937A6C3BB9832EDC205281072FF48B3610093B65* ____entries_1;
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
	KeyCollection_t0F0E7DB33DA3F98822ACB896D592899A5E524C21* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t01200D10F15F025B2DA5319DA603ED735B0415D4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// QFSW.QC.PolymorphicQcSerializer`1<System.Collections.IDictionary>
struct PolymorphicQcSerializer_1_t72DDC70CEA69AC13B411D00A4C2279455431EAB4  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.PolymorphicQcSerializer`1::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};

// QFSW.QC.PolymorphicQcSerializer`1<System.Collections.IEnumerable>
struct PolymorphicQcSerializer_1_t84B1069801EB9C4B04E82BEB58D0B1A3EA746585  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.PolymorphicQcSerializer`1::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};

// QFSW.QC.PolymorphicQcSerializer`1<System.Runtime.CompilerServices.ITuple>
struct PolymorphicQcSerializer_1_tD070AD6108DA69AC3CDA7FC25A361E7115F1CB69  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.PolymorphicQcSerializer`1::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};

// QFSW.QC.PolymorphicQcSerializer`1<UnityEngine.Object>
struct PolymorphicQcSerializer_1_t2AFEF14FF1F6B7BD0CAB726B5B1691D27FD64EA1  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.PolymorphicQcSerializer`1::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};

// QFSW.QC.PolymorphicQcSerializer`1<System.Type>
struct PolymorphicQcSerializer_1_tFC720B8A287BFE61DA076619A06538218A7F614C  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.PolymorphicQcSerializer`1::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};
struct Il2CppArrayBounds;

// QFSW.QC.GenericQcSerializer
struct GenericQcSerializer_tA4C9C1652AB0D84754B8645064FB41791C7E75EC  : public RuntimeObject
{
	// System.Func`3<System.Object,QFSW.QC.QuantumTheme,System.String> QFSW.QC.GenericQcSerializer::_recursiveSerializer
	Func_3_t66E7FBA98546933F09E8195ACF7A402383B28D54* ____recursiveSerializer_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0
struct U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4  : public RuntimeObject
{
	// System.Int32 QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.IDictionary QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::value
	RuntimeObject* ___value_3;
	// System.Collections.IDictionary QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>3__value
	RuntimeObject* ___U3CU3E3__value_4;
	// System.Collections.IDictionaryEnumerator QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
};

// QFSW.QC.Serializers.IEnumerableSerializer`1<System.Collections.IDictionary>
struct IEnumerableSerializer_1_t950EDC6110B5AF1AA608341123DBDA24242A4507  : public PolymorphicQcSerializer_1_t72DDC70CEA69AC13B411D00A4C2279455431EAB4
{
	// QFSW.QC.Pool`1<System.Text.StringBuilder> QFSW.QC.Serializers.IEnumerableSerializer`1::_builderPool
	Pool_1_tF273DAAC8CCF968698D4628FD9281EB42503DC33* ____builderPool_1;
};

// QFSW.QC.Serializers.IEnumerableSerializer`1<System.Collections.IEnumerable>
struct IEnumerableSerializer_1_tCCB5911049D51C994A7D9F0F6B25B713B46A5FA0  : public PolymorphicQcSerializer_1_t84B1069801EB9C4B04E82BEB58D0B1A3EA746585
{
	// QFSW.QC.Pool`1<System.Text.StringBuilder> QFSW.QC.Serializers.IEnumerableSerializer`1::_builderPool
	Pool_1_tF273DAAC8CCF968698D4628FD9281EB42503DC33* ____builderPool_1;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// QFSW.QC.Serializers.DictionaryEntrySerializer
struct DictionaryEntrySerializer_t45A5FDE0A1EDEF1844362D5BBEBF2EAA2F45D706  : public BasicQcSerializer_1_tB008096075F26C145D5C6E3530FD6C0E956D4D83
{
};

// QFSW.QC.Serializers.ITupleSerializer
struct ITupleSerializer_tDB50E570BA2EBA8A3E57D471F2D1B380E673B08B  : public PolymorphicQcSerializer_1_tD070AD6108DA69AC3CDA7FC25A361E7115F1CB69
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// QFSW.QC.Serializers.KeyValuePairSerializer
struct KeyValuePairSerializer_t11A352364C10613404B014F2A2E3AB45287B4BAD  : public GenericQcSerializer_tA4C9C1652AB0D84754B8645064FB41791C7E75EC
{
	// System.Type QFSW.QC.Serializers.KeyValuePairSerializer::<GenericType>k__BackingField
	Type_t* ___U3CGenericTypeU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo> QFSW.QC.Serializers.KeyValuePairSerializer::_keyPropertyLookup
	Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* ____keyPropertyLookup_2;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo> QFSW.QC.Serializers.KeyValuePairSerializer::_valuePropertyLookup
	Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* ____valuePropertyLookup_3;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// QFSW.QC.Serializers.StringSerializer
struct StringSerializer_t16CF641FEB901C4D0A4A2D00412873AF1377004E  : public BasicQcSerializer_1_t93871D731D34F723C3C2514BCBDC6199BC35E479
{
};

// QFSW.QC.Serializers.TypeSerialiazer
struct TypeSerialiazer_tCC8CF66050BD4AF8BA28DE18ECA1FBFE862E2CAC  : public PolymorphicQcSerializer_1_tFC720B8A287BFE61DA076619A06538218A7F614C
{
};

// QFSW.QC.Serializers.UnityObjectSerializer
struct UnityObjectSerializer_tCACECC75A30D799ABF96E749EE5A1C858C0B72D9  : public PolymorphicQcSerializer_1_t2AFEF14FF1F6B7BD0CAB726B5B1691D27FD64EA1
{
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// QFSW.QC.Serializers.Vector2IntSerializer
struct Vector2IntSerializer_t3BD4853F38D002AE19A5C0A757EF094B5AF0DFE6  : public BasicQcSerializer_1_tF45D575D7B1D2E92BBD25E34F15FC2A7C69F1642
{
};

// QFSW.QC.Serializers.Vector2Serializer
struct Vector2Serializer_tE6CB761E9DC387B21F6F1C36CED2F2CC94393715  : public BasicQcSerializer_1_tAF919273F8FCB712973E7172C36B24003E42D971
{
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// QFSW.QC.Serializers.Vector3IntSerializer
struct Vector3IntSerializer_t943AD61CB48BC221D7C994C46D195FDD6C826655  : public BasicQcSerializer_1_t6BBF97CCFF550D3D54DE057CF562DF94B49A9AB0
{
};

// QFSW.QC.Serializers.Vector3Serializer
struct Vector3Serializer_t577925409165A6A5E9F1E36111DF8A3A6945E10E  : public BasicQcSerializer_1_t3ECEF17BBA71291BACF60A478F5F012F0D33D009
{
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// QFSW.QC.Serializers.Vector4Serializer
struct Vector4Serializer_t137FD5B8640D3D97AD83C7002C20349C236E5FF1  : public BasicQcSerializer_1_t43F132B1238CA90ADA6D6DF8B7BF7911B17C4257
{
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

// QFSW.QC.Serializers.IDictionarySerializer
struct IDictionarySerializer_t5123BBD703CBBCC861865C765965F33C18521384  : public IEnumerableSerializer_1_t950EDC6110B5AF1AA608341123DBDA24242A4507
{
};

// QFSW.QC.Serializers.IEnumerableSerializer
struct IEnumerableSerializer_t075BEA17222EFDE2ADB615806290C8EF0D047F1E  : public IEnumerableSerializer_1_tCCB5911049D51C994A7D9F0F6B25B713B46A5FA0
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// QFSW.QC.QuantumTheme
struct QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// TMPro.TMP_FontAsset QFSW.QC.QuantumTheme::Font
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___Font_4;
	// UnityEngine.Material QFSW.QC.QuantumTheme::PanelMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___PanelMaterial_5;
	// UnityEngine.Color QFSW.QC.QuantumTheme::PanelColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___PanelColor_6;
	// UnityEngine.Color QFSW.QC.QuantumTheme::CommandLogColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___CommandLogColor_7;
	// UnityEngine.Color QFSW.QC.QuantumTheme::SelectedSuggestionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___SelectedSuggestionColor_8;
	// UnityEngine.Color QFSW.QC.QuantumTheme::SuggestionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___SuggestionColor_9;
	// UnityEngine.Color QFSW.QC.QuantumTheme::ErrorColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ErrorColor_10;
	// UnityEngine.Color QFSW.QC.QuantumTheme::WarningColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___WarningColor_11;
	// UnityEngine.Color QFSW.QC.QuantumTheme::SuccessColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___SuccessColor_12;
	// UnityEngine.Color QFSW.QC.QuantumTheme::DefaultReturnValueColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___DefaultReturnValueColor_13;
	// System.Collections.Generic.List`1<QFSW.QC.TypeColorFormatter> QFSW.QC.QuantumTheme::TypeFormatters
	List_1_tA0138276D24E33D8B6D15A5C1BAD2E74685A79A5* ___TypeFormatters_14;
	// System.Collections.Generic.List`1<QFSW.QC.CollectionFormatter> QFSW.QC.QuantumTheme::CollectionFormatters
	List_1_t4B20C0601D0BB30357BCA41FAF1F3D75B78712A7* ___CollectionFormatters_15;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.String QFSW.QC.BasicQcSerializer`1<System.Collections.DictionaryEntry>::SerializeRecursive(System.Object,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BasicQcSerializer_1_SerializeRecursive_m9284B764A0A04D78D2996E5638C4229B851C4C59_gshared (BasicQcSerializer_1_tB008096075F26C145D5C6E3530FD6C0E956D4D83* __this, RuntimeObject* ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) ;
// System.Void QFSW.QC.BasicQcSerializer`1<System.Collections.DictionaryEntry>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_m9F1DE7B609F88A154660857BE7A9C59A84486C63_gshared (BasicQcSerializer_1_tB008096075F26C145D5C6E3530FD6C0E956D4D83* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.Serializers.IEnumerableSerializer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IEnumerableSerializer_1__ctor_m95DB5619076FEE1FCEEE07F4E73D17208E84174C_gshared (IEnumerableSerializer_1_t1A6EF940896CC2579A4B271F5DFB29573C26AAE2* __this, const RuntimeMethod* method) ;
// System.Int32 QFSW.QC.PolymorphicQcSerializer`1<System.Object>::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PolymorphicQcSerializer_1_get_Priority_m2D400A06FB5345E82021E24C4B4F0510D878E321_gshared (PolymorphicQcSerializer_1_tA0FCBACA3E6A0CB5A6B3297FB36E30E3CDBD380C* __this, const RuntimeMethod* method) ;
// System.String QFSW.QC.PolymorphicQcSerializer`1<System.Object>::SerializeRecursive(System.Object,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PolymorphicQcSerializer_1_SerializeRecursive_m2DE9C686D2D69386DE75AAE6ACA132D7DD41AD71_gshared (PolymorphicQcSerializer_1_tA0FCBACA3E6A0CB5A6B3297FB36E30E3CDBD380C* __this, RuntimeObject* ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) ;
// System.Void QFSW.QC.PolymorphicQcSerializer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolymorphicQcSerializer_1__ctor_mC91107435BEE3E98C32E808ABF18082A52A38028_gshared (PolymorphicQcSerializer_1_tA0FCBACA3E6A0CB5A6B3297FB36E30E3CDBD380C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.BasicQcSerializer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_m541052F91A88996B393A81517844D8E1012EE9E6_gshared (BasicQcSerializer_1_tE044A152366EA1ACBB15C164A19CC3EFD7D5E4B1* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_mAE5FDC2244FB106F2B5D1572B8E37DCCFC238504_gshared (BasicQcSerializer_1_tF45D575D7B1D2E92BBD25E34F15FC2A7C69F1642* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_mC1D86FD1515D7C92E17B0CF0364FD071BCD0794E_gshared (BasicQcSerializer_1_tAF919273F8FCB712973E7172C36B24003E42D971* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_m213426DC6C518FB9C7FB0EFF7935AAF37BCE0B25_gshared (BasicQcSerializer_1_t6BBF97CCFF550D3D54DE057CF562DF94B49A9AB0* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_m4FB85D4FFA6C8AADEBF740F5B299C62F50A65A43_gshared (BasicQcSerializer_1_t3ECEF17BBA71291BACF60A478F5F012F0D33D009* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicQcSerializer_1__ctor_mC1528FB6C38D3F712460BDE2790EDCE8A10DF922_gshared (BasicQcSerializer_1_t43F132B1238CA90ADA6D6DF8B7BF7911B17C4257* __this, const RuntimeMethod* method) ;

// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.String QFSW.QC.BasicQcSerializer`1<System.Collections.DictionaryEntry>::SerializeRecursive(System.Object,QFSW.QC.QuantumTheme)
inline String_t* BasicQcSerializer_1_SerializeRecursive_m9284B764A0A04D78D2996E5638C4229B851C4C59 (BasicQcSerializer_1_tB008096075F26C145D5C6E3530FD6C0E956D4D83* __this, RuntimeObject* ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (BasicQcSerializer_1_tB008096075F26C145D5C6E3530FD6C0E956D4D83*, RuntimeObject*, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6*, const RuntimeMethod*))BasicQcSerializer_1_SerializeRecursive_m9284B764A0A04D78D2996E5638C4229B851C4C59_gshared)(__this, ___value0, ___theme1, method);
}
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void QFSW.QC.BasicQcSerializer`1<System.Collections.DictionaryEntry>::.ctor()
inline void BasicQcSerializer_1__ctor_m9F1DE7B609F88A154660857BE7A9C59A84486C63 (BasicQcSerializer_1_tB008096075F26C145D5C6E3530FD6C0E956D4D83* __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_tB008096075F26C145D5C6E3530FD6C0E956D4D83*, const RuntimeMethod*))BasicQcSerializer_1__ctor_m9F1DE7B609F88A154660857BE7A9C59A84486C63_gshared)(__this, method);
}
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0__ctor_m87ABDD84C99F03D5EEE216F4588AA154EA068C08 (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void QFSW.QC.Serializers.IEnumerableSerializer`1<System.Collections.IDictionary>::.ctor()
inline void IEnumerableSerializer_1__ctor_m5B30E210B42194407AE36D20445E851437497F1D (IEnumerableSerializer_1_t950EDC6110B5AF1AA608341123DBDA24242A4507* __this, const RuntimeMethod* method)
{
	((  void (*) (IEnumerableSerializer_1_t950EDC6110B5AF1AA608341123DBDA24242A4507*, const RuntimeMethod*))IEnumerableSerializer_1__ctor_m95DB5619076FEE1FCEEE07F4E73D17208E84174C_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0_U3CU3Em__Finally1_m2AA3A6F11D7E6258EC27A3AF624BB45E27F4BE87 (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0_System_IDisposable_Dispose_m163DCCCAE51DDE2C539C3FE754A9DB93A8CCDD85 (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Object> QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObjectStreamU3Ed__0_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_mD67F48C9376266054762C279BD0B29A9CCD83171 (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, const RuntimeMethod* method) ;
// System.Int32 QFSW.QC.PolymorphicQcSerializer`1<System.Collections.IEnumerable>::get_Priority()
inline int32_t PolymorphicQcSerializer_1_get_Priority_m155E179F49ED3BACA1211A4DCD80A789865D79C1 (PolymorphicQcSerializer_1_t84B1069801EB9C4B04E82BEB58D0B1A3EA746585* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PolymorphicQcSerializer_1_t84B1069801EB9C4B04E82BEB58D0B1A3EA746585*, const RuntimeMethod*))PolymorphicQcSerializer_1_get_Priority_m2D400A06FB5345E82021E24C4B4F0510D878E321_gshared)(__this, method);
}
// System.Void QFSW.QC.Serializers.IEnumerableSerializer`1<System.Collections.IEnumerable>::.ctor()
inline void IEnumerableSerializer_1__ctor_m1535E9734024EACDF2928285AD4B909A39CE7724 (IEnumerableSerializer_1_tCCB5911049D51C994A7D9F0F6B25B713B46A5FA0* __this, const RuntimeMethod* method)
{
	((  void (*) (IEnumerableSerializer_1_tCCB5911049D51C994A7D9F0F6B25B713B46A5FA0*, const RuntimeMethod*))IEnumerableSerializer_1__ctor_m95DB5619076FEE1FCEEE07F4E73D17208E84174C_gshared)(__this, method);
}
// System.String QFSW.QC.PolymorphicQcSerializer`1<System.Runtime.CompilerServices.ITuple>::SerializeRecursive(System.Object,QFSW.QC.QuantumTheme)
inline String_t* PolymorphicQcSerializer_1_SerializeRecursive_mE4DF3B9BB3BD14D4C503783B7C47CEEB667D5832 (PolymorphicQcSerializer_1_tD070AD6108DA69AC3CDA7FC25A361E7115F1CB69* __this, RuntimeObject* ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (PolymorphicQcSerializer_1_tD070AD6108DA69AC3CDA7FC25A361E7115F1CB69*, RuntimeObject*, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6*, const RuntimeMethod*))PolymorphicQcSerializer_1_SerializeRecursive_m2DE9C686D2D69386DE75AAE6ACA132D7DD41AD71_gshared)(__this, ___value0, ___theme1, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Void QFSW.QC.PolymorphicQcSerializer`1<System.Runtime.CompilerServices.ITuple>::.ctor()
inline void PolymorphicQcSerializer_1__ctor_m3A9F4CA918484590AD5F4F14663D99E5C5B349C3 (PolymorphicQcSerializer_1_tD070AD6108DA69AC3CDA7FC25A361E7115F1CB69* __this, const RuntimeMethod* method)
{
	((  void (*) (PolymorphicQcSerializer_1_tD070AD6108DA69AC3CDA7FC25A361E7115F1CB69*, const RuntimeMethod*))PolymorphicQcSerializer_1__ctor_mC91107435BEE3E98C32E808ABF18082A52A38028_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mB312BF20831D0F69AAD305FC2379BE6FA7FA7163 (Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo>::get_Item(TKey)
inline PropertyInfo_t* Dictionary_2_get_Item_m8F36CF56D819CDD99C6A0D1D03CB579B8C7F4D92 (Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  PropertyInfo_t* (*) (Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mAD13B7443C10EB13729DF6B143308C01C53FAFCC (Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* __this, Type_t* ___key0, PropertyInfo_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD*, Type_t*, PropertyInfo_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.String QFSW.QC.GenericQcSerializer::SerializeRecursive(System.Object,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericQcSerializer_SerializeRecursive_m0E0AF6963A98E8E6245C999AAABC793A314AE31E (GenericQcSerializer_tA4C9C1652AB0D84754B8645064FB41791C7E75EC* __this, RuntimeObject* ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.PropertyInfo>::.ctor()
inline void Dictionary_2__ctor_mDB2D627136E5C4A957F94C6E141F7D8A76903436 (Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void QFSW.QC.GenericQcSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericQcSerializer__ctor_m67AD799E92DDE54D338F37BE266A2BCED93377E3 (GenericQcSerializer_tA4C9C1652AB0D84754B8645064FB41791C7E75EC* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.BasicQcSerializer`1<System.String>::.ctor()
inline void BasicQcSerializer_1__ctor_mC60D744164DA1A224F8745BE8CCCB5C51347A239 (BasicQcSerializer_1_t93871D731D34F723C3C2514BCBDC6199BC35E479* __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_t93871D731D34F723C3C2514BCBDC6199BC35E479*, const RuntimeMethod*))BasicQcSerializer_1__ctor_m541052F91A88996B393A81517844D8E1012EE9E6_gshared)(__this, method);
}
// System.String QFSW.QC.Utilities.ReflectionExtensions::GetDisplayName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReflectionExtensions_GetDisplayName_m9D2B70244E47902D4168043E590D180C7521F180 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void QFSW.QC.PolymorphicQcSerializer`1<System.Type>::.ctor()
inline void PolymorphicQcSerializer_1__ctor_m7B70EFAADC0BF546E527C26ACED7C4BBF4940E07 (PolymorphicQcSerializer_1_tFC720B8A287BFE61DA076619A06538218A7F614C* __this, const RuntimeMethod* method)
{
	((  void (*) (PolymorphicQcSerializer_1_tFC720B8A287BFE61DA076619A06538218A7F614C*, const RuntimeMethod*))PolymorphicQcSerializer_1__ctor_mC91107435BEE3E98C32E808ABF18082A52A38028_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void QFSW.QC.PolymorphicQcSerializer`1<UnityEngine.Object>::.ctor()
inline void PolymorphicQcSerializer_1__ctor_mBAE454DDCF4BA353D7477728CA3DE5D9B813B5DB (PolymorphicQcSerializer_1_t2AFEF14FF1F6B7BD0CAB726B5B1691D27FD64EA1* __this, const RuntimeMethod* method)
{
	((  void (*) (PolymorphicQcSerializer_1_t2AFEF14FF1F6B7BD0CAB726B5B1691D27FD64EA1*, const RuntimeMethod*))PolymorphicQcSerializer_1__ctor_mC91107435BEE3E98C32E808ABF18082A52A38028_gshared)(__this, method);
}
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2Int>::.ctor()
inline void BasicQcSerializer_1__ctor_mAE5FDC2244FB106F2B5D1572B8E37DCCFC238504 (BasicQcSerializer_1_tF45D575D7B1D2E92BBD25E34F15FC2A7C69F1642* __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_tF45D575D7B1D2E92BBD25E34F15FC2A7C69F1642*, const RuntimeMethod*))BasicQcSerializer_1__ctor_mAE5FDC2244FB106F2B5D1572B8E37DCCFC238504_gshared)(__this, method);
}
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector2>::.ctor()
inline void BasicQcSerializer_1__ctor_mC1D86FD1515D7C92E17B0CF0364FD071BCD0794E (BasicQcSerializer_1_tAF919273F8FCB712973E7172C36B24003E42D971* __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_tAF919273F8FCB712973E7172C36B24003E42D971*, const RuntimeMethod*))BasicQcSerializer_1__ctor_mC1D86FD1515D7C92E17B0CF0364FD071BCD0794E_gshared)(__this, method);
}
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3Int>::.ctor()
inline void BasicQcSerializer_1__ctor_m213426DC6C518FB9C7FB0EFF7935AAF37BCE0B25 (BasicQcSerializer_1_t6BBF97CCFF550D3D54DE057CF562DF94B49A9AB0* __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_t6BBF97CCFF550D3D54DE057CF562DF94B49A9AB0*, const RuntimeMethod*))BasicQcSerializer_1__ctor_m213426DC6C518FB9C7FB0EFF7935AAF37BCE0B25_gshared)(__this, method);
}
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector3>::.ctor()
inline void BasicQcSerializer_1__ctor_m4FB85D4FFA6C8AADEBF740F5B299C62F50A65A43 (BasicQcSerializer_1_t3ECEF17BBA71291BACF60A478F5F012F0D33D009* __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_t3ECEF17BBA71291BACF60A478F5F012F0D33D009*, const RuntimeMethod*))BasicQcSerializer_1__ctor_m4FB85D4FFA6C8AADEBF740F5B299C62F50A65A43_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void QFSW.QC.BasicQcSerializer`1<UnityEngine.Vector4>::.ctor()
inline void BasicQcSerializer_1__ctor_mC1528FB6C38D3F712460BDE2790EDCE8A10DF922 (BasicQcSerializer_1_t43F132B1238CA90ADA6D6DF8B7BF7911B17C4257* __this, const RuntimeMethod* method)
{
	((  void (*) (BasicQcSerializer_1_t43F132B1238CA90ADA6D6DF8B7BF7911B17C4257*, const RuntimeMethod*))BasicQcSerializer_1__ctor_mC1528FB6C38D3F712460BDE2790EDCE8A10DF922_gshared)(__this, method);
}
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
// System.String QFSW.QC.Serializers.DictionaryEntrySerializer::SerializeFormatted(System.Collections.DictionaryEntry,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DictionaryEntrySerializer_SerializeFormatted_m33D4AE78041FDE5AD9A110C5C52C82968C4113DA (DictionaryEntrySerializer_t45A5FDE0A1EDEF1844362D5BBEBF2EAA2F45D706* __this, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1_SerializeRecursive_m9284B764A0A04D78D2996E5638C4229B851C4C59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string innerKey = SerializeRecursive(value.Key, theme);
		RuntimeObject* L_0;
		L_0 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&___value0), NULL);
		QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* L_1 = ___theme1;
		String_t* L_2;
		L_2 = BasicQcSerializer_1_SerializeRecursive_m9284B764A0A04D78D2996E5638C4229B851C4C59(__this, L_0, L_1, BasicQcSerializer_1_SerializeRecursive_m9284B764A0A04D78D2996E5638C4229B851C4C59_RuntimeMethod_var);
		// string innerValue = SerializeRecursive(value.Value, theme);
		RuntimeObject* L_3;
		L_3 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&___value0), NULL);
		QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* L_4 = ___theme1;
		String_t* L_5;
		L_5 = BasicQcSerializer_1_SerializeRecursive_m9284B764A0A04D78D2996E5638C4229B851C4C59(__this, L_3, L_4, BasicQcSerializer_1_SerializeRecursive_m9284B764A0A04D78D2996E5638C4229B851C4C59_RuntimeMethod_var);
		V_0 = L_5;
		// return $"{innerKey}: {innerValue}";
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_6, NULL);
		return L_7;
	}
}
// System.Void QFSW.QC.Serializers.DictionaryEntrySerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntrySerializer__ctor_m852C1C10BCA616B61B42748DC55658FB0C39FC4F (DictionaryEntrySerializer_t45A5FDE0A1EDEF1844362D5BBEBF2EAA2F45D706* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_m9F1DE7B609F88A154660857BE7A9C59A84486C63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_m9F1DE7B609F88A154660857BE7A9C59A84486C63(__this, BasicQcSerializer_1__ctor_m9F1DE7B609F88A154660857BE7A9C59A84486C63_RuntimeMethod_var);
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
// System.Collections.IEnumerable QFSW.QC.Serializers.IDictionarySerializer::GetObjectStream(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IDictionarySerializer_GetObjectStream_mA2D7A3FA7A77F615EB965F28EC9C9F501012955F (IDictionarySerializer_t5123BBD703CBBCC861865C765965F33C18521384* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* L_0 = (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4*)il2cpp_codegen_object_new(U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetObjectStreamU3Ed__0__ctor_m87ABDD84C99F03D5EEE216F4588AA154EA068C08(L_0, ((int32_t)-2), NULL);
		U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* L_1 = L_0;
		RuntimeObject* L_2 = ___value0;
		NullCheck(L_1);
		L_1->___U3CU3E3__value_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__value_4), (void*)L_2);
		return L_1;
	}
}
// System.Void QFSW.QC.Serializers.IDictionarySerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDictionarySerializer__ctor_m0A00FF09C09F33672D2540151671230AFBAFCF47 (IDictionarySerializer_t5123BBD703CBBCC861865C765965F33C18521384* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableSerializer_1__ctor_m5B30E210B42194407AE36D20445E851437497F1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IEnumerableSerializer_1__ctor_m5B30E210B42194407AE36D20445E851437497F1D(__this, IEnumerableSerializer_1__ctor_m5B30E210B42194407AE36D20445E851437497F1D_RuntimeMethod_var);
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
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0__ctor_m87ABDD84C99F03D5EEE216F4588AA154EA068C08 (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0_System_IDisposable_Dispose_m163DCCCAE51DDE2C539C3FE754A9DB93A8CCDD85 (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetObjectStreamU3Ed__0_U3CU3Em__Finally1_m2AA3A6F11D7E6258EC27A3AF624BB45E27F4BE87(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetObjectStreamU3Ed__0_MoveNext_m32C0EFA5D8B5BE2C358383A4D45001B63072ADF0 (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0082:
			{// begin fault (depth: 1)
				U3CGetObjectStreamU3Ed__0_System_IDisposable_Dispose_m163DCCCAE51DDE2C539C3FE754A9DB93A8CCDD85(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_005c_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0089;
			}

IL_0012_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (DictionaryEntry item in value)
				RuntimeObject* L_3 = __this->___value_3;
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_3);
				__this->___U3CU3E7__wrap1_5 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_5), (void*)L_4);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0064_1;
			}

IL_0034_1:
			{
				// foreach (DictionaryEntry item in value)
				RuntimeObject* L_5 = __this->___U3CU3E7__wrap1_5;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_2 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_6, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				// yield return item;
				DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_7 = V_2;
				DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8 = L_7;
				RuntimeObject* L_9 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_8);
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0089;
			}

IL_005c_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0064_1:
			{
				// foreach (DictionaryEntry item in value)
				RuntimeObject* L_10 = __this->___U3CU3E7__wrap1_5;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0034_1;
				}
			}
			{
				U3CGetObjectStreamU3Ed__0_U3CU3Em__Finally1_m2AA3A6F11D7E6258EC27A3AF624BB45E27F4BE87(__this, NULL);
				__this->___U3CU3E7__wrap1_5 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_5), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_0089;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0089:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0_U3CU3Em__Finally1_m2AA3A6F11D7E6258EC27A3AF624BB45E27F4BE87 (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_5;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObjectStreamU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDCC73FB10350A7BE5CC83D4A7B2ABAE4BFB2D3E1 (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObjectStreamU3Ed__0_System_Collections_IEnumerator_Reset_mC5BB735164FA9DBCF90CC9C3B44149831807C60C (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetObjectStreamU3Ed__0_System_Collections_IEnumerator_Reset_mC5BB735164FA9DBCF90CC9C3B44149831807C60C_RuntimeMethod_var)));
	}
}
// System.Object QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObjectStreamU3Ed__0_System_Collections_IEnumerator_get_Current_m48B63058184287CCBFCF4EB753B0940B745C376E (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObjectStreamU3Ed__0_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_mD67F48C9376266054762C279BD0B29A9CCD83171 (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* L_3 = (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4*)il2cpp_codegen_object_new(U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetObjectStreamU3Ed__0__ctor_m87ABDD84C99F03D5EEE216F4588AA154EA068C08(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* L_4 = V_0;
		RuntimeObject* L_5 = __this->___U3CU3E3__value_4;
		NullCheck(L_4);
		L_4->___value_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___value_3), (void*)L_5);
		U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator QFSW.QC.Serializers.IDictionarySerializer/<GetObjectStream>d__0::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObjectStreamU3Ed__0_System_Collections_IEnumerable_GetEnumerator_mDB78AC45F52284BFDDB47D29242F695206059B9A (U3CGetObjectStreamU3Ed__0_tDD999A911C347743FFF1BD50209A609C407433A4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetObjectStreamU3Ed__0_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_mD67F48C9376266054762C279BD0B29A9CCD83171(__this, NULL);
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
// System.Int32 QFSW.QC.Serializers.IEnumerableSerializer::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IEnumerableSerializer_get_Priority_m8EF77A02AE5F811CA3B202912584725D74124E0C (IEnumerableSerializer_t075BEA17222EFDE2ADB615806290C8EF0D047F1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolymorphicQcSerializer_1_get_Priority_m155E179F49ED3BACA1211A4DCD80A789865D79C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override int Priority => base.Priority - 1000;
		int32_t L_0;
		L_0 = PolymorphicQcSerializer_1_get_Priority_m155E179F49ED3BACA1211A4DCD80A789865D79C1(__this, PolymorphicQcSerializer_1_get_Priority_m155E179F49ED3BACA1211A4DCD80A789865D79C1_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)1000)));
	}
}
// System.Collections.IEnumerable QFSW.QC.Serializers.IEnumerableSerializer::GetObjectStream(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IEnumerableSerializer_GetObjectStream_m96AFCA86CE9E9E8C319E64F6CAA16CD22FC52808 (IEnumerableSerializer_t075BEA17222EFDE2ADB615806290C8EF0D047F1E* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// return value;
		RuntimeObject* L_0 = ___value0;
		return L_0;
	}
}
// System.Void QFSW.QC.Serializers.IEnumerableSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IEnumerableSerializer__ctor_m62F5F0B02EF72929E8C17F9B1E2F0E6E78B8D31D (IEnumerableSerializer_t075BEA17222EFDE2ADB615806290C8EF0D047F1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerableSerializer_1__ctor_m1535E9734024EACDF2928285AD4B909A39CE7724_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IEnumerableSerializer_1__ctor_m1535E9734024EACDF2928285AD4B909A39CE7724(__this, IEnumerableSerializer_1__ctor_m1535E9734024EACDF2928285AD4B909A39CE7724_RuntimeMethod_var);
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
// System.String QFSW.QC.Serializers.ITupleSerializer::SerializeFormatted(System.Runtime.CompilerServices.ITuple,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ITupleSerializer_SerializeFormatted_m96035EEAF16CA610ACA66176FFD39C8BCDF139BB (ITupleSerializer_tDB50E570BA2EBA8A3E57D471F2D1B380E673B08B* __this, RuntimeObject* ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolymorphicQcSerializer_1_SerializeRecursive_mE4DF3B9BB3BD14D4C503783B7C47CEEB667D5832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string[] serializedItems = new string[value.Length];
		RuntimeObject* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Runtime.CompilerServices.ITuple::get_Length() */, ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var, L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// for (int i = 0; i < value.Length; i++)
		V_1 = 0;
		goto IL_0025;
	}

IL_0010:
	{
		// serializedItems[i] = SerializeRecursive(value[i], theme);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		int32_t L_4 = V_1;
		RuntimeObject* L_5 = ___value0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(1 /* System.Object System.Runtime.CompilerServices.ITuple::get_Item(System.Int32) */, ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var, L_5, L_6);
		QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* L_8 = ___theme1;
		String_t* L_9;
		L_9 = PolymorphicQcSerializer_1_SerializeRecursive_mE4DF3B9BB3BD14D4C503783B7C47CEEB667D5832(__this, L_7, L_8, PolymorphicQcSerializer_1_SerializeRecursive_mE4DF3B9BB3BD14D4C503783B7C47CEEB667D5832_RuntimeMethod_var);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_9);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (String_t*)L_9);
		// for (int i = 0; i < value.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < value.Length; i++)
		int32_t L_11 = V_1;
		RuntimeObject* L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Runtime.CompilerServices.ITuple::get_Length() */, ITuple_t687DD926D9D7023010BE9699BFE272DCC4BF0066_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0010;
		}
	}
	{
		// return $"({string.Join(", ", serializedItems)})";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		String_t* L_15;
		L_15 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, L_15, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return L_16;
	}
}
// System.Void QFSW.QC.Serializers.ITupleSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITupleSerializer__ctor_m4D28E5DA369DE81969272006C491ED6552C4F7A9 (ITupleSerializer_tDB50E570BA2EBA8A3E57D471F2D1B380E673B08B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolymorphicQcSerializer_1__ctor_m3A9F4CA918484590AD5F4F14663D99E5C5B349C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PolymorphicQcSerializer_1__ctor_m3A9F4CA918484590AD5F4F14663D99E5C5B349C3(__this, PolymorphicQcSerializer_1__ctor_m3A9F4CA918484590AD5F4F14663D99E5C5B349C3_RuntimeMethod_var);
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
// System.Type QFSW.QC.Serializers.KeyValuePairSerializer::get_GenericType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* KeyValuePairSerializer_get_GenericType_m0FA4D98D0A1FDFBFBF5AF7615FDD3009280A6A1B (KeyValuePairSerializer_t11A352364C10613404B014F2A2E3AB45287B4BAD* __this, const RuntimeMethod* method) 
{
	{
		// protected override Type GenericType { get; } = typeof(KeyValuePair<,>);
		Type_t* L_0 = __this->___U3CGenericTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String QFSW.QC.Serializers.KeyValuePairSerializer::SerializeFormatted(System.Object,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyValuePairSerializer_SerializeFormatted_mFE8EA9769D8107821B75CE009BC4782C9C6262FC (KeyValuePairSerializer_t11A352364C10613404B014F2A2E3AB45287B4BAD* __this, RuntimeObject* ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB312BF20831D0F69AAD305FC2379BE6FA7FA7163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8F36CF56D819CDD99C6A0D1D03CB579B8C7F4D92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mAD13B7443C10EB13729DF6B143308C01C53FAFCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	PropertyInfo_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// Type type = value.GetType();
		RuntimeObject* L_0 = ___value0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		V_0 = L_1;
		// if (_keyPropertyLookup.ContainsKey(type))
		Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* L_2 = __this->____keyPropertyLookup_2;
		Type_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mB312BF20831D0F69AAD305FC2379BE6FA7FA7163(L_2, L_3, Dictionary_2_ContainsKey_mB312BF20831D0F69AAD305FC2379BE6FA7FA7163_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// keyProperty = _keyPropertyLookup[type];
		Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* L_5 = __this->____keyPropertyLookup_2;
		Type_t* L_6 = V_0;
		NullCheck(L_5);
		PropertyInfo_t* L_7;
		L_7 = Dictionary_2_get_Item_m8F36CF56D819CDD99C6A0D1D03CB579B8C7F4D92(L_5, L_6, Dictionary_2_get_Item_m8F36CF56D819CDD99C6A0D1D03CB579B8C7F4D92_RuntimeMethod_var);
		V_1 = L_7;
		goto IL_003d;
	}

IL_0024:
	{
		// keyProperty = type.GetProperty("Key");
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		PropertyInfo_t* L_9;
		L_9 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_8, _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, NULL);
		V_1 = L_9;
		// _keyPropertyLookup[type] = keyProperty;
		Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* L_10 = __this->____keyPropertyLookup_2;
		Type_t* L_11 = V_0;
		PropertyInfo_t* L_12 = V_1;
		NullCheck(L_10);
		Dictionary_2_set_Item_mAD13B7443C10EB13729DF6B143308C01C53FAFCC(L_10, L_11, L_12, Dictionary_2_set_Item_mAD13B7443C10EB13729DF6B143308C01C53FAFCC_RuntimeMethod_var);
	}

IL_003d:
	{
		// if (_valuePropertyLookup.ContainsKey(type))
		Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* L_13 = __this->____valuePropertyLookup_3;
		Type_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15;
		L_15 = Dictionary_2_ContainsKey_mB312BF20831D0F69AAD305FC2379BE6FA7FA7163(L_13, L_14, Dictionary_2_ContainsKey_mB312BF20831D0F69AAD305FC2379BE6FA7FA7163_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_005a;
		}
	}
	{
		// valueProperty = _valuePropertyLookup[type];
		Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* L_16 = __this->____valuePropertyLookup_3;
		Type_t* L_17 = V_0;
		NullCheck(L_16);
		PropertyInfo_t* L_18;
		L_18 = Dictionary_2_get_Item_m8F36CF56D819CDD99C6A0D1D03CB579B8C7F4D92(L_16, L_17, Dictionary_2_get_Item_m8F36CF56D819CDD99C6A0D1D03CB579B8C7F4D92_RuntimeMethod_var);
		V_2 = L_18;
		goto IL_0073;
	}

IL_005a:
	{
		// valueProperty = type.GetProperty("Value");
		Type_t* L_19 = V_0;
		NullCheck(L_19);
		PropertyInfo_t* L_20;
		L_20 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_19, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, NULL);
		V_2 = L_20;
		// _valuePropertyLookup[type] = valueProperty;
		Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* L_21 = __this->____valuePropertyLookup_3;
		Type_t* L_22 = V_0;
		PropertyInfo_t* L_23 = V_2;
		NullCheck(L_21);
		Dictionary_2_set_Item_mAD13B7443C10EB13729DF6B143308C01C53FAFCC(L_21, L_22, L_23, Dictionary_2_set_Item_mAD13B7443C10EB13729DF6B143308C01C53FAFCC_RuntimeMethod_var);
	}

IL_0073:
	{
		// string innerKey = SerializeRecursive(keyProperty.GetValue(value, null), theme);
		PropertyInfo_t* L_24 = V_1;
		RuntimeObject* L_25 = ___value0;
		NullCheck(L_24);
		RuntimeObject* L_26;
		L_26 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_24, L_25, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* L_27 = ___theme1;
		String_t* L_28;
		L_28 = GenericQcSerializer_SerializeRecursive_m0E0AF6963A98E8E6245C999AAABC793A314AE31E(__this, L_26, L_27, NULL);
		// string innerValue = SerializeRecursive(valueProperty.GetValue(value, null), theme);
		PropertyInfo_t* L_29 = V_2;
		RuntimeObject* L_30 = ___value0;
		NullCheck(L_29);
		RuntimeObject* L_31;
		L_31 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_29, L_30, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* L_32 = ___theme1;
		String_t* L_33;
		L_33 = GenericQcSerializer_SerializeRecursive_m0E0AF6963A98E8E6245C999AAABC793A314AE31E(__this, L_31, L_32, NULL);
		V_3 = L_33;
		// return $"{innerKey}: {innerValue}";
		String_t* L_34 = V_3;
		String_t* L_35;
		L_35 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_28, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_34, NULL);
		return L_35;
	}
}
// System.Void QFSW.QC.Serializers.KeyValuePairSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePairSerializer__ctor_mA731D231520BC08C41FEF99CFB6298D1DD62118F (KeyValuePairSerializer_t11A352364C10613404B014F2A2E3AB45287B4BAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDB2D627136E5C4A957F94C6E141F7D8A76903436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override Type GenericType { get; } = typeof(KeyValuePair<,>);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		__this->___U3CGenericTypeU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGenericTypeU3Ek__BackingField_1), (void*)L_1);
		// private readonly Dictionary<Type, PropertyInfo> _keyPropertyLookup = new Dictionary<Type, PropertyInfo>();
		Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* L_2 = (Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD*)il2cpp_codegen_object_new(Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mDB2D627136E5C4A957F94C6E141F7D8A76903436(L_2, Dictionary_2__ctor_mDB2D627136E5C4A957F94C6E141F7D8A76903436_RuntimeMethod_var);
		__this->____keyPropertyLookup_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyPropertyLookup_2), (void*)L_2);
		// private readonly Dictionary<Type, PropertyInfo> _valuePropertyLookup = new Dictionary<Type, PropertyInfo>();
		Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD* L_3 = (Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD*)il2cpp_codegen_object_new(Dictionary_2_t77876EDFF6DAA553D8F7AB6AB2370999E8090BAD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mDB2D627136E5C4A957F94C6E141F7D8A76903436(L_3, Dictionary_2__ctor_mDB2D627136E5C4A957F94C6E141F7D8A76903436_RuntimeMethod_var);
		__this->____valuePropertyLookup_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____valuePropertyLookup_3), (void*)L_3);
		GenericQcSerializer__ctor_m67AD799E92DDE54D338F37BE266A2BCED93377E3(__this, NULL);
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
// System.Int32 QFSW.QC.Serializers.StringSerializer::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringSerializer_get_Priority_mB59CF3358F7848CBAB37FEA755B5ACE68DE23D2B (StringSerializer_t16CF641FEB901C4D0A4A2D00412873AF1377004E* __this, const RuntimeMethod* method) 
{
	{
		// public override int Priority => int.MaxValue;
		return ((int32_t)2147483647LL);
	}
}
// System.String QFSW.QC.Serializers.StringSerializer::SerializeFormatted(System.String,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringSerializer_SerializeFormatted_mDCF59D95EBDF86224A3DAA9A17EC268AB1445C58 (StringSerializer_t16CF641FEB901C4D0A4A2D00412873AF1377004E* __this, String_t* ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) 
{
	{
		// return value;
		String_t* L_0 = ___value0;
		return L_0;
	}
}
// System.Void QFSW.QC.Serializers.StringSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringSerializer__ctor_m15B6F78761B04314DB19375AE7F6176DC3161D52 (StringSerializer_t16CF641FEB901C4D0A4A2D00412873AF1377004E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_mC60D744164DA1A224F8745BE8CCCB5C51347A239_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_mC60D744164DA1A224F8745BE8CCCB5C51347A239(__this, BasicQcSerializer_1__ctor_mC60D744164DA1A224F8745BE8CCCB5C51347A239_RuntimeMethod_var);
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
// System.String QFSW.QC.Serializers.TypeSerialiazer::SerializeFormatted(System.Type,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeSerialiazer_SerializeFormatted_m0AC0DA1DA32ADF11668D197B5716B548E763DDC6 (TypeSerialiazer_tCC8CF66050BD4AF8BA28DE18ECA1FBFE862E2CAC* __this, Type_t* ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionExtensions_t4EC544219FF36656B78916C7133D3B0780AF9B7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return value.GetDisplayName();
		Type_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(ReflectionExtensions_t4EC544219FF36656B78916C7133D3B0780AF9B7B_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ReflectionExtensions_GetDisplayName_m9D2B70244E47902D4168043E590D180C7521F180(L_0, NULL);
		return L_1;
	}
}
// System.Void QFSW.QC.Serializers.TypeSerialiazer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeSerialiazer__ctor_m2AFF88A73E4D27B521D4E9C68C4C4C8F2073E838 (TypeSerialiazer_tCC8CF66050BD4AF8BA28DE18ECA1FBFE862E2CAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolymorphicQcSerializer_1__ctor_m7B70EFAADC0BF546E527C26ACED7C4BBF4940E07_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PolymorphicQcSerializer_1__ctor_m7B70EFAADC0BF546E527C26ACED7C4BBF4940E07(__this, PolymorphicQcSerializer_1__ctor_m7B70EFAADC0BF546E527C26ACED7C4BBF4940E07_RuntimeMethod_var);
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
// System.String QFSW.QC.Serializers.UnityObjectSerializer::SerializeFormatted(UnityEngine.Object,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityObjectSerializer_SerializeFormatted_m847CCE62E1C3447EA7FAEB1A7055EBF4DA752B05 (UnityObjectSerializer_tCACECC75A30D799ABF96E749EE5A1C858C0B72D9* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) 
{
	{
		// return value.name;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		return L_1;
	}
}
// System.Void QFSW.QC.Serializers.UnityObjectSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectSerializer__ctor_mC3C78E9747D32E6A4C732B548CC17F812896F634 (UnityObjectSerializer_tCACECC75A30D799ABF96E749EE5A1C858C0B72D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolymorphicQcSerializer_1__ctor_mBAE454DDCF4BA353D7477728CA3DE5D9B813B5DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PolymorphicQcSerializer_1__ctor_mBAE454DDCF4BA353D7477728CA3DE5D9B813B5DB(__this, PolymorphicQcSerializer_1__ctor_mBAE454DDCF4BA353D7477728CA3DE5D9B813B5DB_RuntimeMethod_var);
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
// System.String QFSW.QC.Serializers.Vector2IntSerializer::SerializeFormatted(UnityEngine.Vector2Int,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2IntSerializer_SerializeFormatted_mEDBEFEB6EC967EF48465A35FCD74783FA444F6A1 (Vector2IntSerializer_t3BD4853F38D002AE19A5C0A757EF094B5AF0DFE6* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"({value.x}, {value.y})";
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___value0), NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___value0), NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_2, L_5, NULL);
		return L_6;
	}
}
// System.Void QFSW.QC.Serializers.Vector2IntSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntSerializer__ctor_mB40CB196A16FA8D237FC7E184E1FB6907F3B9941 (Vector2IntSerializer_t3BD4853F38D002AE19A5C0A757EF094B5AF0DFE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_mAE5FDC2244FB106F2B5D1572B8E37DCCFC238504_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_mAE5FDC2244FB106F2B5D1572B8E37DCCFC238504(__this, BasicQcSerializer_1__ctor_mAE5FDC2244FB106F2B5D1572B8E37DCCFC238504_RuntimeMethod_var);
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
// System.String QFSW.QC.Serializers.Vector2Serializer::SerializeFormatted(UnityEngine.Vector2,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2Serializer_SerializeFormatted_m090B03EB925959FBB4179DF8FAFA6CB169931CB3 (Vector2Serializer_tE6CB761E9DC387B21F6F1C36CED2F2CC94393715* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"({value.x}, {value.y})";
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		float L_1 = L_0.___x_0;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___value0;
		float L_5 = L_4.___y_1;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_3, L_7, NULL);
		return L_8;
	}
}
// System.Void QFSW.QC.Serializers.Vector2Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Serializer__ctor_m5BA3EBACB393310B239854F797A113B13C4D5554 (Vector2Serializer_tE6CB761E9DC387B21F6F1C36CED2F2CC94393715* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_mC1D86FD1515D7C92E17B0CF0364FD071BCD0794E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_mC1D86FD1515D7C92E17B0CF0364FD071BCD0794E(__this, BasicQcSerializer_1__ctor_mC1D86FD1515D7C92E17B0CF0364FD071BCD0794E_RuntimeMethod_var);
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
// System.String QFSW.QC.Serializers.Vector3IntSerializer::SerializeFormatted(UnityEngine.Vector3Int,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3IntSerializer_SerializeFormatted_m435DF06248AC63044BDEF75AD9F431A2EA22F352 (Vector3IntSerializer_t943AD61CB48BC221D7C994C46D195FDD6C826655* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"({value.x}, {value.y}, {value.z})";
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___value0), NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___value0), NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6;
		L_6 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___value0), NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
// System.Void QFSW.QC.Serializers.Vector3IntSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntSerializer__ctor_mD0AEC6EEAC14C3676D7F518C9643925A5E7AD642 (Vector3IntSerializer_t943AD61CB48BC221D7C994C46D195FDD6C826655* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_m213426DC6C518FB9C7FB0EFF7935AAF37BCE0B25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_m213426DC6C518FB9C7FB0EFF7935AAF37BCE0B25(__this, BasicQcSerializer_1__ctor_m213426DC6C518FB9C7FB0EFF7935AAF37BCE0B25_RuntimeMethod_var);
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
// System.String QFSW.QC.Serializers.Vector3Serializer::SerializeFormatted(UnityEngine.Vector3,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3Serializer_SerializeFormatted_m3A6B45F59488520F29783965C939730D8E3F4931 (Vector3Serializer_t577925409165A6A5E9F1E36111DF8A3A6945E10E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"({value.x}, {value.y}, {value.z})";
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1 = L_0.___x_2;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = L_4.___y_3;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___value0;
		float L_9 = L_8.___z_4;
		float L_10 = L_9;
		RuntimeObject* L_11 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E, L_3, L_7, L_11, NULL);
		return L_12;
	}
}
// System.Void QFSW.QC.Serializers.Vector3Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Serializer__ctor_m67AEDD6E68AE3338F84B48DA91AEC5FAFD689961 (Vector3Serializer_t577925409165A6A5E9F1E36111DF8A3A6945E10E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_m4FB85D4FFA6C8AADEBF740F5B299C62F50A65A43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_m4FB85D4FFA6C8AADEBF740F5B299C62F50A65A43(__this, BasicQcSerializer_1__ctor_m4FB85D4FFA6C8AADEBF740F5B299C62F50A65A43_RuntimeMethod_var);
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
// System.String QFSW.QC.Serializers.Vector4Serializer::SerializeFormatted(UnityEngine.Vector4,QFSW.QC.QuantumTheme)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4Serializer_SerializeFormatted_m155D898A819BB9AC3A346F079D73D0451E00FF4B (Vector4Serializer_t137FD5B8640D3D97AD83C7002C20349C236E5FF1* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value0, QuantumTheme_t4ADF21F4B0C3F5ECDC02A571F2C95B77AA6B0AB6* ___theme1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"({value.x}, {value.y}, {value.z}, {value.w})";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___value0;
		float L_3 = L_2.___x_1;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = ___value0;
		float L_8 = L_7.___y_2;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___value0;
		float L_13 = L_12.___z_3;
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_11;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = ___value0;
		float L_18 = L_17.___w_4;
		float L_19 = L_18;
		RuntimeObject* L_20 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05, L_16, NULL);
		return L_21;
	}
}
// System.Void QFSW.QC.Serializers.Vector4Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Serializer__ctor_mF1242747FCDC5C861A7E894DBB4A31E6D2CDE751 (Vector4Serializer_t137FD5B8640D3D97AD83C7002C20349C236E5FF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicQcSerializer_1__ctor_mC1528FB6C38D3F712460BDE2790EDCE8A10DF922_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicQcSerializer_1__ctor_mC1528FB6C38D3F712460BDE2790EDCE8A10DF922(__this, BasicQcSerializer_1__ctor_mC1528FB6C38D3F712460BDE2790EDCE8A10DF922_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
