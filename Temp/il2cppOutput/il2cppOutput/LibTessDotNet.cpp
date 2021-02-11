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

template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// LibTessDotNet.CombineCallback
struct CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF;
// LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912;
// LibTessDotNet.DefaultPool
struct DefaultPool_tE2042812BB14686168ABCFAA2114BCC379CE055C;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Edge>
struct DefaultTypePool_1_tF55083BEBD7748262297943C37D60F151B6E5DE2;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Face>
struct DefaultTypePool_1_tD65BF7F6FE500475650CD4104A99C1CC81BB83ED;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Vertex>
struct DefaultTypePool_1_t6506CD6EBC76D66687FCB06B74F9A722AF610613;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Tess/ActiveRegion>
struct DefaultTypePool_1_t0C08998C39340F844ABA5CDC5265C65DF8A68848;
// LibTessDotNet.DefaultTypePool`1<System.Object>
struct DefaultTypePool_1_t5B0B60559D309E92370504074F181CF200F777AD;
// LibTessDotNet.Dict`1/LessOrEqual<LibTessDotNet.Tess/ActiveRegion>
struct LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE;
// LibTessDotNet.Dict`1/LessOrEqual<System.Object>
struct LessOrEqual_tFDBBAD199E6FA7A15045DAC0D5927F584AE8E185;
// LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion>
struct Node_t66E8738DE17CE247142AD7181AD366AC78B180A7;
// LibTessDotNet.Dict`1/Node<System.Object>
struct Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735;
// LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>
struct Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93;
// LibTessDotNet.Dict`1<System.Object>
struct Dict_1_tA089E2D6BBA5623663F6247A0EC64218BE8B4C17;
// LibTessDotNet.IPool
struct IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B;
// LibTessDotNet.Mesh
struct Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8;
// LibTessDotNet.MeshUtils/Edge
struct Edge_t9D4BFE9716279C9D930CB20420750F7746432102;
// LibTessDotNet.MeshUtils/Face
struct Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276;
// LibTessDotNet.MeshUtils/Vertex
struct Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74;
// LibTessDotNet.MeshUtils/Vertex[]
struct VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2;
// LibTessDotNet.NullPool
struct NullPool_t3362A4521B554267969F55F0974D28D2089531B4;
// LibTessDotNet.PriorityHeap`1/LessOrEqual<LibTessDotNet.MeshUtils/Vertex>
struct LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33;
// LibTessDotNet.PriorityHeap`1/LessOrEqual<System.Object>
struct LessOrEqual_t8B03DB028A7B7C356E4F76478EC55B61306D2E4B;
// LibTessDotNet.PriorityHeap`1<LibTessDotNet.MeshUtils/Vertex>
struct PriorityHeap_1_t775EBDB65A0831C477E006AD252E4F6F93EDED1C;
// LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>
struct PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D;
// LibTessDotNet.PriorityQueue`1<System.Object>
struct PriorityQueue_1_t55C55D4C524213CB3782E3C7B429E0E275AA77FC;
// LibTessDotNet.Tess
struct Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95;
// LibTessDotNet.Tess/ActiveRegion
struct ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IDictionary`2<System.Type,LibTessDotNet.ITypePool>
struct IDictionary_2_t0EBC61F7DFD77EF1A70A8AC2920AC2F5C9293B29;
// System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>
struct IList_1_t9E7EE7D96045AE0BB65ABE133385C9090C459AA9;
// System.Collections.Generic.Queue`1<LibTessDotNet.MeshUtils/Edge>
struct Queue_1_t9EED3A5D87E73AC06455632A3161AADA03197201;
// System.Collections.Generic.Queue`1<LibTessDotNet.MeshUtils/Face>
struct Queue_1_t973A0FF346680F61BFF4DE457D357FF3FFAB4CB3;
// System.Collections.Generic.Queue`1<LibTessDotNet.MeshUtils/Vertex>
struct Queue_1_t3ED27A77ACC48A99C7D68963E8F427A1775F93D2;
// System.Collections.Generic.Queue`1<LibTessDotNet.Tess/ActiveRegion>
struct Queue_1_tC728169879AA272FC6EC676CE9633CD9C4584818;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPool_tE2042812BB14686168ABCFAA2114BCC379CE055C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t0C08998C39340F844ABA5CDC5265C65DF8A68848_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t6506CD6EBC76D66687FCB06B74F9A722AF610613_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_tD65BF7F6FE500475650CD4104A99C1CC81BB83ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_tF55083BEBD7748262297943C37D60F151B6E5DE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t7A7DEBDB7A8821C0B1063928331D715CC2D7A0C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t9E7EE7D96045AE0BB65ABE133385C9090C459AA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullPool_t3362A4521B554267969F55F0974D28D2089531B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vec3_t956A293556A430A69339B775D377A79CAE910D67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2BEBB63BDE008E0E66E2D8C8AC7868A934464DE8;
IL2CPP_EXTERN_C String_t* _stringLiteral450ADF49E61DCAED8DFD8271D9026A58F6C30441;
IL2CPP_EXTERN_C String_t* _stringLiteralB9B335FE5D383E918D4DA9B54845A1FD85E2E637;
IL2CPP_EXTERN_C String_t* _stringLiteralC5291FFB9CA0B17568779560CB4F9B2661EDA320;
IL2CPP_EXTERN_C String_t* _stringLiteralE37F21A4DD746C17845B88F51BE497A8854F2BF3;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_m60F5B62C348925079EF65CCECC4FC7A8938C45DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_m9E1E9F79B3F2AA093ECDEB1C01DA2326094D41C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mE48B93A6460E56B1E7849D984CCEE85E8D818EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mE65B2978D5CB19B852B5A92D721D088FCE1D1CBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Find_m8AEF3B8D8D00938EEB1E307558C9D63A9D44285E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_InsertBefore_mF0D871E83178ACA0604BB8F33D7C1E9F949F21E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Insert_mEBFF89F4578CC084F9222521D69DEC96542F3198_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Min_mC2088BFE1CABE431F7ABF9EEE814BDDCB8F2BECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Remove_mED3BBF2B90D3DC2E931AB254ABCBFE8B54A86C02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1__ctor_m1639F7726FB18B4283DCAAA2194FFEC89E74F20D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_IsWindingInside_mA54017B2455C54E4A58F8B5968B355B1BF00B2AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0_m5B2020E08BEA48555D154FF9E597E96EEA6109E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisEdge_t9D4BFE9716279C9D930CB20420750F7746432102_m51FC579DFD7337DF8A73F7F5B3469F6AA3EEB7DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisFace_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276_m052001B17D64C24B48D22AC88ACD937F0D7D6D9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisMesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8_mCC30671D59EC1ECFDF374517229B66E017247F0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_mEF84A2B4985A18A163D1A914B0490F483E8476CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0_mA48EF9110A071B346E058117234E6057B75C0803_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisEdge_t9D4BFE9716279C9D930CB20420750F7746432102_m4F0DF3C265B0115C4B2697533D501A37A6C86A2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisFace_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276_m8CD7A191F864B7C9598F4621733B2E889E1E8223_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_mC70038284E946D1D6C4EB6F19BE1CCEFC0522FF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0_m6D2B667821C6A1413C2F119839B6B16F375CA1C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisEdge_t9D4BFE9716279C9D930CB20420750F7746432102_m66B90B909C42B8A0FFC35AE2EA263256713A863E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisFace_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276_m22D89B76B2D06473391A34351235D6B8E56B0408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisMesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8_m496E72CC1590807BEB318931B9DEE0420A5EE763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_m3D509F9B1C89493E6305C273107A312B795A5D3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LessOrEqual__ctor_m5AED739F8EB55ACB8D5F2DA57CEEAC1D1C0CED42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LessOrEqual__ctor_m6B65224E4AC4AA7ABC26F578FC18265B20AA07C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Node_get_Key_m1D4C78ADD8C0C08EFC01FA0EC80920D775D515DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_ExtractMin_m0A2011DC9AA923203CCD0665D59D3AEC52915619_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Init_m743812FB3581ADE73C6952B93DD47AC5E059F996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Insert_m210BD11DF16D9EC2F6F21B36FEE8AAF176D31903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Minimum_m59CF95646AF8055F52FD1945E7AAE8D614A22CA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Remove_mC989B256A36B00040DD49EC98E5FEFA025DAFE6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1__ctor_m381E6876563040423799A6672756687E7604E81F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_CheckForIntersect_mEC69C5260C5D6C86AAA9280D638D35B0141A7B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_ConnectLeftDegenerate_m738FDCB762490B50187769FC0DEED2C4437304E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_EdgeLeq_mF98D3A9B7A2D4F255C081FCAFAB2E2A559B5F402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_InitPriorityQ_m2245BE6201F58F750BB0EEBC98A42C88031A602D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_get_Item_m49E9B2C6FBC606ECAB4F53D71E4D95FA2E8F6498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CombineCallback_BeginInvoke_m47D53F3643E1396A4B08BA5DB0D4FEAA08B7EC08_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ContourVertex_ToString_m9F2A8CA10BA23DC4A4D3DF7E0AC8197C9E663101_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EdgePair_Create_m00433F031D09C6877542ED045F7219DD47FB4DD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Geom_IsWindingInside_mA54017B2455C54E4A58F8B5968B355B1BF00B2AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Geom_VertL1dist_m4A0A9865CCCEA1B8E4A3947B89F06CDD54F5541E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IPool__ctor_mAC687A8E0F6EA56B2AF3DCE6EC9AF2ABF116E0E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshUtils_KillEdge_m85A8A08CF38CEB4F71A19C422DE8030AFE964CD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshUtils_KillFace_mE461E76A0ED7A6E34CDBAB8D55BA4F8C5B867060_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshUtils_KillVertex_m3A191FEBF0F2FEE809D780EF45B9894211AFCB54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshUtils_MakeFace_mE45C0465345A0B69A2B26FACAF19A0281290A44B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshUtils_MakeVertex_m5A6351006D5298989664DC3EA05E6F1C1A7E306A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Mesh_Init_mF313A1D46138931FEDA0E3E6546892A0DA5DC8E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Mesh_Reset_mEB718C901034CCB11E68F265870408292BD5C5C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PQHandle__cctor_m3DF687A8DD0FFD9A5F46CE249837615D3637460F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_AddContourInternal_m89D418365BA30E2D8B6589A816EEC511E8E79DEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_AddRegionBelow_mCA582E60803B6331D7B69222DE1F6F9C51C856D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_AddSentinel_m5831E20DF2E4273561DA850EB911E7771E9C01C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_CheckForIntersect_mEC69C5260C5D6C86AAA9280D638D35B0141A7B31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_CheckForRightSplice_mBCE374F27191B9106F7D2C162877381577646FD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_ComputeInterior_m588F9F9D24E9984FE4D90D819CB19EA82192C1F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_ComputeNormal_m930C010E0F6CCF76531A69477BBD1F51FA9DE7AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_ConnectLeftDegenerate_m738FDCB762490B50187769FC0DEED2C4437304E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_ConnectLeftVertex_mB1E11B0555BB7AEAF13C439035F41F59BE6DE0F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_DeleteRegion_m09FC665365F882F15561EDF9F4EBC94DD780599F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_DoneEdgeDict_m013C7985D78AE32DB59B89B746DCDBA5E76523FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_GetIntersectData_m6A8E7E2FAB33EC6C551C3F29ED146F10E1B811EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_InitEdgeDict_mE13A9DA171D5680282222A4CB0C68C0E8E157D56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_InitPriorityQ_m2245BE6201F58F750BB0EEBC98A42C88031A602D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_OutputContours_mC99F855161EAE97FA2D0C1F71767778B238DA2A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_OutputPolymesh_m12B167C80EBFF639080B0C6DC1BFDC632AABB184_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_SignedArea_m85813F740E6553CD33829A95B29FEECBB2413515_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess_Tessellate_m7171058E28D78A9B6C7F5F77075C0A2A383D6877_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess__ctor_m67084DCB2B4DFC0133E3039E52A72ACFC0284A8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Tess__ctor_mD1A9B1ABC24366A359AC7FF792C88917FFEB6E11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vec3_LongAxis_mC96F5166F87C6C38F38278B42651A96A8D20393E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vec3_ToString_m705A61E6748DA1229F0D554B87C2FF8032827247_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vec3_get_Item_m49E9B2C6FBC606ECAB4F53D71E4D95FA2E8F6498_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vertex_Reset_m7C344455187917A14275561A35ED8FDC0C55D9D2_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912;
struct VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tA665FD92DF688338A130DAC82DAEA513A779F21B 
{
public:

public:
};


// System.Object


// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils_Edge>
struct  DefaultTypePool_1_tF55083BEBD7748262297943C37D60F151B6E5DE2  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_t9EED3A5D87E73AC06455632A3161AADA03197201 * ____pool_0;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(DefaultTypePool_1_tF55083BEBD7748262297943C37D60F151B6E5DE2, ____pool_0)); }
	inline Queue_1_t9EED3A5D87E73AC06455632A3161AADA03197201 * get__pool_0() const { return ____pool_0; }
	inline Queue_1_t9EED3A5D87E73AC06455632A3161AADA03197201 ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(Queue_1_t9EED3A5D87E73AC06455632A3161AADA03197201 * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_0), (void*)value);
	}
};


// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils_Face>
struct  DefaultTypePool_1_tD65BF7F6FE500475650CD4104A99C1CC81BB83ED  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_t973A0FF346680F61BFF4DE457D357FF3FFAB4CB3 * ____pool_0;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(DefaultTypePool_1_tD65BF7F6FE500475650CD4104A99C1CC81BB83ED, ____pool_0)); }
	inline Queue_1_t973A0FF346680F61BFF4DE457D357FF3FFAB4CB3 * get__pool_0() const { return ____pool_0; }
	inline Queue_1_t973A0FF346680F61BFF4DE457D357FF3FFAB4CB3 ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(Queue_1_t973A0FF346680F61BFF4DE457D357FF3FFAB4CB3 * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_0), (void*)value);
	}
};


// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils_Vertex>
struct  DefaultTypePool_1_t6506CD6EBC76D66687FCB06B74F9A722AF610613  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_t3ED27A77ACC48A99C7D68963E8F427A1775F93D2 * ____pool_0;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(DefaultTypePool_1_t6506CD6EBC76D66687FCB06B74F9A722AF610613, ____pool_0)); }
	inline Queue_1_t3ED27A77ACC48A99C7D68963E8F427A1775F93D2 * get__pool_0() const { return ____pool_0; }
	inline Queue_1_t3ED27A77ACC48A99C7D68963E8F427A1775F93D2 ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(Queue_1_t3ED27A77ACC48A99C7D68963E8F427A1775F93D2 * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_0), (void*)value);
	}
};


// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Tess_ActiveRegion>
struct  DefaultTypePool_1_t0C08998C39340F844ABA5CDC5265C65DF8A68848  : public RuntimeObject
{
public:
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_tC728169879AA272FC6EC676CE9633CD9C4584818 * ____pool_0;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(DefaultTypePool_1_t0C08998C39340F844ABA5CDC5265C65DF8A68848, ____pool_0)); }
	inline Queue_1_tC728169879AA272FC6EC676CE9633CD9C4584818 * get__pool_0() const { return ____pool_0; }
	inline Queue_1_tC728169879AA272FC6EC676CE9633CD9C4584818 ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(Queue_1_tC728169879AA272FC6EC676CE9633CD9C4584818 * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_0), (void*)value);
	}
};


// LibTessDotNet.Dict`1_Node<LibTessDotNet.Tess_ActiveRegion>
struct  Node_t66E8738DE17CE247142AD7181AD366AC78B180A7  : public RuntimeObject
{
public:
	// TValue LibTessDotNet.Dict`1_Node::_key
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ____key_0;
	// LibTessDotNet.Dict`1_Node<TValue> LibTessDotNet.Dict`1_Node::_prev
	Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * ____prev_1;
	// LibTessDotNet.Dict`1_Node<TValue> LibTessDotNet.Dict`1_Node::_next
	Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * ____next_2;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(Node_t66E8738DE17CE247142AD7181AD366AC78B180A7, ____key_0)); }
	inline ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * get__key_0() const { return ____key_0; }
	inline ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__prev_1() { return static_cast<int32_t>(offsetof(Node_t66E8738DE17CE247142AD7181AD366AC78B180A7, ____prev_1)); }
	inline Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * get__prev_1() const { return ____prev_1; }
	inline Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 ** get_address_of__prev_1() { return &____prev_1; }
	inline void set__prev_1(Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * value)
	{
		____prev_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____prev_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(Node_t66E8738DE17CE247142AD7181AD366AC78B180A7, ____next_2)); }
	inline Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * get__next_2() const { return ____next_2; }
	inline Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}
};


// LibTessDotNet.Dict`1_Node<System.Object>
struct  Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735  : public RuntimeObject
{
public:
	// TValue LibTessDotNet.Dict`1_Node::_key
	RuntimeObject * ____key_0;
	// LibTessDotNet.Dict`1_Node<TValue> LibTessDotNet.Dict`1_Node::_prev
	Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * ____prev_1;
	// LibTessDotNet.Dict`1_Node<TValue> LibTessDotNet.Dict`1_Node::_next
	Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * ____next_2;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__prev_1() { return static_cast<int32_t>(offsetof(Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735, ____prev_1)); }
	inline Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * get__prev_1() const { return ____prev_1; }
	inline Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 ** get_address_of__prev_1() { return &____prev_1; }
	inline void set__prev_1(Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * value)
	{
		____prev_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____prev_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735, ____next_2)); }
	inline Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * get__next_2() const { return ____next_2; }
	inline Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}
};


// LibTessDotNet.Dict`1<LibTessDotNet.Tess_ActiveRegion>
struct  Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93  : public RuntimeObject
{
public:
	// LibTessDotNet.Dict`1_LessOrEqual<TValue> LibTessDotNet.Dict`1::_leq
	LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE * ____leq_0;
	// LibTessDotNet.Dict`1_Node<TValue> LibTessDotNet.Dict`1::_head
	Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * ____head_1;

public:
	inline static int32_t get_offset_of__leq_0() { return static_cast<int32_t>(offsetof(Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93, ____leq_0)); }
	inline LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE * get__leq_0() const { return ____leq_0; }
	inline LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE ** get_address_of__leq_0() { return &____leq_0; }
	inline void set__leq_0(LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE * value)
	{
		____leq_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____leq_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93, ____head_1)); }
	inline Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * get__head_1() const { return ____head_1; }
	inline Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 ** get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * value)
	{
		____head_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____head_1), (void*)value);
	}
};


// LibTessDotNet.Geom
struct  Geom_tFA78824E81631924BC2D9A84ED4013D4A3B052DC  : public RuntimeObject
{
public:

public:
};


// LibTessDotNet.IPool
struct  IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B  : public RuntimeObject
{
public:

public:
};


// LibTessDotNet.Mesh
struct  Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8  : public RuntimeObject
{
public:
	// LibTessDotNet.MeshUtils_Vertex LibTessDotNet.Mesh::_vHead
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ____vHead_0;
	// LibTessDotNet.MeshUtils_Face LibTessDotNet.Mesh::_fHead
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ____fHead_1;
	// LibTessDotNet.MeshUtils_Edge LibTessDotNet.Mesh::_eHead
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____eHead_2;
	// LibTessDotNet.MeshUtils_Edge LibTessDotNet.Mesh::_eHeadSym
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____eHeadSym_3;

public:
	inline static int32_t get_offset_of__vHead_0() { return static_cast<int32_t>(offsetof(Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8, ____vHead_0)); }
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * get__vHead_0() const { return ____vHead_0; }
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** get_address_of__vHead_0() { return &____vHead_0; }
	inline void set__vHead_0(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * value)
	{
		____vHead_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vHead_0), (void*)value);
	}

	inline static int32_t get_offset_of__fHead_1() { return static_cast<int32_t>(offsetof(Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8, ____fHead_1)); }
	inline Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * get__fHead_1() const { return ____fHead_1; }
	inline Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 ** get_address_of__fHead_1() { return &____fHead_1; }
	inline void set__fHead_1(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * value)
	{
		____fHead_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fHead_1), (void*)value);
	}

	inline static int32_t get_offset_of__eHead_2() { return static_cast<int32_t>(offsetof(Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8, ____eHead_2)); }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * get__eHead_2() const { return ____eHead_2; }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** get_address_of__eHead_2() { return &____eHead_2; }
	inline void set__eHead_2(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * value)
	{
		____eHead_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eHead_2), (void*)value);
	}

	inline static int32_t get_offset_of__eHeadSym_3() { return static_cast<int32_t>(offsetof(Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8, ____eHeadSym_3)); }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * get__eHeadSym_3() const { return ____eHeadSym_3; }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** get_address_of__eHeadSym_3() { return &____eHeadSym_3; }
	inline void set__eHeadSym_3(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * value)
	{
		____eHeadSym_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eHeadSym_3), (void*)value);
	}
};


// LibTessDotNet.MeshUtils
struct  MeshUtils_tBB3263060301432DD91491C78B968C506FEE5A5B  : public RuntimeObject
{
public:

public:
};


// LibTessDotNet.MeshUtils_Face
struct  Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276  : public RuntimeObject
{
public:
	// LibTessDotNet.MeshUtils_Face LibTessDotNet.MeshUtils_Face::_prev
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ____prev_0;
	// LibTessDotNet.MeshUtils_Face LibTessDotNet.MeshUtils_Face::_next
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ____next_1;
	// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils_Face::_anEdge
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____anEdge_2;
	// LibTessDotNet.MeshUtils_Face LibTessDotNet.MeshUtils_Face::_trail
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ____trail_3;
	// System.Int32 LibTessDotNet.MeshUtils_Face::_n
	int32_t ____n_4;
	// System.Boolean LibTessDotNet.MeshUtils_Face::_marked
	bool ____marked_5;
	// System.Boolean LibTessDotNet.MeshUtils_Face::_inside
	bool ____inside_6;

public:
	inline static int32_t get_offset_of__prev_0() { return static_cast<int32_t>(offsetof(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276, ____prev_0)); }
	inline Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * get__prev_0() const { return ____prev_0; }
	inline Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 ** get_address_of__prev_0() { return &____prev_0; }
	inline void set__prev_0(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * value)
	{
		____prev_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____prev_0), (void*)value);
	}

	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276, ____next_1)); }
	inline Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * get__next_1() const { return ____next_1; }
	inline Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 ** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_1), (void*)value);
	}

	inline static int32_t get_offset_of__anEdge_2() { return static_cast<int32_t>(offsetof(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276, ____anEdge_2)); }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * get__anEdge_2() const { return ____anEdge_2; }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** get_address_of__anEdge_2() { return &____anEdge_2; }
	inline void set__anEdge_2(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * value)
	{
		____anEdge_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anEdge_2), (void*)value);
	}

	inline static int32_t get_offset_of__trail_3() { return static_cast<int32_t>(offsetof(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276, ____trail_3)); }
	inline Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * get__trail_3() const { return ____trail_3; }
	inline Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 ** get_address_of__trail_3() { return &____trail_3; }
	inline void set__trail_3(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * value)
	{
		____trail_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____trail_3), (void*)value);
	}

	inline static int32_t get_offset_of__n_4() { return static_cast<int32_t>(offsetof(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276, ____n_4)); }
	inline int32_t get__n_4() const { return ____n_4; }
	inline int32_t* get_address_of__n_4() { return &____n_4; }
	inline void set__n_4(int32_t value)
	{
		____n_4 = value;
	}

	inline static int32_t get_offset_of__marked_5() { return static_cast<int32_t>(offsetof(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276, ____marked_5)); }
	inline bool get__marked_5() const { return ____marked_5; }
	inline bool* get_address_of__marked_5() { return &____marked_5; }
	inline void set__marked_5(bool value)
	{
		____marked_5 = value;
	}

	inline static int32_t get_offset_of__inside_6() { return static_cast<int32_t>(offsetof(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276, ____inside_6)); }
	inline bool get__inside_6() const { return ____inside_6; }
	inline bool* get_address_of__inside_6() { return &____inside_6; }
	inline void set__inside_6(bool value)
	{
		____inside_6 = value;
	}
};


// LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils_Vertex>
struct  PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D  : public RuntimeObject
{
public:
	// LibTessDotNet.PriorityHeap`1_LessOrEqual<TValue> LibTessDotNet.PriorityQueue`1::_leq
	LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33 * ____leq_0;
	// LibTessDotNet.PriorityHeap`1<TValue> LibTessDotNet.PriorityQueue`1::_heap
	PriorityHeap_1_t775EBDB65A0831C477E006AD252E4F6F93EDED1C * ____heap_1;
	// TValue[] LibTessDotNet.PriorityQueue`1::_keys
	VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* ____keys_2;
	// System.Int32[] LibTessDotNet.PriorityQueue`1::_order
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____order_3;
	// System.Int32 LibTessDotNet.PriorityQueue`1::_size
	int32_t ____size_4;
	// System.Int32 LibTessDotNet.PriorityQueue`1::_max
	int32_t ____max_5;
	// System.Boolean LibTessDotNet.PriorityQueue`1::_initialized
	bool ____initialized_6;

public:
	inline static int32_t get_offset_of__leq_0() { return static_cast<int32_t>(offsetof(PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D, ____leq_0)); }
	inline LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33 * get__leq_0() const { return ____leq_0; }
	inline LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33 ** get_address_of__leq_0() { return &____leq_0; }
	inline void set__leq_0(LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33 * value)
	{
		____leq_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____leq_0), (void*)value);
	}

	inline static int32_t get_offset_of__heap_1() { return static_cast<int32_t>(offsetof(PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D, ____heap_1)); }
	inline PriorityHeap_1_t775EBDB65A0831C477E006AD252E4F6F93EDED1C * get__heap_1() const { return ____heap_1; }
	inline PriorityHeap_1_t775EBDB65A0831C477E006AD252E4F6F93EDED1C ** get_address_of__heap_1() { return &____heap_1; }
	inline void set__heap_1(PriorityHeap_1_t775EBDB65A0831C477E006AD252E4F6F93EDED1C * value)
	{
		____heap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____heap_1), (void*)value);
	}

	inline static int32_t get_offset_of__keys_2() { return static_cast<int32_t>(offsetof(PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D, ____keys_2)); }
	inline VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* get__keys_2() const { return ____keys_2; }
	inline VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2** get_address_of__keys_2() { return &____keys_2; }
	inline void set__keys_2(VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* value)
	{
		____keys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_2), (void*)value);
	}

	inline static int32_t get_offset_of__order_3() { return static_cast<int32_t>(offsetof(PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D, ____order_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__order_3() const { return ____order_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__order_3() { return &____order_3; }
	inline void set__order_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____order_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____order_3), (void*)value);
	}

	inline static int32_t get_offset_of__size_4() { return static_cast<int32_t>(offsetof(PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D, ____size_4)); }
	inline int32_t get__size_4() const { return ____size_4; }
	inline int32_t* get_address_of__size_4() { return &____size_4; }
	inline void set__size_4(int32_t value)
	{
		____size_4 = value;
	}

	inline static int32_t get_offset_of__max_5() { return static_cast<int32_t>(offsetof(PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D, ____max_5)); }
	inline int32_t get__max_5() const { return ____max_5; }
	inline int32_t* get_address_of__max_5() { return &____max_5; }
	inline void set__max_5(int32_t value)
	{
		____max_5 = value;
	}

	inline static int32_t get_offset_of__initialized_6() { return static_cast<int32_t>(offsetof(PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D, ____initialized_6)); }
	inline bool get__initialized_6() const { return ____initialized_6; }
	inline bool* get_address_of__initialized_6() { return &____initialized_6; }
	inline void set__initialized_6(bool value)
	{
		____initialized_6 = value;
	}
};


// LibTessDotNet.Tess_ActiveRegion
struct  ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0  : public RuntimeObject
{
public:
	// LibTessDotNet.MeshUtils_Edge LibTessDotNet.Tess_ActiveRegion::_eUp
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____eUp_0;
	// LibTessDotNet.Dict`1_Node<LibTessDotNet.Tess_ActiveRegion> LibTessDotNet.Tess_ActiveRegion::_nodeUp
	Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * ____nodeUp_1;
	// System.Int32 LibTessDotNet.Tess_ActiveRegion::_windingNumber
	int32_t ____windingNumber_2;
	// System.Boolean LibTessDotNet.Tess_ActiveRegion::_inside
	bool ____inside_3;
	// System.Boolean LibTessDotNet.Tess_ActiveRegion::_sentinel
	bool ____sentinel_4;
	// System.Boolean LibTessDotNet.Tess_ActiveRegion::_dirty
	bool ____dirty_5;
	// System.Boolean LibTessDotNet.Tess_ActiveRegion::_fixUpperEdge
	bool ____fixUpperEdge_6;

public:
	inline static int32_t get_offset_of__eUp_0() { return static_cast<int32_t>(offsetof(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0, ____eUp_0)); }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * get__eUp_0() const { return ____eUp_0; }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** get_address_of__eUp_0() { return &____eUp_0; }
	inline void set__eUp_0(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * value)
	{
		____eUp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eUp_0), (void*)value);
	}

	inline static int32_t get_offset_of__nodeUp_1() { return static_cast<int32_t>(offsetof(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0, ____nodeUp_1)); }
	inline Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * get__nodeUp_1() const { return ____nodeUp_1; }
	inline Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 ** get_address_of__nodeUp_1() { return &____nodeUp_1; }
	inline void set__nodeUp_1(Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * value)
	{
		____nodeUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nodeUp_1), (void*)value);
	}

	inline static int32_t get_offset_of__windingNumber_2() { return static_cast<int32_t>(offsetof(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0, ____windingNumber_2)); }
	inline int32_t get__windingNumber_2() const { return ____windingNumber_2; }
	inline int32_t* get_address_of__windingNumber_2() { return &____windingNumber_2; }
	inline void set__windingNumber_2(int32_t value)
	{
		____windingNumber_2 = value;
	}

	inline static int32_t get_offset_of__inside_3() { return static_cast<int32_t>(offsetof(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0, ____inside_3)); }
	inline bool get__inside_3() const { return ____inside_3; }
	inline bool* get_address_of__inside_3() { return &____inside_3; }
	inline void set__inside_3(bool value)
	{
		____inside_3 = value;
	}

	inline static int32_t get_offset_of__sentinel_4() { return static_cast<int32_t>(offsetof(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0, ____sentinel_4)); }
	inline bool get__sentinel_4() const { return ____sentinel_4; }
	inline bool* get_address_of__sentinel_4() { return &____sentinel_4; }
	inline void set__sentinel_4(bool value)
	{
		____sentinel_4 = value;
	}

	inline static int32_t get_offset_of__dirty_5() { return static_cast<int32_t>(offsetof(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0, ____dirty_5)); }
	inline bool get__dirty_5() const { return ____dirty_5; }
	inline bool* get_address_of__dirty_5() { return &____dirty_5; }
	inline void set__dirty_5(bool value)
	{
		____dirty_5 = value;
	}

	inline static int32_t get_offset_of__fixUpperEdge_6() { return static_cast<int32_t>(offsetof(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0, ____fixUpperEdge_6)); }
	inline bool get__fixUpperEdge_6() const { return ____fixUpperEdge_6; }
	inline bool* get_address_of__fixUpperEdge_6() { return &____fixUpperEdge_6; }
	inline void set__fixUpperEdge_6(bool value)
	{
		____fixUpperEdge_6 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// LibTessDotNet.DefaultPool
struct  DefaultPool_tE2042812BB14686168ABCFAA2114BCC379CE055C  : public IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B
{
public:
	// System.Collections.Generic.IDictionary`2<System.Type,LibTessDotNet.ITypePool> LibTessDotNet.DefaultPool::_register
	RuntimeObject* ____register_0;

public:
	inline static int32_t get_offset_of__register_0() { return static_cast<int32_t>(offsetof(DefaultPool_tE2042812BB14686168ABCFAA2114BCC379CE055C, ____register_0)); }
	inline RuntimeObject* get__register_0() const { return ____register_0; }
	inline RuntimeObject** get_address_of__register_0() { return &____register_0; }
	inline void set__register_0(RuntimeObject* value)
	{
		____register_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____register_0), (void*)value);
	}
};


// LibTessDotNet.MeshUtils_EdgePair
struct  EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98 
{
public:
	// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils_EdgePair::_e
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____e_0;
	// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils_EdgePair::_eSym
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____eSym_1;

public:
	inline static int32_t get_offset_of__e_0() { return static_cast<int32_t>(offsetof(EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98, ____e_0)); }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * get__e_0() const { return ____e_0; }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** get_address_of__e_0() { return &____e_0; }
	inline void set__e_0(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * value)
	{
		____e_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____e_0), (void*)value);
	}

	inline static int32_t get_offset_of__eSym_1() { return static_cast<int32_t>(offsetof(EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98, ____eSym_1)); }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * get__eSym_1() const { return ____eSym_1; }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** get_address_of__eSym_1() { return &____eSym_1; }
	inline void set__eSym_1(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * value)
	{
		____eSym_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____eSym_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshaled_pinvoke
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____e_0;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____eSym_1;
};
// Native definition for COM marshalling of LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshaled_com
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____e_0;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____eSym_1;
};

// LibTessDotNet.NullPool
struct  NullPool_t3362A4521B554267969F55F0974D28D2089531B4  : public IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B
{
public:

public:
};


// LibTessDotNet.PQHandle
struct  PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF 
{
public:
	// System.Int32 LibTessDotNet.PQHandle::_handle
	int32_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF, ____handle_1)); }
	inline int32_t get__handle_1() const { return ____handle_1; }
	inline int32_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(int32_t value)
	{
		____handle_1 = value;
	}
};

struct PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF_StaticFields
{
public:
	// System.Int32 LibTessDotNet.PQHandle::Invalid
	int32_t ___Invalid_0;

public:
	inline static int32_t get_offset_of_Invalid_0() { return static_cast<int32_t>(offsetof(PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF_StaticFields, ___Invalid_0)); }
	inline int32_t get_Invalid_0() const { return ___Invalid_0; }
	inline int32_t* get_address_of_Invalid_0() { return &___Invalid_0; }
	inline void set_Invalid_0(int32_t value)
	{
		___Invalid_0 = value;
	}
};


// LibTessDotNet.Vec3
struct  Vec3_t956A293556A430A69339B775D377A79CAE910D67 
{
public:
	// System.Single LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single LibTessDotNet.Vec3::Z
	float ___Z_3;

public:
	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(Vec3_t956A293556A430A69339B775D377A79CAE910D67, ___X_1)); }
	inline float get_X_1() const { return ___X_1; }
	inline float* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(float value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(Vec3_t956A293556A430A69339B775D377A79CAE910D67, ___Y_2)); }
	inline float get_Y_2() const { return ___Y_2; }
	inline float* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(float value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Z_3() { return static_cast<int32_t>(offsetof(Vec3_t956A293556A430A69339B775D377A79CAE910D67, ___Z_3)); }
	inline float get_Z_3() const { return ___Z_3; }
	inline float* get_address_of_Z_3() { return &___Z_3; }
	inline void set_Z_3(float value)
	{
		___Z_3 = value;
	}
};

struct Vec3_t956A293556A430A69339B775D377A79CAE910D67_StaticFields
{
public:
	// LibTessDotNet.Vec3 LibTessDotNet.Vec3::Zero
	Vec3_t956A293556A430A69339B775D377A79CAE910D67  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vec3_t956A293556A430A69339B775D377A79CAE910D67_StaticFields, ___Zero_0)); }
	inline Vec3_t956A293556A430A69339B775D377A79CAE910D67  get_Zero_0() const { return ___Zero_0; }
	inline Vec3_t956A293556A430A69339B775D377A79CAE910D67 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Vec3_t956A293556A430A69339B775D377A79CAE910D67  value)
	{
		___Zero_0 = value;
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


// LibTessDotNet.ContourOrientation
struct  ContourOrientation_tF32480CB65F9F43A19B494BEBE17B5B1C650DA35 
{
public:
	// System.Int32 LibTessDotNet.ContourOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContourOrientation_tF32480CB65F9F43A19B494BEBE17B5B1C650DA35, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LibTessDotNet.ContourVertex
struct  ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 
{
public:
	// LibTessDotNet.Vec3 LibTessDotNet.ContourVertex::Position
	Vec3_t956A293556A430A69339B775D377A79CAE910D67  ___Position_0;
	// System.Int32 LibTessDotNet.ContourVertex::Data
	int32_t ___Data_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55, ___Position_0)); }
	inline Vec3_t956A293556A430A69339B775D377A79CAE910D67  get_Position_0() const { return ___Position_0; }
	inline Vec3_t956A293556A430A69339B775D377A79CAE910D67 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vec3_t956A293556A430A69339B775D377A79CAE910D67  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55, ___Data_1)); }
	inline int32_t get_Data_1() const { return ___Data_1; }
	inline int32_t* get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(int32_t value)
	{
		___Data_1 = value;
	}
};


// LibTessDotNet.ElementType
struct  ElementType_t49004234B824B9DBAF9D120985A6F5777F1E05F9 
{
public:
	// System.Int32 LibTessDotNet.ElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ElementType_t49004234B824B9DBAF9D120985A6F5777F1E05F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LibTessDotNet.MeshUtils_Edge
struct  Edge_t9D4BFE9716279C9D930CB20420750F7746432102  : public RuntimeObject
{
public:
	// LibTessDotNet.MeshUtils_EdgePair LibTessDotNet.MeshUtils_Edge::_pair
	EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  ____pair_0;
	// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils_Edge::_next
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____next_1;
	// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils_Edge::_Sym
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____Sym_2;
	// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils_Edge::_Onext
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____Onext_3;
	// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils_Edge::_Lnext
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____Lnext_4;
	// LibTessDotNet.MeshUtils_Vertex LibTessDotNet.MeshUtils_Edge::_Org
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ____Org_5;
	// LibTessDotNet.MeshUtils_Face LibTessDotNet.MeshUtils_Edge::_Lface
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ____Lface_6;
	// LibTessDotNet.Tess_ActiveRegion LibTessDotNet.MeshUtils_Edge::_activeRegion
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ____activeRegion_7;
	// System.Int32 LibTessDotNet.MeshUtils_Edge::_winding
	int32_t ____winding_8;

public:
	inline static int32_t get_offset_of__pair_0() { return static_cast<int32_t>(offsetof(Edge_t9D4BFE9716279C9D930CB20420750F7746432102, ____pair_0)); }
	inline EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  get__pair_0() const { return ____pair_0; }
	inline EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98 * get_address_of__pair_0() { return &____pair_0; }
	inline void set__pair_0(EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  value)
	{
		____pair_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____pair_0))->____e_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____pair_0))->____eSym_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(Edge_t9D4BFE9716279C9D930CB20420750F7746432102, ____next_1)); }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * get__next_1() const { return ____next_1; }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_1), (void*)value);
	}

	inline static int32_t get_offset_of__Sym_2() { return static_cast<int32_t>(offsetof(Edge_t9D4BFE9716279C9D930CB20420750F7746432102, ____Sym_2)); }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * get__Sym_2() const { return ____Sym_2; }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** get_address_of__Sym_2() { return &____Sym_2; }
	inline void set__Sym_2(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * value)
	{
		____Sym_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Sym_2), (void*)value);
	}

	inline static int32_t get_offset_of__Onext_3() { return static_cast<int32_t>(offsetof(Edge_t9D4BFE9716279C9D930CB20420750F7746432102, ____Onext_3)); }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * get__Onext_3() const { return ____Onext_3; }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** get_address_of__Onext_3() { return &____Onext_3; }
	inline void set__Onext_3(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * value)
	{
		____Onext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Onext_3), (void*)value);
	}

	inline static int32_t get_offset_of__Lnext_4() { return static_cast<int32_t>(offsetof(Edge_t9D4BFE9716279C9D930CB20420750F7746432102, ____Lnext_4)); }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * get__Lnext_4() const { return ____Lnext_4; }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** get_address_of__Lnext_4() { return &____Lnext_4; }
	inline void set__Lnext_4(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * value)
	{
		____Lnext_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Lnext_4), (void*)value);
	}

	inline static int32_t get_offset_of__Org_5() { return static_cast<int32_t>(offsetof(Edge_t9D4BFE9716279C9D930CB20420750F7746432102, ____Org_5)); }
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * get__Org_5() const { return ____Org_5; }
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** get_address_of__Org_5() { return &____Org_5; }
	inline void set__Org_5(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * value)
	{
		____Org_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Org_5), (void*)value);
	}

	inline static int32_t get_offset_of__Lface_6() { return static_cast<int32_t>(offsetof(Edge_t9D4BFE9716279C9D930CB20420750F7746432102, ____Lface_6)); }
	inline Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * get__Lface_6() const { return ____Lface_6; }
	inline Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 ** get_address_of__Lface_6() { return &____Lface_6; }
	inline void set__Lface_6(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * value)
	{
		____Lface_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Lface_6), (void*)value);
	}

	inline static int32_t get_offset_of__activeRegion_7() { return static_cast<int32_t>(offsetof(Edge_t9D4BFE9716279C9D930CB20420750F7746432102, ____activeRegion_7)); }
	inline ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * get__activeRegion_7() const { return ____activeRegion_7; }
	inline ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 ** get_address_of__activeRegion_7() { return &____activeRegion_7; }
	inline void set__activeRegion_7(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * value)
	{
		____activeRegion_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeRegion_7), (void*)value);
	}

	inline static int32_t get_offset_of__winding_8() { return static_cast<int32_t>(offsetof(Edge_t9D4BFE9716279C9D930CB20420750F7746432102, ____winding_8)); }
	inline int32_t get__winding_8() const { return ____winding_8; }
	inline int32_t* get_address_of__winding_8() { return &____winding_8; }
	inline void set__winding_8(int32_t value)
	{
		____winding_8 = value;
	}
};


// LibTessDotNet.MeshUtils_Vertex
struct  Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74  : public RuntimeObject
{
public:
	// LibTessDotNet.MeshUtils_Vertex LibTessDotNet.MeshUtils_Vertex::_prev
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ____prev_0;
	// LibTessDotNet.MeshUtils_Vertex LibTessDotNet.MeshUtils_Vertex::_next
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ____next_1;
	// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils_Vertex::_anEdge
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ____anEdge_2;
	// LibTessDotNet.Vec3 LibTessDotNet.MeshUtils_Vertex::_coords
	Vec3_t956A293556A430A69339B775D377A79CAE910D67  ____coords_3;
	// System.Single LibTessDotNet.MeshUtils_Vertex::_s
	float ____s_4;
	// System.Single LibTessDotNet.MeshUtils_Vertex::_t
	float ____t_5;
	// LibTessDotNet.PQHandle LibTessDotNet.MeshUtils_Vertex::_pqHandle
	PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF  ____pqHandle_6;
	// System.Int32 LibTessDotNet.MeshUtils_Vertex::_n
	int32_t ____n_7;
	// System.Int32 LibTessDotNet.MeshUtils_Vertex::_data
	int32_t ____data_8;

public:
	inline static int32_t get_offset_of__prev_0() { return static_cast<int32_t>(offsetof(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74, ____prev_0)); }
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * get__prev_0() const { return ____prev_0; }
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** get_address_of__prev_0() { return &____prev_0; }
	inline void set__prev_0(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * value)
	{
		____prev_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____prev_0), (void*)value);
	}

	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74, ____next_1)); }
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * get__next_1() const { return ____next_1; }
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_1), (void*)value);
	}

	inline static int32_t get_offset_of__anEdge_2() { return static_cast<int32_t>(offsetof(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74, ____anEdge_2)); }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * get__anEdge_2() const { return ____anEdge_2; }
	inline Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** get_address_of__anEdge_2() { return &____anEdge_2; }
	inline void set__anEdge_2(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * value)
	{
		____anEdge_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anEdge_2), (void*)value);
	}

	inline static int32_t get_offset_of__coords_3() { return static_cast<int32_t>(offsetof(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74, ____coords_3)); }
	inline Vec3_t956A293556A430A69339B775D377A79CAE910D67  get__coords_3() const { return ____coords_3; }
	inline Vec3_t956A293556A430A69339B775D377A79CAE910D67 * get_address_of__coords_3() { return &____coords_3; }
	inline void set__coords_3(Vec3_t956A293556A430A69339B775D377A79CAE910D67  value)
	{
		____coords_3 = value;
	}

	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74, ____s_4)); }
	inline float get__s_4() const { return ____s_4; }
	inline float* get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(float value)
	{
		____s_4 = value;
	}

	inline static int32_t get_offset_of__t_5() { return static_cast<int32_t>(offsetof(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74, ____t_5)); }
	inline float get__t_5() const { return ____t_5; }
	inline float* get_address_of__t_5() { return &____t_5; }
	inline void set__t_5(float value)
	{
		____t_5 = value;
	}

	inline static int32_t get_offset_of__pqHandle_6() { return static_cast<int32_t>(offsetof(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74, ____pqHandle_6)); }
	inline PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF  get__pqHandle_6() const { return ____pqHandle_6; }
	inline PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF * get_address_of__pqHandle_6() { return &____pqHandle_6; }
	inline void set__pqHandle_6(PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF  value)
	{
		____pqHandle_6 = value;
	}

	inline static int32_t get_offset_of__n_7() { return static_cast<int32_t>(offsetof(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74, ____n_7)); }
	inline int32_t get__n_7() const { return ____n_7; }
	inline int32_t* get_address_of__n_7() { return &____n_7; }
	inline void set__n_7(int32_t value)
	{
		____n_7 = value;
	}

	inline static int32_t get_offset_of__data_8() { return static_cast<int32_t>(offsetof(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74, ____data_8)); }
	inline int32_t get__data_8() const { return ____data_8; }
	inline int32_t* get_address_of__data_8() { return &____data_8; }
	inline void set__data_8(int32_t value)
	{
		____data_8 = value;
	}
};


// LibTessDotNet.WindingRule
struct  WindingRule_tBE3F00AE73226C428FB0E49F4D81E4DA55774C83 
{
public:
	// System.Int32 LibTessDotNet.WindingRule::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindingRule_tBE3F00AE73226C428FB0E49F4D81E4DA55774C83, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// LibTessDotNet.Tess
struct  Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95  : public RuntimeObject
{
public:
	// LibTessDotNet.IPool LibTessDotNet.Tess::_pool
	IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ____pool_0;
	// LibTessDotNet.Mesh LibTessDotNet.Tess::_mesh
	Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * ____mesh_1;
	// LibTessDotNet.Vec3 LibTessDotNet.Tess::_normal
	Vec3_t956A293556A430A69339B775D377A79CAE910D67  ____normal_2;
	// LibTessDotNet.Vec3 LibTessDotNet.Tess::_sUnit
	Vec3_t956A293556A430A69339B775D377A79CAE910D67  ____sUnit_3;
	// LibTessDotNet.Vec3 LibTessDotNet.Tess::_tUnit
	Vec3_t956A293556A430A69339B775D377A79CAE910D67  ____tUnit_4;
	// System.Single LibTessDotNet.Tess::_bminX
	float ____bminX_5;
	// System.Single LibTessDotNet.Tess::_bminY
	float ____bminY_6;
	// System.Single LibTessDotNet.Tess::_bmaxX
	float ____bmaxX_7;
	// System.Single LibTessDotNet.Tess::_bmaxY
	float ____bmaxY_8;
	// LibTessDotNet.WindingRule LibTessDotNet.Tess::_windingRule
	int32_t ____windingRule_9;
	// LibTessDotNet.Dict`1<LibTessDotNet.Tess_ActiveRegion> LibTessDotNet.Tess::_dict
	Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * ____dict_10;
	// LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils_Vertex> LibTessDotNet.Tess::_pq
	PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * ____pq_11;
	// LibTessDotNet.MeshUtils_Vertex LibTessDotNet.Tess::_event
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ____event_12;
	// LibTessDotNet.CombineCallback LibTessDotNet.Tess::_combineCallback
	CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * ____combineCallback_13;
	// LibTessDotNet.ContourVertex[] LibTessDotNet.Tess::_vertices
	ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* ____vertices_14;
	// System.Int32 LibTessDotNet.Tess::_vertexCount
	int32_t ____vertexCount_15;
	// System.Int32[] LibTessDotNet.Tess::_elements
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____elements_16;
	// System.Int32 LibTessDotNet.Tess::_elementCount
	int32_t ____elementCount_17;
	// System.Single LibTessDotNet.Tess::SUnitX
	float ___SUnitX_18;
	// System.Single LibTessDotNet.Tess::SUnitY
	float ___SUnitY_19;
	// System.Single LibTessDotNet.Tess::SentinelCoord
	float ___SentinelCoord_20;
	// System.Boolean LibTessDotNet.Tess::NoEmptyPolygons
	bool ___NoEmptyPolygons_21;
	// System.Boolean LibTessDotNet.Tess::UsePooling
	bool ___UsePooling_22;

public:
	inline static int32_t get_offset_of__pool_0() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____pool_0)); }
	inline IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * get__pool_0() const { return ____pool_0; }
	inline IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B ** get_address_of__pool_0() { return &____pool_0; }
	inline void set__pool_0(IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * value)
	{
		____pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pool_0), (void*)value);
	}

	inline static int32_t get_offset_of__mesh_1() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____mesh_1)); }
	inline Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * get__mesh_1() const { return ____mesh_1; }
	inline Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 ** get_address_of__mesh_1() { return &____mesh_1; }
	inline void set__mesh_1(Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * value)
	{
		____mesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mesh_1), (void*)value);
	}

	inline static int32_t get_offset_of__normal_2() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____normal_2)); }
	inline Vec3_t956A293556A430A69339B775D377A79CAE910D67  get__normal_2() const { return ____normal_2; }
	inline Vec3_t956A293556A430A69339B775D377A79CAE910D67 * get_address_of__normal_2() { return &____normal_2; }
	inline void set__normal_2(Vec3_t956A293556A430A69339B775D377A79CAE910D67  value)
	{
		____normal_2 = value;
	}

	inline static int32_t get_offset_of__sUnit_3() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____sUnit_3)); }
	inline Vec3_t956A293556A430A69339B775D377A79CAE910D67  get__sUnit_3() const { return ____sUnit_3; }
	inline Vec3_t956A293556A430A69339B775D377A79CAE910D67 * get_address_of__sUnit_3() { return &____sUnit_3; }
	inline void set__sUnit_3(Vec3_t956A293556A430A69339B775D377A79CAE910D67  value)
	{
		____sUnit_3 = value;
	}

	inline static int32_t get_offset_of__tUnit_4() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____tUnit_4)); }
	inline Vec3_t956A293556A430A69339B775D377A79CAE910D67  get__tUnit_4() const { return ____tUnit_4; }
	inline Vec3_t956A293556A430A69339B775D377A79CAE910D67 * get_address_of__tUnit_4() { return &____tUnit_4; }
	inline void set__tUnit_4(Vec3_t956A293556A430A69339B775D377A79CAE910D67  value)
	{
		____tUnit_4 = value;
	}

	inline static int32_t get_offset_of__bminX_5() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____bminX_5)); }
	inline float get__bminX_5() const { return ____bminX_5; }
	inline float* get_address_of__bminX_5() { return &____bminX_5; }
	inline void set__bminX_5(float value)
	{
		____bminX_5 = value;
	}

	inline static int32_t get_offset_of__bminY_6() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____bminY_6)); }
	inline float get__bminY_6() const { return ____bminY_6; }
	inline float* get_address_of__bminY_6() { return &____bminY_6; }
	inline void set__bminY_6(float value)
	{
		____bminY_6 = value;
	}

	inline static int32_t get_offset_of__bmaxX_7() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____bmaxX_7)); }
	inline float get__bmaxX_7() const { return ____bmaxX_7; }
	inline float* get_address_of__bmaxX_7() { return &____bmaxX_7; }
	inline void set__bmaxX_7(float value)
	{
		____bmaxX_7 = value;
	}

	inline static int32_t get_offset_of__bmaxY_8() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____bmaxY_8)); }
	inline float get__bmaxY_8() const { return ____bmaxY_8; }
	inline float* get_address_of__bmaxY_8() { return &____bmaxY_8; }
	inline void set__bmaxY_8(float value)
	{
		____bmaxY_8 = value;
	}

	inline static int32_t get_offset_of__windingRule_9() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____windingRule_9)); }
	inline int32_t get__windingRule_9() const { return ____windingRule_9; }
	inline int32_t* get_address_of__windingRule_9() { return &____windingRule_9; }
	inline void set__windingRule_9(int32_t value)
	{
		____windingRule_9 = value;
	}

	inline static int32_t get_offset_of__dict_10() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____dict_10)); }
	inline Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * get__dict_10() const { return ____dict_10; }
	inline Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 ** get_address_of__dict_10() { return &____dict_10; }
	inline void set__dict_10(Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * value)
	{
		____dict_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dict_10), (void*)value);
	}

	inline static int32_t get_offset_of__pq_11() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____pq_11)); }
	inline PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * get__pq_11() const { return ____pq_11; }
	inline PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D ** get_address_of__pq_11() { return &____pq_11; }
	inline void set__pq_11(PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * value)
	{
		____pq_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pq_11), (void*)value);
	}

	inline static int32_t get_offset_of__event_12() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____event_12)); }
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * get__event_12() const { return ____event_12; }
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** get_address_of__event_12() { return &____event_12; }
	inline void set__event_12(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * value)
	{
		____event_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____event_12), (void*)value);
	}

	inline static int32_t get_offset_of__combineCallback_13() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____combineCallback_13)); }
	inline CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * get__combineCallback_13() const { return ____combineCallback_13; }
	inline CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF ** get_address_of__combineCallback_13() { return &____combineCallback_13; }
	inline void set__combineCallback_13(CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * value)
	{
		____combineCallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____combineCallback_13), (void*)value);
	}

	inline static int32_t get_offset_of__vertices_14() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____vertices_14)); }
	inline ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* get__vertices_14() const { return ____vertices_14; }
	inline ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912** get_address_of__vertices_14() { return &____vertices_14; }
	inline void set__vertices_14(ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* value)
	{
		____vertices_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vertices_14), (void*)value);
	}

	inline static int32_t get_offset_of__vertexCount_15() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____vertexCount_15)); }
	inline int32_t get__vertexCount_15() const { return ____vertexCount_15; }
	inline int32_t* get_address_of__vertexCount_15() { return &____vertexCount_15; }
	inline void set__vertexCount_15(int32_t value)
	{
		____vertexCount_15 = value;
	}

	inline static int32_t get_offset_of__elements_16() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____elements_16)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__elements_16() const { return ____elements_16; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__elements_16() { return &____elements_16; }
	inline void set__elements_16(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____elements_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elements_16), (void*)value);
	}

	inline static int32_t get_offset_of__elementCount_17() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ____elementCount_17)); }
	inline int32_t get__elementCount_17() const { return ____elementCount_17; }
	inline int32_t* get_address_of__elementCount_17() { return &____elementCount_17; }
	inline void set__elementCount_17(int32_t value)
	{
		____elementCount_17 = value;
	}

	inline static int32_t get_offset_of_SUnitX_18() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ___SUnitX_18)); }
	inline float get_SUnitX_18() const { return ___SUnitX_18; }
	inline float* get_address_of_SUnitX_18() { return &___SUnitX_18; }
	inline void set_SUnitX_18(float value)
	{
		___SUnitX_18 = value;
	}

	inline static int32_t get_offset_of_SUnitY_19() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ___SUnitY_19)); }
	inline float get_SUnitY_19() const { return ___SUnitY_19; }
	inline float* get_address_of_SUnitY_19() { return &___SUnitY_19; }
	inline void set_SUnitY_19(float value)
	{
		___SUnitY_19 = value;
	}

	inline static int32_t get_offset_of_SentinelCoord_20() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ___SentinelCoord_20)); }
	inline float get_SentinelCoord_20() const { return ___SentinelCoord_20; }
	inline float* get_address_of_SentinelCoord_20() { return &___SentinelCoord_20; }
	inline void set_SentinelCoord_20(float value)
	{
		___SentinelCoord_20 = value;
	}

	inline static int32_t get_offset_of_NoEmptyPolygons_21() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ___NoEmptyPolygons_21)); }
	inline bool get_NoEmptyPolygons_21() const { return ___NoEmptyPolygons_21; }
	inline bool* get_address_of_NoEmptyPolygons_21() { return &___NoEmptyPolygons_21; }
	inline void set_NoEmptyPolygons_21(bool value)
	{
		___NoEmptyPolygons_21 = value;
	}

	inline static int32_t get_offset_of_UsePooling_22() { return static_cast<int32_t>(offsetof(Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95, ___UsePooling_22)); }
	inline bool get_UsePooling_22() const { return ___UsePooling_22; }
	inline bool* get_address_of_UsePooling_22() { return &___UsePooling_22; }
	inline void set_UsePooling_22(bool value)
	{
		___UsePooling_22 = value;
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// LibTessDotNet.CombineCallback
struct  CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF  : public MulticastDelegate_t
{
public:

public:
};


// LibTessDotNet.Dict`1_LessOrEqual<LibTessDotNet.Tess_ActiveRegion>
struct  LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE  : public MulticastDelegate_t
{
public:

public:
};


// LibTessDotNet.PriorityHeap`1_LessOrEqual<LibTessDotNet.MeshUtils_Vertex>
struct  LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  m_Items[1];

public:
	inline ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  value)
	{
		m_Items[index] = value;
	}
};
// LibTessDotNet.MeshUtils_Vertex[]
struct VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * m_Items[1];

public:
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void LibTessDotNet.DefaultTypePool`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypePool_1__ctor_mB1B5864C9378228E173A347213870928B957C0E5_gshared (DefaultTypePool_1_t5B0B60559D309E92370504074F181CF200F777AD * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.Dict`1<System.Object>::Remove(LibTessDotNet.Dict`1/Node<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1_Remove_mB7DCC10CD9BB4CD01FC698A771C87D9A3F51574A_gshared (Dict_1_tA089E2D6BBA5623663F6247A0EC64218BE8B4C17 * __this, Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * ___node0, const RuntimeMethod* method);
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<System.Object>::InsertBefore(LibTessDotNet.Dict`1/Node<TValue>,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * Dict_1_InsertBefore_m54D1C1174A8B0D3AFEE467D6A6DF55BB831047BA_gshared (Dict_1_tA089E2D6BBA5623663F6247A0EC64218BE8B4C17 * __this, Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * ___node0, RuntimeObject * ___key1, const RuntimeMethod* method);
// System.Void LibTessDotNet.PriorityQueue`1<System.Object>::Remove(LibTessDotNet.PQHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Remove_mDC8B68DBEBF2E66F3DCA9A57D7A62FF416EEF170_gshared (PriorityQueue_1_t55C55D4C524213CB3782E3C7B429E0E275AA77FC * __this, PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF  ___handle0, const RuntimeMethod* method);
// LibTessDotNet.PQHandle LibTessDotNet.PriorityQueue`1<System.Object>::Insert(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF  PriorityQueue_1_Insert_mAEF984EEF3AE9E62F23F89D094A7F6741641D2D6_gshared (PriorityQueue_1_t55C55D4C524213CB3782E3C7B429E0E275AA77FC * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<System.Object>::Find(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * Dict_1_Find_m4694621076958FD0B5B3FE195E8A3D2158A87559_gshared (Dict_1_tA089E2D6BBA5623663F6247A0EC64218BE8B4C17 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// TValue LibTessDotNet.Dict`1/Node<System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Node_get_Key_m7F60225B624958D1CF77BB12E42467E55268C862_gshared_inline (Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * __this, const RuntimeMethod* method);
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<System.Object>::Insert(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * Dict_1_Insert_m0006E40F3EB4AF070DA094A1C96A05FE02C398D8_gshared (Dict_1_tA089E2D6BBA5623663F6247A0EC64218BE8B4C17 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Dict`1/LessOrEqual<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_m972C0CE55E3E5AB14A663AC92133CAB66AEA7730_gshared (LessOrEqual_tFDBBAD199E6FA7A15045DAC0D5927F584AE8E185 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LibTessDotNet.Dict`1<System.Object>::.ctor(LibTessDotNet.Dict`1/LessOrEqual<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1__ctor_m86126D523AA7D06F534177429EEE0D63B2D9ED44_gshared (Dict_1_tA089E2D6BBA5623663F6247A0EC64218BE8B4C17 * __this, LessOrEqual_tFDBBAD199E6FA7A15045DAC0D5927F584AE8E185 * ___leq0, const RuntimeMethod* method);
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<System.Object>::Min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * Dict_1_Min_mBF62E1457F336B8B1A178416BDA553FBEAA6B211_gshared (Dict_1_tA089E2D6BBA5623663F6247A0EC64218BE8B4C17 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.PriorityHeap`1/LessOrEqual<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_m7CB7EF4746A58741468D151F8C9690E68D1DBB4B_gshared (LessOrEqual_t8B03DB028A7B7C356E4F76478EC55B61306D2E4B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LibTessDotNet.PriorityQueue`1<System.Object>::.ctor(System.Int32,LibTessDotNet.PriorityHeap`1/LessOrEqual<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1__ctor_m70D0F604AD34D5DB3C933656E54F943552C3BAC5_gshared (PriorityQueue_1_t55C55D4C524213CB3782E3C7B429E0E275AA77FC * __this, int32_t ___initialSize0, LessOrEqual_t8B03DB028A7B7C356E4F76478EC55B61306D2E4B * ___leq1, const RuntimeMethod* method);
// System.Void LibTessDotNet.PriorityQueue`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Init_m6358A50B1C15D341131DFAABBF6063573E4104DA_gshared (PriorityQueue_1_t55C55D4C524213CB3782E3C7B429E0E275AA77FC * __this, const RuntimeMethod* method);
// TValue LibTessDotNet.PriorityQueue`1<System.Object>::Minimum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PriorityQueue_1_Minimum_mC4756B761F500985BDC5098385D48A3DA25AA910_gshared (PriorityQueue_1_t55C55D4C524213CB3782E3C7B429E0E275AA77FC * __this, const RuntimeMethod* method);
// TValue LibTessDotNet.PriorityQueue`1<System.Object>::ExtractMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PriorityQueue_1_ExtractMin_m07B8C2A4D174B1CBE6C3BF0496DCD9A0056A5552_gshared (PriorityQueue_1_t55C55D4C524213CB3782E3C7B429E0E275AA77FC * __this, const RuntimeMethod* method);

// System.Void LibTessDotNet.ContourVertex::.ctor(LibTessDotNet.Vec3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mFE848F735C3B92AA16CB2F512008FEA727B326E5 (ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 * __this, Vec3_t956A293556A430A69339B775D377A79CAE910D67  ___position0, int32_t ___data1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String LibTessDotNet.ContourVertex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m9F2A8CA10BA23DC4A4D3DF7E0AC8197C9E663101 (ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.IPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_mAC687A8E0F6EA56B2AF3DCE6EC9AF2ABF116E0E4 (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.MeshUtils/Edge::get__Dst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method);
// System.Boolean LibTessDotNet.Geom::VertLeq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___lhs0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___rhs1, const RuntimeMethod* method);
// System.Void LibTessDotNet.Geom::Swap(LibTessDotNet.MeshUtils/Vertex&,LibTessDotNet.MeshUtils/Vertex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_mDA582422683E12BEFC92E9E78C2C6E118866426B (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** ___a0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** ___b1, const RuntimeMethod* method);
// System.Single LibTessDotNet.Geom::EdgeEval(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mC352383793F5DD57BB91C3B180E75C8F2DA83C60 (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___u0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___w2, const RuntimeMethod* method);
// System.Single LibTessDotNet.Geom::Interpolate(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m854331D2D2D04780F8145508E48A02FEDBCFF560 (float ___a0, float ___x1, float ___b2, float ___y3, const RuntimeMethod* method);
// System.Single LibTessDotNet.Geom::EdgeSign(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___u0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___w2, const RuntimeMethod* method);
// System.Boolean LibTessDotNet.Geom::TransLeq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_m124A95061B8DBC9E4355CCE4507FCC6C744094FE (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___lhs0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___rhs1, const RuntimeMethod* method);
// System.Single LibTessDotNet.Geom::TransEval(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_mFF6B6EBE91195F0D9F67FA691C7F3858B3889B6D (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___u0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___w2, const RuntimeMethod* method);
// System.Single LibTessDotNet.Geom::TransSign(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m3D73A72AB106EA5DC942FC85D65D7EE0F64FAD79 (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___u0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___w2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Vertex>::.ctor()
inline void DefaultTypePool_1__ctor_mE65B2978D5CB19B852B5A92D721D088FCE1D1CBA (DefaultTypePool_1_t6506CD6EBC76D66687FCB06B74F9A722AF610613 * __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t6506CD6EBC76D66687FCB06B74F9A722AF610613 *, const RuntimeMethod*))DefaultTypePool_1__ctor_mB1B5864C9378228E173A347213870928B957C0E5_gshared)(__this, method);
}
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Face>::.ctor()
inline void DefaultTypePool_1__ctor_m9E1E9F79B3F2AA093ECDEB1C01DA2326094D41C5 (DefaultTypePool_1_tD65BF7F6FE500475650CD4104A99C1CC81BB83ED * __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_tD65BF7F6FE500475650CD4104A99C1CC81BB83ED *, const RuntimeMethod*))DefaultTypePool_1__ctor_mB1B5864C9378228E173A347213870928B957C0E5_gshared)(__this, method);
}
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Edge>::.ctor()
inline void DefaultTypePool_1__ctor_m60F5B62C348925079EF65CCECC4FC7A8938C45DB (DefaultTypePool_1_tF55083BEBD7748262297943C37D60F151B6E5DE2 * __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_tF55083BEBD7748262297943C37D60F151B6E5DE2 *, const RuntimeMethod*))DefaultTypePool_1__ctor_mB1B5864C9378228E173A347213870928B957C0E5_gshared)(__this, method);
}
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Tess/ActiveRegion>::.ctor()
inline void DefaultTypePool_1__ctor_mE48B93A6460E56B1E7849D984CCEE85E8D818EF7 (DefaultTypePool_1_t0C08998C39340F844ABA5CDC5265C65DF8A68848 * __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t0C08998C39340F844ABA5CDC5265C65DF8A68848 *, const RuntimeMethod*))DefaultTypePool_1__ctor_mB1B5864C9378228E173A347213870928B957C0E5_gshared)(__this, method);
}
// LibTessDotNet.MeshUtils/EdgePair LibTessDotNet.MeshUtils/EdgePair::Create(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  EdgePair_Create_m00433F031D09C6877542ED045F7219DD47FB4DD8 (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method);
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils::MakeEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * MeshUtils_MakeEdge_mDE697E813CBFEC5A6EFB04AB42AD57F3C8011845 (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eNext1, const RuntimeMethod* method);
// System.Void LibTessDotNet.MeshUtils::MakeVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m5A6351006D5298989664DC3EA05E6F1C1A7E306A (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eOrig1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___vNext2, const RuntimeMethod* method);
// System.Void LibTessDotNet.MeshUtils::MakeFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_mE45C0465345A0B69A2B26FACAF19A0281290A44B (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eOrig1, Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ___fNext2, const RuntimeMethod* method);
// System.Void LibTessDotNet.MeshUtils::KillVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_m3A191FEBF0F2FEE809D780EF45B9894211AFCB54 (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___vDel1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___newOrg2, const RuntimeMethod* method);
// System.Void LibTessDotNet.MeshUtils::KillFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Face,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_mE461E76A0ED7A6E34CDBAB8D55BA4F8C5B867060 (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ___fDel1, Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ___newLFace2, const RuntimeMethod* method);
// System.Void LibTessDotNet.MeshUtils::Splice(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m37CE6888422DC2458C5DEE34AAE80ABEC8C74DA4 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___a0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___b1, const RuntimeMethod* method);
// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Edge::get__Rface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * Edge_get__Rface_m27BE789A7B47E8D04DDDA64B466C956C770C39D1 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method);
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Oprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.MeshUtils::KillEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_m85A8A08CF38CEB4F71A19C422DE8030AFE964CD6 (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eDel1, const RuntimeMethod* method);
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::AddEdgeVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Mesh_AddEdgeVertex_mF711F650D48C663C402421D32AF619D69D65582B (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eOrg1, const RuntimeMethod* method);
// System.Void LibTessDotNet.MeshUtils/Edge::set__Dst(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_mA39354A7258C1E037A54F35F6C4B5310E39E5E24 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___value0, const RuntimeMethod* method);
// System.Void LibTessDotNet.MeshUtils/Edge::set__Rface(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m1B5F208FAD40A4A72F6C6F8CEE1F249DE336D8A5 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ___value0, const RuntimeMethod* method);
// System.Int32 LibTessDotNet.MeshUtils/Face::get_VertsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_m7DE0ED955234E1970177565F2D2562DEDD6D572B (Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * __this, const RuntimeMethod* method);
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Edge_get__Lprev_mAB87D419866AD8C3D304903083077126026F5642 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method);
// System.Boolean LibTessDotNet.Geom::VertCCW(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_m02493F37D3AC4A9973B1A345015151E603661FDC (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___u0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___w2, const RuntimeMethod* method);
// System.Void LibTessDotNet.Mesh::Delete(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569 (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eDel1, const RuntimeMethod* method);
// System.Void LibTessDotNet.MeshUtils/Edge::EnsureFirst(LibTessDotNet.MeshUtils/Edge&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_m2DB71A999B595D57E91343D9CAF8FC2DABE04D86 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** ___e0, const RuntimeMethod* method);
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Rprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Edge_get__Rprev_mA3AA832BCF164B37CEDF698849502C834D5E65BE (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.MeshUtils/EdgePair::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_mAC360A156F30809DF4E0A6286DDBDB3DC6DEE9D2 (EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Remove(LibTessDotNet.Dict`1/Node<TValue>)
inline void Dict_1_Remove_mED3BBF2B90D3DC2E931AB254ABCBFE8B54A86C02 (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * __this, Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * ___node0, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 *, Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 *, const RuntimeMethod*))Dict_1_Remove_mB7DCC10CD9BB4CD01FC698A771C87D9A3F51574A_gshared)(__this, ___node0, method);
}
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::RegionAbove(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method);
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::RegionBelow(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method);
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::Connect(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Mesh_Connect_mBBFA4558B503ABE38484323A12968B1FA40A4C34 (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eOrg1, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eDst2, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::FixUpperEdge(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m0B04206ADD778EA722886CA1C3A7E173D5BCDFEA (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___newEdge1, const RuntimeMethod* method);
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::InsertBefore(LibTessDotNet.Dict`1/Node<TValue>,TValue)
inline Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * Dict_1_InsertBefore_mF0D871E83178ACA0604BB8F33D7C1E9F949F21E9 (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * __this, Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * ___node0, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___key1, const RuntimeMethod* method)
{
	return ((  Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * (*) (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 *, Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 *, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *, const RuntimeMethod*))Dict_1_InsertBefore_m54D1C1174A8B0D3AFEE467D6A6DF55BB831047BA_gshared)(__this, ___node0, ___key1, method);
}
// System.Boolean LibTessDotNet.Geom::IsWindingInside(LibTessDotNet.WindingRule,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_mA54017B2455C54E4A58F8B5968B355B1BF00B2AA (int32_t ___rule0, int32_t ___n1, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::DeleteRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_m09FC665365F882F15561EDF9F4EBC94DD780599F (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::FinishRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_m53DEE9C4662ADF7065E2455A714357037B8DF97D (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Mesh::Splice(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eOrg1, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eDst2, const RuntimeMethod* method);
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::AddRegionBelow(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * Tess_AddRegionBelow_mCA582E60803B6331D7B69222DE1F6F9C51C856D9 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regAbove0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eNewUp1, const RuntimeMethod* method);
// System.Boolean LibTessDotNet.Tess::CheckForRightSplice(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_mBCE374F27191B9106F7D2C162877381577646FD4 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Geom::AddWinding(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m5DF2B42952089632105DC661DB183D970F37BE79 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eDst0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eSrc1, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::WalkDirtyRegions(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_m368066D69C19B49E40CA51E14FE6FE5AD000DD09 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, const RuntimeMethod* method);
// System.Single LibTessDotNet.Geom::VertL1dist(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_m4A0A9865CCCEA1B8E4A3947B89F06CDD54F5541E (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___u0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v1, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::VertexWeights(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_m1F711C9A9F9F23CD5F32B9F0D71B5ECED42D6E09 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___isect0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___org1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___dst2, float* ___w03, float* ___w14, const RuntimeMethod* method);
// System.Int32 LibTessDotNet.CombineCallback::Invoke(LibTessDotNet.Vec3,System.Int32[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CombineCallback_Invoke_m1259816D94764F54CCB600CAA4A03369625DE072 (CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * __this, Vec3_t956A293556A430A69339B775D377A79CAE910D67  ___position0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___data1, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___weights2, const RuntimeMethod* method);
// System.Boolean LibTessDotNet.Geom::VertEq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___lhs0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___rhs1, const RuntimeMethod* method);
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::SplitEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eOrg1, const RuntimeMethod* method);
// System.Void LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::Remove(LibTessDotNet.PQHandle)
inline void PriorityQueue_1_Remove_mC989B256A36B00040DD49EC98E5FEFA025DAFE6E (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * __this, PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF  ___handle0, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D *, PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF , const RuntimeMethod*))PriorityQueue_1_Remove_mDC8B68DBEBF2E66F3DCA9A57D7A62FF416EEF170_gshared)(__this, ___handle0, method);
}
// System.Void LibTessDotNet.Tess::SpliceMergeVertices(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m00A092F18FE2EB4E37497E0BE4750D09FB23084E (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___e10, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___e21, const RuntimeMethod* method);
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mB77A95F6A1FE3B8E7CD784F20AF4E1C908B5E9CD (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_m545895C37C1F738BBB653CA1F65E50FF1D197675 (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Void LibTessDotNet.Geom::EdgeIntersect(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_mD86DAB00B94280E2D60A43EB0435F5BC33CF9F3C (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___o10, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___d11, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___o22, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___d23, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v4, const RuntimeMethod* method);
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::TopLeftRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * Tess_TopLeftRegion_mC452E1606EEF37BD74E63A7D0F2111D7B4E15AC7 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method);
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Tess::FinishLeftRegions(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Tess_FinishLeftRegions_m3EA3296FB1DD51D441A52208CE54C6A51A6EC436 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regFirst0, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regLast1, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::AddRightEdges(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_mB5A22420B7105E46334A2CA6215FBF41AF4DC3DD (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eFirst1, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eLast2, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eTopLeft3, bool ___cleanUp4, const RuntimeMethod* method);
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::TopRightRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * Tess_TopRightRegion_mDD0387AD0D5EE847085A81F2F614148059793D40 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method);
// LibTessDotNet.PQHandle LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::Insert(TValue)
inline PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF  PriorityQueue_1_Insert_m210BD11DF16D9EC2F6F21B36FEE8AAF176D31903 (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * __this, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___value0, const RuntimeMethod* method)
{
	return ((  PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF  (*) (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D *, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *, const RuntimeMethod*))PriorityQueue_1_Insert_mAEF984EEF3AE9E62F23F89D094A7F6741641D2D6_gshared)(__this, ___value0, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::GetIntersectData(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_m6A8E7E2FAB33EC6C551C3F29ED146F10E1B811EA (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___isect0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___orgUp1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___dstUp2, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___orgLo3, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___dstLo4, const RuntimeMethod* method);
// System.Boolean LibTessDotNet.Tess::CheckForLeftSplice(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_m04645DAEF38D042828CA2E7F1A8F27942A3B0502 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, const RuntimeMethod* method);
// System.Boolean LibTessDotNet.Tess::CheckForIntersect(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_mEC69C5260C5D6C86AAA9280D638D35B0141A7B31 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::SweepEvent(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_mF827B2E5D8C4DC26737038494874BCCA3F142B4F (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___vEvent0, const RuntimeMethod* method);
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Find(TValue)
inline Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * Dict_1_Find_m8AEF3B8D8D00938EEB1E307558C9D63A9D44285E (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___key0, const RuntimeMethod* method)
{
	return ((  Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * (*) (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 *, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *, const RuntimeMethod*))Dict_1_Find_m4694621076958FD0B5B3FE195E8A3D2158A87559_gshared)(__this, ___key0, method);
}
// TValue LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion>::get_Key()
inline ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * Node_get_Key_m1D4C78ADD8C0C08EFC01FA0EC80920D775D515DA_inline (Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * __this, const RuntimeMethod* method)
{
	return ((  ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * (*) (Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 *, const RuntimeMethod*))Node_get_Key_m7F60225B624958D1CF77BB12E42467E55268C862_gshared_inline)(__this, method);
}
// System.Void LibTessDotNet.Tess::ConnectLeftDegenerate(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_m738FDCB762490B50187769FC0DEED2C4437304E9 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___vEvent1, const RuntimeMethod* method);
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Dnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Edge_get__Dnext_mBD1F7F0FEF80A7ABD27020BD6A25E20DEA19B127 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::ComputeWinding(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m72877A869B04B1FC49A6863593D3F9130E467231 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::ConnectLeftVertex(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_mB1E11B0555BB7AEAF13C439035F41F59BE6DE0F9 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___vEvent0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::ConnectRightVertex(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_mD24B6D268D5B5E502A6BFE612F875272E200F9C0 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eBottomLeft1, const RuntimeMethod* method);
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::MakeEdge(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Mesh_MakeEdge_m4241A4DBE65EF0587002E3EEFE1EC895E474E577 (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method);
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Insert(TValue)
inline Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * Dict_1_Insert_mEBFF89F4578CC084F9222521D69DEC96542F3198 (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___key0, const RuntimeMethod* method)
{
	return ((  Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * (*) (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 *, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *, const RuntimeMethod*))Dict_1_Insert_m0006E40F3EB4AF070DA094A1C96A05FE02C398D8_gshared)(__this, ___key0, method);
}
// System.Void LibTessDotNet.Dict`1/LessOrEqual<LibTessDotNet.Tess/ActiveRegion>::.ctor(System.Object,System.IntPtr)
inline void LessOrEqual__ctor_m5AED739F8EB55ACB8D5F2DA57CEEAC1D1C0CED42 (LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE *, RuntimeObject *, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_m972C0CE55E3E5AB14A663AC92133CAB66AEA7730_gshared)(__this, ___object0, ___method1, method);
}
// System.Void LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::.ctor(LibTessDotNet.Dict`1/LessOrEqual<TValue>)
inline void Dict_1__ctor_m1639F7726FB18B4283DCAAA2194FFEC89E74F20D (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * __this, LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE * ___leq0, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 *, LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE *, const RuntimeMethod*))Dict_1__ctor_m86126D523AA7D06F534177429EEE0D63B2D9ED44_gshared)(__this, ___leq0, method);
}
// System.Void LibTessDotNet.Tess::AddSentinel(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m5831E20DF2E4273561DA850EB911E7771E9C01C1 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, float ___smin0, float ___smax1, float ___t2, const RuntimeMethod* method);
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Min()
inline Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * Dict_1_Min_mC2088BFE1CABE431F7ABF9EEE814BDDCB8F2BECC (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * __this, const RuntimeMethod* method)
{
	return ((  Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * (*) (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 *, const RuntimeMethod*))Dict_1_Min_mBF62E1457F336B8B1A178416BDA553FBEAA6B211_gshared)(__this, method);
}
// System.Void LibTessDotNet.PriorityHeap`1/LessOrEqual<LibTessDotNet.MeshUtils/Vertex>::.ctor(System.Object,System.IntPtr)
inline void LessOrEqual__ctor_m6B65224E4AC4AA7ABC26F578FC18265B20AA07C6 (LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33 *, RuntimeObject *, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_m7CB7EF4746A58741468D151F8C9690E68D1DBB4B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::.ctor(System.Int32,LibTessDotNet.PriorityHeap`1/LessOrEqual<TValue>)
inline void PriorityQueue_1__ctor_m381E6876563040423799A6672756687E7604E81F (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * __this, int32_t ___initialSize0, LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33 * ___leq1, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D *, int32_t, LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33 *, const RuntimeMethod*))PriorityQueue_1__ctor_m70D0F604AD34D5DB3C933656E54F943552C3BAC5_gshared)(__this, ___initialSize0, ___leq1, method);
}
// System.Void LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::Init()
inline void PriorityQueue_1_Init_m743812FB3581ADE73C6952B93DD47AC5E059F996 (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * __this, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D *, const RuntimeMethod*))PriorityQueue_1_Init_m6358A50B1C15D341131DFAABBF6063573E4104DA_gshared)(__this, method);
}
// System.Void LibTessDotNet.Tess::RemoveDegenerateEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_m8645010FF24CA8EEEED37B1B0C8CBCBBC5D3271F (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::InitPriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m2245BE6201F58F750BB0EEBC98A42C88031A602D (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::RemoveDegenerateFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_mC3FCC29B30AA8236B0068A21DF07F8E8FC393981 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::InitEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_mE13A9DA171D5680282222A4CB0C68C0E8E157D56 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method);
// TValue LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::Minimum()
inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * PriorityQueue_1_Minimum_m59CF95646AF8055F52FD1945E7AAE8D614A22CA5 (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * __this, const RuntimeMethod* method)
{
	return ((  Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * (*) (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D *, const RuntimeMethod*))PriorityQueue_1_Minimum_mC4756B761F500985BDC5098385D48A3DA25AA910_gshared)(__this, method);
}
// TValue LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::ExtractMin()
inline Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * PriorityQueue_1_ExtractMin_m0A2011DC9AA923203CCD0665D59D3AEC52915619 (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * __this, const RuntimeMethod* method)
{
	return ((  Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * (*) (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D *, const RuntimeMethod*))PriorityQueue_1_ExtractMin_m07B8C2A4D174B1CBE6C3BF0496DCD9A0056A5552_gshared)(__this, method);
}
// System.Void LibTessDotNet.Tess::DoneEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m013C7985D78AE32DB59B89B746DCDBA5E76523FB (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::DonePriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m6E6EAE3837F974E1BCD5CCEE1445C0F063ABB60B (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.DefaultPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m71F9D18DC5212FB9C0CAC75EED98BC1B5A0A3240 (DefaultPool_tE2042812BB14686168ABCFAA2114BCC379CE055C * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::.ctor(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_m67084DCB2B4DFC0133E3039E52A72ACFC0284A8F (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method);
// System.Void LibTessDotNet.NullPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_m3CE48209A5F87CD47264995A93DA48C79690EC07 (NullPool_t3362A4521B554267969F55F0974D28D2089531B4 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.Vec3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m39957F15A8EE7ED94366DEDB02758EB3A6E3B4F8 (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void LibTessDotNet.Vec3::Sub(LibTessDotNet.Vec3&,LibTessDotNet.Vec3&,LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mF89A08A34433D26D2EC000CE4673A32BDFA5D77B (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___lhs0, Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___rhs1, Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___result2, const RuntimeMethod* method);
// System.Int32 LibTessDotNet.Vec3::LongAxis(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_mC96F5166F87C6C38F38278B42651A96A8D20393E (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___v0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Vec3::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99 (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Single LibTessDotNet.MeshUtils::FaceArea(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_m17D83B419A8B8B7E240207B87CCE05F9A80B7B5F (Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ___f0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Vec3::Neg(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_mC950637548B81F59948653EFABC01C3215CAD8A0 (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___v0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::ComputeNormal(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m930C010E0F6CCF76531A69477BBD1F51FA9DE7AC (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___norm0, const RuntimeMethod* method);
// System.Single LibTessDotNet.Vec3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_m49E9B2C6FBC606ECAB4F53D71E4D95FA2E8F6498 (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Vec3::Dot(LibTessDotNet.Vec3&,LibTessDotNet.Vec3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_m477C1E4EF502CE1C78217EC22BA31A1B8950DB91 (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___u0, Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___v1, float* ___dot2, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::CheckOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_m48C33B87B324D02145A72A0E1665698A160B2FBB (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method);
// System.Boolean LibTessDotNet.Geom::EdgeGoesLeft(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_mEB3959466D560FE4F84D3129E53E84CBC6886A88 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___e0, const RuntimeMethod* method);
// System.Boolean LibTessDotNet.Geom::EdgeGoesRight(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m47B3E137A8C1E35F94FD0A789B687EF3DE285D5E (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___e0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::TessellateMonoRegion(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_m8D654D5726DA50397B7DC08404D0BC2E29C47D1A (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ___face0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Mesh::MergeConvexFaces(LibTessDotNet.IPool,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m99AA9DF2F2272AADEBE96EC5AC94A325B7CDB8CC (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, int32_t ___maxVertsPerFace1, const RuntimeMethod* method);
// System.Int32 LibTessDotNet.Tess::GetNeighbourFace(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_m7813BEB0AA9FF7AB051B01D8AC6F03CA41E133F9 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___edge0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::AddContourInternal(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>,LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_m89D418365BA30E2D8B6589A816EEC511E8E79DEB (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method);
// System.Single LibTessDotNet.Tess::SignedArea(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m85813F740E6553CD33829A95B29FEECBB2413515 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, RuntimeObject* ___vertices0, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::ProjectPolygon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_mBAED2297A7800E1C3965E9B42CDF75D8BDF126BD (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::ComputeInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_m588F9F9D24E9984FE4D90D819CB19EA82192C1F4 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::SetWindingNumber(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_mFDFF458583128A8135E55C05B9A0C4223101667F (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, int32_t ___value0, bool ___keepOnlyBoundary1, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::TessellateInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mAE5B9B07BB675F208C42825A95454C3DCC551F46 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::OutputContours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_mC99F855161EAE97FA2D0C1F71767778B238DA2A9 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method);
// System.Void LibTessDotNet.Tess::OutputPolymesh(LibTessDotNet.ElementType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_m12B167C80EBFF639080B0C6DC1BFDC632AABB184 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, int32_t ___elementType0, int32_t ___polySize1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m17448AB4B27BC9D8AEB4605CDB0EA053626ABEC1 (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String LibTessDotNet.Vec3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_m705A61E6748DA1229F0D554B87C2FF8032827247 (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * __this, const RuntimeMethod* method);
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF (CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * __this, Vec3_t956A293556A430A69339B775D377A79CAE910D67  ___position0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___data1, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___weights2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Vec3_t956A293556A430A69339B775D377A79CAE910D67 , int32_t*, float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data1' to native representation
	int32_t* ____data1_marshaled = NULL;
	if (___data1 != NULL)
	{
		____data1_marshaled = reinterpret_cast<int32_t*>((___data1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___weights2' to native representation
	float* ____weights2_marshaled = NULL;
	if (___weights2 != NULL)
	{
		____weights2_marshaled = reinterpret_cast<float*>((___weights2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___position0, ____data1_marshaled, ____weights2_marshaled);

	return returnValue;
}
// System.Void LibTessDotNet.CombineCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineCallback__ctor_m2350826699B994928E5C190B9B9B1A3457B08B84 (CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 LibTessDotNet.CombineCallback::Invoke(LibTessDotNet.Vec3,System.Int32[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CombineCallback_Invoke_m1259816D94764F54CCB600CAA4A03369625DE072 (CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * __this, Vec3_t956A293556A430A69339B775D377A79CAE910D67  ___position0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___data1, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___weights2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef int32_t (*FunctionPointerType) (Vec3_t956A293556A430A69339B775D377A79CAE910D67 , Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___position0, ___data1, ___weights2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, Vec3_t956A293556A430A69339B775D377A79CAE910D67 , Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___data1, ___weights2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< int32_t, Vec3_t956A293556A430A69339B775D377A79CAE910D67 , Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, targetThis, ___position0, ___data1, ___weights2);
					else
						result = GenericVirtFuncInvoker3< int32_t, Vec3_t956A293556A430A69339B775D377A79CAE910D67 , Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(targetMethod, targetThis, ___position0, ___data1, ___weights2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, Vec3_t956A293556A430A69339B775D377A79CAE910D67 , Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0, ___data1, ___weights2);
					else
						result = VirtFuncInvoker3< int32_t, Vec3_t956A293556A430A69339B775D377A79CAE910D67 , Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0, ___data1, ___weights2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___position0) - 1), ___data1, ___weights2, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___position0) - 1), ___data1, ___weights2, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, Vec3_t956A293556A430A69339B775D377A79CAE910D67 , Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, ___data1, ___weights2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult LibTessDotNet.CombineCallback::BeginInvoke(LibTessDotNet.Vec3,System.Int32[],System.Single[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_BeginInvoke_m47D53F3643E1396A4B08BA5DB0D4FEAA08B7EC08 (CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * __this, Vec3_t956A293556A430A69339B775D377A79CAE910D67  ___position0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___data1, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___weights2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CombineCallback_BeginInvoke_m47D53F3643E1396A4B08BA5DB0D4FEAA08B7EC08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vec3_t956A293556A430A69339B775D377A79CAE910D67_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = ___data1;
	__d_args[2] = ___weights2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 LibTessDotNet.CombineCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CombineCallback_EndInvoke_mAB973BCACB810D6C9DDC79D97928DB902F658678 (CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
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
// System.Void LibTessDotNet.ContourVertex::.ctor(LibTessDotNet.Vec3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mFE848F735C3B92AA16CB2F512008FEA727B326E5 (ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 * __this, Vec3_t956A293556A430A69339B775D377A79CAE910D67  ___position0, int32_t ___data1, const RuntimeMethod* method)
{
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_0 = ___position0;
		__this->set_Position_0(L_0);
		int32_t L_1 = ___data1;
		__this->set_Data_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ContourVertex__ctor_mFE848F735C3B92AA16CB2F512008FEA727B326E5_AdjustorThunk (RuntimeObject * __this, Vec3_t956A293556A430A69339B775D377A79CAE910D67  ___position0, int32_t ___data1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 * _thisAdjusted = reinterpret_cast<ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 *>(__this + _offset);
	ContourVertex__ctor_mFE848F735C3B92AA16CB2F512008FEA727B326E5(_thisAdjusted, ___position0, ___data1, method);
}
// System.String LibTessDotNet.ContourVertex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m9F2A8CA10BA23DC4A4D3DF7E0AC8197C9E663101 (ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContourVertex_ToString_m9F2A8CA10BA23DC4A4D3DF7E0AC8197C9E663101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_0 = __this->get_Position_0();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_1 = L_0;
		RuntimeObject * L_2 = Box(Vec3_t956A293556A430A69339B775D377A79CAE910D67_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = __this->get_Data_1();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral2BEBB63BDE008E0E66E2D8C8AC7868A934464DE8, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* ContourVertex_ToString_m9F2A8CA10BA23DC4A4D3DF7E0AC8197C9E663101_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 * _thisAdjusted = reinterpret_cast<ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 *>(__this + _offset);
	return ContourVertex_ToString_m9F2A8CA10BA23DC4A4D3DF7E0AC8197C9E663101(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibTessDotNet.DefaultPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m71F9D18DC5212FB9C0CAC75EED98BC1B5A0A3240 (DefaultPool_tE2042812BB14686168ABCFAA2114BCC379CE055C * __this, const RuntimeMethod* method)
{
	{
		IPool__ctor_mAC687A8E0F6EA56B2AF3DCE6EC9AF2ABF116E0E4(__this, /*hidden argument*/NULL);
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
// System.Boolean LibTessDotNet.Geom::IsWindingInside(LibTessDotNet.WindingRule,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_mA54017B2455C54E4A58F8B5968B355B1BF00B2AA (int32_t ___rule0, int32_t ___n1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Geom_IsWindingInside_mA54017B2455C54E4A58F8B5968B355B1BF00B2AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___rule0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_002d;
			}
			case 4:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001c:
	{
		int32_t L_1 = ___n1;
		return (bool)((((int32_t)((int32_t)((int32_t)L_1&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}

IL_0023:
	{
		int32_t L_2 = ___n1;
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0028:
	{
		int32_t L_3 = ___n1;
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}

IL_002d:
	{
		int32_t L_4 = ___n1;
		return (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		int32_t L_5 = ___n1;
		if ((((int32_t)L_5) >= ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_6 = ___n1;
		return (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_003f:
	{
		return (bool)1;
	}

IL_0041:
	{
		Exception_t * L_7 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_7, _stringLiteralB9B335FE5D383E918D4DA9B54845A1FD85E2E637, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, Geom_IsWindingInside_mA54017B2455C54E4A58F8B5968B355B1BF00B2AA_RuntimeMethod_var);
	}
}
// System.Boolean LibTessDotNet.Geom::VertCCW(LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_m02493F37D3AC4A9973B1A345015151E603661FDC (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___u0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___w2, const RuntimeMethod* method)
{
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___u0;
		NullCheck(L_0);
		float L_1 = L_0->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = ___v1;
		NullCheck(L_2);
		float L_3 = L_2->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = ___w2;
		NullCheck(L_8);
		float L_9 = L_8->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = ___u0;
		NullCheck(L_10);
		float L_11 = L_10->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = ___w2;
		NullCheck(L_12);
		float L_13 = L_12->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = ___u0;
		NullCheck(L_14);
		float L_15 = L_14->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = ___v1;
		NullCheck(L_16);
		float L_17 = L_16->get__t_5();
		return (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)))), (float)((float)il2cpp_codegen_multiply((float)L_7, (float)((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)))))), (float)((float)il2cpp_codegen_multiply((float)L_13, (float)((float)il2cpp_codegen_subtract((float)L_15, (float)L_17))))))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean LibTessDotNet.Geom::VertEq(LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___lhs0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___rhs1, const RuntimeMethod* method)
{
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___lhs0;
		NullCheck(L_0);
		float L_1 = L_0->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = ___rhs1;
		NullCheck(L_2);
		float L_3 = L_2->get__s_4();
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___lhs0;
		NullCheck(L_4);
		float L_5 = L_4->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = ___rhs1;
		NullCheck(L_6);
		float L_7 = L_6->get__t_5();
		return (bool)((((float)L_5) == ((float)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean LibTessDotNet.Geom::VertLeq(LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___lhs0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___rhs1, const RuntimeMethod* method)
{
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___lhs0;
		NullCheck(L_0);
		float L_1 = L_0->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = ___rhs1;
		NullCheck(L_2);
		float L_3 = L_2->get__s_4();
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___lhs0;
		NullCheck(L_4);
		float L_5 = L_4->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = ___rhs1;
		NullCheck(L_6);
		float L_7 = L_6->get__s_4();
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = ___lhs0;
		NullCheck(L_8);
		float L_9 = L_8->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = ___rhs1;
		NullCheck(L_10);
		float L_11 = L_10->get__t_5();
		return (bool)((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		return (bool)1;
	}
}
// System.Single LibTessDotNet.Geom::EdgeEval(LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mC352383793F5DD57BB91C3B180E75C8F2DA83C60 (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___u0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___w2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___v1;
		NullCheck(L_0);
		float L_1 = L_0->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = ___u0;
		NullCheck(L_2);
		float L_3 = L_2->get__s_4();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->get__s_4();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add((float)L_8, (float)L_9))) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_004c;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = ___v1;
		NullCheck(L_12);
		float L_13 = L_12->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = ___u0;
		NullCheck(L_14);
		float L_15 = L_14->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = ___u0;
		NullCheck(L_16);
		float L_17 = L_16->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_18 = ___w2;
		NullCheck(L_18);
		float L_19 = L_18->get__t_5();
		float L_20 = V_0;
		float L_21 = V_0;
		float L_22 = V_1;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), (float)((float)((float)L_20/(float)((float)il2cpp_codegen_add((float)L_21, (float)L_22))))))));
	}

IL_004c:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_23 = ___v1;
		NullCheck(L_23);
		float L_24 = L_23->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_25 = ___w2;
		NullCheck(L_25);
		float L_26 = L_25->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_27 = ___w2;
		NullCheck(L_27);
		float L_28 = L_27->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_29 = ___u0;
		NullCheck(L_29);
		float L_30 = L_29->get__t_5();
		float L_31 = V_1;
		float L_32 = V_0;
		float L_33 = V_1;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_24, (float)L_26)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_28, (float)L_30)), (float)((float)((float)L_31/(float)((float)il2cpp_codegen_add((float)L_32, (float)L_33))))))));
	}

IL_006e:
	{
		return (0.0f);
	}
}
// System.Single LibTessDotNet.Geom::EdgeSign(LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___u0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___w2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___v1;
		NullCheck(L_0);
		float L_1 = L_0->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = ___u0;
		NullCheck(L_2);
		float L_3 = L_2->get__s_4();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->get__s_4();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add((float)L_8, (float)L_9))) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = ___v1;
		NullCheck(L_10);
		float L_11 = L_10->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = ___w2;
		NullCheck(L_12);
		float L_13 = L_12->get__t_5();
		float L_14 = V_0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_15 = ___v1;
		NullCheck(L_15);
		float L_16 = L_15->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_17 = ___u0;
		NullCheck(L_17);
		float L_18 = L_17->get__t_5();
		float L_19 = V_1;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_13)), (float)L_14)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_16, (float)L_18)), (float)L_19))));
	}

IL_0046:
	{
		return (0.0f);
	}
}
// System.Boolean LibTessDotNet.Geom::TransLeq(LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_m124A95061B8DBC9E4355CCE4507FCC6C744094FE (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___lhs0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___rhs1, const RuntimeMethod* method)
{
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___lhs0;
		NullCheck(L_0);
		float L_1 = L_0->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = ___rhs1;
		NullCheck(L_2);
		float L_3 = L_2->get__t_5();
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___lhs0;
		NullCheck(L_4);
		float L_5 = L_4->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = ___rhs1;
		NullCheck(L_6);
		float L_7 = L_6->get__t_5();
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = ___lhs0;
		NullCheck(L_8);
		float L_9 = L_8->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = ___rhs1;
		NullCheck(L_10);
		float L_11 = L_10->get__s_4();
		return (bool)((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		return (bool)1;
	}
}
// System.Single LibTessDotNet.Geom::TransEval(LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_mFF6B6EBE91195F0D9F67FA691C7F3858B3889B6D (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___u0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___w2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___v1;
		NullCheck(L_0);
		float L_1 = L_0->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = ___u0;
		NullCheck(L_2);
		float L_3 = L_2->get__t_5();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->get__t_5();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add((float)L_8, (float)L_9))) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_004c;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = ___v1;
		NullCheck(L_12);
		float L_13 = L_12->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = ___u0;
		NullCheck(L_14);
		float L_15 = L_14->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = ___u0;
		NullCheck(L_16);
		float L_17 = L_16->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_18 = ___w2;
		NullCheck(L_18);
		float L_19 = L_18->get__s_4();
		float L_20 = V_0;
		float L_21 = V_0;
		float L_22 = V_1;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_15)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_19)), (float)((float)((float)L_20/(float)((float)il2cpp_codegen_add((float)L_21, (float)L_22))))))));
	}

IL_004c:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_23 = ___v1;
		NullCheck(L_23);
		float L_24 = L_23->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_25 = ___w2;
		NullCheck(L_25);
		float L_26 = L_25->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_27 = ___w2;
		NullCheck(L_27);
		float L_28 = L_27->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_29 = ___u0;
		NullCheck(L_29);
		float L_30 = L_29->get__s_4();
		float L_31 = V_1;
		float L_32 = V_0;
		float L_33 = V_1;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_24, (float)L_26)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_28, (float)L_30)), (float)((float)((float)L_31/(float)((float)il2cpp_codegen_add((float)L_32, (float)L_33))))))));
	}

IL_006e:
	{
		return (0.0f);
	}
}
// System.Single LibTessDotNet.Geom::TransSign(LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m3D73A72AB106EA5DC942FC85D65D7EE0F64FAD79 (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___u0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___w2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___v1;
		NullCheck(L_0);
		float L_1 = L_0->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = ___u0;
		NullCheck(L_2);
		float L_3 = L_2->get__t_5();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->get__t_5();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add((float)L_8, (float)L_9))) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = ___v1;
		NullCheck(L_10);
		float L_11 = L_10->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = ___w2;
		NullCheck(L_12);
		float L_13 = L_12->get__s_4();
		float L_14 = V_0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_15 = ___v1;
		NullCheck(L_15);
		float L_16 = L_15->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_17 = ___u0;
		NullCheck(L_17);
		float L_18 = L_17->get__s_4();
		float L_19 = V_1;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_13)), (float)L_14)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_16, (float)L_18)), (float)L_19))));
	}

IL_0046:
	{
		return (0.0f);
	}
}
// System.Boolean LibTessDotNet.Geom::EdgeGoesLeft(LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_mEB3959466D560FE4F84D3129E53E84CBC6886A88 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___e0, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = ___e0;
		NullCheck(L_0);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_0, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = ___e0;
		NullCheck(L_2);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_3 = L_2->get__Org_5();
		bool L_4 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean LibTessDotNet.Geom::EdgeGoesRight(LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m47B3E137A8C1E35F94FD0A789B687EF3DE285D5E (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___e0, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = ___e0;
		NullCheck(L_0);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = L_0->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = ___e0;
		NullCheck(L_2);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_3 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_2, /*hidden argument*/NULL);
		bool L_4 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Single LibTessDotNet.Geom::VertL1dist(LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_m4A0A9865CCCEA1B8E4A3947B89F06CDD54F5541E (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___u0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Geom_VertL1dist_m4A0A9865CCCEA1B8E4A3947B89F06CDD54F5541E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___u0;
		NullCheck(L_0);
		float L_1 = L_0->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = ___v1;
		NullCheck(L_2);
		float L_3 = L_2->get__s_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_4 = fabsf(((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)));
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_5 = ___u0;
		NullCheck(L_5);
		float L_6 = L_5->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = ___v1;
		NullCheck(L_7);
		float L_8 = L_7->get__t_5();
		float L_9 = fabsf(((float)il2cpp_codegen_subtract((float)L_6, (float)L_8)));
		return ((float)il2cpp_codegen_add((float)L_4, (float)L_9));
	}
}
// System.Void LibTessDotNet.Geom::AddWinding(LibTessDotNet.MeshUtils_Edge,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m5DF2B42952089632105DC661DB183D970F37BE79 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eDst0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eSrc1, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = ___eDst0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get__winding_8();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = ___eSrc1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__winding_8();
		NullCheck(L_1);
		L_1->set__winding_8(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_4)));
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = ___eDst0;
		NullCheck(L_5);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = L_5->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->get__winding_8();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = ___eSrc1;
		NullCheck(L_9);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = L_9->get__Sym_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get__winding_8();
		NullCheck(L_7);
		L_7->set__winding_8(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_11)));
		return;
	}
}
// System.Single LibTessDotNet.Geom::Interpolate(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m854331D2D2D04780F8145508E48A02FEDBCFF560 (float ___a0, float ___x1, float ___b2, float ___y3, const RuntimeMethod* method)
{
	{
		float L_0 = ___a0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		___a0 = (0.0f);
	}

IL_000f:
	{
		float L_1 = ___b2;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		___b2 = (0.0f);
	}

IL_001e:
	{
		float L_2 = ___a0;
		float L_3 = ___b2;
		if ((((float)L_2) <= ((float)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		float L_4 = ___y3;
		float L_5 = ___x1;
		float L_6 = ___y3;
		float L_7 = ___b2;
		float L_8 = ___a0;
		float L_9 = ___b2;
		return ((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)), (float)((float)((float)L_7/(float)((float)il2cpp_codegen_add((float)L_8, (float)L_9))))))));
	}

IL_002e:
	{
		float L_10 = ___b2;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		float L_11 = ___x1;
		float L_12 = ___y3;
		float L_13 = ___x1;
		float L_14 = ___a0;
		float L_15 = ___a0;
		float L_16 = ___b2;
		return ((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)), (float)((float)((float)L_14/(float)((float)il2cpp_codegen_add((float)L_15, (float)L_16))))))));
	}

IL_0042:
	{
		float L_17 = ___x1;
		float L_18 = ___y3;
		return ((float)((float)((float)il2cpp_codegen_add((float)L_17, (float)L_18))/(float)(2.0f)));
	}
}
// System.Void LibTessDotNet.Geom::Swap(LibTessDotNet.MeshUtils_Vertex&,LibTessDotNet.MeshUtils_Vertex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_mDA582422683E12BEFC92E9E78C2C6E118866426B (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** ___a0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** ___b1, const RuntimeMethod* method)
{
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_0 = NULL;
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** L_0 = ___a0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = *((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)L_0);
		V_0 = L_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** L_2 = ___a0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** L_3 = ___b1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = *((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)L_3);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_4);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 ** L_5 = ___b1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = V_0;
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_6);
		return;
	}
}
// System.Void LibTessDotNet.Geom::EdgeIntersect(LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_mD86DAB00B94280E2D60A43EB0435F5BC33CF9F3C (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___o10, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___d11, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___o22, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___d23, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___v4, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___o10;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = ___d11;
		bool L_2 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Geom_Swap_mDA582422683E12BEFC92E9E78C2C6E118866426B((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___o10), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___d11), /*hidden argument*/NULL);
	}

IL_0012:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_3 = ___o22;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___d23;
		bool L_5 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		Geom_Swap_mDA582422683E12BEFC92E9E78C2C6E118866426B((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___o22), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___d23), /*hidden argument*/NULL);
	}

IL_0024:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = ___o10;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = ___o22;
		bool L_8 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		Geom_Swap_mDA582422683E12BEFC92E9E78C2C6E118866426B((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___o10), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___o22), /*hidden argument*/NULL);
		Geom_Swap_mDA582422683E12BEFC92E9E78C2C6E118866426B((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___d11), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___d23), /*hidden argument*/NULL);
	}

IL_003f:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = ___o22;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = ___d11;
		bool L_11 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_9, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0067;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = ___v4;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_13 = ___o22;
		NullCheck(L_13);
		float L_14 = L_13->get__s_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_15 = ___d11;
		NullCheck(L_15);
		float L_16 = L_15->get__s_4();
		NullCheck(L_12);
		L_12->set__s_4(((float)((float)((float)il2cpp_codegen_add((float)L_14, (float)L_16))/(float)(2.0f))));
		goto IL_00eb;
	}

IL_0067:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_17 = ___d11;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_18 = ___d23;
		bool L_19 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00ae;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_20 = ___o10;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = ___o22;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_22 = ___d11;
		float L_23 = Geom_EdgeEval_mC352383793F5DD57BB91C3B180E75C8F2DA83C60(L_20, L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_24 = ___o22;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_25 = ___d11;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_26 = ___d23;
		float L_27 = Geom_EdgeEval_mC352383793F5DD57BB91C3B180E75C8F2DA83C60(L_24, L_25, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		float L_28 = V_0;
		float L_29 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add((float)L_28, (float)L_29))) < ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		float L_30 = V_0;
		V_0 = ((-L_30));
		float L_31 = V_1;
		V_1 = ((-L_31));
	}

IL_0092:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_32 = ___v4;
		float L_33 = V_0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_34 = ___o22;
		NullCheck(L_34);
		float L_35 = L_34->get__s_4();
		float L_36 = V_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_37 = ___d11;
		NullCheck(L_37);
		float L_38 = L_37->get__s_4();
		float L_39 = Geom_Interpolate_m854331D2D2D04780F8145508E48A02FEDBCFF560(L_33, L_35, L_36, L_38, /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set__s_4(L_39);
		goto IL_00eb;
	}

IL_00ae:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_40 = ___o10;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_41 = ___o22;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_42 = ___d11;
		float L_43 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_40, L_41, L_42, /*hidden argument*/NULL);
		V_2 = L_43;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_44 = ___o10;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_45 = ___d23;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_46 = ___d11;
		float L_47 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_44, L_45, L_46, /*hidden argument*/NULL);
		V_3 = ((-L_47));
		float L_48 = V_2;
		float L_49 = V_3;
		if ((!(((float)((float)il2cpp_codegen_add((float)L_48, (float)L_49))) < ((float)(0.0f)))))
		{
			goto IL_00d1;
		}
	}
	{
		float L_50 = V_2;
		V_2 = ((-L_50));
		float L_51 = V_3;
		V_3 = ((-L_51));
	}

IL_00d1:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_52 = ___v4;
		float L_53 = V_2;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_54 = ___o22;
		NullCheck(L_54);
		float L_55 = L_54->get__s_4();
		float L_56 = V_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_57 = ___d23;
		NullCheck(L_57);
		float L_58 = L_57->get__s_4();
		float L_59 = Geom_Interpolate_m854331D2D2D04780F8145508E48A02FEDBCFF560(L_53, L_55, L_56, L_58, /*hidden argument*/NULL);
		NullCheck(L_52);
		L_52->set__s_4(L_59);
	}

IL_00eb:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_60 = ___o10;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_61 = ___d11;
		bool L_62 = Geom_TransLeq_m124A95061B8DBC9E4355CCE4507FCC6C744094FE(L_60, L_61, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_00fd;
		}
	}
	{
		Geom_Swap_mDA582422683E12BEFC92E9E78C2C6E118866426B((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___o10), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___d11), /*hidden argument*/NULL);
	}

IL_00fd:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_63 = ___o22;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_64 = ___d23;
		bool L_65 = Geom_TransLeq_m124A95061B8DBC9E4355CCE4507FCC6C744094FE(L_63, L_64, /*hidden argument*/NULL);
		if (L_65)
		{
			goto IL_010f;
		}
	}
	{
		Geom_Swap_mDA582422683E12BEFC92E9E78C2C6E118866426B((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___o22), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___d23), /*hidden argument*/NULL);
	}

IL_010f:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_66 = ___o10;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_67 = ___o22;
		bool L_68 = Geom_TransLeq_m124A95061B8DBC9E4355CCE4507FCC6C744094FE(L_66, L_67, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_012a;
		}
	}
	{
		Geom_Swap_mDA582422683E12BEFC92E9E78C2C6E118866426B((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___o10), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___o22), /*hidden argument*/NULL);
		Geom_Swap_mDA582422683E12BEFC92E9E78C2C6E118866426B((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___d11), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 **)(&___d23), /*hidden argument*/NULL);
	}

IL_012a:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_69 = ___o22;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_70 = ___d11;
		bool L_71 = Geom_TransLeq_m124A95061B8DBC9E4355CCE4507FCC6C744094FE(L_69, L_70, /*hidden argument*/NULL);
		if (L_71)
		{
			goto IL_014e;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_72 = ___v4;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_73 = ___o22;
		NullCheck(L_73);
		float L_74 = L_73->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_75 = ___d11;
		NullCheck(L_75);
		float L_76 = L_75->get__t_5();
		NullCheck(L_72);
		L_72->set__t_5(((float)((float)((float)il2cpp_codegen_add((float)L_74, (float)L_76))/(float)(2.0f))));
		return;
	}

IL_014e:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_77 = ___d11;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_78 = ___d23;
		bool L_79 = Geom_TransLeq_m124A95061B8DBC9E4355CCE4507FCC6C744094FE(L_77, L_78, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_019e;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_80 = ___o10;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_81 = ___o22;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_82 = ___d11;
		float L_83 = Geom_TransEval_mFF6B6EBE91195F0D9F67FA691C7F3858B3889B6D(L_80, L_81, L_82, /*hidden argument*/NULL);
		V_4 = L_83;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_84 = ___o22;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_85 = ___d11;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_86 = ___d23;
		float L_87 = Geom_TransEval_mFF6B6EBE91195F0D9F67FA691C7F3858B3889B6D(L_84, L_85, L_86, /*hidden argument*/NULL);
		V_5 = L_87;
		float L_88 = V_4;
		float L_89 = V_5;
		if ((!(((float)((float)il2cpp_codegen_add((float)L_88, (float)L_89))) < ((float)(0.0f)))))
		{
			goto IL_0181;
		}
	}
	{
		float L_90 = V_4;
		V_4 = ((-L_90));
		float L_91 = V_5;
		V_5 = ((-L_91));
	}

IL_0181:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_92 = ___v4;
		float L_93 = V_4;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_94 = ___o22;
		NullCheck(L_94);
		float L_95 = L_94->get__t_5();
		float L_96 = V_5;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_97 = ___d11;
		NullCheck(L_97);
		float L_98 = L_97->get__t_5();
		float L_99 = Geom_Interpolate_m854331D2D2D04780F8145508E48A02FEDBCFF560(L_93, L_95, L_96, L_98, /*hidden argument*/NULL);
		NullCheck(L_92);
		L_92->set__t_5(L_99);
		return;
	}

IL_019e:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_100 = ___o10;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_101 = ___o22;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_102 = ___d11;
		float L_103 = Geom_TransSign_m3D73A72AB106EA5DC942FC85D65D7EE0F64FAD79(L_100, L_101, L_102, /*hidden argument*/NULL);
		V_6 = L_103;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_104 = ___o10;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_105 = ___d23;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_106 = ___d11;
		float L_107 = Geom_TransSign_m3D73A72AB106EA5DC942FC85D65D7EE0F64FAD79(L_104, L_105, L_106, /*hidden argument*/NULL);
		V_7 = ((-L_107));
		float L_108 = V_6;
		float L_109 = V_7;
		if ((!(((float)((float)il2cpp_codegen_add((float)L_108, (float)L_109))) < ((float)(0.0f)))))
		{
			goto IL_01c9;
		}
	}
	{
		float L_110 = V_6;
		V_6 = ((-L_110));
		float L_111 = V_7;
		V_7 = ((-L_111));
	}

IL_01c9:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_112 = ___v4;
		float L_113 = V_6;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_114 = ___o22;
		NullCheck(L_114);
		float L_115 = L_114->get__t_5();
		float L_116 = V_7;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_117 = ___d23;
		NullCheck(L_117);
		float L_118 = L_117->get__t_5();
		float L_119 = Geom_Interpolate_m854331D2D2D04780F8145508E48A02FEDBCFF560(L_113, L_115, L_116, L_118, /*hidden argument*/NULL);
		NullCheck(L_112);
		L_112->set__t_5(L_119);
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
// System.Void LibTessDotNet.IPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_mAC687A8E0F6EA56B2AF3DCE6EC9AF2ABF116E0E4 (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IPool__ctor_mAC687A8E0F6EA56B2AF3DCE6EC9AF2ABF116E0E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		DefaultTypePool_1_t6506CD6EBC76D66687FCB06B74F9A722AF610613 * L_0 = (DefaultTypePool_1_t6506CD6EBC76D66687FCB06B74F9A722AF610613 *)il2cpp_codegen_object_new(DefaultTypePool_1_t6506CD6EBC76D66687FCB06B74F9A722AF610613_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_mE65B2978D5CB19B852B5A92D721D088FCE1D1CBA(L_0, /*hidden argument*/DefaultTypePool_1__ctor_mE65B2978D5CB19B852B5A92D721D088FCE1D1CBA_RuntimeMethod_var);
		GenericVirtActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_mC70038284E946D1D6C4EB6F19BE1CCEFC0522FF8_RuntimeMethod_var, __this, L_0);
		DefaultTypePool_1_tD65BF7F6FE500475650CD4104A99C1CC81BB83ED * L_1 = (DefaultTypePool_1_tD65BF7F6FE500475650CD4104A99C1CC81BB83ED *)il2cpp_codegen_object_new(DefaultTypePool_1_tD65BF7F6FE500475650CD4104A99C1CC81BB83ED_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_m9E1E9F79B3F2AA093ECDEB1C01DA2326094D41C5(L_1, /*hidden argument*/DefaultTypePool_1__ctor_m9E1E9F79B3F2AA093ECDEB1C01DA2326094D41C5_RuntimeMethod_var);
		GenericVirtActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisFace_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276_m8CD7A191F864B7C9598F4621733B2E889E1E8223_RuntimeMethod_var, __this, L_1);
		DefaultTypePool_1_tF55083BEBD7748262297943C37D60F151B6E5DE2 * L_2 = (DefaultTypePool_1_tF55083BEBD7748262297943C37D60F151B6E5DE2 *)il2cpp_codegen_object_new(DefaultTypePool_1_tF55083BEBD7748262297943C37D60F151B6E5DE2_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_m60F5B62C348925079EF65CCECC4FC7A8938C45DB(L_2, /*hidden argument*/DefaultTypePool_1__ctor_m60F5B62C348925079EF65CCECC4FC7A8938C45DB_RuntimeMethod_var);
		GenericVirtActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisEdge_t9D4BFE9716279C9D930CB20420750F7746432102_m4F0DF3C265B0115C4B2697533D501A37A6C86A2B_RuntimeMethod_var, __this, L_2);
		DefaultTypePool_1_t0C08998C39340F844ABA5CDC5265C65DF8A68848 * L_3 = (DefaultTypePool_1_t0C08998C39340F844ABA5CDC5265C65DF8A68848 *)il2cpp_codegen_object_new(DefaultTypePool_1_t0C08998C39340F844ABA5CDC5265C65DF8A68848_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_mE48B93A6460E56B1E7849D984CCEE85E8D818EF7(L_3, /*hidden argument*/DefaultTypePool_1__ctor_mE48B93A6460E56B1E7849D984CCEE85E8D818EF7_RuntimeMethod_var);
		GenericVirtActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0_mA48EF9110A071B346E058117234E6057B75C0803_RuntimeMethod_var, __this, L_3);
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
// System.Void LibTessDotNet.Mesh::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Init_mF313A1D46138931FEDA0E3E6546892A0DA5DC8E3 (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Mesh_Init_mF313A1D46138931FEDA0E3E6546892A0DA5DC8E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_0 = NULL;
	EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_3 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_4 = NULL;
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_5 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_6 = NULL;
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_0 = ___pool0;
		NullCheck(L_0);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = GenericVirtFuncInvoker0< Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * >::Invoke(IPool_Get_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_mEF84A2B4985A18A163D1A914B0490F483E8476CC_RuntimeMethod_var, L_0);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = L_1;
		V_4 = L_2;
		__this->set__vHead_0(L_2);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_3 = V_4;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_4 = ___pool0;
		NullCheck(L_4);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_5 = GenericVirtFuncInvoker0< Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * >::Invoke(IPool_Get_TisFace_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276_m052001B17D64C24B48D22AC88ACD937F0D7D6D9D_RuntimeMethod_var, L_4);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_6 = L_5;
		V_5 = L_6;
		__this->set__fHead_1(L_6);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_7 = V_5;
		V_0 = L_7;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_8 = ___pool0;
		EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  L_9 = EdgePair_Create_m00433F031D09C6877542ED045F7219DD47FB4DD8(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  L_10 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = L_10.get__e_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = L_11;
		V_6 = L_12;
		__this->set__eHead_2(L_12);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_6;
		V_2 = L_13;
		EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  L_14 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = L_14.get__eSym_1();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_16 = L_15;
		V_6 = L_16;
		__this->set__eHeadSym_3(L_16);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = V_6;
		V_3 = L_17;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_18 = L_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_19 = L_18;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_20 = L_19;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = L_20;
		V_4 = L_21;
		NullCheck(L_20);
		L_20->set__prev_0(L_21);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_22 = V_4;
		NullCheck(L_19);
		L_19->set__next_1(L_22);
		NullCheck(L_18);
		L_18->set__anEdge_2((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_23 = V_0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_24 = V_0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_25 = V_0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_26 = L_25;
		V_5 = L_26;
		NullCheck(L_24);
		L_24->set__prev_0(L_26);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_27 = V_5;
		NullCheck(L_23);
		L_23->set__next_1(L_27);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_28 = V_0;
		NullCheck(L_28);
		L_28->set__anEdge_2((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_29 = V_0;
		NullCheck(L_29);
		L_29->set__trail_3((Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)NULL);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_30 = V_0;
		NullCheck(L_30);
		L_30->set__marked_5((bool)0);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_31 = V_0;
		NullCheck(L_31);
		L_31->set__inside_6((bool)0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_32 = V_2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_33 = V_2;
		NullCheck(L_32);
		L_32->set__next_1(L_33);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_34 = V_2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_35 = V_3;
		NullCheck(L_34);
		L_34->set__Sym_2(L_35);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_36 = V_2;
		NullCheck(L_36);
		L_36->set__Onext_3((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_37 = V_2;
		NullCheck(L_37);
		L_37->set__Lnext_4((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_38 = V_2;
		NullCheck(L_38);
		L_38->set__Org_5((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_39 = V_2;
		NullCheck(L_39);
		L_39->set__Lface_6((Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_40 = V_2;
		NullCheck(L_40);
		L_40->set__winding_8(0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_41 = V_2;
		NullCheck(L_41);
		L_41->set__activeRegion_7((ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_42 = V_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_43 = V_3;
		NullCheck(L_42);
		L_42->set__next_1(L_43);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_44 = V_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_45 = V_2;
		NullCheck(L_44);
		L_44->set__Sym_2(L_45);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_46 = V_3;
		NullCheck(L_46);
		L_46->set__Onext_3((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_47 = V_3;
		NullCheck(L_47);
		L_47->set__Lnext_4((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_48 = V_3;
		NullCheck(L_48);
		L_48->set__Org_5((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_49 = V_3;
		NullCheck(L_49);
		L_49->set__Lface_6((Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_50 = V_3;
		NullCheck(L_50);
		L_50->set__winding_8(0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_51 = V_3;
		NullCheck(L_51);
		L_51->set__activeRegion_7((ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)NULL);
		return;
	}
}
// System.Void LibTessDotNet.Mesh::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Reset_mEB718C901034CCB11E68F265870408292BD5C5C7 (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Mesh_Reset_mEB718C901034CCB11E68F265870408292BD5C5C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_0 = NULL;
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_1 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_2 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_3 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_4 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_5 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_6 = NULL;
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_0 = __this->get__fHead_1();
		V_0 = L_0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_1 = __this->get__fHead_1();
		V_1 = L_1;
		goto IL_0020;
	}

IL_0010:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_2 = V_0;
		NullCheck(L_2);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_3 = L_2->get__next_1();
		V_1 = L_3;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_4 = ___pool0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_5 = V_0;
		NullCheck(L_4);
		GenericVirtActionInvoker1< Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * >::Invoke(IPool_Return_TisFace_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276_m22D89B76B2D06473391A34351235D6B8E56B0408_RuntimeMethod_var, L_4, L_5);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_6 = V_1;
		V_0 = L_6;
	}

IL_0020:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_7 = V_0;
		NullCheck(L_7);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_8 = L_7->get__next_1();
		if (L_8)
		{
			goto IL_0010;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = __this->get__vHead_0();
		V_2 = L_9;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = __this->get__vHead_0();
		V_3 = L_10;
		goto IL_0048;
	}

IL_0038:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_11 = V_2;
		NullCheck(L_11);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = L_11->get__next_1();
		V_3 = L_12;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_13 = ___pool0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = V_2;
		NullCheck(L_13);
		GenericVirtActionInvoker1< Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * >::Invoke(IPool_Return_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_m3D509F9B1C89493E6305C273107A312B795A5D3C_RuntimeMethod_var, L_13, L_14);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_15 = V_3;
		V_2 = L_15;
	}

IL_0048:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = V_2;
		NullCheck(L_16);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_17 = L_16->get__next_1();
		if (L_17)
		{
			goto IL_0038;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = __this->get__eHead_2();
		V_4 = L_18;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = __this->get__eHead_2();
		V_5 = L_19;
		goto IL_0084;
	}

IL_0062:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = V_4;
		NullCheck(L_20);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_21 = L_20->get__next_1();
		V_5 = L_21;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_22 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_23 = V_4;
		NullCheck(L_23);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_24 = L_23->get__Sym_2();
		NullCheck(L_22);
		GenericVirtActionInvoker1< Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * >::Invoke(IPool_Return_TisEdge_t9D4BFE9716279C9D930CB20420750F7746432102_m66B90B909C42B8A0FFC35AE2EA263256713A863E_RuntimeMethod_var, L_22, L_24);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_25 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = V_4;
		NullCheck(L_25);
		GenericVirtActionInvoker1< Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * >::Invoke(IPool_Return_TisEdge_t9D4BFE9716279C9D930CB20420750F7746432102_m66B90B909C42B8A0FFC35AE2EA263256713A863E_RuntimeMethod_var, L_25, L_26);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_27 = V_5;
		V_4 = L_27;
	}

IL_0084:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_28 = V_4;
		NullCheck(L_28);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = L_28->get__next_1();
		if (L_29)
		{
			goto IL_0062;
		}
	}
	{
		__this->set__vHead_0((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)NULL);
		__this->set__fHead_1((Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)NULL);
		V_6 = (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL;
		__this->set__eHeadSym_3((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = V_6;
		__this->set__eHead_2(L_30);
		return;
	}
}
// LibTessDotNet.MeshUtils_Edge LibTessDotNet.Mesh::MakeEdge(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Mesh_MakeEdge_m4241A4DBE65EF0587002E3EEFE1EC895E474E577 (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_0 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = __this->get__eHead_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = MeshUtils_MakeEdge_mDE697E813CBFEC5A6EFB04AB42AD57F3C8011845(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_3 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = V_0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_5 = __this->get__vHead_0();
		MeshUtils_MakeVertex_m5A6351006D5298989664DC3EA05E6F1C1A7E306A(L_3, L_4, L_5, /*hidden argument*/NULL);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_6 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = V_0;
		NullCheck(L_7);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = L_7->get__Sym_2();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = __this->get__vHead_0();
		MeshUtils_MakeVertex_m5A6351006D5298989664DC3EA05E6F1C1A7E306A(L_6, L_8, L_9, /*hidden argument*/NULL);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_10 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = V_0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_12 = __this->get__fHead_1();
		MeshUtils_MakeFace_mE45C0465345A0B69A2B26FACAF19A0281290A44B(L_10, L_11, L_12, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_0;
		return L_13;
	}
}
// System.Void LibTessDotNet.Mesh::Splice(LibTessDotNet.IPool,LibTessDotNet.MeshUtils_Edge,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eOrg1, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eDst2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = ___eOrg1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = ___eDst2;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_0) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_1))))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		V_0 = (bool)0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = ___eDst2;
		NullCheck(L_2);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_3 = L_2->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = ___eOrg1;
		NullCheck(L_4);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_5 = L_4->get__Org_5();
		if ((((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_3) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		V_0 = (bool)1;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_6 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = ___eDst2;
		NullCheck(L_7);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = L_7->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = ___eOrg1;
		NullCheck(L_9);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = L_9->get__Org_5();
		MeshUtils_KillVertex_m3A191FEBF0F2FEE809D780EF45B9894211AFCB54(L_6, L_8, L_10, /*hidden argument*/NULL);
	}

IL_0029:
	{
		V_1 = (bool)0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = ___eDst2;
		NullCheck(L_11);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_12 = L_11->get__Lface_6();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = ___eOrg1;
		NullCheck(L_13);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_14 = L_13->get__Lface_6();
		if ((((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_12) == ((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_14)))
		{
			goto IL_004d;
		}
	}
	{
		V_1 = (bool)1;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_15 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_16 = ___eDst2;
		NullCheck(L_16);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_17 = L_16->get__Lface_6();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = ___eOrg1;
		NullCheck(L_18);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_19 = L_18->get__Lface_6();
		MeshUtils_KillFace_mE461E76A0ED7A6E34CDBAB8D55BA4F8C5B867060(L_15, L_17, L_19, /*hidden argument*/NULL);
	}

IL_004d:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = ___eDst2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_21 = ___eOrg1;
		MeshUtils_Splice_m37CE6888422DC2458C5DEE34AAE80ABEC8C74DA4(L_20, L_21, /*hidden argument*/NULL);
		bool L_22 = V_0;
		if (L_22)
		{
			goto IL_0070;
		}
	}
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_23 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_24 = ___eDst2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = ___eOrg1;
		NullCheck(L_25);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_26 = L_25->get__Org_5();
		MeshUtils_MakeVertex_m5A6351006D5298989664DC3EA05E6F1C1A7E306A(L_23, L_24, L_26, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_27 = ___eOrg1;
		NullCheck(L_27);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_28 = L_27->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = ___eOrg1;
		NullCheck(L_28);
		L_28->set__anEdge_2(L_29);
	}

IL_0070:
	{
		bool L_30 = V_1;
		if (L_30)
		{
			goto IL_008c;
		}
	}
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_31 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_32 = ___eDst2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_33 = ___eOrg1;
		NullCheck(L_33);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_34 = L_33->get__Lface_6();
		MeshUtils_MakeFace_mE45C0465345A0B69A2B26FACAF19A0281290A44B(L_31, L_32, L_34, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_35 = ___eOrg1;
		NullCheck(L_35);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_36 = L_35->get__Lface_6();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_37 = ___eOrg1;
		NullCheck(L_36);
		L_36->set__anEdge_2(L_37);
	}

IL_008c:
	{
		return;
	}
}
// System.Void LibTessDotNet.Mesh::Delete(LibTessDotNet.IPool,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569 (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eDel1, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	bool V_1 = false;
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = ___eDel1;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__Sym_2();
		V_0 = L_1;
		V_1 = (bool)0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = ___eDel1;
		NullCheck(L_2);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_3 = L_2->get__Lface_6();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = ___eDel1;
		NullCheck(L_4);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_5 = Edge_get__Rface_m27BE789A7B47E8D04DDDA64B466C956C770C39D1(L_4, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_3) == ((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		V_1 = (bool)1;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_6 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = ___eDel1;
		NullCheck(L_7);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_8 = L_7->get__Lface_6();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = ___eDel1;
		NullCheck(L_9);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_10 = Edge_get__Rface_m27BE789A7B47E8D04DDDA64B466C956C770C39D1(L_9, /*hidden argument*/NULL);
		MeshUtils_KillFace_mE461E76A0ED7A6E34CDBAB8D55BA4F8C5B867060(L_6, L_8, L_10, /*hidden argument*/NULL);
	}

IL_002b:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = ___eDel1;
		NullCheck(L_11);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = L_11->get__Onext_3();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = ___eDel1;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_12) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_13))))
		{
			goto IL_0043;
		}
	}
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_14 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = ___eDel1;
		NullCheck(L_15);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = L_15->get__Org_5();
		MeshUtils_KillVertex_m3A191FEBF0F2FEE809D780EF45B9894211AFCB54(L_14, L_16, (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)NULL, /*hidden argument*/NULL);
		goto IL_0081;
	}

IL_0043:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = ___eDel1;
		NullCheck(L_17);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_18 = Edge_get__Rface_m27BE789A7B47E8D04DDDA64B466C956C770C39D1(L_17, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = ___eDel1;
		NullCheck(L_19);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set__anEdge_2(L_20);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_21 = ___eDel1;
		NullCheck(L_21);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_22 = L_21->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_23 = ___eDel1;
		NullCheck(L_23);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_24 = L_23->get__Onext_3();
		NullCheck(L_22);
		L_22->set__anEdge_2(L_24);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = ___eDel1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = ___eDel1;
		NullCheck(L_26);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_27 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_26, /*hidden argument*/NULL);
		MeshUtils_Splice_m37CE6888422DC2458C5DEE34AAE80ABEC8C74DA4(L_25, L_27, /*hidden argument*/NULL);
		bool L_28 = V_1;
		if (L_28)
		{
			goto IL_0081;
		}
	}
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_29 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = ___eDel1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_31 = ___eDel1;
		NullCheck(L_31);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_32 = L_31->get__Lface_6();
		MeshUtils_MakeFace_mE45C0465345A0B69A2B26FACAF19A0281290A44B(L_29, L_30, L_32, /*hidden argument*/NULL);
	}

IL_0081:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_33 = V_0;
		NullCheck(L_33);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_34 = L_33->get__Onext_3();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_35 = V_0;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_34) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_35))))
		{
			goto IL_00a6;
		}
	}
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_36 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_37 = V_0;
		NullCheck(L_37);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_38 = L_37->get__Org_5();
		MeshUtils_KillVertex_m3A191FEBF0F2FEE809D780EF45B9894211AFCB54(L_36, L_38, (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)NULL, /*hidden argument*/NULL);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_39 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_40 = V_0;
		NullCheck(L_40);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_41 = L_40->get__Lface_6();
		MeshUtils_KillFace_mE461E76A0ED7A6E34CDBAB8D55BA4F8C5B867060(L_39, L_41, (Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)NULL, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00a6:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_42 = ___eDel1;
		NullCheck(L_42);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_43 = L_42->get__Lface_6();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_44 = V_0;
		NullCheck(L_44);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_45 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		L_43->set__anEdge_2(L_45);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_46 = V_0;
		NullCheck(L_46);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_47 = L_46->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_48 = V_0;
		NullCheck(L_48);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_49 = L_48->get__Onext_3();
		NullCheck(L_47);
		L_47->set__anEdge_2(L_49);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_50 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_51 = V_0;
		NullCheck(L_51);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_52 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_51, /*hidden argument*/NULL);
		MeshUtils_Splice_m37CE6888422DC2458C5DEE34AAE80ABEC8C74DA4(L_50, L_52, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_53 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_54 = ___eDel1;
		MeshUtils_KillEdge_m85A8A08CF38CEB4F71A19C422DE8030AFE964CD6(L_53, L_54, /*hidden argument*/NULL);
		return;
	}
}
// LibTessDotNet.MeshUtils_Edge LibTessDotNet.Mesh::AddEdgeVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Mesh_AddEdgeVertex_mF711F650D48C663C402421D32AF619D69D65582B (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eOrg1, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_2 = NULL;
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_0 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = ___eOrg1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = MeshUtils_MakeEdge_mDE697E813CBFEC5A6EFB04AB42AD57F3C8011845(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = V_0;
		NullCheck(L_3);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = L_3->get__Sym_2();
		V_1 = L_4;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = ___eOrg1;
		NullCheck(L_6);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = L_6->get__Lnext_4();
		MeshUtils_Splice_m37CE6888422DC2458C5DEE34AAE80ABEC8C74DA4(L_5, L_7, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = ___eOrg1;
		NullCheck(L_9);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set__Org_5(L_10);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_11 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_0;
		NullCheck(L_13);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = L_13->get__Org_5();
		MeshUtils_MakeVertex_m5A6351006D5298989664DC3EA05E6F1C1A7E306A(L_11, L_12, L_14, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_16 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = ___eOrg1;
		NullCheck(L_17);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_18 = L_17->get__Lface_6();
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_19 = L_18;
		V_2 = L_19;
		NullCheck(L_16);
		L_16->set__Lface_6(L_19);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_20 = V_2;
		NullCheck(L_15);
		L_15->set__Lface_6(L_20);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_21 = V_0;
		return L_21;
	}
}
// LibTessDotNet.MeshUtils_Edge LibTessDotNet.Mesh::SplitEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eOrg1, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_0 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = ___eOrg1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = Mesh_AddEdgeVertex_mF711F650D48C663C402421D32AF619D69D65582B(__this, L_0, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2->get__Sym_2();
		V_0 = L_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = ___eOrg1;
		NullCheck(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = ___eOrg1;
		NullCheck(L_6);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = L_6->get__Sym_2();
		NullCheck(L_7);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_7, /*hidden argument*/NULL);
		MeshUtils_Splice_m37CE6888422DC2458C5DEE34AAE80ABEC8C74DA4(L_5, L_8, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = ___eOrg1;
		NullCheck(L_9);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = L_9->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = V_0;
		MeshUtils_Splice_m37CE6888422DC2458C5DEE34AAE80ABEC8C74DA4(L_10, L_11, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = ___eOrg1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_0;
		NullCheck(L_13);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = L_13->get__Org_5();
		NullCheck(L_12);
		Edge_set__Dst_mA39354A7258C1E037A54F35F6C4B5310E39E5E24(L_12, L_14, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = V_0;
		NullCheck(L_15);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_15, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = V_0;
		NullCheck(L_17);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = L_17->get__Sym_2();
		NullCheck(L_16);
		L_16->set__anEdge_2(L_18);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = ___eOrg1;
		NullCheck(L_20);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_21 = Edge_get__Rface_m27BE789A7B47E8D04DDDA64B466C956C770C39D1(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Edge_set__Rface_m1B5F208FAD40A4A72F6C6F8CEE1F249DE336D8A5(L_19, L_21, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_23 = ___eOrg1;
		NullCheck(L_23);
		int32_t L_24 = L_23->get__winding_8();
		NullCheck(L_22);
		L_22->set__winding_8(L_24);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = V_0;
		NullCheck(L_25);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = L_25->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_27 = ___eOrg1;
		NullCheck(L_27);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_28 = L_27->get__Sym_2();
		NullCheck(L_28);
		int32_t L_29 = L_28->get__winding_8();
		NullCheck(L_26);
		L_26->set__winding_8(L_29);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = V_0;
		return L_30;
	}
}
// LibTessDotNet.MeshUtils_Edge LibTessDotNet.Mesh::Connect(LibTessDotNet.IPool,LibTessDotNet.MeshUtils_Edge,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Mesh_Connect_mBBFA4558B503ABE38484323A12968B1FA40A4C34 (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eOrg1, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eDst2, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	bool V_2 = false;
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_3 = NULL;
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_0 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = ___eOrg1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = MeshUtils_MakeEdge_mDE697E813CBFEC5A6EFB04AB42AD57F3C8011845(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = V_0;
		NullCheck(L_3);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = L_3->get__Sym_2();
		V_1 = L_4;
		V_2 = (bool)0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = ___eDst2;
		NullCheck(L_5);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_6 = L_5->get__Lface_6();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = ___eOrg1;
		NullCheck(L_7);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_8 = L_7->get__Lface_6();
		if ((((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_6) == ((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_8)))
		{
			goto IL_0033;
		}
	}
	{
		V_2 = (bool)1;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_9 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = ___eDst2;
		NullCheck(L_10);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_11 = L_10->get__Lface_6();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = ___eOrg1;
		NullCheck(L_12);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_13 = L_12->get__Lface_6();
		MeshUtils_KillFace_mE461E76A0ED7A6E34CDBAB8D55BA4F8C5B867060(L_9, L_11, L_13, /*hidden argument*/NULL);
	}

IL_0033:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_14 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = ___eOrg1;
		NullCheck(L_15);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_16 = L_15->get__Lnext_4();
		MeshUtils_Splice_m37CE6888422DC2458C5DEE34AAE80ABEC8C74DA4(L_14, L_16, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = ___eDst2;
		MeshUtils_Splice_m37CE6888422DC2458C5DEE34AAE80ABEC8C74DA4(L_17, L_18, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = ___eOrg1;
		NullCheck(L_20);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->set__Org_5(L_21);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_23 = ___eDst2;
		NullCheck(L_23);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_24 = L_23->get__Org_5();
		NullCheck(L_22);
		L_22->set__Org_5(L_24);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_27 = ___eOrg1;
		NullCheck(L_27);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_28 = L_27->get__Lface_6();
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_29 = L_28;
		V_3 = L_29;
		NullCheck(L_26);
		L_26->set__Lface_6(L_29);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_30 = V_3;
		NullCheck(L_25);
		L_25->set__Lface_6(L_30);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_31 = ___eOrg1;
		NullCheck(L_31);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_32 = L_31->get__Lface_6();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_33 = V_1;
		NullCheck(L_32);
		L_32->set__anEdge_2(L_33);
		bool L_34 = V_2;
		if (L_34)
		{
			goto IL_008f;
		}
	}
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_35 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_36 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_37 = ___eOrg1;
		NullCheck(L_37);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_38 = L_37->get__Lface_6();
		MeshUtils_MakeFace_mE45C0465345A0B69A2B26FACAF19A0281290A44B(L_35, L_36, L_38, /*hidden argument*/NULL);
	}

IL_008f:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_39 = V_0;
		return L_39;
	}
}
// System.Void LibTessDotNet.Mesh::MergeConvexFaces(LibTessDotNet.IPool,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m99AA9DF2F2272AADEBE96EC5AC94A325B7CDB8CC (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, int32_t ___maxVertsPerFace1, const RuntimeMethod* method)
{
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_2 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_3 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_4 = NULL;
	int32_t V_5 = 0;
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_0 = __this->get__fHead_1();
		NullCheck(L_0);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_1 = L_0->get__next_1();
		V_0 = L_1;
		goto IL_00fe;
	}

IL_0011:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get__inside_6();
		if (!L_3)
		{
			goto IL_00f7;
		}
	}
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_4 = V_0;
		NullCheck(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4->get__anEdge_2();
		V_1 = L_5;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = V_1;
		NullCheck(L_6);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = L_6->get__Org_5();
		V_2 = L_7;
	}

IL_002a:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_1;
		NullCheck(L_8);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = L_8->get__Lnext_4();
		V_3 = L_9;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = V_1;
		NullCheck(L_10);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = L_10->get__Sym_2();
		V_4 = L_11;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = V_4;
		if (!L_12)
		{
			goto IL_00df;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_4;
		NullCheck(L_13);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_14 = L_13->get__Lface_6();
		if (!L_14)
		{
			goto IL_00df;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = V_4;
		NullCheck(L_15);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_16 = L_15->get__Lface_6();
		NullCheck(L_16);
		bool L_17 = L_16->get__inside_6();
		if (!L_17)
		{
			goto IL_00df;
		}
	}
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = Face_get_VertsCount_m7DE0ED955234E1970177565F2D2562DEDD6D572B(L_18, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = V_4;
		NullCheck(L_20);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_21 = L_20->get__Lface_6();
		NullCheck(L_21);
		int32_t L_22 = Face_get_VertsCount_m7DE0ED955234E1970177565F2D2562DEDD6D572B(L_21, /*hidden argument*/NULL);
		V_5 = L_22;
		int32_t L_23 = V_5;
		int32_t L_24 = ___maxVertsPerFace1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_23)), (int32_t)2))) > ((int32_t)L_24)))
		{
			goto IL_00df;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = V_1;
		NullCheck(L_25);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = Edge_get__Lprev_mAB87D419866AD8C3D304903083077126026F5642(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_27 = L_26->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_28 = V_1;
		NullCheck(L_28);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_29 = L_28->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = V_4;
		NullCheck(L_30);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_31 = L_30->get__Lnext_4();
		NullCheck(L_31);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_32 = L_31->get__Lnext_4();
		NullCheck(L_32);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_33 = L_32->get__Org_5();
		bool L_34 = Geom_VertCCW_m02493F37D3AC4A9973B1A345015151E603661FDC(L_27, L_29, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00df;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_35 = V_4;
		NullCheck(L_35);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_36 = Edge_get__Lprev_mAB87D419866AD8C3D304903083077126026F5642(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_37 = L_36->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_38 = V_4;
		NullCheck(L_38);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_39 = L_38->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_40 = V_1;
		NullCheck(L_40);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_41 = L_40->get__Lnext_4();
		NullCheck(L_41);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_42 = L_41->get__Lnext_4();
		NullCheck(L_42);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_43 = L_42->get__Org_5();
		bool L_44 = Geom_VertCCW_m02493F37D3AC4A9973B1A345015151E603661FDC(L_37, L_39, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00df;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_45 = V_4;
		NullCheck(L_45);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_46 = L_45->get__Lnext_4();
		V_3 = L_46;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_47 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_48 = V_4;
		Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569(__this, L_47, L_48, /*hidden argument*/NULL);
		V_1 = (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL;
	}

IL_00df:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_49 = V_1;
		if (!L_49)
		{
			goto IL_00f0;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_50 = V_1;
		NullCheck(L_50);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_51 = L_50->get__Lnext_4();
		NullCheck(L_51);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_52 = L_51->get__Org_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_53 = V_2;
		if ((((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_52) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_53)))
		{
			goto IL_00f7;
		}
	}

IL_00f0:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_54 = V_3;
		V_1 = L_54;
		goto IL_002a;
	}

IL_00f7:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_55 = V_0;
		NullCheck(L_55);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_56 = L_55->get__next_1();
		V_0 = L_56;
	}

IL_00fe:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_57 = V_0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_58 = __this->get__fHead_1();
		if ((!(((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_57) == ((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_58))))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m895BD63A170D5EB895DC916B3993FF2A259F0FBF (Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * __this, const RuntimeMethod* method)
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
// System.Void LibTessDotNet.MeshUtils::Splice(LibTessDotNet.MeshUtils_Edge,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m37CE6888422DC2458C5DEE34AAE80ABEC8C74DA4 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___a0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___b1, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = ___a0;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__Onext_3();
		V_0 = L_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = ___b1;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2->get__Onext_3();
		V_1 = L_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = V_0;
		NullCheck(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = ___b1;
		NullCheck(L_5);
		L_5->set__Lnext_4(L_6);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = V_1;
		NullCheck(L_7);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = L_7->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = ___a0;
		NullCheck(L_8);
		L_8->set__Lnext_4(L_9);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = ___a0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = V_1;
		NullCheck(L_10);
		L_10->set__Onext_3(L_11);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = ___b1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_0;
		NullCheck(L_12);
		L_12->set__Onext_3(L_13);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils::MakeVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils_Edge,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m5A6351006D5298989664DC3EA05E6F1C1A7E306A (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eOrig1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___vNext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshUtils_MakeVertex_m5A6351006D5298989664DC3EA05E6F1C1A7E306A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_0 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_0 = ___pool0;
		NullCheck(L_0);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = GenericVirtFuncInvoker0< Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * >::Invoke(IPool_Get_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_mEF84A2B4985A18A163D1A914B0490F483E8476CC_RuntimeMethod_var, L_0);
		V_0 = L_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = ___vNext2;
		NullCheck(L_2);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_3 = L_2->get__prev_0();
		V_1 = L_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = V_0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_5 = V_1;
		NullCheck(L_4);
		L_4->set__prev_0(L_5);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = V_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = V_0;
		NullCheck(L_6);
		L_6->set__next_1(L_7);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = V_0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = ___vNext2;
		NullCheck(L_8);
		L_8->set__next_1(L_9);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = ___vNext2;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_11 = V_0;
		NullCheck(L_10);
		L_10->set__prev_0(L_11);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = ___eOrig1;
		NullCheck(L_12);
		L_12->set__anEdge_2(L_13);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_14 = ___eOrig1;
		V_2 = L_14;
	}

IL_0033:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = V_2;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = V_0;
		NullCheck(L_15);
		L_15->set__Org_5(L_16);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = V_2;
		NullCheck(L_17);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = L_17->get__Onext_3();
		V_2 = L_18;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = V_2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = ___eOrig1;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_19) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_20))))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils::MakeFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils_Edge,LibTessDotNet.MeshUtils_Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_mE45C0465345A0B69A2B26FACAF19A0281290A44B (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eOrig1, Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ___fNext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshUtils_MakeFace_mE45C0465345A0B69A2B26FACAF19A0281290A44B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_0 = NULL;
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_0 = ___pool0;
		NullCheck(L_0);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_1 = GenericVirtFuncInvoker0< Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * >::Invoke(IPool_Get_TisFace_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276_m052001B17D64C24B48D22AC88ACD937F0D7D6D9D_RuntimeMethod_var, L_0);
		V_0 = L_1;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_2 = ___fNext2;
		NullCheck(L_2);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_3 = L_2->get__prev_0();
		V_1 = L_3;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_4 = V_0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_5 = V_1;
		NullCheck(L_4);
		L_4->set__prev_0(L_5);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_6 = V_1;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_7 = V_0;
		NullCheck(L_6);
		L_6->set__next_1(L_7);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_8 = V_0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_9 = ___fNext2;
		NullCheck(L_8);
		L_8->set__next_1(L_9);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_10 = ___fNext2;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_11 = V_0;
		NullCheck(L_10);
		L_10->set__prev_0(L_11);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_12 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = ___eOrig1;
		NullCheck(L_12);
		L_12->set__anEdge_2(L_13);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_14 = V_0;
		NullCheck(L_14);
		L_14->set__trail_3((Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)NULL);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_15 = V_0;
		NullCheck(L_15);
		L_15->set__marked_5((bool)0);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_16 = V_0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_17 = ___fNext2;
		NullCheck(L_17);
		bool L_18 = L_17->get__inside_6();
		NullCheck(L_16);
		L_16->set__inside_6(L_18);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = ___eOrig1;
		V_2 = L_19;
	}

IL_004d:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = V_2;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_21 = V_0;
		NullCheck(L_20);
		L_20->set__Lface_6(L_21);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_2;
		NullCheck(L_22);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_23 = L_22->get__Lnext_4();
		V_2 = L_23;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_24 = V_2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = ___eOrig1;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_24) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_25))))
		{
			goto IL_004d;
		}
	}
	{
		return;
	}
}
// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils::MakeEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * MeshUtils_MakeEdge_mDE697E813CBFEC5A6EFB04AB42AD57F3C8011845 (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eNext1, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_0 = ___pool0;
		EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  L_1 = EdgePair_Create_m00433F031D09C6877542ED045F7219DD47FB4DD8(L_0, /*hidden argument*/NULL);
		EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  L_2 = L_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2.get__e_0();
		V_0 = L_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = L_2.get__eSym_1();
		V_1 = L_4;
		Edge_EnsureFirst_m2DB71A999B595D57E91343D9CAF8FC2DABE04D86((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 **)(&___eNext1), /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = ___eNext1;
		NullCheck(L_5);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = L_5->get__Sym_2();
		NullCheck(L_6);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = L_6->get__next_1();
		V_2 = L_7;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = V_2;
		NullCheck(L_8);
		L_8->set__next_1(L_9);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = V_2;
		NullCheck(L_10);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = L_10->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = V_0;
		NullCheck(L_11);
		L_11->set__next_1(L_12);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_14 = ___eNext1;
		NullCheck(L_13);
		L_13->set__next_1(L_14);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = ___eNext1;
		NullCheck(L_15);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_16 = L_15->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = V_1;
		NullCheck(L_16);
		L_16->set__next_1(L_17);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = V_1;
		NullCheck(L_18);
		L_18->set__Sym_2(L_19);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_21 = V_0;
		NullCheck(L_20);
		L_20->set__Onext_3(L_21);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_23 = V_1;
		NullCheck(L_22);
		L_22->set__Lnext_4(L_23);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_24 = V_0;
		NullCheck(L_24);
		L_24->set__Org_5((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = V_0;
		NullCheck(L_25);
		L_25->set__Lface_6((Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = V_0;
		NullCheck(L_26);
		L_26->set__winding_8(0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_27 = V_0;
		NullCheck(L_27);
		L_27->set__activeRegion_7((ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_28 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = V_0;
		NullCheck(L_28);
		L_28->set__Sym_2(L_29);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_31 = V_1;
		NullCheck(L_30);
		L_30->set__Onext_3(L_31);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_32 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_33 = V_0;
		NullCheck(L_32);
		L_32->set__Lnext_4(L_33);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_34 = V_1;
		NullCheck(L_34);
		L_34->set__Org_5((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_35 = V_1;
		NullCheck(L_35);
		L_35->set__Lface_6((Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_36 = V_1;
		NullCheck(L_36);
		L_36->set__winding_8(0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_37 = V_1;
		NullCheck(L_37);
		L_37->set__activeRegion_7((ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_38 = V_0;
		return L_38;
	}
}
// System.Void LibTessDotNet.MeshUtils::KillEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_m85A8A08CF38CEB4F71A19C422DE8030AFE964CD6 (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eDel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshUtils_KillEdge_m85A8A08CF38CEB4F71A19C422DE8030AFE964CD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	{
		Edge_EnsureFirst_m2DB71A999B595D57E91343D9CAF8FC2DABE04D86((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 **)(&___eDel1), /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = ___eDel1;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__next_1();
		V_0 = L_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = ___eDel1;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2->get__Sym_2();
		NullCheck(L_3);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = L_3->get__next_1();
		V_1 = L_4;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = V_0;
		NullCheck(L_5);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = L_5->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = V_1;
		NullCheck(L_6);
		L_6->set__next_1(L_7);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_1;
		NullCheck(L_8);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = L_8->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = V_0;
		NullCheck(L_9);
		L_9->set__next_1(L_10);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_11 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = ___eDel1;
		NullCheck(L_12);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = L_12->get__Sym_2();
		NullCheck(L_11);
		GenericVirtActionInvoker1< Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * >::Invoke(IPool_Return_TisEdge_t9D4BFE9716279C9D930CB20420750F7746432102_m66B90B909C42B8A0FFC35AE2EA263256713A863E_RuntimeMethod_var, L_11, L_13);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_14 = ___pool0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = ___eDel1;
		NullCheck(L_14);
		GenericVirtActionInvoker1< Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * >::Invoke(IPool_Return_TisEdge_t9D4BFE9716279C9D930CB20420750F7746432102_m66B90B909C42B8A0FFC35AE2EA263256713A863E_RuntimeMethod_var, L_14, L_15);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils::KillVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_m3A191FEBF0F2FEE809D780EF45B9894211AFCB54 (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___vDel1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___newOrg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshUtils_KillVertex_m3A191FEBF0F2FEE809D780EF45B9894211AFCB54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_2 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_3 = NULL;
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___vDel1;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__anEdge_2();
		V_0 = L_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = V_0;
		V_1 = L_2;
	}

IL_0009:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = V_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___newOrg2;
		NullCheck(L_3);
		L_3->set__Org_5(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = V_1;
		NullCheck(L_5);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = L_5->get__Onext_3();
		V_1 = L_6;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_0;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_7) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_8))))
		{
			goto IL_0009;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = ___vDel1;
		NullCheck(L_9);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = L_9->get__prev_0();
		V_2 = L_10;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_11 = ___vDel1;
		NullCheck(L_11);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = L_11->get__next_1();
		V_3 = L_12;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_13 = V_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = V_2;
		NullCheck(L_13);
		L_13->set__prev_0(L_14);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_15 = V_2;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = V_3;
		NullCheck(L_15);
		L_15->set__next_1(L_16);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_17 = ___pool0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_18 = ___vDel1;
		NullCheck(L_17);
		GenericVirtActionInvoker1< Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * >::Invoke(IPool_Return_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_m3D509F9B1C89493E6305C273107A312B795A5D3C_RuntimeMethod_var, L_17, L_18);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils::KillFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils_Face,LibTessDotNet.MeshUtils_Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_mE461E76A0ED7A6E34CDBAB8D55BA4F8C5B867060 (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ___fDel1, Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ___newLFace2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshUtils_KillFace_mE461E76A0ED7A6E34CDBAB8D55BA4F8C5B867060_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_2 = NULL;
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_3 = NULL;
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_0 = ___fDel1;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__anEdge_2();
		V_0 = L_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = V_0;
		V_1 = L_2;
	}

IL_0009:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = V_1;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_4 = ___newLFace2;
		NullCheck(L_3);
		L_3->set__Lface_6(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = V_1;
		NullCheck(L_5);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = L_5->get__Lnext_4();
		V_1 = L_6;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_0;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_7) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_8))))
		{
			goto IL_0009;
		}
	}
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_9 = ___fDel1;
		NullCheck(L_9);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_10 = L_9->get__prev_0();
		V_2 = L_10;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_11 = ___fDel1;
		NullCheck(L_11);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_12 = L_11->get__next_1();
		V_3 = L_12;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_13 = V_3;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_14 = V_2;
		NullCheck(L_13);
		L_13->set__prev_0(L_14);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_15 = V_2;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_16 = V_3;
		NullCheck(L_15);
		L_15->set__next_1(L_16);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_17 = ___pool0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_18 = ___fDel1;
		NullCheck(L_17);
		GenericVirtActionInvoker1< Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * >::Invoke(IPool_Return_TisFace_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276_m22D89B76B2D06473391A34351235D6B8E56B0408_RuntimeMethod_var, L_17, L_18);
		return;
	}
}
// System.Single LibTessDotNet.MeshUtils::FaceArea(LibTessDotNet.MeshUtils_Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_m17D83B419A8B8B7E240207B87CCE05F9A80B7B5F (Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ___f0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	{
		V_0 = (0.0f);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_0 = ___f0;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__anEdge_2();
		V_1 = L_1;
	}

IL_000d:
	{
		float L_2 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = V_1;
		NullCheck(L_3);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = L_3->get__Org_5();
		NullCheck(L_4);
		float L_5 = L_4->get__s_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = V_1;
		NullCheck(L_6);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		float L_8 = L_7->get__s_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = V_1;
		NullCheck(L_9);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = L_9->get__Org_5();
		NullCheck(L_10);
		float L_11 = L_10->get__t_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = V_1;
		NullCheck(L_12);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_13 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		float L_14 = L_13->get__t_5();
		V_0 = ((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_8)), (float)((float)il2cpp_codegen_add((float)L_11, (float)L_14))))));
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = V_1;
		NullCheck(L_15);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_16 = L_15->get__Lnext_4();
		V_1 = L_16;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = V_1;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_18 = ___f0;
		NullCheck(L_18);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = L_18->get__anEdge_2();
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_17) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_19))))
		{
			goto IL_000d;
		}
	}
	{
		float L_20 = V_0;
		return L_20;
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
// LibTessDotNet.MeshUtils_Face LibTessDotNet.MeshUtils_Edge::get__Rface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * Edge_get__Rface_m27BE789A7B47E8D04DDDA64B466C956C770C39D1 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = __this->get__Sym_2();
		NullCheck(L_0);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_1 = L_0->get__Lface_6();
		return L_1;
	}
}
// System.Void LibTessDotNet.MeshUtils_Edge::set__Rface(LibTessDotNet.MeshUtils_Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m1B5F208FAD40A4A72F6C6F8CEE1F249DE336D8A5 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ___value0, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = __this->get__Sym_2();
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_1 = ___value0;
		NullCheck(L_0);
		L_0->set__Lface_6(L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils_Vertex LibTessDotNet.MeshUtils_Edge::get__Dst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = __this->get__Sym_2();
		NullCheck(L_0);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = L_0->get__Org_5();
		return L_1;
	}
}
// System.Void LibTessDotNet.MeshUtils_Edge::set__Dst(LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_mA39354A7258C1E037A54F35F6C4B5310E39E5E24 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___value0, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = __this->get__Sym_2();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = ___value0;
		NullCheck(L_0);
		L_0->set__Org_5(L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils_Edge::get__Oprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = __this->get__Sym_2();
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__Lnext_4();
		return L_1;
	}
}
// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils_Edge::get__Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Edge_get__Lprev_mAB87D419866AD8C3D304903083077126026F5642 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = __this->get__Onext_3();
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__Sym_2();
		return L_1;
	}
}
// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils_Edge::get__Rprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Edge_get__Rprev_mA3AA832BCF164B37CEDF698849502C834D5E65BE (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = __this->get__Sym_2();
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__Onext_3();
		return L_1;
	}
}
// LibTessDotNet.MeshUtils_Edge LibTessDotNet.MeshUtils_Edge::get__Dnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Edge_get__Dnext_mBD1F7F0FEF80A7ABD27020BD6A25E20DEA19B127 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = Edge_get__Rprev_mA3AA832BCF164B37CEDF698849502C834D5E65BE(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__Sym_2();
		return L_1;
	}
}
// System.Void LibTessDotNet.MeshUtils_Edge::EnsureFirst(LibTessDotNet.MeshUtils_Edge&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_m2DB71A999B595D57E91343D9CAF8FC2DABE04D86 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** ___e0, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** L_0 = ___e0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = *((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 **)L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** L_2 = ___e0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = *((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 **)L_2);
		NullCheck(L_3);
		EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98 * L_4 = L_3->get_address_of__pair_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4->get__eSym_1();
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_1) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_5))))
		{
			goto IL_0019;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** L_6 = ___e0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 ** L_7 = ___e0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = *((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 **)L_7);
		NullCheck(L_8);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = L_8->get__Sym_2();
		*((RuntimeObject **)L_6) = (RuntimeObject *)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)L_9);
	}

IL_0019:
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils_Edge::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Init_mE98781C928402E00295C022E9FD7FC12CD3646AC (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils_Edge::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Reset_mF479BB65A7F74704E6C3297CCA0F1D0FA0B61631 (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	{
		EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98 * L_0 = __this->get_address_of__pair_0();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_1 = ___pool0;
		EdgePair_Reset_mAC360A156F30809DF4E0A6286DDBDB3DC6DEE9D2((EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98 *)L_0, L_1, /*hidden argument*/NULL);
		V_0 = (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL;
		__this->set__Lnext_4((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2;
		V_0 = L_3;
		__this->set__Onext_3(L_3);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4;
		V_0 = L_5;
		__this->set__Sym_2(L_5);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = V_0;
		__this->set__next_1(L_6);
		__this->set__Org_5((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)NULL);
		__this->set__Lface_6((Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)NULL);
		__this->set__activeRegion_7((ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)NULL);
		__this->set__winding_8(0);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils_Edge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge__ctor_m9F0895507CFE7C9C912B41E9D883A77BD370D14C (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshal_pinvoke(const EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98& unmarshaled, EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshaled_pinvoke& marshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
IL2CPP_EXTERN_C void EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshal_pinvoke_back(const EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshaled_pinvoke& marshaled, EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98& unmarshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshal_pinvoke_cleanup(EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshal_com(const EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98& unmarshaled, EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshaled_com& marshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
IL2CPP_EXTERN_C void EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshal_com_back(const EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshaled_com& marshaled, EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98& unmarshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshal_com_cleanup(EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98_marshaled_com& marshaled)
{
}
// LibTessDotNet.MeshUtils_EdgePair LibTessDotNet.MeshUtils_EdgePair::Create(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  EdgePair_Create_m00433F031D09C6877542ED045F7219DD47FB4DD8 (IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EdgePair_Create_m00433F031D09C6877542ED045F7219DD47FB4DD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_0 = ___pool0;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = GenericVirtFuncInvoker0< Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * >::Invoke(IPool_Get_TisEdge_t9D4BFE9716279C9D930CB20420750F7746432102_m51FC579DFD7337DF8A73F7F5B3469F6AA3EEB7DF_RuntimeMethod_var, L_0);
		V_0 = L_1;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_2 = ___pool0;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = GenericVirtFuncInvoker0< Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * >::Invoke(IPool_Get_TisEdge_t9D4BFE9716279C9D930CB20420750F7746432102_m51FC579DFD7337DF8A73F7F5B3469F6AA3EEB7DF_RuntimeMethod_var, L_2);
		V_1 = L_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = V_0;
		NullCheck(L_4);
		EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98 * L_5 = L_4->get_address_of__pair_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = V_0;
		L_5->set__e_0(L_6);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = V_0;
		NullCheck(L_7);
		EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98 * L_8 = L_7->get_address_of__pair_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = V_1;
		L_8->set__eSym_1(L_9);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = V_0;
		NullCheck(L_11);
		EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  L_12 = L_11->get__pair_0();
		NullCheck(L_10);
		L_10->set__pair_0(L_12);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_0;
		NullCheck(L_13);
		EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98  L_14 = L_13->get__pair_0();
		return L_14;
	}
}
// System.Void LibTessDotNet.MeshUtils_EdgePair::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_mAC360A156F30809DF4E0A6286DDBDB3DC6DEE9D2 (EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	{
		V_0 = (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL;
		__this->set__eSym_1((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = V_0;
		__this->set__e_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void EdgePair_Reset_mAC360A156F30809DF4E0A6286DDBDB3DC6DEE9D2_AdjustorThunk (RuntimeObject * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98 * _thisAdjusted = reinterpret_cast<EdgePair_t0E3A0FD11FC407A17040E29EAEFCF11F5A0AFB98 *>(__this + _offset);
	EdgePair_Reset_mAC360A156F30809DF4E0A6286DDBDB3DC6DEE9D2(_thisAdjusted, ___pool0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 LibTessDotNet.MeshUtils_Face::get_VertsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_m7DE0ED955234E1970177565F2D2562DEDD6D572B (Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	{
		V_0 = 0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = __this->get__anEdge_2();
		V_1 = L_0;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = V_1;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2->get__Lnext_4();
		V_1 = L_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = __this->get__anEdge_2();
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_4) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_5))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void LibTessDotNet.MeshUtils_Face::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Init_mD05188552B63F25DB0954CC273FFCAB5036917AA (Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils_Face::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Reset_m2E278EAE4F5D973F39D2860F9EA26F3B4DC69F18 (Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_0 = NULL;
	{
		V_0 = (Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)NULL;
		__this->set__next_1((Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)NULL);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_0 = V_0;
		__this->set__prev_0(L_0);
		__this->set__anEdge_2((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL);
		__this->set__trail_3((Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)NULL);
		__this->set__n_4(0);
		__this->set__marked_5((bool)0);
		__this->set__inside_6((bool)0);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils_Face::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face__ctor_m3DC86349359A6F969DF122459F3E9FCDEB3662C9 (Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * __this, const RuntimeMethod* method)
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
// System.Void LibTessDotNet.MeshUtils_Vertex::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Init_mADE200059612F29380AC15E8EB553495D8F1B04C (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils_Vertex::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Reset_m7C344455187917A14275561A35ED8FDC0C55D9D2 (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vertex_Reset_m7C344455187917A14275561A35ED8FDC0C55D9D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_0 = NULL;
	{
		V_0 = (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)NULL;
		__this->set__next_1((Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = V_0;
		__this->set__prev_0(L_0);
		__this->set__anEdge_2((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_1 = ((Vec3_t956A293556A430A69339B775D377A79CAE910D67_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t956A293556A430A69339B775D377A79CAE910D67_il2cpp_TypeInfo_var))->get_Zero_0();
		__this->set__coords_3(L_1);
		__this->set__s_4((0.0f));
		__this->set__t_5((0.0f));
		PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF * L_2 = __this->get_address_of__pqHandle_6();
		il2cpp_codegen_initobj(L_2, sizeof(PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF ));
		__this->set__n_7(0);
		__this->set__data_8((-1));
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils_Vertex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mB6E2F3C5460AE9F967311686A22A6D78E43F5D57 (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * __this, const RuntimeMethod* method)
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
// System.Void LibTessDotNet.NullPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_m3CE48209A5F87CD47264995A93DA48C79690EC07 (NullPool_t3362A4521B554267969F55F0974D28D2089531B4 * __this, const RuntimeMethod* method)
{
	{
		IPool__ctor_mAC687A8E0F6EA56B2AF3DCE6EC9AF2ABF116E0E4(__this, /*hidden argument*/NULL);
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
// System.Void LibTessDotNet.PQHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PQHandle__cctor_m3DF687A8DD0FFD9A5F46CE249837615D3637460F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PQHandle__cctor_m3DF687A8DD0FFD9A5F46CE249837615D3637460F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF_il2cpp_TypeInfo_var))->set_Invalid_0(((int32_t)268435455));
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
// LibTessDotNet.Tess_ActiveRegion LibTessDotNet.Tess::RegionBelow(LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method)
{
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___reg0;
		NullCheck(L_0);
		Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * L_1 = L_0->get__nodeUp_1();
		NullCheck(L_1);
		Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * L_2 = L_1->get__prev_1();
		NullCheck(L_2);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_3 = L_2->get__key_0();
		return L_3;
	}
}
// LibTessDotNet.Tess_ActiveRegion LibTessDotNet.Tess::RegionAbove(LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method)
{
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___reg0;
		NullCheck(L_0);
		Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * L_1 = L_0->get__nodeUp_1();
		NullCheck(L_1);
		Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * L_2 = L_1->get__next_2();
		NullCheck(L_2);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_3 = L_2->get__key_0();
		return L_3;
	}
}
// System.Boolean LibTessDotNet.Tess::EdgeLeq(LibTessDotNet.Tess_ActiveRegion,LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_EdgeLeq_mF98D3A9B7A2D4F255C081FCAFAB2E2A559B5F402 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg10, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg21, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___reg10;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__eUp_0();
		V_0 = L_1;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_2 = ___reg21;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2->get__eUp_0();
		V_1 = L_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = V_0;
		NullCheck(L_4);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_5 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_4, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = __this->get__event_12();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_5) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_6))))
		{
			goto IL_00a6;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = V_1;
		NullCheck(L_7);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_7, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = __this->get__event_12();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_8) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_9))))
		{
			goto IL_0084;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = V_0;
		NullCheck(L_10);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_11 = L_10->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = V_1;
		NullCheck(L_12);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_13 = L_12->get__Org_5();
		bool L_14 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_11, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0062;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = V_1;
		NullCheck(L_15);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_15, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = V_0;
		NullCheck(L_17);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_18 = L_17->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = V_1;
		NullCheck(L_19);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_20 = L_19->get__Org_5();
		float L_21 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_16, L_18, L_20, /*hidden argument*/NULL);
		return (bool)((((int32_t)((!(((float)L_21) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0062:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_0;
		NullCheck(L_22);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_23 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_22, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_24 = V_1;
		NullCheck(L_24);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_25 = L_24->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = V_0;
		NullCheck(L_26);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_27 = L_26->get__Org_5();
		float L_28 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_23, L_25, L_27, /*hidden argument*/NULL);
		return (bool)((((int32_t)((!(((float)L_28) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0084:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = V_1;
		NullCheck(L_29);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_30 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_29, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_31 = __this->get__event_12();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_32 = V_1;
		NullCheck(L_32);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_33 = L_32->get__Org_5();
		float L_34 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_30, L_31, L_33, /*hidden argument*/NULL);
		return (bool)((((int32_t)((!(((float)L_34) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00a6:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_35 = V_1;
		NullCheck(L_35);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_36 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_35, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_37 = __this->get__event_12();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_36) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_37))))
		{
			goto IL_00d6;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_38 = V_0;
		NullCheck(L_38);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_39 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_38, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_40 = __this->get__event_12();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_41 = V_0;
		NullCheck(L_41);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_42 = L_41->get__Org_5();
		float L_43 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_39, L_40, L_42, /*hidden argument*/NULL);
		return (bool)((((int32_t)((!(((float)L_43) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00d6:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_44 = V_0;
		NullCheck(L_44);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_45 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_44, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_46 = __this->get__event_12();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_47 = V_0;
		NullCheck(L_47);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_48 = L_47->get__Org_5();
		float L_49 = Geom_EdgeEval_mC352383793F5DD57BB91C3B180E75C8F2DA83C60(L_45, L_46, L_48, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_50 = V_1;
		NullCheck(L_50);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_51 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_50, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_52 = __this->get__event_12();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_53 = V_1;
		NullCheck(L_53);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_54 = L_53->get__Org_5();
		float L_55 = Geom_EdgeEval_mC352383793F5DD57BB91C3B180E75C8F2DA83C60(L_51, L_52, L_54, /*hidden argument*/NULL);
		V_2 = L_55;
		float L_56 = V_2;
		return (bool)((((int32_t)((!(((float)L_49) >= ((float)L_56)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void LibTessDotNet.Tess::DeleteRegion(LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_m09FC665365F882F15561EDF9F4EBC94DD780599F (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_DeleteRegion_m09FC665365F882F15561EDF9F4EBC94DD780599F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___reg0;
		NullCheck(L_0);
		bool L_1 = L_0->get__fixUpperEdge_6();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_2 = ___reg0;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2->get__eUp_0();
		NullCheck(L_3);
		L_3->set__activeRegion_7((ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)NULL);
		Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * L_4 = __this->get__dict_10();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_5 = ___reg0;
		NullCheck(L_5);
		Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * L_6 = L_5->get__nodeUp_1();
		NullCheck(L_4);
		Dict_1_Remove_mED3BBF2B90D3DC2E931AB254ABCBFE8B54A86C02(L_4, L_6, /*hidden argument*/Dict_1_Remove_mED3BBF2B90D3DC2E931AB254ABCBFE8B54A86C02_RuntimeMethod_var);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_7 = __this->get__pool_0();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_8 = ___reg0;
		NullCheck(L_7);
		GenericVirtActionInvoker1< ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * >::Invoke(IPool_Return_TisActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0_m6D2B667821C6A1413C2F119839B6B16F375CA1C9_RuntimeMethod_var, L_7, L_8);
		return;
	}
}
// System.Void LibTessDotNet.Tess::FixUpperEdge(LibTessDotNet.Tess_ActiveRegion,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m0B04206ADD778EA722886CA1C3A7E173D5BCDFEA (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___newEdge1, const RuntimeMethod* method)
{
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_0 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_1 = __this->get__pool_0();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_2 = ___reg0;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2->get__eUp_0();
		NullCheck(L_0);
		Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569(L_0, L_1, L_3, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_4 = ___reg0;
		NullCheck(L_4);
		L_4->set__fixUpperEdge_6((bool)0);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_5 = ___reg0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = ___newEdge1;
		NullCheck(L_5);
		L_5->set__eUp_0(L_6);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = ___newEdge1;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_8 = ___reg0;
		NullCheck(L_7);
		L_7->set__activeRegion_7(L_8);
		return;
	}
}
// LibTessDotNet.Tess_ActiveRegion LibTessDotNet.Tess::TopLeftRegion(LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * Tess_TopLeftRegion_mC452E1606EEF37BD74E63A7D0F2111D7B4E15AC7 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method)
{
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___reg0;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__eUp_0();
		NullCheck(L_1);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = L_1->get__Org_5();
		V_0 = L_2;
	}

IL_000c:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_3 = ___reg0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_4 = Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72(__this, L_3, /*hidden argument*/NULL);
		___reg0 = L_4;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_5 = ___reg0;
		NullCheck(L_5);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = L_5->get__eUp_0();
		NullCheck(L_6);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = L_6->get__Org_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = V_0;
		if ((((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_7) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_9 = ___reg0;
		NullCheck(L_9);
		bool L_10 = L_9->get__fixUpperEdge_6();
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_11 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_12 = __this->get__pool_0();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_13 = ___reg0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_14 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = L_14->get__eUp_0();
		NullCheck(L_15);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_16 = L_15->get__Sym_2();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_17 = ___reg0;
		NullCheck(L_17);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = L_17->get__eUp_0();
		NullCheck(L_18);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = L_18->get__Lnext_4();
		NullCheck(L_11);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = Mesh_Connect_mBBFA4558B503ABE38484323A12968B1FA40A4C34(L_11, L_12, L_16, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_21 = ___reg0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_1;
		Tess_FixUpperEdge_m0B04206ADD778EA722886CA1C3A7E173D5BCDFEA(__this, L_21, L_22, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_23 = ___reg0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_24 = Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72(__this, L_23, /*hidden argument*/NULL);
		___reg0 = L_24;
	}

IL_006a:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_25 = ___reg0;
		return L_25;
	}
}
// LibTessDotNet.Tess_ActiveRegion LibTessDotNet.Tess::TopRightRegion(LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * Tess_TopRightRegion_mDD0387AD0D5EE847085A81F2F614148059793D40 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method)
{
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_0 = NULL;
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___reg0;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__eUp_0();
		NullCheck(L_1);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000c:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_3 = ___reg0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_4 = Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72(__this, L_3, /*hidden argument*/NULL);
		___reg0 = L_4;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_5 = ___reg0;
		NullCheck(L_5);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = L_5->get__eUp_0();
		NullCheck(L_6);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_6, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = V_0;
		if ((((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_7) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_9 = ___reg0;
		return L_9;
	}
}
// LibTessDotNet.Tess_ActiveRegion LibTessDotNet.Tess::AddRegionBelow(LibTessDotNet.Tess_ActiveRegion,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * Tess_AddRegionBelow_mCA582E60803B6331D7B69222DE1F6F9C51C856D9 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regAbove0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eNewUp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_AddRegionBelow_mCA582E60803B6331D7B69222DE1F6F9C51C856D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_0 = NULL;
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_0 = __this->get__pool_0();
		NullCheck(L_0);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_1 = GenericVirtFuncInvoker0< ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * >::Invoke(IPool_Get_TisActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0_m5B2020E08BEA48555D154FF9E597E96EEA6109E9_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_2 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = ___eNewUp1;
		NullCheck(L_2);
		L_2->set__eUp_0(L_3);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_4 = V_0;
		Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * L_5 = __this->get__dict_10();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_6 = ___regAbove0;
		NullCheck(L_6);
		Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * L_7 = L_6->get__nodeUp_1();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_8 = V_0;
		NullCheck(L_5);
		Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * L_9 = Dict_1_InsertBefore_mF0D871E83178ACA0604BB8F33D7C1E9F949F21E9(L_5, L_7, L_8, /*hidden argument*/Dict_1_InsertBefore_mF0D871E83178ACA0604BB8F33D7C1E9F949F21E9_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->set__nodeUp_1(L_9);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_10 = V_0;
		NullCheck(L_10);
		L_10->set__fixUpperEdge_6((bool)0);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_11 = V_0;
		NullCheck(L_11);
		L_11->set__sentinel_4((bool)0);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_12 = V_0;
		NullCheck(L_12);
		L_12->set__dirty_5((bool)0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = ___eNewUp1;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_14 = V_0;
		NullCheck(L_13);
		L_13->set__activeRegion_7(L_14);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_15 = V_0;
		return L_15;
	}
}
// System.Void LibTessDotNet.Tess::ComputeWinding(LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m72877A869B04B1FC49A6863593D3F9130E467231 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method)
{
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___reg0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_1 = ___reg0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_2 = Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72(__this, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->get__windingNumber_2();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_4 = ___reg0;
		NullCheck(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4->get__eUp_0();
		NullCheck(L_5);
		int32_t L_6 = L_5->get__winding_8();
		NullCheck(L_0);
		L_0->set__windingNumber_2(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_6)));
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_7 = ___reg0;
		int32_t L_8 = __this->get__windingRule_9();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_9 = ___reg0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__windingNumber_2();
		bool L_11 = Geom_IsWindingInside_mA54017B2455C54E4A58F8B5968B355B1BF00B2AA(L_8, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set__inside_3(L_11);
		return;
	}
}
// System.Void LibTessDotNet.Tess::FinishRegion(LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_m53DEE9C4662ADF7065E2455A714357037B8DF97D (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___reg0, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___reg0;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__eUp_0();
		V_0 = L_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = V_0;
		NullCheck(L_2);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_3 = L_2->get__Lface_6();
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_4 = L_3;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_5 = ___reg0;
		NullCheck(L_5);
		bool L_6 = L_5->get__inside_3();
		NullCheck(L_4);
		L_4->set__inside_6(L_6);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = V_0;
		NullCheck(L_4);
		L_4->set__anEdge_2(L_7);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_8 = ___reg0;
		Tess_DeleteRegion_m09FC665365F882F15561EDF9F4EBC94DD780599F(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// LibTessDotNet.MeshUtils_Edge LibTessDotNet.Tess::FinishLeftRegions(LibTessDotNet.Tess_ActiveRegion,LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * Tess_FinishLeftRegions_m3EA3296FB1DD51D441A52208CE54C6A51A6EC436 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regFirst0, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regLast1, const RuntimeMethod* method)
{
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_2 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_3 = NULL;
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___regFirst0;
		V_0 = L_0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_1 = ___regFirst0;
		NullCheck(L_1);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = L_1->get__eUp_0();
		V_1 = L_2;
		goto IL_00ad;
	}

IL_000e:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set__fixUpperEdge_6((bool)0);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_4 = V_0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_5 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_6 = V_2;
		NullCheck(L_6);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = L_6->get__eUp_0();
		V_3 = L_7;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_3;
		NullCheck(L_8);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = L_8->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = V_1;
		NullCheck(L_10);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_11 = L_10->get__Org_5();
		if ((((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_9) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_11)))
		{
			goto IL_0069;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_12 = V_2;
		NullCheck(L_12);
		bool L_13 = L_12->get__fixUpperEdge_6();
		if (L_13)
		{
			goto IL_0043;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_14 = V_0;
		Tess_FinishRegion_m53DEE9C4662ADF7065E2455A714357037B8DF97D(__this, L_14, /*hidden argument*/NULL);
		goto IL_00b4;
	}

IL_0043:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_15 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_16 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = V_1;
		NullCheck(L_17);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = Edge_get__Lprev_mAB87D419866AD8C3D304903083077126026F5642(L_17, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = V_3;
		NullCheck(L_19);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = L_19->get__Sym_2();
		NullCheck(L_15);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_21 = Mesh_Connect_mBBFA4558B503ABE38484323A12968B1FA40A4C34(L_15, L_16, L_18, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_22 = V_2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_23 = V_3;
		Tess_FixUpperEdge_m0B04206ADD778EA722886CA1C3A7E173D5BCDFEA(__this, L_22, L_23, /*hidden argument*/NULL);
	}

IL_0069:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_24 = V_1;
		NullCheck(L_24);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = L_24->get__Onext_3();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = V_3;
		if ((((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_25) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_26)))
		{
			goto IL_009d;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_27 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_28 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = V_3;
		NullCheck(L_29);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_29, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_31 = V_3;
		NullCheck(L_27);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_27, L_28, L_30, L_31, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_32 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_33 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_34 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_35 = V_3;
		NullCheck(L_32);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
	}

IL_009d:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_36 = V_0;
		Tess_FinishRegion_m53DEE9C4662ADF7065E2455A714357037B8DF97D(__this, L_36, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_37 = V_2;
		NullCheck(L_37);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_38 = L_37->get__eUp_0();
		V_1 = L_38;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_39 = V_2;
		V_0 = L_39;
	}

IL_00ad:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_40 = V_0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_41 = ___regLast1;
		if ((!(((RuntimeObject*)(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)L_40) == ((RuntimeObject*)(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)L_41))))
		{
			goto IL_000e;
		}
	}

IL_00b4:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_42 = V_1;
		return L_42;
	}
}
// System.Void LibTessDotNet.Tess::AddRightEdges(LibTessDotNet.Tess_ActiveRegion,LibTessDotNet.MeshUtils_Edge,LibTessDotNet.MeshUtils_Edge,LibTessDotNet.MeshUtils_Edge,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_mB5A22420B7105E46334A2CA6215FBF41AF4DC3DD (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eFirst1, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eLast2, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eTopLeft3, bool ___cleanUp4, const RuntimeMethod* method)
{
	bool V_0 = false;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_2 = NULL;
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_3 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_4 = NULL;
	{
		V_0 = (bool)1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = ___eFirst1;
		V_1 = L_0;
	}

IL_0004:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_1 = ___regUp0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = V_1;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2->get__Sym_2();
		Tess_AddRegionBelow_mCA582E60803B6331D7B69222DE1F6F9C51C856D9(__this, L_1, L_3, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = V_1;
		NullCheck(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4->get__Onext_3();
		V_1 = L_5;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = ___eLast2;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_6) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_7))))
		{
			goto IL_0004;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = ___eTopLeft3;
		if (L_8)
		{
			goto IL_0034;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_9 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_10 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = L_10->get__eUp_0();
		NullCheck(L_11);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = Edge_get__Rprev_mA3AA832BCF164B37CEDF698849502C834D5E65BE(L_11, /*hidden argument*/NULL);
		___eTopLeft3 = L_12;
	}

IL_0034:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_13 = ___regUp0;
		V_2 = L_13;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_14 = ___eTopLeft3;
		V_4 = L_14;
	}

IL_003a:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_15 = V_2;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_16 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_17 = V_3;
		NullCheck(L_17);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = L_17->get__eUp_0();
		NullCheck(L_18);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = L_18->get__Sym_2();
		V_1 = L_19;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = V_1;
		NullCheck(L_20);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = L_20->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_4;
		NullCheck(L_22);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_23 = L_22->get__Org_5();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_21) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_23))))
		{
			goto IL_0106;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_24 = V_1;
		NullCheck(L_24);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = L_24->get__Onext_3();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = V_4;
		if ((((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_25) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_26)))
		{
			goto IL_009b;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_27 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_28 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = V_1;
		NullCheck(L_29);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_29, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_31 = V_1;
		NullCheck(L_27);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_27, L_28, L_30, L_31, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_32 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_33 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_34 = V_4;
		NullCheck(L_34);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_35 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_34, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_36 = V_1;
		NullCheck(L_32);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_32, L_33, L_35, L_36, /*hidden argument*/NULL);
	}

IL_009b:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_37 = V_3;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_38 = V_2;
		NullCheck(L_38);
		int32_t L_39 = L_38->get__windingNumber_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = L_40->get__winding_8();
		NullCheck(L_37);
		L_37->set__windingNumber_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_41)));
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_42 = V_3;
		int32_t L_43 = __this->get__windingRule_9();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = L_44->get__windingNumber_2();
		bool L_46 = Geom_IsWindingInside_mA54017B2455C54E4A58F8B5968B355B1BF00B2AA(L_43, L_45, /*hidden argument*/NULL);
		NullCheck(L_42);
		L_42->set__inside_3(L_46);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_47 = V_2;
		NullCheck(L_47);
		L_47->set__dirty_5((bool)1);
		bool L_48 = V_0;
		if (L_48)
		{
			goto IL_00fa;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_49 = V_2;
		bool L_50 = Tess_CheckForRightSplice_mBCE374F27191B9106F7D2C162877381577646FD4(__this, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_00fa;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_51 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_52 = V_4;
		Geom_AddWinding_m5DF2B42952089632105DC661DB183D970F37BE79(L_51, L_52, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_53 = V_2;
		Tess_DeleteRegion_m09FC665365F882F15561EDF9F4EBC94DD780599F(__this, L_53, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_54 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_55 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_56 = V_4;
		NullCheck(L_54);
		Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569(L_54, L_55, L_56, /*hidden argument*/NULL);
	}

IL_00fa:
	{
		V_0 = (bool)0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_57 = V_3;
		V_2 = L_57;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_58 = V_1;
		V_4 = L_58;
		goto IL_003a;
	}

IL_0106:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_59 = V_2;
		NullCheck(L_59);
		L_59->set__dirty_5((bool)1);
		bool L_60 = ___cleanUp4;
		if (!L_60)
		{
			goto IL_0118;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_61 = V_2;
		Tess_WalkDirtyRegions_m368066D69C19B49E40CA51E14FE6FE5AD000DD09(__this, L_61, /*hidden argument*/NULL);
	}

IL_0118:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::SpliceMergeVertices(LibTessDotNet.MeshUtils_Edge,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m00A092F18FE2EB4E37497E0BE4750D09FB23084E (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___e10, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___e21, const RuntimeMethod* method)
{
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_0 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_1 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = ___e10;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = ___e21;
		NullCheck(L_0);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::VertexWeights(LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_m1F711C9A9F9F23CD5F32B9F0D71B5ECED42D6E09 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___isect0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___org1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___dst2, float* ___w03, float* ___w14, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___org1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = ___isect0;
		float L_2 = Geom_VertL1dist_m4A0A9865CCCEA1B8E4A3947B89F06CDD54F5541E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_3 = ___dst2;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___isect0;
		float L_5 = Geom_VertL1dist_m4A0A9865CCCEA1B8E4A3947B89F06CDD54F5541E(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float* L_6 = ___w03;
		float L_7 = V_1;
		float L_8 = V_0;
		float L_9 = V_1;
		*((float*)L_6) = (float)((float)((float)((float)((float)L_7/(float)((float)il2cpp_codegen_add((float)L_8, (float)L_9))))/(float)(2.0f)));
		float* L_10 = ___w14;
		float L_11 = V_0;
		float L_12 = V_0;
		float L_13 = V_1;
		*((float*)L_10) = (float)((float)((float)((float)((float)L_11/(float)((float)il2cpp_codegen_add((float)L_12, (float)L_13))))/(float)(2.0f)));
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = ___isect0;
		NullCheck(L_14);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_15 = L_14->get_address_of__coords_3();
		float* L_16 = L_15->get_address_of_X_1();
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		float* L_19 = ___w03;
		float L_20 = *((float*)L_19);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = ___org1;
		NullCheck(L_21);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_22 = L_21->get_address_of__coords_3();
		float L_23 = L_22->get_X_1();
		float* L_24 = ___w14;
		float L_25 = *((float*)L_24);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_26 = ___dst2;
		NullCheck(L_26);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_27 = L_26->get_address_of__coords_3();
		float L_28 = L_27->get_X_1();
		*((float*)L_17) = (float)((float)il2cpp_codegen_add((float)L_18, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_23)), (float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_28))))));
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_29 = ___isect0;
		NullCheck(L_29);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_30 = L_29->get_address_of__coords_3();
		float* L_31 = L_30->get_address_of_Y_2();
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		float* L_34 = ___w03;
		float L_35 = *((float*)L_34);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_36 = ___org1;
		NullCheck(L_36);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_37 = L_36->get_address_of__coords_3();
		float L_38 = L_37->get_Y_2();
		float* L_39 = ___w14;
		float L_40 = *((float*)L_39);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_41 = ___dst2;
		NullCheck(L_41);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_42 = L_41->get_address_of__coords_3();
		float L_43 = L_42->get_Y_2();
		*((float*)L_32) = (float)((float)il2cpp_codegen_add((float)L_33, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_35, (float)L_38)), (float)((float)il2cpp_codegen_multiply((float)L_40, (float)L_43))))));
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_44 = ___isect0;
		NullCheck(L_44);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_45 = L_44->get_address_of__coords_3();
		float* L_46 = L_45->get_address_of_Z_3();
		float* L_47 = L_46;
		float L_48 = *((float*)L_47);
		float* L_49 = ___w03;
		float L_50 = *((float*)L_49);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_51 = ___org1;
		NullCheck(L_51);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_52 = L_51->get_address_of__coords_3();
		float L_53 = L_52->get_Z_3();
		float* L_54 = ___w14;
		float L_55 = *((float*)L_54);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_56 = ___dst2;
		NullCheck(L_56);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_57 = L_56->get_address_of__coords_3();
		float L_58 = L_57->get_Z_3();
		*((float*)L_47) = (float)((float)il2cpp_codegen_add((float)L_48, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_50, (float)L_53)), (float)((float)il2cpp_codegen_multiply((float)L_55, (float)L_58))))));
		return;
	}
}
// System.Void LibTessDotNet.Tess::GetIntersectData(LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_m6A8E7E2FAB33EC6C551C3F29ED146F10E1B811EA (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___isect0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___orgUp1, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___dstUp2, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___orgLo3, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___dstLo4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_GetIntersectData_m6A8E7E2FAB33EC6C551C3F29ED146F10E1B811EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___isect0;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_1 = ((Vec3_t956A293556A430A69339B775D377A79CAE910D67_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t956A293556A430A69339B775D377A79CAE910D67_il2cpp_TypeInfo_var))->get_Zero_0();
		NullCheck(L_0);
		L_0->set__coords_3(L_1);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = ___isect0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_3 = ___orgUp1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___dstUp2;
		Tess_VertexWeights_m1F711C9A9F9F23CD5F32B9F0D71B5ECED42D6E09(__this, L_2, L_3, L_4, (float*)(&V_0), (float*)(&V_1), /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_5 = ___isect0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = ___orgLo3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = ___dstLo4;
		Tess_VertexWeights_m1F711C9A9F9F23CD5F32B9F0D71B5ECED42D6E09(__this, L_5, L_6, L_7, (float*)(&V_2), (float*)(&V_3), /*hidden argument*/NULL);
		CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * L_8 = __this->get__combineCallback_13();
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = ___isect0;
		CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * L_10 = __this->get__combineCallback_13();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_11 = ___isect0;
		NullCheck(L_11);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_12 = L_11->get__coords_3();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_14 = L_13;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_15 = ___orgUp1;
		NullCheck(L_15);
		int32_t L_16 = L_15->get__data_8();
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_16);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_17 = L_14;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_18 = ___dstUp2;
		NullCheck(L_18);
		int32_t L_19 = L_18->get__data_8();
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_19);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_20 = L_17;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = ___orgLo3;
		NullCheck(L_21);
		int32_t L_22 = L_21->get__data_8();
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_22);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_23 = L_20;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_24 = ___dstLo4;
		NullCheck(L_24);
		int32_t L_25 = L_24->get__data_8();
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_25);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_26 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_27 = L_26;
		float L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_28);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_29 = L_27;
		float L_30 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_30);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_31 = L_29;
		float L_32 = V_2;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_32);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_33 = L_31;
		float L_34 = V_3;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_34);
		NullCheck(L_10);
		int32_t L_35 = CombineCallback_Invoke_m1259816D94764F54CCB600CAA4A03369625DE072(L_10, L_12, L_23, L_33, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set__data_8(L_35);
	}

IL_0088:
	{
		return;
	}
}
// System.Boolean LibTessDotNet.Tess::CheckForRightSplice(LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_mBCE374F27191B9106F7D2C162877381577646FD4 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_CheckForRightSplice_mBCE374F27191B9106F7D2C162877381577646FD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	bool V_3 = false;
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_1 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_2 = ___regUp0;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2->get__eUp_0();
		V_1 = L_3;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_4 = V_0;
		NullCheck(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4->get__eUp_0();
		V_2 = L_5;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = V_1;
		NullCheck(L_6);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = L_6->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_2;
		NullCheck(L_8);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = L_8->get__Org_5();
		bool L_10 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_7, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00da;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = V_2;
		NullCheck(L_11);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_11, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_1;
		NullCheck(L_13);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = L_13->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = V_2;
		NullCheck(L_15);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = L_15->get__Org_5();
		float L_17 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_12, L_14, L_16, /*hidden argument*/NULL);
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_004c:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = V_1;
		NullCheck(L_18);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_19 = L_18->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = V_2;
		NullCheck(L_20);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = L_20->get__Org_5();
		bool L_22 = Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F(L_19, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00a4;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_23 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_24 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = V_2;
		NullCheck(L_25);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = L_25->get__Sym_2();
		NullCheck(L_23);
		Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D(L_23, L_24, L_26, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_27 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_28 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = V_2;
		NullCheck(L_30);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_31 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_30, /*hidden argument*/NULL);
		NullCheck(L_27);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_27, L_28, L_29, L_31, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_32 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_33 = V_0;
		int32_t L_34 = 1;
		V_3 = (bool)L_34;
		NullCheck(L_33);
		L_33->set__dirty_5((bool)L_34);
		bool L_35 = V_3;
		NullCheck(L_32);
		L_32->set__dirty_5(L_35);
		goto IL_0140;
	}

IL_00a4:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_36 = V_1;
		NullCheck(L_36);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_37 = L_36->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_38 = V_2;
		NullCheck(L_38);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_39 = L_38->get__Org_5();
		if ((((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_37) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_39)))
		{
			goto IL_0140;
		}
	}
	{
		PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * L_40 = __this->get__pq_11();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_41 = V_1;
		NullCheck(L_41);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_42 = L_41->get__Org_5();
		NullCheck(L_42);
		PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF  L_43 = L_42->get__pqHandle_6();
		NullCheck(L_40);
		PriorityQueue_1_Remove_mC989B256A36B00040DD49EC98E5FEFA025DAFE6E(L_40, L_43, /*hidden argument*/PriorityQueue_1_Remove_mC989B256A36B00040DD49EC98E5FEFA025DAFE6E_RuntimeMethod_var);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_44 = V_2;
		NullCheck(L_44);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_45 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_44, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_46 = V_1;
		Tess_SpliceMergeVertices_m00A092F18FE2EB4E37497E0BE4750D09FB23084E(__this, L_45, L_46, /*hidden argument*/NULL);
		goto IL_0140;
	}

IL_00da:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_47 = V_1;
		NullCheck(L_47);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_48 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_47, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_49 = V_2;
		NullCheck(L_49);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_50 = L_49->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_51 = V_1;
		NullCheck(L_51);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_52 = L_51->get__Org_5();
		float L_53 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_48, L_50, L_52, /*hidden argument*/NULL);
		if ((!(((float)L_53) < ((float)(0.0f)))))
		{
			goto IL_00fa;
		}
	}
	{
		return (bool)0;
	}

IL_00fa:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_54 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_55 = Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72(__this, L_54, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_56 = ___regUp0;
		int32_t L_57 = 1;
		V_3 = (bool)L_57;
		NullCheck(L_56);
		L_56->set__dirty_5((bool)L_57);
		bool L_58 = V_3;
		NullCheck(L_55);
		L_55->set__dirty_5(L_58);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_59 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_60 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_61 = V_1;
		NullCheck(L_61);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_62 = L_61->get__Sym_2();
		NullCheck(L_59);
		Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D(L_59, L_60, L_62, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_63 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_64 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_65 = V_2;
		NullCheck(L_65);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_66 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_65, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_67 = V_1;
		NullCheck(L_63);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_63, L_64, L_66, L_67, /*hidden argument*/NULL);
	}

IL_0140:
	{
		return (bool)1;
	}
}
// System.Boolean LibTessDotNet.Tess::CheckForLeftSplice(LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_m04645DAEF38D042828CA2E7F1A8F27942A3B0502 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, const RuntimeMethod* method)
{
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_3 = NULL;
	bool V_4 = false;
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_1 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_2 = ___regUp0;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2->get__eUp_0();
		V_1 = L_3;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_4 = V_0;
		NullCheck(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4->get__eUp_0();
		V_2 = L_5;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = V_1;
		NullCheck(L_6);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_6, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_2;
		NullCheck(L_8);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_8, /*hidden argument*/NULL);
		bool L_10 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_7, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_009f;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = V_1;
		NullCheck(L_11);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_11, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_2;
		NullCheck(L_13);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_13, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = V_1;
		NullCheck(L_15);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = L_15->get__Org_5();
		float L_17 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_12, L_14, L_16, /*hidden argument*/NULL);
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0049:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_18 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_19 = Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72(__this, L_18, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_20 = ___regUp0;
		int32_t L_21 = 1;
		V_4 = (bool)L_21;
		NullCheck(L_20);
		L_20->set__dirty_5((bool)L_21);
		bool L_22 = V_4;
		NullCheck(L_19);
		L_19->set__dirty_5(L_22);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_23 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_24 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = V_1;
		NullCheck(L_23);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D(L_23, L_24, L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_27 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_28 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = V_2;
		NullCheck(L_29);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = L_29->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_31 = V_3;
		NullCheck(L_27);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_27, L_28, L_30, L_31, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_32 = V_3;
		NullCheck(L_32);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_33 = L_32->get__Lface_6();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_34 = ___regUp0;
		NullCheck(L_34);
		bool L_35 = L_34->get__inside_3();
		NullCheck(L_33);
		L_33->set__inside_6(L_35);
		goto IL_0110;
	}

IL_009f:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_36 = V_2;
		NullCheck(L_36);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_37 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_36, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_38 = V_1;
		NullCheck(L_38);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_39 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_38, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_40 = V_2;
		NullCheck(L_40);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_41 = L_40->get__Org_5();
		float L_42 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_37, L_39, L_41, /*hidden argument*/NULL);
		if ((!(((float)L_42) > ((float)(0.0f)))))
		{
			goto IL_00bf;
		}
	}
	{
		return (bool)0;
	}

IL_00bf:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_43 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_44 = V_0;
		int32_t L_45 = 1;
		V_4 = (bool)L_45;
		NullCheck(L_44);
		L_44->set__dirty_5((bool)L_45);
		bool L_46 = V_4;
		NullCheck(L_43);
		L_43->set__dirty_5(L_46);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_47 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_48 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_49 = V_2;
		NullCheck(L_47);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_50 = Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D(L_47, L_48, L_49, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_51 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_52 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_53 = V_1;
		NullCheck(L_53);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_54 = L_53->get__Lnext_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_55 = V_2;
		NullCheck(L_55);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_56 = L_55->get__Sym_2();
		NullCheck(L_51);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_51, L_52, L_54, L_56, /*hidden argument*/NULL);
		NullCheck(L_50);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_57 = Edge_get__Rface_m27BE789A7B47E8D04DDDA64B466C956C770C39D1(L_50, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_58 = ___regUp0;
		NullCheck(L_58);
		bool L_59 = L_58->get__inside_3();
		NullCheck(L_57);
		L_57->set__inside_6(L_59);
	}

IL_0110:
	{
		return (bool)1;
	}
}
// System.Boolean LibTessDotNet.Tess::CheckForIntersect(LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_mEC69C5260C5D6C86AAA9280D638D35B0141A7B31 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_CheckForIntersect_mEC69C5260C5D6C86AAA9280D638D35B0141A7B31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_3 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_4 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_5 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_6 = NULL;
	float V_7 = 0.0f;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_8 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_9 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_10 = NULL;
	bool V_11 = false;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * G_B14_0 = NULL;
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_1 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_2 = ___regUp0;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2->get__eUp_0();
		V_1 = L_3;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_4 = V_0;
		NullCheck(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4->get__eUp_0();
		V_2 = L_5;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = V_1;
		NullCheck(L_6);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = L_6->get__Org_5();
		V_3 = L_7;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_2;
		NullCheck(L_8);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = L_8->get__Org_5();
		V_4 = L_9;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = V_1;
		NullCheck(L_10);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_11 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = V_2;
		NullCheck(L_12);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_13 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_12, /*hidden argument*/NULL);
		V_6 = L_13;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = V_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_15 = V_4;
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_14) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_15))))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_003c:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = V_3;
		NullCheck(L_16);
		float L_17 = L_16->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_18 = V_5;
		NullCheck(L_18);
		float L_19 = L_18->get__t_5();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_20 = Math_Min_mB77A95F6A1FE3B8E7CD784F20AF4E1C908B5E9CD(L_17, L_19, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = V_4;
		NullCheck(L_21);
		float L_22 = L_21->get__t_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_23 = V_6;
		NullCheck(L_23);
		float L_24 = L_23->get__t_5();
		float L_25 = Math_Max_m545895C37C1F738BBB653CA1F65E50FF1D197675(L_22, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		float L_26 = V_7;
		if ((!(((float)L_20) > ((float)L_26))))
		{
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0069:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_27 = V_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_28 = V_4;
		bool L_29 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_27, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0086;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_30 = V_6;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_31 = V_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_32 = V_4;
		float L_33 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_30, L_31, L_32, /*hidden argument*/NULL);
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		return (bool)0;
	}

IL_0086:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_34 = V_5;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_35 = V_4;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_36 = V_3;
		float L_37 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_34, L_35, L_36, /*hidden argument*/NULL);
		if ((!(((float)L_37) < ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		return (bool)0;
	}

IL_0099:
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_38 = __this->get__pool_0();
		NullCheck(L_38);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_39 = GenericVirtFuncInvoker0< Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * >::Invoke(IPool_Get_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_mEF84A2B4985A18A163D1A914B0490F483E8476CC_RuntimeMethod_var, L_38);
		V_8 = L_39;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_40 = V_5;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_41 = V_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_42 = V_6;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_43 = V_4;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_44 = V_8;
		Geom_EdgeIntersect_mD86DAB00B94280E2D60A43EB0435F5BC33CF9F3C(L_40, L_41, L_42, L_43, L_44, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_45 = V_8;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_46 = __this->get__event_12();
		bool L_47 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_45, L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_00e7;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_48 = V_8;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_49 = __this->get__event_12();
		NullCheck(L_49);
		float L_50 = L_49->get__s_4();
		NullCheck(L_48);
		L_48->set__s_4(L_50);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_51 = V_8;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_52 = __this->get__event_12();
		NullCheck(L_52);
		float L_53 = L_52->get__t_5();
		NullCheck(L_51);
		L_51->set__t_5(L_53);
	}

IL_00e7:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_54 = V_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_55 = V_4;
		bool L_56 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_54, L_55, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_00f5;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_57 = V_4;
		G_B14_0 = L_57;
		goto IL_00f6;
	}

IL_00f5:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_58 = V_3;
		G_B14_0 = L_58;
	}

IL_00f6:
	{
		V_9 = G_B14_0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_59 = V_9;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_60 = V_8;
		bool L_61 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_59, L_60, /*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_011f;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_62 = V_8;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_63 = V_9;
		NullCheck(L_63);
		float L_64 = L_63->get__s_4();
		NullCheck(L_62);
		L_62->set__s_4(L_64);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_65 = V_8;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_66 = V_9;
		NullCheck(L_66);
		float L_67 = L_66->get__t_5();
		NullCheck(L_65);
		L_65->set__t_5(L_67);
	}

IL_011f:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_68 = V_8;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_69 = V_3;
		bool L_70 = Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F(L_68, L_69, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_0134;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_71 = V_8;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_72 = V_4;
		bool L_73 = Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F(L_71, L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_014b;
		}
	}

IL_0134:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_74 = ___regUp0;
		Tess_CheckForRightSplice_mBCE374F27191B9106F7D2C162877381577646FD4(__this, L_74, /*hidden argument*/NULL);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_75 = __this->get__pool_0();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_76 = V_8;
		NullCheck(L_75);
		GenericVirtActionInvoker1< Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * >::Invoke(IPool_Return_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_m3D509F9B1C89493E6305C273107A312B795A5D3C_RuntimeMethod_var, L_75, L_76);
		return (bool)0;
	}

IL_014b:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_77 = V_5;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_78 = __this->get__event_12();
		bool L_79 = Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F(L_77, L_78, /*hidden argument*/NULL);
		if (L_79)
		{
			goto IL_0170;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_80 = V_5;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_81 = __this->get__event_12();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_82 = V_8;
		float L_83 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_80, L_81, L_82, /*hidden argument*/NULL);
		if ((((float)L_83) >= ((float)(0.0f))))
		{
			goto IL_019b;
		}
	}

IL_0170:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_84 = V_6;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_85 = __this->get__event_12();
		bool L_86 = Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F(L_84, L_85, /*hidden argument*/NULL);
		if (L_86)
		{
			goto IL_03a0;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_87 = V_6;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_88 = __this->get__event_12();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_89 = V_8;
		float L_90 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_87, L_88, L_89, /*hidden argument*/NULL);
		if ((!(((float)L_90) <= ((float)(0.0f)))))
		{
			goto IL_03a0;
		}
	}

IL_019b:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_91 = V_6;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_92 = __this->get__event_12();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_91) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_92))))
		{
			goto IL_0219;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_93 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_94 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_95 = V_1;
		NullCheck(L_95);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_96 = L_95->get__Sym_2();
		NullCheck(L_93);
		Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D(L_93, L_94, L_96, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_97 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_98 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_99 = V_2;
		NullCheck(L_99);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_100 = L_99->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_101 = V_1;
		NullCheck(L_97);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_97, L_98, L_100, L_101, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_102 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_103 = Tess_TopLeftRegion_mC452E1606EEF37BD74E63A7D0F2111D7B4E15AC7(__this, L_102, /*hidden argument*/NULL);
		___regUp0 = L_103;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_104 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_105 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_104, /*hidden argument*/NULL);
		NullCheck(L_105);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_106 = L_105->get__eUp_0();
		V_1 = L_106;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_107 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_108 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_107, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_109 = V_0;
		Tess_FinishLeftRegions_m3EA3296FB1DD51D441A52208CE54C6A51A6EC436(__this, L_108, L_109, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_110 = ___regUp0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_111 = V_1;
		NullCheck(L_111);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_112 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_111, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_113 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_114 = V_1;
		Tess_AddRightEdges_mB5A22420B7105E46334A2CA6215FBF41AF4DC3DD(__this, L_110, L_112, L_113, L_114, (bool)1, /*hidden argument*/NULL);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_115 = __this->get__pool_0();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_116 = V_8;
		NullCheck(L_115);
		GenericVirtActionInvoker1< Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * >::Invoke(IPool_Return_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_m3D509F9B1C89493E6305C273107A312B795A5D3C_RuntimeMethod_var, L_115, L_116);
		return (bool)1;
	}

IL_0219:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_117 = V_5;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_118 = __this->get__event_12();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_117) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_118))))
		{
			goto IL_02b3;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_119 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_120 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_121 = V_2;
		NullCheck(L_121);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_122 = L_121->get__Sym_2();
		NullCheck(L_119);
		Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D(L_119, L_120, L_122, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_123 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_124 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_125 = V_1;
		NullCheck(L_125);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_126 = L_125->get__Lnext_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_127 = V_2;
		NullCheck(L_127);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_128 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_127, /*hidden argument*/NULL);
		NullCheck(L_123);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_123, L_124, L_126, L_128, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_129 = ___regUp0;
		V_0 = L_129;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_130 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_131 = Tess_TopRightRegion_mDD0387AD0D5EE847085A81F2F614148059793D40(__this, L_130, /*hidden argument*/NULL);
		___regUp0 = L_131;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_132 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_133 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_132, /*hidden argument*/NULL);
		NullCheck(L_133);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_134 = L_133->get__eUp_0();
		NullCheck(L_134);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_135 = Edge_get__Rprev_mA3AA832BCF164B37CEDF698849502C834D5E65BE(L_134, /*hidden argument*/NULL);
		V_10 = L_135;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_136 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_137 = V_2;
		NullCheck(L_137);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_138 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_137, /*hidden argument*/NULL);
		NullCheck(L_136);
		L_136->set__eUp_0(L_138);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_139 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_140 = Tess_FinishLeftRegions_m3EA3296FB1DD51D441A52208CE54C6A51A6EC436(__this, L_139, (ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_140;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_141 = ___regUp0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_142 = V_2;
		NullCheck(L_142);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_143 = L_142->get__Onext_3();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_144 = V_1;
		NullCheck(L_144);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_145 = Edge_get__Rprev_mA3AA832BCF164B37CEDF698849502C834D5E65BE(L_144, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_146 = V_10;
		Tess_AddRightEdges_mB5A22420B7105E46334A2CA6215FBF41AF4DC3DD(__this, L_141, L_143, L_145, L_146, (bool)1, /*hidden argument*/NULL);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_147 = __this->get__pool_0();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_148 = V_8;
		NullCheck(L_147);
		GenericVirtActionInvoker1< Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * >::Invoke(IPool_Return_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_m3D509F9B1C89493E6305C273107A312B795A5D3C_RuntimeMethod_var, L_147, L_148);
		return (bool)1;
	}

IL_02b3:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_149 = V_5;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_150 = __this->get__event_12();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_151 = V_8;
		float L_152 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_149, L_150, L_151, /*hidden argument*/NULL);
		if ((!(((float)L_152) >= ((float)(0.0f)))))
		{
			goto IL_0325;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_153 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_154 = Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72(__this, L_153, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_155 = ___regUp0;
		int32_t L_156 = 1;
		V_11 = (bool)L_156;
		NullCheck(L_155);
		L_155->set__dirty_5((bool)L_156);
		bool L_157 = V_11;
		NullCheck(L_154);
		L_154->set__dirty_5(L_157);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_158 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_159 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_160 = V_1;
		NullCheck(L_160);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_161 = L_160->get__Sym_2();
		NullCheck(L_158);
		Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D(L_158, L_159, L_161, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_162 = V_1;
		NullCheck(L_162);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_163 = L_162->get__Org_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_164 = __this->get__event_12();
		NullCheck(L_164);
		float L_165 = L_164->get__s_4();
		NullCheck(L_163);
		L_163->set__s_4(L_165);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_166 = V_1;
		NullCheck(L_166);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_167 = L_166->get__Org_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_168 = __this->get__event_12();
		NullCheck(L_168);
		float L_169 = L_168->get__t_5();
		NullCheck(L_167);
		L_167->set__t_5(L_169);
	}

IL_0325:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_170 = V_6;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_171 = __this->get__event_12();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_172 = V_8;
		float L_173 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_170, L_171, L_172, /*hidden argument*/NULL);
		if ((!(((float)L_173) <= ((float)(0.0f)))))
		{
			goto IL_0391;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_174 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_175 = V_0;
		int32_t L_176 = 1;
		V_11 = (bool)L_176;
		NullCheck(L_175);
		L_175->set__dirty_5((bool)L_176);
		bool L_177 = V_11;
		NullCheck(L_174);
		L_174->set__dirty_5(L_177);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_178 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_179 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_180 = V_2;
		NullCheck(L_180);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_181 = L_180->get__Sym_2();
		NullCheck(L_178);
		Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D(L_178, L_179, L_181, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_182 = V_2;
		NullCheck(L_182);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_183 = L_182->get__Org_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_184 = __this->get__event_12();
		NullCheck(L_184);
		float L_185 = L_184->get__s_4();
		NullCheck(L_183);
		L_183->set__s_4(L_185);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_186 = V_2;
		NullCheck(L_186);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_187 = L_186->get__Org_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_188 = __this->get__event_12();
		NullCheck(L_188);
		float L_189 = L_188->get__t_5();
		NullCheck(L_187);
		L_187->set__t_5(L_189);
	}

IL_0391:
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_190 = __this->get__pool_0();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_191 = V_8;
		NullCheck(L_190);
		GenericVirtActionInvoker1< Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * >::Invoke(IPool_Return_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_m3D509F9B1C89493E6305C273107A312B795A5D3C_RuntimeMethod_var, L_190, L_191);
		return (bool)0;
	}

IL_03a0:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_192 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_193 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_194 = V_1;
		NullCheck(L_194);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_195 = L_194->get__Sym_2();
		NullCheck(L_192);
		Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D(L_192, L_193, L_195, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_196 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_197 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_198 = V_2;
		NullCheck(L_198);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_199 = L_198->get__Sym_2();
		NullCheck(L_196);
		Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D(L_196, L_197, L_199, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_200 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_201 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_202 = V_2;
		NullCheck(L_202);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_203 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_202, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_204 = V_1;
		NullCheck(L_200);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_200, L_201, L_203, L_204, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_205 = V_1;
		NullCheck(L_205);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_206 = L_205->get__Org_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_207 = V_8;
		NullCheck(L_207);
		float L_208 = L_207->get__s_4();
		NullCheck(L_206);
		L_206->set__s_4(L_208);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_209 = V_1;
		NullCheck(L_209);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_210 = L_209->get__Org_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_211 = V_8;
		NullCheck(L_211);
		float L_212 = L_211->get__t_5();
		NullCheck(L_210);
		L_210->set__t_5(L_212);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_213 = __this->get__pool_0();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_214 = V_8;
		NullCheck(L_213);
		GenericVirtActionInvoker1< Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * >::Invoke(IPool_Return_TisVertex_t4F465A076E01C38DDFECD49182E99697E0810E74_m3D509F9B1C89493E6305C273107A312B795A5D3C_RuntimeMethod_var, L_213, L_214);
		V_8 = (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)NULL;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_215 = V_1;
		NullCheck(L_215);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_216 = L_215->get__Org_5();
		PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * L_217 = __this->get__pq_11();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_218 = V_1;
		NullCheck(L_218);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_219 = L_218->get__Org_5();
		NullCheck(L_217);
		PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF  L_220 = PriorityQueue_1_Insert_m210BD11DF16D9EC2F6F21B36FEE8AAF176D31903(L_217, L_219, /*hidden argument*/PriorityQueue_1_Insert_m210BD11DF16D9EC2F6F21B36FEE8AAF176D31903_RuntimeMethod_var);
		NullCheck(L_216);
		L_216->set__pqHandle_6(L_220);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_221 = V_1;
		NullCheck(L_221);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_222 = L_221->get__Org_5();
		NullCheck(L_222);
		PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF * L_223 = L_222->get_address_of__pqHandle_6();
		int32_t L_224 = L_223->get__handle_1();
		IL2CPP_RUNTIME_CLASS_INIT(PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF_il2cpp_TypeInfo_var);
		int32_t L_225 = ((PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF_il2cpp_TypeInfo_var))->get_Invalid_0();
		if ((!(((uint32_t)L_224) == ((uint32_t)L_225))))
		{
			goto IL_045a;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_226 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_226, _stringLiteralE37F21A4DD746C17845B88F51BE497A8854F2BF3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_226, Tess_CheckForIntersect_mEC69C5260C5D6C86AAA9280D638D35B0141A7B31_RuntimeMethod_var);
	}

IL_045a:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_227 = V_1;
		NullCheck(L_227);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_228 = L_227->get__Org_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_229 = V_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_230 = V_5;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_231 = V_4;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_232 = V_6;
		Tess_GetIntersectData_m6A8E7E2FAB33EC6C551C3F29ED146F10E1B811EA(__this, L_228, L_229, L_230, L_231, L_232, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_233 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_234 = Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72(__this, L_233, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_235 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_236 = V_0;
		int32_t L_237 = 1;
		V_11 = (bool)L_237;
		NullCheck(L_236);
		L_236->set__dirty_5((bool)L_237);
		bool L_238 = V_11;
		bool L_239 = L_238;
		V_11 = L_239;
		NullCheck(L_235);
		L_235->set__dirty_5(L_239);
		bool L_240 = V_11;
		NullCheck(L_234);
		L_234->set__dirty_5(L_240);
		return (bool)0;
	}
}
// System.Void LibTessDotNet.Tess::WalkDirtyRegions(LibTessDotNet.Tess_ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_m368066D69C19B49E40CA51E14FE6FE5AD000DD09 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, const RuntimeMethod* method)
{
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_1 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_000a:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_2 = V_0;
		___regUp0 = L_2;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_3 = V_0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_4 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0015:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->get__dirty_5();
		if (L_6)
		{
			goto IL_000a;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_7 = ___regUp0;
		NullCheck(L_7);
		bool L_8 = L_7->get__dirty_5();
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_9 = ___regUp0;
		V_0 = L_9;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_10 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_11 = Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72(__this, L_10, /*hidden argument*/NULL);
		___regUp0 = L_11;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_12 = ___regUp0;
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_13 = ___regUp0;
		NullCheck(L_13);
		bool L_14 = L_13->get__dirty_5();
		if (L_14)
		{
			goto IL_003c;
		}
	}

IL_003b:
	{
		return;
	}

IL_003c:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_15 = ___regUp0;
		NullCheck(L_15);
		L_15->set__dirty_5((bool)0);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_16 = ___regUp0;
		NullCheck(L_16);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = L_16->get__eUp_0();
		V_1 = L_17;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_18 = V_0;
		NullCheck(L_18);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = L_18->get__eUp_0();
		V_2 = L_19;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = V_1;
		NullCheck(L_20);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_20, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_2;
		NullCheck(L_22);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_23 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_22, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_21) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_23)))
		{
			goto IL_00cb;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_24 = ___regUp0;
		bool L_25 = Tess_CheckForLeftSplice_m04645DAEF38D042828CA2E7F1A8F27942A3B0502(__this, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00cb;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->get__fixUpperEdge_6();
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_28 = V_0;
		Tess_DeleteRegion_m09FC665365F882F15561EDF9F4EBC94DD780599F(__this, L_28, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_29 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_30 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_31 = V_2;
		NullCheck(L_29);
		Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569(L_29, L_30, L_31, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_32 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_33 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_34 = V_0;
		NullCheck(L_34);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_35 = L_34->get__eUp_0();
		V_2 = L_35;
		goto IL_00cb;
	}

IL_009a:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_36 = ___regUp0;
		NullCheck(L_36);
		bool L_37 = L_36->get__fixUpperEdge_6();
		if (!L_37)
		{
			goto IL_00cb;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_38 = ___regUp0;
		Tess_DeleteRegion_m09FC665365F882F15561EDF9F4EBC94DD780599F(__this, L_38, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_39 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_40 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_41 = V_1;
		NullCheck(L_39);
		Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569(L_39, L_40, L_41, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_42 = V_0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_43 = Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72(__this, L_42, /*hidden argument*/NULL);
		___regUp0 = L_43;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_44 = ___regUp0;
		NullCheck(L_44);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_45 = L_44->get__eUp_0();
		V_1 = L_45;
	}

IL_00cb:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_46 = V_1;
		NullCheck(L_46);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_47 = L_46->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_48 = V_2;
		NullCheck(L_48);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_49 = L_48->get__Org_5();
		if ((((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_47) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_49)))
		{
			goto IL_0125;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_50 = V_1;
		NullCheck(L_50);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_51 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_50, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_52 = V_2;
		NullCheck(L_52);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_53 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_52, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_51) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_53)))
		{
			goto IL_011d;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_54 = ___regUp0;
		NullCheck(L_54);
		bool L_55 = L_54->get__fixUpperEdge_6();
		if (L_55)
		{
			goto IL_011d;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_56 = V_0;
		NullCheck(L_56);
		bool L_57 = L_56->get__fixUpperEdge_6();
		if (L_57)
		{
			goto IL_011d;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_58 = V_1;
		NullCheck(L_58);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_59 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_58, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_60 = __this->get__event_12();
		if ((((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_59) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_60)))
		{
			goto IL_0113;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_61 = V_2;
		NullCheck(L_61);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_62 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_61, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_63 = __this->get__event_12();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_62) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_63))))
		{
			goto IL_011d;
		}
	}

IL_0113:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_64 = ___regUp0;
		bool L_65 = Tess_CheckForIntersect_mEC69C5260C5D6C86AAA9280D638D35B0141A7B31(__this, L_64, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_0125;
		}
	}
	{
		return;
	}

IL_011d:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_66 = ___regUp0;
		Tess_CheckForRightSplice_mBCE374F27191B9106F7D2C162877381577646FD4(__this, L_66, /*hidden argument*/NULL);
	}

IL_0125:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_67 = V_1;
		NullCheck(L_67);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_68 = L_67->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_69 = V_2;
		NullCheck(L_69);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_70 = L_69->get__Org_5();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_68) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_70))))
		{
			goto IL_0015;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_71 = V_1;
		NullCheck(L_71);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_72 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_71, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_73 = V_2;
		NullCheck(L_73);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_74 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_73, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_72) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_74))))
		{
			goto IL_0015;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_75 = V_2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_76 = V_1;
		Geom_AddWinding_m5DF2B42952089632105DC661DB183D970F37BE79(L_75, L_76, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_77 = ___regUp0;
		Tess_DeleteRegion_m09FC665365F882F15561EDF9F4EBC94DD780599F(__this, L_77, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_78 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_79 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_80 = V_1;
		NullCheck(L_78);
		Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569(L_78, L_79, L_80, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_81 = V_0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_82 = Tess_RegionAbove_m839B84FE5E82CDEB64E7173E727B91EE5BD98B72(__this, L_81, /*hidden argument*/NULL);
		___regUp0 = L_82;
		goto IL_0015;
	}
}
// System.Void LibTessDotNet.Tess::ConnectRightVertex(LibTessDotNet.Tess_ActiveRegion,LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_mD24B6D268D5B5E502A6BFE612F875272E200F9C0 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___eBottomLeft1, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_3 = NULL;
	bool V_4 = false;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_5 = NULL;
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = ___eBottomLeft1;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__Onext_3();
		V_0 = L_1;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_2 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_3 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_4 = ___regUp0;
		NullCheck(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4->get__eUp_0();
		V_2 = L_5;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_6 = V_1;
		NullCheck(L_6);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = L_6->get__eUp_0();
		V_3 = L_7;
		V_4 = (bool)0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_2;
		NullCheck(L_8);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_8, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = V_3;
		NullCheck(L_10);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_11 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_10, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_9) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_11)))
		{
			goto IL_0036;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_12 = ___regUp0;
		Tess_CheckForIntersect_mEC69C5260C5D6C86AAA9280D638D35B0141A7B31(__this, L_12, /*hidden argument*/NULL);
	}

IL_0036:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_2;
		NullCheck(L_13);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = L_13->get__Org_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_15 = __this->get__event_12();
		bool L_16 = Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_17 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_18 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = V_0;
		NullCheck(L_19);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_19, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_21 = V_2;
		NullCheck(L_17);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_17, L_18, L_20, L_21, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_22 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_23 = Tess_TopLeftRegion_mC452E1606EEF37BD74E63A7D0F2111D7B4E15AC7(__this, L_22, /*hidden argument*/NULL);
		___regUp0 = L_23;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_24 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_25 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = L_25->get__eUp_0();
		V_0 = L_26;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_27 = ___regUp0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_28 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_27, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_29 = V_1;
		Tess_FinishLeftRegions_m3EA3296FB1DD51D441A52208CE54C6A51A6EC436(__this, L_28, L_29, /*hidden argument*/NULL);
		V_4 = (bool)1;
	}

IL_0089:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = V_3;
		NullCheck(L_30);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_31 = L_30->get__Org_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_32 = __this->get__event_12();
		bool L_33 = Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F(L_31, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00c1;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_34 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_35 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_36 = ___eBottomLeft1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_37 = V_3;
		NullCheck(L_37);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_38 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_37, /*hidden argument*/NULL);
		NullCheck(L_34);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_34, L_35, L_36, L_38, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_39 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_40 = Tess_FinishLeftRegions_m3EA3296FB1DD51D441A52208CE54C6A51A6EC436(__this, L_39, (ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)NULL, /*hidden argument*/NULL);
		___eBottomLeft1 = L_40;
		V_4 = (bool)1;
	}

IL_00c1:
	{
		bool L_41 = V_4;
		if (!L_41)
		{
			goto IL_00d6;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_42 = ___regUp0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_43 = ___eBottomLeft1;
		NullCheck(L_43);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_44 = L_43->get__Onext_3();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_45 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_46 = V_0;
		Tess_AddRightEdges_mB5A22420B7105E46334A2CA6215FBF41AF4DC3DD(__this, L_42, L_44, L_45, L_46, (bool)1, /*hidden argument*/NULL);
		return;
	}

IL_00d6:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_47 = V_3;
		NullCheck(L_47);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_48 = L_47->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_49 = V_2;
		NullCheck(L_49);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_50 = L_49->get__Org_5();
		bool L_51 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_48, L_50, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_00f3;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_52 = V_3;
		NullCheck(L_52);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_53 = Edge_get__Oprev_m1089565022943E8A05DA3D1D1C889C9FF520CEE5(L_52, /*hidden argument*/NULL);
		V_5 = L_53;
		goto IL_00f6;
	}

IL_00f3:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_54 = V_2;
		V_5 = L_54;
	}

IL_00f6:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_55 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_56 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_57 = ___eBottomLeft1;
		NullCheck(L_57);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_58 = Edge_get__Lprev_mAB87D419866AD8C3D304903083077126026F5642(L_57, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_59 = V_5;
		NullCheck(L_55);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_60 = Mesh_Connect_mBBFA4558B503ABE38484323A12968B1FA40A4C34(L_55, L_56, L_58, L_59, /*hidden argument*/NULL);
		V_5 = L_60;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_61 = ___regUp0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_62 = V_5;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_63 = V_5;
		NullCheck(L_63);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_64 = L_63->get__Onext_3();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_65 = V_5;
		NullCheck(L_65);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_66 = L_65->get__Onext_3();
		Tess_AddRightEdges_mB5A22420B7105E46334A2CA6215FBF41AF4DC3DD(__this, L_61, L_62, L_64, L_66, (bool)0, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_67 = V_5;
		NullCheck(L_67);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_68 = L_67->get__Sym_2();
		NullCheck(L_68);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_69 = L_68->get__activeRegion_7();
		NullCheck(L_69);
		L_69->set__fixUpperEdge_6((bool)1);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_70 = ___regUp0;
		Tess_WalkDirtyRegions_m368066D69C19B49E40CA51E14FE6FE5AD000DD09(__this, L_70, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::ConnectLeftDegenerate(LibTessDotNet.Tess_ActiveRegion,LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_m738FDCB762490B50187769FC0DEED2C4437304E9 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * ___regUp0, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___vEvent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_ConnectLeftDegenerate_m738FDCB762490B50187769FC0DEED2C4437304E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = ___regUp0;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__eUp_0();
		V_0 = L_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = V_0;
		NullCheck(L_2);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_3 = L_2->get__Org_5();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = ___vEvent1;
		bool L_5 = Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_6 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_6, _stringLiteralC5291FFB9CA0B17568779560CB4F9B2661EDA320, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Tess_ConnectLeftDegenerate_m738FDCB762490B50187769FC0DEED2C4437304E9_RuntimeMethod_var);
	}

IL_0020:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = V_0;
		NullCheck(L_7);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_7, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = ___vEvent1;
		bool L_10 = Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F(L_8, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_008c;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_11 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_12 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_0;
		NullCheck(L_13);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_14 = L_13->get__Sym_2();
		NullCheck(L_11);
		Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D(L_11, L_12, L_14, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_15 = ___regUp0;
		NullCheck(L_15);
		bool L_16 = L_15->get__fixUpperEdge_6();
		if (!L_16)
		{
			goto IL_006c;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_17 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_18 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = V_0;
		NullCheck(L_19);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = L_19->get__Onext_3();
		NullCheck(L_17);
		Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569(L_17, L_18, L_20, /*hidden argument*/NULL);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_21 = ___regUp0;
		NullCheck(L_21);
		L_21->set__fixUpperEdge_6((bool)0);
	}

IL_006c:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_22 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_23 = __this->get__pool_0();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_24 = ___vEvent1;
		NullCheck(L_24);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = L_24->get__anEdge_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = V_0;
		NullCheck(L_22);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_22, L_23, L_25, L_26, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_27 = ___vEvent1;
		Tess_SweepEvent_mF827B2E5D8C4DC26737038494874BCCA3F142B4F(__this, L_27, /*hidden argument*/NULL);
		return;
	}

IL_008c:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_28 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_28, _stringLiteralC5291FFB9CA0B17568779560CB4F9B2661EDA320, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, Tess_ConnectLeftDegenerate_m738FDCB762490B50187769FC0DEED2C4437304E9_RuntimeMethod_var);
	}
}
// System.Void LibTessDotNet.Tess::ConnectLeftVertex(LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_mB1E11B0555BB7AEAF13C439035F41F59BE6DE0F9 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___vEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_ConnectLeftVertex_mB1E11B0555BB7AEAF13C439035F41F59BE6DE0F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_0 = NULL;
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_1 = NULL;
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_2 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_3 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_4 = NULL;
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_5 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_6 = NULL;
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * G_B7_0 = NULL;
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_0 = __this->get__pool_0();
		NullCheck(L_0);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_1 = GenericVirtFuncInvoker0< ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * >::Invoke(IPool_Get_TisActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0_m5B2020E08BEA48555D154FF9E597E96EEA6109E9_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_2 = V_0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_3 = ___vEvent0;
		NullCheck(L_3);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = L_3->get__anEdge_2();
		NullCheck(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4->get__Sym_2();
		NullCheck(L_2);
		L_2->set__eUp_0(L_5);
		Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * L_6 = __this->get__dict_10();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_7 = V_0;
		NullCheck(L_6);
		Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * L_8 = Dict_1_Find_m8AEF3B8D8D00938EEB1E307558C9D63A9D44285E(L_6, L_7, /*hidden argument*/Dict_1_Find_m8AEF3B8D8D00938EEB1E307558C9D63A9D44285E_RuntimeMethod_var);
		NullCheck(L_8);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_9 = Node_get_Key_m1D4C78ADD8C0C08EFC01FA0EC80920D775D515DA_inline(L_8, /*hidden argument*/Node_get_Key_m1D4C78ADD8C0C08EFC01FA0EC80920D775D515DA_RuntimeMethod_var);
		V_1 = L_9;
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_10 = __this->get__pool_0();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_11 = V_0;
		NullCheck(L_10);
		GenericVirtActionInvoker1< ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * >::Invoke(IPool_Return_TisActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0_m6D2B667821C6A1413C2F119839B6B16F375CA1C9_RuntimeMethod_var, L_10, L_11);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_12 = V_1;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_13 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_14 = V_2;
		if (L_14)
		{
			goto IL_0047;
		}
	}
	{
		return;
	}

IL_0047:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_15 = V_1;
		NullCheck(L_15);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_16 = L_15->get__eUp_0();
		V_3 = L_16;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_17 = V_2;
		NullCheck(L_17);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = L_17->get__eUp_0();
		V_4 = L_18;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = V_3;
		NullCheck(L_19);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_20 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_19, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = ___vEvent0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_3;
		NullCheck(L_22);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_23 = L_22->get__Org_5();
		float L_24 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_20, L_21, L_23, /*hidden argument*/NULL);
		if ((!(((float)L_24) == ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_25 = V_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_26 = ___vEvent0;
		Tess_ConnectLeftDegenerate_m738FDCB762490B50187769FC0DEED2C4437304E9(__this, L_25, L_26, /*hidden argument*/NULL);
		return;
	}

IL_0078:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_27 = V_4;
		NullCheck(L_27);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_28 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_27, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = V_3;
		NullCheck(L_29);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_30 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_29, /*hidden argument*/NULL);
		bool L_31 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_28, L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_008f;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_32 = V_2;
		G_B7_0 = L_32;
		goto IL_0090;
	}

IL_008f:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_33 = V_1;
		G_B7_0 = L_33;
	}

IL_0090:
	{
		V_5 = G_B7_0;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_34 = V_1;
		NullCheck(L_34);
		bool L_35 = L_34->get__inside_3();
		if (L_35)
		{
			goto IL_00a3;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_36 = V_5;
		NullCheck(L_36);
		bool L_37 = L_36->get__fixUpperEdge_6();
		if (!L_37)
		{
			goto IL_011f;
		}
	}

IL_00a3:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_38 = V_5;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_39 = V_1;
		if ((!(((RuntimeObject*)(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)L_38) == ((RuntimeObject*)(ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)L_39))))
		{
			goto IL_00ce;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_40 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_41 = __this->get__pool_0();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_42 = ___vEvent0;
		NullCheck(L_42);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_43 = L_42->get__anEdge_2();
		NullCheck(L_43);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_44 = L_43->get__Sym_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_45 = V_3;
		NullCheck(L_45);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_46 = L_45->get__Lnext_4();
		NullCheck(L_40);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_47 = Mesh_Connect_mBBFA4558B503ABE38484323A12968B1FA40A4C34(L_40, L_41, L_44, L_46, /*hidden argument*/NULL);
		V_6 = L_47;
		goto IL_00f3;
	}

IL_00ce:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_48 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_49 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_50 = V_4;
		NullCheck(L_50);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_51 = Edge_get__Dnext_mBD1F7F0FEF80A7ABD27020BD6A25E20DEA19B127(L_50, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_52 = ___vEvent0;
		NullCheck(L_52);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_53 = L_52->get__anEdge_2();
		NullCheck(L_48);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_54 = Mesh_Connect_mBBFA4558B503ABE38484323A12968B1FA40A4C34(L_48, L_49, L_51, L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_55 = L_54->get__Sym_2();
		V_6 = L_55;
	}

IL_00f3:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_56 = V_5;
		NullCheck(L_56);
		bool L_57 = L_56->get__fixUpperEdge_6();
		if (!L_57)
		{
			goto IL_0108;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_58 = V_5;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_59 = V_6;
		Tess_FixUpperEdge_m0B04206ADD778EA722886CA1C3A7E173D5BCDFEA(__this, L_58, L_59, /*hidden argument*/NULL);
		goto IL_0117;
	}

IL_0108:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_60 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_61 = V_6;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_62 = Tess_AddRegionBelow_mCA582E60803B6331D7B69222DE1F6F9C51C856D9(__this, L_60, L_61, /*hidden argument*/NULL);
		Tess_ComputeWinding_m72877A869B04B1FC49A6863593D3F9130E467231(__this, L_62, /*hidden argument*/NULL);
	}

IL_0117:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_63 = ___vEvent0;
		Tess_SweepEvent_mF827B2E5D8C4DC26737038494874BCCA3F142B4F(__this, L_63, /*hidden argument*/NULL);
		return;
	}

IL_011f:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_64 = V_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_65 = ___vEvent0;
		NullCheck(L_65);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_66 = L_65->get__anEdge_2();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_67 = ___vEvent0;
		NullCheck(L_67);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_68 = L_67->get__anEdge_2();
		Tess_AddRightEdges_mB5A22420B7105E46334A2CA6215FBF41AF4DC3DD(__this, L_64, L_66, L_68, (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::SweepEvent(LibTessDotNet.MeshUtils_Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_mF827B2E5D8C4DC26737038494874BCCA3F142B4F (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * ___vEvent0, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_1 = NULL;
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_2 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_3 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_4 = NULL;
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_0 = ___vEvent0;
		__this->set__event_12(L_0);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = ___vEvent0;
		NullCheck(L_1);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = L_1->get__anEdge_2();
		V_0 = L_2;
		goto IL_0028;
	}

IL_0010:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = V_0;
		NullCheck(L_3);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = L_3->get__Onext_3();
		V_0 = L_4;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = V_0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = ___vEvent0;
		NullCheck(L_6);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = L_6->get__anEdge_2();
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_5) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_7))))
		{
			goto IL_0028;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = ___vEvent0;
		Tess_ConnectLeftVertex_mB1E11B0555BB7AEAF13C439035F41F59BE6DE0F9(__this, L_8, /*hidden argument*/NULL);
		return;
	}

IL_0028:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = V_0;
		NullCheck(L_9);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_10 = L_9->get__activeRegion_7();
		if (!L_10)
		{
			goto IL_0010;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = V_0;
		NullCheck(L_11);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_12 = L_11->get__activeRegion_7();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_13 = Tess_TopLeftRegion_mC452E1606EEF37BD74E63A7D0F2111D7B4E15AC7(__this, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_14 = V_1;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_15 = Tess_RegionBelow_mC51CB435D37FE688A65596C8FC3339424893780B(__this, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_16 = V_2;
		NullCheck(L_16);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = L_16->get__eUp_0();
		V_3 = L_17;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_18 = V_2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_19 = Tess_FinishLeftRegions_m3EA3296FB1DD51D441A52208CE54C6A51A6EC436(__this, L_18, (ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_19;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = V_4;
		NullCheck(L_20);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_21 = L_20->get__Onext_3();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_3;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_21) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_22))))
		{
			goto IL_006a;
		}
	}
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_23 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_24 = V_4;
		Tess_ConnectRightVertex_mD24B6D268D5B5E502A6BFE612F875272E200F9C0(__this, L_23, L_24, /*hidden argument*/NULL);
		return;
	}

IL_006a:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_25 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = V_4;
		NullCheck(L_26);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_27 = L_26->get__Onext_3();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_28 = V_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = V_3;
		Tess_AddRightEdges_mB5A22420B7105E46334A2CA6215FBF41AF4DC3DD(__this, L_25, L_27, L_28, L_29, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::AddSentinel(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m5831E20DF2E4273561DA850EB911E7771E9C01C1 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, float ___smin0, float ___smax1, float ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_AddSentinel_m5831E20DF2E4273561DA850EB911E7771E9C01C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_1 = NULL;
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_0 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_1 = __this->get__pool_0();
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = Mesh_MakeEdge_m4241A4DBE65EF0587002E3EEFE1EC895E474E577(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = V_0;
		NullCheck(L_3);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = L_3->get__Org_5();
		float L_5 = ___smax1;
		NullCheck(L_4);
		L_4->set__s_4(L_5);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = V_0;
		NullCheck(L_6);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = L_6->get__Org_5();
		float L_8 = ___t2;
		NullCheck(L_7);
		L_7->set__t_5(L_8);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = V_0;
		NullCheck(L_9);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_9, /*hidden argument*/NULL);
		float L_11 = ___smin0;
		NullCheck(L_10);
		L_10->set__s_4(L_11);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = V_0;
		NullCheck(L_12);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_13 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_12, /*hidden argument*/NULL);
		float L_14 = ___t2;
		NullCheck(L_13);
		L_13->set__t_5(L_14);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = V_0;
		NullCheck(L_15);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_15, /*hidden argument*/NULL);
		__this->set__event_12(L_16);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_17 = __this->get__pool_0();
		NullCheck(L_17);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_18 = GenericVirtFuncInvoker0< ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * >::Invoke(IPool_Get_TisActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0_m5B2020E08BEA48555D154FF9E597E96EEA6109E9_RuntimeMethod_var, L_17);
		V_1 = L_18;
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_19 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = V_0;
		NullCheck(L_19);
		L_19->set__eUp_0(L_20);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_21 = V_1;
		NullCheck(L_21);
		L_21->set__windingNumber_2(0);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_22 = V_1;
		NullCheck(L_22);
		L_22->set__inside_3((bool)0);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_23 = V_1;
		NullCheck(L_23);
		L_23->set__fixUpperEdge_6((bool)0);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_24 = V_1;
		NullCheck(L_24);
		L_24->set__sentinel_4((bool)1);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_25 = V_1;
		NullCheck(L_25);
		L_25->set__dirty_5((bool)0);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_26 = V_1;
		Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * L_27 = __this->get__dict_10();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_28 = V_1;
		NullCheck(L_27);
		Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * L_29 = Dict_1_Insert_mEBFF89F4578CC084F9222521D69DEC96542F3198(L_27, L_28, /*hidden argument*/Dict_1_Insert_mEBFF89F4578CC084F9222521D69DEC96542F3198_RuntimeMethod_var);
		NullCheck(L_26);
		L_26->set__nodeUp_1(L_29);
		return;
	}
}
// System.Void LibTessDotNet.Tess::InitEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_mE13A9DA171D5680282222A4CB0C68C0E8E157D56 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_InitEdgeDict_mE13A9DA171D5680282222A4CB0C68C0E8E157D56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE * L_0 = (LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE *)il2cpp_codegen_object_new(LessOrEqual_t4A27877E24F8E516431572009E17642BB26B16EE_il2cpp_TypeInfo_var);
		LessOrEqual__ctor_m5AED739F8EB55ACB8D5F2DA57CEEAC1D1C0CED42(L_0, __this, (intptr_t)((intptr_t)Tess_EdgeLeq_mF98D3A9B7A2D4F255C081FCAFAB2E2A559B5F402_RuntimeMethod_var), /*hidden argument*/LessOrEqual__ctor_m5AED739F8EB55ACB8D5F2DA57CEEAC1D1C0CED42_RuntimeMethod_var);
		Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * L_1 = (Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 *)il2cpp_codegen_object_new(Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93_il2cpp_TypeInfo_var);
		Dict_1__ctor_m1639F7726FB18B4283DCAAA2194FFEC89E74F20D(L_1, L_0, /*hidden argument*/Dict_1__ctor_m1639F7726FB18B4283DCAAA2194FFEC89E74F20D_RuntimeMethod_var);
		__this->set__dict_10(L_1);
		float L_2 = __this->get_SentinelCoord_20();
		float L_3 = __this->get_SentinelCoord_20();
		float L_4 = __this->get_SentinelCoord_20();
		Tess_AddSentinel_m5831E20DF2E4273561DA850EB911E7771E9C01C1(__this, ((-L_2)), L_3, ((-L_4)), /*hidden argument*/NULL);
		float L_5 = __this->get_SentinelCoord_20();
		float L_6 = __this->get_SentinelCoord_20();
		float L_7 = __this->get_SentinelCoord_20();
		Tess_AddSentinel_m5831E20DF2E4273561DA850EB911E7771E9C01C1(__this, ((-L_5)), L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::DoneEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m013C7985D78AE32DB59B89B746DCDBA5E76523FB (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_DoneEdgeDict_m013C7985D78AE32DB59B89B746DCDBA5E76523FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * V_0 = NULL;
	{
		goto IL_0010;
	}

IL_0002:
	{
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_0 = V_0;
		NullCheck(L_0);
		bool L_1 = L_0->get__sentinel_4();
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_2 = V_0;
		Tess_DeleteRegion_m09FC665365F882F15561EDF9F4EBC94DD780599F(__this, L_2, /*hidden argument*/NULL);
	}

IL_0010:
	{
		Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 * L_3 = __this->get__dict_10();
		NullCheck(L_3);
		Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 * L_4 = Dict_1_Min_mC2088BFE1CABE431F7ABF9EEE814BDDCB8F2BECC(L_3, /*hidden argument*/Dict_1_Min_mC2088BFE1CABE431F7ABF9EEE814BDDCB8F2BECC_RuntimeMethod_var);
		NullCheck(L_4);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_5 = Node_get_Key_m1D4C78ADD8C0C08EFC01FA0EC80920D775D515DA_inline(L_4, /*hidden argument*/Node_get_Key_m1D4C78ADD8C0C08EFC01FA0EC80920D775D515DA_RuntimeMethod_var);
		ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		__this->set__dict_10((Dict_1_tFD5CD983E08CCF8162A6E75DB3BB7DE8FFD84B93 *)NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::RemoveDegenerateEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_m8645010FF24CA8EEEED37B1B0C8CBCBBC5D3271F (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_3 = NULL;
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_0 = __this->get__mesh_1();
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__eHead_2();
		V_0 = L_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = V_0;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = L_2->get__next_1();
		V_1 = L_3;
		goto IL_00c5;
	}

IL_0018:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = V_1;
		NullCheck(L_4);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = L_4->get__next_1();
		V_2 = L_5;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = V_1;
		NullCheck(L_6);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = L_6->get__Lnext_4();
		V_3 = L_7;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_1;
		NullCheck(L_8);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = L_8->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = V_1;
		NullCheck(L_10);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_11 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_10, /*hidden argument*/NULL);
		bool L_12 = Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_1;
		NullCheck(L_13);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_14 = L_13->get__Lnext_4();
		NullCheck(L_14);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_15 = L_14->get__Lnext_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_16 = V_1;
		if ((((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_15) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = V_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = V_1;
		Tess_SpliceMergeVertices_m00A092F18FE2EB4E37497E0BE4750D09FB23084E(__this, L_17, L_18, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_19 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_20 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_21 = V_1;
		NullCheck(L_19);
		Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569(L_19, L_20, L_21, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_3;
		V_1 = L_22;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_23 = V_1;
		NullCheck(L_23);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_24 = L_23->get__Lnext_4();
		V_3 = L_24;
	}

IL_006a:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = V_3;
		NullCheck(L_25);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = L_25->get__Lnext_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_27 = V_1;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_26) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_27))))
		{
			goto IL_00c3;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_28 = V_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = V_1;
		if ((((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_28) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_29)))
		{
			goto IL_009d;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = V_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_31 = V_2;
		if ((((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_30) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_31)))
		{
			goto IL_0084;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_32 = V_3;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_33 = V_2;
		NullCheck(L_33);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_34 = L_33->get__Sym_2();
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_32) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_34))))
		{
			goto IL_008b;
		}
	}

IL_0084:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_35 = V_2;
		NullCheck(L_35);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_36 = L_35->get__next_1();
		V_2 = L_36;
	}

IL_008b:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_37 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_38 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_39 = V_3;
		NullCheck(L_37);
		Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569(L_37, L_38, L_39, /*hidden argument*/NULL);
	}

IL_009d:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_40 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_41 = V_2;
		if ((((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_40) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_41)))
		{
			goto IL_00aa;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_42 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_43 = V_2;
		NullCheck(L_43);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_44 = L_43->get__Sym_2();
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_42) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_44))))
		{
			goto IL_00b1;
		}
	}

IL_00aa:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_45 = V_2;
		NullCheck(L_45);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_46 = L_45->get__next_1();
		V_2 = L_46;
	}

IL_00b1:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_47 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_48 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_49 = V_1;
		NullCheck(L_47);
		Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569(L_47, L_48, L_49, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_50 = V_2;
		V_1 = L_50;
	}

IL_00c5:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_51 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_52 = V_0;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_51) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_52))))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::InitPriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m2245BE6201F58F750BB0EEBC98A42C88031A602D (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_InitPriorityQ_m2245BE6201F58F750BB0EEBC98A42C88031A602D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_0 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_0 = __this->get__mesh_1();
		NullCheck(L_0);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = L_0->get__vHead_0();
		V_0 = L_1;
		V_2 = 0;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = V_0;
		NullCheck(L_2);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_3 = L_2->get__next_1();
		V_1 = L_3;
		goto IL_0022;
	}

IL_0017:
	{
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_5 = V_1;
		NullCheck(L_5);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = L_5->get__next_1();
		V_1 = L_6;
	}

IL_0022:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = V_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = V_0;
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_7) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_8))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)8));
		int32_t L_10 = V_2;
		LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33 * L_11 = (LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33 *)il2cpp_codegen_object_new(LessOrEqual_tD385D24726C579BAAFFC96C7C88272821D556F33_il2cpp_TypeInfo_var);
		LessOrEqual__ctor_m6B65224E4AC4AA7ABC26F578FC18265B20AA07C6(L_11, NULL, (intptr_t)((intptr_t)Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB_RuntimeMethod_var), /*hidden argument*/LessOrEqual__ctor_m6B65224E4AC4AA7ABC26F578FC18265B20AA07C6_RuntimeMethod_var);
		PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * L_12 = (PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D *)il2cpp_codegen_object_new(PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D_il2cpp_TypeInfo_var);
		PriorityQueue_1__ctor_m381E6876563040423799A6672756687E7604E81F(L_12, L_10, L_11, /*hidden argument*/PriorityQueue_1__ctor_m381E6876563040423799A6672756687E7604E81F_RuntimeMethod_var);
		__this->set__pq_11(L_12);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_13 = __this->get__mesh_1();
		NullCheck(L_13);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = L_13->get__vHead_0();
		V_0 = L_14;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_15 = V_0;
		NullCheck(L_15);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = L_15->get__next_1();
		V_1 = L_16;
		goto IL_008d;
	}

IL_0057:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_17 = V_1;
		PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * L_18 = __this->get__pq_11();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_19 = V_1;
		NullCheck(L_18);
		PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF  L_20 = PriorityQueue_1_Insert_m210BD11DF16D9EC2F6F21B36FEE8AAF176D31903(L_18, L_19, /*hidden argument*/PriorityQueue_1_Insert_m210BD11DF16D9EC2F6F21B36FEE8AAF176D31903_RuntimeMethod_var);
		NullCheck(L_17);
		L_17->set__pqHandle_6(L_20);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = V_1;
		NullCheck(L_21);
		PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF * L_22 = L_21->get_address_of__pqHandle_6();
		int32_t L_23 = L_22->get__handle_1();
		IL2CPP_RUNTIME_CLASS_INIT(PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF_il2cpp_TypeInfo_var);
		int32_t L_24 = ((PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t403B2D37C562CF1573A2F501772BBAB4D87AB8BF_il2cpp_TypeInfo_var))->get_Invalid_0();
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0086;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_25 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_25, _stringLiteralE37F21A4DD746C17845B88F51BE497A8854F2BF3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, Tess_InitPriorityQ_m2245BE6201F58F750BB0EEBC98A42C88031A602D_RuntimeMethod_var);
	}

IL_0086:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_26 = V_1;
		NullCheck(L_26);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_27 = L_26->get__next_1();
		V_1 = L_27;
	}

IL_008d:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_28 = V_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_29 = V_0;
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_28) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_29))))
		{
			goto IL_0057;
		}
	}
	{
		PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * L_30 = __this->get__pq_11();
		NullCheck(L_30);
		PriorityQueue_1_Init_m743812FB3581ADE73C6952B93DD47AC5E059F996(L_30, /*hidden argument*/PriorityQueue_1_Init_m743812FB3581ADE73C6952B93DD47AC5E059F996_RuntimeMethod_var);
		return;
	}
}
// System.Void LibTessDotNet.Tess::DonePriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m6E6EAE3837F974E1BCD5CCEE1445C0F063ABB60B (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	{
		__this->set__pq_11((PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D *)NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::RemoveDegenerateFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_mC3FCC29B30AA8236B0068A21DF07F8E8FC393981 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_0 = NULL;
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_0 = __this->get__mesh_1();
		NullCheck(L_0);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_1 = L_0->get__fHead_1();
		NullCheck(L_1);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_2 = L_1->get__next_1();
		V_0 = L_2;
		goto IL_004f;
	}

IL_0013:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_3 = V_0;
		NullCheck(L_3);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_4 = L_3->get__next_1();
		V_1 = L_4;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_5 = V_0;
		NullCheck(L_5);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = L_5->get__anEdge_2();
		V_2 = L_6;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = V_2;
		NullCheck(L_7);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = L_7->get__Lnext_4();
		NullCheck(L_8);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = L_8->get__Lnext_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = V_2;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_9) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_10))))
		{
			goto IL_004d;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = V_2;
		NullCheck(L_11);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = L_11->get__Onext_3();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_2;
		Geom_AddWinding_m5DF2B42952089632105DC661DB183D970F37BE79(L_12, L_13, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_14 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_15 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_16 = V_2;
		NullCheck(L_14);
		Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569(L_14, L_15, L_16, /*hidden argument*/NULL);
	}

IL_004d:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_17 = V_1;
		V_0 = L_17;
	}

IL_004f:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_18 = V_0;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_19 = __this->get__mesh_1();
		NullCheck(L_19);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_20 = L_19->get__fHead_1();
		if ((!(((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_18) == ((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_20))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::ComputeInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_m588F9F9D24E9984FE4D90D819CB19EA82192C1F4 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_ComputeInterior_m588F9F9D24E9984FE4D90D819CB19EA82192C1F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_0 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_1 = NULL;
	{
		Tess_RemoveDegenerateEdges_m8645010FF24CA8EEEED37B1B0C8CBCBBC5D3271F(__this, /*hidden argument*/NULL);
		Tess_InitPriorityQ_m2245BE6201F58F750BB0EEBC98A42C88031A602D(__this, /*hidden argument*/NULL);
		Tess_RemoveDegenerateFaces_mC3FCC29B30AA8236B0068A21DF07F8E8FC393981(__this, /*hidden argument*/NULL);
		Tess_InitEdgeDict_mE13A9DA171D5680282222A4CB0C68C0E8E157D56(__this, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_001a:
	{
		PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * L_0 = __this->get__pq_11();
		NullCheck(L_0);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = PriorityQueue_1_Minimum_m59CF95646AF8055F52FD1945E7AAE8D614A22CA5(L_0, /*hidden argument*/PriorityQueue_1_Minimum_m59CF95646AF8055F52FD1945E7AAE8D614A22CA5_RuntimeMethod_var);
		V_1 = L_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_3 = V_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_4 = V_0;
		bool L_5 = Geom_VertEq_m6535BA99BADFCA1D4BE151E859C93FF1D0E0B27F(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * L_6 = __this->get__pq_11();
		NullCheck(L_6);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = PriorityQueue_1_ExtractMin_m0A2011DC9AA923203CCD0665D59D3AEC52915619(L_6, /*hidden argument*/PriorityQueue_1_ExtractMin_m0A2011DC9AA923203CCD0665D59D3AEC52915619_RuntimeMethod_var);
		V_1 = L_7;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = V_0;
		NullCheck(L_8);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = L_8->get__anEdge_2();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = V_1;
		NullCheck(L_10);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = L_10->get__anEdge_2();
		Tess_SpliceMergeVertices_m00A092F18FE2EB4E37497E0BE4750D09FB23084E(__this, L_9, L_11, /*hidden argument*/NULL);
		goto IL_001a;
	}

IL_0052:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = V_0;
		Tess_SweepEvent_mF827B2E5D8C4DC26737038494874BCCA3F142B4F(__this, L_12, /*hidden argument*/NULL);
	}

IL_0059:
	{
		PriorityQueue_1_tF23440CF832F84219107823833B1984FF75A7B9D * L_13 = __this->get__pq_11();
		NullCheck(L_13);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = PriorityQueue_1_ExtractMin_m0A2011DC9AA923203CCD0665D59D3AEC52915619(L_13, /*hidden argument*/PriorityQueue_1_ExtractMin_m0A2011DC9AA923203CCD0665D59D3AEC52915619_RuntimeMethod_var);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_15 = L_14;
		V_0 = L_15;
		if (L_15)
		{
			goto IL_001a;
		}
	}
	{
		Tess_DoneEdgeDict_m013C7985D78AE32DB59B89B746DCDBA5E76523FB(__this, /*hidden argument*/NULL);
		Tess_DonePriorityQ_m6E6EAE3837F974E1BCD5CCEE1445C0F063ABB60B(__this, /*hidden argument*/NULL);
		Tess_RemoveDegenerateFaces_mC3FCC29B30AA8236B0068A21DF07F8E8FC393981(__this, /*hidden argument*/NULL);
		return;
	}
}
// LibTessDotNet.ContourVertex[] LibTessDotNet.Tess::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* Tess_get_Vertices_mA39442F8A3F5D5047FE6315AA95703F1D0A36A8B (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	{
		ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* L_0 = __this->get__vertices_14();
		return L_0;
	}
}
// System.Int32[] LibTessDotNet.Tess::get_Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* Tess_get_Elements_m5747E9F1B35B462B3AA2631BC3B1CF30D502C9AB (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get__elements_16();
		return L_0;
	}
}
// System.Int32 LibTessDotNet.Tess::get_ElementCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_ElementCount_m5A9DAB13EC988C0213439F01AFF2051AE9FA8063 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__elementCount_17();
		return L_0;
	}
}
// System.Void LibTessDotNet.Tess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mD1A9B1ABC24366A359AC7FF792C88917FFEB6E11 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess__ctor_mD1A9B1ABC24366A359AC7FF792C88917FFEB6E11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultPool_tE2042812BB14686168ABCFAA2114BCC379CE055C * L_0 = (DefaultPool_tE2042812BB14686168ABCFAA2114BCC379CE055C *)il2cpp_codegen_object_new(DefaultPool_tE2042812BB14686168ABCFAA2114BCC379CE055C_il2cpp_TypeInfo_var);
		DefaultPool__ctor_m71F9D18DC5212FB9C0CAC75EED98BC1B5A0A3240(L_0, /*hidden argument*/NULL);
		Tess__ctor_m67084DCB2B4DFC0133E3039E52A72ACFC0284A8F(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::.ctor(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_m67084DCB2B4DFC0133E3039E52A72ACFC0284A8F (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess__ctor_m67084DCB2B4DFC0133E3039E52A72ACFC0284A8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		__this->set_SUnitX_18((1.0f));
		__this->set_SentinelCoord_20((4.0E+30f));
		__this->set_UsePooling_22((bool)1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_0 = ((Vec3_t956A293556A430A69339B775D377A79CAE910D67_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t956A293556A430A69339B775D377A79CAE910D67_il2cpp_TypeInfo_var))->get_Zero_0();
		__this->set__normal_2(L_0);
		float L_1 = (0.0f);
		V_0 = L_1;
		__this->set__bmaxY_8(L_1);
		float L_2 = V_0;
		float L_3 = L_2;
		V_0 = L_3;
		__this->set__bmaxX_7(L_3);
		float L_4 = V_0;
		float L_5 = L_4;
		V_0 = L_5;
		__this->set__bminY_6(L_5);
		float L_6 = V_0;
		__this->set__bminX_5(L_6);
		__this->set__windingRule_9(0);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_7 = ___pool0;
		__this->set__pool_0(L_7);
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_8 = __this->get__pool_0();
		if (L_8)
		{
			goto IL_0075;
		}
	}
	{
		NullPool_t3362A4521B554267969F55F0974D28D2089531B4 * L_9 = (NullPool_t3362A4521B554267969F55F0974D28D2089531B4 *)il2cpp_codegen_object_new(NullPool_t3362A4521B554267969F55F0974D28D2089531B4_il2cpp_TypeInfo_var);
		NullPool__ctor_m3CE48209A5F87CD47264995A93DA48C79690EC07(L_9, /*hidden argument*/NULL);
		__this->set__pool_0(L_9);
	}

IL_0075:
	{
		__this->set__mesh_1((Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 *)NULL);
		__this->set__vertices_14((ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912*)NULL);
		__this->set__vertexCount_15(0);
		__this->set__elements_16((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)NULL);
		__this->set__elementCount_17(0);
		return;
	}
}
// System.Void LibTessDotNet.Tess::ComputeNormal(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m930C010E0F6CCF76531A69477BBD1F51FA9DE7AC (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___norm0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_ComputeNormal_m930C010E0F6CCF76531A69477BBD1F51FA9DE7AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_0 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_1 = NULL;
	VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* V_2 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_3 = NULL;
	VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_8 = NULL;
	Vec3_t956A293556A430A69339B775D377A79CAE910D67  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vec3_t956A293556A430A69339B775D377A79CAE910D67  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vec3_t956A293556A430A69339B775D377A79CAE910D67  V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_0 = __this->get__mesh_1();
		NullCheck(L_0);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_1 = L_0->get__vHead_0();
		NullCheck(L_1);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_2 = L_1->get__next_1();
		V_0 = L_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_4 = L_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_5 = V_0;
		NullCheck(L_5);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_6 = L_5->get_address_of__coords_3();
		float L_7 = L_6->get_X_1();
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_7);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_8 = L_4;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = V_0;
		NullCheck(L_9);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_10 = L_9->get_address_of__coords_3();
		float L_11 = L_10->get_Y_2();
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_11);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_12 = L_8;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_13 = V_0;
		NullCheck(L_13);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_14 = L_13->get_address_of__coords_3();
		float L_15 = L_14->get_Z_3();
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_15);
		V_1 = L_12;
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_16 = (VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2*)(VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2*)SZArrayNew(VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_17 = L_16;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_18);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_19 = L_17;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_20 = V_0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_20);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_21 = L_19;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_22 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_22);
		V_2 = L_21;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_23 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_24 = L_23;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_25 = V_0;
		NullCheck(L_25);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_26 = L_25->get_address_of__coords_3();
		float L_27 = L_26->get_X_1();
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_27);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_28 = L_24;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_29 = V_0;
		NullCheck(L_29);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_30 = L_29->get_address_of__coords_3();
		float L_31 = L_30->get_Y_2();
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_31);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_32 = L_28;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_33 = V_0;
		NullCheck(L_33);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_34 = L_33->get_address_of__coords_3();
		float L_35 = L_34->get_Z_3();
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_35);
		V_3 = L_32;
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_36 = (VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2*)(VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2*)SZArrayNew(VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_37 = L_36;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_38);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_39 = L_37;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_40 = V_0;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_40);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_41 = L_39;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_42 = V_0;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_42);
		V_4 = L_41;
		goto IL_0175;
	}

IL_009f:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_43 = V_0;
		NullCheck(L_43);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_44 = L_43->get_address_of__coords_3();
		float L_45 = L_44->get_X_1();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = 0;
		float L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((float)L_45) < ((float)L_48))))
		{
			goto IL_00c1;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_49 = V_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_50 = V_0;
		NullCheck(L_50);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_51 = L_50->get_address_of__coords_3();
		float L_52 = L_51->get_X_1();
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_52);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_53 = V_2;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_54 = V_0;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_54);
	}

IL_00c1:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_55 = V_0;
		NullCheck(L_55);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_56 = L_55->get_address_of__coords_3();
		float L_57 = L_56->get_Y_2();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = 1;
		float L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if ((!(((float)L_57) < ((float)L_60))))
		{
			goto IL_00e3;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_61 = V_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_62 = V_0;
		NullCheck(L_62);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_63 = L_62->get_address_of__coords_3();
		float L_64 = L_63->get_Y_2();
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_64);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_65 = V_2;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_66 = V_0;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_66);
	}

IL_00e3:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_67 = V_0;
		NullCheck(L_67);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_68 = L_67->get_address_of__coords_3();
		float L_69 = L_68->get_Z_3();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_70 = V_1;
		NullCheck(L_70);
		int32_t L_71 = 2;
		float L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((float)L_69) < ((float)L_72))))
		{
			goto IL_0105;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_73 = V_1;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_74 = V_0;
		NullCheck(L_74);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_75 = L_74->get_address_of__coords_3();
		float L_76 = L_75->get_Z_3();
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_76);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_77 = V_2;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_78 = V_0;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_78);
	}

IL_0105:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_79 = V_0;
		NullCheck(L_79);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_80 = L_79->get_address_of__coords_3();
		float L_81 = L_80->get_X_1();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = 0;
		float L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		if ((!(((float)L_81) > ((float)L_84))))
		{
			goto IL_0128;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_85 = V_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_86 = V_0;
		NullCheck(L_86);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_87 = L_86->get_address_of__coords_3();
		float L_88 = L_87->get_X_1();
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_88);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_89 = V_4;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_90 = V_0;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_90);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_90);
	}

IL_0128:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_91 = V_0;
		NullCheck(L_91);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_92 = L_91->get_address_of__coords_3();
		float L_93 = L_92->get_Y_2();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_94 = V_3;
		NullCheck(L_94);
		int32_t L_95 = 1;
		float L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		if ((!(((float)L_93) > ((float)L_96))))
		{
			goto IL_014b;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_97 = V_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_98 = V_0;
		NullCheck(L_98);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_99 = L_98->get_address_of__coords_3();
		float L_100 = L_99->get_Y_2();
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_100);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_101 = V_4;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_102 = V_0;
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_102);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_102);
	}

IL_014b:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_103 = V_0;
		NullCheck(L_103);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_104 = L_103->get_address_of__coords_3();
		float L_105 = L_104->get_Z_3();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_106 = V_3;
		NullCheck(L_106);
		int32_t L_107 = 2;
		float L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		if ((!(((float)L_105) > ((float)L_108))))
		{
			goto IL_016e;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_109 = V_3;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_110 = V_0;
		NullCheck(L_110);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_111 = L_110->get_address_of__coords_3();
		float L_112 = L_111->get_Z_3();
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_112);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_113 = V_4;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_114 = V_0;
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, L_114);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_114);
	}

IL_016e:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_115 = V_0;
		NullCheck(L_115);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_116 = L_115->get__next_1();
		V_0 = L_116;
	}

IL_0175:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_117 = V_0;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_118 = __this->get__mesh_1();
		NullCheck(L_118);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_119 = L_118->get__vHead_0();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_117) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_119))))
		{
			goto IL_009f;
		}
	}
	{
		V_5 = 0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_120 = V_3;
		NullCheck(L_120);
		int32_t L_121 = 1;
		float L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_123 = V_1;
		NullCheck(L_123);
		int32_t L_124 = 1;
		float L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_126 = V_3;
		NullCheck(L_126);
		int32_t L_127 = 0;
		float L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_129 = V_1;
		NullCheck(L_129);
		int32_t L_130 = 0;
		float L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_122, (float)L_125))) > ((float)((float)il2cpp_codegen_subtract((float)L_128, (float)L_131))))))
		{
			goto IL_019c;
		}
	}
	{
		V_5 = 1;
	}

IL_019c:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_132 = V_3;
		NullCheck(L_132);
		int32_t L_133 = 2;
		float L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_135 = V_1;
		NullCheck(L_135);
		int32_t L_136 = 2;
		float L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_138 = V_3;
		int32_t L_139 = V_5;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		float L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_142 = V_1;
		int32_t L_143 = V_5;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		float L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_134, (float)L_137))) > ((float)((float)il2cpp_codegen_subtract((float)L_141, (float)L_145))))))
		{
			goto IL_01b1;
		}
	}
	{
		V_5 = 2;
	}

IL_01b1:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_146 = V_1;
		int32_t L_147 = V_5;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		float L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_150 = V_3;
		int32_t L_151 = V_5;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		float L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		if ((!(((float)L_149) >= ((float)L_153))))
		{
			goto IL_01d6;
		}
	}
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_154 = ___norm0;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_155;
		memset((&L_155), 0, sizeof(L_155));
		Vec3__ctor_m39957F15A8EE7ED94366DEDB02758EB3A6E3B4F8((&L_155), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		*(Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_154 = L_155;
		return;
	}

IL_01d6:
	{
		V_6 = (0.0f);
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_156 = V_2;
		int32_t L_157 = V_5;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		VertexU5BU5D_tEA3243702AC291F1EA3B39C7D4105A5FBB814BE2* L_160 = V_4;
		int32_t L_161 = V_5;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		V_8 = L_163;
		NullCheck(L_159);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_164 = L_159->get_address_of__coords_3();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_165 = V_8;
		NullCheck(L_165);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_166 = L_165->get_address_of__coords_3();
		Vec3_Sub_mF89A08A34433D26D2EC000CE4673A32BDFA5D77B((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_164, (Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_166, (Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)(&V_9), /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_167 = __this->get__mesh_1();
		NullCheck(L_167);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_168 = L_167->get__vHead_0();
		NullCheck(L_168);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_169 = L_168->get__next_1();
		V_0 = L_169;
		goto IL_02e1;
	}

IL_0211:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_170 = V_0;
		NullCheck(L_170);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_171 = L_170->get_address_of__coords_3();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_172 = V_8;
		NullCheck(L_172);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_173 = L_172->get_address_of__coords_3();
		Vec3_Sub_mF89A08A34433D26D2EC000CE4673A32BDFA5D77B((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_171, (Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_173, (Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)(&V_10), /*hidden argument*/NULL);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_174 = V_9;
		float L_175 = L_174.get_Y_2();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_176 = V_10;
		float L_177 = L_176.get_Z_3();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_178 = V_9;
		float L_179 = L_178.get_Z_3();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_180 = V_10;
		float L_181 = L_180.get_Y_2();
		(&V_11)->set_X_1(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_175, (float)L_177)), (float)((float)il2cpp_codegen_multiply((float)L_179, (float)L_181)))));
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_182 = V_9;
		float L_183 = L_182.get_Z_3();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_184 = V_10;
		float L_185 = L_184.get_X_1();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_186 = V_9;
		float L_187 = L_186.get_X_1();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_188 = V_10;
		float L_189 = L_188.get_Z_3();
		(&V_11)->set_Y_2(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_183, (float)L_185)), (float)((float)il2cpp_codegen_multiply((float)L_187, (float)L_189)))));
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_190 = V_9;
		float L_191 = L_190.get_X_1();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_192 = V_10;
		float L_193 = L_192.get_Y_2();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_194 = V_9;
		float L_195 = L_194.get_Y_2();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_196 = V_10;
		float L_197 = L_196.get_X_1();
		(&V_11)->set_Z_3(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_191, (float)L_193)), (float)((float)il2cpp_codegen_multiply((float)L_195, (float)L_197)))));
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_198 = V_11;
		float L_199 = L_198.get_X_1();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_200 = V_11;
		float L_201 = L_200.get_X_1();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_202 = V_11;
		float L_203 = L_202.get_Y_2();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_204 = V_11;
		float L_205 = L_204.get_Y_2();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_206 = V_11;
		float L_207 = L_206.get_Z_3();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_208 = V_11;
		float L_209 = L_208.get_Z_3();
		V_7 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_199, (float)L_201)), (float)((float)il2cpp_codegen_multiply((float)L_203, (float)L_205)))), (float)((float)il2cpp_codegen_multiply((float)L_207, (float)L_209))));
		float L_210 = V_7;
		float L_211 = V_6;
		if ((!(((float)L_210) > ((float)L_211))))
		{
			goto IL_02da;
		}
	}
	{
		float L_212 = V_7;
		V_6 = L_212;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_213 = ___norm0;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_214 = V_11;
		*(Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_213 = L_214;
	}

IL_02da:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_215 = V_0;
		NullCheck(L_215);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_216 = L_215->get__next_1();
		V_0 = L_216;
	}

IL_02e1:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_217 = V_0;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_218 = __this->get__mesh_1();
		NullCheck(L_218);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_219 = L_218->get__vHead_0();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_217) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_219))))
		{
			goto IL_0211;
		}
	}
	{
		float L_220 = V_6;
		if ((!(((float)L_220) <= ((float)(0.0f)))))
		{
			goto IL_031c;
		}
	}
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_221 = ___norm0;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_222 = ((Vec3_t956A293556A430A69339B775D377A79CAE910D67_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t956A293556A430A69339B775D377A79CAE910D67_il2cpp_TypeInfo_var))->get_Zero_0();
		*(Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_221 = L_222;
		int32_t L_223 = Vec3_LongAxis_mC96F5166F87C6C38F38278B42651A96A8D20393E((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)(&V_9), /*hidden argument*/NULL);
		V_5 = L_223;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_224 = ___norm0;
		int32_t L_225 = V_5;
		Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_224, L_225, (1.0f), /*hidden argument*/NULL);
	}

IL_031c:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::CheckOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_m48C33B87B324D02145A72A0E1665698A160B2FBB (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_1 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_2 = NULL;
	{
		V_0 = (0.0f);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_0 = __this->get__mesh_1();
		NullCheck(L_0);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_1 = L_0->get__fHead_1();
		NullCheck(L_1);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_2 = L_1->get__next_1();
		V_1 = L_2;
		goto IL_0037;
	}

IL_0019:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_3 = V_1;
		NullCheck(L_3);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = L_3->get__anEdge_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get__winding_8();
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		float L_6 = V_0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_7 = V_1;
		float L_8 = MeshUtils_FaceArea_m17D83B419A8B8B7E240207B87CCE05F9A80B7B5F(L_7, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_6, (float)L_8));
	}

IL_0030:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_9 = V_1;
		NullCheck(L_9);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_10 = L_9->get__next_1();
		V_1 = L_10;
	}

IL_0037:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_11 = V_1;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_12 = __this->get__mesh_1();
		NullCheck(L_12);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_13 = L_12->get__fHead_1();
		if ((!(((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_11) == ((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_13))))
		{
			goto IL_0019;
		}
	}
	{
		float L_14 = V_0;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_15 = __this->get__mesh_1();
		NullCheck(L_15);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_16 = L_15->get__vHead_0();
		NullCheck(L_16);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_17 = L_16->get__next_1();
		V_2 = L_17;
		goto IL_0074;
	}

IL_0060:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_18 = V_2;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_19 = V_2;
		NullCheck(L_19);
		float L_20 = L_19->get__t_5();
		NullCheck(L_18);
		L_18->set__t_5(((-L_20)));
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = V_2;
		NullCheck(L_21);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_22 = L_21->get__next_1();
		V_2 = L_22;
	}

IL_0074:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_23 = V_2;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_24 = __this->get__mesh_1();
		NullCheck(L_24);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_25 = L_24->get__vHead_0();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_23) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_25))))
		{
			goto IL_0060;
		}
	}
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_26 = __this->get_address_of__tUnit_4();
		Vec3_Neg_mC950637548B81F59948653EFABC01C3215CAD8A0((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_26, /*hidden argument*/NULL);
	}

IL_008d:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::ProjectPolygon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_mBAED2297A7800E1C3965E9B42CDF75D8BDF126BD (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	Vec3_t956A293556A430A69339B775D377A79CAE910D67  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_4 = NULL;
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_5 = NULL;
	float V_6 = 0.0f;
	int32_t G_B6_0 = 0;
	Vec3_t956A293556A430A69339B775D377A79CAE910D67 * G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	Vec3_t956A293556A430A69339B775D377A79CAE910D67 * G_B5_1 = NULL;
	float G_B7_0 = 0.0f;
	int32_t G_B7_1 = 0;
	Vec3_t956A293556A430A69339B775D377A79CAE910D67 * G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	Vec3_t956A293556A430A69339B775D377A79CAE910D67 * G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	Vec3_t956A293556A430A69339B775D377A79CAE910D67 * G_B8_1 = NULL;
	float G_B10_0 = 0.0f;
	int32_t G_B10_1 = 0;
	Vec3_t956A293556A430A69339B775D377A79CAE910D67 * G_B10_2 = NULL;
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_0 = __this->get__normal_2();
		V_0 = L_0;
		V_1 = (bool)0;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_1 = V_0;
		float L_2 = L_1.get_X_1();
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_3 = V_0;
		float L_4 = L_3.get_Y_2();
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_5 = V_0;
		float L_6 = L_5.get_Z_3();
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Tess_ComputeNormal_m930C010E0F6CCF76531A69477BBD1F51FA9DE7AC(__this, (Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)(&V_0), /*hidden argument*/NULL);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_7 = V_0;
		__this->set__normal_2(L_7);
		V_1 = (bool)1;
	}

IL_0041:
	{
		int32_t L_8 = Vec3_LongAxis_mC96F5166F87C6C38F38278B42651A96A8D20393E((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)(&V_0), /*hidden argument*/NULL);
		V_2 = L_8;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_9 = __this->get_address_of__sUnit_3();
		int32_t L_10 = V_2;
		Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_9, L_10, (0.0f), /*hidden argument*/NULL);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_11 = __this->get_address_of__sUnit_3();
		int32_t L_12 = V_2;
		float L_13 = __this->get_SUnitX_18();
		Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_11, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1))%(int32_t)3)), L_13, /*hidden argument*/NULL);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_14 = __this->get_address_of__sUnit_3();
		int32_t L_15 = V_2;
		float L_16 = __this->get_SUnitY_19();
		Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_14, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)2))%(int32_t)3)), L_16, /*hidden argument*/NULL);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_17 = __this->get_address_of__tUnit_4();
		int32_t L_18 = V_2;
		Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_17, L_18, (0.0f), /*hidden argument*/NULL);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_19 = __this->get_address_of__tUnit_4();
		int32_t L_20 = V_2;
		int32_t L_21 = V_2;
		float L_22 = Vec3_get_Item_m49E9B2C6FBC606ECAB4F53D71E4D95FA2E8F6498((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)(&V_0), L_21, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1))%(int32_t)3));
		G_B5_1 = L_19;
		if ((((float)L_22) > ((float)(0.0f))))
		{
			G_B6_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1))%(int32_t)3));
			G_B6_1 = L_19;
			goto IL_00b9;
		}
	}
	{
		float L_23 = __this->get_SUnitY_19();
		G_B7_0 = L_23;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_00c0;
	}

IL_00b9:
	{
		float L_24 = __this->get_SUnitY_19();
		G_B7_0 = ((-L_24));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_00c0:
	{
		Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/NULL);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_25 = __this->get_address_of__tUnit_4();
		int32_t L_26 = V_2;
		int32_t L_27 = V_2;
		float L_28 = Vec3_get_Item_m49E9B2C6FBC606ECAB4F53D71E4D95FA2E8F6498((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)(&V_0), L_27, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)2))%(int32_t)3));
		G_B8_1 = L_25;
		if ((((float)L_28) > ((float)(0.0f))))
		{
			G_B9_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)2))%(int32_t)3));
			G_B9_1 = L_25;
			goto IL_00e8;
		}
	}
	{
		float L_29 = __this->get_SUnitX_18();
		G_B10_0 = ((-L_29));
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00ee;
	}

IL_00e8:
	{
		float L_30 = __this->get_SUnitX_18();
		G_B10_0 = L_30;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00ee:
	{
		Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)G_B10_2, G_B10_1, G_B10_0, /*hidden argument*/NULL);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_31 = __this->get__mesh_1();
		NullCheck(L_31);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_32 = L_31->get__vHead_0();
		NullCheck(L_32);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_33 = L_32->get__next_1();
		V_4 = L_33;
		goto IL_0142;
	}

IL_0107:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_34 = V_4;
		NullCheck(L_34);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_35 = L_34->get_address_of__coords_3();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_36 = __this->get_address_of__sUnit_3();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_37 = V_4;
		NullCheck(L_37);
		float* L_38 = L_37->get_address_of__s_4();
		Vec3_Dot_m477C1E4EF502CE1C78217EC22BA31A1B8950DB91((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_35, (Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_36, (float*)L_38, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_39 = V_4;
		NullCheck(L_39);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_40 = L_39->get_address_of__coords_3();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_41 = __this->get_address_of__tUnit_4();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_42 = V_4;
		NullCheck(L_42);
		float* L_43 = L_42->get_address_of__t_5();
		Vec3_Dot_m477C1E4EF502CE1C78217EC22BA31A1B8950DB91((Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_40, (Vec3_t956A293556A430A69339B775D377A79CAE910D67 *)L_41, (float*)L_43, /*hidden argument*/NULL);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_44 = V_4;
		NullCheck(L_44);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_45 = L_44->get__next_1();
		V_4 = L_45;
	}

IL_0142:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_46 = V_4;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_47 = __this->get__mesh_1();
		NullCheck(L_47);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_48 = L_47->get__vHead_0();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_46) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_48))))
		{
			goto IL_0107;
		}
	}
	{
		bool L_49 = V_1;
		if (!L_49)
		{
			goto IL_015a;
		}
	}
	{
		Tess_CheckOrientation_m48C33B87B324D02145A72A0E1665698A160B2FBB(__this, /*hidden argument*/NULL);
	}

IL_015a:
	{
		V_3 = (bool)1;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_50 = __this->get__mesh_1();
		NullCheck(L_50);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_51 = L_50->get__vHead_0();
		NullCheck(L_51);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_52 = L_51->get__next_1();
		V_5 = L_52;
		goto IL_0223;
	}

IL_0173:
	{
		bool L_53 = V_3;
		if (!L_53)
		{
			goto IL_01aa;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_54 = V_5;
		NullCheck(L_54);
		float L_55 = L_54->get__s_4();
		float L_56 = L_55;
		V_6 = L_56;
		__this->set__bmaxX_7(L_56);
		float L_57 = V_6;
		__this->set__bminX_5(L_57);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_58 = V_5;
		NullCheck(L_58);
		float L_59 = L_58->get__t_5();
		float L_60 = L_59;
		V_6 = L_60;
		__this->set__bmaxY_8(L_60);
		float L_61 = V_6;
		__this->set__bminY_6(L_61);
		V_3 = (bool)0;
		goto IL_021a;
	}

IL_01aa:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_62 = V_5;
		NullCheck(L_62);
		float L_63 = L_62->get__s_4();
		float L_64 = __this->get__bminX_5();
		if ((!(((float)L_63) < ((float)L_64))))
		{
			goto IL_01c6;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_65 = V_5;
		NullCheck(L_65);
		float L_66 = L_65->get__s_4();
		__this->set__bminX_5(L_66);
	}

IL_01c6:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_67 = V_5;
		NullCheck(L_67);
		float L_68 = L_67->get__s_4();
		float L_69 = __this->get__bmaxX_7();
		if ((!(((float)L_68) > ((float)L_69))))
		{
			goto IL_01e2;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_70 = V_5;
		NullCheck(L_70);
		float L_71 = L_70->get__s_4();
		__this->set__bmaxX_7(L_71);
	}

IL_01e2:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_72 = V_5;
		NullCheck(L_72);
		float L_73 = L_72->get__t_5();
		float L_74 = __this->get__bminY_6();
		if ((!(((float)L_73) < ((float)L_74))))
		{
			goto IL_01fe;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_75 = V_5;
		NullCheck(L_75);
		float L_76 = L_75->get__t_5();
		__this->set__bminY_6(L_76);
	}

IL_01fe:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_77 = V_5;
		NullCheck(L_77);
		float L_78 = L_77->get__t_5();
		float L_79 = __this->get__bmaxY_8();
		if ((!(((float)L_78) > ((float)L_79))))
		{
			goto IL_021a;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_80 = V_5;
		NullCheck(L_80);
		float L_81 = L_80->get__t_5();
		__this->set__bmaxY_8(L_81);
	}

IL_021a:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_82 = V_5;
		NullCheck(L_82);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_83 = L_82->get__next_1();
		V_5 = L_83;
	}

IL_0223:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_84 = V_5;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_85 = __this->get__mesh_1();
		NullCheck(L_85);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_86 = L_85->get__vHead_0();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_84) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_86))))
		{
			goto IL_0173;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::TessellateMonoRegion(LibTessDotNet.MeshUtils_Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_m8D654D5726DA50397B7DC08404D0BC2E29C47D1A (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * ___face0, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_0 = ___face0;
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__anEdge_2();
		V_0 = L_1;
		goto IL_0010;
	}

IL_0009:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = V_0;
		NullCheck(L_2);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = Edge_get__Lprev_mAB87D419866AD8C3D304903083077126026F5642(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0010:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = V_0;
		NullCheck(L_4);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_5 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_4, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = V_0;
		NullCheck(L_6);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = L_6->get__Org_5();
		bool L_8 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_5, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0009;
		}
	}
	{
		goto IL_002c;
	}

IL_0025:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = V_0;
		NullCheck(L_9);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = L_9->get__Lnext_4();
		V_0 = L_10;
	}

IL_002c:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = V_0;
		NullCheck(L_11);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_12 = L_11->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = V_0;
		NullCheck(L_13);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_14 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_13, /*hidden argument*/NULL);
		bool L_15 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_12, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0025;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_16 = V_0;
		NullCheck(L_16);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = Edge_get__Lprev_mAB87D419866AD8C3D304903083077126026F5642(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		goto IL_0121;
	}

IL_004b:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = V_0;
		NullCheck(L_18);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_19 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_18, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_20 = V_1;
		NullCheck(L_20);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_21 = L_20->get__Org_5();
		bool L_22 = Geom_VertLeq_m026CD4CE4BBA1DA84F8B89C0D0C5D2F98B6A50DB(L_19, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_0081;
	}

IL_0063:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_23 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_24 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = V_1;
		NullCheck(L_25);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = L_25->get__Lnext_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_27 = V_1;
		NullCheck(L_23);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_28 = Mesh_Connect_mBBFA4558B503ABE38484323A12968B1FA40A4C34(L_23, L_24, L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = L_28->get__Sym_2();
		V_1 = L_29;
	}

IL_0081:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = V_1;
		NullCheck(L_30);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_31 = L_30->get__Lnext_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_32 = V_0;
		if ((((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_31) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_32)))
		{
			goto IL_00ba;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_33 = V_1;
		NullCheck(L_33);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_34 = L_33->get__Lnext_4();
		bool L_35 = Geom_EdgeGoesLeft_mEB3959466D560FE4F84D3129E53E84CBC6886A88(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0063;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_36 = V_1;
		NullCheck(L_36);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_37 = L_36->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_38 = V_1;
		NullCheck(L_38);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_39 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_38, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_40 = V_1;
		NullCheck(L_40);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_41 = L_40->get__Lnext_4();
		NullCheck(L_41);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_42 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_41, /*hidden argument*/NULL);
		float L_43 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_37, L_39, L_42, /*hidden argument*/NULL);
		if ((((float)L_43) <= ((float)(0.0f))))
		{
			goto IL_0063;
		}
	}

IL_00ba:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_44 = V_1;
		NullCheck(L_44);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_45 = Edge_get__Lprev_mAB87D419866AD8C3D304903083077126026F5642(L_44, /*hidden argument*/NULL);
		V_1 = L_45;
		goto IL_0121;
	}

IL_00c3:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_46 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_47 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_48 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_49 = V_0;
		NullCheck(L_49);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_50 = Edge_get__Lprev_mAB87D419866AD8C3D304903083077126026F5642(L_49, /*hidden argument*/NULL);
		NullCheck(L_46);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_51 = Mesh_Connect_mBBFA4558B503ABE38484323A12968B1FA40A4C34(L_46, L_47, L_48, L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_52 = L_51->get__Sym_2();
		V_0 = L_52;
	}

IL_00e1:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_53 = V_1;
		NullCheck(L_53);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_54 = L_53->get__Lnext_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_55 = V_0;
		if ((((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_54) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_55)))
		{
			goto IL_011a;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_56 = V_0;
		NullCheck(L_56);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_57 = Edge_get__Lprev_mAB87D419866AD8C3D304903083077126026F5642(L_56, /*hidden argument*/NULL);
		bool L_58 = Geom_EdgeGoesRight_m47B3E137A8C1E35F94FD0A789B687EF3DE285D5E(L_57, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_00c3;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_59 = V_0;
		NullCheck(L_59);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_60 = Edge_get__Dst_mEE25C9C1893EA1D23AB681803FC4423D8F67F332(L_59, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_61 = V_0;
		NullCheck(L_61);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_62 = L_61->get__Org_5();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_63 = V_0;
		NullCheck(L_63);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_64 = Edge_get__Lprev_mAB87D419866AD8C3D304903083077126026F5642(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_65 = L_64->get__Org_5();
		float L_66 = Geom_EdgeSign_m544F35AE926B0C2001B01192A3404C32C63DBBEA(L_60, L_62, L_65, /*hidden argument*/NULL);
		if ((((float)L_66) >= ((float)(0.0f))))
		{
			goto IL_00c3;
		}
	}

IL_011a:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_67 = V_0;
		NullCheck(L_67);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_68 = L_67->get__Lnext_4();
		V_0 = L_68;
	}

IL_0121:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_69 = V_0;
		NullCheck(L_69);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_70 = L_69->get__Lnext_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_71 = V_1;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_70) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_71))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_014d;
	}

IL_012f:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_72 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_73 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_74 = V_1;
		NullCheck(L_74);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_75 = L_74->get__Lnext_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_76 = V_1;
		NullCheck(L_72);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_77 = Mesh_Connect_mBBFA4558B503ABE38484323A12968B1FA40A4C34(L_72, L_73, L_75, L_76, /*hidden argument*/NULL);
		NullCheck(L_77);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_78 = L_77->get__Sym_2();
		V_1 = L_78;
	}

IL_014d:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_79 = V_1;
		NullCheck(L_79);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_80 = L_79->get__Lnext_4();
		NullCheck(L_80);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_81 = L_80->get__Lnext_4();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_82 = V_0;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_81) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_82))))
		{
			goto IL_012f;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::TessellateInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mAE5B9B07BB675F208C42825A95454C3DCC551F46 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_0 = NULL;
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_1 = NULL;
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_0 = __this->get__mesh_1();
		NullCheck(L_0);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_1 = L_0->get__fHead_1();
		NullCheck(L_1);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_2 = L_1->get__next_1();
		V_0 = L_2;
		goto IL_002b;
	}

IL_0013:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_3 = V_0;
		NullCheck(L_3);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_4 = L_3->get__next_1();
		V_1 = L_4;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->get__inside_6();
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_7 = V_0;
		Tess_TessellateMonoRegion_m8D654D5726DA50397B7DC08404D0BC2E29C47D1A(__this, L_7, /*hidden argument*/NULL);
	}

IL_0029:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_8 = V_1;
		V_0 = L_8;
	}

IL_002b:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_9 = V_0;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_10 = __this->get__mesh_1();
		NullCheck(L_10);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_11 = L_10->get__fHead_1();
		if ((!(((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_9) == ((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_11))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::SetWindingNumber(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_mFDFF458583128A8135E55C05B9A0C4223101667F (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, int32_t ___value0, bool ___keepOnlyBoundary1, const RuntimeMethod* method)
{
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * G_B4_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * G_B5_1 = NULL;
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_0 = __this->get__mesh_1();
		NullCheck(L_0);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_1 = L_0->get__eHead_2();
		NullCheck(L_1);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = L_1->get__next_1();
		V_0 = L_2;
		goto IL_006c;
	}

IL_0013:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_3 = V_0;
		NullCheck(L_3);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_4 = L_3->get__next_1();
		V_1 = L_4;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = V_0;
		NullCheck(L_5);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_6 = Edge_get__Rface_m27BE789A7B47E8D04DDDA64B466C956C770C39D1(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = L_6->get__inside_6();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_8 = V_0;
		NullCheck(L_8);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_9 = L_8->get__Lface_6();
		NullCheck(L_9);
		bool L_10 = L_9->get__inside_6();
		if ((((int32_t)L_7) == ((int32_t)L_10)))
		{
			goto IL_004c;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = V_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = V_0;
		NullCheck(L_12);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_13 = L_12->get__Lface_6();
		NullCheck(L_13);
		bool L_14 = L_13->get__inside_6();
		G_B3_0 = L_11;
		if (L_14)
		{
			G_B4_0 = L_11;
			goto IL_0044;
		}
	}
	{
		int32_t L_15 = ___value0;
		G_B5_0 = ((-L_15));
		G_B5_1 = G_B3_0;
		goto IL_0045;
	}

IL_0044:
	{
		int32_t L_16 = ___value0;
		G_B5_0 = L_16;
		G_B5_1 = G_B4_0;
	}

IL_0045:
	{
		NullCheck(G_B5_1);
		G_B5_1->set__winding_8(G_B5_0);
		goto IL_006a;
	}

IL_004c:
	{
		bool L_17 = ___keepOnlyBoundary1;
		if (L_17)
		{
			goto IL_0058;
		}
	}
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = V_0;
		NullCheck(L_18);
		L_18->set__winding_8(0);
		goto IL_006a;
	}

IL_0058:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_19 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_20 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_21 = V_0;
		NullCheck(L_19);
		Mesh_Delete_m2E1A3D1C9F53625BA6CAA452A69A6B5E28307569(L_19, L_20, L_21, /*hidden argument*/NULL);
	}

IL_006a:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_1;
		V_0 = L_22;
	}

IL_006c:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_23 = V_0;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_24 = __this->get__mesh_1();
		NullCheck(L_24);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = L_24->get__eHead_2();
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_23) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_25))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Int32 LibTessDotNet.Tess::GetNeighbourFace(LibTessDotNet.MeshUtils_Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_m7813BEB0AA9FF7AB051B01D8AC6F03CA41E133F9 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * ___edge0, const RuntimeMethod* method)
{
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_0 = ___edge0;
		NullCheck(L_0);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_1 = Edge_get__Rface_m27BE789A7B47E8D04DDDA64B466C956C770C39D1(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_2 = ___edge0;
		NullCheck(L_2);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_3 = Edge_get__Rface_m27BE789A7B47E8D04DDDA64B466C956C770C39D1(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = L_3->get__inside_6();
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_5 = ___edge0;
		NullCheck(L_5);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_6 = Edge_get__Rface_m27BE789A7B47E8D04DDDA64B466C956C770C39D1(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = L_6->get__n_4();
		return L_7;
	}
}
// System.Void LibTessDotNet.Tess::OutputPolymesh(LibTessDotNet.ElementType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_m12B167C80EBFF639080B0C6DC1BFDC632AABB184 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, int32_t ___elementType0, int32_t ___polySize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_OutputPolymesh_m12B167C80EBFF639080B0C6DC1BFDC632AABB184_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * V_0 = NULL;
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		int32_t L_0 = ___polySize1;
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_000c;
		}
	}
	{
		___polySize1 = 3;
	}

IL_000c:
	{
		int32_t L_1 = ___polySize1;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_0022;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_2 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_3 = __this->get__pool_0();
		int32_t L_4 = ___polySize1;
		NullCheck(L_2);
		Mesh_MergeConvexFaces_m99AA9DF2F2272AADEBE96EC5AC94A325B7CDB8CC(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_5 = __this->get__mesh_1();
		NullCheck(L_5);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_6 = L_5->get__vHead_0();
		NullCheck(L_6);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_7 = L_6->get__next_1();
		V_0 = L_7;
		goto IL_0043;
	}

IL_0035:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_8 = V_0;
		NullCheck(L_8);
		L_8->set__n_7((-1));
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_9 = V_0;
		NullCheck(L_9);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_10 = L_9->get__next_1();
		V_0 = L_10;
	}

IL_0043:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_11 = V_0;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_12 = __this->get__mesh_1();
		NullCheck(L_12);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_13 = L_12->get__vHead_0();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_11) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_13))))
		{
			goto IL_0035;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_14 = __this->get__mesh_1();
		NullCheck(L_14);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_15 = L_14->get__fHead_1();
		NullCheck(L_15);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_16 = L_15->get__next_1();
		V_1 = L_16;
		goto IL_00dd;
	}

IL_0064:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_17 = V_1;
		NullCheck(L_17);
		L_17->set__n_4((-1));
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_18 = V_1;
		NullCheck(L_18);
		bool L_19 = L_18->get__inside_6();
		if (!L_19)
		{
			goto IL_00d6;
		}
	}
	{
		bool L_20 = __this->get_NoEmptyPolygons_21();
		if (!L_20)
		{
			goto IL_008d;
		}
	}
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_21 = V_1;
		float L_22 = MeshUtils_FaceArea_m17D83B419A8B8B7E240207B87CCE05F9A80B7B5F(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_23 = fabsf(L_22);
		if ((((float)L_23) < ((float)(1.401298E-45f))))
		{
			goto IL_00d6;
		}
	}

IL_008d:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_24 = V_1;
		NullCheck(L_24);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_25 = L_24->get__anEdge_2();
		V_2 = L_25;
		V_5 = 0;
	}

IL_0097:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_26 = V_2;
		NullCheck(L_26);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_27 = L_26->get__Org_5();
		V_0 = L_27;
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->get__n_7();
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00b5;
		}
	}
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_30 = V_0;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		L_30->set__n_7(L_31);
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00b5:
	{
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_34 = V_2;
		NullCheck(L_34);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_35 = L_34->get__Lnext_4();
		V_2 = L_35;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_36 = V_2;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_37 = V_1;
		NullCheck(L_37);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_38 = L_37->get__anEdge_2();
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_36) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_38))))
		{
			goto IL_0097;
		}
	}
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_39 = V_1;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		L_39->set__n_4(L_40);
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00d6:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_42 = V_1;
		NullCheck(L_42);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_43 = L_42->get__next_1();
		V_1 = L_43;
	}

IL_00dd:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_44 = V_1;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_45 = __this->get__mesh_1();
		NullCheck(L_45);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_46 = L_45->get__fHead_1();
		if ((!(((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_44) == ((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_46))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_47 = V_3;
		__this->set__elementCount_17(L_47);
		int32_t L_48 = ___elementType0;
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_49, (int32_t)2));
	}

IL_00fd:
	{
		int32_t L_50 = V_3;
		int32_t L_51 = ___polySize1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_52 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_50, (int32_t)L_51)));
		__this->set__elements_16(L_52);
		int32_t L_53 = V_4;
		__this->set__vertexCount_15(L_53);
		int32_t L_54 = __this->get__vertexCount_15();
		ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* L_55 = (ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912*)(ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912*)SZArrayNew(ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912_il2cpp_TypeInfo_var, (uint32_t)L_54);
		__this->set__vertices_14(L_55);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_56 = __this->get__mesh_1();
		NullCheck(L_56);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_57 = L_56->get__vHead_0();
		NullCheck(L_57);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_58 = L_57->get__next_1();
		V_0 = L_58;
		goto IL_017f;
	}

IL_0137:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60 = L_59->get__n_7();
		if ((((int32_t)L_60) == ((int32_t)(-1))))
		{
			goto IL_0178;
		}
	}
	{
		ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* L_61 = __this->get__vertices_14();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_62 = V_0;
		NullCheck(L_62);
		int32_t L_63 = L_62->get__n_7();
		NullCheck(L_61);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_64 = V_0;
		NullCheck(L_64);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_65 = L_64->get__coords_3();
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->set_Position_0(L_65);
		ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* L_66 = __this->get__vertices_14();
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = L_67->get__n_7();
		NullCheck(L_66);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = L_69->get__data_8();
		((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->set_Data_1(L_70);
	}

IL_0178:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_71 = V_0;
		NullCheck(L_71);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_72 = L_71->get__next_1();
		V_0 = L_72;
	}

IL_017f:
	{
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_73 = V_0;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_74 = __this->get__mesh_1();
		NullCheck(L_74);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_75 = L_74->get__vHead_0();
		if ((!(((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_73) == ((RuntimeObject*)(Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 *)L_75))))
		{
			goto IL_0137;
		}
	}
	{
		V_7 = 0;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_76 = __this->get__mesh_1();
		NullCheck(L_76);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_77 = L_76->get__fHead_1();
		NullCheck(L_77);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_78 = L_77->get__next_1();
		V_1 = L_78;
		goto IL_0280;
	}

IL_01a6:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_79 = V_1;
		NullCheck(L_79);
		bool L_80 = L_79->get__inside_6();
		if (!L_80)
		{
			goto IL_0279;
		}
	}
	{
		bool L_81 = __this->get_NoEmptyPolygons_21();
		if (!L_81)
		{
			goto IL_01ce;
		}
	}
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_82 = V_1;
		float L_83 = MeshUtils_FaceArea_m17D83B419A8B8B7E240207B87CCE05F9A80B7B5F(L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_84 = fabsf(L_83);
		if ((((float)L_84) < ((float)(1.401298E-45f))))
		{
			goto IL_0279;
		}
	}

IL_01ce:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_85 = V_1;
		NullCheck(L_85);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_86 = L_85->get__anEdge_2();
		V_2 = L_86;
		V_5 = 0;
	}

IL_01d8:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_87 = V_2;
		NullCheck(L_87);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_88 = L_87->get__Org_5();
		V_0 = L_88;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_89 = __this->get__elements_16();
		int32_t L_90 = V_7;
		int32_t L_91 = L_90;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1));
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_92 = V_0;
		NullCheck(L_92);
		int32_t L_93 = L_92->get__n_7();
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (int32_t)L_93);
		int32_t L_94 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_95 = V_2;
		NullCheck(L_95);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_96 = L_95->get__Lnext_4();
		V_2 = L_96;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_97 = V_2;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_98 = V_1;
		NullCheck(L_98);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_99 = L_98->get__anEdge_2();
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_97) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_99))))
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_100 = V_5;
		V_6 = L_100;
		goto IL_0224;
	}

IL_020f:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_101 = __this->get__elements_16();
		int32_t L_102 = V_7;
		int32_t L_103 = L_102;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (int32_t)(-1));
		int32_t L_104 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
	}

IL_0224:
	{
		int32_t L_105 = V_6;
		int32_t L_106 = ___polySize1;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_020f;
		}
	}
	{
		int32_t L_107 = ___elementType0;
		if ((!(((uint32_t)L_107) == ((uint32_t)1))))
		{
			goto IL_0279;
		}
	}
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_108 = V_1;
		NullCheck(L_108);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_109 = L_108->get__anEdge_2();
		V_2 = L_109;
	}

IL_0234:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_110 = __this->get__elements_16();
		int32_t L_111 = V_7;
		int32_t L_112 = L_111;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_113 = V_2;
		int32_t L_114 = Tess_GetNeighbourFace_m7813BEB0AA9FF7AB051B01D8AC6F03CA41E133F9(__this, L_113, /*hidden argument*/NULL);
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (int32_t)L_114);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_115 = V_2;
		NullCheck(L_115);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_116 = L_115->get__Lnext_4();
		V_2 = L_116;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_117 = V_2;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_118 = V_1;
		NullCheck(L_118);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_119 = L_118->get__anEdge_2();
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_117) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_119))))
		{
			goto IL_0234;
		}
	}
	{
		int32_t L_120 = V_5;
		V_6 = L_120;
		goto IL_0274;
	}

IL_025f:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_121 = __this->get__elements_16();
		int32_t L_122 = V_7;
		int32_t L_123 = L_122;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (int32_t)(-1));
		int32_t L_124 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1));
	}

IL_0274:
	{
		int32_t L_125 = V_6;
		int32_t L_126 = ___polySize1;
		if ((((int32_t)L_125) < ((int32_t)L_126)))
		{
			goto IL_025f;
		}
	}

IL_0279:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_127 = V_1;
		NullCheck(L_127);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_128 = L_127->get__next_1();
		V_1 = L_128;
	}

IL_0280:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_129 = V_1;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_130 = __this->get__mesh_1();
		NullCheck(L_130);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_131 = L_130->get__fHead_1();
		if ((!(((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_129) == ((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_131))))
		{
			goto IL_01a6;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::OutputContours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_mC99F855161EAE97FA2D0C1F71767778B238DA2A9 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_OutputContours_mC99F855161EAE97FA2D0C1F71767778B238DA2A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * V_0 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		__this->set__vertexCount_15(0);
		__this->set__elementCount_17(0);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_0 = __this->get__mesh_1();
		NullCheck(L_0);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_1 = L_0->get__fHead_1();
		NullCheck(L_1);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_2 = L_1->get__next_1();
		V_0 = L_2;
		goto IL_0065;
	}

IL_0026:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->get__inside_6();
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_5 = V_0;
		NullCheck(L_5);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_6 = L_5->get__anEdge_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_7 = L_6;
		V_1 = L_7;
		V_2 = L_7;
	}

IL_0037:
	{
		int32_t L_8 = __this->get__vertexCount_15();
		__this->set__vertexCount_15(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_9 = V_1;
		NullCheck(L_9);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = L_9->get__Lnext_4();
		V_1 = L_10;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_11 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_12 = V_2;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_11) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_12))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_13 = __this->get__elementCount_17();
		__this->set__elementCount_17(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_005e:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_14 = V_0;
		NullCheck(L_14);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_15 = L_14->get__next_1();
		V_0 = L_15;
	}

IL_0065:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_16 = V_0;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_17 = __this->get__mesh_1();
		NullCheck(L_17);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_18 = L_17->get__fHead_1();
		if ((!(((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_16) == ((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_18))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_19 = __this->get__elementCount_17();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_20 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2)));
		__this->set__elements_16(L_20);
		int32_t L_21 = __this->get__vertexCount_15();
		ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* L_22 = (ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912*)(ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912*)SZArrayNew(ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->set__vertices_14(L_22);
		V_5 = 0;
		V_6 = 0;
		V_3 = 0;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_23 = __this->get__mesh_1();
		NullCheck(L_23);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_24 = L_23->get__fHead_1();
		NullCheck(L_24);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_25 = L_24->get__next_1();
		V_0 = L_25;
		goto IL_0148;
	}

IL_00b5:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->get__inside_6();
		if (!L_27)
		{
			goto IL_0141;
		}
	}
	{
		V_4 = 0;
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_28 = V_0;
		NullCheck(L_28);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = L_28->get__anEdge_2();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_30 = L_29;
		V_1 = L_30;
		V_2 = L_30;
	}

IL_00cc:
	{
		ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* L_31 = __this->get__vertices_14();
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_33 = V_1;
		NullCheck(L_33);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_34 = L_33->get__Org_5();
		NullCheck(L_34);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_35 = L_34->get__coords_3();
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->set_Position_0(L_35);
		ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* L_36 = __this->get__vertices_14();
		int32_t L_37 = V_5;
		NullCheck(L_36);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_38 = V_1;
		NullCheck(L_38);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_39 = L_38->get__Org_5();
		NullCheck(L_39);
		int32_t L_40 = L_39->get__data_8();
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->set_Data_1(L_40);
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_43 = V_1;
		NullCheck(L_43);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_44 = L_43->get__Lnext_4();
		V_1 = L_44;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_45 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_46 = V_2;
		if ((!(((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_45) == ((RuntimeObject*)(Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)L_46))))
		{
			goto IL_00cc;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_47 = __this->get__elements_16();
		int32_t L_48 = V_6;
		int32_t L_49 = L_48;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		int32_t L_50 = V_3;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (int32_t)L_50);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_51 = __this->get__elements_16();
		int32_t L_52 = V_6;
		int32_t L_53 = L_52;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		int32_t L_54 = V_4;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_54);
		int32_t L_55 = V_3;
		int32_t L_56 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56));
	}

IL_0141:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_57 = V_0;
		NullCheck(L_57);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_58 = L_57->get__next_1();
		V_0 = L_58;
	}

IL_0148:
	{
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_59 = V_0;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_60 = __this->get__mesh_1();
		NullCheck(L_60);
		Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 * L_61 = L_60->get__fHead_1();
		if ((!(((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_59) == ((RuntimeObject*)(Face_t31F25BF30F0B892DB5D8FCD5B9526FCE812DF276 *)L_61))))
		{
			goto IL_00b5;
		}
	}
	{
		return;
	}
}
// System.Single LibTessDotNet.Tess::SignedArea(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m85813F740E6553CD33829A95B29FEECBB2413515 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, RuntimeObject* ___vertices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_SignedArea_m85813F740E6553CD33829A95B29FEECBB2413515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_005b;
	}

IL_000a:
	{
		RuntimeObject* L_0 = ___vertices0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  L_2 = InterfaceFuncInvoker1< ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t9E7EE7D96045AE0BB65ABE133385C9090C459AA9_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		RuntimeObject* L_3 = ___vertices0;
		int32_t L_4 = V_1;
		RuntimeObject* L_5 = ___vertices0;
		NullCheck(L_5);
		int32_t L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t7A7DEBDB7A8821C0B1063928331D715CC2D7A0C7_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  L_7 = InterfaceFuncInvoker1< ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t9E7EE7D96045AE0BB65ABE133385C9090C459AA9_il2cpp_TypeInfo_var, L_3, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1))%(int32_t)L_6)));
		V_3 = L_7;
		float L_8 = V_0;
		ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  L_9 = V_2;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_10 = L_9.get_Position_0();
		float L_11 = L_10.get_X_1();
		ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  L_12 = V_3;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_13 = L_12.get_Position_0();
		float L_14 = L_13.get_Y_2();
		V_0 = ((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_14))));
		float L_15 = V_0;
		ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  L_16 = V_2;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_17 = L_16.get_Position_0();
		float L_18 = L_17.get_Y_2();
		ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  L_19 = V_3;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_20 = L_19.get_Position_0();
		float L_21 = L_20.get_X_1();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_15, (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_21))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_23 = V_1;
		RuntimeObject* L_24 = ___vertices0;
		NullCheck(L_24);
		int32_t L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t7A7DEBDB7A8821C0B1063928331D715CC2D7A0C7_il2cpp_TypeInfo_var, L_24);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_000a;
		}
	}
	{
		float L_26 = V_0;
		return ((float)il2cpp_codegen_multiply((float)(0.5f), (float)L_26));
	}
}
// System.Void LibTessDotNet.Tess::AddContour(LibTessDotNet.ContourVertex[],LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_mE7A25A045ACF25C3099712698F6380A73A011999 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method)
{
	{
		ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912* L_0 = ___vertices0;
		int32_t L_1 = ___forceOrientation1;
		Tess_AddContourInternal_m89D418365BA30E2D8B6589A816EEC511E8E79DEB(__this, (RuntimeObject*)(RuntimeObject*)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::AddContour(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>,LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_m463E306BE95EEE4E71D457B607E7377CB8A27A22 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___vertices0;
		int32_t L_1 = ___forceOrientation1;
		Tess_AddContourInternal_m89D418365BA30E2D8B6589A816EEC511E8E79DEB(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::AddContourInternal(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>,LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_m89D418365BA30E2D8B6589A816EEC511E8E79DEB (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_AddContourInternal_m89D418365BA30E2D8B6589A816EEC511E8E79DEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B17_0 = 0;
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_0 = __this->get__mesh_1();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_1 = __this->get__pool_0();
		NullCheck(L_1);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_2 = GenericVirtFuncInvoker0< Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * >::Invoke(IPool_Get_TisMesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8_mCC30671D59EC1ECFDF374517229B66E017247F0A_RuntimeMethod_var, L_1);
		__this->set__mesh_1(L_2);
	}

IL_0019:
	{
		V_0 = (bool)0;
		int32_t L_3 = ___forceOrientation1;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_4 = ___vertices0;
		float L_5 = Tess_SignedArea_m85813F740E6553CD33829A95B29FEECBB2413515(__this, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = ___forceOrientation1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		float L_7 = V_2;
		if ((((float)L_7) < ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}

IL_0032:
	{
		int32_t L_8 = ___forceOrientation1;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0040;
		}
	}
	{
		float L_9 = V_2;
		G_B9_0 = ((((float)L_9) > ((float)(0.0f)))? 1 : 0);
		goto IL_0044;
	}

IL_0040:
	{
		G_B9_0 = 0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B9_0 = 1;
	}

IL_0044:
	{
		V_0 = (bool)G_B9_0;
	}

IL_0045:
	{
		V_1 = (Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL;
		V_3 = 0;
		goto IL_00f0;
	}

IL_004e:
	{
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_10 = V_1;
		if (L_10)
		{
			goto IL_007d;
		}
	}
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_11 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_12 = __this->get__pool_0();
		NullCheck(L_11);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_13 = Mesh_MakeEdge_m4241A4DBE65EF0587002E3EEFE1EC895E474E577(L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_14 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_15 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_16 = V_1;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_17 = V_1;
		NullCheck(L_17);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_18 = L_17->get__Sym_2();
		NullCheck(L_14);
		Mesh_Splice_mF7193C821CB69319D46F32E95747214B94321C2E(L_14, L_15, L_16, L_18, /*hidden argument*/NULL);
		goto IL_0097;
	}

IL_007d:
	{
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_19 = __this->get__mesh_1();
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_20 = __this->get__pool_0();
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_21 = V_1;
		NullCheck(L_19);
		Mesh_SplitEdge_m1924E9426B820B1BBE95A01E1D28E8E3408D357D(L_19, L_20, L_21, /*hidden argument*/NULL);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_22 = V_1;
		NullCheck(L_22);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_23 = L_22->get__Lnext_4();
		V_1 = L_23;
	}

IL_0097:
	{
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_25 = V_3;
		G_B17_0 = L_25;
		goto IL_00a7;
	}

IL_009d:
	{
		RuntimeObject* L_26 = ___vertices0;
		NullCheck(L_26);
		int32_t L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t7A7DEBDB7A8821C0B1063928331D715CC2D7A0C7_il2cpp_TypeInfo_var, L_26);
		int32_t L_28 = V_3;
		G_B17_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1)), (int32_t)L_28));
	}

IL_00a7:
	{
		V_4 = G_B17_0;
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_29 = V_1;
		NullCheck(L_29);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_30 = L_29->get__Org_5();
		RuntimeObject* L_31 = ___vertices0;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  L_33 = InterfaceFuncInvoker1< ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t9E7EE7D96045AE0BB65ABE133385C9090C459AA9_il2cpp_TypeInfo_var, L_31, L_32);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_34 = L_33.get_Position_0();
		NullCheck(L_30);
		L_30->set__coords_3(L_34);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_35 = V_1;
		NullCheck(L_35);
		Vertex_t4F465A076E01C38DDFECD49182E99697E0810E74 * L_36 = L_35->get__Org_5();
		RuntimeObject* L_37 = ___vertices0;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55  L_39 = InterfaceFuncInvoker1< ContourVertex_tAE6BC700B65517DD9842DE4CDD389F2C04F9AD55 , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t9E7EE7D96045AE0BB65ABE133385C9090C459AA9_il2cpp_TypeInfo_var, L_37, L_38);
		int32_t L_40 = L_39.get_Data_1();
		NullCheck(L_36);
		L_36->set__data_8(L_40);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_41 = V_1;
		NullCheck(L_41);
		L_41->set__winding_8(1);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_42 = V_1;
		NullCheck(L_42);
		Edge_t9D4BFE9716279C9D930CB20420750F7746432102 * L_43 = L_42->get__Sym_2();
		NullCheck(L_43);
		L_43->set__winding_8((-1));
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00f0:
	{
		int32_t L_45 = V_3;
		RuntimeObject* L_46 = ___vertices0;
		NullCheck(L_46);
		int32_t L_47 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t7A7DEBDB7A8821C0B1063928331D715CC2D7A0C7_il2cpp_TypeInfo_var, L_46);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_004e;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::Tessellate(LibTessDotNet.WindingRule,LibTessDotNet.ElementType,System.Int32,LibTessDotNet.CombineCallback,LibTessDotNet.Vec3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_Tessellate_m7171058E28D78A9B6C7F5F77075C0A2A383D6877 (Tess_tDBED95CCE003CD17B417D49F03B5DF5B0DBB2A95 * __this, int32_t ___windingRule0, int32_t ___elementType1, int32_t ___polySize2, CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * ___combineCallback3, Vec3_t956A293556A430A69339B775D377A79CAE910D67  ___normal4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tess_Tessellate_m7171058E28D78A9B6C7F5F77075C0A2A383D6877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67  L_0 = ___normal4;
		__this->set__normal_2(L_0);
		__this->set__vertices_14((ContourVertexU5BU5D_t509BD69195E8F4B9B6F64144D0A0E3948CEF8912*)NULL);
		__this->set__elements_16((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)NULL);
		int32_t L_1 = ___windingRule0;
		__this->set__windingRule_9(L_1);
		CombineCallback_t36D968D5AB27E73C4C15277DB8B04C6D105F35FF * L_2 = ___combineCallback3;
		__this->set__combineCallback_13(L_2);
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_3 = __this->get__mesh_1();
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		Tess_ProjectPolygon_mBAED2297A7800E1C3965E9B42CDF75D8BDF126BD(__this, /*hidden argument*/NULL);
		Tess_ComputeInterior_m588F9F9D24E9984FE4D90D819CB19EA82192C1F4(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___elementType1;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		Tess_SetWindingNumber_mFDFF458583128A8135E55C05B9A0C4223101667F(__this, 1, (bool)1, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_0048:
	{
		Tess_TessellateInterior_mAE5B9B07BB675F208C42825A95454C3DCC551F46(__this, /*hidden argument*/NULL);
	}

IL_004e:
	{
		int32_t L_5 = ___elementType1;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		Tess_OutputContours_mC99F855161EAE97FA2D0C1F71767778B238DA2A9(__this, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_005a:
	{
		int32_t L_6 = ___elementType1;
		int32_t L_7 = ___polySize2;
		Tess_OutputPolymesh_m12B167C80EBFF639080B0C6DC1BFDC632AABB184(__this, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0062:
	{
		IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * L_8 = __this->get__pool_0();
		Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * L_9 = __this->get__mesh_1();
		NullCheck(L_8);
		GenericVirtActionInvoker1< Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 * >::Invoke(IPool_Return_TisMesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8_m496E72CC1590807BEB318931B9DEE0420A5EE763_RuntimeMethod_var, L_8, L_9);
		__this->set__mesh_1((Mesh_t3894F83DEE7FEE7D6FA1BB70CAD9E0E77050CEA8 *)NULL);
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
// System.Void LibTessDotNet.Tess_ActiveRegion::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Init_m7070255A79D0841672A25E94A6C990D98F3E5B59 (ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess_ActiveRegion::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Reset_m78F01EDC7AA6D3D332DAC0E9C7B3B9324BB56004 (ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * __this, IPool_t4DDFDA091F1480FDB66609EA0CFEDAA0C1C7280B * ___pool0, const RuntimeMethod* method)
{
	{
		__this->set__eUp_0((Edge_t9D4BFE9716279C9D930CB20420750F7746432102 *)NULL);
		__this->set__nodeUp_1((Node_t66E8738DE17CE247142AD7181AD366AC78B180A7 *)NULL);
		__this->set__windingNumber_2(0);
		__this->set__inside_3((bool)0);
		__this->set__sentinel_4((bool)0);
		__this->set__dirty_5((bool)0);
		__this->set__fixUpperEdge_6((bool)0);
		return;
	}
}
// System.Void LibTessDotNet.Tess_ActiveRegion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion__ctor_m0E5ADE4F9F6719105C040B67D12E177B0286D80D (ActiveRegion_t801893C9B6BFE80B8224F3EBF54DEA5B1791EED0 * __this, const RuntimeMethod* method)
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
// System.Single LibTessDotNet.Vec3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_m49E9B2C6FBC606ECAB4F53D71E4D95FA2E8F6498 (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vec3_get_Item_m49E9B2C6FBC606ECAB4F53D71E4D95FA2E8F6498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		float L_1 = __this->get_X_1();
		return L_1;
	}

IL_000a:
	{
		int32_t L_2 = ___index0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		float L_3 = __this->get_Y_2();
		return L_3;
	}

IL_0015:
	{
		int32_t L_4 = ___index0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0020;
		}
	}
	{
		float L_5 = __this->get_Z_3();
		return L_5;
	}

IL_0020:
	{
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_6 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m17448AB4B27BC9D8AEB4605CDB0EA053626ABEC1(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Vec3_get_Item_m49E9B2C6FBC606ECAB4F53D71E4D95FA2E8F6498_RuntimeMethod_var);
	}
}
IL2CPP_EXTERN_C  float Vec3_get_Item_m49E9B2C6FBC606ECAB4F53D71E4D95FA2E8F6498_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vec3_t956A293556A430A69339B775D377A79CAE910D67 * _thisAdjusted = reinterpret_cast<Vec3_t956A293556A430A69339B775D377A79CAE910D67 *>(__this + _offset);
	return Vec3_get_Item_m49E9B2C6FBC606ECAB4F53D71E4D95FA2E8F6498(_thisAdjusted, ___index0, method);
}
// System.Void LibTessDotNet.Vec3::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99 (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		float L_1 = ___value1;
		__this->set_X_1(L_1);
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___index0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		float L_3 = ___value1;
		__this->set_Y_2(L_3);
		return;
	}

IL_0017:
	{
		int32_t L_4 = ___index0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = ___value1;
		__this->set_Z_3(L_5);
		return;
	}

IL_0023:
	{
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_6 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m17448AB4B27BC9D8AEB4605CDB0EA053626ABEC1(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99_RuntimeMethod_var);
	}
}
IL2CPP_EXTERN_C  void Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vec3_t956A293556A430A69339B775D377A79CAE910D67 * _thisAdjusted = reinterpret_cast<Vec3_t956A293556A430A69339B775D377A79CAE910D67 *>(__this + _offset);
	Vec3_set_Item_m0465DE04DC7D8B246327EC8FDED73C444CADCE99(_thisAdjusted, ___index0, ___value1, method);
}
// System.Void LibTessDotNet.Vec3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m39957F15A8EE7ED94366DEDB02758EB3A6E3B4F8 (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_X_1(L_0);
		float L_1 = ___y1;
		__this->set_Y_2(L_1);
		float L_2 = ___z2;
		__this->set_Z_3(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void Vec3__ctor_m39957F15A8EE7ED94366DEDB02758EB3A6E3B4F8_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vec3_t956A293556A430A69339B775D377A79CAE910D67 * _thisAdjusted = reinterpret_cast<Vec3_t956A293556A430A69339B775D377A79CAE910D67 *>(__this + _offset);
	Vec3__ctor_m39957F15A8EE7ED94366DEDB02758EB3A6E3B4F8(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Void LibTessDotNet.Vec3::Sub(LibTessDotNet.Vec3&,LibTessDotNet.Vec3&,LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mF89A08A34433D26D2EC000CE4673A32BDFA5D77B (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___lhs0, Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___rhs1, Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___result2, const RuntimeMethod* method)
{
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_0 = ___result2;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_1 = ___lhs0;
		float L_2 = L_1->get_X_1();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_3 = ___rhs1;
		float L_4 = L_3->get_X_1();
		L_0->set_X_1(((float)il2cpp_codegen_subtract((float)L_2, (float)L_4)));
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_5 = ___result2;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_6 = ___lhs0;
		float L_7 = L_6->get_Y_2();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_8 = ___rhs1;
		float L_9 = L_8->get_Y_2();
		L_5->set_Y_2(((float)il2cpp_codegen_subtract((float)L_7, (float)L_9)));
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_10 = ___result2;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_11 = ___lhs0;
		float L_12 = L_11->get_Z_3();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_13 = ___rhs1;
		float L_14 = L_13->get_Z_3();
		L_10->set_Z_3(((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)));
		return;
	}
}
// System.Void LibTessDotNet.Vec3::Neg(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_mC950637548B81F59948653EFABC01C3215CAD8A0 (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___v0, const RuntimeMethod* method)
{
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_0 = ___v0;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_1 = ___v0;
		float L_2 = L_1->get_X_1();
		L_0->set_X_1(((-L_2)));
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_3 = ___v0;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_4 = ___v0;
		float L_5 = L_4->get_Y_2();
		L_3->set_Y_2(((-L_5)));
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_6 = ___v0;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_7 = ___v0;
		float L_8 = L_7->get_Z_3();
		L_6->set_Z_3(((-L_8)));
		return;
	}
}
// System.Void LibTessDotNet.Vec3::Dot(LibTessDotNet.Vec3&,LibTessDotNet.Vec3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_m477C1E4EF502CE1C78217EC22BA31A1B8950DB91 (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___u0, Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___v1, float* ___dot2, const RuntimeMethod* method)
{
	{
		float* L_0 = ___dot2;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_1 = ___u0;
		float L_2 = L_1->get_X_1();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_3 = ___v1;
		float L_4 = L_3->get_X_1();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_5 = ___u0;
		float L_6 = L_5->get_Y_2();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_7 = ___v1;
		float L_8 = L_7->get_Y_2();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_9 = ___u0;
		float L_10 = L_9->get_Z_3();
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_11 = ___v1;
		float L_12 = L_11->get_Z_3();
		*((float*)L_0) = (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_4)), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_8)))), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_12))));
		return;
	}
}
// System.Int32 LibTessDotNet.Vec3::LongAxis(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_mC96F5166F87C6C38F38278B42651A96A8D20393E (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vec3_LongAxis_mC96F5166F87C6C38F38278B42651A96A8D20393E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float G_B4_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	{
		V_0 = 0;
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_0 = ___v0;
		float L_1 = L_0->get_Y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_3 = ___v0;
		float L_4 = L_3->get_X_1();
		float L_5 = fabsf(L_4);
		if ((!(((float)L_2) > ((float)L_5))))
		{
			goto IL_001c;
		}
	}
	{
		V_0 = 1;
	}

IL_001c:
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_6 = ___v0;
		float L_7 = L_6->get_Z_3();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_8 = fabsf(L_7);
		int32_t L_9 = V_0;
		G_B3_0 = L_8;
		if (!L_9)
		{
			G_B4_0 = L_8;
			goto IL_0032;
		}
	}
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_10 = ___v0;
		float L_11 = L_10->get_Y_2();
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		goto IL_0038;
	}

IL_0032:
	{
		Vec3_t956A293556A430A69339B775D377A79CAE910D67 * L_12 = ___v0;
		float L_13 = L_12->get_X_1();
		G_B5_0 = L_13;
		G_B5_1 = G_B4_0;
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_14 = fabsf(G_B5_0);
		if ((!(((float)G_B5_1) > ((float)L_14))))
		{
			goto IL_0041;
		}
	}
	{
		V_0 = 2;
	}

IL_0041:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.String LibTessDotNet.Vec3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_m705A61E6748DA1229F0D554B87C2FF8032827247 (Vec3_t956A293556A430A69339B775D377A79CAE910D67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vec3_ToString_m705A61E6748DA1229F0D554B87C2FF8032827247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_X_1();
		float L_1 = L_0;
		RuntimeObject * L_2 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_1);
		float L_3 = __this->get_Y_2();
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_4);
		float L_6 = __this->get_Z_3();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral450ADF49E61DCAED8DFD8271D9026A58F6C30441, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* Vec3_ToString_m705A61E6748DA1229F0D554B87C2FF8032827247_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vec3_t956A293556A430A69339B775D377A79CAE910D67 * _thisAdjusted = reinterpret_cast<Vec3_t956A293556A430A69339B775D377A79CAE910D67 *>(__this + _offset);
	return Vec3_ToString_m705A61E6748DA1229F0D554B87C2FF8032827247(_thisAdjusted, method);
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
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Node_get_Key_m7F60225B624958D1CF77BB12E42467E55268C862_gshared_inline (Node_t27D2FB00F6F3333076AB3588F42A33EBA0E4E735 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__key_0();
		return (RuntimeObject *)L_0;
	}
}
