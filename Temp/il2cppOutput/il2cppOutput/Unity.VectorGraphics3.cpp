#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/Entry<Unity.VectorGraphics.SceneNode,System.Single>[]
struct EntryU5BU5D_t366266A40868AF040675C17CC0AF8A2C74E079C3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.VectorGraphics.SceneNode,System.Single>
struct KeyCollection_t28B5BB8553A08CEED87284321F253F25944ECEB0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.VectorGraphics.SceneNode,System.Single>
struct ValueCollection_t0B3A18A90A2E5C1D7B1EDB5B451A2604615EC28A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t7ED33C50131CAB8897963C9BCD19DF15A695E42C;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single>
struct Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774;
// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.BezierPathSegment>
struct IEnumerable_1_tEF4AB166C3223A550C3DBB672CF2B95BD172EF8B;
// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.SceneNode>
struct IEnumerable_1_tEC9E59FA177280B56639F9C0373B6E79CF6C948B;
// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform>
struct IEnumerable_1_tDCB9E1093E0F48D7D66D0F4EFF0BDC65DA6D4E30;
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierPathSegment>
struct IEnumerator_1_t1B957D27CF87495D8F8585748F41B08631E19B6D;
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierSegment>
struct IEnumerator_1_tFC26ED5DC3BC4C9583DACB08EE84090148052B6B;
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.SceneNode>
struct IEnumerator_1_t6FBBD0D8135E6B300AD8F8709F318EE4653FE95C;
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform>
struct IEnumerator_1_tFDA74BA0871756FEBB05BB8E8861C4D551E2D980;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IEqualityComparer`1<Unity.VectorGraphics.SceneNode>
struct IEqualityComparer_1_tD307B171721E3647B33E2CC78FBDE2F594171D1C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<Unity.VectorGraphics.SceneNode>
struct List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22;
// System.Collections.Generic.List`1<Unity.VectorGraphics.Shape>
struct List_1_t8D2C7A7ED3D01A6374A9BF92DB5DA418DD55ED3F;
// System.Collections.Generic.List`1<Unity.VectorGraphics.VectorUtils/PackRectItem>
struct List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,Unity.VectorGraphics.VectorUtils/AtlasEntry>,System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,UnityEngine.Vector2>>
struct Func_2_t94A1F907B95A556B047F38896C3E9D9AFDBE9AF9;
// System.Func`2<System.Double,System.Single>
struct Func_2_tBF82A5403489C9D6B1EE70D0FD77F0F78454AF1F;
// System.Func`2<System.Int32,System.UInt16>
struct Func_2_t72F1AEF8CF4C5F0895C91D4402990134F1BDBE8B;
// System.Func`2<System.UInt16,System.Int32>
struct Func_2_t9FA37221E9BDE36FB26ABA5A3F493C6D54F170F9;
// System.Func`2<Unity.VectorGraphics.VectorUtils/Geometry,System.Boolean>
struct Func_2_t76A7DD3B9F4AEE4AAA211FDB5A6D5244E9EDFA5B;
// System.Func`2<UnityEngine.Color,UnityEngine.Color32>
struct Func_2_t417747A77645C888B44DD010E71E609172AA4121;
// System.Func`2<UnityEngine.Color32,UnityEngine.Color>
struct Func_2_tB5268C3B2D50B8A351BE91E705A743CF88844ABA;
// System.Func`2<UnityEngine.Vector2,Unity.VectorGraphics.External.LibTessDotNet.ContourVertex>
struct Func_2_tC4BD8AE3300766626D7B0B710B4380C8C772F82C;
// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2>
struct Func_2_t1ADF98337D9BE371EDB780AD21B0818D42BCA45A;
// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector3>
struct Func_2_tC571C7373D67F557B1D59870AF0831685E0CC2FC;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Predicate`1<System.Double>
struct Predicate_1_t74DCB206DEBC64B4BE6038D6103186B11CC820D2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.Xml.XmlReader
struct XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB;
// Unity.VectorGraphics.IFill
struct IFill_t7F43772BF5E69F9343B354DD6C1E9D4BAC62CA93;
// Unity.VectorGraphics.SVGFormatException
struct SVGFormatException_tA618F278F4913ED5EEEBA01AE80B7AEB859F1C35;
// Unity.VectorGraphics.SVGPropertySheet
struct SVGPropertySheet_t3A460AFD6333BE9BB1A6515B17660A20C2D9B987;
// Unity.VectorGraphics.SceneNode
struct SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343;
// Unity.VectorGraphics.SceneNode[]
struct SceneNodeU5BU5D_t761B8ED9DEFB7AB1B86CEFA196AC6A10B137DC13;
// Unity.VectorGraphics.VectorUtils/<>c
struct U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9;
// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t8B1FA7F39042201B677AEC3AFD14345DD0119090;
// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tD0FDA585737BF89248818C9C57454BE7273FDB1D;
// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tCF05EDA889E736D46F8AB9C59869A37191527104;
// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_1
struct U3CU3Ec__DisplayClass36_1_tA55D9DBAC0542BD2AC6B2D0EAAE29CD6D0CBEFD3;
// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_2
struct U3CU3Ec__DisplayClass36_2_t863677BB7E433238A9ABDD011B0DBF6F75F839EB;
// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_tCC05A92095004738962F220238DAD6187810D0AF;
// Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99
struct U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0;
// Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106
struct U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0;
// Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101
struct U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713;
// Unity.VectorGraphics.VectorUtils/AtlasEntry
struct AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290;
// Unity.VectorGraphics.VectorUtils/Geometry
struct Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF;
// Unity.VectorGraphics.VectorUtils/JoiningInfo
struct JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4;
// Unity.VectorGraphics.VectorUtils/PackRectItem[]
struct PackRectItemU5BU5D_t875CF71D68C3CFC97D7CC2A33642708F7B3389CB;
// Unity.VectorGraphics.VectorUtils/TextureAtlas
struct TextureAtlas_tA4F8A64BE48A02D9F87753643ED5E59A84D81043;
// Unity.VectorGraphics.XmlReaderIterator
struct XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9;
// Unity.VectorGraphics.XmlReaderIterator/Node
struct Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;

IL2CPP_EXTERN_C RuntimeClass* BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tDCB9E1093E0F48D7D66D0F4EFF0BDC65DA6D4E30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tEC9E59FA177280B56639F9C0373B6E79CF6C948B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tEF4AB166C3223A550C3DBB672CF2B95BD172EF8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1B957D27CF87495D8F8585748F41B08631E19B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6FBBD0D8135E6B300AD8F8709F318EE4653FE95C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tFDA74BA0871756FEBB05BB8E8861C4D551E2D980_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix2D_tA940BD215BB784A62583F804540766595258C337_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SVGFormatException_tA618F278F4913ED5EEEBA01AE80B7AEB859F1C35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SVGPropertySheet_t3A460AFD6333BE9BB1A6515B17660A20C2D9B987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral7A3DC4DE60A2C9A65C32B49B9276B7BCC54764B2;
IL2CPP_EXTERN_C String_t* _stringLiteral952F591CE06D904FF69AD52282C6739282D79F5E;
IL2CPP_EXTERN_C String_t* _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mBE88F6DB40CF1FDD904C2A6DA8CE3761EDC2CC88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisBezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250_mFC36756FBDA86184830A5257EC7C8B509ACD7DFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m075182691E31A53C8CED4ACDD7BDFA64F4F7F7A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF6E3C2BB30B10164647E8AEFCBA08FEC3908B54C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m29CC0D0B35A7C83D8800AFF36E657AD8EE6AB194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mF4F8F57DD4F2EA4179B2C4C5117D7DB2198F408D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mAB6DE89E071A7D027E92BEDB3351C3735675DDBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m17FE8D22769DEEF7842D748F9AACA25640CE8965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m26D13DC6F1E13F98D293CD5EE7321FFC886605A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSceneNodesU3Ed__99_System_Collections_IEnumerator_Reset_m265260D4D579E55049FAC2ABB90664B5496E8EA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerator_Reset_mBE0E51CA8D7138EF9E2217F71D5CCD17A0840440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerator_Reset_mE42031565EDB2B08CAC0A2476E33E4EC4B1ACE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Node_GetAttributes_m8D4C154B1124950C5A8BCD88926E3475B1D761DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Node_GetException_mCB30EC191BB48E6BAEFCA0B772504FBDECD27037_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Node_GetUnsupportedAttribValException_mA198B6B4B8158C4E1A20A2C2CAA29E59ED2BC8EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TessellationOptions_set_MaxCordDeviation_m9630214E1769FABC4A824A993990446C6977AB5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TessellationOptions_set_MaxTanAngleDeviation_m33D30910F706902B28FC6D3AE6BE0DCDE9AFC2AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TessellationOptions_set_SamplingStepSize_mB05E34C170857DF81143E3E9A016779C1005FC79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSceneNodesU3Ed__99_MoveNext_m390C6241DA70F56881D6BD08B8DD5F542D6F10D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSceneNodesU3Ed__99_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_SceneNodeU3E_GetEnumerator_mCC6639AB5372FA758F5BF4DA5EBB600FB7A2D6B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSceneNodesU3Ed__99_System_Collections_IEnumerator_Reset_m265260D4D579E55049FAC2ABB90664B5496E8EA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSceneNodesU3Ed__99_U3CU3Em__Finally1_mBF3E4BBC82A81E8EE6DA8F1CAB5A40B9A3FB75A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSceneNodesU3Ed__99_U3CU3Em__Finally2_m67AA436A5FF38D2EEA8B89CD9395ABB7634A4286_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSegmentsInPathU3Ed__106_MoveNext_m71616C729429A8EEC83116742440E0896C23E86D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSegmentsInPathU3Ed__106_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_BezierSegmentU3E_GetEnumerator_mCD984426A7B9E18CDCF1422485A76623CF7D9FC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerator_Reset_mBE0E51CA8D7138EF9E2217F71D5CCD17A0840440_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerator_get_Current_mCD79EBBEBA4F15411FF733CAD5218F4A45EABF48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CCubicRootsU3Eb__112_0_m5DEA9C9B84FC18B559B6B4726112A0E715F55BCC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CFillMeshU3Eb__34_1_mAECE028A28EA8696C6CE0B7A73BDF244B89703D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CGenerateAtlasU3Eb__28_0_m5FDA557D242439D2C9F175E8CE4252B3A1C00D25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass17_0_U3CTraceNodeHierarchyShapesU3Eb__0_m1C35BC0BC1DA3EB5B6550A64D68B33403300245A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass36_1_U3CFillVertexChannelsU3Eb__1_m1A701477B9729E7F8592319A9D33153A51E175CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mBAF8E9B73375AE24E4D6EF403C1E92566B927B9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWorldTransformedSceneNodesU3Ed__101_MoveNext_m1455B5140E2587BEC224D5D6D6690CF310A11E0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_VectorUtils_SceneNodeWorldTransformU3E_GetEnumerator_m95BAF396EEA2DF5DE6C55D60A9AD7BB1305754B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerator_Reset_mE42031565EDB2B08CAC0A2476E33E4EC4B1ACE15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerator_get_Current_mF0A52D438540F4FB244FD014CAA81F15984EA1D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally1_m9ABD30AF4BBAF64CB2363F800CEC212E334AF5EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally2_mAD7F2998CB0E26522E27DA68E67FF616E59C1EE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlReaderIterator_ReadTextWithinElement_m048ACC696E6F60F392807282ED2949A1D56E6053_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XmlReaderIterator_VisitCurrent_m2383103EE93711321383B46268DACB5DA99146AB_MetadataUsageId;
struct Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single>
struct Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t366266A40868AF040675C17CC0AF8A2C74E079C3* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t28B5BB8553A08CEED87284321F253F25944ECEB0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0B3A18A90A2E5C1D7B1EDB5B451A2604615EC28A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774, ___entries_1)); }
	inline EntryU5BU5D_t366266A40868AF040675C17CC0AF8A2C74E079C3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t366266A40868AF040675C17CC0AF8A2C74E079C3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t366266A40868AF040675C17CC0AF8A2C74E079C3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774, ___keys_7)); }
	inline KeyCollection_t28B5BB8553A08CEED87284321F253F25944ECEB0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t28B5BB8553A08CEED87284321F253F25944ECEB0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t28B5BB8553A08CEED87284321F253F25944ECEB0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774, ___values_8)); }
	inline ValueCollection_t0B3A18A90A2E5C1D7B1EDB5B451A2604615EC28A * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0B3A18A90A2E5C1D7B1EDB5B451A2604615EC28A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0B3A18A90A2E5C1D7B1EDB5B451A2604615EC28A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.VectorGraphics.SceneNode>
struct List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SceneNodeU5BU5D_t761B8ED9DEFB7AB1B86CEFA196AC6A10B137DC13* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22, ____items_1)); }
	inline SceneNodeU5BU5D_t761B8ED9DEFB7AB1B86CEFA196AC6A10B137DC13* get__items_1() const { return ____items_1; }
	inline SceneNodeU5BU5D_t761B8ED9DEFB7AB1B86CEFA196AC6A10B137DC13** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SceneNodeU5BU5D_t761B8ED9DEFB7AB1B86CEFA196AC6A10B137DC13* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SceneNodeU5BU5D_t761B8ED9DEFB7AB1B86CEFA196AC6A10B137DC13* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22_StaticFields, ____emptyArray_5)); }
	inline SceneNodeU5BU5D_t761B8ED9DEFB7AB1B86CEFA196AC6A10B137DC13* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SceneNodeU5BU5D_t761B8ED9DEFB7AB1B86CEFA196AC6A10B137DC13** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SceneNodeU5BU5D_t761B8ED9DEFB7AB1B86CEFA196AC6A10B137DC13* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.VectorGraphics.VectorUtils/PackRectItem>
struct List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PackRectItemU5BU5D_t875CF71D68C3CFC97D7CC2A33642708F7B3389CB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A, ____items_1)); }
	inline PackRectItemU5BU5D_t875CF71D68C3CFC97D7CC2A33642708F7B3389CB* get__items_1() const { return ____items_1; }
	inline PackRectItemU5BU5D_t875CF71D68C3CFC97D7CC2A33642708F7B3389CB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PackRectItemU5BU5D_t875CF71D68C3CFC97D7CC2A33642708F7B3389CB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PackRectItemU5BU5D_t875CF71D68C3CFC97D7CC2A33642708F7B3389CB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A_StaticFields, ____emptyArray_5)); }
	inline PackRectItemU5BU5D_t875CF71D68C3CFC97D7CC2A33642708F7B3389CB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PackRectItemU5BU5D_t875CF71D68C3CFC97D7CC2A33642708F7B3389CB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PackRectItemU5BU5D_t875CF71D68C3CFC97D7CC2A33642708F7B3389CB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Xml.XmlReader
struct XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB  : public RuntimeObject
{
public:

public:
};

struct XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_StaticFields
{
public:
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;

public:
	inline static int32_t get_offset_of_IsTextualNodeBitmap_0() { return static_cast<int32_t>(offsetof(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_StaticFields, ___IsTextualNodeBitmap_0)); }
	inline uint32_t get_IsTextualNodeBitmap_0() const { return ___IsTextualNodeBitmap_0; }
	inline uint32_t* get_address_of_IsTextualNodeBitmap_0() { return &___IsTextualNodeBitmap_0; }
	inline void set_IsTextualNodeBitmap_0(uint32_t value)
	{
		___IsTextualNodeBitmap_0 = value;
	}

	inline static int32_t get_offset_of_CanReadContentAsBitmap_1() { return static_cast<int32_t>(offsetof(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_StaticFields, ___CanReadContentAsBitmap_1)); }
	inline uint32_t get_CanReadContentAsBitmap_1() const { return ___CanReadContentAsBitmap_1; }
	inline uint32_t* get_address_of_CanReadContentAsBitmap_1() { return &___CanReadContentAsBitmap_1; }
	inline void set_CanReadContentAsBitmap_1(uint32_t value)
	{
		___CanReadContentAsBitmap_1 = value;
	}

	inline static int32_t get_offset_of_HasValueBitmap_2() { return static_cast<int32_t>(offsetof(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB_StaticFields, ___HasValueBitmap_2)); }
	inline uint32_t get_HasValueBitmap_2() const { return ___HasValueBitmap_2; }
	inline uint32_t* get_address_of_HasValueBitmap_2() { return &___HasValueBitmap_2; }
	inline void set_HasValueBitmap_2(uint32_t value)
	{
		___HasValueBitmap_2 = value;
	}
};


// Unity.VectorGraphics.VectorUtils
struct VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1  : public RuntimeObject
{
public:

public:
};

struct VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_StaticFields
{
public:
	// UnityEngine.Material Unity.VectorGraphics.VectorUtils::s_ExpandEdgesMat
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ExpandEdgesMat_0;
	// System.Single Unity.VectorGraphics.VectorUtils::Epsilon
	float ___Epsilon_1;

public:
	inline static int32_t get_offset_of_s_ExpandEdgesMat_0() { return static_cast<int32_t>(offsetof(VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_StaticFields, ___s_ExpandEdgesMat_0)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ExpandEdgesMat_0() const { return ___s_ExpandEdgesMat_0; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ExpandEdgesMat_0() { return &___s_ExpandEdgesMat_0; }
	inline void set_s_ExpandEdgesMat_0(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ExpandEdgesMat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ExpandEdgesMat_0), (void*)value);
	}

	inline static int32_t get_offset_of_Epsilon_1() { return static_cast<int32_t>(offsetof(VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_StaticFields, ___Epsilon_1)); }
	inline float get_Epsilon_1() const { return ___Epsilon_1; }
	inline float* get_address_of_Epsilon_1() { return &___Epsilon_1; }
	inline void set_Epsilon_1(float value)
	{
		___Epsilon_1 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/<>c
struct U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields
{
public:
	// Unity.VectorGraphics.VectorUtils/<>c Unity.VectorGraphics.VectorUtils/<>c::<>9
	U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Vector2,Unity.VectorGraphics.External.LibTessDotNet.ContourVertex> Unity.VectorGraphics.VectorUtils/<>c::<>9__20_2
	Func_2_tC4BD8AE3300766626D7B0B710B4380C8C772F82C * ___U3CU3E9__20_2_1;
	// System.Func`2<System.Int32,System.UInt16> Unity.VectorGraphics.VectorUtils/<>c::<>9__20_0
	Func_2_t72F1AEF8CF4C5F0895C91D4402990134F1BDBE8B * ___U3CU3E9__20_0_2;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,Unity.VectorGraphics.VectorUtils/AtlasEntry>,System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,UnityEngine.Vector2>> Unity.VectorGraphics.VectorUtils/<>c::<>9__28_0
	Func_2_t94A1F907B95A556B047F38896C3E9D9AFDBE9AF9 * ___U3CU3E9__28_0_3;
	// System.Func`2<UnityEngine.Color,UnityEngine.Color32> Unity.VectorGraphics.VectorUtils/<>c::<>9__33_0
	Func_2_t417747A77645C888B44DD010E71E609172AA4121 * ___U3CU3E9__33_0_4;
	// System.Func`2<Unity.VectorGraphics.VectorUtils/Geometry,System.Boolean> Unity.VectorGraphics.VectorUtils/<>c::<>9__34_0
	Func_2_t76A7DD3B9F4AEE4AAA211FDB5A6D5244E9EDFA5B * ___U3CU3E9__34_0_5;
	// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector3> Unity.VectorGraphics.VectorUtils/<>c::<>9__34_1
	Func_2_tC571C7373D67F557B1D59870AF0831685E0CC2FC * ___U3CU3E9__34_1_6;
	// System.Func`2<System.UInt16,System.Int32> Unity.VectorGraphics.VectorUtils/<>c::<>9__34_2
	Func_2_t9FA37221E9BDE36FB26ABA5A3F493C6D54F170F9 * ___U3CU3E9__34_2_7;
	// System.Func`2<UnityEngine.Color32,UnityEngine.Color> Unity.VectorGraphics.VectorUtils/<>c::<>9__41_1
	Func_2_tB5268C3B2D50B8A351BE91E705A743CF88844ABA * ___U3CU3E9__41_1_8;
	// System.Predicate`1<System.Double> Unity.VectorGraphics.VectorUtils/<>c::<>9__112_0
	Predicate_1_t74DCB206DEBC64B4BE6038D6103186B11CC820D2 * ___U3CU3E9__112_0_9;
	// System.Func`2<System.Double,System.Single> Unity.VectorGraphics.VectorUtils/<>c::<>9__112_1
	Func_2_tBF82A5403489C9D6B1EE70D0FD77F0F78454AF1F * ___U3CU3E9__112_1_10;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields, ___U3CU3E9__20_2_1)); }
	inline Func_2_tC4BD8AE3300766626D7B0B710B4380C8C772F82C * get_U3CU3E9__20_2_1() const { return ___U3CU3E9__20_2_1; }
	inline Func_2_tC4BD8AE3300766626D7B0B710B4380C8C772F82C ** get_address_of_U3CU3E9__20_2_1() { return &___U3CU3E9__20_2_1; }
	inline void set_U3CU3E9__20_2_1(Func_2_tC4BD8AE3300766626D7B0B710B4380C8C772F82C * value)
	{
		___U3CU3E9__20_2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_2_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields, ___U3CU3E9__20_0_2)); }
	inline Func_2_t72F1AEF8CF4C5F0895C91D4402990134F1BDBE8B * get_U3CU3E9__20_0_2() const { return ___U3CU3E9__20_0_2; }
	inline Func_2_t72F1AEF8CF4C5F0895C91D4402990134F1BDBE8B ** get_address_of_U3CU3E9__20_0_2() { return &___U3CU3E9__20_0_2; }
	inline void set_U3CU3E9__20_0_2(Func_2_t72F1AEF8CF4C5F0895C91D4402990134F1BDBE8B * value)
	{
		___U3CU3E9__20_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields, ___U3CU3E9__28_0_3)); }
	inline Func_2_t94A1F907B95A556B047F38896C3E9D9AFDBE9AF9 * get_U3CU3E9__28_0_3() const { return ___U3CU3E9__28_0_3; }
	inline Func_2_t94A1F907B95A556B047F38896C3E9D9AFDBE9AF9 ** get_address_of_U3CU3E9__28_0_3() { return &___U3CU3E9__28_0_3; }
	inline void set_U3CU3E9__28_0_3(Func_2_t94A1F907B95A556B047F38896C3E9D9AFDBE9AF9 * value)
	{
		___U3CU3E9__28_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__33_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields, ___U3CU3E9__33_0_4)); }
	inline Func_2_t417747A77645C888B44DD010E71E609172AA4121 * get_U3CU3E9__33_0_4() const { return ___U3CU3E9__33_0_4; }
	inline Func_2_t417747A77645C888B44DD010E71E609172AA4121 ** get_address_of_U3CU3E9__33_0_4() { return &___U3CU3E9__33_0_4; }
	inline void set_U3CU3E9__33_0_4(Func_2_t417747A77645C888B44DD010E71E609172AA4121 * value)
	{
		___U3CU3E9__33_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__33_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields, ___U3CU3E9__34_0_5)); }
	inline Func_2_t76A7DD3B9F4AEE4AAA211FDB5A6D5244E9EDFA5B * get_U3CU3E9__34_0_5() const { return ___U3CU3E9__34_0_5; }
	inline Func_2_t76A7DD3B9F4AEE4AAA211FDB5A6D5244E9EDFA5B ** get_address_of_U3CU3E9__34_0_5() { return &___U3CU3E9__34_0_5; }
	inline void set_U3CU3E9__34_0_5(Func_2_t76A7DD3B9F4AEE4AAA211FDB5A6D5244E9EDFA5B * value)
	{
		___U3CU3E9__34_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields, ___U3CU3E9__34_1_6)); }
	inline Func_2_tC571C7373D67F557B1D59870AF0831685E0CC2FC * get_U3CU3E9__34_1_6() const { return ___U3CU3E9__34_1_6; }
	inline Func_2_tC571C7373D67F557B1D59870AF0831685E0CC2FC ** get_address_of_U3CU3E9__34_1_6() { return &___U3CU3E9__34_1_6; }
	inline void set_U3CU3E9__34_1_6(Func_2_tC571C7373D67F557B1D59870AF0831685E0CC2FC * value)
	{
		___U3CU3E9__34_1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_2_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields, ___U3CU3E9__34_2_7)); }
	inline Func_2_t9FA37221E9BDE36FB26ABA5A3F493C6D54F170F9 * get_U3CU3E9__34_2_7() const { return ___U3CU3E9__34_2_7; }
	inline Func_2_t9FA37221E9BDE36FB26ABA5A3F493C6D54F170F9 ** get_address_of_U3CU3E9__34_2_7() { return &___U3CU3E9__34_2_7; }
	inline void set_U3CU3E9__34_2_7(Func_2_t9FA37221E9BDE36FB26ABA5A3F493C6D54F170F9 * value)
	{
		___U3CU3E9__34_2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_1_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields, ___U3CU3E9__41_1_8)); }
	inline Func_2_tB5268C3B2D50B8A351BE91E705A743CF88844ABA * get_U3CU3E9__41_1_8() const { return ___U3CU3E9__41_1_8; }
	inline Func_2_tB5268C3B2D50B8A351BE91E705A743CF88844ABA ** get_address_of_U3CU3E9__41_1_8() { return &___U3CU3E9__41_1_8; }
	inline void set_U3CU3E9__41_1_8(Func_2_tB5268C3B2D50B8A351BE91E705A743CF88844ABA * value)
	{
		___U3CU3E9__41_1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__112_0_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields, ___U3CU3E9__112_0_9)); }
	inline Predicate_1_t74DCB206DEBC64B4BE6038D6103186B11CC820D2 * get_U3CU3E9__112_0_9() const { return ___U3CU3E9__112_0_9; }
	inline Predicate_1_t74DCB206DEBC64B4BE6038D6103186B11CC820D2 ** get_address_of_U3CU3E9__112_0_9() { return &___U3CU3E9__112_0_9; }
	inline void set_U3CU3E9__112_0_9(Predicate_1_t74DCB206DEBC64B4BE6038D6103186B11CC820D2 * value)
	{
		___U3CU3E9__112_0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__112_0_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__112_1_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields, ___U3CU3E9__112_1_10)); }
	inline Func_2_tBF82A5403489C9D6B1EE70D0FD77F0F78454AF1F * get_U3CU3E9__112_1_10() const { return ___U3CU3E9__112_1_10; }
	inline Func_2_tBF82A5403489C9D6B1EE70D0FD77F0F78454AF1F ** get_address_of_U3CU3E9__112_1_10() { return &___U3CU3E9__112_1_10; }
	inline void set_U3CU3E9__112_1_10(Func_2_tBF82A5403489C9D6B1EE70D0FD77F0F78454AF1F * value)
	{
		___U3CU3E9__112_1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__112_1_10), (void*)value);
	}
};


// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tCF05EDA889E736D46F8AB9C59869A37191527104  : public RuntimeObject
{
public:
	// System.Single Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_0::pixelsPerUnit
	float ___pixelsPerUnit_0;

public:
	inline static int32_t get_offset_of_pixelsPerUnit_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tCF05EDA889E736D46F8AB9C59869A37191527104, ___pixelsPerUnit_0)); }
	inline float get_pixelsPerUnit_0() const { return ___pixelsPerUnit_0; }
	inline float* get_address_of_pixelsPerUnit_0() { return &___pixelsPerUnit_0; }
	inline void set_pixelsPerUnit_0(float value)
	{
		___pixelsPerUnit_0 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_1
struct U3CU3Ec__DisplayClass36_1_tA55D9DBAC0542BD2AC6B2D0EAAE29CD6D0CBEFD3  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.VectorUtils/Geometry Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_1::geom
	Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF * ___geom_0;
	// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_0 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass36_0_tCF05EDA889E736D46F8AB9C59869A37191527104 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_geom_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_1_tA55D9DBAC0542BD2AC6B2D0EAAE29CD6D0CBEFD3, ___geom_0)); }
	inline Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF * get_geom_0() const { return ___geom_0; }
	inline Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF ** get_address_of_geom_0() { return &___geom_0; }
	inline void set_geom_0(Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF * value)
	{
		___geom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___geom_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_1_tA55D9DBAC0542BD2AC6B2D0EAAE29CD6D0CBEFD3, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass36_0_tCF05EDA889E736D46F8AB9C59869A37191527104 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass36_0_tCF05EDA889E736D46F8AB9C59869A37191527104 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass36_0_tCF05EDA889E736D46F8AB9C59869A37191527104 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_2
struct U3CU3Ec__DisplayClass36_2_t863677BB7E433238A9ABDD011B0DBF6F75F839EB  : public RuntimeObject
{
public:
	// System.Int32 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_2::vertexCount
	int32_t ___vertexCount_0;

public:
	inline static int32_t get_offset_of_vertexCount_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_2_t863677BB7E433238A9ABDD011B0DBF6F75F839EB, ___vertexCount_0)); }
	inline int32_t get_vertexCount_0() const { return ___vertexCount_0; }
	inline int32_t* get_address_of_vertexCount_0() { return &___vertexCount_0; }
	inline void set_vertexCount_0(int32_t value)
	{
		___vertexCount_0 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/TextureAtlas
struct TextureAtlas_tA4F8A64BE48A02D9F87753643ED5E59A84D81043  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D Unity.VectorGraphics.VectorUtils/TextureAtlas::<Texture>k__BackingField
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___U3CTextureU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Unity.VectorGraphics.VectorUtils/PackRectItem> Unity.VectorGraphics.VectorUtils/TextureAtlas::<Entries>k__BackingField
	List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A * ___U3CEntriesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTextureU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TextureAtlas_tA4F8A64BE48A02D9F87753643ED5E59A84D81043, ___U3CTextureU3Ek__BackingField_0)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_U3CTextureU3Ek__BackingField_0() const { return ___U3CTextureU3Ek__BackingField_0; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_U3CTextureU3Ek__BackingField_0() { return &___U3CTextureU3Ek__BackingField_0; }
	inline void set_U3CTextureU3Ek__BackingField_0(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___U3CTextureU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextureU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEntriesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TextureAtlas_tA4F8A64BE48A02D9F87753643ED5E59A84D81043, ___U3CEntriesU3Ek__BackingField_1)); }
	inline List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A * get_U3CEntriesU3Ek__BackingField_1() const { return ___U3CEntriesU3Ek__BackingField_1; }
	inline List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A ** get_address_of_U3CEntriesU3Ek__BackingField_1() { return &___U3CEntriesU3Ek__BackingField_1; }
	inline void set_U3CEntriesU3Ek__BackingField_1(List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A * value)
	{
		___U3CEntriesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEntriesU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.VectorGraphics.XmlReaderIterator
struct XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9  : public RuntimeObject
{
public:
	// System.Xml.XmlReader Unity.VectorGraphics.XmlReaderIterator::reader
	XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader_0;
	// System.Boolean Unity.VectorGraphics.XmlReaderIterator::currentElementVisited
	bool ___currentElementVisited_1;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9, ___reader_0)); }
	inline XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * get_reader_0() const { return ___reader_0; }
	inline XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentElementVisited_1() { return static_cast<int32_t>(offsetof(XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9, ___currentElementVisited_1)); }
	inline bool get_currentElementVisited_1() const { return ___currentElementVisited_1; }
	inline bool* get_address_of_currentElementVisited_1() { return &___currentElementVisited_1; }
	inline void set_currentElementVisited_1(bool value)
	{
		___currentElementVisited_1 = value;
	}
};


// Unity.VectorGraphics.XmlReaderIterator/Node
struct Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753  : public RuntimeObject
{
public:
	// System.Xml.XmlReader Unity.VectorGraphics.XmlReaderIterator/Node::reader
	XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader_0;
	// System.Int32 Unity.VectorGraphics.XmlReaderIterator/Node::depth
	int32_t ___depth_1;
	// System.String Unity.VectorGraphics.XmlReaderIterator/Node::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753, ___reader_0)); }
	inline XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * get_reader_0() const { return ___reader_0; }
	inline XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_0), (void*)value);
	}

	inline static int32_t get_offset_of_depth_1() { return static_cast<int32_t>(offsetof(Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753, ___depth_1)); }
	inline int32_t get_depth_1() const { return ___depth_1; }
	inline int32_t* get_address_of_depth_1() { return &___depth_1; }
	inline void set_depth_1(int32_t value)
	{
		___depth_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,Unity.VectorGraphics.VectorUtils/AtlasEntry>
struct KeyValuePair_2_tFDD067E9BB73185A40404F8F564726083DB33439 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFDD067E9BB73185A40404F8F564726083DB33439, ___key_0)); }
	inline RuntimeObject* get_key_0() const { return ___key_0; }
	inline RuntimeObject** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFDD067E9BB73185A40404F8F564726083DB33439, ___value_1)); }
	inline AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290 * get_value_1() const { return ___value_1; }
	inline AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Unity.VectorGraphics.SceneNode>
struct Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8, ___list_0)); }
	inline List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * get_list_0() const { return ___list_0; }
	inline List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8, ___current_3)); }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * get_current_3() const { return ___current_3; }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Double
struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Unity.VectorGraphics.External.LibTessDotNet.Vec3
struct Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD 
{
public:
	// System.Single Unity.VectorGraphics.External.LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single Unity.VectorGraphics.External.LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single Unity.VectorGraphics.External.LibTessDotNet.Vec3::Z
	float ___Z_3;

public:
	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD, ___X_1)); }
	inline float get_X_1() const { return ___X_1; }
	inline float* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(float value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD, ___Y_2)); }
	inline float get_Y_2() const { return ___Y_2; }
	inline float* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(float value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Z_3() { return static_cast<int32_t>(offsetof(Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD, ___Z_3)); }
	inline float get_Z_3() const { return ___Z_3; }
	inline float* get_address_of_Z_3() { return &___Z_3; }
	inline void set_Z_3(float value)
	{
		___Z_3 = value;
	}
};

struct Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD_StaticFields
{
public:
	// Unity.VectorGraphics.External.LibTessDotNet.Vec3 Unity.VectorGraphics.External.LibTessDotNet.Vec3::Zero
	Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD_StaticFields, ___Zero_0)); }
	inline Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD  get_Zero_0() const { return ___Zero_0; }
	inline Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD  value)
	{
		___Zero_0 = value;
	}
};


// Unity.VectorGraphics.Matrix2D
struct Matrix2D_tA940BD215BB784A62583F804540766595258C337 
{
public:
	// System.Single Unity.VectorGraphics.Matrix2D::m00
	float ___m00_0;
	// System.Single Unity.VectorGraphics.Matrix2D::m10
	float ___m10_1;
	// System.Single Unity.VectorGraphics.Matrix2D::m01
	float ___m01_2;
	// System.Single Unity.VectorGraphics.Matrix2D::m11
	float ___m11_3;
	// System.Single Unity.VectorGraphics.Matrix2D::m02
	float ___m02_4;
	// System.Single Unity.VectorGraphics.Matrix2D::m12
	float ___m12_5;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix2D_tA940BD215BB784A62583F804540766595258C337, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix2D_tA940BD215BB784A62583F804540766595258C337, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m01_2() { return static_cast<int32_t>(offsetof(Matrix2D_tA940BD215BB784A62583F804540766595258C337, ___m01_2)); }
	inline float get_m01_2() const { return ___m01_2; }
	inline float* get_address_of_m01_2() { return &___m01_2; }
	inline void set_m01_2(float value)
	{
		___m01_2 = value;
	}

	inline static int32_t get_offset_of_m11_3() { return static_cast<int32_t>(offsetof(Matrix2D_tA940BD215BB784A62583F804540766595258C337, ___m11_3)); }
	inline float get_m11_3() const { return ___m11_3; }
	inline float* get_address_of_m11_3() { return &___m11_3; }
	inline void set_m11_3(float value)
	{
		___m11_3 = value;
	}

	inline static int32_t get_offset_of_m02_4() { return static_cast<int32_t>(offsetof(Matrix2D_tA940BD215BB784A62583F804540766595258C337, ___m02_4)); }
	inline float get_m02_4() const { return ___m02_4; }
	inline float* get_address_of_m02_4() { return &___m02_4; }
	inline void set_m02_4(float value)
	{
		___m02_4 = value;
	}

	inline static int32_t get_offset_of_m12_5() { return static_cast<int32_t>(offsetof(Matrix2D_tA940BD215BB784A62583F804540766595258C337, ___m12_5)); }
	inline float get_m12_5() const { return ___m12_5; }
	inline float* get_address_of_m12_5() { return &___m12_5; }
	inline void set_m12_5(float value)
	{
		___m12_5 = value;
	}
};

struct Matrix2D_tA940BD215BB784A62583F804540766595258C337_StaticFields
{
public:
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.Matrix2D::zeroMatrix
	Matrix2D_tA940BD215BB784A62583F804540766595258C337  ___zeroMatrix_6;
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.Matrix2D::identityMatrix
	Matrix2D_tA940BD215BB784A62583F804540766595258C337  ___identityMatrix_7;

public:
	inline static int32_t get_offset_of_zeroMatrix_6() { return static_cast<int32_t>(offsetof(Matrix2D_tA940BD215BB784A62583F804540766595258C337_StaticFields, ___zeroMatrix_6)); }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337  get_zeroMatrix_6() const { return ___zeroMatrix_6; }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337 * get_address_of_zeroMatrix_6() { return &___zeroMatrix_6; }
	inline void set_zeroMatrix_6(Matrix2D_tA940BD215BB784A62583F804540766595258C337  value)
	{
		___zeroMatrix_6 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_7() { return static_cast<int32_t>(offsetof(Matrix2D_tA940BD215BB784A62583F804540766595258C337_StaticFields, ___identityMatrix_7)); }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337  get_identityMatrix_7() const { return ___identityMatrix_7; }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337 * get_address_of_identityMatrix_7() { return &___identityMatrix_7; }
	inline void set_identityMatrix_7(Matrix2D_tA940BD215BB784A62583F804540766595258C337  value)
	{
		___identityMatrix_7 = value;
	}
};


// Unity.VectorGraphics.SVGPropertySheet
struct SVGPropertySheet_t3A460AFD6333BE9BB1A6515B17660A20C2D9B987  : public Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC
{
public:

public:
};


// Unity.VectorGraphics.VectorUtils/RawTexture
struct RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A 
{
public:
	// UnityEngine.Color32[] Unity.VectorGraphics.VectorUtils/RawTexture::Rgba
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___Rgba_0;
	// System.Int32 Unity.VectorGraphics.VectorUtils/RawTexture::Width
	int32_t ___Width_1;
	// System.Int32 Unity.VectorGraphics.VectorUtils/RawTexture::Height
	int32_t ___Height_2;

public:
	inline static int32_t get_offset_of_Rgba_0() { return static_cast<int32_t>(offsetof(RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A, ___Rgba_0)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_Rgba_0() const { return ___Rgba_0; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_Rgba_0() { return &___Rgba_0; }
	inline void set_Rgba_0(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___Rgba_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Rgba_0), (void*)value);
	}

	inline static int32_t get_offset_of_Width_1() { return static_cast<int32_t>(offsetof(RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A, ___Width_1)); }
	inline int32_t get_Width_1() const { return ___Width_1; }
	inline int32_t* get_address_of_Width_1() { return &___Width_1; }
	inline void set_Width_1(int32_t value)
	{
		___Width_1 = value;
	}

	inline static int32_t get_offset_of_Height_2() { return static_cast<int32_t>(offsetof(RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A, ___Height_2)); }
	inline int32_t get_Height_2() const { return ___Height_2; }
	inline int32_t* get_address_of_Height_2() { return &___Height_2; }
	inline void set_Height_2(int32_t value)
	{
		___Height_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.VectorUtils/RawTexture
struct RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshaled_pinvoke
{
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * ___Rgba_0;
	int32_t ___Width_1;
	int32_t ___Height_2;
};
// Native definition for COM marshalling of Unity.VectorGraphics.VectorUtils/RawTexture
struct RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshaled_com
{
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * ___Rgba_0;
	int32_t ___Width_1;
	int32_t ___Height_2;
};

// Unity.VectorGraphics.VectorUtils/TessellationOptions
struct TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 
{
public:
	// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::m_MaxCordDev
	float ___m_MaxCordDev_0;
	// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::m_MaxCordDevSq
	float ___m_MaxCordDevSq_1;
	// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::m_MaxTanAngleDev
	float ___m_MaxTanAngleDev_2;
	// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::m_MaxTanAngleDevCosine
	float ___m_MaxTanAngleDevCosine_3;
	// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::m_StepSize
	float ___m_StepSize_4;
	// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::<StepDistance>k__BackingField
	float ___U3CStepDistanceU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_MaxCordDev_0() { return static_cast<int32_t>(offsetof(TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877, ___m_MaxCordDev_0)); }
	inline float get_m_MaxCordDev_0() const { return ___m_MaxCordDev_0; }
	inline float* get_address_of_m_MaxCordDev_0() { return &___m_MaxCordDev_0; }
	inline void set_m_MaxCordDev_0(float value)
	{
		___m_MaxCordDev_0 = value;
	}

	inline static int32_t get_offset_of_m_MaxCordDevSq_1() { return static_cast<int32_t>(offsetof(TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877, ___m_MaxCordDevSq_1)); }
	inline float get_m_MaxCordDevSq_1() const { return ___m_MaxCordDevSq_1; }
	inline float* get_address_of_m_MaxCordDevSq_1() { return &___m_MaxCordDevSq_1; }
	inline void set_m_MaxCordDevSq_1(float value)
	{
		___m_MaxCordDevSq_1 = value;
	}

	inline static int32_t get_offset_of_m_MaxTanAngleDev_2() { return static_cast<int32_t>(offsetof(TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877, ___m_MaxTanAngleDev_2)); }
	inline float get_m_MaxTanAngleDev_2() const { return ___m_MaxTanAngleDev_2; }
	inline float* get_address_of_m_MaxTanAngleDev_2() { return &___m_MaxTanAngleDev_2; }
	inline void set_m_MaxTanAngleDev_2(float value)
	{
		___m_MaxTanAngleDev_2 = value;
	}

	inline static int32_t get_offset_of_m_MaxTanAngleDevCosine_3() { return static_cast<int32_t>(offsetof(TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877, ___m_MaxTanAngleDevCosine_3)); }
	inline float get_m_MaxTanAngleDevCosine_3() const { return ___m_MaxTanAngleDevCosine_3; }
	inline float* get_address_of_m_MaxTanAngleDevCosine_3() { return &___m_MaxTanAngleDevCosine_3; }
	inline void set_m_MaxTanAngleDevCosine_3(float value)
	{
		___m_MaxTanAngleDevCosine_3 = value;
	}

	inline static int32_t get_offset_of_m_StepSize_4() { return static_cast<int32_t>(offsetof(TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877, ___m_StepSize_4)); }
	inline float get_m_StepSize_4() const { return ___m_StepSize_4; }
	inline float* get_address_of_m_StepSize_4() { return &___m_StepSize_4; }
	inline void set_m_StepSize_4(float value)
	{
		___m_StepSize_4 = value;
	}

	inline static int32_t get_offset_of_U3CStepDistanceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877, ___U3CStepDistanceU3Ek__BackingField_5)); }
	inline float get_U3CStepDistanceU3Ek__BackingField_5() const { return ___U3CStepDistanceU3Ek__BackingField_5; }
	inline float* get_address_of_U3CStepDistanceU3Ek__BackingField_5() { return &___U3CStepDistanceU3Ek__BackingField_5; }
	inline void set_U3CStepDistanceU3Ek__BackingField_5(float value)
	{
		___U3CStepDistanceU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>
struct KeyValuePair_2_t084BC692030E2E34727D1643D7C7B7D2995D9874 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t084BC692030E2E34727D1643D7C7B7D2995D9874, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t084BC692030E2E34727D1643D7C7B7D2995D9874, ___value_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_value_1() const { return ___value_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,UnityEngine.Vector2>
struct KeyValuePair_2_t84F7AC2852F7190A504A786DF292F4684549FC50 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t84F7AC2852F7190A504A786DF292F4684549FC50, ___key_0)); }
	inline RuntimeObject* get_key_0() const { return ___key_0; }
	inline RuntimeObject** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t84F7AC2852F7190A504A786DF292F4684549FC50, ___value_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_value_1() const { return ___value_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___value_1 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Xml.XmlNodeType
struct XmlNodeType_tEE56AC4F9EC36B979516EA5836C4DA730B0A21E1 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNodeType_tEE56AC4F9EC36B979516EA5836C4DA730B0A21E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.BezierPathSegment
struct BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250 
{
public:
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierPathSegment::P0
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P0_0;
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierPathSegment::P1
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P1_1;
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierPathSegment::P2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P2_2;

public:
	inline static int32_t get_offset_of_P0_0() { return static_cast<int32_t>(offsetof(BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250, ___P0_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_P0_0() const { return ___P0_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_P0_0() { return &___P0_0; }
	inline void set_P0_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___P0_0 = value;
	}

	inline static int32_t get_offset_of_P1_1() { return static_cast<int32_t>(offsetof(BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250, ___P1_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_P1_1() const { return ___P1_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_P1_1() { return &___P1_1; }
	inline void set_P1_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___P1_1 = value;
	}

	inline static int32_t get_offset_of_P2_2() { return static_cast<int32_t>(offsetof(BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250, ___P2_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_P2_2() const { return ___P2_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_P2_2() { return &___P2_2; }
	inline void set_P2_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___P2_2 = value;
	}
};


// Unity.VectorGraphics.BezierSegment
struct BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE 
{
public:
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierSegment::P0
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P0_0;
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierSegment::P1
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P1_1;
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierSegment::P2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P2_2;
	// UnityEngine.Vector2 Unity.VectorGraphics.BezierSegment::P3
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___P3_3;

public:
	inline static int32_t get_offset_of_P0_0() { return static_cast<int32_t>(offsetof(BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE, ___P0_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_P0_0() const { return ___P0_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_P0_0() { return &___P0_0; }
	inline void set_P0_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___P0_0 = value;
	}

	inline static int32_t get_offset_of_P1_1() { return static_cast<int32_t>(offsetof(BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE, ___P1_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_P1_1() const { return ___P1_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_P1_1() { return &___P1_1; }
	inline void set_P1_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___P1_1 = value;
	}

	inline static int32_t get_offset_of_P2_2() { return static_cast<int32_t>(offsetof(BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE, ___P2_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_P2_2() const { return ___P2_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_P2_2() { return &___P2_2; }
	inline void set_P2_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___P2_2 = value;
	}

	inline static int32_t get_offset_of_P3_3() { return static_cast<int32_t>(offsetof(BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE, ___P3_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_P3_3() const { return ___P3_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_P3_3() { return &___P3_3; }
	inline void set_P3_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___P3_3 = value;
	}
};


// Unity.VectorGraphics.External.LibTessDotNet.ContourVertex
struct ContourVertex_tAB1B9374F699FB1045E9CD85E8F2D9CFF25D49DE 
{
public:
	// Unity.VectorGraphics.External.LibTessDotNet.Vec3 Unity.VectorGraphics.External.LibTessDotNet.ContourVertex::Position
	Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD  ___Position_0;
	// System.Object Unity.VectorGraphics.External.LibTessDotNet.ContourVertex::Data
	RuntimeObject * ___Data_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(ContourVertex_tAB1B9374F699FB1045E9CD85E8F2D9CFF25D49DE, ___Position_0)); }
	inline Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD  get_Position_0() const { return ___Position_0; }
	inline Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(ContourVertex_tAB1B9374F699FB1045E9CD85E8F2D9CFF25D49DE, ___Data_1)); }
	inline RuntimeObject * get_Data_1() const { return ___Data_1; }
	inline RuntimeObject ** get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(RuntimeObject * value)
	{
		___Data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.External.LibTessDotNet.ContourVertex
struct ContourVertex_tAB1B9374F699FB1045E9CD85E8F2D9CFF25D49DE_marshaled_pinvoke
{
	Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD  ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
// Native definition for COM marshalling of Unity.VectorGraphics.External.LibTessDotNet.ContourVertex
struct ContourVertex_tAB1B9374F699FB1045E9CD85E8F2D9CFF25D49DE_marshaled_com
{
	Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD  ___Position_0;
	Il2CppIUnknown* ___Data_1;
};

// Unity.VectorGraphics.SceneNode
struct SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.SceneNode::<Children>k__BackingField
	List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * ___U3CChildrenU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Unity.VectorGraphics.Shape> Unity.VectorGraphics.SceneNode::<Shapes>k__BackingField
	List_1_t8D2C7A7ED3D01A6374A9BF92DB5DA418DD55ED3F * ___U3CShapesU3Ek__BackingField_1;
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.SceneNode::m_Transform
	Matrix2D_tA940BD215BB784A62583F804540766595258C337  ___m_Transform_2;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.SceneNode::<Clipper>k__BackingField
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___U3CClipperU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CChildrenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343, ___U3CChildrenU3Ek__BackingField_0)); }
	inline List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * get_U3CChildrenU3Ek__BackingField_0() const { return ___U3CChildrenU3Ek__BackingField_0; }
	inline List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 ** get_address_of_U3CChildrenU3Ek__BackingField_0() { return &___U3CChildrenU3Ek__BackingField_0; }
	inline void set_U3CChildrenU3Ek__BackingField_0(List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * value)
	{
		___U3CChildrenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChildrenU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShapesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343, ___U3CShapesU3Ek__BackingField_1)); }
	inline List_1_t8D2C7A7ED3D01A6374A9BF92DB5DA418DD55ED3F * get_U3CShapesU3Ek__BackingField_1() const { return ___U3CShapesU3Ek__BackingField_1; }
	inline List_1_t8D2C7A7ED3D01A6374A9BF92DB5DA418DD55ED3F ** get_address_of_U3CShapesU3Ek__BackingField_1() { return &___U3CShapesU3Ek__BackingField_1; }
	inline void set_U3CShapesU3Ek__BackingField_1(List_1_t8D2C7A7ED3D01A6374A9BF92DB5DA418DD55ED3F * value)
	{
		___U3CShapesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShapesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343, ___m_Transform_2)); }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337  get_m_Transform_2() const { return ___m_Transform_2; }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337 * get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Matrix2D_tA940BD215BB784A62583F804540766595258C337  value)
	{
		___m_Transform_2 = value;
	}

	inline static int32_t get_offset_of_U3CClipperU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343, ___U3CClipperU3Ek__BackingField_3)); }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * get_U3CClipperU3Ek__BackingField_3() const { return ___U3CClipperU3Ek__BackingField_3; }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 ** get_address_of_U3CClipperU3Ek__BackingField_3() { return &___U3CClipperU3Ek__BackingField_3; }
	inline void set_U3CClipperU3Ek__BackingField_3(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * value)
	{
		___U3CClipperU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClipperU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tD0FDA585737BF89248818C9C57454BE7273FDB1D  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.VectorUtils/<>c__DisplayClass20_0::invMat
	Matrix2D_tA940BD215BB784A62583F804540766595258C337  ___invMat_0;

public:
	inline static int32_t get_offset_of_invMat_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tD0FDA585737BF89248818C9C57454BE7273FDB1D, ___invMat_0)); }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337  get_invMat_0() const { return ___invMat_0; }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337 * get_address_of_invMat_0() { return &___invMat_0; }
	inline void set_invMat_0(Matrix2D_tA940BD215BB784A62583F804540766595258C337  value)
	{
		___invMat_0 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0
struct U3CU3Ec__DisplayClass41_0_tCC05A92095004738962F220238DAD6187810D0AF  : public RuntimeObject
{
public:
	// System.Single Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0::pixelsToUnits
	float ___pixelsToUnits_0;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0::pivot
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pivot_1;
	// System.Single Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0::spriteWidth
	float ___spriteWidth_2;
	// System.Single Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0::spriteHeight
	float ___spriteHeight_3;

public:
	inline static int32_t get_offset_of_pixelsToUnits_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_tCC05A92095004738962F220238DAD6187810D0AF, ___pixelsToUnits_0)); }
	inline float get_pixelsToUnits_0() const { return ___pixelsToUnits_0; }
	inline float* get_address_of_pixelsToUnits_0() { return &___pixelsToUnits_0; }
	inline void set_pixelsToUnits_0(float value)
	{
		___pixelsToUnits_0 = value;
	}

	inline static int32_t get_offset_of_pivot_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_tCC05A92095004738962F220238DAD6187810D0AF, ___pivot_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_pivot_1() const { return ___pivot_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_pivot_1() { return &___pivot_1; }
	inline void set_pivot_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___pivot_1 = value;
	}

	inline static int32_t get_offset_of_spriteWidth_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_tCC05A92095004738962F220238DAD6187810D0AF, ___spriteWidth_2)); }
	inline float get_spriteWidth_2() const { return ___spriteWidth_2; }
	inline float* get_address_of_spriteWidth_2() { return &___spriteWidth_2; }
	inline void set_spriteWidth_2(float value)
	{
		___spriteWidth_2 = value;
	}

	inline static int32_t get_offset_of_spriteHeight_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass41_0_tCC05A92095004738962F220238DAD6187810D0AF, ___spriteHeight_3)); }
	inline float get_spriteHeight_3() const { return ___spriteHeight_3; }
	inline float* get_address_of_spriteHeight_3() { return &___spriteHeight_3; }
	inline void set_spriteHeight_3(float value)
	{
		___spriteHeight_3 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99
struct U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0  : public RuntimeObject
{
public:
	// System.Int32 Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>2__current
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___U3CU3E2__current_1;
	// System.Int32 Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::root
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___root_3;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>3__root
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___U3CU3E3__root_4;
	// System.Collections.Generic.List`1/Enumerator<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>7__wrap1
	Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8  ___U3CU3E7__wrap1_5;
	// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0, ___U3CU3E2__current_1)); }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_root_3() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0, ___root_3)); }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * get_root_3() const { return ___root_3; }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 ** get_address_of_root_3() { return &___root_3; }
	inline void set_root_3(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * value)
	{
		___root_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_4() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0, ___U3CU3E3__root_4)); }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * get_U3CU3E3__root_4() const { return ___U3CU3E3__root_4; }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 ** get_address_of_U3CU3E3__root_4() { return &___U3CU3E3__root_4; }
	inline void set_U3CU3E3__root_4(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * value)
	{
		___U3CU3E3__root_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__root_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0, ___U3CU3E7__wrap1_5)); }
	inline Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8  get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8  value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_5))->___current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_6() { return static_cast<int32_t>(offsetof(U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0, ___U3CU3E7__wrap2_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_6() const { return ___U3CU3E7__wrap2_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_6() { return &___U3CU3E7__wrap2_6; }
	inline void set_U3CU3E7__wrap2_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_6), (void*)value);
	}
};


// Unity.VectorGraphics.VectorUtils/Alignment
struct Alignment_t61209CC750DE230D9E8B791D4E164C1D21502C69 
{
public:
	// System.Int32 Unity.VectorGraphics.VectorUtils/Alignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Alignment_t61209CC750DE230D9E8B791D4E164C1D21502C69, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/Geometry
struct Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF  : public RuntimeObject
{
public:
	// UnityEngine.Vector2[] Unity.VectorGraphics.VectorUtils/Geometry::Vertices
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___Vertices_0;
	// UnityEngine.Vector2[] Unity.VectorGraphics.VectorUtils/Geometry::UVs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___UVs_1;
	// System.UInt16[] Unity.VectorGraphics.VectorUtils/Geometry::Indices
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___Indices_2;
	// UnityEngine.Color Unity.VectorGraphics.VectorUtils/Geometry::Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color_3;
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.VectorUtils/Geometry::WorldTransform
	Matrix2D_tA940BD215BB784A62583F804540766595258C337  ___WorldTransform_4;
	// Unity.VectorGraphics.IFill Unity.VectorGraphics.VectorUtils/Geometry::Fill
	RuntimeObject* ___Fill_5;
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.VectorUtils/Geometry::FillTransform
	Matrix2D_tA940BD215BB784A62583F804540766595258C337  ___FillTransform_6;
	// UnityEngine.Rect Unity.VectorGraphics.VectorUtils/Geometry::UnclippedBounds
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___UnclippedBounds_7;
	// System.Int32 Unity.VectorGraphics.VectorUtils/Geometry::SettingIndex
	int32_t ___SettingIndex_8;

public:
	inline static int32_t get_offset_of_Vertices_0() { return static_cast<int32_t>(offsetof(Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF, ___Vertices_0)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_Vertices_0() const { return ___Vertices_0; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_Vertices_0() { return &___Vertices_0; }
	inline void set_Vertices_0(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___Vertices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Vertices_0), (void*)value);
	}

	inline static int32_t get_offset_of_UVs_1() { return static_cast<int32_t>(offsetof(Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF, ___UVs_1)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_UVs_1() const { return ___UVs_1; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_UVs_1() { return &___UVs_1; }
	inline void set_UVs_1(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___UVs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UVs_1), (void*)value);
	}

	inline static int32_t get_offset_of_Indices_2() { return static_cast<int32_t>(offsetof(Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF, ___Indices_2)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_Indices_2() const { return ___Indices_2; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_Indices_2() { return &___Indices_2; }
	inline void set_Indices_2(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___Indices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Indices_2), (void*)value);
	}

	inline static int32_t get_offset_of_Color_3() { return static_cast<int32_t>(offsetof(Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF, ___Color_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_Color_3() const { return ___Color_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_Color_3() { return &___Color_3; }
	inline void set_Color_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___Color_3 = value;
	}

	inline static int32_t get_offset_of_WorldTransform_4() { return static_cast<int32_t>(offsetof(Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF, ___WorldTransform_4)); }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337  get_WorldTransform_4() const { return ___WorldTransform_4; }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337 * get_address_of_WorldTransform_4() { return &___WorldTransform_4; }
	inline void set_WorldTransform_4(Matrix2D_tA940BD215BB784A62583F804540766595258C337  value)
	{
		___WorldTransform_4 = value;
	}

	inline static int32_t get_offset_of_Fill_5() { return static_cast<int32_t>(offsetof(Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF, ___Fill_5)); }
	inline RuntimeObject* get_Fill_5() const { return ___Fill_5; }
	inline RuntimeObject** get_address_of_Fill_5() { return &___Fill_5; }
	inline void set_Fill_5(RuntimeObject* value)
	{
		___Fill_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Fill_5), (void*)value);
	}

	inline static int32_t get_offset_of_FillTransform_6() { return static_cast<int32_t>(offsetof(Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF, ___FillTransform_6)); }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337  get_FillTransform_6() const { return ___FillTransform_6; }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337 * get_address_of_FillTransform_6() { return &___FillTransform_6; }
	inline void set_FillTransform_6(Matrix2D_tA940BD215BB784A62583F804540766595258C337  value)
	{
		___FillTransform_6 = value;
	}

	inline static int32_t get_offset_of_UnclippedBounds_7() { return static_cast<int32_t>(offsetof(Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF, ___UnclippedBounds_7)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_UnclippedBounds_7() const { return ___UnclippedBounds_7; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_UnclippedBounds_7() { return &___UnclippedBounds_7; }
	inline void set_UnclippedBounds_7(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___UnclippedBounds_7 = value;
	}

	inline static int32_t get_offset_of_SettingIndex_8() { return static_cast<int32_t>(offsetof(Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF, ___SettingIndex_8)); }
	inline int32_t get_SettingIndex_8() const { return ___SettingIndex_8; }
	inline int32_t* get_address_of_SettingIndex_8() { return &___SettingIndex_8; }
	inline void set_SettingIndex_8(int32_t value)
	{
		___SettingIndex_8 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/JoiningInfo
struct JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::JoinPos
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___JoinPos_0;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::TanAtEnd
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___TanAtEnd_1;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::TanAtStart
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___TanAtStart_2;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::NormAtEnd
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___NormAtEnd_3;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::NormAtStart
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___NormAtStart_4;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::PosThicknessStart
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___PosThicknessStart_5;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::NegThicknessStart
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___NegThicknessStart_6;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::PosThicknessEnd
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___PosThicknessEnd_7;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::NegThicknessEnd
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___NegThicknessEnd_8;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::PosThicknessClosingPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___PosThicknessClosingPoint_9;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::NegThicknessClosingPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___NegThicknessClosingPoint_10;
	// System.Boolean Unity.VectorGraphics.VectorUtils/JoiningInfo::RoundPosThickness
	bool ___RoundPosThickness_11;
	// System.Boolean Unity.VectorGraphics.VectorUtils/JoiningInfo::SimpleJoin
	bool ___SimpleJoin_12;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/JoiningInfo::InnerCornerVertex
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___InnerCornerVertex_13;
	// System.Single Unity.VectorGraphics.VectorUtils/JoiningInfo::InnerCornerDistToEnd
	float ___InnerCornerDistToEnd_14;
	// System.Single Unity.VectorGraphics.VectorUtils/JoiningInfo::InnerCornerDistFromStart
	float ___InnerCornerDistFromStart_15;

public:
	inline static int32_t get_offset_of_JoinPos_0() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___JoinPos_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_JoinPos_0() const { return ___JoinPos_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_JoinPos_0() { return &___JoinPos_0; }
	inline void set_JoinPos_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___JoinPos_0 = value;
	}

	inline static int32_t get_offset_of_TanAtEnd_1() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___TanAtEnd_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_TanAtEnd_1() const { return ___TanAtEnd_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_TanAtEnd_1() { return &___TanAtEnd_1; }
	inline void set_TanAtEnd_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___TanAtEnd_1 = value;
	}

	inline static int32_t get_offset_of_TanAtStart_2() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___TanAtStart_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_TanAtStart_2() const { return ___TanAtStart_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_TanAtStart_2() { return &___TanAtStart_2; }
	inline void set_TanAtStart_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___TanAtStart_2 = value;
	}

	inline static int32_t get_offset_of_NormAtEnd_3() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___NormAtEnd_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_NormAtEnd_3() const { return ___NormAtEnd_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_NormAtEnd_3() { return &___NormAtEnd_3; }
	inline void set_NormAtEnd_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___NormAtEnd_3 = value;
	}

	inline static int32_t get_offset_of_NormAtStart_4() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___NormAtStart_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_NormAtStart_4() const { return ___NormAtStart_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_NormAtStart_4() { return &___NormAtStart_4; }
	inline void set_NormAtStart_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___NormAtStart_4 = value;
	}

	inline static int32_t get_offset_of_PosThicknessStart_5() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___PosThicknessStart_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_PosThicknessStart_5() const { return ___PosThicknessStart_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_PosThicknessStart_5() { return &___PosThicknessStart_5; }
	inline void set_PosThicknessStart_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___PosThicknessStart_5 = value;
	}

	inline static int32_t get_offset_of_NegThicknessStart_6() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___NegThicknessStart_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_NegThicknessStart_6() const { return ___NegThicknessStart_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_NegThicknessStart_6() { return &___NegThicknessStart_6; }
	inline void set_NegThicknessStart_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___NegThicknessStart_6 = value;
	}

	inline static int32_t get_offset_of_PosThicknessEnd_7() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___PosThicknessEnd_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_PosThicknessEnd_7() const { return ___PosThicknessEnd_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_PosThicknessEnd_7() { return &___PosThicknessEnd_7; }
	inline void set_PosThicknessEnd_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___PosThicknessEnd_7 = value;
	}

	inline static int32_t get_offset_of_NegThicknessEnd_8() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___NegThicknessEnd_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_NegThicknessEnd_8() const { return ___NegThicknessEnd_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_NegThicknessEnd_8() { return &___NegThicknessEnd_8; }
	inline void set_NegThicknessEnd_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___NegThicknessEnd_8 = value;
	}

	inline static int32_t get_offset_of_PosThicknessClosingPoint_9() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___PosThicknessClosingPoint_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_PosThicknessClosingPoint_9() const { return ___PosThicknessClosingPoint_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_PosThicknessClosingPoint_9() { return &___PosThicknessClosingPoint_9; }
	inline void set_PosThicknessClosingPoint_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___PosThicknessClosingPoint_9 = value;
	}

	inline static int32_t get_offset_of_NegThicknessClosingPoint_10() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___NegThicknessClosingPoint_10)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_NegThicknessClosingPoint_10() const { return ___NegThicknessClosingPoint_10; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_NegThicknessClosingPoint_10() { return &___NegThicknessClosingPoint_10; }
	inline void set_NegThicknessClosingPoint_10(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___NegThicknessClosingPoint_10 = value;
	}

	inline static int32_t get_offset_of_RoundPosThickness_11() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___RoundPosThickness_11)); }
	inline bool get_RoundPosThickness_11() const { return ___RoundPosThickness_11; }
	inline bool* get_address_of_RoundPosThickness_11() { return &___RoundPosThickness_11; }
	inline void set_RoundPosThickness_11(bool value)
	{
		___RoundPosThickness_11 = value;
	}

	inline static int32_t get_offset_of_SimpleJoin_12() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___SimpleJoin_12)); }
	inline bool get_SimpleJoin_12() const { return ___SimpleJoin_12; }
	inline bool* get_address_of_SimpleJoin_12() { return &___SimpleJoin_12; }
	inline void set_SimpleJoin_12(bool value)
	{
		___SimpleJoin_12 = value;
	}

	inline static int32_t get_offset_of_InnerCornerVertex_13() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___InnerCornerVertex_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_InnerCornerVertex_13() const { return ___InnerCornerVertex_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_InnerCornerVertex_13() { return &___InnerCornerVertex_13; }
	inline void set_InnerCornerVertex_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___InnerCornerVertex_13 = value;
	}

	inline static int32_t get_offset_of_InnerCornerDistToEnd_14() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___InnerCornerDistToEnd_14)); }
	inline float get_InnerCornerDistToEnd_14() const { return ___InnerCornerDistToEnd_14; }
	inline float* get_address_of_InnerCornerDistToEnd_14() { return &___InnerCornerDistToEnd_14; }
	inline void set_InnerCornerDistToEnd_14(float value)
	{
		___InnerCornerDistToEnd_14 = value;
	}

	inline static int32_t get_offset_of_InnerCornerDistFromStart_15() { return static_cast<int32_t>(offsetof(JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4, ___InnerCornerDistFromStart_15)); }
	inline float get_InnerCornerDistFromStart_15() const { return ___InnerCornerDistFromStart_15; }
	inline float* get_address_of_InnerCornerDistFromStart_15() { return &___InnerCornerDistFromStart_15; }
	inline void set_InnerCornerDistFromStart_15(float value)
	{
		___InnerCornerDistFromStart_15 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/PackRectItem
struct PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3 
{
public:
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/PackRectItem::Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Position_0;
	// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/PackRectItem::Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Size_1;
	// System.Boolean Unity.VectorGraphics.VectorUtils/PackRectItem::Rotated
	bool ___Rotated_2;
	// Unity.VectorGraphics.IFill Unity.VectorGraphics.VectorUtils/PackRectItem::Fill
	RuntimeObject* ___Fill_3;
	// System.Int32 Unity.VectorGraphics.VectorUtils/PackRectItem::SettingIndex
	int32_t ___SettingIndex_4;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3, ___Position_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_Position_0() const { return ___Position_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Size_1() { return static_cast<int32_t>(offsetof(PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3, ___Size_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_Size_1() const { return ___Size_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_Size_1() { return &___Size_1; }
	inline void set_Size_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___Size_1 = value;
	}

	inline static int32_t get_offset_of_Rotated_2() { return static_cast<int32_t>(offsetof(PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3, ___Rotated_2)); }
	inline bool get_Rotated_2() const { return ___Rotated_2; }
	inline bool* get_address_of_Rotated_2() { return &___Rotated_2; }
	inline void set_Rotated_2(bool value)
	{
		___Rotated_2 = value;
	}

	inline static int32_t get_offset_of_Fill_3() { return static_cast<int32_t>(offsetof(PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3, ___Fill_3)); }
	inline RuntimeObject* get_Fill_3() const { return ___Fill_3; }
	inline RuntimeObject** get_address_of_Fill_3() { return &___Fill_3; }
	inline void set_Fill_3(RuntimeObject* value)
	{
		___Fill_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Fill_3), (void*)value);
	}

	inline static int32_t get_offset_of_SettingIndex_4() { return static_cast<int32_t>(offsetof(PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3, ___SettingIndex_4)); }
	inline int32_t get_SettingIndex_4() const { return ___SettingIndex_4; }
	inline int32_t* get_address_of_SettingIndex_4() { return &___SettingIndex_4; }
	inline void set_SettingIndex_4(int32_t value)
	{
		___SettingIndex_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.VectorUtils/PackRectItem
struct PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshaled_pinvoke
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Position_0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Size_1;
	int32_t ___Rotated_2;
	RuntimeObject* ___Fill_3;
	int32_t ___SettingIndex_4;
};
// Native definition for COM marshalling of Unity.VectorGraphics.VectorUtils/PackRectItem
struct PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshaled_com
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Position_0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___Size_1;
	int32_t ___Rotated_2;
	RuntimeObject* ___Fill_3;
	int32_t ___SettingIndex_4;
};

// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
struct SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8 
{
public:
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform::Node
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___Node_0;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform::Parent
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___Parent_1;
	// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform::WorldTransform
	Matrix2D_tA940BD215BB784A62583F804540766595258C337  ___WorldTransform_2;
	// System.Single Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform::WorldOpacity
	float ___WorldOpacity_3;

public:
	inline static int32_t get_offset_of_Node_0() { return static_cast<int32_t>(offsetof(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8, ___Node_0)); }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * get_Node_0() const { return ___Node_0; }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 ** get_address_of_Node_0() { return &___Node_0; }
	inline void set_Node_0(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * value)
	{
		___Node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Node_0), (void*)value);
	}

	inline static int32_t get_offset_of_Parent_1() { return static_cast<int32_t>(offsetof(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8, ___Parent_1)); }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * get_Parent_1() const { return ___Parent_1; }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 ** get_address_of_Parent_1() { return &___Parent_1; }
	inline void set_Parent_1(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * value)
	{
		___Parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_WorldTransform_2() { return static_cast<int32_t>(offsetof(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8, ___WorldTransform_2)); }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337  get_WorldTransform_2() const { return ___WorldTransform_2; }
	inline Matrix2D_tA940BD215BB784A62583F804540766595258C337 * get_address_of_WorldTransform_2() { return &___WorldTransform_2; }
	inline void set_WorldTransform_2(Matrix2D_tA940BD215BB784A62583F804540766595258C337  value)
	{
		___WorldTransform_2 = value;
	}

	inline static int32_t get_offset_of_WorldOpacity_3() { return static_cast<int32_t>(offsetof(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8, ___WorldOpacity_3)); }
	inline float get_WorldOpacity_3() const { return ___WorldOpacity_3; }
	inline float* get_address_of_WorldOpacity_3() { return &___WorldOpacity_3; }
	inline void set_WorldOpacity_3(float value)
	{
		___WorldOpacity_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
struct SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshaled_pinvoke
{
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___Node_0;
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___Parent_1;
	Matrix2D_tA940BD215BB784A62583F804540766595258C337  ___WorldTransform_2;
	float ___WorldOpacity_3;
};
// Native definition for COM marshalling of Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
struct SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshaled_com
{
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___Node_0;
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___Parent_1;
	Matrix2D_tA940BD215BB784A62583F804540766595258C337  ___WorldTransform_2;
	float ___WorldOpacity_3;
};

// Unity.VectorGraphics.VectorUtils/WindingDir
struct WindingDir_t54D3C52FDF21D16CCDF2332D3B90E2BB32CBFBD8 
{
public:
	// System.Int32 Unity.VectorGraphics.VectorUtils/WindingDir::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindingDir_t54D3C52FDF21D16CCDF2332D3B90E2BB32CBFBD8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.VectorGraphics.ViewportOptions
struct ViewportOptions_t2125047B3AC3FA32147E04CCC6D05C698608CC6A 
{
public:
	// System.Int32 Unity.VectorGraphics.ViewportOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewportOptions_t2125047B3AC3FA32147E04CCC6D05C698608CC6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// Unity.VectorGraphics.SVGFormatException
struct SVGFormatException_tA618F278F4913ED5EEEBA01AE80B7AEB859F1C35  : public Exception_t
{
public:

public:
};


// Unity.VectorGraphics.VectorUtils/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t8B1FA7F39042201B677AEC3AFD14345DD0119090  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<>c__DisplayClass17_0::nodeInfo
	SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  ___nodeInfo_0;
	// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2> Unity.VectorGraphics.VectorUtils/<>c__DisplayClass17_0::<>9__0
	Func_2_t1ADF98337D9BE371EDB780AD21B0818D42BCA45A * ___U3CU3E9__0_1;

public:
	inline static int32_t get_offset_of_nodeInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t8B1FA7F39042201B677AEC3AFD14345DD0119090, ___nodeInfo_0)); }
	inline SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  get_nodeInfo_0() const { return ___nodeInfo_0; }
	inline SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8 * get_address_of_nodeInfo_0() { return &___nodeInfo_0; }
	inline void set_nodeInfo_0(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  value)
	{
		___nodeInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___nodeInfo_0))->___Node_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___nodeInfo_0))->___Parent_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t8B1FA7F39042201B677AEC3AFD14345DD0119090, ___U3CU3E9__0_1)); }
	inline Func_2_t1ADF98337D9BE371EDB780AD21B0818D42BCA45A * get_U3CU3E9__0_1() const { return ___U3CU3E9__0_1; }
	inline Func_2_t1ADF98337D9BE371EDB780AD21B0818D42BCA45A ** get_address_of_U3CU3E9__0_1() { return &___U3CU3E9__0_1; }
	inline void set_U3CU3E9__0_1(Func_2_t1ADF98337D9BE371EDB780AD21B0818D42BCA45A * value)
	{
		___U3CU3E9__0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1), (void*)value);
	}
};


// Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106
struct U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0  : public RuntimeObject
{
public:
	// System.Int32 Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Unity.VectorGraphics.BezierSegment Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<>2__current
	BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE  ___U3CU3E2__current_1;
	// System.Int32 Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.BezierPathSegment> Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::segments
	RuntimeObject* ___segments_3;
	// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.BezierPathSegment> Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<>3__segments
	RuntimeObject* ___U3CU3E3__segments_4;
	// System.Boolean Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::closed
	bool ___closed_5;
	// System.Boolean Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<>3__closed
	bool ___U3CU3E3__closed_6;
	// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierPathSegment> Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<e>5__2
	RuntimeObject* ___U3CeU3E5__2_7;
	// Unity.VectorGraphics.BezierPathSegment Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::<s2>5__3
	BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  ___U3Cs2U3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0, ___U3CU3E2__current_1)); }
	inline BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_segments_3() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0, ___segments_3)); }
	inline RuntimeObject* get_segments_3() const { return ___segments_3; }
	inline RuntimeObject** get_address_of_segments_3() { return &___segments_3; }
	inline void set_segments_3(RuntimeObject* value)
	{
		___segments_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___segments_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__segments_4() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0, ___U3CU3E3__segments_4)); }
	inline RuntimeObject* get_U3CU3E3__segments_4() const { return ___U3CU3E3__segments_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__segments_4() { return &___U3CU3E3__segments_4; }
	inline void set_U3CU3E3__segments_4(RuntimeObject* value)
	{
		___U3CU3E3__segments_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__segments_4), (void*)value);
	}

	inline static int32_t get_offset_of_closed_5() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0, ___closed_5)); }
	inline bool get_closed_5() const { return ___closed_5; }
	inline bool* get_address_of_closed_5() { return &___closed_5; }
	inline void set_closed_5(bool value)
	{
		___closed_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__closed_6() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0, ___U3CU3E3__closed_6)); }
	inline bool get_U3CU3E3__closed_6() const { return ___U3CU3E3__closed_6; }
	inline bool* get_address_of_U3CU3E3__closed_6() { return &___U3CU3E3__closed_6; }
	inline void set_U3CU3E3__closed_6(bool value)
	{
		___U3CU3E3__closed_6 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0, ___U3CeU3E5__2_7)); }
	inline RuntimeObject* get_U3CeU3E5__2_7() const { return ___U3CeU3E5__2_7; }
	inline RuntimeObject** get_address_of_U3CeU3E5__2_7() { return &___U3CeU3E5__2_7; }
	inline void set_U3CeU3E5__2_7(RuntimeObject* value)
	{
		___U3CeU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cs2U3E5__3_8() { return static_cast<int32_t>(offsetof(U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0, ___U3Cs2U3E5__3_8)); }
	inline BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  get_U3Cs2U3E5__3_8() const { return ___U3Cs2U3E5__3_8; }
	inline BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250 * get_address_of_U3Cs2U3E5__3_8() { return &___U3Cs2U3E5__3_8; }
	inline void set_U3Cs2U3E5__3_8(BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  value)
	{
		___U3Cs2U3E5__3_8 = value;
	}
};


// Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101
struct U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713  : public RuntimeObject
{
public:
	// System.Int32 Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>2__current
	SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  ___U3CU3E2__current_1;
	// System.Int32 Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single> Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::nodeOpacities
	Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 * ___nodeOpacities_3;
	// System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single> Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>3__nodeOpacities
	Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 * ___U3CU3E3__nodeOpacities_4;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::child
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___child_5;
	// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>3__child
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___U3CU3E3__child_6;
	// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::parent
	SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  ___parent_7;
	// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>3__parent
	SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  ___U3CU3E3__parent_8;
	// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<childWorldTransform>5__2
	SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  ___U3CchildWorldTransformU3E5__2_9;
	// System.Collections.Generic.List`1/Enumerator<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>7__wrap2
	Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8  ___U3CU3E7__wrap2_10;
	// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform> Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>7__wrap3
	RuntimeObject* ___U3CU3E7__wrap3_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713, ___U3CU3E2__current_1)); }
	inline SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Node_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Parent_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_nodeOpacities_3() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713, ___nodeOpacities_3)); }
	inline Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 * get_nodeOpacities_3() const { return ___nodeOpacities_3; }
	inline Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 ** get_address_of_nodeOpacities_3() { return &___nodeOpacities_3; }
	inline void set_nodeOpacities_3(Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 * value)
	{
		___nodeOpacities_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeOpacities_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__nodeOpacities_4() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713, ___U3CU3E3__nodeOpacities_4)); }
	inline Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 * get_U3CU3E3__nodeOpacities_4() const { return ___U3CU3E3__nodeOpacities_4; }
	inline Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 ** get_address_of_U3CU3E3__nodeOpacities_4() { return &___U3CU3E3__nodeOpacities_4; }
	inline void set_U3CU3E3__nodeOpacities_4(Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 * value)
	{
		___U3CU3E3__nodeOpacities_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__nodeOpacities_4), (void*)value);
	}

	inline static int32_t get_offset_of_child_5() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713, ___child_5)); }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * get_child_5() const { return ___child_5; }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 ** get_address_of_child_5() { return &___child_5; }
	inline void set_child_5(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * value)
	{
		___child_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__child_6() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713, ___U3CU3E3__child_6)); }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * get_U3CU3E3__child_6() const { return ___U3CU3E3__child_6; }
	inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 ** get_address_of_U3CU3E3__child_6() { return &___U3CU3E3__child_6; }
	inline void set_U3CU3E3__child_6(SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * value)
	{
		___U3CU3E3__child_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__child_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713, ___parent_7)); }
	inline SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  get_parent_7() const { return ___parent_7; }
	inline SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8 * get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___parent_7))->___Node_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___parent_7))->___Parent_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E3__parent_8() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713, ___U3CU3E3__parent_8)); }
	inline SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  get_U3CU3E3__parent_8() const { return ___U3CU3E3__parent_8; }
	inline SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8 * get_address_of_U3CU3E3__parent_8() { return &___U3CU3E3__parent_8; }
	inline void set_U3CU3E3__parent_8(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  value)
	{
		___U3CU3E3__parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__parent_8))->___Node_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__parent_8))->___Parent_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CchildWorldTransformU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713, ___U3CchildWorldTransformU3E5__2_9)); }
	inline SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  get_U3CchildWorldTransformU3E5__2_9() const { return ___U3CchildWorldTransformU3E5__2_9; }
	inline SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8 * get_address_of_U3CchildWorldTransformU3E5__2_9() { return &___U3CchildWorldTransformU3E5__2_9; }
	inline void set_U3CchildWorldTransformU3E5__2_9(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  value)
	{
		___U3CchildWorldTransformU3E5__2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CchildWorldTransformU3E5__2_9))->___Node_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CchildWorldTransformU3E5__2_9))->___Parent_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_10() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713, ___U3CU3E7__wrap2_10)); }
	inline Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8  get_U3CU3E7__wrap2_10() const { return ___U3CU3E7__wrap2_10; }
	inline Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * get_address_of_U3CU3E7__wrap2_10() { return &___U3CU3E7__wrap2_10; }
	inline void set_U3CU3E7__wrap2_10(Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8  value)
	{
		___U3CU3E7__wrap2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap2_10))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap2_10))->___current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_11() { return static_cast<int32_t>(offsetof(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713, ___U3CU3E7__wrap3_11)); }
	inline RuntimeObject* get_U3CU3E7__wrap3_11() const { return ___U3CU3E7__wrap3_11; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap3_11() { return &___U3CU3E7__wrap3_11; }
	inline void set_U3CU3E7__wrap3_11(RuntimeObject* value)
	{
		___U3CU3E7__wrap3_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap3_11), (void*)value);
	}
};


// Unity.VectorGraphics.VectorUtils/AtlasEntry
struct AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290  : public RuntimeObject
{
public:
	// Unity.VectorGraphics.VectorUtils/RawTexture Unity.VectorGraphics.VectorUtils/AtlasEntry::Texture
	RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A  ___Texture_0;
	// Unity.VectorGraphics.VectorUtils/PackRectItem Unity.VectorGraphics.VectorUtils/AtlasEntry::AtlasLocation
	PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3  ___AtlasLocation_1;

public:
	inline static int32_t get_offset_of_Texture_0() { return static_cast<int32_t>(offsetof(AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290, ___Texture_0)); }
	inline RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A  get_Texture_0() const { return ___Texture_0; }
	inline RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A * get_address_of_Texture_0() { return &___Texture_0; }
	inline void set_Texture_0(RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A  value)
	{
		___Texture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Texture_0))->___Rgba_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_AtlasLocation_1() { return static_cast<int32_t>(offsetof(AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290, ___AtlasLocation_1)); }
	inline PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3  get_AtlasLocation_1() const { return ___AtlasLocation_1; }
	inline PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3 * get_address_of_AtlasLocation_1() { return &___AtlasLocation_1; }
	inline void set_AtlasLocation_1(PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3  value)
	{
		___AtlasLocation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___AtlasLocation_1))->___Fill_3), (void*)NULL);
	}
};


// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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


// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector2>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m8B1B6D96A2B51E6FC830BDC7D8C0236298265C03_gshared (KeyValuePair_2_t084BC692030E2E34727D1643D7C7B7D2995D9874 * __this, RuntimeObject * ___key0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<Unity.VectorGraphics.BezierPathSegment>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  Enumerable_First_TisBezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250_mFC36756FBDA86184830A5257EC7C8B509ACD7DFA_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE1C0F7BC15E9B1EACBFAA7779CC99AC6C81D8DBD_gshared (Dictionary_2_t7ED33C50131CAB8897963C9BCD19DF15A695E42C * __this, RuntimeObject * ___key0, float* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void Unity.VectorGraphics.VectorUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF044748C0D23F217D2F68DE41C0ED21F48E91CEA (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,Unity.VectorGraphics.VectorUtils/AtlasEntry>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_mAB6DE89E071A7D027E92BEDB3351C3735675DDBC_inline (KeyValuePair_2_tFDD067E9BB73185A40404F8F564726083DB33439 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFDD067E9BB73185A40404F8F564726083DB33439 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,Unity.VectorGraphics.VectorUtils/AtlasEntry>::get_Value()
inline AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290 * KeyValuePair_2_get_Value_m17FE8D22769DEEF7842D748F9AACA25640CE8965_inline (KeyValuePair_2_tFDD067E9BB73185A40404F8F564726083DB33439 * __this, const RuntimeMethod* method)
{
	return ((  AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290 * (*) (KeyValuePair_2_tFDD067E9BB73185A40404F8F564726083DB33439 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,UnityEngine.Vector2>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mF4F8F57DD4F2EA4179B2C4C5117D7DB2198F408D (KeyValuePair_2_t84F7AC2852F7190A504A786DF292F4684549FC50 * __this, RuntimeObject* ___key0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t84F7AC2852F7190A504A786DF292F4684549FC50 *, RuntimeObject*, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))KeyValuePair_2__ctor_m8B1B6D96A2B51E6FC830BDC7D8C0236298265C03_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  Color32_op_Implicit_m52B034473369A651C8952BD916A2AB193E0E5B30 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___c0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color32_op_Implicit_mA89CAD76E78975F51DF7374A67D18A5F6EF8DA61 (Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___c0, const RuntimeMethod* method);
// UnityEngine.Vector2 Unity.VectorGraphics.Matrix2D::op_Multiply(Unity.VectorGraphics.Matrix2D,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Matrix2D_op_Multiply_m9E4AB895919AC23BBA85261E0D5E1C8CB07C6008 (Matrix2D_tA940BD215BB784A62583F804540766595258C337  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector1, const RuntimeMethod* method);
// UnityEngine.Vector2 Unity.VectorGraphics.Matrix2D::MultiplyPoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Matrix2D_MultiplyPoint_m8DEF884C4A21DB99257DBD862030A9CC42DAE952 (Matrix2D_tA940BD215BB784A62583F804540766595258C337 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1 (const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_U3CU3Em__Finally2_m67AA436A5FF38D2EEA8B89CD9395ABB7634A4286 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_U3CU3Em__Finally1_mBF3E4BBC82A81E8EE6DA8F1CAB5A40B9A3FB75A9 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.SceneNode::get_Children()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * SceneNode_get_Children_mBFE2DC917BE46E64D526FA09915D5D0A007E596B_inline (SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Unity.VectorGraphics.SceneNode>::GetEnumerator()
inline Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8  List_1_GetEnumerator_m26D13DC6F1E13F98D293CD5EE7321FFC886605A7 (List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8  (*) (List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Unity.VectorGraphics.SceneNode>::get_Current()
inline SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * Enumerator_get_Current_m29CC0D0B35A7C83D8800AFF36E657AD8EE6AB194_inline (Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * __this, const RuntimeMethod* method)
{
	return ((  SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * (*) (Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.VectorUtils::SceneNodes(Unity.VectorGraphics.SceneNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VectorUtils_SceneNodes_m47C27C85A553D041541A9953FD77EC5FC81C352F (SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___root0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.VectorGraphics.SceneNode>::MoveNext()
inline bool Enumerator_MoveNext_mF6E3C2BB30B10164647E8AEFCBA08FEC3908B54C (Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_System_IDisposable_Dispose_m53631DFF3BC83282F881F247A31D0FCEDED7CF54 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.VectorGraphics.SceneNode>::Dispose()
inline void Enumerator_Dispose_m075182691E31A53C8CED4ACDD7BDFA64F4F7F7A9 (Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99__ctor_mB75CBFE1626ACCFB5838BD4046931F60FC5B8292 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.Collections.Generic.IEnumerable<Unity.VectorGraphics.SceneNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSceneNodesU3Ed__99_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_SceneNodeU3E_GetEnumerator_mCC6639AB5372FA758F5BF4DA5EBB600FB7A2D6B9 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<Unity.VectorGraphics.BezierPathSegment>(System.Collections.Generic.IEnumerable`1<!!0>)
inline BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  Enumerable_First_TisBezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250_mFC36756FBDA86184830A5257EC7C8B509ACD7DFA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisBezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250_mFC36756FBDA86184830A5257EC7C8B509ACD7DFA_gshared)(___source0, method);
}
// System.Void Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSegmentsInPathU3Ed__106__ctor_m5C5C96C0BA55AA1F7759BCDD0304DF4E72DC6BC8 (U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierSegment> Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.Collections.Generic.IEnumerable<Unity.VectorGraphics.BezierSegment>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSegmentsInPathU3Ed__106_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_BezierSegmentU3E_GetEnumerator_mCD984426A7B9E18CDCF1422485A76623CF7D9FC8 (U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally2_mAD7F2998CB0E26522E27DA68E67FF616E59C1EE4 (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally1_m9ABD30AF4BBAF64CB2363F800CEC212E334AF5EC (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mBE88F6DB40CF1FDD904C2A6DA8CE3761EDC2CC88 (Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 * __this, SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___key0, float* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 *, SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 *, float*, const RuntimeMethod*))Dictionary_2_TryGetValue_mE1C0F7BC15E9B1EACBFAA7779CC99AC6C81D8DBD_gshared)(__this, ___key0, ___value1, method);
}
// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.SceneNode::get_Transform()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Matrix2D_tA940BD215BB784A62583F804540766595258C337  SceneNode_get_Transform_mF2D9AC856AE38D3C3E91B6E889C58FF370C358BF_inline (SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * __this, const RuntimeMethod* method);
// Unity.VectorGraphics.Matrix2D Unity.VectorGraphics.Matrix2D::op_Multiply(Unity.VectorGraphics.Matrix2D,Unity.VectorGraphics.Matrix2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix2D_tA940BD215BB784A62583F804540766595258C337  Matrix2D_op_Multiply_mE6761401C992DCA62B5130EE656D85C14A821211 (Matrix2D_tA940BD215BB784A62583F804540766595258C337  ___lhs0, Matrix2D_tA940BD215BB784A62583F804540766595258C337  ___rhs1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform> Unity.VectorGraphics.VectorUtils::WorldTransformedSceneNodes(Unity.VectorGraphics.SceneNode,System.Collections.Generic.Dictionary`2<Unity.VectorGraphics.SceneNode,System.Single>,Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VectorUtils_WorldTransformedSceneNodes_m71BF8B42C7D0A65922DE6FA9B2D8B5053A2C2A83 (SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * ___child0, Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 * ___nodeOpacities1, SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  ___parent2, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_System_IDisposable_Dispose_mAB0386D0852444965945BE5BC8B060D776E0636F (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101__ctor_mC15040841231B894AC2E83A9813179F19A39186B (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform> Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.Collections.Generic.IEnumerable<Unity.VectorGraphics.VectorUtils.SceneNodeWorldTransform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_VectorUtils_SceneNodeWorldTransformU3E_GetEnumerator_m95BAF396EEA2DF5DE6C55D60A9AD7BB1305754B2 (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method);
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_StepDistance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TessellationOptions_get_StepDistance_mFEE8CD82741A2879F1A72A2C964DBCF3B298FC22_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_StepDistance(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TessellationOptions_set_StepDistance_m47430801471BE14D6E0550838FEC82ACFF2EC3E3_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxCordDeviation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxCordDeviation_mAE741CDA954F92780C59AAF6F521B3AFA79ECD1A_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_MaxCordDeviation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_MaxCordDeviation_m9630214E1769FABC4A824A993990446C6977AB5E (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxCordDeviationSquared()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxCordDeviationSquared_mEAB044D7AEAEE09DDF322FF71CA8C2F45DE56E16_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method);
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxTanAngleDeviation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxTanAngleDeviation_mD7902941D5A4A4097FB57BABAD75214FD9FAB29A_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_MaxTanAngleDeviation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_MaxTanAngleDeviation_m33D30910F706902B28FC6D3AE6BE0DCDE9AFC2AF (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxTanAngleDeviationCosine()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxTanAngleDeviationCosine_m2E65561104F9C04DD561D14B0A51EB404939B710_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method);
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_SamplingStepSize()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TessellationOptions_get_SamplingStepSize_m402B5D65CB572870BEA842934497B62702647148_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_SamplingStepSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_SamplingStepSize_mB05E34C170857DF81143E3E9A016779C1005FC79 (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.XmlReaderIterator/Node::.ctor(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mD4C11D034F47BCAA4CE15EA8AEF3C3369FA7D1A3 (Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * __this, XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader0, const RuntimeMethod* method);
// System.Int32 Unity.VectorGraphics.XmlReaderIterator/Node::get_Depth()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Node_get_Depth_mD3E08D481120613C65130FE3659F9DC066092D55_inline (Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * __this, const RuntimeMethod* method);
// Unity.VectorGraphics.XmlReaderIterator/Node Unity.VectorGraphics.XmlReaderIterator::VisitCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * XmlReaderIterator_VisitCurrent_m2383103EE93711321383B46268DACB5DA99146AB (XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9 * __this, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.XmlReaderIterator::SkipCurrentChildTree(Unity.VectorGraphics.XmlReaderIterator/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderIterator_SkipCurrentChildTree_mE291AD2BB54A8D9D3B72122E3B639EB29A31998E (XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9 * __this, Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * ___node0, const RuntimeMethod* method);
// System.Boolean Unity.VectorGraphics.XmlReaderIterator::GoToNextChild(Unity.VectorGraphics.XmlReaderIterator/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlReaderIterator_GoToNextChild_mE52E23AF48FCF98CEED979079A35F59141F778AB (XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9 * __this, Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * ___node0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Unity.VectorGraphics.SVGPropertySheet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SVGPropertySheet__ctor_m163758901F27290A640E261A661E8866B8FD6740 (SVGPropertySheet_t3A460AFD6333BE9BB1A6515B17660A20C2D9B987 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.VectorGraphics.SVGFormatException::.ctor(System.Xml.XmlReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SVGFormatException__ctor_m285CE5C6D30DA9EC256CF8037D1C0CCF2141FB49 (SVGFormatException_tA618F278F4913ED5EEEBA01AE80B7AEB859F1C35 * __this, XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader0, String_t* ___message1, const RuntimeMethod* method);
// System.String Unity.VectorGraphics.XmlReaderIterator/Node::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Node_get_Item_m5CC7DCA5D6C448455F9128BA1A21CECC9E2A4A6D (Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * __this, String_t* ___attrib0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VectorGraphics.VectorUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBAF8E9B73375AE24E4D6EF403C1E92566B927B9E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mBAF8E9B73375AE24E4D6EF403C1E92566B927B9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * L_0 = (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 *)il2cpp_codegen_object_new(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF044748C0D23F217D2F68DE41C0ED21F48E91CEA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF044748C0D23F217D2F68DE41C0ED21F48E91CEA (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Unity.VectorGraphics.External.LibTessDotNet.ContourVertex Unity.VectorGraphics.VectorUtils/<>c::<TessellateShapeLibTess>b__20_2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContourVertex_tAB1B9374F699FB1045E9CD85E8F2D9CFF25D49DE  U3CU3Ec_U3CTessellateShapeLibTessU3Eb__20_2_m97A704BD5B42A953809B7665CB58332373C93D16 (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method)
{
	ContourVertex_tAB1B9374F699FB1045E9CD85E8F2D9CFF25D49DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// tess.AddContour(contour.Select(v => new ContourVertex() { Position = new Vec3() { X = v.x, Y = v.y } }).ToArray(), ContourOrientation.Original);
		il2cpp_codegen_initobj((&V_0), sizeof(ContourVertex_tAB1B9374F699FB1045E9CD85E8F2D9CFF25D49DE ));
		il2cpp_codegen_initobj((&V_1), sizeof(Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD ));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		(&V_1)->set_X_1(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		(&V_1)->set_Y_2(L_3);
		Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD  L_4 = V_1;
		(&V_0)->set_Position_0(L_4);
		ContourVertex_tAB1B9374F699FB1045E9CD85E8F2D9CFF25D49DE  L_5 = V_0;
		return L_5;
	}
}
// System.UInt16 Unity.VectorGraphics.VectorUtils/<>c::<TessellateShapeLibTess>b__20_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t U3CU3Ec_U3CTessellateShapeLibTessU3Eb__20_0_mF1678EB026D7CA158275B7DDB3DB55397B499373 (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// var indices = tess.Elements.Select(i => (UInt16)i);
		int32_t L_0 = ___i0;
		return (uint16_t)(((int32_t)((uint16_t)L_0)));
	}
}
// System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,UnityEngine.Vector2> Unity.VectorGraphics.VectorUtils/<>c::<GenerateAtlas>b__28_0(System.Collections.Generic.KeyValuePair`2<Unity.VectorGraphics.IFill,Unity.VectorGraphics.VectorUtils/AtlasEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t84F7AC2852F7190A504A786DF292F4684549FC50  U3CU3Ec_U3CGenerateAtlasU3Eb__28_0_m5FDA557D242439D2C9F175E8CE4252B3A1C00D25 (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * __this, KeyValuePair_2_tFDD067E9BB73185A40404F8F564726083DB33439  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGenerateAtlasU3Eb__28_0_m5FDA557D242439D2C9F175E8CE4252B3A1C00D25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var rectsToPack = fills.Select(x => new KeyValuePair<IFill, Vector2>(x.Key, new Vector2(x.Value.Texture.Width, x.Value.Texture.Height))).ToList();
		RuntimeObject* L_0 = KeyValuePair_2_get_Key_mAB6DE89E071A7D027E92BEDB3351C3735675DDBC_inline((KeyValuePair_2_tFDD067E9BB73185A40404F8F564726083DB33439 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Key_mAB6DE89E071A7D027E92BEDB3351C3735675DDBC_RuntimeMethod_var);
		AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290 * L_1 = KeyValuePair_2_get_Value_m17FE8D22769DEEF7842D748F9AACA25640CE8965_inline((KeyValuePair_2_tFDD067E9BB73185A40404F8F564726083DB33439 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_m17FE8D22769DEEF7842D748F9AACA25640CE8965_RuntimeMethod_var);
		NullCheck(L_1);
		RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A * L_2 = L_1->get_address_of_Texture_0();
		int32_t L_3 = L_2->get_Width_1();
		AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290 * L_4 = KeyValuePair_2_get_Value_m17FE8D22769DEEF7842D748F9AACA25640CE8965_inline((KeyValuePair_2_tFDD067E9BB73185A40404F8F564726083DB33439 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_m17FE8D22769DEEF7842D748F9AACA25640CE8965_RuntimeMethod_var);
		NullCheck(L_4);
		RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A * L_5 = L_4->get_address_of_Texture_0();
		int32_t L_6 = L_5->get_Height_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_7), (((float)((float)L_3))), (((float)((float)L_6))), /*hidden argument*/NULL);
		KeyValuePair_2_t84F7AC2852F7190A504A786DF292F4684549FC50  L_8;
		memset((&L_8), 0, sizeof(L_8));
		KeyValuePair_2__ctor_mF4F8F57DD4F2EA4179B2C4C5117D7DB2198F408D((&L_8), L_0, L_7, /*hidden argument*/KeyValuePair_2__ctor_mF4F8F57DD4F2EA4179B2C4C5117D7DB2198F408D_RuntimeMethod_var);
		return L_8;
	}
}
// UnityEngine.Color32 Unity.VectorGraphics.VectorUtils/<>c::<BuildSprite>b__33_0(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  U3CU3Ec_U3CBuildSpriteU3Eb__33_0_mEB963D9F5A869F374EECEF6C738430A6D23076EA (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___c0, const RuntimeMethod* method)
{
	{
		// var colors32 = colors.Select(c => (Color32)c);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___c0;
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_1 = Color32_op_Implicit_m52B034473369A651C8952BD916A2AB193E0E5B30(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.VectorGraphics.VectorUtils/<>c::<FillMesh>b__34_0(Unity.VectorGraphics.VectorUtils/Geometry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFillMeshU3Eb__34_0_m3654309568E7AD73BBC6349A91F173E61231A50C (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * __this, Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF * ___g0, const RuntimeMethod* method)
{
	{
		// bool hasUVs = (geoms.FirstOrDefault(g => g.UVs != null)) != null;
		Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF * L_0 = ___g0;
		NullCheck(L_0);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_1 = L_0->get_UVs_1();
		return (bool)((!(((RuntimeObject*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// UnityEngine.Vector3 Unity.VectorGraphics.VectorUtils/<>c::<FillMesh>b__34_1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  U3CU3Ec_U3CFillMeshU3Eb__34_1_mAECE028A28EA8696C6CE0B7A73BDF244B89703D3 (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CFillMeshU3Eb__34_1_mAECE028A28EA8696C6CE0B7A73BDF244B89703D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mesh.SetVertices(vertices.Select(v => (Vector3)v).ToList());
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Unity.VectorGraphics.VectorUtils/<>c::<FillMesh>b__34_2(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CFillMeshU3Eb__34_2_m31925BC9F97A10F534DED6437D0563EB975C2C0A (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * __this, uint16_t ___i0, const RuntimeMethod* method)
{
	{
		// mesh.SetTriangles(indices.Select(i => (int)i).ToArray(), 0);
		uint16_t L_0 = ___i0;
		return L_0;
	}
}
// UnityEngine.Color Unity.VectorGraphics.VectorUtils/<>c::<RenderSprite>b__41_1(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  U3CU3Ec_U3CRenderSpriteU3Eb__41_1_mE90F231F8A0D8C46711C81433EB1FAF2EABCE908 (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * __this, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___c0, const RuntimeMethod* method)
{
	{
		// colors = sprite.GetVertexAttribute<Color32>(VertexAttribute.Color).Select(c => (Color)c).ToArray();
		Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  L_0 = ___c0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_1 = Color32_op_Implicit_mA89CAD76E78975F51DF7374A67D18A5F6EF8DA61(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.VectorGraphics.VectorUtils/<>c::<CubicRoots>b__112_0(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCubicRootsU3Eb__112_0_m5DEA9C9B84FC18B559B6B4726112A0E715F55BCC (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * __this, double ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CCubicRootsU3Eb__112_0_m5DEA9C9B84FC18B559B6B4726112A0E715F55BCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// t.RemoveAll(x => Math.Abs(x + 1.0) < (double)Epsilon);
		double L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_1 = fabs(((double)il2cpp_codegen_add((double)L_0, (double)(1.0))));
		IL2CPP_RUNTIME_CLASS_INIT(VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_il2cpp_TypeInfo_var);
		float L_2 = ((VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_StaticFields*)il2cpp_codegen_static_fields_for(VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_il2cpp_TypeInfo_var))->get_Epsilon_1();
		return (bool)((((double)L_1) < ((double)(((double)((double)L_2)))))? 1 : 0);
	}
}
// System.Single Unity.VectorGraphics.VectorUtils/<>c::<CubicRoots>b__112_1(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CCubicRootsU3Eb__112_1_mED65B6225786F4B14DC0695F9138AB018FC295D4 (U3CU3Ec_tF5F42F8969501F8DB333CE2EB7647CC261800AC9 * __this, double ___x0, const RuntimeMethod* method)
{
	{
		// return t.Select(x => (float)x).ToArray();
		double L_0 = ___x0;
		return (((float)((float)L_0)));
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m98584836E0FEB26C133E896E34810B346898B00B (U3CU3Ec__DisplayClass17_0_t8B1FA7F39042201B677AEC3AFD14345DD0119090 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass17_0::<TraceNodeHierarchyShapes>b__0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  U3CU3Ec__DisplayClass17_0_U3CTraceNodeHierarchyShapesU3Eb__0_m1C35BC0BC1DA3EB5B6550A64D68B33403300245A (U3CU3Ec__DisplayClass17_0_t8B1FA7F39042201B677AEC3AFD14345DD0119090 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass17_0_U3CTraceNodeHierarchyShapesU3Eb__0_m1C35BC0BC1DA3EB5B6550A64D68B33403300245A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// shapes.Add(tracedShape.Select(v => nodeInfo.WorldTransform * v).ToArray());
		SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8 * L_0 = __this->get_address_of_nodeInfo_0();
		Matrix2D_tA940BD215BB784A62583F804540766595258C337  L_1 = L_0->get_WorldTransform_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix2D_tA940BD215BB784A62583F804540766595258C337_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Matrix2D_op_Multiply_m9E4AB895919AC23BBA85261E0D5E1C8CB07C6008(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mAB143DC12BE8349EE5088876FB1EB71251347E5F (U3CU3Ec__DisplayClass20_0_tD0FDA585737BF89248818C9C57454BE7273FDB1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass20_0::<TessellateShapeLibTess>b__1(Unity.VectorGraphics.External.LibTessDotNet.ContourVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  U3CU3Ec__DisplayClass20_0_U3CTessellateShapeLibTessU3Eb__1_mADA6FC704613D86FCB3C4E24F4DA24D4C8B7CD5F (U3CU3Ec__DisplayClass20_0_tD0FDA585737BF89248818C9C57454BE7273FDB1D * __this, ContourVertex_tAB1B9374F699FB1045E9CD85E8F2D9CFF25D49DE  ___v0, const RuntimeMethod* method)
{
	{
		// var vertices = tess.Vertices.Select(v => invMat.MultiplyPoint(new Vector2(v.Position.X, v.Position.Y)));
		Matrix2D_tA940BD215BB784A62583F804540766595258C337 * L_0 = __this->get_address_of_invMat_0();
		ContourVertex_tAB1B9374F699FB1045E9CD85E8F2D9CFF25D49DE  L_1 = ___v0;
		Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD  L_2 = L_1.get_Position_0();
		float L_3 = L_2.get_X_1();
		ContourVertex_tAB1B9374F699FB1045E9CD85E8F2D9CFF25D49DE  L_4 = ___v0;
		Vec3_t0C260E48E2865F9AD1C540D18AE5EC3DF75C48FD  L_5 = L_4.get_Position_0();
		float L_6 = L_5.get_Y_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_7), L_3, L_6, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Matrix2D_MultiplyPoint_m8DEF884C4A21DB99257DBD862030A9CC42DAE952((Matrix2D_tA940BD215BB784A62583F804540766595258C337 *)L_0, L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m6F77463A1A4A2505E04FB7B63EECADF5CE847AF4 (U3CU3Ec__DisplayClass36_0_tCF05EDA889E736D46F8AB9C59869A37191527104 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_1__ctor_m3F9B69C3BAE653EF3719F2E960CF1558823C9C28 (U3CU3Ec__DisplayClass36_1_tA55D9DBAC0542BD2AC6B2D0EAAE29CD6D0CBEFD3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_1::<FillVertexChannels>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  U3CU3Ec__DisplayClass36_1_U3CFillVertexChannelsU3Eb__1_m1A701477B9729E7F8592319A9D33153A51E175CD (U3CU3Ec__DisplayClass36_1_tA55D9DBAC0542BD2AC6B2D0EAAE29CD6D0CBEFD3 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass36_1_U3CFillVertexChannelsU3Eb__1_m1A701477B9729E7F8592319A9D33153A51E175CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// vertices.AddRange(geom.Vertices.Select(x => (geom.WorldTransform * x) / pixelsPerUnit));
		Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF * L_0 = __this->get_geom_0();
		NullCheck(L_0);
		Matrix2D_tA940BD215BB784A62583F804540766595258C337  L_1 = L_0->get_WorldTransform_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix2D_tA940BD215BB784A62583F804540766595258C337_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Matrix2D_op_Multiply_m9E4AB895919AC23BBA85261E0D5E1C8CB07C6008(L_1, L_2, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass36_0_tCF05EDA889E736D46F8AB9C59869A37191527104 * L_4 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_4);
		float L_5 = L_4->get_pixelsPerUnit_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_op_Division_m0961A935168EE6701E098E2B37013DFFF46A5077(L_3, L_5, /*hidden argument*/NULL);
		return L_6;
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_2__ctor_m8587FABF3F9B2E2EA3011D88BF31FFDC664FA280 (U3CU3Ec__DisplayClass36_2_t863677BB7E433238A9ABDD011B0DBF6F75F839EB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt16 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass36_2::<FillVertexChannels>b__0(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t U3CU3Ec__DisplayClass36_2_U3CFillVertexChannelsU3Eb__0_m1A41BF5FFC2CA672EE6835405F6F3FDF37101C48 (U3CU3Ec__DisplayClass36_2_t863677BB7E433238A9ABDD011B0DBF6F75F839EB * __this, uint16_t ___x0, const RuntimeMethod* method)
{
	{
		// indices.AddRange(geom.Indices.Select(x => (UInt16)(x + vertexCount)));
		uint16_t L_0 = ___x0;
		int32_t L_1 = __this->get_vertexCount_0();
		return (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)))));
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
// System.Void Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass41_0__ctor_m6866B38B9EC31CD49A45F6DB82241B9901A2828D (U3CU3Ec__DisplayClass41_0_tCC05A92095004738962F220238DAD6187810D0AF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Unity.VectorGraphics.VectorUtils/<>c__DisplayClass41_0::<RenderSprite>b__0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  U3CU3Ec__DisplayClass41_0_U3CRenderSpriteU3Eb__0_m6FF2ACC35C3B6C169D1A46E785DF9E5F7F40526D (U3CU3Ec__DisplayClass41_0_tCC05A92095004738962F220238DAD6187810D0AF * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method)
{
	{
		// new Vector2((v.x * pixelsToUnits + pivot.x)/spriteWidth,
		//             (v.y * pixelsToUnits + pivot.y)/spriteHeight)
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		float L_2 = __this->get_pixelsToUnits_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_3 = __this->get_address_of_pivot_1();
		float L_4 = L_3->get_x_0();
		float L_5 = __this->get_spriteWidth_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___v0;
		float L_7 = L_6.get_y_1();
		float L_8 = __this->get_pixelsToUnits_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_9 = __this->get_address_of_pivot_1();
		float L_10 = L_9->get_y_1();
		float L_11 = __this->get_spriteHeight_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_12), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), (float)L_4))/(float)L_5)), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)L_10))/(float)L_11)), /*hidden argument*/NULL);
		return L_12;
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
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99__ctor_mB75CBFE1626ACCFB5838BD4046931F60FC5B8292 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_System_IDisposable_Dispose_m53631DFF3BC83282F881F247A31D0FCEDED7CF54 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)2)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3CSceneNodesU3Ed__99_U3CU3Em__Finally2_m67AA436A5FF38D2EEA8B89CD9395ABB7634A4286(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3CSceneNodesU3Ed__99_U3CU3Em__Finally1_mBF3E4BBC82A81E8EE6DA8F1CAB5A40B9A3FB75A9(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSceneNodesU3Ed__99_MoveNext_m390C6241DA70F56881D6BD08B8DD5F542D6F10D9 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSceneNodesU3Ed__99_MoveNext_m390C6241DA70F56881D6BD08B8DD5F542D6F10D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * V_2 = NULL;
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0020;
				}
				case 1:
				{
					goto IL_0041;
				}
				case 2:
				{
					goto IL_00bd;
				}
			}
		}

IL_0019:
		{
			V_0 = (bool)0;
			goto IL_0109;
		}

IL_0020:
		{
			__this->set_U3CU3E1__state_0((-1));
			// yield return root;
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_2 = __this->get_root_3();
			__this->set_U3CU3E2__current_1(L_2);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0109;
		}

IL_0041:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (root.Children != null)
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_3 = __this->get_root_3();
			NullCheck(L_3);
			List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * L_4 = SceneNode_get_Children_mBFE2DC917BE46E64D526FA09915D5D0A007E596B_inline(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_00fe;
			}
		}

IL_0058:
		{
			// foreach (var c in root.Children)
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_5 = __this->get_root_3();
			NullCheck(L_5);
			List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * L_6 = SceneNode_get_Children_mBFE2DC917BE46E64D526FA09915D5D0A007E596B_inline(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8  L_7 = List_1_GetEnumerator_m26D13DC6F1E13F98D293CD5EE7321FFC886605A7(L_6, /*hidden argument*/List_1_GetEnumerator_m26D13DC6F1E13F98D293CD5EE7321FFC886605A7_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_5(L_7);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00df;
		}

IL_0078:
		{
			// foreach (var c in root.Children)
			Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * L_8 = __this->get_address_of_U3CU3E7__wrap1_5();
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_9 = Enumerator_get_Current_m29CC0D0B35A7C83D8800AFF36E657AD8EE6AB194_inline((Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 *)L_8, /*hidden argument*/Enumerator_get_Current_m29CC0D0B35A7C83D8800AFF36E657AD8EE6AB194_RuntimeMethod_var);
			V_2 = L_9;
			// foreach (var n in SceneNodes(c))
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_10 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_il2cpp_TypeInfo_var);
			RuntimeObject* L_11 = VectorUtils_SceneNodes_m47C27C85A553D041541A9953FD77EC5FC81C352F(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			RuntimeObject* L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.SceneNode>::GetEnumerator() */, IEnumerable_1_tEC9E59FA177280B56639F9C0373B6E79CF6C948B_il2cpp_TypeInfo_var, L_11);
			__this->set_U3CU3E7__wrap2_6(L_12);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00c5;
		}

IL_009f:
		{
			// foreach (var n in SceneNodes(c))
			RuntimeObject* L_13 = __this->get_U3CU3E7__wrap2_6();
			NullCheck(L_13);
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_14 = InterfaceFuncInvoker0< SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.SceneNode>::get_Current() */, IEnumerator_1_t6FBBD0D8135E6B300AD8F8709F318EE4653FE95C_il2cpp_TypeInfo_var, L_13);
			V_3 = L_14;
			// yield return n;
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_15 = V_3;
			__this->set_U3CU3E2__current_1(L_15);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0109;
		}

IL_00bd:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_00c5:
		{
			// foreach (var n in SceneNodes(c))
			RuntimeObject* L_16 = __this->get_U3CU3E7__wrap2_6();
			NullCheck(L_16);
			bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_009f;
			}
		}

IL_00d2:
		{
			U3CSceneNodesU3Ed__99_U3CU3Em__Finally2_m67AA436A5FF38D2EEA8B89CD9395ABB7634A4286(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_6((RuntimeObject*)NULL);
		}

IL_00df:
		{
			// foreach (var c in root.Children)
			Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * L_18 = __this->get_address_of_U3CU3E7__wrap1_5();
			bool L_19 = Enumerator_MoveNext_mF6E3C2BB30B10164647E8AEFCBA08FEC3908B54C((Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 *)L_18, /*hidden argument*/Enumerator_MoveNext_mF6E3C2BB30B10164647E8AEFCBA08FEC3908B54C_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0078;
			}
		}

IL_00ec:
		{
			U3CSceneNodesU3Ed__99_U3CU3Em__Finally1_mBF3E4BBC82A81E8EE6DA8F1CAB5A40B9A3FB75A9(__this, /*hidden argument*/NULL);
			Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * L_20 = __this->get_address_of_U3CU3E7__wrap1_5();
			il2cpp_codegen_initobj(L_20, sizeof(Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 ));
		}

IL_00fe:
		{
			// }
			V_0 = (bool)0;
			goto IL_0109;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0102;
	}

FAULT_0102:
	{ // begin fault (depth: 1)
		U3CSceneNodesU3Ed__99_System_IDisposable_Dispose_m53631DFF3BC83282F881F247A31D0FCEDED7CF54(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(258)
	} // end fault
	IL2CPP_CLEANUP(258)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0109:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_U3CU3Em__Finally1_mBF3E4BBC82A81E8EE6DA8F1CAB5A40B9A3FB75A9 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSceneNodesU3Ed__99_U3CU3Em__Finally1_mBF3E4BBC82A81E8EE6DA8F1CAB5A40B9A3FB75A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * L_0 = __this->get_address_of_U3CU3E7__wrap1_5();
		Enumerator_Dispose_m075182691E31A53C8CED4ACDD7BDFA64F4F7F7A9((Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 *)L_0, /*hidden argument*/Enumerator_Dispose_m075182691E31A53C8CED4ACDD7BDFA64F4F7F7A9_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_U3CU3Em__Finally2_m67AA436A5FF38D2EEA8B89CD9395ABB7634A4286 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSceneNodesU3Ed__99_U3CU3Em__Finally2_m67AA436A5FF38D2EEA8B89CD9395ABB7634A4286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_6();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap2_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Unity.VectorGraphics.SceneNode Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.Collections.Generic.IEnumerator<Unity.VectorGraphics.SceneNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * U3CSceneNodesU3Ed__99_System_Collections_Generic_IEnumeratorU3CUnity_VectorGraphics_SceneNodeU3E_get_Current_m6C98A772977409A083C3608025D6F80ED98AECBD (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method)
{
	{
		SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSceneNodesU3Ed__99_System_Collections_IEnumerator_Reset_m265260D4D579E55049FAC2ABB90664B5496E8EA6 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSceneNodesU3Ed__99_System_Collections_IEnumerator_Reset_m265260D4D579E55049FAC2ABB90664B5496E8EA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CSceneNodesU3Ed__99_System_Collections_IEnumerator_Reset_m265260D4D579E55049FAC2ABB90664B5496E8EA6_RuntimeMethod_var);
	}
}
// System.Object Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSceneNodesU3Ed__99_System_Collections_IEnumerator_get_Current_m3CCF61E4494530A0164CFA3D0DFA88009794117D (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method)
{
	{
		SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.SceneNode> Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.Collections.Generic.IEnumerable<Unity.VectorGraphics.SceneNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSceneNodesU3Ed__99_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_SceneNodeU3E_GetEnumerator_mCC6639AB5372FA758F5BF4DA5EBB600FB7A2D6B9 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSceneNodesU3Ed__99_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_SceneNodeU3E_GetEnumerator_mCC6639AB5372FA758F5BF4DA5EBB600FB7A2D6B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * L_3 = (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 *)il2cpp_codegen_object_new(U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0_il2cpp_TypeInfo_var);
		U3CSceneNodesU3Ed__99__ctor_mB75CBFE1626ACCFB5838BD4046931F60FC5B8292(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * L_4 = V_0;
		SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_5 = __this->get_U3CU3E3__root_4();
		NullCheck(L_4);
		L_4->set_root_3(L_5);
		U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Unity.VectorGraphics.VectorUtils/<SceneNodes>d__99::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSceneNodesU3Ed__99_System_Collections_IEnumerable_GetEnumerator_mA4E5A04E54FC3A1A2B52C452655E2FE62D661DF2 (U3CSceneNodesU3Ed__99_tE7057542F994C70941275A274786255857C036F0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CSceneNodesU3Ed__99_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_SceneNodeU3E_GetEnumerator_mCC6639AB5372FA758F5BF4DA5EBB600FB7A2D6B9(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSegmentsInPathU3Ed__106__ctor_m5C5C96C0BA55AA1F7759BCDD0304DF4E72DC6BC8 (U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSegmentsInPathU3Ed__106_System_IDisposable_Dispose_m85C06109691CFCAE9456770A6DE03E3C871A109C (U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSegmentsInPathU3Ed__106_MoveNext_m71616C729429A8EEC83116742440E0896C23E86D (U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSegmentsInPathU3Ed__106_MoveNext_m71616C729429A8EEC83116742440E0896C23E86D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  V_1;
	memset((&V_1), 0, sizeof(V_1));
	BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_00bf;
			}
			case 2:
			{
				goto IL_0147;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var e = segments.GetEnumerator();
		RuntimeObject* L_2 = __this->get_segments_3();
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.BezierPathSegment>::GetEnumerator() */, IEnumerable_1_tEF4AB166C3223A550C3DBB672CF2B95BD172EF8B_il2cpp_TypeInfo_var, L_2);
		__this->set_U3CeU3E5__2_7(L_3);
		// if (!e.MoveNext())
		RuntimeObject* L_4 = __this->get_U3CeU3E5__2_7();
		NullCheck(L_4);
		bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0042:
	{
		// var s1 = e.Current;
		RuntimeObject* L_6 = __this->get_U3CeU3E5__2_7();
		NullCheck(L_6);
		BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  L_7 = InterfaceFuncInvoker0< BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierPathSegment>::get_Current() */, IEnumerator_1_t1B957D27CF87495D8F8585748F41B08631E19B6D_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		// if (!e.MoveNext())
		RuntimeObject* L_8 = __this->get_U3CeU3E5__2_7();
		NullCheck(L_8);
		bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_8);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_005d:
	{
		// var s2 = e.Current;
		RuntimeObject* L_10 = __this->get_U3CeU3E5__2_7();
		NullCheck(L_10);
		BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  L_11 = InterfaceFuncInvoker0< BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierPathSegment>::get_Current() */, IEnumerator_1_t1B957D27CF87495D8F8585748F41B08631E19B6D_il2cpp_TypeInfo_var, L_10);
		__this->set_U3Cs2U3E5__3_8(L_11);
		// yield return new BezierSegment { P0 = s1.P0, P1 = s1.P1, P2 = s1.P2, P3 = s2.P0 };
		il2cpp_codegen_initobj((&V_2), sizeof(BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE ));
		BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  L_12 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = L_12.get_P0_0();
		(&V_2)->set_P0_0(L_13);
		BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  L_14 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = L_14.get_P1_1();
		(&V_2)->set_P1_1(L_15);
		BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  L_16 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = L_16.get_P2_2();
		(&V_2)->set_P2_2(L_17);
		BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250 * L_18 = __this->get_address_of_U3Cs2U3E5__3_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = L_18->get_P0_0();
		(&V_2)->set_P3_3(L_19);
		BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE  L_20 = V_2;
		__this->set_U3CU3E2__current_1(L_20);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00bf:
	{
		__this->set_U3CU3E1__state_0((-1));
		// s1 = s2;
		BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  L_21 = __this->get_U3Cs2U3E5__3_8();
		V_1 = L_21;
		// }
		BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250 * L_22 = __this->get_address_of_U3Cs2U3E5__3_8();
		il2cpp_codegen_initobj(L_22, sizeof(BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250 ));
		// while (e.MoveNext());
		RuntimeObject* L_23 = __this->get_U3CeU3E5__2_7();
		NullCheck(L_23);
		bool L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_23);
		if (L_24)
		{
			goto IL_005d;
		}
	}
	{
		// if (closed)
		bool L_25 = __this->get_closed_5();
		if (!L_25)
		{
			goto IL_014e;
		}
	}
	{
		// yield return new BezierSegment { P0 = s1.P0, P1 = s1.P1, P2 = s1.P2, P3 = segments.First().P0 };
		il2cpp_codegen_initobj((&V_2), sizeof(BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE ));
		BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  L_26 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = L_26.get_P0_0();
		(&V_2)->set_P0_0(L_27);
		BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  L_28 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = L_28.get_P1_1();
		(&V_2)->set_P1_1(L_29);
		BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  L_30 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = L_30.get_P2_2();
		(&V_2)->set_P2_2(L_31);
		RuntimeObject* L_32 = __this->get_segments_3();
		BezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250  L_33 = Enumerable_First_TisBezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250_mFC36756FBDA86184830A5257EC7C8B509ACD7DFA(L_32, /*hidden argument*/Enumerable_First_TisBezierPathSegment_tC72C7D221F961494F4FF7BFD9FBDFD38DA9CA250_mFC36756FBDA86184830A5257EC7C8B509ACD7DFA_RuntimeMethod_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = L_33.get_P0_0();
		(&V_2)->set_P3_3(L_34);
		BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE  L_35 = V_2;
		__this->set_U3CU3E2__current_1(L_35);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0147:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_014e:
	{
		// }
		return (bool)0;
	}
}
// Unity.VectorGraphics.BezierSegment Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.Collections.Generic.IEnumerator<Unity.VectorGraphics.BezierSegment>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE  U3CSegmentsInPathU3Ed__106_System_Collections_Generic_IEnumeratorU3CUnity_VectorGraphics_BezierSegmentU3E_get_Current_m67C1E8740A027067A771053CAB9294D2A1A4BAAD (U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * __this, const RuntimeMethod* method)
{
	{
		BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerator_Reset_mBE0E51CA8D7138EF9E2217F71D5CCD17A0840440 (U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerator_Reset_mBE0E51CA8D7138EF9E2217F71D5CCD17A0840440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerator_Reset_mBE0E51CA8D7138EF9E2217F71D5CCD17A0840440_RuntimeMethod_var);
	}
}
// System.Object Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerator_get_Current_mCD79EBBEBA4F15411FF733CAD5218F4A45EABF48 (U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerator_get_Current_mCD79EBBEBA4F15411FF733CAD5218F4A45EABF48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE  L_0 = __this->get_U3CU3E2__current_1();
		BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE  L_1 = L_0;
		RuntimeObject * L_2 = Box(BezierSegment_tA607958A44B648C4E65F6984ED6BFB840CD50EAE_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.BezierSegment> Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.Collections.Generic.IEnumerable<Unity.VectorGraphics.BezierSegment>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSegmentsInPathU3Ed__106_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_BezierSegmentU3E_GetEnumerator_mCD984426A7B9E18CDCF1422485A76623CF7D9FC8 (U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSegmentsInPathU3Ed__106_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_BezierSegmentU3E_GetEnumerator_mCD984426A7B9E18CDCF1422485A76623CF7D9FC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * L_3 = (U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 *)il2cpp_codegen_object_new(U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0_il2cpp_TypeInfo_var);
		U3CSegmentsInPathU3Ed__106__ctor_m5C5C96C0BA55AA1F7759BCDD0304DF4E72DC6BC8(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * L_4 = V_0;
		RuntimeObject* L_5 = __this->get_U3CU3E3__segments_4();
		NullCheck(L_4);
		L_4->set_segments_3(L_5);
		U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * L_6 = V_0;
		bool L_7 = __this->get_U3CU3E3__closed_6();
		NullCheck(L_6);
		L_6->set_closed_5(L_7);
		U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Unity.VectorGraphics.VectorUtils/<SegmentsInPath>d__106::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSegmentsInPathU3Ed__106_System_Collections_IEnumerable_GetEnumerator_m203C476A5AFAA09C205FF4FF8885B0554B5541AE (U3CSegmentsInPathU3Ed__106_t22003648FB446AE4442E8BC018671AFFC88A21D0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CSegmentsInPathU3Ed__106_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_BezierSegmentU3E_GetEnumerator_mCD984426A7B9E18CDCF1422485A76623CF7D9FC8(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101__ctor_mC15040841231B894AC2E83A9813179F19A39186B (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_System_IDisposable_Dispose_mAB0386D0852444965945BE5BC8B060D776E0636F (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)2)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally2_mAD7F2998CB0E26522E27DA68E67FF616E59C1EE4(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally1_m9ABD30AF4BBAF64CB2363F800CEC212E334AF5EC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWorldTransformedSceneNodesU3Ed__101_MoveNext_m1455B5140E2587BEC224D5D6D6690CF310A11E0D (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWorldTransformedSceneNodesU3Ed__101_MoveNext_m1455B5140E2587BEC224D5D6D6690CF310A11E0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  V_3;
	memset((&V_3), 0, sizeof(V_3));
	SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * V_4 = NULL;
	SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0020;
				}
				case 1:
				{
					goto IL_00ce;
				}
				case 2:
				{
					goto IL_015a;
				}
			}
		}

IL_0019:
		{
			V_0 = (bool)0;
			goto IL_01a9;
		}

IL_0020:
		{
			__this->set_U3CU3E1__state_0((-1));
			// var childOpacity = 1.0f;
			V_2 = (1.0f);
			// if (nodeOpacities == null || !nodeOpacities.TryGetValue(child, out childOpacity))
			Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 * L_2 = __this->get_nodeOpacities_3();
			if (!L_2)
			{
				goto IL_004a;
			}
		}

IL_0035:
		{
			Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 * L_3 = __this->get_nodeOpacities_3();
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_4 = __this->get_child_5();
			NullCheck(L_3);
			bool L_5 = Dictionary_2_TryGetValue_mBE88F6DB40CF1FDD904C2A6DA8CE3761EDC2CC88(L_3, L_4, (float*)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_mBE88F6DB40CF1FDD904C2A6DA8CE3761EDC2CC88_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0050;
			}
		}

IL_004a:
		{
			// childOpacity = 1.0f;
			V_2 = (1.0f);
		}

IL_0050:
		{
			// var childWorldTransform = new SceneNodeWorldTransform()
			// {
			//     Node = child,
			//     WorldTransform = parent.WorldTransform * child.Transform,
			//     WorldOpacity = parent.WorldOpacity * childOpacity,
			//     Parent = parent.Node
			// };
			il2cpp_codegen_initobj((&V_3), sizeof(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8 ));
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_6 = __this->get_child_5();
			(&V_3)->set_Node_0(L_6);
			SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8 * L_7 = __this->get_address_of_parent_7();
			Matrix2D_tA940BD215BB784A62583F804540766595258C337  L_8 = L_7->get_WorldTransform_2();
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_9 = __this->get_child_5();
			NullCheck(L_9);
			Matrix2D_tA940BD215BB784A62583F804540766595258C337  L_10 = SceneNode_get_Transform_mF2D9AC856AE38D3C3E91B6E889C58FF370C358BF_inline(L_9, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Matrix2D_tA940BD215BB784A62583F804540766595258C337_il2cpp_TypeInfo_var);
			Matrix2D_tA940BD215BB784A62583F804540766595258C337  L_11 = Matrix2D_op_Multiply_mE6761401C992DCA62B5130EE656D85C14A821211(L_8, L_10, /*hidden argument*/NULL);
			(&V_3)->set_WorldTransform_2(L_11);
			SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8 * L_12 = __this->get_address_of_parent_7();
			float L_13 = L_12->get_WorldOpacity_3();
			float L_14 = V_2;
			(&V_3)->set_WorldOpacity_3(((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)));
			SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8 * L_15 = __this->get_address_of_parent_7();
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_16 = L_15->get_Node_0();
			(&V_3)->set_Parent_1(L_16);
			SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  L_17 = V_3;
			__this->set_U3CchildWorldTransformU3E5__2_9(L_17);
			// yield return childWorldTransform;
			SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  L_18 = __this->get_U3CchildWorldTransformU3E5__2_9();
			__this->set_U3CU3E2__current_1(L_18);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_01a9;
		}

IL_00ce:
		{
			__this->set_U3CU3E1__state_0((-1));
			// if (child.Children != null)
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_19 = __this->get_child_5();
			NullCheck(L_19);
			List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * L_20 = SceneNode_get_Children_mBFE2DC917BE46E64D526FA09915D5D0A007E596B_inline(L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_019e;
			}
		}

IL_00e5:
		{
			// foreach (var c in child.Children)
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_21 = __this->get_child_5();
			NullCheck(L_21);
			List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * L_22 = SceneNode_get_Children_mBFE2DC917BE46E64D526FA09915D5D0A007E596B_inline(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8  L_23 = List_1_GetEnumerator_m26D13DC6F1E13F98D293CD5EE7321FFC886605A7(L_22, /*hidden argument*/List_1_GetEnumerator_m26D13DC6F1E13F98D293CD5EE7321FFC886605A7_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap2_10(L_23);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_017c;
		}

IL_0105:
		{
			// foreach (var c in child.Children)
			Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * L_24 = __this->get_address_of_U3CU3E7__wrap2_10();
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_25 = Enumerator_get_Current_m29CC0D0B35A7C83D8800AFF36E657AD8EE6AB194_inline((Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 *)L_24, /*hidden argument*/Enumerator_get_Current_m29CC0D0B35A7C83D8800AFF36E657AD8EE6AB194_RuntimeMethod_var);
			V_4 = L_25;
			// foreach (var n in WorldTransformedSceneNodes(c, nodeOpacities, childWorldTransform))
			SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_26 = V_4;
			Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 * L_27 = __this->get_nodeOpacities_3();
			SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  L_28 = __this->get_U3CchildWorldTransformU3E5__2_9();
			IL2CPP_RUNTIME_CLASS_INIT(VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_il2cpp_TypeInfo_var);
			RuntimeObject* L_29 = VectorUtils_WorldTransformedSceneNodes_m71BF8B42C7D0A65922DE6FA9B2D8B5053A2C2A83(L_26, L_27, L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			RuntimeObject* L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform>::GetEnumerator() */, IEnumerable_1_tDCB9E1093E0F48D7D66D0F4EFF0BDC65DA6D4E30_il2cpp_TypeInfo_var, L_29);
			__this->set_U3CU3E7__wrap3_11(L_30);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_0162;
		}

IL_013a:
		{
			// foreach (var n in WorldTransformedSceneNodes(c, nodeOpacities, childWorldTransform))
			RuntimeObject* L_31 = __this->get_U3CU3E7__wrap3_11();
			NullCheck(L_31);
			SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  L_32 = InterfaceFuncInvoker0< SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform>::get_Current() */, IEnumerator_1_tFDA74BA0871756FEBB05BB8E8861C4D551E2D980_il2cpp_TypeInfo_var, L_31);
			V_5 = L_32;
			// yield return n;
			SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  L_33 = V_5;
			__this->set_U3CU3E2__current_1(L_33);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_01a9;
		}

IL_015a:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_0162:
		{
			// foreach (var n in WorldTransformedSceneNodes(c, nodeOpacities, childWorldTransform))
			RuntimeObject* L_34 = __this->get_U3CU3E7__wrap3_11();
			NullCheck(L_34);
			bool L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_34);
			if (L_35)
			{
				goto IL_013a;
			}
		}

IL_016f:
		{
			U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally2_mAD7F2998CB0E26522E27DA68E67FF616E59C1EE4(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap3_11((RuntimeObject*)NULL);
		}

IL_017c:
		{
			// foreach (var c in child.Children)
			Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * L_36 = __this->get_address_of_U3CU3E7__wrap2_10();
			bool L_37 = Enumerator_MoveNext_mF6E3C2BB30B10164647E8AEFCBA08FEC3908B54C((Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 *)L_36, /*hidden argument*/Enumerator_MoveNext_mF6E3C2BB30B10164647E8AEFCBA08FEC3908B54C_RuntimeMethod_var);
			if (L_37)
			{
				goto IL_0105;
			}
		}

IL_018c:
		{
			U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally1_m9ABD30AF4BBAF64CB2363F800CEC212E334AF5EC(__this, /*hidden argument*/NULL);
			Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * L_38 = __this->get_address_of_U3CU3E7__wrap2_10();
			il2cpp_codegen_initobj(L_38, sizeof(Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 ));
		}

IL_019e:
		{
			// }
			V_0 = (bool)0;
			goto IL_01a9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_01a2;
	}

FAULT_01a2:
	{ // begin fault (depth: 1)
		U3CWorldTransformedSceneNodesU3Ed__101_System_IDisposable_Dispose_mAB0386D0852444965945BE5BC8B060D776E0636F(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(418)
	} // end fault
	IL2CPP_CLEANUP(418)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01a9:
	{
		bool L_39 = V_0;
		return L_39;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally1_m9ABD30AF4BBAF64CB2363F800CEC212E334AF5EC (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally1_m9ABD30AF4BBAF64CB2363F800CEC212E334AF5EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 * L_0 = __this->get_address_of_U3CU3E7__wrap2_10();
		Enumerator_Dispose_m075182691E31A53C8CED4ACDD7BDFA64F4F7F7A9((Enumerator_t64680E59F60D4DFBE2C40B5C025D211CBD2310B8 *)L_0, /*hidden argument*/Enumerator_Dispose_m075182691E31A53C8CED4ACDD7BDFA64F4F7F7A9_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally2_mAD7F2998CB0E26522E27DA68E67FF616E59C1EE4 (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWorldTransformedSceneNodesU3Ed__101_U3CU3Em__Finally2_mAD7F2998CB0E26522E27DA68E67FF616E59C1EE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap3_11();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap3_11();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.Collections.Generic.IEnumerator<Unity.VectorGraphics.VectorUtils.SceneNodeWorldTransform>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_Generic_IEnumeratorU3CUnity_VectorGraphics_VectorUtils_SceneNodeWorldTransformU3E_get_Current_m61AE3801F9702787260266513BE9114277BF1D44 (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method)
{
	{
		SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerator_Reset_mE42031565EDB2B08CAC0A2476E33E4EC4B1ACE15 (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerator_Reset_mE42031565EDB2B08CAC0A2476E33E4EC4B1ACE15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerator_Reset_mE42031565EDB2B08CAC0A2476E33E4EC4B1ACE15_RuntimeMethod_var);
	}
}
// System.Object Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerator_get_Current_mF0A52D438540F4FB244FD014CAA81F15984EA1D1 (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerator_get_Current_mF0A52D438540F4FB244FD014CAA81F15984EA1D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  L_0 = __this->get_U3CU3E2__current_1();
		SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  L_1 = L_0;
		RuntimeObject * L_2 = Box(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform> Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.Collections.Generic.IEnumerable<Unity.VectorGraphics.VectorUtils.SceneNodeWorldTransform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_VectorUtils_SceneNodeWorldTransformU3E_GetEnumerator_m95BAF396EEA2DF5DE6C55D60A9AD7BB1305754B2 (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_VectorUtils_SceneNodeWorldTransformU3E_GetEnumerator_m95BAF396EEA2DF5DE6C55D60A9AD7BB1305754B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * L_3 = (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 *)il2cpp_codegen_object_new(U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713_il2cpp_TypeInfo_var);
		U3CWorldTransformedSceneNodesU3Ed__101__ctor_mC15040841231B894AC2E83A9813179F19A39186B(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * L_4 = V_0;
		SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * L_5 = __this->get_U3CU3E3__child_6();
		NullCheck(L_4);
		L_4->set_child_5(L_5);
		U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * L_6 = V_0;
		Dictionary_2_tAAFB0187D9889F877C3F371B2A9FFB65B1C3E774 * L_7 = __this->get_U3CU3E3__nodeOpacities_4();
		NullCheck(L_6);
		L_6->set_nodeOpacities_3(L_7);
		U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * L_8 = V_0;
		SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8  L_9 = __this->get_U3CU3E3__parent_8();
		NullCheck(L_8);
		L_8->set_parent_7(L_9);
		U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator Unity.VectorGraphics.VectorUtils/<WorldTransformedSceneNodes>d__101::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_IEnumerable_GetEnumerator_m1B119F8EEFFAF4C77D7E834B00755ADB2DA3FA19 (U3CWorldTransformedSceneNodesU3Ed__101_t74D9B84814BD193D77B7D925861E80FEA0720713 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CWorldTransformedSceneNodesU3Ed__101_System_Collections_Generic_IEnumerableU3CUnity_VectorGraphics_VectorUtils_SceneNodeWorldTransformU3E_GetEnumerator_m95BAF396EEA2DF5DE6C55D60A9AD7BB1305754B2(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VectorGraphics.VectorUtils/AtlasEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AtlasEntry__ctor_m28325ED3FB1A92DEFF823C633E0F3FA5F9D54209 (AtlasEntry_t05762E6380C9CA467AB30C3B76B2DD9CF6456290 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VectorGraphics.VectorUtils/Geometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geometry__ctor_mABEBE61276345F6502ABCDFAEF7FC743EDB0AAE2 (Geometry_t47AA5F164258B633E7307159CDD1E39890962FBF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VectorGraphics.VectorUtils/JoiningInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoiningInfo__ctor_m9FD00404263CD5161007EF3CB3A35A207F38C212 (JoiningInfo_t07D9FEFDBE5C1D8A12AA99BDECCA506D937683B4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Unity.VectorGraphics.VectorUtils/PackRectItem
IL2CPP_EXTERN_C void PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshal_pinvoke(const PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3& unmarshaled, PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Fill_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Fill' of type 'PackRectItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Fill_3Exception, NULL);
}
IL2CPP_EXTERN_C void PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshal_pinvoke_back(const PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshaled_pinvoke& marshaled, PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3& unmarshaled)
{
	Exception_t* ___Fill_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Fill' of type 'PackRectItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Fill_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.VectorUtils/PackRectItem
IL2CPP_EXTERN_C void PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshal_pinvoke_cleanup(PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.VectorUtils/PackRectItem
IL2CPP_EXTERN_C void PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshal_com(const PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3& unmarshaled, PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshaled_com& marshaled)
{
	Exception_t* ___Fill_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Fill' of type 'PackRectItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Fill_3Exception, NULL);
}
IL2CPP_EXTERN_C void PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshal_com_back(const PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshaled_com& marshaled, PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3& unmarshaled)
{
	Exception_t* ___Fill_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Fill' of type 'PackRectItem': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Fill_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.VectorUtils/PackRectItem
IL2CPP_EXTERN_C void PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshal_com_cleanup(PackRectItem_tFAD064C543B9209BD59937E676A469015050E8D3_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.VectorGraphics.VectorUtils/RawTexture
IL2CPP_EXTERN_C void RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshal_pinvoke(const RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A& unmarshaled, RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_Rgba_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_Rgba_Length = (unmarshaled.get_Rgba_0())->max_length;
		marshaled.___Rgba_0 = il2cpp_codegen_marshal_allocate_array<Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 >(_unmarshaled_Rgba_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_Rgba_Length); i++)
		{
			(marshaled.___Rgba_0)[i] = (unmarshaled.get_Rgba_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___Rgba_0 = NULL;
	}
	marshaled.___Width_1 = unmarshaled.get_Width_1();
	marshaled.___Height_2 = unmarshaled.get_Height_2();
}
IL2CPP_EXTERN_C void RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshal_pinvoke_back(const RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshaled_pinvoke& marshaled, RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___Rgba_0 != NULL)
	{
		if (unmarshaled.get_Rgba_0() == NULL)
		{
			unmarshaled.set_Rgba_0(reinterpret_cast<Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*>((Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_Rgba_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_Rgba_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Rgba_0)[i]);
		}
	}
	int32_t unmarshaled_Width_temp_1 = 0;
	unmarshaled_Width_temp_1 = marshaled.___Width_1;
	unmarshaled.set_Width_1(unmarshaled_Width_temp_1);
	int32_t unmarshaled_Height_temp_2 = 0;
	unmarshaled_Height_temp_2 = marshaled.___Height_2;
	unmarshaled.set_Height_2(unmarshaled_Height_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.VectorUtils/RawTexture
IL2CPP_EXTERN_C void RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshal_pinvoke_cleanup(RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshaled_pinvoke& marshaled)
{
	if (marshaled.___Rgba_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___Rgba_0);
		marshaled.___Rgba_0 = NULL;
	}
}
// Conversion methods for marshalling of: Unity.VectorGraphics.VectorUtils/RawTexture
IL2CPP_EXTERN_C void RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshal_com(const RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A& unmarshaled, RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshaled_com& marshaled)
{
	if (unmarshaled.get_Rgba_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_Rgba_Length = (unmarshaled.get_Rgba_0())->max_length;
		marshaled.___Rgba_0 = il2cpp_codegen_marshal_allocate_array<Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 >(_unmarshaled_Rgba_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_Rgba_Length); i++)
		{
			(marshaled.___Rgba_0)[i] = (unmarshaled.get_Rgba_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___Rgba_0 = NULL;
	}
	marshaled.___Width_1 = unmarshaled.get_Width_1();
	marshaled.___Height_2 = unmarshaled.get_Height_2();
}
IL2CPP_EXTERN_C void RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshal_com_back(const RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshaled_com& marshaled, RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___Rgba_0 != NULL)
	{
		if (unmarshaled.get_Rgba_0() == NULL)
		{
			unmarshaled.set_Rgba_0(reinterpret_cast<Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*>((Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_Rgba_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_Rgba_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___Rgba_0)[i]);
		}
	}
	int32_t unmarshaled_Width_temp_1 = 0;
	unmarshaled_Width_temp_1 = marshaled.___Width_1;
	unmarshaled.set_Width_1(unmarshaled_Width_temp_1);
	int32_t unmarshaled_Height_temp_2 = 0;
	unmarshaled_Height_temp_2 = marshaled.___Height_2;
	unmarshaled.set_Height_2(unmarshaled_Height_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.VectorUtils/RawTexture
IL2CPP_EXTERN_C void RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshal_com_cleanup(RawTexture_t8B631F8313A6BCB9950B3488D85232AD27E35D8A_marshaled_com& marshaled)
{
	if (marshaled.___Rgba_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___Rgba_0);
		marshaled.___Rgba_0 = NULL;
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
// Conversion methods for marshalling of: Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
IL2CPP_EXTERN_C void SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshal_pinvoke(const SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8& unmarshaled, SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'SceneNodeWorldTransform': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_0Exception, NULL);
}
IL2CPP_EXTERN_C void SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshal_pinvoke_back(const SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshaled_pinvoke& marshaled, SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8& unmarshaled)
{
	Exception_t* ___Node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'SceneNodeWorldTransform': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
IL2CPP_EXTERN_C void SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshal_pinvoke_cleanup(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
IL2CPP_EXTERN_C void SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshal_com(const SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8& unmarshaled, SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshaled_com& marshaled)
{
	Exception_t* ___Node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'SceneNodeWorldTransform': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_0Exception, NULL);
}
IL2CPP_EXTERN_C void SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshal_com_back(const SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshaled_com& marshaled, SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8& unmarshaled)
{
	Exception_t* ___Node_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Node' of type 'SceneNodeWorldTransform': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Node_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VectorGraphics.VectorUtils/SceneNodeWorldTransform
IL2CPP_EXTERN_C void SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshal_com_cleanup(SceneNodeWorldTransform_tCC9B9A591A4ACCED680D192BA366503CDF4DE5C8_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_StepDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_StepDistance_mFEE8CD82741A2879F1A72A2C964DBCF3B298FC22 (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method)
{
	{
		// public float StepDistance { get; set; } // A split to happen uniformly at fixed distances
		float L_0 = __this->get_U3CStepDistanceU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float TessellationOptions_get_StepDistance_mFEE8CD82741A2879F1A72A2C964DBCF3B298FC22_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * _thisAdjusted = reinterpret_cast<TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 *>(__this + _offset);
	return TessellationOptions_get_StepDistance_mFEE8CD82741A2879F1A72A2C964DBCF3B298FC22_inline(_thisAdjusted, method);
}
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_StepDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_StepDistance_m47430801471BE14D6E0550838FEC82ACFF2EC3E3 (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float StepDistance { get; set; } // A split to happen uniformly at fixed distances
		float L_0 = ___value0;
		__this->set_U3CStepDistanceU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TessellationOptions_set_StepDistance_m47430801471BE14D6E0550838FEC82ACFF2EC3E3_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * _thisAdjusted = reinterpret_cast<TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 *>(__this + _offset);
	TessellationOptions_set_StepDistance_m47430801471BE14D6E0550838FEC82ACFF2EC3E3_inline(_thisAdjusted, ___value0, method);
}
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxCordDeviation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxCordDeviation_mAE741CDA954F92780C59AAF6F521B3AFA79ECD1A (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_MaxCordDev; }
		float L_0 = __this->get_m_MaxCordDev_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float TessellationOptions_get_MaxCordDeviation_mAE741CDA954F92780C59AAF6F521B3AFA79ECD1A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * _thisAdjusted = reinterpret_cast<TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 *>(__this + _offset);
	return TessellationOptions_get_MaxCordDeviation_mAE741CDA954F92780C59AAF6F521B3AFA79ECD1A_inline(_thisAdjusted, method);
}
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_MaxCordDeviation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_MaxCordDeviation_m9630214E1769FABC4A824A993990446C6977AB5E (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TessellationOptions_set_MaxCordDeviation_m9630214E1769FABC4A824A993990446C6977AB5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * G_B2_0 = NULL;
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * G_B3_1 = NULL;
	{
		// m_MaxCordDev = Mathf.Max(value, 0.0f);
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_0, (0.0f), /*hidden argument*/NULL);
		__this->set_m_MaxCordDev_0(L_1);
		// m_MaxCordDevSq = (m_MaxCordDev == float.MaxValue) ? float.MaxValue : m_MaxCordDev * m_MaxCordDev;
		float L_2 = __this->get_m_MaxCordDev_0();
		G_B1_0 = __this;
		if ((((float)L_2) == ((float)((std::numeric_limits<float>::max)()))))
		{
			G_B2_0 = __this;
			goto IL_002e;
		}
	}
	{
		float L_3 = __this->get_m_MaxCordDev_0();
		float L_4 = __this->get_m_MaxCordDev_0();
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		G_B3_1 = G_B1_0;
		goto IL_0033;
	}

IL_002e:
	{
		G_B3_0 = ((std::numeric_limits<float>::max)());
		G_B3_1 = G_B2_0;
	}

IL_0033:
	{
		G_B3_1->set_m_MaxCordDevSq_1(G_B3_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TessellationOptions_set_MaxCordDeviation_m9630214E1769FABC4A824A993990446C6977AB5E_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * _thisAdjusted = reinterpret_cast<TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 *>(__this + _offset);
	TessellationOptions_set_MaxCordDeviation_m9630214E1769FABC4A824A993990446C6977AB5E(_thisAdjusted, ___value0, method);
}
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxCordDeviationSquared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxCordDeviationSquared_mEAB044D7AEAEE09DDF322FF71CA8C2F45DE56E16 (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method)
{
	{
		// internal float MaxCordDeviationSquared { get { return m_MaxCordDevSq; } }
		float L_0 = __this->get_m_MaxCordDevSq_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float TessellationOptions_get_MaxCordDeviationSquared_mEAB044D7AEAEE09DDF322FF71CA8C2F45DE56E16_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * _thisAdjusted = reinterpret_cast<TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 *>(__this + _offset);
	return TessellationOptions_get_MaxCordDeviationSquared_mEAB044D7AEAEE09DDF322FF71CA8C2F45DE56E16_inline(_thisAdjusted, method);
}
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxTanAngleDeviation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxTanAngleDeviation_mD7902941D5A4A4097FB57BABAD75214FD9FAB29A (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_MaxTanAngleDev; }
		float L_0 = __this->get_m_MaxTanAngleDev_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float TessellationOptions_get_MaxTanAngleDeviation_mD7902941D5A4A4097FB57BABAD75214FD9FAB29A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * _thisAdjusted = reinterpret_cast<TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 *>(__this + _offset);
	return TessellationOptions_get_MaxTanAngleDeviation_mD7902941D5A4A4097FB57BABAD75214FD9FAB29A_inline(_thisAdjusted, method);
}
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_MaxTanAngleDeviation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_MaxTanAngleDeviation_m33D30910F706902B28FC6D3AE6BE0DCDE9AFC2AF (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TessellationOptions_set_MaxTanAngleDeviation_m33D30910F706902B28FC6D3AE6BE0DCDE9AFC2AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MaxTanAngleDev = Mathf.Clamp(value, VectorUtils.Epsilon, Mathf.PI * 0.5f);
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_il2cpp_TypeInfo_var);
		float L_1 = ((VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_StaticFields*)il2cpp_codegen_static_fields_for(VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_il2cpp_TypeInfo_var))->get_Epsilon_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_0, L_1, (1.57079637f), /*hidden argument*/NULL);
		__this->set_m_MaxTanAngleDev_2(L_2);
		// m_MaxTanAngleDevCosine = Mathf.Cos(m_MaxTanAngleDev);
		float L_3 = __this->get_m_MaxTanAngleDev_2();
		float L_4 = cosf(L_3);
		__this->set_m_MaxTanAngleDevCosine_3(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TessellationOptions_set_MaxTanAngleDeviation_m33D30910F706902B28FC6D3AE6BE0DCDE9AFC2AF_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * _thisAdjusted = reinterpret_cast<TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 *>(__this + _offset);
	TessellationOptions_set_MaxTanAngleDeviation_m33D30910F706902B28FC6D3AE6BE0DCDE9AFC2AF(_thisAdjusted, ___value0, method);
}
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_MaxTanAngleDeviationCosine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxTanAngleDeviationCosine_m2E65561104F9C04DD561D14B0A51EB404939B710 (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method)
{
	{
		// internal float MaxTanAngleDeviationCosine { get { return m_MaxTanAngleDevCosine; } } // Cosine of the maximum angle allowed between tangents before a split happens
		float L_0 = __this->get_m_MaxTanAngleDevCosine_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float TessellationOptions_get_MaxTanAngleDeviationCosine_m2E65561104F9C04DD561D14B0A51EB404939B710_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * _thisAdjusted = reinterpret_cast<TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 *>(__this + _offset);
	return TessellationOptions_get_MaxTanAngleDeviationCosine_m2E65561104F9C04DD561D14B0A51EB404939B710_inline(_thisAdjusted, method);
}
// System.Single Unity.VectorGraphics.VectorUtils/TessellationOptions::get_SamplingStepSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TessellationOptions_get_SamplingStepSize_m402B5D65CB572870BEA842934497B62702647148 (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_StepSize; }
		float L_0 = __this->get_m_StepSize_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float TessellationOptions_get_SamplingStepSize_m402B5D65CB572870BEA842934497B62702647148_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * _thisAdjusted = reinterpret_cast<TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 *>(__this + _offset);
	return TessellationOptions_get_SamplingStepSize_m402B5D65CB572870BEA842934497B62702647148_inline(_thisAdjusted, method);
}
// System.Void Unity.VectorGraphics.VectorUtils/TessellationOptions::set_SamplingStepSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TessellationOptions_set_SamplingStepSize_mB05E34C170857DF81143E3E9A016779C1005FC79 (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TessellationOptions_set_SamplingStepSize_mB05E34C170857DF81143E3E9A016779C1005FC79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_StepSize = Mathf.Clamp(value, Epsilon, 1.0f); }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_il2cpp_TypeInfo_var);
		float L_1 = ((VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_StaticFields*)il2cpp_codegen_static_fields_for(VectorUtils_tAE97B3C4C2A418CD37570D8422F4388F8004DAE1_il2cpp_TypeInfo_var))->get_Epsilon_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_0, L_1, (1.0f), /*hidden argument*/NULL);
		__this->set_m_StepSize_4(L_2);
		// set { m_StepSize = Mathf.Clamp(value, Epsilon, 1.0f); }
		return;
	}
}
IL2CPP_EXTERN_C  void TessellationOptions_set_SamplingStepSize_mB05E34C170857DF81143E3E9A016779C1005FC79_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * _thisAdjusted = reinterpret_cast<TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 *>(__this + _offset);
	TessellationOptions_set_SamplingStepSize_mB05E34C170857DF81143E3E9A016779C1005FC79(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture2D Unity.VectorGraphics.VectorUtils/TextureAtlas::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * TextureAtlas_get_Texture_m9E30B47CC8F37FF077816B2A6BF80D34D68153F7 (TextureAtlas_tA4F8A64BE48A02D9F87753643ED5E59A84D81043 * __this, const RuntimeMethod* method)
{
	{
		// public Texture2D Texture { get; set; }
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = __this->get_U3CTextureU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/TextureAtlas::set_Texture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureAtlas_set_Texture_mDE81FB5073D435462923B166EC82006AAF765C64 (TextureAtlas_tA4F8A64BE48A02D9F87753643ED5E59A84D81043 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___value0, const RuntimeMethod* method)
{
	{
		// public Texture2D Texture { get; set; }
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___value0;
		__this->set_U3CTextureU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Unity.VectorGraphics.VectorUtils/PackRectItem> Unity.VectorGraphics.VectorUtils/TextureAtlas::get_Entries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A * TextureAtlas_get_Entries_m9D9BA7FBF256ABB5969B8DC30E922B50FBC8B9E4 (TextureAtlas_tA4F8A64BE48A02D9F87753643ED5E59A84D81043 * __this, const RuntimeMethod* method)
{
	{
		// public List<PackRectItem> Entries { get; set; }
		List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A * L_0 = __this->get_U3CEntriesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/TextureAtlas::set_Entries(System.Collections.Generic.List`1<Unity.VectorGraphics.VectorUtils/PackRectItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureAtlas_set_Entries_mA9F54AF6BD710457F2B126123FA936B5031AA445 (TextureAtlas_tA4F8A64BE48A02D9F87753643ED5E59A84D81043 * __this, List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A * ___value0, const RuntimeMethod* method)
{
	{
		// public List<PackRectItem> Entries { get; set; }
		List_1_t252920BCF840F9F53E5F49A1F5C97D205734801A * L_0 = ___value0;
		__this->set_U3CEntriesU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Unity.VectorGraphics.VectorUtils/TextureAtlas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureAtlas__ctor_mBFFEAB09FFB06B4A49552976116062B1BAF9B984 (TextureAtlas_tA4F8A64BE48A02D9F87753643ED5E59A84D81043 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Unity.VectorGraphics.XmlReaderIterator::.ctor(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderIterator__ctor_mF1025D12DF58326EE63080D58FFA5AADE520806A (XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9 * __this, XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader0, const RuntimeMethod* method)
{
	{
		// public XmlReaderIterator(XmlReader reader) { this.reader = reader; }
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// public XmlReaderIterator(XmlReader reader) { this.reader = reader; }
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = ___reader0;
		__this->set_reader_0(L_0);
		// public XmlReaderIterator(XmlReader reader) { this.reader = reader; }
		return;
	}
}
// System.Boolean Unity.VectorGraphics.XmlReaderIterator::GoToRoot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlReaderIterator_GoToRoot_mC10C3C6F0B4E17DBD88A732ADFD53562C6D04759 (XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9 * __this, String_t* ___tagName0, const RuntimeMethod* method)
{
	{
		// public bool GoToRoot(string tagName) { return reader.ReadToFollowing(tagName) && reader.Depth == 0; }
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_reader_0();
		String_t* L_1 = ___tagName0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Xml.XmlReader::ReadToFollowing(System.String) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = __this->get_reader_0();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_3);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// Unity.VectorGraphics.XmlReaderIterator/Node Unity.VectorGraphics.XmlReaderIterator::VisitCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * XmlReaderIterator_VisitCurrent_m2383103EE93711321383B46268DACB5DA99146AB (XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReaderIterator_VisitCurrent_m2383103EE93711321383B46268DACB5DA99146AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Node VisitCurrent() { currentElementVisited = true; return new Node(reader); }
		__this->set_currentElementVisited_1((bool)1);
		// public Node VisitCurrent() { currentElementVisited = true; return new Node(reader); }
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_reader_0();
		Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * L_1 = (Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 *)il2cpp_codegen_object_new(Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753_il2cpp_TypeInfo_var);
		Node__ctor_mD4C11D034F47BCAA4CE15EA8AEF3C3369FA7D1A3(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.VectorGraphics.XmlReaderIterator::IsEmptyElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlReaderIterator_IsEmptyElement_m7CFA6D29E6DCE5A1CE01E2D748A55EFBD89B0459 (XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsEmptyElement() { return reader.IsEmptyElement; }
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_0);
		return L_1;
	}
}
// System.Boolean Unity.VectorGraphics.XmlReaderIterator::GoToNextChild(Unity.VectorGraphics.XmlReaderIterator/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlReaderIterator_GoToNextChild_mE52E23AF48FCF98CEED979079A35F59141F778AB (XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9 * __this, Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * ___node0, const RuntimeMethod* method)
{
	{
		// if (!currentElementVisited)
		bool L_0 = __this->get_currentElementVisited_1();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// return reader.Depth == node.Depth + 1;
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_1 = __this->get_reader_0();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_1);
		Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * L_3 = ___node0;
		NullCheck(L_3);
		int32_t L_4 = Node_get_Depth_mD3E08D481120613C65130FE3659F9DC066092D55_inline(L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))))? 1 : 0);
	}

IL_001e:
	{
		// reader.Read();
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_5 = __this->get_reader_0();
		NullCheck(L_5);
		VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XmlReader::Read() */, L_5);
		goto IL_0038;
	}

IL_002c:
	{
		// reader.Read();
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_6 = __this->get_reader_0();
		NullCheck(L_6);
		VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XmlReader::Read() */, L_6);
	}

IL_0038:
	{
		// while ((reader.NodeType != XmlNodeType.None) && (reader.NodeType != XmlNodeType.Element))
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_7 = __this->get_reader_0();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_7);
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_9 = __this->get_reader_0();
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_002c;
		}
	}

IL_0053:
	{
		// if (reader.NodeType != XmlNodeType.Element)
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_11 = __this->get_reader_0();
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_11);
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0063;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0063:
	{
		// currentElementVisited = false;
		__this->set_currentElementVisited_1((bool)0);
		// return reader.Depth == node.Depth + 1;
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_13 = __this->get_reader_0();
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_13);
		Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * L_15 = ___node0;
		NullCheck(L_15);
		int32_t L_16 = Node_get_Depth_mD3E08D481120613C65130FE3659F9DC066092D55_inline(L_15, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_14) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1))))? 1 : 0);
	}
}
// System.Void Unity.VectorGraphics.XmlReaderIterator::SkipCurrentChildTree(Unity.VectorGraphics.XmlReaderIterator/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlReaderIterator_SkipCurrentChildTree_mE291AD2BB54A8D9D3B72122E3B639EB29A31998E (XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9 * __this, Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * ___node0, const RuntimeMethod* method)
{
	{
		goto IL_000e;
	}

IL_0002:
	{
		// SkipCurrentChildTree(VisitCurrent());
		Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * L_0 = XmlReaderIterator_VisitCurrent_m2383103EE93711321383B46268DACB5DA99146AB(__this, /*hidden argument*/NULL);
		XmlReaderIterator_SkipCurrentChildTree_mE291AD2BB54A8D9D3B72122E3B639EB29A31998E(__this, L_0, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// while (GoToNextChild(node))
		Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * L_1 = ___node0;
		bool L_2 = XmlReaderIterator_GoToNextChild_mE52E23AF48FCF98CEED979079A35F59141F778AB(__this, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.String Unity.VectorGraphics.XmlReaderIterator::ReadTextWithinElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlReaderIterator_ReadTextWithinElement_m048ACC696E6F60F392807282ED2949A1D56E6053 (XmlReaderIterator_tBE6CAE539F067D294F34B2C241CED33F1C3689A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReaderIterator_ReadTextWithinElement_m048ACC696E6F60F392807282ED2949A1D56E6053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (reader.IsEmptyElement)
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_reader_0();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_0);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0013:
	{
		// var text = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_002d;
	}

IL_001b:
	{
		// text += reader.Value;
		String_t* L_2 = V_0;
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = __this->get_reader_0();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_3);
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_002d:
	{
		// while (reader.Read() && reader.NodeType != XmlNodeType.EndElement)
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_6 = __this->get_reader_0();
		NullCheck(L_6);
		bool L_7 = VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Xml.XmlReader::Read() */, L_6);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_8 = __this->get_reader_0();
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_001b;
		}
	}

IL_0049:
	{
		// return text;
		String_t* L_10 = V_0;
		return L_10;
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
// System.Void Unity.VectorGraphics.XmlReaderIterator/Node::.ctor(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_mD4C11D034F47BCAA4CE15EA8AEF3C3369FA7D1A3 (Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * __this, XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * ___reader0, const RuntimeMethod* method)
{
	{
		// public Node(XmlReader reader) { this.reader = reader; name = reader.Name; depth = reader.Depth; }
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// public Node(XmlReader reader) { this.reader = reader; name = reader.Name; depth = reader.Depth; }
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = ___reader0;
		__this->set_reader_0(L_0);
		// public Node(XmlReader reader) { this.reader = reader; name = reader.Name; depth = reader.Depth; }
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_1 = ___reader0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_1);
		__this->set_name_2(L_2);
		// public Node(XmlReader reader) { this.reader = reader; name = reader.Name; depth = reader.Depth; }
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_3 = ___reader0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_3);
		__this->set_depth_1(L_4);
		// public Node(XmlReader reader) { this.reader = reader; name = reader.Name; depth = reader.Depth; }
		return;
	}
}
// System.String Unity.VectorGraphics.XmlReaderIterator/Node::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Node_get_Name_mD7535FEE3EE81C13F646C6BB85145150547ABB59 (Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get { return name; } }
		String_t* L_0 = __this->get_name_2();
		return L_0;
	}
}
// System.String Unity.VectorGraphics.XmlReaderIterator/Node::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Node_get_Item_m5CC7DCA5D6C448455F9128BA1A21CECC9E2A4A6D (Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * __this, String_t* ___attrib0, const RuntimeMethod* method)
{
	{
		// public string this[string attrib] { get { return reader.GetAttribute(attrib); } }
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_reader_0();
		String_t* L_1 = ___attrib0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(18 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_0, L_1);
		return L_2;
	}
}
// Unity.VectorGraphics.SVGPropertySheet Unity.VectorGraphics.XmlReaderIterator/Node::GetAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SVGPropertySheet_t3A460AFD6333BE9BB1A6515B17660A20C2D9B987 * Node_GetAttributes_m8D4C154B1124950C5A8BCD88926E3475B1D761DF (Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Node_GetAttributes_m8D4C154B1124950C5A8BCD88926E3475B1D761DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SVGPropertySheet_t3A460AFD6333BE9BB1A6515B17660A20C2D9B987 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var atts = new SVGPropertySheet();
		SVGPropertySheet_t3A460AFD6333BE9BB1A6515B17660A20C2D9B987 * L_0 = (SVGPropertySheet_t3A460AFD6333BE9BB1A6515B17660A20C2D9B987 *)il2cpp_codegen_object_new(SVGPropertySheet_t3A460AFD6333BE9BB1A6515B17660A20C2D9B987_il2cpp_TypeInfo_var);
		SVGPropertySheet__ctor_m163758901F27290A640E261A661E8866B8FD6740(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < reader.AttributeCount; ++i)
		V_1 = 0;
		goto IL_0036;
	}

IL_000a:
	{
		// reader.MoveToAttribute(i);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_1 = __this->get_reader_0();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(20 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_1, L_2);
		// atts[reader.Name] = reader.Value;
		SVGPropertySheet_t3A460AFD6333BE9BB1A6515B17660A20C2D9B987 * L_3 = V_0;
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_4 = __this->get_reader_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlReader::get_Name() */, L_4);
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_6 = __this->get_reader_0();
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Xml.XmlReader::get_Value() */, L_6);
		NullCheck(L_3);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_3, L_5, L_7, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		// for (int i = 0; i < reader.AttributeCount; ++i)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0036:
	{
		// for (int i = 0; i < reader.AttributeCount; ++i)
		int32_t L_9 = V_1;
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_10 = __this->get_reader_0();
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_000a;
		}
	}
	{
		// reader.MoveToElement();
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_12 = __this->get_reader_0();
		NullCheck(L_12);
		VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_12);
		// return atts;
		SVGPropertySheet_t3A460AFD6333BE9BB1A6515B17660A20C2D9B987 * L_13 = V_0;
		return L_13;
	}
}
// Unity.VectorGraphics.SVGFormatException Unity.VectorGraphics.XmlReaderIterator/Node::GetException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SVGFormatException_tA618F278F4913ED5EEEBA01AE80B7AEB859F1C35 * Node_GetException_mCB30EC191BB48E6BAEFCA0B772504FBDECD27037 (Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Node_GetException_mCB30EC191BB48E6BAEFCA0B772504FBDECD27037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SVGFormatException GetException(string message) { return new SVGFormatException(reader, message); }
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_reader_0();
		String_t* L_1 = ___message0;
		SVGFormatException_tA618F278F4913ED5EEEBA01AE80B7AEB859F1C35 * L_2 = (SVGFormatException_tA618F278F4913ED5EEEBA01AE80B7AEB859F1C35 *)il2cpp_codegen_object_new(SVGFormatException_tA618F278F4913ED5EEEBA01AE80B7AEB859F1C35_il2cpp_TypeInfo_var);
		SVGFormatException__ctor_m285CE5C6D30DA9EC256CF8037D1C0CCF2141FB49(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.VectorGraphics.SVGFormatException Unity.VectorGraphics.XmlReaderIterator/Node::GetUnsupportedAttribValException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SVGFormatException_tA618F278F4913ED5EEEBA01AE80B7AEB859F1C35 * Node_GetUnsupportedAttribValException_mA198B6B4B8158C4E1A20A2C2CAA29E59ED2BC8EE (Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * __this, String_t* ___attrib0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Node_GetUnsupportedAttribValException_mA198B6B4B8158C4E1A20A2C2CAA29E59ED2BC8EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new SVGFormatException(reader, "Value '" + this[attrib] + "' is invalid for attribute '" + attrib + "'");
		XmlReader_t13F08E3C651EB9F2AE882342BCD5E2CA86F29ABB * L_0 = __this->get_reader_0();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral952F591CE06D904FF69AD52282C6739282D79F5E);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral952F591CE06D904FF69AD52282C6739282D79F5E);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		String_t* L_4 = ___attrib0;
		String_t* L_5 = Node_get_Item_m5CC7DCA5D6C448455F9128BA1A21CECC9E2A4A6D(__this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral7A3DC4DE60A2C9A65C32B49B9276B7BCC54764B2);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral7A3DC4DE60A2C9A65C32B49B9276B7BCC54764B2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		String_t* L_8 = ___attrib0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8);
		String_t* L_10 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_9, /*hidden argument*/NULL);
		SVGFormatException_tA618F278F4913ED5EEEBA01AE80B7AEB859F1C35 * L_11 = (SVGFormatException_tA618F278F4913ED5EEEBA01AE80B7AEB859F1C35 *)il2cpp_codegen_object_new(SVGFormatException_tA618F278F4913ED5EEEBA01AE80B7AEB859F1C35_il2cpp_TypeInfo_var);
		SVGFormatException__ctor_m285CE5C6D30DA9EC256CF8037D1C0CCF2141FB49(L_11, L_0, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Int32 Unity.VectorGraphics.XmlReaderIterator/Node::get_Depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Node_get_Depth_mD3E08D481120613C65130FE3659F9DC066092D55 (Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * __this, const RuntimeMethod* method)
{
	{
		// public int Depth { get { return depth; } }
		int32_t L_0 = __this->get_depth_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * SceneNode_get_Children_mBFE2DC917BE46E64D526FA09915D5D0A007E596B_inline (SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * __this, const RuntimeMethod* method)
{
	{
		// public List<SceneNode> Children { get; set; }
		List_1_t3E772F1F05FBBB79F955B82717D2A4F242A60B22 * L_0 = __this->get_U3CChildrenU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Matrix2D_tA940BD215BB784A62583F804540766595258C337  SceneNode_get_Transform_mF2D9AC856AE38D3C3E91B6E889C58FF370C358BF_inline (SceneNode_tF6BAD94043FD9DDDD5C06AB31C4815B94F65F343 * __this, const RuntimeMethod* method)
{
	{
		// public Matrix2D Transform { get { return m_Transform; } set { m_Transform = value; } }
		Matrix2D_tA940BD215BB784A62583F804540766595258C337  L_0 = __this->get_m_Transform_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TessellationOptions_get_StepDistance_mFEE8CD82741A2879F1A72A2C964DBCF3B298FC22_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method)
{
	{
		// public float StepDistance { get; set; } // A split to happen uniformly at fixed distances
		float L_0 = __this->get_U3CStepDistanceU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TessellationOptions_set_StepDistance_m47430801471BE14D6E0550838FEC82ACFF2EC3E3_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float StepDistance { get; set; } // A split to happen uniformly at fixed distances
		float L_0 = ___value0;
		__this->set_U3CStepDistanceU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxCordDeviation_mAE741CDA954F92780C59AAF6F521B3AFA79ECD1A_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_MaxCordDev; }
		float L_0 = __this->get_m_MaxCordDev_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxCordDeviationSquared_mEAB044D7AEAEE09DDF322FF71CA8C2F45DE56E16_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method)
{
	{
		// internal float MaxCordDeviationSquared { get { return m_MaxCordDevSq; } }
		float L_0 = __this->get_m_MaxCordDevSq_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxTanAngleDeviation_mD7902941D5A4A4097FB57BABAD75214FD9FAB29A_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_MaxTanAngleDev; }
		float L_0 = __this->get_m_MaxTanAngleDev_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TessellationOptions_get_MaxTanAngleDeviationCosine_m2E65561104F9C04DD561D14B0A51EB404939B710_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method)
{
	{
		// internal float MaxTanAngleDeviationCosine { get { return m_MaxTanAngleDevCosine; } } // Cosine of the maximum angle allowed between tangents before a split happens
		float L_0 = __this->get_m_MaxTanAngleDevCosine_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TessellationOptions_get_SamplingStepSize_m402B5D65CB572870BEA842934497B62702647148_inline (TessellationOptions_t664E8E5B48EAE0E2AC0BC8C453AFB3FF6A760877 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_StepSize; }
		float L_0 = __this->get_m_StepSize_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Node_get_Depth_mD3E08D481120613C65130FE3659F9DC066092D55_inline (Node_t6EDD9C5A91F2CB0C7773C4E02934669E309CC753 * __this, const RuntimeMethod* method)
{
	{
		// public int Depth { get { return depth; } }
		int32_t L_0 = __this->get_depth_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
