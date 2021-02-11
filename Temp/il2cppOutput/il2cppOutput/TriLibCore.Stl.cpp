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

template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<TriLibCore.AssetLoaderContext>
struct Action_1_t57AAE3636637079C037401BC720A2B653BB98703;
// System.Action`1<TriLibCore.IContextualizedError>
struct Action_1_t79BF8CF3F7689ED296BB59F0FE1EB5518C2B103A;
// System.Action`2<TriLibCore.AssetLoaderContext,System.Single>
struct Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,TriLibCore.Interfaces.IModel>[]
struct EntryU5BU5D_t754DBC193BC050F4B9A1806E8EC52C6780FD8DE7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>[]
struct EntryU5BU5D_t7B235BA73AB0F9EB0F33B7F251F4AD5FED85BE74;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TriLibCore.Interfaces.IModel>
struct KeyCollection_t086392A013A3F5FE69A0715461E888797660A7E3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>
struct KeyCollection_tB41E896550AE42C087D319DA75683910FA8942ED;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TriLibCore.Interfaces.IModel>
struct ValueCollection_tBA0155381369E19FD228BACACD1E8AEA0B835610;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>
struct ValueCollection_tDFFEF71B988FD7F9578D05DCD2090801E9369E1E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>
struct Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A;
// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>
struct Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667;
// System.Collections.Generic.IDictionary`2<System.Int32,TriLibCore.Interfaces.IGeometry>
struct IDictionary_2_t82A094F4E3D78783637DB36B426018D3A9A59110;
// System.Collections.Generic.IDictionary`2<TriLibCore.Interfaces.IModel,UnityEngine.GameObject>
struct IDictionary_2_tBF768F61B33127C039AE2BAEC8DC28D8CB33E838;
// System.Collections.Generic.IDictionary`2<UnityEngine.GameObject,System.String>
struct IDictionary_2_t249D631B1E6D566AA4C7524395316C9B88FBFC24;
// System.Collections.Generic.IDictionary`2<UnityEngine.GameObject,TriLibCore.Interfaces.IModel>
struct IDictionary_2_t39C6667F50E662B723A93B13A0A14D52E1921513;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<TriLibCore.Interfaces.IModel>
struct IEnumerable_1_t9C56372D4181A90B589F714CE1AE1CC7AA9C72B1;
// System.Collections.Generic.IEnumerable`1<TriLibCore.Stl.Reader.StlGeometryGroup>
struct IEnumerable_1_t1205F6D356AAFA2DCED3B4950CF57EAEEF55CD3A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tF29E035126153F9F00537AA5AF6CF508765D3708;
// System.Collections.Generic.IList`1<TriLibCore.Geometries.PositionNormalVertexData>
struct IList_1_t2F514C7B2AF1509EC543192A69CDB8501EB0F313;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation>
struct IList_1_t24F446E864DD4F4D8F5C1A0EA619DC772A5C38B6;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IBlendShapeKey>
struct IList_1_tD2D9B7DAA8399E02F5D3E42255F8EB04500E1F1E;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>
struct IList_1_t4737D3225BDCBB9382ECB21BBD13FD6F8EFB9F6D;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>
struct IList_1_t5F0FF7BD21D4695CCCB837C658611673470A9158;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>
struct IList_1_tC74CD31A6FF298092234A6F8F46270F3630A0EE6;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture>
struct IList_1_t69F811AC7E036B8432D8959F4DC73D02C69112C1;
// System.Collections.Generic.IList`1<UnityEngine.BoneWeight1>[]
struct IList_1U5BU5D_tD95C007BC4E5692D2BF8B5D076047DC2E89740A6;
// System.Collections.Generic.IList`1<UnityEngine.BoneWeight>
struct IList_1_t9187D17751D6420D37BA416D86B59FEA0AE80A34;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E;
// System.Collections.Generic.List`1<TriLibCore.Interfaces.IModel>
struct List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_tFB87A8A948C1087E530344595EAB9727C97EA783;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.BinaryReader
struct BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.StreamReader
struct StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TriLibCore.AssetLoaderContext
struct AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5;
// TriLibCore.AssetLoaderOptions
struct AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6;
// TriLibCore.General.ConcurrentDictionary`2<System.String,System.String>
struct ConcurrentDictionary_2_tC0E1744A1B59A747EB28E188F4BF190AC1F870EA;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.General.CompoundTextureKey,TriLibCore.General.TextureGroup>
struct ConcurrentDictionary_2_tB3EFA4D915BD2DCD26B663F9F3B0BC52BA36EC69;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.General.CompountMaterialKey,TriLibCore.General.TextureGroup>
struct ConcurrentDictionary_2_t6ABF27377932E2B801A2D43BAF6038137AA3344A;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,System.Collections.Generic.List`1<TriLibCore.MaterialRendererContext>>
struct ConcurrentDictionary_2_tA995E7CBD84A5E1F27AA21FBEC153B6BCA1D827F;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,UnityEngine.Material>
struct ConcurrentDictionary_2_t0EC55B1C4CC8F4735AA76631B30661520E0BA59C;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.ITexture,TriLibCore.General.TextureGroup>
struct ConcurrentDictionary_2_t83753B2C6862CCDA4DB4ECF48F3821028DCF9EF5;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.ITexture,TriLibCore.TextureLoadingContext>
struct ConcurrentDictionary_2_tCCB0F5957DF55BC986EECE9BF83CEF789FAB21FB;
// TriLibCore.General.HumanDescription
struct HumanDescription_tEACA23902C6C7408E1CCF42A06E9B12486F48325;
// TriLibCore.Geometries.Geometry
struct Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D;
// TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalVertexData>
struct GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5;
// TriLibCore.Geometries.PositionNormalVertexData[]
struct PositionNormalVertexDataU5BU5D_tBFE6A1723AC565E9CF4913143D052BF128CF1387;
// TriLibCore.Interfaces.IGeometryGroup
struct IGeometryGroup_tEB81CE51CC61019AD15D5EF71D81E437C7F0683C;
// TriLibCore.Interfaces.IModel
struct IModel_tFF0B5258B592E120735557A31A506201B33525B6;
// TriLibCore.Interfaces.IModel[]
struct IModelU5BU5D_t8E43B007852E57E489CE94181C364ECE55FC7B7A;
// TriLibCore.Interfaces.IRootModel
struct IRootModel_t513220F97B0790AE4E1C4416507771CD1E17304F;
// TriLibCore.Mappers.AnimationClipMapper[]
struct AnimationClipMapperU5BU5D_tE903B789E016DB3111F1C61C9E9892C03459CB96;
// TriLibCore.Mappers.ExternalDataMapper
struct ExternalDataMapper_t22E930F982328E0861BB36A1B5DF2B4D36B7C9DA;
// TriLibCore.Mappers.HumanoidAvatarMapper
struct HumanoidAvatarMapper_t89D9B00DCB730E454EFB3D487631459AA98F5AAF;
// TriLibCore.Mappers.LipSyncMapper[]
struct LipSyncMapperU5BU5D_t37FA8F6F4C7A5458234DB2A568F8A621F7A8EA69;
// TriLibCore.Mappers.MaterialMapper[]
struct MaterialMapperU5BU5D_tF588CE83499BAA8C6713C7F3CC0A21AFC92F431B;
// TriLibCore.Mappers.RootBoneMapper
struct RootBoneMapper_t03DA8C0E317148BABFD0BB03F6EB15E186B1159D;
// TriLibCore.Mappers.TextureMapper
struct TextureMapper_t5F507BD9487F7208C0C0F0557319705ED3850251;
// TriLibCore.ReaderBase
struct ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F;
// TriLibCore.Stl.Reader.StlGeometryGroup
struct StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6;
// TriLibCore.Stl.Reader.StlGeometryGroup[]
struct StlGeometryGroupU5BU5D_t66A01DFA109EABB82A06675C5FFC912AD8790BE5;
// TriLibCore.Stl.Reader.StlReader
struct StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC;
// TriLibCore.Stl.StlGeometry
struct StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D;
// TriLibCore.Stl.StlModel
struct StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089;
// TriLibCore.Stl.StlProcessor
struct StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A;
// TriLibCore.Stl.StlRootModel
struct StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76;
// TriLibCore.Stl.StlStreamReader
struct StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1;
// UnityEngine.Avatar
struct Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_tBE8DF5947569FD4C3DE66A992156741202DC82B9;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;

IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tB55AD6102F2440DC49EF31BA85C499F9DC2294F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1DF823E482339EB6067F4134408B0B8B28411A78;
IL2CPP_EXTERN_C String_t* _stringLiteral21743A4BD308E00A9B7CB303EDB9DCC99223E1D7;
IL2CPP_EXTERN_C String_t* _stringLiteral66869AA5FE0A7B130EA98F65CCB7E663B31CBF2C;
IL2CPP_EXTERN_C String_t* _stringLiteral69E699BC1F92CB92ACFB304F419753E2FF473845;
IL2CPP_EXTERN_C String_t* _stringLiteral6B4776BE4E7C4854E1996CC13464D240C32D15C1;
IL2CPP_EXTERN_C String_t* _stringLiteral7505D64A54E061B7ACD54CCD58B49DC43500B635;
IL2CPP_EXTERN_C String_t* _stringLiteral9C2A6E4809AEEF7B7712CA4DB05A681452F4F748;
IL2CPP_EXTERN_C String_t* _stringLiteralB1417920698F32A6D3E9B074A0DCE5DEF3F415B9;
IL2CPP_EXTERN_C String_t* _stringLiteralCA1FA4CE8316291B1C4697B4548B2D34E0889A68;
IL2CPP_EXTERN_C String_t* _stringLiteralCA7FCD046940EF1012CC48F1F72BDEEA47AC9E37;
IL2CPP_EXTERN_C String_t* _stringLiteralCD39251B68912E31F92F3736064ED317DEA79DE8;
IL2CPP_EXTERN_C String_t* _stringLiteralD0A311742C7F874B4BE54C611F2210551FBC76C9;
IL2CPP_EXTERN_C String_t* _stringLiteralE0B8ECB019BFE3B0E11BB99421BEA98C685AFD17;
IL2CPP_EXTERN_C String_t* _stringLiteralFAEABFFD035E23DA9307BB6445D59EA09481B99E;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7920B3BAC96DD0039343006AB4353750C6267995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mAA41DD686257939146E5446172FD6A0C9191475C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE992F6E2E1DCFF6095A506AF1E5D4D82AA7139ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0B2F1A5C279BB8A329A8EC563509225F72B8D8EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m89EE6FF8C68FB9EEAE22C2E1A3BBD5DA281DB517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m3D2E659A5CE1E3FDC54C95C8FF3FC26FB62ED776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mB60118F39E54B113F79C06ED80475D704C1111D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisStlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6_m4144286030EF1CCD8B2FD281857F25D9BBF88FD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeometryGroup_1_GetGeometry_TisStlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D_m87C1AF1F2130C6311F05F68B3BA8CD96EB6C51CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeometryGroup_1__ctor_m280F32B3522F9777894B074B37380932F1559311_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeometryGroup_1_get_Name_m6CA82976E17896A56C4B0B84898BC7EA18AEBE75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeometryGroup_1_set_Name_m0DDF11170E796B9F033625B0CEE04117D8EAAFC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geometry_AddVertex_TisPositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468_mF465A11C95FB0D1C4142CE53AB5D4547CB244AEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAA99369EA5AC4E7C7615CE6F3FEA673F67178011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StlProcessor_ParseASCII_mDEB3B364D0C1C2AEEC9210C5F2BB864AE4B654D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StlStreamReader_ReadTokenAsFloat_mC7A7B8CAB8B25FAB4BEEBD9577C5B6639BBF3EC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t StlGeometryGroup__ctor_mBC6D545612FD8DD5D740EB4116BE650F0E21E1B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StlProcessor_GetActiveGeometryGroup_mB48FB6BCE76D29418B6CE66C58098AB888E803B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StlProcessor_GetActiveGeometry_mBBEFFBFCB0208948230DA2FD120C718A9C6F546D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StlProcessor_GetNormal_m9BF7F7ABFDE938D5CC32B79D4802F50D0C9A75E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StlProcessor_ParseASCII_mDEB3B364D0C1C2AEEC9210C5F2BB864AE4B654D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StlProcessor_ParseBinary_m1E3235F4ED02AC9D1DE88B49FB6D651EF8BE4D6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StlProcessor__ctor_m8B239FA57ADE9963A689C7577B8D3403EDDB17A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StlReader_GetExtensions_m7397DC4BACE828B62C46A306F361EB21AC6F3C9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StlReader_ReadStream_m92ACB2DD3854BB4C23D6D2DFC3710CE7EEC03677_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StlStreamReader_ReadTokenAsFloat_mC7A7B8CAB8B25FAB4BEEBD9577C5B6639BBF3EC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StlStreamReader__ctor_m40612154C321752932D3321D65AFF83691C195BD_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct StlGeometryGroupU5BU5D_t66A01DFA109EABB82A06675C5FFC912AD8790BE5;
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tD29230162028FAA7B3F0708A8176BF29CE80D93E 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2_ValueCollection<System.String,TriLibCore.Interfaces.IModel>
struct  ValueCollection_tBA0155381369E19FD228BACACD1E8AEA0B835610  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tBA0155381369E19FD228BACACD1E8AEA0B835610, ___dictionary_0)); }
	inline Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2_ValueCollection<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>
struct  ValueCollection_tDFFEF71B988FD7F9578D05DCD2090801E9369E1E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_ValueCollection::dictionary
	Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tDFFEF71B988FD7F9578D05DCD2090801E9369E1E, ___dictionary_0)); }
	inline Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>
struct  Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t754DBC193BC050F4B9A1806E8EC52C6780FD8DE7* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t086392A013A3F5FE69A0715461E888797660A7E3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBA0155381369E19FD228BACACD1E8AEA0B835610 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A, ___entries_1)); }
	inline EntryU5BU5D_t754DBC193BC050F4B9A1806E8EC52C6780FD8DE7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t754DBC193BC050F4B9A1806E8EC52C6780FD8DE7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t754DBC193BC050F4B9A1806E8EC52C6780FD8DE7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A, ___keys_7)); }
	inline KeyCollection_t086392A013A3F5FE69A0715461E888797660A7E3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t086392A013A3F5FE69A0715461E888797660A7E3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t086392A013A3F5FE69A0715461E888797660A7E3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A, ___values_8)); }
	inline ValueCollection_tBA0155381369E19FD228BACACD1E8AEA0B835610 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBA0155381369E19FD228BACACD1E8AEA0B835610 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBA0155381369E19FD228BACACD1E8AEA0B835610 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>
struct  Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7B235BA73AB0F9EB0F33B7F251F4AD5FED85BE74* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB41E896550AE42C087D319DA75683910FA8942ED * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDFFEF71B988FD7F9578D05DCD2090801E9369E1E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667, ___entries_1)); }
	inline EntryU5BU5D_t7B235BA73AB0F9EB0F33B7F251F4AD5FED85BE74* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7B235BA73AB0F9EB0F33B7F251F4AD5FED85BE74** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7B235BA73AB0F9EB0F33B7F251F4AD5FED85BE74* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667, ___keys_7)); }
	inline KeyCollection_tB41E896550AE42C087D319DA75683910FA8942ED * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB41E896550AE42C087D319DA75683910FA8942ED ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB41E896550AE42C087D319DA75683910FA8942ED * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667, ___values_8)); }
	inline ValueCollection_tDFFEF71B988FD7F9578D05DCD2090801E9369E1E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDFFEF71B988FD7F9578D05DCD2090801E9369E1E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDFFEF71B988FD7F9578D05DCD2090801E9369E1E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<TriLibCore.Interfaces.IModel>
struct  List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IModelU5BU5D_t8E43B007852E57E489CE94181C364ECE55FC7B7A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540, ____items_1)); }
	inline IModelU5BU5D_t8E43B007852E57E489CE94181C364ECE55FC7B7A* get__items_1() const { return ____items_1; }
	inline IModelU5BU5D_t8E43B007852E57E489CE94181C364ECE55FC7B7A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IModelU5BU5D_t8E43B007852E57E489CE94181C364ECE55FC7B7A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IModelU5BU5D_t8E43B007852E57E489CE94181C364ECE55FC7B7A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540_StaticFields, ____emptyArray_5)); }
	inline IModelU5BU5D_t8E43B007852E57E489CE94181C364ECE55FC7B7A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IModelU5BU5D_t8E43B007852E57E489CE94181C364ECE55FC7B7A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IModelU5BU5D_t8E43B007852E57E489CE94181C364ECE55FC7B7A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
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
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
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
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.IO.BinaryReader
struct  BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_stream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_buffer_1() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_buffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_buffer_1() const { return ___m_buffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_buffer_1() { return &___m_buffer_1; }
	inline void set_m_buffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_decoder_2() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_decoder_2)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_m_decoder_2() const { return ___m_decoder_2; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_m_decoder_2() { return &___m_decoder_2; }
	inline void set_m_decoder_2(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___m_decoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_decoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBytes_3() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBytes_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_charBytes_3() const { return ___m_charBytes_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_charBytes_3() { return &___m_charBytes_3; }
	inline void set_m_charBytes_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_charBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBytes_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_singleChar_4() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_singleChar_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_singleChar_4() const { return ___m_singleChar_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_singleChar_4() { return &___m_singleChar_4; }
	inline void set_m_singleChar_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_singleChar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_singleChar_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBuffer_5)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_charBuffer_5() const { return ___m_charBuffer_5; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_charBuffer_5() { return &___m_charBuffer_5; }
	inline void set_m_charBuffer_5(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_maxCharsSize_6() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_maxCharsSize_6)); }
	inline int32_t get_m_maxCharsSize_6() const { return ___m_maxCharsSize_6; }
	inline int32_t* get_address_of_m_maxCharsSize_6() { return &___m_maxCharsSize_6; }
	inline void set_m_maxCharsSize_6(int32_t value)
	{
		___m_maxCharsSize_6 = value;
	}

	inline static int32_t get_offset_of_m_2BytesPerChar_7() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_2BytesPerChar_7)); }
	inline bool get_m_2BytesPerChar_7() const { return ___m_2BytesPerChar_7; }
	inline bool* get_address_of_m_2BytesPerChar_7() { return &___m_2BytesPerChar_7; }
	inline void set_m_2BytesPerChar_7(bool value)
	{
		___m_2BytesPerChar_7 = value;
	}

	inline static int32_t get_offset_of_m_isMemoryStream_8() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_isMemoryStream_8)); }
	inline bool get_m_isMemoryStream_8() const { return ___m_isMemoryStream_8; }
	inline bool* get_address_of_m_isMemoryStream_8() { return &___m_isMemoryStream_8; }
	inline void set_m_isMemoryStream_8(bool value)
	{
		___m_isMemoryStream_8 = value;
	}

	inline static int32_t get_offset_of_m_leaveOpen_9() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_leaveOpen_9)); }
	inline bool get_m_leaveOpen_9() const { return ___m_leaveOpen_9; }
	inline bool* get_address_of_m_leaveOpen_9() { return &___m_leaveOpen_9; }
	inline void set_m_leaveOpen_9(bool value)
	{
		___m_leaveOpen_9 = value;
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
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

// TriLibCore.Geometries.Geometry
struct  Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Geometries.Geometry::<OriginalVertexIndices>k__BackingField
	RuntimeObject* ___U3COriginalVertexIndicesU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Geometries.Geometry::<VertexDataIndices>k__BackingField
	RuntimeObject* ___U3CVertexDataIndicesU3Ek__BackingField_1;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Geometries.Geometry::<GeometryGroup>k__BackingField
	RuntimeObject* ___U3CGeometryGroupU3Ek__BackingField_2;
	// System.Int32 TriLibCore.Geometries.Geometry::<MaterialIndex>k__BackingField
	int32_t ___U3CMaterialIndexU3Ek__BackingField_3;
	// System.Boolean TriLibCore.Geometries.Geometry::<IsQuad>k__BackingField
	bool ___U3CIsQuadU3Ek__BackingField_4;
	// System.Int32 TriLibCore.Geometries.Geometry::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3COriginalVertexIndicesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D, ___U3COriginalVertexIndicesU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3COriginalVertexIndicesU3Ek__BackingField_0() const { return ___U3COriginalVertexIndicesU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3COriginalVertexIndicesU3Ek__BackingField_0() { return &___U3COriginalVertexIndicesU3Ek__BackingField_0; }
	inline void set_U3COriginalVertexIndicesU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3COriginalVertexIndicesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COriginalVertexIndicesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVertexDataIndicesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D, ___U3CVertexDataIndicesU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CVertexDataIndicesU3Ek__BackingField_1() const { return ___U3CVertexDataIndicesU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CVertexDataIndicesU3Ek__BackingField_1() { return &___U3CVertexDataIndicesU3Ek__BackingField_1; }
	inline void set_U3CVertexDataIndicesU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CVertexDataIndicesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVertexDataIndicesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGeometryGroupU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D, ___U3CGeometryGroupU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CGeometryGroupU3Ek__BackingField_2() const { return ___U3CGeometryGroupU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CGeometryGroupU3Ek__BackingField_2() { return &___U3CGeometryGroupU3Ek__BackingField_2; }
	inline void set_U3CGeometryGroupU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CGeometryGroupU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGeometryGroupU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaterialIndexU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D, ___U3CMaterialIndexU3Ek__BackingField_3)); }
	inline int32_t get_U3CMaterialIndexU3Ek__BackingField_3() const { return ___U3CMaterialIndexU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CMaterialIndexU3Ek__BackingField_3() { return &___U3CMaterialIndexU3Ek__BackingField_3; }
	inline void set_U3CMaterialIndexU3Ek__BackingField_3(int32_t value)
	{
		___U3CMaterialIndexU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsQuadU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D, ___U3CIsQuadU3Ek__BackingField_4)); }
	inline bool get_U3CIsQuadU3Ek__BackingField_4() const { return ___U3CIsQuadU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsQuadU3Ek__BackingField_4() { return &___U3CIsQuadU3Ek__BackingField_4; }
	inline void set_U3CIsQuadU3Ek__BackingField_4(bool value)
	{
		___U3CIsQuadU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D, ___U3CIndexU3Ek__BackingField_5)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_5() const { return ___U3CIndexU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_5() { return &___U3CIndexU3Ek__BackingField_5; }
	inline void set_U3CIndexU3Ek__BackingField_5(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_5 = value;
	}
};


// TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalVertexData>
struct  GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5  : public RuntimeObject
{
public:
	// UnityEngine.Mesh TriLibCore.Geometries.GeometryGroup`1::_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ____mesh_0;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasNormals
	bool ____hasNormals_1;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasTangents
	bool ____hasTangents_2;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasColors
	bool ____hasColors_3;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasUV1
	bool ____hasUV1_4;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasUV2
	bool ____hasUV2_5;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasUV3
	bool ____hasUV3_6;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasUV4
	bool ____hasUV4_7;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasBones
	bool ____hasBones_8;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasInvalidNormals
	bool ____hasInvalidNormals_9;
	// System.String TriLibCore.Geometries.GeometryGroup`1::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_10;
	// System.Collections.Generic.IList`1<UnityEngine.BoneWeight1>[] TriLibCore.Geometries.GeometryGroup`1::_rawBoneWeights
	IList_1U5BU5D_tD95C007BC4E5692D2BF8B5D076047DC2E89740A6* ____rawBoneWeights_11;
	// System.Collections.Generic.IList`1<UnityEngine.BoneWeight> TriLibCore.Geometries.GeometryGroup`1::<ProcessedBoneWeights>k__BackingField
	RuntimeObject* ___U3CProcessedBoneWeightsU3Ek__BackingField_12;
	// System.Collections.Generic.IList`1<TVertexData> TriLibCore.Geometries.GeometryGroup`1::<VerticesData>k__BackingField
	RuntimeObject* ___U3CVerticesDataU3Ek__BackingField_13;
	// System.Collections.Generic.IDictionary`2<System.Int32,TriLibCore.Interfaces.IGeometry> TriLibCore.Geometries.GeometryGroup`1::<GeometriesData>k__BackingField
	RuntimeObject* ___U3CGeometriesDataU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IBlendShapeKey> TriLibCore.Geometries.GeometryGroup`1::<BlendShapeKeys>k__BackingField
	RuntimeObject* ___U3CBlendShapeKeysU3Ek__BackingField_15;
	// System.Int32 TriLibCore.Geometries.GeometryGroup`1::<VerticesCount>k__BackingField
	int32_t ___U3CVerticesCountU3Ek__BackingField_16;
	// System.Int32 TriLibCore.Geometries.GeometryGroup`1::<VerticesCapacity>k__BackingField
	int32_t ___U3CVerticesCapacityU3Ek__BackingField_17;
	// System.Int32 TriLibCore.Geometries.GeometryGroup`1::<GeometriesCapacity>k__BackingField
	int32_t ___U3CGeometriesCapacityU3Ek__BackingField_18;
	// System.Int32 TriLibCore.Geometries.GeometryGroup`1::<BonesCapacity>k__BackingField
	int32_t ___U3CBonesCapacityU3Ek__BackingField_19;
	// TVertexData[] TriLibCore.Geometries.GeometryGroup`1::_buffer
	PositionNormalVertexDataU5BU5D_tBFE6A1723AC565E9CF4913143D052BF128CF1387* ____buffer_20;

public:
	inline static int32_t get_offset_of__mesh_0() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ____mesh_0)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get__mesh_0() const { return ____mesh_0; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of__mesh_0() { return &____mesh_0; }
	inline void set__mesh_0(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		____mesh_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mesh_0), (void*)value);
	}

	inline static int32_t get_offset_of__hasNormals_1() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ____hasNormals_1)); }
	inline bool get__hasNormals_1() const { return ____hasNormals_1; }
	inline bool* get_address_of__hasNormals_1() { return &____hasNormals_1; }
	inline void set__hasNormals_1(bool value)
	{
		____hasNormals_1 = value;
	}

	inline static int32_t get_offset_of__hasTangents_2() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ____hasTangents_2)); }
	inline bool get__hasTangents_2() const { return ____hasTangents_2; }
	inline bool* get_address_of__hasTangents_2() { return &____hasTangents_2; }
	inline void set__hasTangents_2(bool value)
	{
		____hasTangents_2 = value;
	}

	inline static int32_t get_offset_of__hasColors_3() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ____hasColors_3)); }
	inline bool get__hasColors_3() const { return ____hasColors_3; }
	inline bool* get_address_of__hasColors_3() { return &____hasColors_3; }
	inline void set__hasColors_3(bool value)
	{
		____hasColors_3 = value;
	}

	inline static int32_t get_offset_of__hasUV1_4() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ____hasUV1_4)); }
	inline bool get__hasUV1_4() const { return ____hasUV1_4; }
	inline bool* get_address_of__hasUV1_4() { return &____hasUV1_4; }
	inline void set__hasUV1_4(bool value)
	{
		____hasUV1_4 = value;
	}

	inline static int32_t get_offset_of__hasUV2_5() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ____hasUV2_5)); }
	inline bool get__hasUV2_5() const { return ____hasUV2_5; }
	inline bool* get_address_of__hasUV2_5() { return &____hasUV2_5; }
	inline void set__hasUV2_5(bool value)
	{
		____hasUV2_5 = value;
	}

	inline static int32_t get_offset_of__hasUV3_6() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ____hasUV3_6)); }
	inline bool get__hasUV3_6() const { return ____hasUV3_6; }
	inline bool* get_address_of__hasUV3_6() { return &____hasUV3_6; }
	inline void set__hasUV3_6(bool value)
	{
		____hasUV3_6 = value;
	}

	inline static int32_t get_offset_of__hasUV4_7() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ____hasUV4_7)); }
	inline bool get__hasUV4_7() const { return ____hasUV4_7; }
	inline bool* get_address_of__hasUV4_7() { return &____hasUV4_7; }
	inline void set__hasUV4_7(bool value)
	{
		____hasUV4_7 = value;
	}

	inline static int32_t get_offset_of__hasBones_8() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ____hasBones_8)); }
	inline bool get__hasBones_8() const { return ____hasBones_8; }
	inline bool* get_address_of__hasBones_8() { return &____hasBones_8; }
	inline void set__hasBones_8(bool value)
	{
		____hasBones_8 = value;
	}

	inline static int32_t get_offset_of__hasInvalidNormals_9() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ____hasInvalidNormals_9)); }
	inline bool get__hasInvalidNormals_9() const { return ____hasInvalidNormals_9; }
	inline bool* get_address_of__hasInvalidNormals_9() { return &____hasInvalidNormals_9; }
	inline void set__hasInvalidNormals_9(bool value)
	{
		____hasInvalidNormals_9 = value;
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ___U3CNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CNameU3Ek__BackingField_10() const { return ___U3CNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_10() { return &___U3CNameU3Ek__BackingField_10; }
	inline void set_U3CNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of__rawBoneWeights_11() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ____rawBoneWeights_11)); }
	inline IList_1U5BU5D_tD95C007BC4E5692D2BF8B5D076047DC2E89740A6* get__rawBoneWeights_11() const { return ____rawBoneWeights_11; }
	inline IList_1U5BU5D_tD95C007BC4E5692D2BF8B5D076047DC2E89740A6** get_address_of__rawBoneWeights_11() { return &____rawBoneWeights_11; }
	inline void set__rawBoneWeights_11(IList_1U5BU5D_tD95C007BC4E5692D2BF8B5D076047DC2E89740A6* value)
	{
		____rawBoneWeights_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rawBoneWeights_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProcessedBoneWeightsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ___U3CProcessedBoneWeightsU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CProcessedBoneWeightsU3Ek__BackingField_12() const { return ___U3CProcessedBoneWeightsU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CProcessedBoneWeightsU3Ek__BackingField_12() { return &___U3CProcessedBoneWeightsU3Ek__BackingField_12; }
	inline void set_U3CProcessedBoneWeightsU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CProcessedBoneWeightsU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProcessedBoneWeightsU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVerticesDataU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ___U3CVerticesDataU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CVerticesDataU3Ek__BackingField_13() const { return ___U3CVerticesDataU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CVerticesDataU3Ek__BackingField_13() { return &___U3CVerticesDataU3Ek__BackingField_13; }
	inline void set_U3CVerticesDataU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CVerticesDataU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVerticesDataU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGeometriesDataU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ___U3CGeometriesDataU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CGeometriesDataU3Ek__BackingField_14() const { return ___U3CGeometriesDataU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CGeometriesDataU3Ek__BackingField_14() { return &___U3CGeometriesDataU3Ek__BackingField_14; }
	inline void set_U3CGeometriesDataU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CGeometriesDataU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGeometriesDataU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBlendShapeKeysU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ___U3CBlendShapeKeysU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CBlendShapeKeysU3Ek__BackingField_15() const { return ___U3CBlendShapeKeysU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CBlendShapeKeysU3Ek__BackingField_15() { return &___U3CBlendShapeKeysU3Ek__BackingField_15; }
	inline void set_U3CBlendShapeKeysU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CBlendShapeKeysU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBlendShapeKeysU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVerticesCountU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ___U3CVerticesCountU3Ek__BackingField_16)); }
	inline int32_t get_U3CVerticesCountU3Ek__BackingField_16() const { return ___U3CVerticesCountU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CVerticesCountU3Ek__BackingField_16() { return &___U3CVerticesCountU3Ek__BackingField_16; }
	inline void set_U3CVerticesCountU3Ek__BackingField_16(int32_t value)
	{
		___U3CVerticesCountU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CVerticesCapacityU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ___U3CVerticesCapacityU3Ek__BackingField_17)); }
	inline int32_t get_U3CVerticesCapacityU3Ek__BackingField_17() const { return ___U3CVerticesCapacityU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CVerticesCapacityU3Ek__BackingField_17() { return &___U3CVerticesCapacityU3Ek__BackingField_17; }
	inline void set_U3CVerticesCapacityU3Ek__BackingField_17(int32_t value)
	{
		___U3CVerticesCapacityU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CGeometriesCapacityU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ___U3CGeometriesCapacityU3Ek__BackingField_18)); }
	inline int32_t get_U3CGeometriesCapacityU3Ek__BackingField_18() const { return ___U3CGeometriesCapacityU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CGeometriesCapacityU3Ek__BackingField_18() { return &___U3CGeometriesCapacityU3Ek__BackingField_18; }
	inline void set_U3CGeometriesCapacityU3Ek__BackingField_18(int32_t value)
	{
		___U3CGeometriesCapacityU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CBonesCapacityU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ___U3CBonesCapacityU3Ek__BackingField_19)); }
	inline int32_t get_U3CBonesCapacityU3Ek__BackingField_19() const { return ___U3CBonesCapacityU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CBonesCapacityU3Ek__BackingField_19() { return &___U3CBonesCapacityU3Ek__BackingField_19; }
	inline void set_U3CBonesCapacityU3Ek__BackingField_19(int32_t value)
	{
		___U3CBonesCapacityU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of__buffer_20() { return static_cast<int32_t>(offsetof(GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5, ____buffer_20)); }
	inline PositionNormalVertexDataU5BU5D_tBFE6A1723AC565E9CF4913143D052BF128CF1387* get__buffer_20() const { return ____buffer_20; }
	inline PositionNormalVertexDataU5BU5D_tBFE6A1723AC565E9CF4913143D052BF128CF1387** get_address_of__buffer_20() { return &____buffer_20; }
	inline void set__buffer_20(PositionNormalVertexDataU5BU5D_tBFE6A1723AC565E9CF4913143D052BF128CF1387* value)
	{
		____buffer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_20), (void*)value);
	}
};


// TriLibCore.ReaderBase
struct  ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F  : public RuntimeObject
{
public:
	// System.Int32 TriLibCore.ReaderBase::ExtraStepsCount
	int32_t ___ExtraStepsCount_0;
	// TriLibCore.AssetLoaderContext TriLibCore.ReaderBase::<AssetLoaderContext>k__BackingField
	AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * ___U3CAssetLoaderContextU3Ek__BackingField_1;
	// System.String TriLibCore.ReaderBase::_filename
	String_t* ____filename_2;
	// System.Action`2<TriLibCore.AssetLoaderContext,System.Single> TriLibCore.ReaderBase::_onProgress
	Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 * ____onProgress_3;
	// System.Int32 TriLibCore.ReaderBase::_nameCounter
	int32_t ____nameCounter_4;
	// System.Int32 TriLibCore.ReaderBase::_materialCounter
	int32_t ____materialCounter_5;
	// System.Int32 TriLibCore.ReaderBase::_textureCounter
	int32_t ____textureCounter_6;
	// System.Int32 TriLibCore.ReaderBase::_geometryGroupCounter
	int32_t ____geometryGroupCounter_7;
	// System.Int32 TriLibCore.ReaderBase::_animationCounter
	int32_t ____animationCounter_8;

public:
	inline static int32_t get_offset_of_ExtraStepsCount_0() { return static_cast<int32_t>(offsetof(ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F, ___ExtraStepsCount_0)); }
	inline int32_t get_ExtraStepsCount_0() const { return ___ExtraStepsCount_0; }
	inline int32_t* get_address_of_ExtraStepsCount_0() { return &___ExtraStepsCount_0; }
	inline void set_ExtraStepsCount_0(int32_t value)
	{
		___ExtraStepsCount_0 = value;
	}

	inline static int32_t get_offset_of_U3CAssetLoaderContextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F, ___U3CAssetLoaderContextU3Ek__BackingField_1)); }
	inline AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * get_U3CAssetLoaderContextU3Ek__BackingField_1() const { return ___U3CAssetLoaderContextU3Ek__BackingField_1; }
	inline AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 ** get_address_of_U3CAssetLoaderContextU3Ek__BackingField_1() { return &___U3CAssetLoaderContextU3Ek__BackingField_1; }
	inline void set_U3CAssetLoaderContextU3Ek__BackingField_1(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * value)
	{
		___U3CAssetLoaderContextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAssetLoaderContextU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of__filename_2() { return static_cast<int32_t>(offsetof(ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F, ____filename_2)); }
	inline String_t* get__filename_2() const { return ____filename_2; }
	inline String_t** get_address_of__filename_2() { return &____filename_2; }
	inline void set__filename_2(String_t* value)
	{
		____filename_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____filename_2), (void*)value);
	}

	inline static int32_t get_offset_of__onProgress_3() { return static_cast<int32_t>(offsetof(ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F, ____onProgress_3)); }
	inline Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 * get__onProgress_3() const { return ____onProgress_3; }
	inline Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 ** get_address_of__onProgress_3() { return &____onProgress_3; }
	inline void set__onProgress_3(Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 * value)
	{
		____onProgress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____onProgress_3), (void*)value);
	}

	inline static int32_t get_offset_of__nameCounter_4() { return static_cast<int32_t>(offsetof(ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F, ____nameCounter_4)); }
	inline int32_t get__nameCounter_4() const { return ____nameCounter_4; }
	inline int32_t* get_address_of__nameCounter_4() { return &____nameCounter_4; }
	inline void set__nameCounter_4(int32_t value)
	{
		____nameCounter_4 = value;
	}

	inline static int32_t get_offset_of__materialCounter_5() { return static_cast<int32_t>(offsetof(ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F, ____materialCounter_5)); }
	inline int32_t get__materialCounter_5() const { return ____materialCounter_5; }
	inline int32_t* get_address_of__materialCounter_5() { return &____materialCounter_5; }
	inline void set__materialCounter_5(int32_t value)
	{
		____materialCounter_5 = value;
	}

	inline static int32_t get_offset_of__textureCounter_6() { return static_cast<int32_t>(offsetof(ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F, ____textureCounter_6)); }
	inline int32_t get__textureCounter_6() const { return ____textureCounter_6; }
	inline int32_t* get_address_of__textureCounter_6() { return &____textureCounter_6; }
	inline void set__textureCounter_6(int32_t value)
	{
		____textureCounter_6 = value;
	}

	inline static int32_t get_offset_of__geometryGroupCounter_7() { return static_cast<int32_t>(offsetof(ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F, ____geometryGroupCounter_7)); }
	inline int32_t get__geometryGroupCounter_7() const { return ____geometryGroupCounter_7; }
	inline int32_t* get_address_of__geometryGroupCounter_7() { return &____geometryGroupCounter_7; }
	inline void set__geometryGroupCounter_7(int32_t value)
	{
		____geometryGroupCounter_7 = value;
	}

	inline static int32_t get_offset_of__animationCounter_8() { return static_cast<int32_t>(offsetof(ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F, ____animationCounter_8)); }
	inline int32_t get__animationCounter_8() const { return ____animationCounter_8; }
	inline int32_t* get_address_of__animationCounter_8() { return &____animationCounter_8; }
	inline void set__animationCounter_8(int32_t value)
	{
		____animationCounter_8 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextReader
struct  TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ___Null_3)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_Null_3() const { return ___Null_3; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
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


// System.Threading.CancellationToken
struct  CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB, ___m_source_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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


// TriLibCore.Stl.Reader.StlGeometryGroup
struct  StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6  : public GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5
{
public:

public:
};


// TriLibCore.Stl.Reader.StlReader
struct  StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC  : public ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F
{
public:

public:
};


// TriLibCore.Stl.StlGeometry
struct  StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D  : public Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D
{
public:

public:
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
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


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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

// System.Globalization.NumberStyles
struct  NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.SeekOrigin
struct  SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamReader
struct  StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E  : public TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___stream_5)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_5() const { return ___stream_5; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___encoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___decoder_7)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___byteBuffer_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charBuffer_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____preamble_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E, ____asyncReadTask_20)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_StaticFields, ___Null_4)); }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * get_Null_4() const { return ___Null_4; }
	inline StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// TriLibCore.AssetLoaderContext
struct  AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5  : public RuntimeObject
{
public:
	// TriLibCore.AssetLoaderOptions TriLibCore.AssetLoaderContext::Options
	AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6 * ___Options_0;
	// TriLibCore.ReaderBase TriLibCore.AssetLoaderContext::Reader
	ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * ___Reader_1;
	// System.String TriLibCore.AssetLoaderContext::Filename
	String_t* ___Filename_2;
	// System.String TriLibCore.AssetLoaderContext::FileExtension
	String_t* ___FileExtension_3;
	// System.IO.Stream TriLibCore.AssetLoaderContext::Stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Stream_4;
	// System.String TriLibCore.AssetLoaderContext::BasePath
	String_t* ___BasePath_5;
	// UnityEngine.GameObject TriLibCore.AssetLoaderContext::RootGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___RootGameObject_6;
	// TriLibCore.Interfaces.IRootModel TriLibCore.AssetLoaderContext::RootModel
	RuntimeObject* ___RootModel_7;
	// System.Collections.Generic.IDictionary`2<TriLibCore.Interfaces.IModel,UnityEngine.GameObject> TriLibCore.AssetLoaderContext::GameObjects
	RuntimeObject* ___GameObjects_8;
	// System.Collections.Generic.IDictionary`2<UnityEngine.GameObject,TriLibCore.Interfaces.IModel> TriLibCore.AssetLoaderContext::Models
	RuntimeObject* ___Models_9;
	// System.Collections.Generic.IDictionary`2<UnityEngine.GameObject,System.String> TriLibCore.AssetLoaderContext::GameObjectPaths
	RuntimeObject* ___GameObjectPaths_10;
	// UnityEngine.Transform[] TriLibCore.AssetLoaderContext::BoneTransforms
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ___BoneTransforms_11;
	// UnityEngine.Transform TriLibCore.AssetLoaderContext::RootBone
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___RootBone_12;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.ITexture,TriLibCore.TextureLoadingContext> TriLibCore.AssetLoaderContext::LoadedTextures
	ConcurrentDictionary_2_tCCB0F5957DF55BC986EECE9BF83CEF789FAB21FB * ___LoadedTextures_13;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.ITexture,TriLibCore.General.TextureGroup> TriLibCore.AssetLoaderContext::LoadedTextureGroups
	ConcurrentDictionary_2_t83753B2C6862CCDA4DB4ECF48F3821028DCF9EF5 * ___LoadedTextureGroups_14;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,System.Collections.Generic.List`1<TriLibCore.MaterialRendererContext>> TriLibCore.AssetLoaderContext::MaterialRenderers
	ConcurrentDictionary_2_tA995E7CBD84A5E1F27AA21FBEC153B6BCA1D827F * ___MaterialRenderers_15;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,UnityEngine.Material> TriLibCore.AssetLoaderContext::LoadedMaterials
	ConcurrentDictionary_2_t0EC55B1C4CC8F4735AA76631B30661520E0BA59C * ___LoadedMaterials_16;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,UnityEngine.Material> TriLibCore.AssetLoaderContext::GeneratedMaterials
	ConcurrentDictionary_2_t0EC55B1C4CC8F4735AA76631B30661520E0BA59C * ___GeneratedMaterials_17;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.General.CompoundTextureKey,TriLibCore.General.TextureGroup> TriLibCore.AssetLoaderContext::ProcessedTextures
	ConcurrentDictionary_2_tB3EFA4D915BD2DCD26B663F9F3B0BC52BA36EC69 * ___ProcessedTextures_18;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.General.CompountMaterialKey,TriLibCore.General.TextureGroup> TriLibCore.AssetLoaderContext::MaterialTextures
	ConcurrentDictionary_2_t6ABF27377932E2B801A2D43BAF6038137AA3344A * ___MaterialTextures_19;
	// TriLibCore.General.ConcurrentDictionary`2<System.String,System.String> TriLibCore.AssetLoaderContext::LoadedExternalData
	ConcurrentDictionary_2_tC0E1744A1B59A747EB28E188F4BF190AC1F870EA * ___LoadedExternalData_20;
	// System.Collections.Generic.List`1<UnityEngine.Object> TriLibCore.AssetLoaderContext::Allocations
	List_1_tFB87A8A948C1087E530344595EAB9727C97EA783 * ___Allocations_21;
	// System.Boolean TriLibCore.AssetLoaderContext::Async
	bool ___Async_22;
	// System.Action`1<TriLibCore.AssetLoaderContext> TriLibCore.AssetLoaderContext::OnLoad
	Action_1_t57AAE3636637079C037401BC720A2B653BB98703 * ___OnLoad_23;
	// System.Action`1<TriLibCore.AssetLoaderContext> TriLibCore.AssetLoaderContext::OnMaterialsLoad
	Action_1_t57AAE3636637079C037401BC720A2B653BB98703 * ___OnMaterialsLoad_24;
	// System.Action`2<TriLibCore.AssetLoaderContext,System.Single> TriLibCore.AssetLoaderContext::OnProgress
	Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 * ___OnProgress_25;
	// System.Action`1<TriLibCore.IContextualizedError> TriLibCore.AssetLoaderContext::OnError
	Action_1_t79BF8CF3F7689ED296BB59F0FE1EB5518C2B103A * ___OnError_26;
	// System.Action`1<TriLibCore.IContextualizedError> TriLibCore.AssetLoaderContext::HandleError
	Action_1_t79BF8CF3F7689ED296BB59F0FE1EB5518C2B103A * ___HandleError_27;
	// System.Object TriLibCore.AssetLoaderContext::CustomData
	RuntimeObject * ___CustomData_28;
	// System.Collections.Generic.List`1<System.Threading.Tasks.Task> TriLibCore.AssetLoaderContext::Tasks
	List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * ___Tasks_29;
	// UnityEngine.GameObject TriLibCore.AssetLoaderContext::WrapperGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___WrapperGameObject_30;
	// System.Threading.CancellationToken TriLibCore.AssetLoaderContext::CancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___CancellationToken_31;
	// System.Boolean TriLibCore.AssetLoaderContext::MaterialsProcessed
	bool ___MaterialsProcessed_32;
	// System.Int32 TriLibCore.AssetLoaderContext::LoadedTexturesCount
	int32_t ___LoadedTexturesCount_33;

public:
	inline static int32_t get_offset_of_Options_0() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___Options_0)); }
	inline AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6 * get_Options_0() const { return ___Options_0; }
	inline AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6 ** get_address_of_Options_0() { return &___Options_0; }
	inline void set_Options_0(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6 * value)
	{
		___Options_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Options_0), (void*)value);
	}

	inline static int32_t get_offset_of_Reader_1() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___Reader_1)); }
	inline ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * get_Reader_1() const { return ___Reader_1; }
	inline ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F ** get_address_of_Reader_1() { return &___Reader_1; }
	inline void set_Reader_1(ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * value)
	{
		___Reader_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Reader_1), (void*)value);
	}

	inline static int32_t get_offset_of_Filename_2() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___Filename_2)); }
	inline String_t* get_Filename_2() const { return ___Filename_2; }
	inline String_t** get_address_of_Filename_2() { return &___Filename_2; }
	inline void set_Filename_2(String_t* value)
	{
		___Filename_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Filename_2), (void*)value);
	}

	inline static int32_t get_offset_of_FileExtension_3() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___FileExtension_3)); }
	inline String_t* get_FileExtension_3() const { return ___FileExtension_3; }
	inline String_t** get_address_of_FileExtension_3() { return &___FileExtension_3; }
	inline void set_FileExtension_3(String_t* value)
	{
		___FileExtension_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FileExtension_3), (void*)value);
	}

	inline static int32_t get_offset_of_Stream_4() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___Stream_4)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Stream_4() const { return ___Stream_4; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Stream_4() { return &___Stream_4; }
	inline void set_Stream_4(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Stream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Stream_4), (void*)value);
	}

	inline static int32_t get_offset_of_BasePath_5() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___BasePath_5)); }
	inline String_t* get_BasePath_5() const { return ___BasePath_5; }
	inline String_t** get_address_of_BasePath_5() { return &___BasePath_5; }
	inline void set_BasePath_5(String_t* value)
	{
		___BasePath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BasePath_5), (void*)value);
	}

	inline static int32_t get_offset_of_RootGameObject_6() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___RootGameObject_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_RootGameObject_6() const { return ___RootGameObject_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_RootGameObject_6() { return &___RootGameObject_6; }
	inline void set_RootGameObject_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___RootGameObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RootGameObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_RootModel_7() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___RootModel_7)); }
	inline RuntimeObject* get_RootModel_7() const { return ___RootModel_7; }
	inline RuntimeObject** get_address_of_RootModel_7() { return &___RootModel_7; }
	inline void set_RootModel_7(RuntimeObject* value)
	{
		___RootModel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RootModel_7), (void*)value);
	}

	inline static int32_t get_offset_of_GameObjects_8() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___GameObjects_8)); }
	inline RuntimeObject* get_GameObjects_8() const { return ___GameObjects_8; }
	inline RuntimeObject** get_address_of_GameObjects_8() { return &___GameObjects_8; }
	inline void set_GameObjects_8(RuntimeObject* value)
	{
		___GameObjects_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameObjects_8), (void*)value);
	}

	inline static int32_t get_offset_of_Models_9() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___Models_9)); }
	inline RuntimeObject* get_Models_9() const { return ___Models_9; }
	inline RuntimeObject** get_address_of_Models_9() { return &___Models_9; }
	inline void set_Models_9(RuntimeObject* value)
	{
		___Models_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Models_9), (void*)value);
	}

	inline static int32_t get_offset_of_GameObjectPaths_10() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___GameObjectPaths_10)); }
	inline RuntimeObject* get_GameObjectPaths_10() const { return ___GameObjectPaths_10; }
	inline RuntimeObject** get_address_of_GameObjectPaths_10() { return &___GameObjectPaths_10; }
	inline void set_GameObjectPaths_10(RuntimeObject* value)
	{
		___GameObjectPaths_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameObjectPaths_10), (void*)value);
	}

	inline static int32_t get_offset_of_BoneTransforms_11() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___BoneTransforms_11)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get_BoneTransforms_11() const { return ___BoneTransforms_11; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of_BoneTransforms_11() { return &___BoneTransforms_11; }
	inline void set_BoneTransforms_11(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		___BoneTransforms_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoneTransforms_11), (void*)value);
	}

	inline static int32_t get_offset_of_RootBone_12() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___RootBone_12)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_RootBone_12() const { return ___RootBone_12; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_RootBone_12() { return &___RootBone_12; }
	inline void set_RootBone_12(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___RootBone_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RootBone_12), (void*)value);
	}

	inline static int32_t get_offset_of_LoadedTextures_13() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___LoadedTextures_13)); }
	inline ConcurrentDictionary_2_tCCB0F5957DF55BC986EECE9BF83CEF789FAB21FB * get_LoadedTextures_13() const { return ___LoadedTextures_13; }
	inline ConcurrentDictionary_2_tCCB0F5957DF55BC986EECE9BF83CEF789FAB21FB ** get_address_of_LoadedTextures_13() { return &___LoadedTextures_13; }
	inline void set_LoadedTextures_13(ConcurrentDictionary_2_tCCB0F5957DF55BC986EECE9BF83CEF789FAB21FB * value)
	{
		___LoadedTextures_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadedTextures_13), (void*)value);
	}

	inline static int32_t get_offset_of_LoadedTextureGroups_14() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___LoadedTextureGroups_14)); }
	inline ConcurrentDictionary_2_t83753B2C6862CCDA4DB4ECF48F3821028DCF9EF5 * get_LoadedTextureGroups_14() const { return ___LoadedTextureGroups_14; }
	inline ConcurrentDictionary_2_t83753B2C6862CCDA4DB4ECF48F3821028DCF9EF5 ** get_address_of_LoadedTextureGroups_14() { return &___LoadedTextureGroups_14; }
	inline void set_LoadedTextureGroups_14(ConcurrentDictionary_2_t83753B2C6862CCDA4DB4ECF48F3821028DCF9EF5 * value)
	{
		___LoadedTextureGroups_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadedTextureGroups_14), (void*)value);
	}

	inline static int32_t get_offset_of_MaterialRenderers_15() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___MaterialRenderers_15)); }
	inline ConcurrentDictionary_2_tA995E7CBD84A5E1F27AA21FBEC153B6BCA1D827F * get_MaterialRenderers_15() const { return ___MaterialRenderers_15; }
	inline ConcurrentDictionary_2_tA995E7CBD84A5E1F27AA21FBEC153B6BCA1D827F ** get_address_of_MaterialRenderers_15() { return &___MaterialRenderers_15; }
	inline void set_MaterialRenderers_15(ConcurrentDictionary_2_tA995E7CBD84A5E1F27AA21FBEC153B6BCA1D827F * value)
	{
		___MaterialRenderers_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaterialRenderers_15), (void*)value);
	}

	inline static int32_t get_offset_of_LoadedMaterials_16() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___LoadedMaterials_16)); }
	inline ConcurrentDictionary_2_t0EC55B1C4CC8F4735AA76631B30661520E0BA59C * get_LoadedMaterials_16() const { return ___LoadedMaterials_16; }
	inline ConcurrentDictionary_2_t0EC55B1C4CC8F4735AA76631B30661520E0BA59C ** get_address_of_LoadedMaterials_16() { return &___LoadedMaterials_16; }
	inline void set_LoadedMaterials_16(ConcurrentDictionary_2_t0EC55B1C4CC8F4735AA76631B30661520E0BA59C * value)
	{
		___LoadedMaterials_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadedMaterials_16), (void*)value);
	}

	inline static int32_t get_offset_of_GeneratedMaterials_17() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___GeneratedMaterials_17)); }
	inline ConcurrentDictionary_2_t0EC55B1C4CC8F4735AA76631B30661520E0BA59C * get_GeneratedMaterials_17() const { return ___GeneratedMaterials_17; }
	inline ConcurrentDictionary_2_t0EC55B1C4CC8F4735AA76631B30661520E0BA59C ** get_address_of_GeneratedMaterials_17() { return &___GeneratedMaterials_17; }
	inline void set_GeneratedMaterials_17(ConcurrentDictionary_2_t0EC55B1C4CC8F4735AA76631B30661520E0BA59C * value)
	{
		___GeneratedMaterials_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GeneratedMaterials_17), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessedTextures_18() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___ProcessedTextures_18)); }
	inline ConcurrentDictionary_2_tB3EFA4D915BD2DCD26B663F9F3B0BC52BA36EC69 * get_ProcessedTextures_18() const { return ___ProcessedTextures_18; }
	inline ConcurrentDictionary_2_tB3EFA4D915BD2DCD26B663F9F3B0BC52BA36EC69 ** get_address_of_ProcessedTextures_18() { return &___ProcessedTextures_18; }
	inline void set_ProcessedTextures_18(ConcurrentDictionary_2_tB3EFA4D915BD2DCD26B663F9F3B0BC52BA36EC69 * value)
	{
		___ProcessedTextures_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessedTextures_18), (void*)value);
	}

	inline static int32_t get_offset_of_MaterialTextures_19() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___MaterialTextures_19)); }
	inline ConcurrentDictionary_2_t6ABF27377932E2B801A2D43BAF6038137AA3344A * get_MaterialTextures_19() const { return ___MaterialTextures_19; }
	inline ConcurrentDictionary_2_t6ABF27377932E2B801A2D43BAF6038137AA3344A ** get_address_of_MaterialTextures_19() { return &___MaterialTextures_19; }
	inline void set_MaterialTextures_19(ConcurrentDictionary_2_t6ABF27377932E2B801A2D43BAF6038137AA3344A * value)
	{
		___MaterialTextures_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaterialTextures_19), (void*)value);
	}

	inline static int32_t get_offset_of_LoadedExternalData_20() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___LoadedExternalData_20)); }
	inline ConcurrentDictionary_2_tC0E1744A1B59A747EB28E188F4BF190AC1F870EA * get_LoadedExternalData_20() const { return ___LoadedExternalData_20; }
	inline ConcurrentDictionary_2_tC0E1744A1B59A747EB28E188F4BF190AC1F870EA ** get_address_of_LoadedExternalData_20() { return &___LoadedExternalData_20; }
	inline void set_LoadedExternalData_20(ConcurrentDictionary_2_tC0E1744A1B59A747EB28E188F4BF190AC1F870EA * value)
	{
		___LoadedExternalData_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoadedExternalData_20), (void*)value);
	}

	inline static int32_t get_offset_of_Allocations_21() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___Allocations_21)); }
	inline List_1_tFB87A8A948C1087E530344595EAB9727C97EA783 * get_Allocations_21() const { return ___Allocations_21; }
	inline List_1_tFB87A8A948C1087E530344595EAB9727C97EA783 ** get_address_of_Allocations_21() { return &___Allocations_21; }
	inline void set_Allocations_21(List_1_tFB87A8A948C1087E530344595EAB9727C97EA783 * value)
	{
		___Allocations_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Allocations_21), (void*)value);
	}

	inline static int32_t get_offset_of_Async_22() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___Async_22)); }
	inline bool get_Async_22() const { return ___Async_22; }
	inline bool* get_address_of_Async_22() { return &___Async_22; }
	inline void set_Async_22(bool value)
	{
		___Async_22 = value;
	}

	inline static int32_t get_offset_of_OnLoad_23() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___OnLoad_23)); }
	inline Action_1_t57AAE3636637079C037401BC720A2B653BB98703 * get_OnLoad_23() const { return ___OnLoad_23; }
	inline Action_1_t57AAE3636637079C037401BC720A2B653BB98703 ** get_address_of_OnLoad_23() { return &___OnLoad_23; }
	inline void set_OnLoad_23(Action_1_t57AAE3636637079C037401BC720A2B653BB98703 * value)
	{
		___OnLoad_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLoad_23), (void*)value);
	}

	inline static int32_t get_offset_of_OnMaterialsLoad_24() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___OnMaterialsLoad_24)); }
	inline Action_1_t57AAE3636637079C037401BC720A2B653BB98703 * get_OnMaterialsLoad_24() const { return ___OnMaterialsLoad_24; }
	inline Action_1_t57AAE3636637079C037401BC720A2B653BB98703 ** get_address_of_OnMaterialsLoad_24() { return &___OnMaterialsLoad_24; }
	inline void set_OnMaterialsLoad_24(Action_1_t57AAE3636637079C037401BC720A2B653BB98703 * value)
	{
		___OnMaterialsLoad_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMaterialsLoad_24), (void*)value);
	}

	inline static int32_t get_offset_of_OnProgress_25() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___OnProgress_25)); }
	inline Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 * get_OnProgress_25() const { return ___OnProgress_25; }
	inline Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 ** get_address_of_OnProgress_25() { return &___OnProgress_25; }
	inline void set_OnProgress_25(Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 * value)
	{
		___OnProgress_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnProgress_25), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_26() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___OnError_26)); }
	inline Action_1_t79BF8CF3F7689ED296BB59F0FE1EB5518C2B103A * get_OnError_26() const { return ___OnError_26; }
	inline Action_1_t79BF8CF3F7689ED296BB59F0FE1EB5518C2B103A ** get_address_of_OnError_26() { return &___OnError_26; }
	inline void set_OnError_26(Action_1_t79BF8CF3F7689ED296BB59F0FE1EB5518C2B103A * value)
	{
		___OnError_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_26), (void*)value);
	}

	inline static int32_t get_offset_of_HandleError_27() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___HandleError_27)); }
	inline Action_1_t79BF8CF3F7689ED296BB59F0FE1EB5518C2B103A * get_HandleError_27() const { return ___HandleError_27; }
	inline Action_1_t79BF8CF3F7689ED296BB59F0FE1EB5518C2B103A ** get_address_of_HandleError_27() { return &___HandleError_27; }
	inline void set_HandleError_27(Action_1_t79BF8CF3F7689ED296BB59F0FE1EB5518C2B103A * value)
	{
		___HandleError_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HandleError_27), (void*)value);
	}

	inline static int32_t get_offset_of_CustomData_28() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___CustomData_28)); }
	inline RuntimeObject * get_CustomData_28() const { return ___CustomData_28; }
	inline RuntimeObject ** get_address_of_CustomData_28() { return &___CustomData_28; }
	inline void set_CustomData_28(RuntimeObject * value)
	{
		___CustomData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomData_28), (void*)value);
	}

	inline static int32_t get_offset_of_Tasks_29() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___Tasks_29)); }
	inline List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * get_Tasks_29() const { return ___Tasks_29; }
	inline List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E ** get_address_of_Tasks_29() { return &___Tasks_29; }
	inline void set_Tasks_29(List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E * value)
	{
		___Tasks_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tasks_29), (void*)value);
	}

	inline static int32_t get_offset_of_WrapperGameObject_30() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___WrapperGameObject_30)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_WrapperGameObject_30() const { return ___WrapperGameObject_30; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_WrapperGameObject_30() { return &___WrapperGameObject_30; }
	inline void set_WrapperGameObject_30(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___WrapperGameObject_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WrapperGameObject_30), (void*)value);
	}

	inline static int32_t get_offset_of_CancellationToken_31() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___CancellationToken_31)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_CancellationToken_31() const { return ___CancellationToken_31; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_CancellationToken_31() { return &___CancellationToken_31; }
	inline void set_CancellationToken_31(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___CancellationToken_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___CancellationToken_31))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_MaterialsProcessed_32() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___MaterialsProcessed_32)); }
	inline bool get_MaterialsProcessed_32() const { return ___MaterialsProcessed_32; }
	inline bool* get_address_of_MaterialsProcessed_32() { return &___MaterialsProcessed_32; }
	inline void set_MaterialsProcessed_32(bool value)
	{
		___MaterialsProcessed_32 = value;
	}

	inline static int32_t get_offset_of_LoadedTexturesCount_33() { return static_cast<int32_t>(offsetof(AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5, ___LoadedTexturesCount_33)); }
	inline int32_t get_LoadedTexturesCount_33() const { return ___LoadedTexturesCount_33; }
	inline int32_t* get_address_of_LoadedTexturesCount_33() { return &___LoadedTexturesCount_33; }
	inline void set_LoadedTexturesCount_33(int32_t value)
	{
		___LoadedTexturesCount_33 = value;
	}
};


// TriLibCore.General.AnimationType
struct  AnimationType_tC8A236C2B9A03932B2B13B0D3BD699BF08CE2205 
{
public:
	// System.Int32 TriLibCore.General.AnimationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationType_tC8A236C2B9A03932B2B13B0D3BD699BF08CE2205, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.General.AvatarDefinitionType
struct  AvatarDefinitionType_t04CCA1EDAC5CC3F8666616F1AC6A43A57234E16B 
{
public:
	// System.Int32 TriLibCore.General.AvatarDefinitionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvatarDefinitionType_t04CCA1EDAC5CC3F8666616F1AC6A43A57234E16B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.General.TextureCompressionQuality
struct  TextureCompressionQuality_tF8DE524D5CD350D484C29A8EFC181104A70B3A74 
{
public:
	// System.Int32 TriLibCore.General.TextureCompressionQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureCompressionQuality_tF8DE524D5CD350D484C29A8EFC181104A70B3A74, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Geometries.PositionNormalVertexData
struct  PositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468 
{
public:
	// UnityEngine.Vector3 TriLibCore.Geometries.PositionNormalVertexData::<Position>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CPositionU3Ek__BackingField_1;
	// UnityEngine.Vector3 TriLibCore.Geometries.PositionNormalVertexData::<Normal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CNormalU3Ek__BackingField_2;
	// System.Int32 TriLibCore.Geometries.PositionNormalVertexData::<GroupIndex>k__BackingField
	int32_t ___U3CGroupIndexU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468, ___U3CPositionU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CPositionU3Ek__BackingField_1() const { return ___U3CPositionU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CPositionU3Ek__BackingField_1() { return &___U3CPositionU3Ek__BackingField_1; }
	inline void set_U3CPositionU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CPositionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CNormalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468, ___U3CNormalU3Ek__BackingField_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CNormalU3Ek__BackingField_2() const { return ___U3CNormalU3Ek__BackingField_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CNormalU3Ek__BackingField_2() { return &___U3CNormalU3Ek__BackingField_2; }
	inline void set_U3CNormalU3Ek__BackingField_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CNormalU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CGroupIndexU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468, ___U3CGroupIndexU3Ek__BackingField_3)); }
	inline int32_t get_U3CGroupIndexU3Ek__BackingField_3() const { return ___U3CGroupIndexU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CGroupIndexU3Ek__BackingField_3() { return &___U3CGroupIndexU3Ek__BackingField_3; }
	inline void set_U3CGroupIndexU3Ek__BackingField_3(int32_t value)
	{
		___U3CGroupIndexU3Ek__BackingField_3 = value;
	}
};

struct PositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468_StaticFields
{
public:
	// UnityEngine.Rendering.VertexAttributeDescriptor[] TriLibCore.Geometries.PositionNormalVertexData::Layout
	VertexAttributeDescriptorU5BU5D_tBE8DF5947569FD4C3DE66A992156741202DC82B9* ___Layout_0;

public:
	inline static int32_t get_offset_of_Layout_0() { return static_cast<int32_t>(offsetof(PositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468_StaticFields, ___Layout_0)); }
	inline VertexAttributeDescriptorU5BU5D_tBE8DF5947569FD4C3DE66A992156741202DC82B9* get_Layout_0() const { return ___Layout_0; }
	inline VertexAttributeDescriptorU5BU5D_tBE8DF5947569FD4C3DE66A992156741202DC82B9** get_address_of_Layout_0() { return &___Layout_0; }
	inline void set_Layout_0(VertexAttributeDescriptorU5BU5D_tBE8DF5947569FD4C3DE66A992156741202DC82B9* value)
	{
		___Layout_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Layout_0), (void*)value);
	}
};


// TriLibCore.Stl.StlModel
struct  StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089  : public RuntimeObject
{
public:
	// System.String TriLibCore.Stl.StlModel::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// UnityEngine.Vector3 TriLibCore.Stl.StlModel::<LocalPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CLocalPositionU3Ek__BackingField_1;
	// UnityEngine.Quaternion TriLibCore.Stl.StlModel::<LocalRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CLocalRotationU3Ek__BackingField_2;
	// UnityEngine.Vector3 TriLibCore.Stl.StlModel::<LocalScale>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CLocalScaleU3Ek__BackingField_3;
	// System.Boolean TriLibCore.Stl.StlModel::<Visibility>k__BackingField
	bool ___U3CVisibilityU3Ek__BackingField_4;
	// TriLibCore.Interfaces.IModel TriLibCore.Stl.StlModel::<Parent>k__BackingField
	RuntimeObject* ___U3CParentU3Ek__BackingField_5;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::<Children>k__BackingField
	RuntimeObject* ___U3CChildrenU3Ek__BackingField_6;
	// System.Boolean TriLibCore.Stl.StlModel::<IsBone>k__BackingField
	bool ___U3CIsBoneU3Ek__BackingField_7;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Stl.StlModel::<GeometryGroup>k__BackingField
	RuntimeObject* ___U3CGeometryGroupU3Ek__BackingField_8;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::<Bones>k__BackingField
	RuntimeObject* ___U3CBonesU3Ek__BackingField_9;
	// UnityEngine.Matrix4x4[] TriLibCore.Stl.StlModel::<BindPoses>k__BackingField
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___U3CBindPosesU3Ek__BackingField_10;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Stl.StlModel::<MaterialIndices>k__BackingField
	RuntimeObject* ___U3CMaterialIndicesU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089, ___U3CLocalPositionU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CLocalPositionU3Ek__BackingField_1() const { return ___U3CLocalPositionU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CLocalPositionU3Ek__BackingField_1() { return &___U3CLocalPositionU3Ek__BackingField_1; }
	inline void set_U3CLocalPositionU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CLocalPositionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CLocalRotationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089, ___U3CLocalRotationU3Ek__BackingField_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CLocalRotationU3Ek__BackingField_2() const { return ___U3CLocalRotationU3Ek__BackingField_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CLocalRotationU3Ek__BackingField_2() { return &___U3CLocalRotationU3Ek__BackingField_2; }
	inline void set_U3CLocalRotationU3Ek__BackingField_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CLocalRotationU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CLocalScaleU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089, ___U3CLocalScaleU3Ek__BackingField_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CLocalScaleU3Ek__BackingField_3() const { return ___U3CLocalScaleU3Ek__BackingField_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CLocalScaleU3Ek__BackingField_3() { return &___U3CLocalScaleU3Ek__BackingField_3; }
	inline void set_U3CLocalScaleU3Ek__BackingField_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CLocalScaleU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CVisibilityU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089, ___U3CVisibilityU3Ek__BackingField_4)); }
	inline bool get_U3CVisibilityU3Ek__BackingField_4() const { return ___U3CVisibilityU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CVisibilityU3Ek__BackingField_4() { return &___U3CVisibilityU3Ek__BackingField_4; }
	inline void set_U3CVisibilityU3Ek__BackingField_4(bool value)
	{
		___U3CVisibilityU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CParentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089, ___U3CParentU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CParentU3Ek__BackingField_5() const { return ___U3CParentU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CParentU3Ek__BackingField_5() { return &___U3CParentU3Ek__BackingField_5; }
	inline void set_U3CParentU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CParentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParentU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CChildrenU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089, ___U3CChildrenU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CChildrenU3Ek__BackingField_6() const { return ___U3CChildrenU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CChildrenU3Ek__BackingField_6() { return &___U3CChildrenU3Ek__BackingField_6; }
	inline void set_U3CChildrenU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CChildrenU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChildrenU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsBoneU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089, ___U3CIsBoneU3Ek__BackingField_7)); }
	inline bool get_U3CIsBoneU3Ek__BackingField_7() const { return ___U3CIsBoneU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsBoneU3Ek__BackingField_7() { return &___U3CIsBoneU3Ek__BackingField_7; }
	inline void set_U3CIsBoneU3Ek__BackingField_7(bool value)
	{
		___U3CIsBoneU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CGeometryGroupU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089, ___U3CGeometryGroupU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CGeometryGroupU3Ek__BackingField_8() const { return ___U3CGeometryGroupU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CGeometryGroupU3Ek__BackingField_8() { return &___U3CGeometryGroupU3Ek__BackingField_8; }
	inline void set_U3CGeometryGroupU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CGeometryGroupU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGeometryGroupU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBonesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089, ___U3CBonesU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CBonesU3Ek__BackingField_9() const { return ___U3CBonesU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CBonesU3Ek__BackingField_9() { return &___U3CBonesU3Ek__BackingField_9; }
	inline void set_U3CBonesU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CBonesU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBonesU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBindPosesU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089, ___U3CBindPosesU3Ek__BackingField_10)); }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* get_U3CBindPosesU3Ek__BackingField_10() const { return ___U3CBindPosesU3Ek__BackingField_10; }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9** get_address_of_U3CBindPosesU3Ek__BackingField_10() { return &___U3CBindPosesU3Ek__BackingField_10; }
	inline void set_U3CBindPosesU3Ek__BackingField_10(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* value)
	{
		___U3CBindPosesU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBindPosesU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaterialIndicesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089, ___U3CMaterialIndicesU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CMaterialIndicesU3Ek__BackingField_11() const { return ___U3CMaterialIndicesU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CMaterialIndicesU3Ek__BackingField_11() { return &___U3CMaterialIndicesU3Ek__BackingField_11; }
	inline void set_U3CMaterialIndicesU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CMaterialIndicesU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaterialIndicesU3Ek__BackingField_11), (void*)value);
	}
};


// TriLibCore.Stl.StlProcessor
struct  StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup> TriLibCore.Stl.StlProcessor::_geometryGroups
	Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * ____geometryGroups_0;
	// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlProcessor::_models
	Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * ____models_1;
	// TriLibCore.Stl.Reader.StlReader TriLibCore.Stl.StlProcessor::_reader
	StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * ____reader_2;
	// System.String TriLibCore.Stl.StlProcessor::_groupName
	String_t* ____groupName_3;
	// System.String TriLibCore.Stl.StlProcessor::_lastGeometryGroupName
	String_t* ____lastGeometryGroupName_4;
	// System.Int32 TriLibCore.Stl.StlProcessor::_lastLoopNumber
	int32_t ____lastLoopNumber_5;
	// TriLibCore.Stl.Reader.StlGeometryGroup TriLibCore.Stl.StlProcessor::_activeGeometryGroup
	StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * ____activeGeometryGroup_6;
	// TriLibCore.Stl.StlGeometry TriLibCore.Stl.StlProcessor::_activeGeometry
	StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D * ____activeGeometry_7;
	// System.Int32 TriLibCore.Stl.StlProcessor::_loopNumber
	int32_t ____loopNumber_8;
	// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::_facetNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____facetNormal_9;

public:
	inline static int32_t get_offset_of__geometryGroups_0() { return static_cast<int32_t>(offsetof(StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A, ____geometryGroups_0)); }
	inline Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * get__geometryGroups_0() const { return ____geometryGroups_0; }
	inline Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 ** get_address_of__geometryGroups_0() { return &____geometryGroups_0; }
	inline void set__geometryGroups_0(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * value)
	{
		____geometryGroups_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____geometryGroups_0), (void*)value);
	}

	inline static int32_t get_offset_of__models_1() { return static_cast<int32_t>(offsetof(StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A, ____models_1)); }
	inline Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * get__models_1() const { return ____models_1; }
	inline Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A ** get_address_of__models_1() { return &____models_1; }
	inline void set__models_1(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * value)
	{
		____models_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____models_1), (void*)value);
	}

	inline static int32_t get_offset_of__reader_2() { return static_cast<int32_t>(offsetof(StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A, ____reader_2)); }
	inline StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * get__reader_2() const { return ____reader_2; }
	inline StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC ** get_address_of__reader_2() { return &____reader_2; }
	inline void set__reader_2(StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * value)
	{
		____reader_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reader_2), (void*)value);
	}

	inline static int32_t get_offset_of__groupName_3() { return static_cast<int32_t>(offsetof(StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A, ____groupName_3)); }
	inline String_t* get__groupName_3() const { return ____groupName_3; }
	inline String_t** get_address_of__groupName_3() { return &____groupName_3; }
	inline void set__groupName_3(String_t* value)
	{
		____groupName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groupName_3), (void*)value);
	}

	inline static int32_t get_offset_of__lastGeometryGroupName_4() { return static_cast<int32_t>(offsetof(StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A, ____lastGeometryGroupName_4)); }
	inline String_t* get__lastGeometryGroupName_4() const { return ____lastGeometryGroupName_4; }
	inline String_t** get_address_of__lastGeometryGroupName_4() { return &____lastGeometryGroupName_4; }
	inline void set__lastGeometryGroupName_4(String_t* value)
	{
		____lastGeometryGroupName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastGeometryGroupName_4), (void*)value);
	}

	inline static int32_t get_offset_of__lastLoopNumber_5() { return static_cast<int32_t>(offsetof(StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A, ____lastLoopNumber_5)); }
	inline int32_t get__lastLoopNumber_5() const { return ____lastLoopNumber_5; }
	inline int32_t* get_address_of__lastLoopNumber_5() { return &____lastLoopNumber_5; }
	inline void set__lastLoopNumber_5(int32_t value)
	{
		____lastLoopNumber_5 = value;
	}

	inline static int32_t get_offset_of__activeGeometryGroup_6() { return static_cast<int32_t>(offsetof(StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A, ____activeGeometryGroup_6)); }
	inline StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * get__activeGeometryGroup_6() const { return ____activeGeometryGroup_6; }
	inline StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 ** get_address_of__activeGeometryGroup_6() { return &____activeGeometryGroup_6; }
	inline void set__activeGeometryGroup_6(StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * value)
	{
		____activeGeometryGroup_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeGeometryGroup_6), (void*)value);
	}

	inline static int32_t get_offset_of__activeGeometry_7() { return static_cast<int32_t>(offsetof(StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A, ____activeGeometry_7)); }
	inline StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D * get__activeGeometry_7() const { return ____activeGeometry_7; }
	inline StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D ** get_address_of__activeGeometry_7() { return &____activeGeometry_7; }
	inline void set__activeGeometry_7(StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D * value)
	{
		____activeGeometry_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeGeometry_7), (void*)value);
	}

	inline static int32_t get_offset_of__loopNumber_8() { return static_cast<int32_t>(offsetof(StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A, ____loopNumber_8)); }
	inline int32_t get__loopNumber_8() const { return ____loopNumber_8; }
	inline int32_t* get_address_of__loopNumber_8() { return &____loopNumber_8; }
	inline void set__loopNumber_8(int32_t value)
	{
		____loopNumber_8 = value;
	}

	inline static int32_t get_offset_of__facetNormal_9() { return static_cast<int32_t>(offsetof(StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A, ____facetNormal_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__facetNormal_9() const { return ____facetNormal_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__facetNormal_9() { return &____facetNormal_9; }
	inline void set__facetNormal_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____facetNormal_9 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
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

// UnityEngine.Rendering.IndexFormat
struct  IndexFormat_t92C58F1C3C12C24A5F430966267EA43F6C4C16EB 
{
public:
	// System.Int32 UnityEngine.Rendering.IndexFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IndexFormat_t92C58F1C3C12C24A5F430966267EA43F6C4C16EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WrapMode
struct  WrapMode_t3704F0388A4F801D2F54B1EA1EE8DC014D667AFD 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t3704F0388A4F801D2F54B1EA1EE8DC014D667AFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// TriLibCore.Stl.StlRootModel
struct  StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76  : public StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089
{
public:
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Stl.StlRootModel::<AllGeometryGroups>k__BackingField
	RuntimeObject* ___U3CAllGeometryGroupsU3Ek__BackingField_12;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Stl.StlRootModel::<AllAnimations>k__BackingField
	RuntimeObject* ___U3CAllAnimationsU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Stl.StlRootModel::<AllMaterials>k__BackingField
	RuntimeObject* ___U3CAllMaterialsU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Stl.StlRootModel::<AllTextures>k__BackingField
	RuntimeObject* ___U3CAllTexturesU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_U3CAllGeometryGroupsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76, ___U3CAllGeometryGroupsU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CAllGeometryGroupsU3Ek__BackingField_12() const { return ___U3CAllGeometryGroupsU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CAllGeometryGroupsU3Ek__BackingField_12() { return &___U3CAllGeometryGroupsU3Ek__BackingField_12; }
	inline void set_U3CAllGeometryGroupsU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CAllGeometryGroupsU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAllGeometryGroupsU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAllAnimationsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76, ___U3CAllAnimationsU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CAllAnimationsU3Ek__BackingField_13() const { return ___U3CAllAnimationsU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CAllAnimationsU3Ek__BackingField_13() { return &___U3CAllAnimationsU3Ek__BackingField_13; }
	inline void set_U3CAllAnimationsU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CAllAnimationsU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAllAnimationsU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAllMaterialsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76, ___U3CAllMaterialsU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CAllMaterialsU3Ek__BackingField_14() const { return ___U3CAllMaterialsU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CAllMaterialsU3Ek__BackingField_14() { return &___U3CAllMaterialsU3Ek__BackingField_14; }
	inline void set_U3CAllMaterialsU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CAllMaterialsU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAllMaterialsU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAllTexturesU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76, ___U3CAllTexturesU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CAllTexturesU3Ek__BackingField_15() const { return ___U3CAllTexturesU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CAllTexturesU3Ek__BackingField_15() { return &___U3CAllTexturesU3Ek__BackingField_15; }
	inline void set_U3CAllTexturesU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CAllTexturesU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAllTexturesU3Ek__BackingField_15), (void*)value);
	}
};


// TriLibCore.Stl.StlStreamReader
struct  StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1  : public StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E
{
public:
	// System.Int32 TriLibCore.Stl.StlStreamReader::_endOfLinePointer
	int32_t ____endOfLinePointer_21;
	// System.Char[] TriLibCore.Stl.StlStreamReader::_charStream
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____charStream_22;
	// System.Int32 TriLibCore.Stl.StlStreamReader::_charPosition
	int32_t ____charPosition_23;
	// System.Int32 TriLibCore.Stl.StlStreamReader::<Line>k__BackingField
	int32_t ___U3CLineU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of__endOfLinePointer_21() { return static_cast<int32_t>(offsetof(StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1, ____endOfLinePointer_21)); }
	inline int32_t get__endOfLinePointer_21() const { return ____endOfLinePointer_21; }
	inline int32_t* get_address_of__endOfLinePointer_21() { return &____endOfLinePointer_21; }
	inline void set__endOfLinePointer_21(int32_t value)
	{
		____endOfLinePointer_21 = value;
	}

	inline static int32_t get_offset_of__charStream_22() { return static_cast<int32_t>(offsetof(StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1, ____charStream_22)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__charStream_22() const { return ____charStream_22; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__charStream_22() { return &____charStream_22; }
	inline void set__charStream_22(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____charStream_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____charStream_22), (void*)value);
	}

	inline static int32_t get_offset_of__charPosition_23() { return static_cast<int32_t>(offsetof(StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1, ____charPosition_23)); }
	inline int32_t get__charPosition_23() const { return ____charPosition_23; }
	inline int32_t* get_address_of__charPosition_23() { return &____charPosition_23; }
	inline void set__charPosition_23(int32_t value)
	{
		____charPosition_23 = value;
	}

	inline static int32_t get_offset_of_U3CLineU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1, ___U3CLineU3Ek__BackingField_24)); }
	inline int32_t get_U3CLineU3Ek__BackingField_24() const { return ___U3CLineU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CLineU3Ek__BackingField_24() { return &___U3CLineU3Ek__BackingField_24; }
	inline void set_U3CLineU3Ek__BackingField_24(int32_t value)
	{
		___U3CLineU3Ek__BackingField_24 = value;
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// System.Action`2<TriLibCore.AssetLoaderContext,System.Single>
struct  Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9  : public MulticastDelegate_t
{
public:

public:
};


// TriLibCore.AssetLoaderOptions
struct  AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean TriLibCore.AssetLoaderOptions::UseFileScale
	bool ___UseFileScale_4;
	// System.Single TriLibCore.AssetLoaderOptions::ScaleFactor
	float ___ScaleFactor_5;
	// System.Boolean TriLibCore.AssetLoaderOptions::SortHierarchyByName
	bool ___SortHierarchyByName_6;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportVisibility
	bool ___ImportVisibility_7;
	// System.Boolean TriLibCore.AssetLoaderOptions::Static
	bool ___Static_8;
	// System.Boolean TriLibCore.AssetLoaderOptions::AddAssetUnloader
	bool ___AddAssetUnloader_9;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportMeshes
	bool ___ImportMeshes_10;
	// System.Boolean TriLibCore.AssetLoaderOptions::LimitBoneWeights
	bool ___LimitBoneWeights_11;
	// System.Boolean TriLibCore.AssetLoaderOptions::ReadEnabled
	bool ___ReadEnabled_12;
	// System.Boolean TriLibCore.AssetLoaderOptions::ReadAndWriteEnabled
	bool ___ReadAndWriteEnabled_13;
	// System.Boolean TriLibCore.AssetLoaderOptions::OptimizeMeshes
	bool ___OptimizeMeshes_14;
	// System.Boolean TriLibCore.AssetLoaderOptions::GenerateColliders
	bool ___GenerateColliders_15;
	// System.Boolean TriLibCore.AssetLoaderOptions::ConvexColliders
	bool ___ConvexColliders_16;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportBlendShapes
	bool ___ImportBlendShapes_17;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportColors
	bool ___ImportColors_18;
	// UnityEngine.Rendering.IndexFormat TriLibCore.AssetLoaderOptions::IndexFormat
	int32_t ___IndexFormat_19;
	// System.Boolean TriLibCore.AssetLoaderOptions::KeepQuads
	bool ___KeepQuads_20;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportNormals
	bool ___ImportNormals_21;
	// System.Single TriLibCore.AssetLoaderOptions::SmoothingAngle
	float ___SmoothingAngle_22;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportBlendShapeNormals
	bool ___ImportBlendShapeNormals_23;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportTangents
	bool ___ImportTangents_24;
	// System.Boolean TriLibCore.AssetLoaderOptions::SwapUVs
	bool ___SwapUVs_25;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportMaterials
	bool ___ImportMaterials_26;
	// TriLibCore.Mappers.MaterialMapper[] TriLibCore.AssetLoaderOptions::MaterialMappers
	MaterialMapperU5BU5D_tF588CE83499BAA8C6713C7F3CC0A21AFC92F431B* ___MaterialMappers_27;
	// System.Boolean TriLibCore.AssetLoaderOptions::AddSecondAlphaMaterial
	bool ___AddSecondAlphaMaterial_28;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportTextures
	bool ___ImportTextures_29;
	// System.Boolean TriLibCore.AssetLoaderOptions::Enforce16BitsTextures
	bool ___Enforce16BitsTextures_30;
	// System.Boolean TriLibCore.AssetLoaderOptions::ScanForAlphaPixels
	bool ___ScanForAlphaPixels_31;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseAlphaMaterials
	bool ___UseAlphaMaterials_32;
	// TriLibCore.Mappers.TextureMapper TriLibCore.AssetLoaderOptions::TextureMapper
	TextureMapper_t5F507BD9487F7208C0C0F0557319705ED3850251 * ___TextureMapper_33;
	// TriLibCore.General.TextureCompressionQuality TriLibCore.AssetLoaderOptions::TextureCompressionQuality
	int32_t ___TextureCompressionQuality_34;
	// System.Boolean TriLibCore.AssetLoaderOptions::GenerateMipmaps
	bool ___GenerateMipmaps_35;
	// System.Boolean TriLibCore.AssetLoaderOptions::FixNormalMaps
	bool ___FixNormalMaps_36;
	// TriLibCore.General.AnimationType TriLibCore.AssetLoaderOptions::AnimationType
	int32_t ___AnimationType_37;
	// TriLibCore.General.AvatarDefinitionType TriLibCore.AssetLoaderOptions::AvatarDefinition
	int32_t ___AvatarDefinition_38;
	// UnityEngine.Avatar TriLibCore.AssetLoaderOptions::Avatar
	Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * ___Avatar_39;
	// TriLibCore.General.HumanDescription TriLibCore.AssetLoaderOptions::HumanDescription
	HumanDescription_tEACA23902C6C7408E1CCF42A06E9B12486F48325 * ___HumanDescription_40;
	// TriLibCore.Mappers.RootBoneMapper TriLibCore.AssetLoaderOptions::RootBoneMapper
	RootBoneMapper_t03DA8C0E317148BABFD0BB03F6EB15E186B1159D * ___RootBoneMapper_41;
	// TriLibCore.Mappers.HumanoidAvatarMapper TriLibCore.AssetLoaderOptions::HumanoidAvatarMapper
	HumanoidAvatarMapper_t89D9B00DCB730E454EFB3D487631459AA98F5AAF * ___HumanoidAvatarMapper_42;
	// TriLibCore.Mappers.LipSyncMapper[] TriLibCore.AssetLoaderOptions::LipSyncMappers
	LipSyncMapperU5BU5D_t37FA8F6F4C7A5458234DB2A568F8A621F7A8EA69* ___LipSyncMappers_43;
	// System.Boolean TriLibCore.AssetLoaderOptions::SampleBindPose
	bool ___SampleBindPose_44;
	// System.Boolean TriLibCore.AssetLoaderOptions::EnforceTPose
	bool ___EnforceTPose_45;
	// System.Boolean TriLibCore.AssetLoaderOptions::ResampleAnimations
	bool ___ResampleAnimations_46;
	// UnityEngine.WrapMode TriLibCore.AssetLoaderOptions::AnimationWrapMode
	int32_t ___AnimationWrapMode_47;
	// TriLibCore.Mappers.AnimationClipMapper[] TriLibCore.AssetLoaderOptions::AnimationClipMappers
	AnimationClipMapperU5BU5D_tE903B789E016DB3111F1C61C9E9892C03459CB96* ___AnimationClipMappers_48;
	// TriLibCore.Mappers.ExternalDataMapper TriLibCore.AssetLoaderOptions::ExternalDataMapper
	ExternalDataMapper_t22E930F982328E0861BB36A1B5DF2B4D36B7C9DA * ___ExternalDataMapper_49;
	// System.Boolean TriLibCore.AssetLoaderOptions::ShowLoadingWarnings
	bool ___ShowLoadingWarnings_50;
	// System.Boolean TriLibCore.AssetLoaderOptions::CloseStreamAutomatically
	bool ___CloseStreamAutomatically_51;
	// System.Int32 TriLibCore.AssetLoaderOptions::Timeout
	int32_t ___Timeout_52;
	// System.Boolean TriLibCore.AssetLoaderOptions::DestroyOnError
	bool ___DestroyOnError_53;
	// System.Boolean TriLibCore.AssetLoaderOptions::EnsureQuaternionContinuity
	bool ___EnsureQuaternionContinuity_54;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseMaterialKeywords
	bool ___UseMaterialKeywords_55;
	// System.Boolean TriLibCore.AssetLoaderOptions::ForceGCCollectionWhileLoading
	bool ___ForceGCCollectionWhileLoading_56;
	// System.Boolean TriLibCore.AssetLoaderOptions::MergeVertices
	bool ___MergeVertices_57;
	// System.Boolean TriLibCore.AssetLoaderOptions::MarkTexturesNoLongerReadable
	bool ___MarkTexturesNoLongerReadable_58;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseUnityNativeTextureLoader
	bool ___UseUnityNativeTextureLoader_59;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseUnityNativeNormalCalculator
	bool ___UseUnityNativeNormalCalculator_60;
	// System.Single TriLibCore.AssetLoaderOptions::GCHelperCollectionInterval
	float ___GCHelperCollectionInterval_61;
	// System.Collections.Generic.List`1<UnityEngine.Object> TriLibCore.AssetLoaderOptions::FixedAllocations
	List_1_tFB87A8A948C1087E530344595EAB9727C97EA783 * ___FixedAllocations_62;

public:
	inline static int32_t get_offset_of_UseFileScale_4() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___UseFileScale_4)); }
	inline bool get_UseFileScale_4() const { return ___UseFileScale_4; }
	inline bool* get_address_of_UseFileScale_4() { return &___UseFileScale_4; }
	inline void set_UseFileScale_4(bool value)
	{
		___UseFileScale_4 = value;
	}

	inline static int32_t get_offset_of_ScaleFactor_5() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ScaleFactor_5)); }
	inline float get_ScaleFactor_5() const { return ___ScaleFactor_5; }
	inline float* get_address_of_ScaleFactor_5() { return &___ScaleFactor_5; }
	inline void set_ScaleFactor_5(float value)
	{
		___ScaleFactor_5 = value;
	}

	inline static int32_t get_offset_of_SortHierarchyByName_6() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___SortHierarchyByName_6)); }
	inline bool get_SortHierarchyByName_6() const { return ___SortHierarchyByName_6; }
	inline bool* get_address_of_SortHierarchyByName_6() { return &___SortHierarchyByName_6; }
	inline void set_SortHierarchyByName_6(bool value)
	{
		___SortHierarchyByName_6 = value;
	}

	inline static int32_t get_offset_of_ImportVisibility_7() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ImportVisibility_7)); }
	inline bool get_ImportVisibility_7() const { return ___ImportVisibility_7; }
	inline bool* get_address_of_ImportVisibility_7() { return &___ImportVisibility_7; }
	inline void set_ImportVisibility_7(bool value)
	{
		___ImportVisibility_7 = value;
	}

	inline static int32_t get_offset_of_Static_8() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___Static_8)); }
	inline bool get_Static_8() const { return ___Static_8; }
	inline bool* get_address_of_Static_8() { return &___Static_8; }
	inline void set_Static_8(bool value)
	{
		___Static_8 = value;
	}

	inline static int32_t get_offset_of_AddAssetUnloader_9() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___AddAssetUnloader_9)); }
	inline bool get_AddAssetUnloader_9() const { return ___AddAssetUnloader_9; }
	inline bool* get_address_of_AddAssetUnloader_9() { return &___AddAssetUnloader_9; }
	inline void set_AddAssetUnloader_9(bool value)
	{
		___AddAssetUnloader_9 = value;
	}

	inline static int32_t get_offset_of_ImportMeshes_10() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ImportMeshes_10)); }
	inline bool get_ImportMeshes_10() const { return ___ImportMeshes_10; }
	inline bool* get_address_of_ImportMeshes_10() { return &___ImportMeshes_10; }
	inline void set_ImportMeshes_10(bool value)
	{
		___ImportMeshes_10 = value;
	}

	inline static int32_t get_offset_of_LimitBoneWeights_11() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___LimitBoneWeights_11)); }
	inline bool get_LimitBoneWeights_11() const { return ___LimitBoneWeights_11; }
	inline bool* get_address_of_LimitBoneWeights_11() { return &___LimitBoneWeights_11; }
	inline void set_LimitBoneWeights_11(bool value)
	{
		___LimitBoneWeights_11 = value;
	}

	inline static int32_t get_offset_of_ReadEnabled_12() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ReadEnabled_12)); }
	inline bool get_ReadEnabled_12() const { return ___ReadEnabled_12; }
	inline bool* get_address_of_ReadEnabled_12() { return &___ReadEnabled_12; }
	inline void set_ReadEnabled_12(bool value)
	{
		___ReadEnabled_12 = value;
	}

	inline static int32_t get_offset_of_ReadAndWriteEnabled_13() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ReadAndWriteEnabled_13)); }
	inline bool get_ReadAndWriteEnabled_13() const { return ___ReadAndWriteEnabled_13; }
	inline bool* get_address_of_ReadAndWriteEnabled_13() { return &___ReadAndWriteEnabled_13; }
	inline void set_ReadAndWriteEnabled_13(bool value)
	{
		___ReadAndWriteEnabled_13 = value;
	}

	inline static int32_t get_offset_of_OptimizeMeshes_14() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___OptimizeMeshes_14)); }
	inline bool get_OptimizeMeshes_14() const { return ___OptimizeMeshes_14; }
	inline bool* get_address_of_OptimizeMeshes_14() { return &___OptimizeMeshes_14; }
	inline void set_OptimizeMeshes_14(bool value)
	{
		___OptimizeMeshes_14 = value;
	}

	inline static int32_t get_offset_of_GenerateColliders_15() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___GenerateColliders_15)); }
	inline bool get_GenerateColliders_15() const { return ___GenerateColliders_15; }
	inline bool* get_address_of_GenerateColliders_15() { return &___GenerateColliders_15; }
	inline void set_GenerateColliders_15(bool value)
	{
		___GenerateColliders_15 = value;
	}

	inline static int32_t get_offset_of_ConvexColliders_16() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ConvexColliders_16)); }
	inline bool get_ConvexColliders_16() const { return ___ConvexColliders_16; }
	inline bool* get_address_of_ConvexColliders_16() { return &___ConvexColliders_16; }
	inline void set_ConvexColliders_16(bool value)
	{
		___ConvexColliders_16 = value;
	}

	inline static int32_t get_offset_of_ImportBlendShapes_17() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ImportBlendShapes_17)); }
	inline bool get_ImportBlendShapes_17() const { return ___ImportBlendShapes_17; }
	inline bool* get_address_of_ImportBlendShapes_17() { return &___ImportBlendShapes_17; }
	inline void set_ImportBlendShapes_17(bool value)
	{
		___ImportBlendShapes_17 = value;
	}

	inline static int32_t get_offset_of_ImportColors_18() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ImportColors_18)); }
	inline bool get_ImportColors_18() const { return ___ImportColors_18; }
	inline bool* get_address_of_ImportColors_18() { return &___ImportColors_18; }
	inline void set_ImportColors_18(bool value)
	{
		___ImportColors_18 = value;
	}

	inline static int32_t get_offset_of_IndexFormat_19() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___IndexFormat_19)); }
	inline int32_t get_IndexFormat_19() const { return ___IndexFormat_19; }
	inline int32_t* get_address_of_IndexFormat_19() { return &___IndexFormat_19; }
	inline void set_IndexFormat_19(int32_t value)
	{
		___IndexFormat_19 = value;
	}

	inline static int32_t get_offset_of_KeepQuads_20() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___KeepQuads_20)); }
	inline bool get_KeepQuads_20() const { return ___KeepQuads_20; }
	inline bool* get_address_of_KeepQuads_20() { return &___KeepQuads_20; }
	inline void set_KeepQuads_20(bool value)
	{
		___KeepQuads_20 = value;
	}

	inline static int32_t get_offset_of_ImportNormals_21() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ImportNormals_21)); }
	inline bool get_ImportNormals_21() const { return ___ImportNormals_21; }
	inline bool* get_address_of_ImportNormals_21() { return &___ImportNormals_21; }
	inline void set_ImportNormals_21(bool value)
	{
		___ImportNormals_21 = value;
	}

	inline static int32_t get_offset_of_SmoothingAngle_22() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___SmoothingAngle_22)); }
	inline float get_SmoothingAngle_22() const { return ___SmoothingAngle_22; }
	inline float* get_address_of_SmoothingAngle_22() { return &___SmoothingAngle_22; }
	inline void set_SmoothingAngle_22(float value)
	{
		___SmoothingAngle_22 = value;
	}

	inline static int32_t get_offset_of_ImportBlendShapeNormals_23() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ImportBlendShapeNormals_23)); }
	inline bool get_ImportBlendShapeNormals_23() const { return ___ImportBlendShapeNormals_23; }
	inline bool* get_address_of_ImportBlendShapeNormals_23() { return &___ImportBlendShapeNormals_23; }
	inline void set_ImportBlendShapeNormals_23(bool value)
	{
		___ImportBlendShapeNormals_23 = value;
	}

	inline static int32_t get_offset_of_ImportTangents_24() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ImportTangents_24)); }
	inline bool get_ImportTangents_24() const { return ___ImportTangents_24; }
	inline bool* get_address_of_ImportTangents_24() { return &___ImportTangents_24; }
	inline void set_ImportTangents_24(bool value)
	{
		___ImportTangents_24 = value;
	}

	inline static int32_t get_offset_of_SwapUVs_25() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___SwapUVs_25)); }
	inline bool get_SwapUVs_25() const { return ___SwapUVs_25; }
	inline bool* get_address_of_SwapUVs_25() { return &___SwapUVs_25; }
	inline void set_SwapUVs_25(bool value)
	{
		___SwapUVs_25 = value;
	}

	inline static int32_t get_offset_of_ImportMaterials_26() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ImportMaterials_26)); }
	inline bool get_ImportMaterials_26() const { return ___ImportMaterials_26; }
	inline bool* get_address_of_ImportMaterials_26() { return &___ImportMaterials_26; }
	inline void set_ImportMaterials_26(bool value)
	{
		___ImportMaterials_26 = value;
	}

	inline static int32_t get_offset_of_MaterialMappers_27() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___MaterialMappers_27)); }
	inline MaterialMapperU5BU5D_tF588CE83499BAA8C6713C7F3CC0A21AFC92F431B* get_MaterialMappers_27() const { return ___MaterialMappers_27; }
	inline MaterialMapperU5BU5D_tF588CE83499BAA8C6713C7F3CC0A21AFC92F431B** get_address_of_MaterialMappers_27() { return &___MaterialMappers_27; }
	inline void set_MaterialMappers_27(MaterialMapperU5BU5D_tF588CE83499BAA8C6713C7F3CC0A21AFC92F431B* value)
	{
		___MaterialMappers_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaterialMappers_27), (void*)value);
	}

	inline static int32_t get_offset_of_AddSecondAlphaMaterial_28() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___AddSecondAlphaMaterial_28)); }
	inline bool get_AddSecondAlphaMaterial_28() const { return ___AddSecondAlphaMaterial_28; }
	inline bool* get_address_of_AddSecondAlphaMaterial_28() { return &___AddSecondAlphaMaterial_28; }
	inline void set_AddSecondAlphaMaterial_28(bool value)
	{
		___AddSecondAlphaMaterial_28 = value;
	}

	inline static int32_t get_offset_of_ImportTextures_29() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ImportTextures_29)); }
	inline bool get_ImportTextures_29() const { return ___ImportTextures_29; }
	inline bool* get_address_of_ImportTextures_29() { return &___ImportTextures_29; }
	inline void set_ImportTextures_29(bool value)
	{
		___ImportTextures_29 = value;
	}

	inline static int32_t get_offset_of_Enforce16BitsTextures_30() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___Enforce16BitsTextures_30)); }
	inline bool get_Enforce16BitsTextures_30() const { return ___Enforce16BitsTextures_30; }
	inline bool* get_address_of_Enforce16BitsTextures_30() { return &___Enforce16BitsTextures_30; }
	inline void set_Enforce16BitsTextures_30(bool value)
	{
		___Enforce16BitsTextures_30 = value;
	}

	inline static int32_t get_offset_of_ScanForAlphaPixels_31() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ScanForAlphaPixels_31)); }
	inline bool get_ScanForAlphaPixels_31() const { return ___ScanForAlphaPixels_31; }
	inline bool* get_address_of_ScanForAlphaPixels_31() { return &___ScanForAlphaPixels_31; }
	inline void set_ScanForAlphaPixels_31(bool value)
	{
		___ScanForAlphaPixels_31 = value;
	}

	inline static int32_t get_offset_of_UseAlphaMaterials_32() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___UseAlphaMaterials_32)); }
	inline bool get_UseAlphaMaterials_32() const { return ___UseAlphaMaterials_32; }
	inline bool* get_address_of_UseAlphaMaterials_32() { return &___UseAlphaMaterials_32; }
	inline void set_UseAlphaMaterials_32(bool value)
	{
		___UseAlphaMaterials_32 = value;
	}

	inline static int32_t get_offset_of_TextureMapper_33() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___TextureMapper_33)); }
	inline TextureMapper_t5F507BD9487F7208C0C0F0557319705ED3850251 * get_TextureMapper_33() const { return ___TextureMapper_33; }
	inline TextureMapper_t5F507BD9487F7208C0C0F0557319705ED3850251 ** get_address_of_TextureMapper_33() { return &___TextureMapper_33; }
	inline void set_TextureMapper_33(TextureMapper_t5F507BD9487F7208C0C0F0557319705ED3850251 * value)
	{
		___TextureMapper_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextureMapper_33), (void*)value);
	}

	inline static int32_t get_offset_of_TextureCompressionQuality_34() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___TextureCompressionQuality_34)); }
	inline int32_t get_TextureCompressionQuality_34() const { return ___TextureCompressionQuality_34; }
	inline int32_t* get_address_of_TextureCompressionQuality_34() { return &___TextureCompressionQuality_34; }
	inline void set_TextureCompressionQuality_34(int32_t value)
	{
		___TextureCompressionQuality_34 = value;
	}

	inline static int32_t get_offset_of_GenerateMipmaps_35() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___GenerateMipmaps_35)); }
	inline bool get_GenerateMipmaps_35() const { return ___GenerateMipmaps_35; }
	inline bool* get_address_of_GenerateMipmaps_35() { return &___GenerateMipmaps_35; }
	inline void set_GenerateMipmaps_35(bool value)
	{
		___GenerateMipmaps_35 = value;
	}

	inline static int32_t get_offset_of_FixNormalMaps_36() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___FixNormalMaps_36)); }
	inline bool get_FixNormalMaps_36() const { return ___FixNormalMaps_36; }
	inline bool* get_address_of_FixNormalMaps_36() { return &___FixNormalMaps_36; }
	inline void set_FixNormalMaps_36(bool value)
	{
		___FixNormalMaps_36 = value;
	}

	inline static int32_t get_offset_of_AnimationType_37() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___AnimationType_37)); }
	inline int32_t get_AnimationType_37() const { return ___AnimationType_37; }
	inline int32_t* get_address_of_AnimationType_37() { return &___AnimationType_37; }
	inline void set_AnimationType_37(int32_t value)
	{
		___AnimationType_37 = value;
	}

	inline static int32_t get_offset_of_AvatarDefinition_38() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___AvatarDefinition_38)); }
	inline int32_t get_AvatarDefinition_38() const { return ___AvatarDefinition_38; }
	inline int32_t* get_address_of_AvatarDefinition_38() { return &___AvatarDefinition_38; }
	inline void set_AvatarDefinition_38(int32_t value)
	{
		___AvatarDefinition_38 = value;
	}

	inline static int32_t get_offset_of_Avatar_39() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___Avatar_39)); }
	inline Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * get_Avatar_39() const { return ___Avatar_39; }
	inline Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B ** get_address_of_Avatar_39() { return &___Avatar_39; }
	inline void set_Avatar_39(Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * value)
	{
		___Avatar_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Avatar_39), (void*)value);
	}

	inline static int32_t get_offset_of_HumanDescription_40() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___HumanDescription_40)); }
	inline HumanDescription_tEACA23902C6C7408E1CCF42A06E9B12486F48325 * get_HumanDescription_40() const { return ___HumanDescription_40; }
	inline HumanDescription_tEACA23902C6C7408E1CCF42A06E9B12486F48325 ** get_address_of_HumanDescription_40() { return &___HumanDescription_40; }
	inline void set_HumanDescription_40(HumanDescription_tEACA23902C6C7408E1CCF42A06E9B12486F48325 * value)
	{
		___HumanDescription_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HumanDescription_40), (void*)value);
	}

	inline static int32_t get_offset_of_RootBoneMapper_41() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___RootBoneMapper_41)); }
	inline RootBoneMapper_t03DA8C0E317148BABFD0BB03F6EB15E186B1159D * get_RootBoneMapper_41() const { return ___RootBoneMapper_41; }
	inline RootBoneMapper_t03DA8C0E317148BABFD0BB03F6EB15E186B1159D ** get_address_of_RootBoneMapper_41() { return &___RootBoneMapper_41; }
	inline void set_RootBoneMapper_41(RootBoneMapper_t03DA8C0E317148BABFD0BB03F6EB15E186B1159D * value)
	{
		___RootBoneMapper_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RootBoneMapper_41), (void*)value);
	}

	inline static int32_t get_offset_of_HumanoidAvatarMapper_42() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___HumanoidAvatarMapper_42)); }
	inline HumanoidAvatarMapper_t89D9B00DCB730E454EFB3D487631459AA98F5AAF * get_HumanoidAvatarMapper_42() const { return ___HumanoidAvatarMapper_42; }
	inline HumanoidAvatarMapper_t89D9B00DCB730E454EFB3D487631459AA98F5AAF ** get_address_of_HumanoidAvatarMapper_42() { return &___HumanoidAvatarMapper_42; }
	inline void set_HumanoidAvatarMapper_42(HumanoidAvatarMapper_t89D9B00DCB730E454EFB3D487631459AA98F5AAF * value)
	{
		___HumanoidAvatarMapper_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HumanoidAvatarMapper_42), (void*)value);
	}

	inline static int32_t get_offset_of_LipSyncMappers_43() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___LipSyncMappers_43)); }
	inline LipSyncMapperU5BU5D_t37FA8F6F4C7A5458234DB2A568F8A621F7A8EA69* get_LipSyncMappers_43() const { return ___LipSyncMappers_43; }
	inline LipSyncMapperU5BU5D_t37FA8F6F4C7A5458234DB2A568F8A621F7A8EA69** get_address_of_LipSyncMappers_43() { return &___LipSyncMappers_43; }
	inline void set_LipSyncMappers_43(LipSyncMapperU5BU5D_t37FA8F6F4C7A5458234DB2A568F8A621F7A8EA69* value)
	{
		___LipSyncMappers_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LipSyncMappers_43), (void*)value);
	}

	inline static int32_t get_offset_of_SampleBindPose_44() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___SampleBindPose_44)); }
	inline bool get_SampleBindPose_44() const { return ___SampleBindPose_44; }
	inline bool* get_address_of_SampleBindPose_44() { return &___SampleBindPose_44; }
	inline void set_SampleBindPose_44(bool value)
	{
		___SampleBindPose_44 = value;
	}

	inline static int32_t get_offset_of_EnforceTPose_45() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___EnforceTPose_45)); }
	inline bool get_EnforceTPose_45() const { return ___EnforceTPose_45; }
	inline bool* get_address_of_EnforceTPose_45() { return &___EnforceTPose_45; }
	inline void set_EnforceTPose_45(bool value)
	{
		___EnforceTPose_45 = value;
	}

	inline static int32_t get_offset_of_ResampleAnimations_46() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ResampleAnimations_46)); }
	inline bool get_ResampleAnimations_46() const { return ___ResampleAnimations_46; }
	inline bool* get_address_of_ResampleAnimations_46() { return &___ResampleAnimations_46; }
	inline void set_ResampleAnimations_46(bool value)
	{
		___ResampleAnimations_46 = value;
	}

	inline static int32_t get_offset_of_AnimationWrapMode_47() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___AnimationWrapMode_47)); }
	inline int32_t get_AnimationWrapMode_47() const { return ___AnimationWrapMode_47; }
	inline int32_t* get_address_of_AnimationWrapMode_47() { return &___AnimationWrapMode_47; }
	inline void set_AnimationWrapMode_47(int32_t value)
	{
		___AnimationWrapMode_47 = value;
	}

	inline static int32_t get_offset_of_AnimationClipMappers_48() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___AnimationClipMappers_48)); }
	inline AnimationClipMapperU5BU5D_tE903B789E016DB3111F1C61C9E9892C03459CB96* get_AnimationClipMappers_48() const { return ___AnimationClipMappers_48; }
	inline AnimationClipMapperU5BU5D_tE903B789E016DB3111F1C61C9E9892C03459CB96** get_address_of_AnimationClipMappers_48() { return &___AnimationClipMappers_48; }
	inline void set_AnimationClipMappers_48(AnimationClipMapperU5BU5D_tE903B789E016DB3111F1C61C9E9892C03459CB96* value)
	{
		___AnimationClipMappers_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimationClipMappers_48), (void*)value);
	}

	inline static int32_t get_offset_of_ExternalDataMapper_49() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ExternalDataMapper_49)); }
	inline ExternalDataMapper_t22E930F982328E0861BB36A1B5DF2B4D36B7C9DA * get_ExternalDataMapper_49() const { return ___ExternalDataMapper_49; }
	inline ExternalDataMapper_t22E930F982328E0861BB36A1B5DF2B4D36B7C9DA ** get_address_of_ExternalDataMapper_49() { return &___ExternalDataMapper_49; }
	inline void set_ExternalDataMapper_49(ExternalDataMapper_t22E930F982328E0861BB36A1B5DF2B4D36B7C9DA * value)
	{
		___ExternalDataMapper_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExternalDataMapper_49), (void*)value);
	}

	inline static int32_t get_offset_of_ShowLoadingWarnings_50() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ShowLoadingWarnings_50)); }
	inline bool get_ShowLoadingWarnings_50() const { return ___ShowLoadingWarnings_50; }
	inline bool* get_address_of_ShowLoadingWarnings_50() { return &___ShowLoadingWarnings_50; }
	inline void set_ShowLoadingWarnings_50(bool value)
	{
		___ShowLoadingWarnings_50 = value;
	}

	inline static int32_t get_offset_of_CloseStreamAutomatically_51() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___CloseStreamAutomatically_51)); }
	inline bool get_CloseStreamAutomatically_51() const { return ___CloseStreamAutomatically_51; }
	inline bool* get_address_of_CloseStreamAutomatically_51() { return &___CloseStreamAutomatically_51; }
	inline void set_CloseStreamAutomatically_51(bool value)
	{
		___CloseStreamAutomatically_51 = value;
	}

	inline static int32_t get_offset_of_Timeout_52() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___Timeout_52)); }
	inline int32_t get_Timeout_52() const { return ___Timeout_52; }
	inline int32_t* get_address_of_Timeout_52() { return &___Timeout_52; }
	inline void set_Timeout_52(int32_t value)
	{
		___Timeout_52 = value;
	}

	inline static int32_t get_offset_of_DestroyOnError_53() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___DestroyOnError_53)); }
	inline bool get_DestroyOnError_53() const { return ___DestroyOnError_53; }
	inline bool* get_address_of_DestroyOnError_53() { return &___DestroyOnError_53; }
	inline void set_DestroyOnError_53(bool value)
	{
		___DestroyOnError_53 = value;
	}

	inline static int32_t get_offset_of_EnsureQuaternionContinuity_54() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___EnsureQuaternionContinuity_54)); }
	inline bool get_EnsureQuaternionContinuity_54() const { return ___EnsureQuaternionContinuity_54; }
	inline bool* get_address_of_EnsureQuaternionContinuity_54() { return &___EnsureQuaternionContinuity_54; }
	inline void set_EnsureQuaternionContinuity_54(bool value)
	{
		___EnsureQuaternionContinuity_54 = value;
	}

	inline static int32_t get_offset_of_UseMaterialKeywords_55() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___UseMaterialKeywords_55)); }
	inline bool get_UseMaterialKeywords_55() const { return ___UseMaterialKeywords_55; }
	inline bool* get_address_of_UseMaterialKeywords_55() { return &___UseMaterialKeywords_55; }
	inline void set_UseMaterialKeywords_55(bool value)
	{
		___UseMaterialKeywords_55 = value;
	}

	inline static int32_t get_offset_of_ForceGCCollectionWhileLoading_56() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___ForceGCCollectionWhileLoading_56)); }
	inline bool get_ForceGCCollectionWhileLoading_56() const { return ___ForceGCCollectionWhileLoading_56; }
	inline bool* get_address_of_ForceGCCollectionWhileLoading_56() { return &___ForceGCCollectionWhileLoading_56; }
	inline void set_ForceGCCollectionWhileLoading_56(bool value)
	{
		___ForceGCCollectionWhileLoading_56 = value;
	}

	inline static int32_t get_offset_of_MergeVertices_57() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___MergeVertices_57)); }
	inline bool get_MergeVertices_57() const { return ___MergeVertices_57; }
	inline bool* get_address_of_MergeVertices_57() { return &___MergeVertices_57; }
	inline void set_MergeVertices_57(bool value)
	{
		___MergeVertices_57 = value;
	}

	inline static int32_t get_offset_of_MarkTexturesNoLongerReadable_58() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___MarkTexturesNoLongerReadable_58)); }
	inline bool get_MarkTexturesNoLongerReadable_58() const { return ___MarkTexturesNoLongerReadable_58; }
	inline bool* get_address_of_MarkTexturesNoLongerReadable_58() { return &___MarkTexturesNoLongerReadable_58; }
	inline void set_MarkTexturesNoLongerReadable_58(bool value)
	{
		___MarkTexturesNoLongerReadable_58 = value;
	}

	inline static int32_t get_offset_of_UseUnityNativeTextureLoader_59() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___UseUnityNativeTextureLoader_59)); }
	inline bool get_UseUnityNativeTextureLoader_59() const { return ___UseUnityNativeTextureLoader_59; }
	inline bool* get_address_of_UseUnityNativeTextureLoader_59() { return &___UseUnityNativeTextureLoader_59; }
	inline void set_UseUnityNativeTextureLoader_59(bool value)
	{
		___UseUnityNativeTextureLoader_59 = value;
	}

	inline static int32_t get_offset_of_UseUnityNativeNormalCalculator_60() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___UseUnityNativeNormalCalculator_60)); }
	inline bool get_UseUnityNativeNormalCalculator_60() const { return ___UseUnityNativeNormalCalculator_60; }
	inline bool* get_address_of_UseUnityNativeNormalCalculator_60() { return &___UseUnityNativeNormalCalculator_60; }
	inline void set_UseUnityNativeNormalCalculator_60(bool value)
	{
		___UseUnityNativeNormalCalculator_60 = value;
	}

	inline static int32_t get_offset_of_GCHelperCollectionInterval_61() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___GCHelperCollectionInterval_61)); }
	inline float get_GCHelperCollectionInterval_61() const { return ___GCHelperCollectionInterval_61; }
	inline float* get_address_of_GCHelperCollectionInterval_61() { return &___GCHelperCollectionInterval_61; }
	inline void set_GCHelperCollectionInterval_61(float value)
	{
		___GCHelperCollectionInterval_61 = value;
	}

	inline static int32_t get_offset_of_FixedAllocations_62() { return static_cast<int32_t>(offsetof(AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6, ___FixedAllocations_62)); }
	inline List_1_tFB87A8A948C1087E530344595EAB9727C97EA783 * get_FixedAllocations_62() const { return ___FixedAllocations_62; }
	inline List_1_tFB87A8A948C1087E530344595EAB9727C97EA783 ** get_address_of_FixedAllocations_62() { return &___FixedAllocations_62; }
	inline void set_FixedAllocations_62(List_1_tFB87A8A948C1087E530344595EAB9727C97EA783 * value)
	{
		___FixedAllocations_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedAllocations_62), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  m_Items[1];

public:
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		m_Items[index] = value;
	}
};
// TriLibCore.Stl.Reader.StlGeometryGroup[]
struct StlGeometryGroupU5BU5D_t66A01DFA109EABB82A06675C5FFC912AD8790BE5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * m_Items[1];

public:
	inline StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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


// System.Void TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalVertexData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryGroup_1__ctor_m280F32B3522F9777894B074B37380932F1559311_gshared (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalVertexData>::set_Name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void GeometryGroup_1_set_Name_m0DDF11170E796B9F033625B0CEE04117D8EAAFC2_gshared_inline (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalVertexData>::get_Name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* GeometryGroup_1_get_Name_m6CA82976E17896A56C4B0B84898BC7EA18AEBE75_gshared_inline (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6E336459937EBBC514F001464CC3771240EEBB87_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Enumerable_ToArray_TisRuntimeObject_mF33F5D8045B820AE98F4EEE7524A58F9B52436DA_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void TriLibCore.Geometries.Geometry::AddVertex<TriLibCore.Geometries.PositionNormalVertexData>(TriLibCore.AssetLoaderContext,System.Int32,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geometry_AddVertex_TisPositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468_mF465A11C95FB0D1C4142CE53AB5D4547CB244AEF_gshared (Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D * __this, AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * ___assetLoaderContext0, int32_t ___vertexIndex1, PositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468  ___vertexData2, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<!0> TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalVertexData>::get_VerticesData()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject* GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_gshared_inline (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);

// System.Void TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalVertexData>::.ctor()
inline void GeometryGroup_1__ctor_m280F32B3522F9777894B074B37380932F1559311 (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 * __this, const RuntimeMethod* method)
{
	((  void (*) (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 *, const RuntimeMethod*))GeometryGroup_1__ctor_m280F32B3522F9777894B074B37380932F1559311_gshared)(__this, method);
}
// TriLibCore.Interfaces.IRootModel TriLibCore.ReaderBase::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReaderBase_ReadStream_m11740C4C3E1CEAE8DD0390C747EB59A3A67769FD (ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * ___assetLoaderContext1, String_t* ___filename2, Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 * ___onProgress3, const RuntimeMethod* method);
// System.Void TriLibCore.Stl.StlProcessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor__ctor_m8B239FA57ADE9963A689C7577B8D3403EDDB17A2 (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, const RuntimeMethod* method);
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::Process(TriLibCore.Stl.Reader.StlReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_Process_m4317AEBD12068BA14E5F59A56AFCAB9F2694E46C (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * ___stlReader0, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream1, const RuntimeMethod* method);
// System.Void TriLibCore.ReaderBase::PostProcessModel(TriLibCore.Interfaces.IRootModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_PostProcessModel_mB5399AA97BA14DE8D7477821FF0DF920E0473B03 (ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * __this, RuntimeObject* ___model0, const RuntimeMethod* method);
// System.Void TriLibCore.ReaderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase__ctor_mE57241B3A26D1B2ECFF1C6778B1A52E97BC507EC (ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Geometries.Geometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geometry__ctor_m7BB1AF37D5A5DDB6C609DC3E7128B73074F3F8F9 (Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D * __this, const RuntimeMethod* method);
// System.String TriLibCore.Stl.StlModel::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* StlModel_get_Name_mC0D35A531A853C60621714BF07A6C37DBA87E0C0_inline (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mE992F6E2E1DCFF6095A506AF1E5D4D82AA7139ED (Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * __this, String_t* ___key0, StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 *, String_t*, StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TriLibCore.Stl.Reader.StlGeometryGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlGeometryGroup__ctor_mBC6D545612FD8DD5D740EB4116BE650F0E21E1B0 (StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalVertexData>::set_Name(System.String)
inline void GeometryGroup_1_set_Name_m0DDF11170E796B9F033625B0CEE04117D8EAAFC2_inline (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 *, String_t*, const RuntimeMethod*))GeometryGroup_1_set_Name_m0DDF11170E796B9F033625B0CEE04117D8EAAFC2_gshared_inline)(__this, ___value0, method);
}
// TriLibCore.AssetLoaderContext TriLibCore.ReaderBase::get_AssetLoaderContext()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline (ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>::Add(!0,!1)
inline void Dictionary_2_Add_m7920B3BAC96DD0039343006AB4353750C6267995 (Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * __this, String_t* ___key0, StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 *, String_t*, StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean TriLibCore.Stl.StlProcessor::IsBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlProcessor_IsBinary_m88928D5AE0A485A8D2D84D5C4D379DD4054FB59B (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::ParseBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseBinary_m1E3235F4ED02AC9D1DE88B49FB6D651EF8BE4D6C (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::ParseASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseASCII_mDEB3B364D0C1C2AEEC9210C5F2BB864AE4B654D8 (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input0, const RuntimeMethod* method);
// TriLibCore.Stl.Reader.StlGeometryGroup TriLibCore.Stl.StlProcessor::GetActiveGeometryGroup(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * StlProcessor_GetActiveGeometryGroup_mB48FB6BCE76D29418B6CE66C58098AB888E803B2 (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, int32_t ___vertexCount0, const RuntimeMethod* method);
// System.Void TriLibCore.Stl.StlModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel__ctor_mD9780421251A9FB04FDE9AE89BE4163451F87A94 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// System.Void TriLibCore.Stl.StlModel::set_LocalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StlModel_set_LocalScale_m61AADB5AE9A36FC24C3E3AFF33CB16098363C7B2_inline (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void TriLibCore.Stl.StlModel::set_GeometryGroup(TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StlModel_set_GeometryGroup_m4EAA7F116F9D0F2DFCABEB315F8DC47C724F6D44_inline (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.String TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalVertexData>::get_Name()
inline String_t* GeometryGroup_1_get_Name_m6CA82976E17896A56C4B0B84898BC7EA18AEBE75_inline (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 *, const RuntimeMethod*))GeometryGroup_1_get_Name_m6CA82976E17896A56C4B0B84898BC7EA18AEBE75_gshared_inline)(__this, method);
}
// System.Void TriLibCore.Stl.StlModel::set_Name(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StlModel_set_Name_m9A6B9CC9C16AE5E40519FC3E7AB9106A6CA15C86_inline (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TriLibCore.Stl.StlModel::set_Visibility(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StlModel_set_Visibility_mD11E545BA4BF44F8AFDD9C7E692A33B62D9BC73A_inline (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>::Add(!0,!1)
inline void Dictionary_2_Add_mAA41DD686257939146E5446172FD6A0C9191475C (Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A *, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::ReadVector3(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  StlProcessor_ReadVector3_mF48EA5BEE58D982DFF737E39432AD374329704FF (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::GetNormal(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  StlProcessor_GetNormal_m9BF7F7ABFDE938D5CC32B79D4802F50D0C9A75E8 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___c2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Void TriLibCore.Stl.StlProcessor::AddOutputVertex(TriLibCore.Stl.Reader.StlGeometryGroup,System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52 (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * ___geometryGroup0, int32_t ___vertexIndex1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vertex2, const RuntimeMethod* method);
// System.Void TriLibCore.ReaderBase::UpdateLoadingPercentage(System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_UpdateLoadingPercentage_mE85C029F452B2FF867199DBDE590A95CF6EB31CB (ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * __this, float ___value0, int32_t ___step1, int32_t ___maxValue2, const RuntimeMethod* method);
// System.Void TriLibCore.Stl.StlRootModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel__ctor_mE5265B9A0F7D22869C678DBB67D8514238B5FD46 (StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>::get_Values()
inline ValueCollection_tBA0155381369E19FD228BACACD1E8AEA0B835610 * Dictionary_2_get_Values_m3D2E659A5CE1E3FDC54C95C8FF3FC26FB62ED776 (Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tBA0155381369E19FD228BACACD1E8AEA0B835610 * (*) (Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A *, const RuntimeMethod*))Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TriLibCore.Interfaces.IModel>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mAA99369EA5AC4E7C7615CE6F3FEA673F67178011 (List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m6E336459937EBBC514F001464CC3771240EEBB87_gshared)(__this, ___collection0, method);
}
// System.Void TriLibCore.Stl.StlModel::set_Children(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StlModel_set_Children_mE87A6169E55D97B1D71ADE504322E8A629F9F4EE_inline (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>::get_Values()
inline ValueCollection_tDFFEF71B988FD7F9578D05DCD2090801E9369E1E * Dictionary_2_get_Values_mB60118F39E54B113F79C06ED80475D704C1111D0 (Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tDFFEF71B988FD7F9578D05DCD2090801E9369E1E * (*) (Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 *, const RuntimeMethod*))Dictionary_2_get_Values_m58CC32586C31C6F38B730DE7CD79A1FFE9109BA4_gshared)(__this, method);
}
// !!0[] System.Linq.Enumerable::ToArray<TriLibCore.Stl.Reader.StlGeometryGroup>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StlGeometryGroupU5BU5D_t66A01DFA109EABB82A06675C5FFC912AD8790BE5* Enumerable_ToArray_TisStlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6_m4144286030EF1CCD8B2FD281857F25D9BBF88FD5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StlGeometryGroupU5BU5D_t66A01DFA109EABB82A06675C5FFC912AD8790BE5* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mF33F5D8045B820AE98F4EEE7524A58F9B52436DA_gshared)(___source0, method);
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllGeometryGroups(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StlRootModel_set_AllGeometryGroups_m1987B266BFCAD8203F2AEC8DDBB8C9CDE92E1337_inline (StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// TriLibCore.Stl.StlGeometry TriLibCore.Stl.StlProcessor::GetActiveGeometry(TriLibCore.Stl.Reader.StlGeometryGroup,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D * StlProcessor_GetActiveGeometry_mBBEFFBFCB0208948230DA2FD120C718A9C6F546D (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * ___geometryGroup0, bool ___isQuad1, const RuntimeMethod* method);
// System.Void TriLibCore.Geometries.PositionNormalVertexData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector4,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionNormalVertexData__ctor_mBD65266AF227350A92DBE8F24678E0432268F4C3 (PositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal1, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___tangent2, int32_t ___groupIndex3, const RuntimeMethod* method);
// System.Void TriLibCore.Geometries.Geometry::AddVertex<TriLibCore.Geometries.PositionNormalVertexData>(TriLibCore.AssetLoaderContext,System.Int32,!!0)
inline void Geometry_AddVertex_TisPositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468_mF465A11C95FB0D1C4142CE53AB5D4547CB244AEF (Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D * __this, AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * ___assetLoaderContext0, int32_t ___vertexIndex1, PositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468  ___vertexData2, const RuntimeMethod* method)
{
	((  void (*) (Geometry_t2C4D0391CED224BA2D70FC13C6D0B2C90914EA5D *, AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 *, int32_t, PositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468 , const RuntimeMethod*))Geometry_AddVertex_TisPositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468_mF465A11C95FB0D1C4142CE53AB5D4547CB244AEF_gshared)(__this, ___assetLoaderContext0, ___vertexIndex1, ___vertexData2, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single TriLibCore.Stl.StlStreamReader::ReadTokenAsFloat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StlStreamReader_ReadTokenAsFloat_mC7A7B8CAB8B25FAB4BEEBD9577C5B6639BBF3EC8 (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * __this, bool ___required0, const RuntimeMethod* method);
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m40612154C321752932D3321D65AFF83691C195BD (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// System.String TriLibCore.Stl.StlStreamReader::ReadToken(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5 (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * __this, bool ___required0, bool ___ignoreSpaces1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.IO.StreamReader::get_EndOfStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamReader_get_EndOfStream_m27AD6266C30A5EB091918D822BD201F08A4D4423 (StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::ReadVector3(TriLibCore.Stl.StlStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  StlProcessor_ReadVector3_mA3A7A4E1CDD221FF50B1F2720BA2C52D7EE9464F (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * ___stlStreamReader0, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<!0> TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalVertexData>::get_VerticesData()
inline RuntimeObject* GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_inline (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 *, const RuntimeMethod*))GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>::.ctor()
inline void Dictionary_2__ctor_m89EE6FF8C68FB9EEAE22C2E1A3BBD5DA281DB517 (Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>::.ctor()
inline void Dictionary_2__ctor_m0B2F1A5C279BB8A329A8EC563509225F72B8D8EE (Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_m4FE60E3061A34FB7B835A80AC156A85649610744 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, float* ___result3, const RuntimeMethod* method);
// System.Int32 TriLibCore.Stl.StlStreamReader::get_Line()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Line_m46C8095E14E627D803C930479FE6147D928DEE90_inline (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * __this, const RuntimeMethod* method);
// System.Int32 TriLibCore.Stl.StlStreamReader::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Column_m5C95A8D087D2627E3C2DBBBFE139C10FC0EF3DBF (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m6AD25C8043D76E8E4BB14554D59A69035A1908EB (StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
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
// System.Void TriLibCore.Stl.Reader.StlGeometryGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlGeometryGroup__ctor_mBC6D545612FD8DD5D740EB4116BE650F0E21E1B0 (StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlGeometryGroup__ctor_mBC6D545612FD8DD5D740EB4116BE650F0E21E1B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GeometryGroup_1__ctor_m280F32B3522F9777894B074B37380932F1559311(__this, /*hidden argument*/GeometryGroup_1__ctor_m280F32B3522F9777894B074B37380932F1559311_RuntimeMethod_var);
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
// System.String[] TriLibCore.Stl.Reader.StlReader::GetExtensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* StlReader_GetExtensions_m7397DC4BACE828B62C46A306F361EB21AC6F3C9F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlReader_GetExtensions_m7397DC4BACE828B62C46A306F361EB21AC6F3C9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral66869AA5FE0A7B130EA98F65CCB7E663B31CBF2C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral66869AA5FE0A7B130EA98F65CCB7E663B31CBF2C);
		return L_1;
	}
}
// System.Int32 TriLibCore.Stl.Reader.StlReader::get_LoadingStepsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlReader_get_LoadingStepsCount_mF486328397242A37C76AD2688CBAFE12033DBB34 (StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * __this, const RuntimeMethod* method)
{
	{
		return 2;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.Reader.StlReader::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlReader_ReadStream_m92ACB2DD3854BB4C23D6D2DFC3710CE7EEC03677 (StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * ___assetLoaderContext1, String_t* ___filename2, Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 * ___onProgress3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlReader_ReadStream_m92ACB2DD3854BB4C23D6D2DFC3710CE7EEC03677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___stream0;
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_1 = ___assetLoaderContext1;
		String_t* L_2 = ___filename2;
		Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 * L_3 = ___onProgress3;
		ReaderBase_ReadStream_m11740C4C3E1CEAE8DD0390C747EB59A3A67769FD(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * L_4 = (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A *)il2cpp_codegen_object_new(StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A_il2cpp_TypeInfo_var);
		StlProcessor__ctor_m8B239FA57ADE9963A689C7577B8D3403EDDB17A2(L_4, /*hidden argument*/NULL);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = ___stream0;
		NullCheck(L_4);
		RuntimeObject* L_6 = StlProcessor_Process_m4317AEBD12068BA14E5F59A56AFCAB9F2694E46C(L_4, __this, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		RuntimeObject* L_7 = V_0;
		ReaderBase_PostProcessModel_mB5399AA97BA14DE8D7477821FF0DF920E0473B03(__this, L_7, /*hidden argument*/NULL);
		RuntimeObject* L_8 = V_0;
		return L_8;
	}
}
// System.Void TriLibCore.Stl.Reader.StlReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlReader__ctor_mFE924F0B11691BB56A91F42C9D3D293461DC67D4 (StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * __this, const RuntimeMethod* method)
{
	{
		ReaderBase__ctor_mE57241B3A26D1B2ECFF1C6778B1A52E97BC507EC(__this, /*hidden argument*/NULL);
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
// System.Void TriLibCore.Stl.StlGeometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlGeometry__ctor_m1072D4DC38607758F9C4162AF8AC42D94B46D348 (StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D * __this, const RuntimeMethod* method)
{
	{
		Geometry__ctor_m7BB1AF37D5A5DDB6C609DC3E7128B73074F3F8F9(__this, /*hidden argument*/NULL);
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
// System.String TriLibCore.Stl.StlModel::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlModel_get_Name_mC0D35A531A853C60621714BF07A6C37DBA87E0C0 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Name_m9A6B9CC9C16AE5E40519FC3E7AB9106A6CA15C86 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlModel::get_LocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  StlModel_get_LocalPosition_m44299AF12F39F95053945E983177BBEA403BD3CC (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CLocalPositionU3Ek__BackingField_1();
		return L_0;
	}
}
// UnityEngine.Quaternion TriLibCore.Stl.StlModel::get_LocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  StlModel_get_LocalRotation_m98906A837487266416B7E550BC3FBE7DC30E7391 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CLocalRotationU3Ek__BackingField_2();
		return L_0;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlModel::get_LocalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  StlModel_get_LocalScale_m88D60BC7117C3F37AA78D740785810C6F98CA147 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CLocalScaleU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_LocalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_LocalScale_m61AADB5AE9A36FC24C3E3AFF33CB16098363C7B2 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CLocalScaleU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlModel::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlModel_get_Visibility_m49AA98D7733516570F0453520EBE563D65B0644B (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CVisibilityU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Visibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Visibility_mD11E545BA4BF44F8AFDD9C7E692A33B62D9BC73A (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CVisibilityU3Ek__BackingField_4(L_0);
		return;
	}
}
// TriLibCore.Interfaces.IModel TriLibCore.Stl.StlModel::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Parent_m3416CBC736FF7D9CFE3A01192BC12CC4880154D1 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CParentU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Children_mB60128228D6EFB2409726A055A11CBF5CB60495B (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CChildrenU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Children(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Children_mE87A6169E55D97B1D71ADE504322E8A629F9F4EE (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CChildrenU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlModel::get_IsBone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlModel_get_IsBone_mC2843D75E5458113778E3C5CDA5BF19733522FD4 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsBoneU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_IsBone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_IsBone_m26783DDE7BC903C3754AB3E0A9583D0B3DB851BE (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsBoneU3Ek__BackingField_7(L_0);
		return;
	}
}
// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Stl.StlModel::get_GeometryGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_GeometryGroup_m765BD8E9664826C03BC0593469D007A487C73650 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CGeometryGroupU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_GeometryGroup(TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_GeometryGroup_m4EAA7F116F9D0F2DFCABEB315F8DC47C724F6D44 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CGeometryGroupU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Bones_mA57FA8FFED82AF3D0D0AEEA0C8DF3003C0DFE8FE (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CBonesU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Bones(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Bones_m7465451E93F076F961ACAAF85DD7F6603FE5BDDE (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CBonesU3Ek__BackingField_9(L_0);
		return;
	}
}
// UnityEngine.Matrix4x4[] TriLibCore.Stl.StlModel::get_BindPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* StlModel_get_BindPoses_m0617572452813B38FFD8337CDD267FA4D663A5B3 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_0 = __this->get_U3CBindPosesU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_BindPoses(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_BindPoses_m6462CB036F01C8F1552B8CC0810F037C73891E4E (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___value0, const RuntimeMethod* method)
{
	{
		Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* L_0 = ___value0;
		__this->set_U3CBindPosesU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Stl.StlModel::get_MaterialIndices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_MaterialIndices_m991C59CE77AB08CEEEA9A7C1880315C905F96FAC (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CMaterialIndicesU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_MaterialIndices(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_MaterialIndices_m40A3D26760216135DD853E526BB4BD497E034045 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CMaterialIndicesU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.String TriLibCore.Stl.StlModel::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlModel_ToString_mE28F98C6D5C654E91FC310C86A9A916EFFB1BE4B (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = StlModel_get_Name_mC0D35A531A853C60621714BF07A6C37DBA87E0C0_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel__ctor_mD9780421251A9FB04FDE9AE89BE4163451F87A94 (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
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
// TriLibCore.Stl.Reader.StlGeometryGroup TriLibCore.Stl.StlProcessor::GetActiveGeometryGroup(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * StlProcessor_GetActiveGeometryGroup_mB48FB6BCE76D29418B6CE66C58098AB888E803B2 (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, int32_t ___vertexCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlProcessor_GetActiveGeometryGroup_mB48FB6BCE76D29418B6CE66C58098AB888E803B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * V_1 = NULL;
	{
		String_t* L_0 = __this->get__groupName_3();
		V_0 = L_0;
		String_t* L_1 = V_0;
		String_t* L_2 = __this->get__lastGeometryGroupName_4();
		bool L_3 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * L_4 = __this->get__geometryGroups_0();
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = Dictionary_2_TryGetValue_mE992F6E2E1DCFF6095A506AF1E5D4D82AA7139ED(L_4, L_5, (StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mE992F6E2E1DCFF6095A506AF1E5D4D82AA7139ED_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0055;
		}
	}
	{
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_7 = (StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 *)il2cpp_codegen_object_new(StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6_il2cpp_TypeInfo_var);
		StlGeometryGroup__ctor_mBC6D545612FD8DD5D740EB4116BE650F0E21E1B0(L_7, /*hidden argument*/NULL);
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_8 = L_7;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		GeometryGroup_1_set_Name_m0DDF11170E796B9F033625B0CEE04117D8EAAFC2_inline(L_8, L_9, /*hidden argument*/GeometryGroup_1_set_Name_m0DDF11170E796B9F033625B0CEE04117D8EAAFC2_RuntimeMethod_var);
		V_1 = L_8;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_10 = V_1;
		StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * L_11 = __this->get__reader_2();
		NullCheck(L_11);
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_12 = ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline(L_11, /*hidden argument*/NULL);
		int32_t L_13 = ___vertexCount0;
		int32_t L_14 = ___vertexCount0;
		NullCheck(L_10);
		VirtActionInvoker5< AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 *, int32_t, int32_t, int32_t, int32_t >::Invoke(21 /* System.Void TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalVertexData>::Setup(TriLibCore.AssetLoaderContext,System.Int32,System.Int32,System.Int32,System.Int32) */, L_10, L_12, L_13, L_14, ((int32_t)32), 0);
		Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * L_15 = __this->get__geometryGroups_0();
		String_t* L_16 = V_0;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_17 = V_1;
		NullCheck(L_15);
		Dictionary_2_Add_m7920B3BAC96DD0039343006AB4353750C6267995(L_15, L_16, L_17, /*hidden argument*/Dictionary_2_Add_m7920B3BAC96DD0039343006AB4353750C6267995_RuntimeMethod_var);
	}

IL_0055:
	{
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_18 = V_1;
		__this->set__activeGeometryGroup_6(L_18);
		String_t* L_19 = V_0;
		__this->set__lastGeometryGroupName_4(L_19);
	}

IL_0063:
	{
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_20 = __this->get__activeGeometryGroup_6();
		return L_20;
	}
}
// TriLibCore.Stl.StlGeometry TriLibCore.Stl.StlProcessor::GetActiveGeometry(TriLibCore.Stl.Reader.StlGeometryGroup,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D * StlProcessor_GetActiveGeometry_mBBEFFBFCB0208948230DA2FD120C718A9C6F546D (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * ___geometryGroup0, bool ___isQuad1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlProcessor_GetActiveGeometry_mBBEFFBFCB0208948230DA2FD120C718A9C6F546D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__loopNumber_8();
		int32_t L_1 = __this->get__lastLoopNumber_5();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0038;
		}
	}
	{
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_2 = ___geometryGroup0;
		StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * L_3 = __this->get__reader_2();
		NullCheck(L_3);
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_4 = ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get__loopNumber_8();
		bool L_6 = ___isQuad1;
		NullCheck(L_2);
		StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D * L_7 = GenericVirtFuncInvoker3< StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D *, AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 *, int32_t, bool >::Invoke(GeometryGroup_1_GetGeometry_TisStlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D_m87C1AF1F2130C6311F05F68B3BA8CD96EB6C51CC_RuntimeMethod_var, L_2, L_4, L_5, L_6);
		__this->set__activeGeometry_7(L_7);
		int32_t L_8 = __this->get__loopNumber_8();
		__this->set__lastLoopNumber_5(L_8);
	}

IL_0038:
	{
		StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D * L_9 = __this->get__activeGeometry_7();
		return L_9;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::Process(TriLibCore.Stl.Reader.StlReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_Process_m4317AEBD12068BA14E5F59A56AFCAB9F2694E46C (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * ___stlReader0, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream1, const RuntimeMethod* method)
{
	{
		StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * L_0 = ___stlReader0;
		__this->set__reader_2(L_0);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___stream1;
		bool L_2 = StlProcessor_IsBinary_m88928D5AE0A485A8D2D84D5C4D379DD4054FB59B(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_3 = ___stream1;
		RuntimeObject* L_4 = StlProcessor_ParseBinary_m1E3235F4ED02AC9D1DE88B49FB6D651EF8BE4D6C(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0017:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = ___stream1;
		RuntimeObject* L_6 = StlProcessor_ParseASCII_mDEB3B364D0C1C2AEEC9210C5F2BB864AE4B654D8(__this, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::GetNormal(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  StlProcessor_GetNormal_m9BF7F7ABFDE938D5CC32B79D4802F50D0C9A75E8 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___c2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlProcessor_GetNormal_m9BF7F7ABFDE938D5CC32B79D4802F50D0C9A75E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___b1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___c2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___a0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_2, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		return L_8;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::ParseBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseBinary_m1E3235F4ED02AC9D1DE88B49FB6D651EF8BE4D6C (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlProcessor_ParseBinary_m1E3235F4ED02AC9D1DE88B49FB6D651EF8BE4D6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * V_3 = NULL;
	StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * V_4 = NULL;
	int32_t V_5 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___stream0;
		NullCheck(L_0);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, (((int64_t)((int64_t)((int32_t)80)))), 1);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___stream0;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_2 = (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 *)il2cpp_codegen_object_new(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var);
		BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_3);
		V_1 = L_4;
		StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * L_5 = __this->get__reader_2();
		NullCheck(L_5);
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_6 = ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6 * L_7 = L_6->get_Options_0();
		NullCheck(L_7);
		float L_8 = L_7->get_ScaleFactor_5();
		V_2 = L_8;
		int32_t L_9 = V_1;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_10 = StlProcessor_GetActiveGeometryGroup_mB48FB6BCE76D29418B6CE66C58098AB888E803B2(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)3)), /*hidden argument*/NULL);
		V_3 = L_10;
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_11 = (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 *)il2cpp_codegen_object_new(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089_il2cpp_TypeInfo_var);
		StlModel__ctor_mD9780421251A9FB04FDE9AE89BE4163451F87A94(L_11, /*hidden argument*/NULL);
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_12 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_12);
		StlModel_set_LocalScale_m61AADB5AE9A36FC24C3E3AFF33CB16098363C7B2_inline(L_12, L_13, /*hidden argument*/NULL);
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_14 = L_12;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_15 = V_3;
		NullCheck(L_14);
		StlModel_set_GeometryGroup_m4EAA7F116F9D0F2DFCABEB315F8DC47C724F6D44_inline(L_14, L_15, /*hidden argument*/NULL);
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_16 = L_14;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_17 = V_3;
		NullCheck(L_17);
		String_t* L_18 = GeometryGroup_1_get_Name_m6CA82976E17896A56C4B0B84898BC7EA18AEBE75_inline(L_17, /*hidden argument*/GeometryGroup_1_get_Name_m6CA82976E17896A56C4B0B84898BC7EA18AEBE75_RuntimeMethod_var);
		NullCheck(L_16);
		StlModel_set_Name_m9A6B9CC9C16AE5E40519FC3E7AB9106A6CA15C86_inline(L_16, L_18, /*hidden argument*/NULL);
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_19 = L_16;
		NullCheck(L_19);
		StlModel_set_Visibility_mD11E545BA4BF44F8AFDD9C7E692A33B62D9BC73A_inline(L_19, (bool)1, /*hidden argument*/NULL);
		V_4 = L_19;
		Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * L_20 = __this->get__models_1();
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_21 = V_4;
		NullCheck(L_21);
		String_t* L_22 = StlModel_get_Name_mC0D35A531A853C60621714BF07A6C37DBA87E0C0_inline(L_21, /*hidden argument*/NULL);
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_23 = V_4;
		NullCheck(L_20);
		Dictionary_2_Add_mAA41DD686257939146E5446172FD6A0C9191475C(L_20, L_22, L_23, /*hidden argument*/Dictionary_2_Add_mAA41DD686257939146E5446172FD6A0C9191475C_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0175;
	}

IL_0081:
	{
		StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * L_24 = __this->get__reader_2();
		NullCheck(L_24);
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_25 = ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6 * L_26 = L_25->get_Options_0();
		NullCheck(L_26);
		bool L_27 = L_26->get_ImportNormals_21();
		if (!L_27)
		{
			goto IL_00a4;
		}
	}
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_28 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = StlProcessor_ReadVector3_mF48EA5BEE58D982DFF737E39432AD374329704FF(L_28, /*hidden argument*/NULL);
		__this->set__facetNormal_9(L_29);
	}

IL_00a4:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_30 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = StlProcessor_ReadVector3_mF48EA5BEE58D982DFF737E39432AD374329704FF(L_30, /*hidden argument*/NULL);
		float L_32 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_31, L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_34 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = StlProcessor_ReadVector3_mF48EA5BEE58D982DFF737E39432AD374329704FF(L_34, /*hidden argument*/NULL);
		float L_36 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_35, L_36, /*hidden argument*/NULL);
		V_7 = L_37;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_38 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = StlProcessor_ReadVector3_mF48EA5BEE58D982DFF737E39432AD374329704FF(L_38, /*hidden argument*/NULL);
		float L_40 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_39, L_40, /*hidden argument*/NULL);
		V_8 = L_41;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_42 = V_0;
		NullCheck(L_42);
		VirtFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_42);
		StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * L_43 = __this->get__reader_2();
		NullCheck(L_43);
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_44 = ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6 * L_45 = L_44->get_Options_0();
		NullCheck(L_45);
		bool L_46 = L_45->get_ImportMeshes_10();
		if (!L_46)
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_47 = V_5;
		V_9 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_47, (int32_t)3));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = V_8;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = StlProcessor_GetNormal_m9BF7F7ABFDE938D5CC32B79D4802F50D0C9A75E8(L_48, L_49, L_50, /*hidden argument*/NULL);
		V_10 = L_51;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = __this->get__facetNormal_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_54 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_52, L_53, /*hidden argument*/NULL);
		if ((!(((float)L_54) > ((float)(0.0f)))))
		{
			goto IL_013a;
		}
	}
	{
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_55 = V_3;
		int32_t L_56 = V_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = V_8;
		StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52(__this, L_55, L_56, L_57, /*hidden argument*/NULL);
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_58 = V_3;
		int32_t L_59 = V_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = V_7;
		StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52(__this, L_58, ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1)), L_60, /*hidden argument*/NULL);
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_61 = V_3;
		int32_t L_62 = V_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = V_6;
		StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52(__this, L_61, ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)2)), L_63, /*hidden argument*/NULL);
		goto IL_015f;
	}

IL_013a:
	{
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_64 = V_3;
		int32_t L_65 = V_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = V_6;
		StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52(__this, L_64, ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)2)), L_66, /*hidden argument*/NULL);
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_67 = V_3;
		int32_t L_68 = V_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = V_7;
		StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52(__this, L_67, ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1)), L_69, /*hidden argument*/NULL);
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_70 = V_3;
		int32_t L_71 = V_9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = V_8;
		StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52(__this, L_70, L_71, L_72, /*hidden argument*/NULL);
	}

IL_015f:
	{
		StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * L_73 = __this->get__reader_2();
		int32_t L_74 = V_5;
		int32_t L_75 = V_1;
		NullCheck(L_73);
		ReaderBase_UpdateLoadingPercentage_mE85C029F452B2FF867199DBDE590A95CF6EB31CB(L_73, (((float)((float)L_74))), 1, L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_0175:
	{
		int32_t L_77 = V_5;
		int32_t L_78 = V_1;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_0081;
		}
	}
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_79 = V_0;
		NullCheck(L_79);
		VirtActionInvoker0::Invoke(6 /* System.Void System.IO.BinaryReader::Close() */, L_79);
		StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * L_80 = (StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 *)il2cpp_codegen_object_new(StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76_il2cpp_TypeInfo_var);
		StlRootModel__ctor_mE5265B9A0F7D22869C678DBB67D8514238B5FD46(L_80, /*hidden argument*/NULL);
		StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * L_81 = L_80;
		Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * L_82 = __this->get__models_1();
		NullCheck(L_82);
		ValueCollection_tBA0155381369E19FD228BACACD1E8AEA0B835610 * L_83 = Dictionary_2_get_Values_m3D2E659A5CE1E3FDC54C95C8FF3FC26FB62ED776(L_82, /*hidden argument*/Dictionary_2_get_Values_m3D2E659A5CE1E3FDC54C95C8FF3FC26FB62ED776_RuntimeMethod_var);
		List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540 * L_84 = (List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540 *)il2cpp_codegen_object_new(List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540_il2cpp_TypeInfo_var);
		List_1__ctor_mAA99369EA5AC4E7C7615CE6F3FEA673F67178011(L_84, L_83, /*hidden argument*/List_1__ctor_mAA99369EA5AC4E7C7615CE6F3FEA673F67178011_RuntimeMethod_var);
		NullCheck(L_81);
		StlModel_set_Children_mE87A6169E55D97B1D71ADE504322E8A629F9F4EE_inline(L_81, L_84, /*hidden argument*/NULL);
		StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * L_85 = L_81;
		Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * L_86 = __this->get__geometryGroups_0();
		NullCheck(L_86);
		ValueCollection_tDFFEF71B988FD7F9578D05DCD2090801E9369E1E * L_87 = Dictionary_2_get_Values_mB60118F39E54B113F79C06ED80475D704C1111D0(L_86, /*hidden argument*/Dictionary_2_get_Values_mB60118F39E54B113F79C06ED80475D704C1111D0_RuntimeMethod_var);
		StlGeometryGroupU5BU5D_t66A01DFA109EABB82A06675C5FFC912AD8790BE5* L_88 = Enumerable_ToArray_TisStlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6_m4144286030EF1CCD8B2FD281857F25D9BBF88FD5(L_87, /*hidden argument*/Enumerable_ToArray_TisStlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6_m4144286030EF1CCD8B2FD281857F25D9BBF88FD5_RuntimeMethod_var);
		NullCheck(L_85);
		StlRootModel_set_AllGeometryGroups_m1987B266BFCAD8203F2AEC8DDBB8C9CDE92E1337_inline(L_85, (RuntimeObject*)(RuntimeObject*)L_88, /*hidden argument*/NULL);
		StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * L_89 = L_85;
		NullCheck(L_89);
		StlModel_set_Visibility_mD11E545BA4BF44F8AFDD9C7E692A33B62D9BC73A_inline(L_89, (bool)1, /*hidden argument*/NULL);
		return L_89;
	}
}
// System.Void TriLibCore.Stl.StlProcessor::AddOutputVertex(TriLibCore.Stl.Reader.StlGeometryGroup,System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52 (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * ___geometryGroup0, int32_t ___vertexIndex1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vertex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_0 = ___geometryGroup0;
		StlGeometry_t4FC229BE897C87DAD3557508CECC52C1E41C0F1D * L_1 = StlProcessor_GetActiveGeometry_mBBEFFBFCB0208948230DA2FD120C718A9C6F546D(__this, L_0, (bool)0, /*hidden argument*/NULL);
		StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * L_2 = __this->get__reader_2();
		NullCheck(L_2);
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_3 = ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___vertexIndex1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___vertex2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get__facetNormal_9();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E ));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_7 = V_0;
		int32_t L_8 = ___vertexIndex1;
		PositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468  L_9;
		memset((&L_9), 0, sizeof(L_9));
		PositionNormalVertexData__ctor_mBD65266AF227350A92DBE8F24678E0432268F4C3((&L_9), L_5, L_6, L_7, ((int32_t)((int32_t)L_8/(int32_t)3)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Geometry_AddVertex_TisPositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468_mF465A11C95FB0D1C4142CE53AB5D4547CB244AEF(L_1, L_3, L_4, L_9, /*hidden argument*/Geometry_AddVertex_TisPositionNormalVertexData_t88906CA82A56DF2E26E6BA3DB6BB9C6CCF728468_mF465A11C95FB0D1C4142CE53AB5D4547CB244AEF_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::ReadVector3(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  StlProcessor_ReadVector3_mF48EA5BEE58D982DFF737E39432AD374329704FF (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_0 = ___binaryReader0;
		NullCheck(L_0);
		float L_1 = VirtFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_0);
		V_0 = L_1;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_2 = ___binaryReader0;
		NullCheck(L_2);
		float L_3 = VirtFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_2);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_4 = ___binaryReader0;
		NullCheck(L_4);
		float L_5 = VirtFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_4);
		V_1 = L_5;
		float L_6 = V_1;
		float L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), L_3, L_6, ((-L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::ReadVector3(TriLibCore.Stl.StlStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  StlProcessor_ReadVector3_mA3A7A4E1CDD221FF50B1F2720BA2C52D7EE9464F (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * ___stlStreamReader0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_0 = ___stlStreamReader0;
		NullCheck(L_0);
		float L_1 = StlStreamReader_ReadTokenAsFloat_mC7A7B8CAB8B25FAB4BEEBD9577C5B6639BBF3EC8(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_2 = ___stlStreamReader0;
		NullCheck(L_2);
		float L_3 = StlStreamReader_ReadTokenAsFloat_mC7A7B8CAB8B25FAB4BEEBD9577C5B6639BBF3EC8(L_2, (bool)1, /*hidden argument*/NULL);
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_4 = ___stlStreamReader0;
		NullCheck(L_4);
		float L_5 = StlStreamReader_ReadTokenAsFloat_mC7A7B8CAB8B25FAB4BEEBD9577C5B6639BBF3EC8(L_4, (bool)1, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = V_1;
		float L_7 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), L_3, L_6, ((-L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::ParseASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseASCII_mDEB3B364D0C1C2AEEC9210C5F2BB864AE4B654D8 (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlProcessor_ParseASCII_mDEB3B364D0C1C2AEEC9210C5F2BB864AE4B654D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * V_1 = NULL;
	int32_t V_2 = 0;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_3 = NULL;
	String_t* V_4 = NULL;
	StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * V_5 = NULL;
	StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * V_6 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * V_9 = NULL;
	int32_t V_10 = 0;
	String_t* G_B14_0 = NULL;
	StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * G_B14_1 = NULL;
	String_t* G_B13_0 = NULL;
	StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * G_B13_1 = NULL;
	{
		__this->set__loopNumber_8(0);
		V_0 = 0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___stream0;
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_1 = (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 *)il2cpp_codegen_object_new(StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1_il2cpp_TypeInfo_var);
		StlStreamReader__ctor_m40612154C321752932D3321D65AFF83691C195BD(L_1, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_002a;
	}

IL_0012:
	{
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5(L_2, (bool)0, (bool)0, /*hidden argument*/NULL);
		bool L_4 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_3, _stringLiteral6B4776BE4E7C4854E1996CC13464D240C32D15C1, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002a:
	{
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = StreamReader_get_EndOfStream_m27AD6266C30A5EB091918D822BD201F08A4D4423(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0012;
		}
	}
	{
		V_2 = 0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)3);
		V_3 = L_8;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_9 = ___stream0;
		NullCheck(L_9);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_9, (((int64_t)((int64_t)0))), 0);
		goto IL_0326;
	}

IL_004a:
	{
		StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * L_10 = __this->get__reader_2();
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_11 = V_1;
		NullCheck(L_11);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_12 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(17 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_11);
		NullCheck(L_12);
		int64_t L_13 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_12);
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_14 = V_1;
		NullCheck(L_14);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_15 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(17 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, L_14);
		NullCheck(L_15);
		int64_t L_16 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_15);
		NullCheck(L_10);
		ReaderBase_UpdateLoadingPercentage_mE85C029F452B2FF867199DBDE590A95CF6EB31CB(L_10, ((float)((float)(((float)((float)L_13)))/(float)(((float)((float)L_16))))), 0, 0, /*hidden argument*/NULL);
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5(L_17, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_4 = L_18;
		String_t* L_19 = V_4;
		bool L_20 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_19, _stringLiteral69E699BC1F92CB92ACFB304F419753E2FF473845, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00df;
		}
	}
	{
		String_t* L_21 = V_4;
		bool L_22 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_21, _stringLiteralCA7FCD046940EF1012CC48F1F72BDEEA47AC9E37, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00fb;
		}
	}
	{
		String_t* L_23 = V_4;
		bool L_24 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_23, _stringLiteralB1417920698F32A6D3E9B074A0DCE5DEF3F415B9, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0145;
		}
	}
	{
		String_t* L_25 = V_4;
		bool L_26 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_25, _stringLiteralCD39251B68912E31F92F3736064ED317DEA79DE8, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0177;
		}
	}
	{
		String_t* L_27 = V_4;
		bool L_28 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_27, _stringLiteralD0A311742C7F874B4BE54C611F2210551FBC76C9, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_018a;
		}
	}
	{
		String_t* L_29 = V_4;
		bool L_30 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_29, _stringLiteral6B4776BE4E7C4854E1996CC13464D240C32D15C1, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_0322;
	}

IL_00df:
	{
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_31 = V_1;
		NullCheck(L_31);
		String_t* L_32 = StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5(L_31, (bool)0, (bool)1, /*hidden argument*/NULL);
		String_t* L_33 = L_32;
		G_B13_0 = L_33;
		G_B13_1 = __this;
		if (L_33)
		{
			G_B14_0 = L_33;
			G_B14_1 = __this;
			goto IL_00f1;
		}
	}
	{
		G_B14_0 = _stringLiteral7505D64A54E061B7ACD54CCD58B49DC43500B635;
		G_B14_1 = G_B13_1;
	}

IL_00f1:
	{
		NullCheck(G_B14_1);
		G_B14_1->set__groupName_3(G_B14_0);
		goto IL_0326;
	}

IL_00fb:
	{
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_34 = V_1;
		NullCheck(L_34);
		String_t* L_35 = StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5(L_34, (bool)1, (bool)0, /*hidden argument*/NULL);
		bool L_36 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_35, _stringLiteral9C2A6E4809AEEF7B7712CA4DB05A681452F4F748, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_011a;
		}
	}
	{
		Exception_t * L_37 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_37, _stringLiteralCA1FA4CE8316291B1C4697B4548B2D34E0889A68, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, StlProcessor_ParseASCII_mDEB3B364D0C1C2AEEC9210C5F2BB864AE4B654D8_RuntimeMethod_var);
	}

IL_011a:
	{
		StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * L_38 = __this->get__reader_2();
		NullCheck(L_38);
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_39 = ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6 * L_40 = L_39->get_Options_0();
		NullCheck(L_40);
		bool L_41 = L_40->get_ImportNormals_21();
		if (!L_41)
		{
			goto IL_0326;
		}
	}
	{
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_42 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = StlProcessor_ReadVector3_mA3A7A4E1CDD221FF50B1F2720BA2C52D7EE9464F(L_42, /*hidden argument*/NULL);
		__this->set__facetNormal_9(L_43);
		goto IL_0326;
	}

IL_0145:
	{
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_44 = V_1;
		NullCheck(L_44);
		String_t* L_45 = StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5(L_44, (bool)1, (bool)0, /*hidden argument*/NULL);
		bool L_46 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_45, _stringLiteral1DF823E482339EB6067F4134408B0B8B28411A78, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0164;
		}
	}
	{
		Exception_t * L_47 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_47, _stringLiteral21743A4BD308E00A9B7CB303EDB9DCC99223E1D7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, StlProcessor_ParseASCII_mDEB3B364D0C1C2AEEC9210C5F2BB864AE4B654D8_RuntimeMethod_var);
	}

IL_0164:
	{
		int32_t L_48 = __this->get__loopNumber_8();
		__this->set__loopNumber_8(((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1)));
		goto IL_0326;
	}

IL_0177:
	{
		int32_t L_49 = __this->get__loopNumber_8();
		__this->set__loopNumber_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1)));
		goto IL_0326;
	}

IL_018a:
	{
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_50 = V_1;
		NullCheck(L_50);
		StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5(L_50, (bool)0, (bool)0, /*hidden argument*/NULL);
		int32_t L_51 = V_0;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_52 = StlProcessor_GetActiveGeometryGroup_mB48FB6BCE76D29418B6CE66C58098AB888E803B2(__this, L_51, /*hidden argument*/NULL);
		V_5 = L_52;
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_53 = (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 *)il2cpp_codegen_object_new(StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089_il2cpp_TypeInfo_var);
		StlModel__ctor_mD9780421251A9FB04FDE9AE89BE4163451F87A94(L_53, /*hidden argument*/NULL);
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_54 = L_53;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_54);
		StlModel_set_LocalScale_m61AADB5AE9A36FC24C3E3AFF33CB16098363C7B2_inline(L_54, L_55, /*hidden argument*/NULL);
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_56 = L_54;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_57 = V_5;
		NullCheck(L_56);
		StlModel_set_GeometryGroup_m4EAA7F116F9D0F2DFCABEB315F8DC47C724F6D44_inline(L_56, L_57, /*hidden argument*/NULL);
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_58 = L_56;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_59 = V_5;
		NullCheck(L_59);
		String_t* L_60 = GeometryGroup_1_get_Name_m6CA82976E17896A56C4B0B84898BC7EA18AEBE75_inline(L_59, /*hidden argument*/GeometryGroup_1_get_Name_m6CA82976E17896A56C4B0B84898BC7EA18AEBE75_RuntimeMethod_var);
		NullCheck(L_58);
		StlModel_set_Name_m9A6B9CC9C16AE5E40519FC3E7AB9106A6CA15C86_inline(L_58, L_60, /*hidden argument*/NULL);
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_61 = L_58;
		NullCheck(L_61);
		StlModel_set_Visibility_mD11E545BA4BF44F8AFDD9C7E692A33B62D9BC73A_inline(L_61, (bool)1, /*hidden argument*/NULL);
		V_6 = L_61;
		Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * L_62 = __this->get__models_1();
		String_t* L_63 = __this->get__groupName_3();
		StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * L_64 = V_6;
		NullCheck(L_62);
		Dictionary_2_Add_mAA41DD686257939146E5446172FD6A0C9191475C(L_62, L_63, L_64, /*hidden argument*/Dictionary_2_Add_mAA41DD686257939146E5446172FD6A0C9191475C_RuntimeMethod_var);
		goto IL_0326;
	}

IL_01e2:
	{
		StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * L_65 = __this->get__reader_2();
		NullCheck(L_65);
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_66 = ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6 * L_67 = L_66->get_Options_0();
		NullCheck(L_67);
		bool L_68 = L_67->get_ImportMeshes_10();
		if (!L_68)
		{
			goto IL_0326;
		}
	}
	{
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_69 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_70 = StlProcessor_ReadVector3_mA3A7A4E1CDD221FF50B1F2720BA2C52D7EE9464F(L_69, /*hidden argument*/NULL);
		V_7 = L_70;
		StlReader_tF9B0EB5008598C7DF8047925841EDBBA159F23BC * L_71 = __this->get__reader_2();
		NullCheck(L_71);
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_72 = ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline(L_71, /*hidden argument*/NULL);
		NullCheck(L_72);
		AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6 * L_73 = L_72->get_Options_0();
		NullCheck(L_73);
		float L_74 = L_73->get_ScaleFactor_5();
		V_8 = L_74;
		int32_t L_75 = V_0;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_76 = StlProcessor_GetActiveGeometryGroup_mB48FB6BCE76D29418B6CE66C58098AB888E803B2(__this, L_75, /*hidden argument*/NULL);
		V_9 = L_76;
		int32_t L_77 = V_2;
		int32_t L_78 = L_77;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
		V_10 = ((int32_t)((int32_t)L_78%(int32_t)3));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_79 = V_3;
		int32_t L_80 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_81 = V_7;
		float L_82 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_83 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_81, L_82, /*hidden argument*/NULL);
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_83);
		int32_t L_84 = V_10;
		if ((!(((uint32_t)L_84) == ((uint32_t)2))))
		{
			goto IL_0326;
		}
	}
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_85 = V_3;
		NullCheck(L_85);
		int32_t L_86 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_88 = V_3;
		NullCheck(L_88);
		int32_t L_89 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_91 = V_3;
		NullCheck(L_91);
		int32_t L_92 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_94 = StlProcessor_GetNormal_m9BF7F7ABFDE938D5CC32B79D4802F50D0C9A75E8(L_87, L_90, L_93, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_95 = __this->get__facetNormal_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_96 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_94, L_95, /*hidden argument*/NULL);
		if ((!(((float)L_96) > ((float)(0.0f)))))
		{
			goto IL_02c5;
		}
	}
	{
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_97 = V_9;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_98 = V_9;
		NullCheck(L_98);
		RuntimeObject* L_99 = GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_inline(L_98, /*hidden argument*/GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_RuntimeMethod_var);
		NullCheck(L_99);
		int32_t L_100 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Geometries.PositionNormalVertexData>::get_Count() */, ICollection_1_tB55AD6102F2440DC49EF31BA85C499F9DC2294F6_il2cpp_TypeInfo_var, L_99);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_101 = V_3;
		NullCheck(L_101);
		int32_t L_102 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52(__this, L_97, L_100, L_103, /*hidden argument*/NULL);
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_104 = V_9;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_105 = V_9;
		NullCheck(L_105);
		RuntimeObject* L_106 = GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_inline(L_105, /*hidden argument*/GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_RuntimeMethod_var);
		NullCheck(L_106);
		int32_t L_107 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Geometries.PositionNormalVertexData>::get_Count() */, ICollection_1_tB55AD6102F2440DC49EF31BA85C499F9DC2294F6_il2cpp_TypeInfo_var, L_106);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_108 = V_3;
		NullCheck(L_108);
		int32_t L_109 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52(__this, L_104, L_107, L_110, /*hidden argument*/NULL);
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_111 = V_9;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_112 = V_9;
		NullCheck(L_112);
		RuntimeObject* L_113 = GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_inline(L_112, /*hidden argument*/GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_RuntimeMethod_var);
		NullCheck(L_113);
		int32_t L_114 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Geometries.PositionNormalVertexData>::get_Count() */, ICollection_1_tB55AD6102F2440DC49EF31BA85C499F9DC2294F6_il2cpp_TypeInfo_var, L_113);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_115 = V_3;
		NullCheck(L_115);
		int32_t L_116 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52(__this, L_111, L_114, L_117, /*hidden argument*/NULL);
		goto IL_0326;
	}

IL_02c5:
	{
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_118 = V_9;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_119 = V_9;
		NullCheck(L_119);
		RuntimeObject* L_120 = GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_inline(L_119, /*hidden argument*/GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_RuntimeMethod_var);
		NullCheck(L_120);
		int32_t L_121 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Geometries.PositionNormalVertexData>::get_Count() */, ICollection_1_tB55AD6102F2440DC49EF31BA85C499F9DC2294F6_il2cpp_TypeInfo_var, L_120);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_122 = V_3;
		NullCheck(L_122);
		int32_t L_123 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52(__this, L_118, L_121, L_124, /*hidden argument*/NULL);
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_125 = V_9;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_126 = V_9;
		NullCheck(L_126);
		RuntimeObject* L_127 = GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_inline(L_126, /*hidden argument*/GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_RuntimeMethod_var);
		NullCheck(L_127);
		int32_t L_128 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Geometries.PositionNormalVertexData>::get_Count() */, ICollection_1_tB55AD6102F2440DC49EF31BA85C499F9DC2294F6_il2cpp_TypeInfo_var, L_127);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_129 = V_3;
		NullCheck(L_129);
		int32_t L_130 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52(__this, L_125, L_128, L_131, /*hidden argument*/NULL);
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_132 = V_9;
		StlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6 * L_133 = V_9;
		NullCheck(L_133);
		RuntimeObject* L_134 = GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_inline(L_133, /*hidden argument*/GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_RuntimeMethod_var);
		NullCheck(L_134);
		int32_t L_135 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Geometries.PositionNormalVertexData>::get_Count() */, ICollection_1_tB55AD6102F2440DC49EF31BA85C499F9DC2294F6_il2cpp_TypeInfo_var, L_134);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_136 = V_3;
		NullCheck(L_136);
		int32_t L_137 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		StlProcessor_AddOutputVertex_m09B3256F9B075B346986E99078096D34326DBA52(__this, L_132, L_135, L_138, /*hidden argument*/NULL);
		goto IL_0326;
	}

IL_0318:
	{
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_139 = V_1;
		NullCheck(L_139);
		String_t* L_140 = StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5(L_139, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_4 = L_140;
	}

IL_0322:
	{
		String_t* L_141 = V_4;
		if (L_141)
		{
			goto IL_0318;
		}
	}

IL_0326:
	{
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_142 = V_1;
		NullCheck(L_142);
		bool L_143 = StreamReader_get_EndOfStream_m27AD6266C30A5EB091918D822BD201F08A4D4423(L_142, /*hidden argument*/NULL);
		if (!L_143)
		{
			goto IL_004a;
		}
	}
	{
		StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * L_144 = V_1;
		NullCheck(L_144);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_144);
		StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * L_145 = (StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 *)il2cpp_codegen_object_new(StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76_il2cpp_TypeInfo_var);
		StlRootModel__ctor_mE5265B9A0F7D22869C678DBB67D8514238B5FD46(L_145, /*hidden argument*/NULL);
		StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * L_146 = L_145;
		Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * L_147 = __this->get__models_1();
		NullCheck(L_147);
		ValueCollection_tBA0155381369E19FD228BACACD1E8AEA0B835610 * L_148 = Dictionary_2_get_Values_m3D2E659A5CE1E3FDC54C95C8FF3FC26FB62ED776(L_147, /*hidden argument*/Dictionary_2_get_Values_m3D2E659A5CE1E3FDC54C95C8FF3FC26FB62ED776_RuntimeMethod_var);
		List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540 * L_149 = (List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540 *)il2cpp_codegen_object_new(List_1_t0DCB984C6B7276720EFCAF8CC6CE75DA05C64540_il2cpp_TypeInfo_var);
		List_1__ctor_mAA99369EA5AC4E7C7615CE6F3FEA673F67178011(L_149, L_148, /*hidden argument*/List_1__ctor_mAA99369EA5AC4E7C7615CE6F3FEA673F67178011_RuntimeMethod_var);
		NullCheck(L_146);
		StlModel_set_Children_mE87A6169E55D97B1D71ADE504322E8A629F9F4EE_inline(L_146, L_149, /*hidden argument*/NULL);
		StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * L_150 = L_146;
		Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * L_151 = __this->get__geometryGroups_0();
		NullCheck(L_151);
		ValueCollection_tDFFEF71B988FD7F9578D05DCD2090801E9369E1E * L_152 = Dictionary_2_get_Values_mB60118F39E54B113F79C06ED80475D704C1111D0(L_151, /*hidden argument*/Dictionary_2_get_Values_mB60118F39E54B113F79C06ED80475D704C1111D0_RuntimeMethod_var);
		StlGeometryGroupU5BU5D_t66A01DFA109EABB82A06675C5FFC912AD8790BE5* L_153 = Enumerable_ToArray_TisStlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6_m4144286030EF1CCD8B2FD281857F25D9BBF88FD5(L_152, /*hidden argument*/Enumerable_ToArray_TisStlGeometryGroup_t70C45DBA96B7216F65DB58623B63D5A9B79812E6_m4144286030EF1CCD8B2FD281857F25D9BBF88FD5_RuntimeMethod_var);
		NullCheck(L_150);
		StlRootModel_set_AllGeometryGroups_m1987B266BFCAD8203F2AEC8DDBB8C9CDE92E1337_inline(L_150, (RuntimeObject*)(RuntimeObject*)L_153, /*hidden argument*/NULL);
		StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * L_154 = L_150;
		NullCheck(L_154);
		StlModel_set_Visibility_mD11E545BA4BF44F8AFDD9C7E692A33B62D9BC73A_inline(L_154, (bool)1, /*hidden argument*/NULL);
		return L_154;
	}
}
// System.Boolean TriLibCore.Stl.StlProcessor::IsBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlProcessor_IsBinary_m88928D5AE0A485A8D2D84D5C4D379DD4054FB59B (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
	}

IL_0002:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___stream0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)10))))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)9))))
		{
			goto IL_0002;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0023:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_7 = ___stream0;
		NullCheck(L_7);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_7, (((int64_t)((int64_t)0))), 0);
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Void TriLibCore.Stl.StlProcessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor__ctor_m8B239FA57ADE9963A689C7577B8D3403EDDB17A2 (StlProcessor_t4927D8484AD9E2F402D5B4387F5D2B66213C1E4A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlProcessor__ctor_m8B239FA57ADE9963A689C7577B8D3403EDDB17A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 * L_0 = (Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667 *)il2cpp_codegen_object_new(Dictionary_2_t9473154C165769805B7B7947D6E2A143F1A74667_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m89EE6FF8C68FB9EEAE22C2E1A3BBD5DA281DB517(L_0, /*hidden argument*/Dictionary_2__ctor_m89EE6FF8C68FB9EEAE22C2E1A3BBD5DA281DB517_RuntimeMethod_var);
		__this->set__geometryGroups_0(L_0);
		Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A * L_1 = (Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A *)il2cpp_codegen_object_new(Dictionary_2_t3E2AC5ED9382DCAA0F068E29753239E7F86B209A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0B2F1A5C279BB8A329A8EC563509225F72B8D8EE(L_1, /*hidden argument*/Dictionary_2__ctor_m0B2F1A5C279BB8A329A8EC563509225F72B8D8EE_RuntimeMethod_var);
		__this->set__models_1(L_1);
		__this->set__groupName_3(_stringLiteral7505D64A54E061B7ACD54CCD58B49DC43500B635);
		__this->set__lastLoopNumber_5((-1));
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
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Stl.StlRootModel::get_AllGeometryGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllGeometryGroups_m2EEB89D0615D9C1808DF6B20DDA7FD824704D3A6 (StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAllGeometryGroupsU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllGeometryGroups(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllGeometryGroups_m1987B266BFCAD8203F2AEC8DDBB8C9CDE92E1337 (StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CAllGeometryGroupsU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Stl.StlRootModel::get_AllAnimations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllAnimations_m53A698BCD92BEE10E25F1D900A19A1CE08362C2C (StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAllAnimationsU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Stl.StlRootModel::get_AllMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllMaterials_mF6F58B72CE15F6FF746DA80450E44322C9728FA7 (StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAllMaterialsU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Stl.StlRootModel::get_AllTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllTextures_m0DADD291A71E2C7E0B2A215333297101F2730829 (StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAllTexturesU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel__ctor_mE5265B9A0F7D22869C678DBB67D8514238B5FD46 (StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * __this, const RuntimeMethod* method)
{
	{
		StlModel__ctor_mD9780421251A9FB04FDE9AE89BE4163451F87A94(__this, /*hidden argument*/NULL);
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
// System.Int32 TriLibCore.Stl.StlStreamReader::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Line_m46C8095E14E627D803C930479FE6147D928DEE90 (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLineU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Int32 TriLibCore.Stl.StlStreamReader::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Column_m5C95A8D087D2627E3C2DBBBFE139C10FC0EF3DBF (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * __this, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(17 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, __this);
		NullCheck(L_0);
		int64_t L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		int32_t L_2 = __this->get__endOfLinePointer_21();
		return (((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)(((int64_t)((int64_t)L_2))))))));
	}
}
// System.Single TriLibCore.Stl.StlStreamReader::ReadTokenAsFloat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StlStreamReader_ReadTokenAsFloat_mC7A7B8CAB8B25FAB4BEEBD9577C5B6639BBF3EC8 (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * __this, bool ___required0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlStreamReader_ReadTokenAsFloat_mC7A7B8CAB8B25FAB4BEEBD9577C5B6639BBF3EC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	float V_1 = 0.0f;
	{
		bool L_0 = ___required0;
		String_t* L_1 = StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5(__this, L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (-1.0f);
	}

IL_0017:
	{
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_5 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		bool L_6 = Single_TryParse_m4FE60E3061A34FB7B835A80AC156A85649610744(L_4, ((int32_t)511), L_5, (float*)(&V_1), /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_7 = StlStreamReader_get_Line_m46C8095E14E627D803C930479FE6147D928DEE90_inline(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		int32_t L_10 = StlStreamReader_get_Column_m5C95A8D087D2627E3C2DBBBFE139C10FC0EF3DBF(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralFAEABFFD035E23DA9307BB6445D59EA09481B99E, L_9, L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, StlStreamReader_ReadTokenAsFloat_mC7A7B8CAB8B25FAB4BEEBD9577C5B6639BBF3EC8_RuntimeMethod_var);
	}

IL_0051:
	{
		float L_15 = V_1;
		return L_15;
	}
}
// System.String TriLibCore.Stl.StlStreamReader::ReadToken(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5 (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * __this, bool ___required0, bool ___ignoreSpaces1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	int32_t V_7 = 0;
	int32_t G_B13_0 = 0;
	String_t* G_B29_0 = NULL;
	{
		__this->set__charPosition_23(0);
		V_0 = (bool)1;
		V_1 = (bool)0;
		goto IL_005e;
	}

IL_000d:
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, __this);
		V_3 = L_0;
		int32_t L_1 = V_3;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_2 = V_3;
		V_4 = (((int32_t)((uint16_t)L_2)));
		Il2CppChar L_3 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0058;
			}
			case 3:
			{
				goto IL_0058;
			}
			case 4:
			{
				goto IL_004f;
			}
		}
	}
	{
		Il2CppChar L_4 = V_4;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0058;
	}

IL_0042:
	{
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		V_1 = (bool)1;
		V_0 = (bool)0;
		goto IL_005e;
	}

IL_004f:
	{
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_005e;
	}

IL_0058:
	{
		V_0 = (bool)0;
		goto IL_005e;
	}

IL_005c:
	{
		V_0 = (bool)0;
	}

IL_005e:
	{
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_000d;
		}
	}
	{
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_006f;
		}
	}
	{
		bool L_7 = StreamReader_get_EndOfStream_m27AD6266C30A5EB091918D822BD201F08A4D4423(__this, /*hidden argument*/NULL);
		G_B13_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0070;
	}

IL_006f:
	{
		G_B13_0 = 0;
	}

IL_0070:
	{
		V_0 = (bool)G_B13_0;
		goto IL_0113;
	}

IL_0076:
	{
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, __this);
		V_5 = L_8;
		int32_t L_9 = V_5;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_10 = V_5;
		V_6 = (((int32_t)((uint16_t)L_10)));
		Il2CppChar L_11 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_00be;
			}
			case 1:
			{
				goto IL_00b1;
			}
			case 2:
			{
				goto IL_00eb;
			}
			case 3:
			{
				goto IL_00eb;
			}
			case 4:
			{
				goto IL_00b5;
			}
		}
	}
	{
		Il2CppChar L_12 = V_6;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)32))))
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00eb;
	}

IL_00b1:
	{
		V_0 = (bool)0;
		goto IL_0113;
	}

IL_00b5:
	{
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_0113;
	}

IL_00be:
	{
		bool L_13 = ___ignoreSpaces1;
		if (!L_13)
		{
			goto IL_00e7;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_14 = __this->get__charStream_22();
		int32_t L_15 = __this->get__charPosition_23();
		V_7 = L_15;
		int32_t L_16 = V_7;
		__this->set__charPosition_23(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		int32_t L_17 = V_7;
		Il2CppChar L_18 = V_6;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Il2CppChar)L_18);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_0113;
	}

IL_00e7:
	{
		V_0 = (bool)0;
		goto IL_0113;
	}

IL_00eb:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_19 = __this->get__charStream_22();
		int32_t L_20 = __this->get__charPosition_23();
		V_7 = L_20;
		int32_t L_21 = V_7;
		__this->set__charPosition_23(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
		int32_t L_22 = V_7;
		Il2CppChar L_23 = V_6;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (Il2CppChar)L_23);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_0113;
	}

IL_0111:
	{
		V_0 = (bool)0;
	}

IL_0113:
	{
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_25 = __this->get__charPosition_23();
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_0125;
		}
	}
	{
		G_B29_0 = ((String_t*)(NULL));
		goto IL_0137;
	}

IL_0125:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_26 = __this->get__charStream_22();
		int32_t L_27 = __this->get__charPosition_23();
		String_t* L_28 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_26, 0, L_27, /*hidden argument*/NULL);
		G_B29_0 = L_28;
	}

IL_0137:
	{
		V_2 = G_B29_0;
		bool L_29 = ___required0;
		if (!L_29)
		{
			goto IL_0164;
		}
	}
	{
		String_t* L_30 = V_2;
		if (L_30)
		{
			goto IL_0164;
		}
	}
	{
		int32_t L_31 = StlStreamReader_get_Line_m46C8095E14E627D803C930479FE6147D928DEE90_inline(__this, /*hidden argument*/NULL);
		int32_t L_32 = L_31;
		RuntimeObject * L_33 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_32);
		int32_t L_34 = StlStreamReader_get_Column_m5C95A8D087D2627E3C2DBBBFE139C10FC0EF3DBF(__this, /*hidden argument*/NULL);
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE0B8ECB019BFE3B0E11BB99421BEA98C685AFD17, L_33, L_36, /*hidden argument*/NULL);
		Exception_t * L_38 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_38, L_37, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, StlStreamReader_ReadToken_m29D9C17725A14578A196B2C85EB6EB2508BEFFF5_RuntimeMethod_var);
	}

IL_0164:
	{
		String_t* L_39 = V_2;
		return L_39;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m40612154C321752932D3321D65AFF83691C195BD (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StlStreamReader__ctor_m40612154C321752932D3321D65AFF83691C195BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->set__charStream_22(L_0);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___stream0;
		IL2CPP_RUNTIME_CLASS_INIT(StreamReader_t62E68063760DCD2FC036AE132DE69C24B7ED001E_il2cpp_TypeInfo_var);
		StreamReader__ctor_m6AD25C8043D76E8E4BB14554D59A69035A1908EB(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* StlModel_get_Name_mC0D35A531A853C60621714BF07A6C37DBA87E0C0_inline (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline (ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * __this, const RuntimeMethod* method)
{
	{
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_0 = __this->get_U3CAssetLoaderContextU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StlModel_set_LocalScale_m61AADB5AE9A36FC24C3E3AFF33CB16098363C7B2_inline (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CLocalScaleU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StlModel_set_GeometryGroup_m4EAA7F116F9D0F2DFCABEB315F8DC47C724F6D44_inline (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CGeometryGroupU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StlModel_set_Name_m9A6B9CC9C16AE5E40519FC3E7AB9106A6CA15C86_inline (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StlModel_set_Visibility_mD11E545BA4BF44F8AFDD9C7E692A33B62D9BC73A_inline (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CVisibilityU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StlModel_set_Children_mE87A6169E55D97B1D71ADE504322E8A629F9F4EE_inline (StlModel_t799E0BB7883C877B3EE824F8E5616B39229EA089 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CChildrenU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void StlRootModel_set_AllGeometryGroups_m1987B266BFCAD8203F2AEC8DDBB8C9CDE92E1337_inline (StlRootModel_tEB60054643D46C84DC17517B745FB1A908412E76 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CAllGeometryGroupsU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Line_m46C8095E14E627D803C930479FE6147D928DEE90_inline (StlStreamReader_t15E754C3410A48C1B92FD40A910A43925603F8E1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLineU3Ek__BackingField_24();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void GeometryGroup_1_set_Name_m0DDF11170E796B9F033625B0CEE04117D8EAAFC2_gshared_inline (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* GeometryGroup_1_get_Name_m6CA82976E17896A56C4B0B84898BC7EA18AEBE75_gshared_inline (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CNameU3Ek__BackingField_10();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject* GeometryGroup_1_get_VerticesData_mAC3174A9205EA54D2295B79763AA21EF232DC999_gshared_inline (GeometryGroup_1_t1EBE67D6734E50AAF6DBF43DD8CF09D2F3B95FE5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_U3CVerticesDataU3Ek__BackingField_13();
		return (RuntimeObject*)L_0;
	}
}
