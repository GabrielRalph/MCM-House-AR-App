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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// HDRLoader.Rgbe
struct Rgbe_tF73B4C98C42FD35507AF1F153378CBB08C2E90F7;
// HDRLoader.Rgbe/Header
struct Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
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
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.BinaryReader
struct BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969;
// System.IO.EndOfStreamException
struct EndOfStreamException_t1B47BA867EC337F83056C2833A59293754AAC01F;
// System.IO.IOException
struct IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.RegularExpressions.Capture
struct Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t486E24518017279AA91055BEE82514CAE7BAE647;
// System.Text.RegularExpressions.Group
struct Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t40CFA194F8EE1BF5E560B7C1E2C8F48220C93910;
// System.Text.RegularExpressions.Match
struct Match_tE447871AB59EED3642F31EB9559D162C2977EBB5;
// System.Text.RegularExpressions.Regex
struct Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;

IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t1B47BA867EC337F83056C2833A59293754AAC01F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rgbe_tF73B4C98C42FD35507AF1F153378CBB08C2E90F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05AFB70E0CBD90A999C7050C8B27877148DA9831;
IL2CPP_EXTERN_C String_t* _stringLiteral08686AC968487E8315B2CED81BC1E8F59F1F6B1B;
IL2CPP_EXTERN_C String_t* _stringLiteral09AC065C6A96ABACE427026873A0188E6A7B6A81;
IL2CPP_EXTERN_C String_t* _stringLiteral2A9FE40F8FC0F539CF7E6D82E90A25EF24A6C564;
IL2CPP_EXTERN_C String_t* _stringLiteral627789169A1FF066C779D81EE7E16F4A4F2B13A8;
IL2CPP_EXTERN_C String_t* _stringLiteral6777449911C5B7FFDB0816AE7C89A844FC3FC071;
IL2CPP_EXTERN_C String_t* _stringLiteral73C774F3077BCDA69B947EE284A1C7E56CE644F6;
IL2CPP_EXTERN_C String_t* _stringLiteral82FC524FDD4CDF6EBBEE2F907A93E57673E23BBF;
IL2CPP_EXTERN_C String_t* _stringLiteral8E092A90B7BE30B098D68A4F6C586D16C4BC5CF0;
IL2CPP_EXTERN_C String_t* _stringLiteral99E9757B0C7626ECE28CE28DD3CCA1EDD8A05872;
IL2CPP_EXTERN_C String_t* _stringLiteral9F1C0785410E5B64C4E10A25EE420CB8121FDB80;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C6B8AF1D5DC22EFA4D96D8D47F22ACCF89EBDF;
IL2CPP_EXTERN_C String_t* _stringLiteralC68147D0707C19B8B70C1BFA11124E47C707A634;
IL2CPP_EXTERN_C String_t* _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77;
IL2CPP_EXTERN_C String_t* _stringLiteralD1A3988C24994839D76A235D055A8723E297A974;
IL2CPP_EXTERN_C String_t* _stringLiteralED3DC016C6715A8A88BF7EC863B99F2E626A3443;
IL2CPP_EXTERN_C String_t* _stringLiteralFC47C8D99F953315CBC88AF12A97FDF658A96969;
IL2CPP_EXTERN_C String_t* _stringLiteralFC47E5F22897B79D4D3962F4505F3AD964B521D4;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryReaderExtension_ReadFully_m6E2521B196F926027EEE54800C9B5C82CA84E45E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rgbe_ReadHeader_m50CF8F54C666141C48245818B5EF3E3CB468086B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rgbe_ReadPixelsRawRle_m925F05C0E33F91C91F6F6D4564DC25734E67293D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mA46027F34DBCE04CAC387FD8ACB1F42FDD322CFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BinaryReaderExtension_ReadFully_m6E2521B196F926027EEE54800C9B5C82CA84E45E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BinaryReaderExtension_ReadLine_m2A07DA1FD456D6C6FDC86393812F4E7CA6B101A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HDRLoader_Load_m5665F16AE7D74D85313B1312EB4DC2D46924D59F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Header_ToString_mA7A1AD8B5737180232853B9C9E10F989D9D44D9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Rgbe_ReadHeader_m50CF8F54C666141C48245818B5EF3E3CB468086B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Rgbe_ReadPixelsRawRle_m925F05C0E33F91C91F6F6D4564DC25734E67293D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Rgbe_ReadPixelsRaw_m465AB5149A88A4F02950722772C033ED401EC60A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Rgbe_Rgbe2Float_mC6F1CCADBB768ABDD82288992D201FF801AE4A5E_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t49439D77E5FC22908729A7DD2E8B0D80F399E7BC 
{
public:

public:
};


// System.Object


// HDRLoader.BinaryReaderExtension
struct  BinaryReaderExtension_t2715458C4E536DD39A7C08D734B7E6133A1DE9D6  : public RuntimeObject
{
public:

public:
};


// HDRLoader.HDRLoader
struct  HDRLoader_t1B2450A62A1BFE9602C7019D844459B1B8CC5F8E  : public RuntimeObject
{
public:

public:
};


// HDRLoader.Rgbe
struct  Rgbe_tF73B4C98C42FD35507AF1F153378CBB08C2E90F7  : public RuntimeObject
{
public:

public:
};


// HDRLoader.Rgbe_Header
struct  Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89  : public RuntimeObject
{
public:
	// System.Int32 HDRLoader.Rgbe_Header::_valid
	int32_t ____valid_0;
	// System.Single HDRLoader.Rgbe_Header::<Exposure>k__BackingField
	float ___U3CExposureU3Ek__BackingField_1;
	// System.Single HDRLoader.Rgbe_Header::<Gamma>k__BackingField
	float ___U3CGammaU3Ek__BackingField_2;
	// System.Int32 HDRLoader.Rgbe_Header::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_3;
	// System.String HDRLoader.Rgbe_Header::<ProgramType>k__BackingField
	String_t* ___U3CProgramTypeU3Ek__BackingField_4;
	// System.Int32 HDRLoader.Rgbe_Header::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__valid_0() { return static_cast<int32_t>(offsetof(Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89, ____valid_0)); }
	inline int32_t get__valid_0() const { return ____valid_0; }
	inline int32_t* get_address_of__valid_0() { return &____valid_0; }
	inline void set__valid_0(int32_t value)
	{
		____valid_0 = value;
	}

	inline static int32_t get_offset_of_U3CExposureU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89, ___U3CExposureU3Ek__BackingField_1)); }
	inline float get_U3CExposureU3Ek__BackingField_1() const { return ___U3CExposureU3Ek__BackingField_1; }
	inline float* get_address_of_U3CExposureU3Ek__BackingField_1() { return &___U3CExposureU3Ek__BackingField_1; }
	inline void set_U3CExposureU3Ek__BackingField_1(float value)
	{
		___U3CExposureU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CGammaU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89, ___U3CGammaU3Ek__BackingField_2)); }
	inline float get_U3CGammaU3Ek__BackingField_2() const { return ___U3CGammaU3Ek__BackingField_2; }
	inline float* get_address_of_U3CGammaU3Ek__BackingField_2() { return &___U3CGammaU3Ek__BackingField_2; }
	inline void set_U3CGammaU3Ek__BackingField_2(float value)
	{
		___U3CGammaU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89, ___U3CHeightU3Ek__BackingField_3)); }
	inline int32_t get_U3CHeightU3Ek__BackingField_3() const { return ___U3CHeightU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CHeightU3Ek__BackingField_3() { return &___U3CHeightU3Ek__BackingField_3; }
	inline void set_U3CHeightU3Ek__BackingField_3(int32_t value)
	{
		___U3CHeightU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CProgramTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89, ___U3CProgramTypeU3Ek__BackingField_4)); }
	inline String_t* get_U3CProgramTypeU3Ek__BackingField_4() const { return ___U3CProgramTypeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CProgramTypeU3Ek__BackingField_4() { return &___U3CProgramTypeU3Ek__BackingField_4; }
	inline void set_U3CProgramTypeU3Ek__BackingField_4(String_t* value)
	{
		___U3CProgramTypeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProgramTypeU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89, ___U3CWidthU3Ek__BackingField_5)); }
	inline int32_t get_U3CWidthU3Ek__BackingField_5() const { return ___U3CWidthU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CWidthU3Ek__BackingField_5() { return &___U3CWidthU3Ek__BackingField_5; }
	inline void set_U3CWidthU3Ek__BackingField_5(int32_t value)
	{
		___U3CWidthU3Ek__BackingField_5 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// System.Text.RegularExpressions.Capture
struct  Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Capture::_text
	String_t* ____text_0;
	// System.Int32 System.Text.RegularExpressions.Capture::_index
	int32_t ____index_1;
	// System.Int32 System.Text.RegularExpressions.Capture::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__text_0() { return static_cast<int32_t>(offsetof(Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73, ____text_0)); }
	inline String_t* get__text_0() const { return ____text_0; }
	inline String_t** get_address_of__text_0() { return &____text_0; }
	inline void set__text_0(String_t* value)
	{
		____text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};


// System.Text.RegularExpressions.GroupCollection
struct  GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t40CFA194F8EE1BF5E560B7C1E2C8F48220C93910* ____groups_2;

public:
	inline static int32_t get_offset_of__match_0() { return static_cast<int32_t>(offsetof(GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F, ____match_0)); }
	inline Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * get__match_0() const { return ____match_0; }
	inline Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 ** get_address_of__match_0() { return &____match_0; }
	inline void set__match_0(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * value)
	{
		____match_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____match_0), (void*)value);
	}

	inline static int32_t get_offset_of__captureMap_1() { return static_cast<int32_t>(offsetof(GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F, ____captureMap_1)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get__captureMap_1() const { return ____captureMap_1; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of__captureMap_1() { return &____captureMap_1; }
	inline void set__captureMap_1(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		____captureMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____captureMap_1), (void*)value);
	}

	inline static int32_t get_offset_of__groups_2() { return static_cast<int32_t>(offsetof(GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F, ____groups_2)); }
	inline GroupU5BU5D_t40CFA194F8EE1BF5E560B7C1E2C8F48220C93910* get__groups_2() const { return ____groups_2; }
	inline GroupU5BU5D_t40CFA194F8EE1BF5E560B7C1E2C8F48220C93910** get_address_of__groups_2() { return &____groups_2; }
	inline void set__groups_2(GroupU5BU5D_t40CFA194F8EE1BF5E560B7C1E2C8F48220C93910* value)
	{
		____groups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groups_2), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// System.Text.RegularExpressions.Group
struct  Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443  : public Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73
{
public:
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t486E24518017279AA91055BEE82514CAE7BAE647 * ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::_name
	String_t* ____name_7;

public:
	inline static int32_t get_offset_of__caps_4() { return static_cast<int32_t>(offsetof(Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443, ____caps_4)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__caps_4() const { return ____caps_4; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__caps_4() { return &____caps_4; }
	inline void set__caps_4(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____caps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____caps_4), (void*)value);
	}

	inline static int32_t get_offset_of__capcount_5() { return static_cast<int32_t>(offsetof(Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443, ____capcount_5)); }
	inline int32_t get__capcount_5() const { return ____capcount_5; }
	inline int32_t* get_address_of__capcount_5() { return &____capcount_5; }
	inline void set__capcount_5(int32_t value)
	{
		____capcount_5 = value;
	}

	inline static int32_t get_offset_of__capcoll_6() { return static_cast<int32_t>(offsetof(Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443, ____capcoll_6)); }
	inline CaptureCollection_t486E24518017279AA91055BEE82514CAE7BAE647 * get__capcoll_6() const { return ____capcoll_6; }
	inline CaptureCollection_t486E24518017279AA91055BEE82514CAE7BAE647 ** get_address_of__capcoll_6() { return &____capcoll_6; }
	inline void set__capcoll_6(CaptureCollection_t486E24518017279AA91055BEE82514CAE7BAE647 * value)
	{
		____capcoll_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____capcoll_6), (void*)value);
	}

	inline static int32_t get_offset_of__name_7() { return static_cast<int32_t>(offsetof(Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443, ____name_7)); }
	inline String_t* get__name_7() const { return ____name_7; }
	inline String_t** get_address_of__name_7() { return &____name_7; }
	inline void set__name_7(String_t* value)
	{
		____name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_7), (void*)value);
	}
};

struct Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::_emptygroup
	Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 * ____emptygroup_3;

public:
	inline static int32_t get_offset_of__emptygroup_3() { return static_cast<int32_t>(offsetof(Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443_StaticFields, ____emptygroup_3)); }
	inline Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 * get__emptygroup_3() const { return ____emptygroup_3; }
	inline Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 ** get_address_of__emptygroup_3() { return &____emptygroup_3; }
	inline void set__emptygroup_3(Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 * value)
	{
		____emptygroup_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptygroup_3), (void*)value);
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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

// System.Text.RegularExpressions.Match
struct  Match_tE447871AB59EED3642F31EB9559D162C2977EBB5  : public Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443
{
public:
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F * ____groupcoll_9;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * ____regex_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_13;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_14;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* ____matches_15;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____matchcount_16;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_17;

public:
	inline static int32_t get_offset_of__groupcoll_9() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____groupcoll_9)); }
	inline GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F * get__groupcoll_9() const { return ____groupcoll_9; }
	inline GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F ** get_address_of__groupcoll_9() { return &____groupcoll_9; }
	inline void set__groupcoll_9(GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F * value)
	{
		____groupcoll_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groupcoll_9), (void*)value);
	}

	inline static int32_t get_offset_of__regex_10() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____regex_10)); }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * get__regex_10() const { return ____regex_10; }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF ** get_address_of__regex_10() { return &____regex_10; }
	inline void set__regex_10(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * value)
	{
		____regex_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_10), (void*)value);
	}

	inline static int32_t get_offset_of__textbeg_11() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____textbeg_11)); }
	inline int32_t get__textbeg_11() const { return ____textbeg_11; }
	inline int32_t* get_address_of__textbeg_11() { return &____textbeg_11; }
	inline void set__textbeg_11(int32_t value)
	{
		____textbeg_11 = value;
	}

	inline static int32_t get_offset_of__textpos_12() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____textpos_12)); }
	inline int32_t get__textpos_12() const { return ____textpos_12; }
	inline int32_t* get_address_of__textpos_12() { return &____textpos_12; }
	inline void set__textpos_12(int32_t value)
	{
		____textpos_12 = value;
	}

	inline static int32_t get_offset_of__textend_13() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____textend_13)); }
	inline int32_t get__textend_13() const { return ____textend_13; }
	inline int32_t* get_address_of__textend_13() { return &____textend_13; }
	inline void set__textend_13(int32_t value)
	{
		____textend_13 = value;
	}

	inline static int32_t get_offset_of__textstart_14() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____textstart_14)); }
	inline int32_t get__textstart_14() const { return ____textstart_14; }
	inline int32_t* get_address_of__textstart_14() { return &____textstart_14; }
	inline void set__textstart_14(int32_t value)
	{
		____textstart_14 = value;
	}

	inline static int32_t get_offset_of__matches_15() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____matches_15)); }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* get__matches_15() const { return ____matches_15; }
	inline Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43** get_address_of__matches_15() { return &____matches_15; }
	inline void set__matches_15(Int32U5BU5DU5BU5D_tCA34E042D233821D51B4DAFB480EE602F2DBEF43* value)
	{
		____matches_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_15), (void*)value);
	}

	inline static int32_t get_offset_of__matchcount_16() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____matchcount_16)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__matchcount_16() const { return ____matchcount_16; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__matchcount_16() { return &____matchcount_16; }
	inline void set__matchcount_16(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____matchcount_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matchcount_16), (void*)value);
	}

	inline static int32_t get_offset_of__balancing_17() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5, ____balancing_17)); }
	inline bool get__balancing_17() const { return ____balancing_17; }
	inline bool* get_address_of__balancing_17() { return &____balancing_17; }
	inline void set__balancing_17(bool value)
	{
		____balancing_17 = value;
	}
};

struct Match_tE447871AB59EED3642F31EB9559D162C2977EBB5_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::_empty
	Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * ____empty_8;

public:
	inline static int32_t get_offset_of__empty_8() { return static_cast<int32_t>(offsetof(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5_StaticFields, ____empty_8)); }
	inline Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * get__empty_8() const { return ____empty_8; }
	inline Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 ** get_address_of__empty_8() { return &____empty_8; }
	inline void set__empty_8(Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * value)
	{
		____empty_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____empty_8), (void*)value);
	}
};


// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t9A6138CDA9C60924D503C584095349F008C52EA1 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t9A6138CDA9C60924D503C584095349F008C52EA1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// Unity.Collections.NativeArray`1<System.Single>
struct  NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
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


// System.IO.IOException
struct  IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// System.IO.EndOfStreamException
struct  EndOfStreamException_t1B47BA867EC337F83056C2833A59293754AAC01F  : public IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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


// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Texture2D::GetRawTextureData<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478  Texture2D_GetRawTextureData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mA46027F34DBCE04CAC387FD8ACB1F42FDD322CFC_gshared (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);

// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m44BCD2BF32D45E9376761FF33AA429BFBD902F07 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_gshared)(__this, method);
}
// System.Void System.IO.EndOfStreamException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_mD5C60B460580BBA98DFF238F6D5BBE4C9CAE1D80 (EndOfStreamException_t1B47BA867EC337F83056C2833A59293754AAC01F * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input0, const RuntimeMethod* method);
// System.Void HDRLoader.Rgbe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe__ctor_m1EDC2180526731998C07DBD6AF237D2835BFB850 (Rgbe_tF73B4C98C42FD35507AF1F153378CBB08C2E90F7 * __this, const RuntimeMethod* method);
// HDRLoader.Rgbe/Header HDRLoader.Rgbe::ReadHeader(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * Rgbe_ReadHeader_m50CF8F54C666141C48245818B5EF3E3CB468086B (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___in0, const RuntimeMethod* method);
// System.Single HDRLoader.Rgbe/Header::get_Gamma()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Header_get_Gamma_m032BF21D3D88DFF7E33459A84711E49F3EEBA71D_inline (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method);
// System.Single HDRLoader.Rgbe/Header::get_Exposure()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Header_get_Exposure_mA9E236522B0C19A71BE014B0BB3770BE365A0B6F_inline (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method);
// System.Int32 HDRLoader.Rgbe/Header::get_Width()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Header_get_Width_m5DDAFAC97CCAF4EFEAE3289B3159295C874C915B_inline (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method);
// System.Int32 HDRLoader.Rgbe/Header::get_Height()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Header_get_Height_m51B92607F6C6028EF62FE4FCE9D0338E5E3F8538_inline (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method);
// System.Void HDRLoader.Rgbe::ReadPixelsRawRle(System.IO.BinaryReader,System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe_ReadPixelsRawRle_m925F05C0E33F91C91F6F6D4564DC25734E67293D (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___in0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, int32_t ___offset2, int32_t ___scanline_width3, int32_t ___num_scanlines4, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.Texture2D::GetRawTextureData<System.Single>()
inline NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478  Texture2D_GetRawTextureData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mA46027F34DBCE04CAC387FD8ACB1F42FDD322CFC (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478  (*) (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *, const RuntimeMethod*))Texture2D_GetRawTextureData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mA46027F34DBCE04CAC387FD8ACB1F42FDD322CFC_gshared)(__this, method);
}
// System.Void HDRLoader.Rgbe::Rgbe2Float(Unity.Collections.NativeArray`1<System.Single>,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe_Rgbe2Float_mC6F1CCADBB768ABDD82288992D201FF801AE4A5E (Rgbe_tF73B4C98C42FD35507AF1F153378CBB08C2E90F7 * __this, NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478  ___rgba0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbe1, int32_t ___rgbeIndex2, int32_t ___rgbaIndex3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mCC17B1895AEB420CF75B1A50A62AB623C225A6C1 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method);
// System.String HDRLoader.BinaryReaderExtension::ReadLine(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BinaryReaderExtension_ReadLine_m2A07DA1FD456D6C6FDC86393812F4E7CA6B101A6 (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175 (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m5F3E5F42FE95CB24ADF3164009FF7136DB1CE888 (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * Regex_Match_m08332EE8B44F5A94218B8D432627EB7F71EE7BE2 (String_t* ___input0, String_t* ___pattern1, int32_t ___options2, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m91D00749B3C9D2030B72C6DA3AF2B3BA48F22521 (Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 * __this, const RuntimeMethod* method);
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 * GroupCollection_get_Item_m5ABF137CEFD5E2F2FE2EC76835963594300D4177 (GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F * __this, int32_t ___groupnum0, const RuntimeMethod* method);
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m8F739B7E4E173814B0890ECFEA37194D592BE91C (Capture_tF4475248CCF3EFF914844BE2C993FC609D41DB73 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365 (String_t* ___value0, const RuntimeMethod* method);
// System.Void HDRLoader.Rgbe/Header::.ctor(System.Int32,System.String,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header__ctor_mF86B1728E6E6C8F9651BB47E5C8103B0A3A8CF56 (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, int32_t ___valid0, String_t* ___programType1, float ___gamma2, float ___exposure3, int32_t ___width4, int32_t ___height5, const RuntimeMethod* method);
// System.Void HDRLoader.BinaryReaderExtension::ReadFully(System.IO.BinaryReader,System.Byte[],System.Int32,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReaderExtension_ReadFully_m6E2521B196F926027EEE54800C9B5C82CA84E45E (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___offset2, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___expected3, const RuntimeMethod* method);
// System.Void HDRLoader.Rgbe::ReadPixelsRaw(System.IO.BinaryReader,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe_ReadPixelsRaw_m465AB5149A88A4F02950722772C033ED401EC60A (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___in0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, int32_t ___offset2, int32_t ___numpixels3, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gamma()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_gamma_m38A0BB5A9A0A7F860BEEB3BD9F69F72CFA926A79 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean HDRLoader.Rgbe/Header::get_IsProgramTypeValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_IsProgramTypeValid_m607DC0C73474225A504F39DEA795A253E2ED52F3 (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String HDRLoader.Rgbe/Header::get_ProgramType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Header_get_ProgramType_m41BAC50825193A4D1EA18D86BF593A04176CF842_inline (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method);
// System.Boolean HDRLoader.Rgbe/Header::get_IsGammaValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_IsGammaValid_mE516765D867AF18FAADAB9B9AD4A54A66B5912B4 (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m95DAAD2C9A17B0CFA716D95A1385052C2272C1C1 (StringBuilder_t * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean HDRLoader.Rgbe/Header::get_IsExposureValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_IsExposureValid_mB228D5F7027AD253DF05882D785D907FB3D23E05 (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m85874CFF9E4B152DB2A91936C6F2CA3E9B1EFF84 (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
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
// System.String HDRLoader.BinaryReaderExtension::ReadLine(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BinaryReaderExtension_ReadLine_m2A07DA1FD456D6C6FDC86393812F4E7CA6B101A6 (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BinaryReaderExtension_ReadLine_m2A07DA1FD456D6C6FDC86393812F4E7CA6B101A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	Il2CppChar V_2 = 0x0;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = (bool)0;
		goto IL_004e;
	}

IL_000a:
	{
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_1 = ___reader0;
		NullCheck(L_1);
		Il2CppChar L_2 = VirtFuncInvoker0< Il2CppChar >::Invoke(13 /* System.Char System.IO.BinaryReader::ReadChar() */, L_1);
		V_2 = L_2;
		goto IL_0023;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (EndOfStreamException_t1B47BA867EC337F83056C2833A59293754AAC01F_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0014;
		throw e;
	}

CATCH_0014:
	{ // begin catch(System.IO.EndOfStreamException)
		{
			StringBuilder_t * L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4 = StringBuilder_get_Length_m44BCD2BF32D45E9376761FF33AA429BFBD902F07(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0021;
			}
		}

IL_001d:
		{
			V_3 = (String_t*)NULL;
			goto IL_0058;
		}

IL_0021:
		{
			goto IL_0051;
		}
	} // end catch (depth: 1)

IL_0023:
	{
		Il2CppChar L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)10))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0046;
		}
	}
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_7 = ___reader0;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.BinaryReader::PeekChar() */, L_7);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_003e;
		}
	}
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_9 = ___reader0;
		NullCheck(L_9);
		VirtFuncInvoker0< Il2CppChar >::Invoke(13 /* System.Char System.IO.BinaryReader::ReadChar() */, L_9);
	}

IL_003e:
	{
		V_1 = (bool)1;
		goto IL_004e;
	}

IL_0042:
	{
		V_1 = (bool)1;
		goto IL_004e;
	}

IL_0046:
	{
		StringBuilder_t * L_10 = V_0;
		Il2CppChar L_11 = V_2;
		NullCheck(L_10);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_10, L_11, /*hidden argument*/NULL);
	}

IL_004e:
	{
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_000a;
		}
	}

IL_0051:
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}

IL_0058:
	{
		String_t* L_15 = V_3;
		return L_15;
	}
}
// System.Void HDRLoader.BinaryReaderExtension::ReadFully(System.IO.BinaryReader,System.Byte[],System.Int32,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReaderExtension_ReadFully_m6E2521B196F926027EEE54800C9B5C82CA84E45E (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___stream0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer1, int32_t ___offset2, Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___expected3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BinaryReaderExtension_ReadFully_m6E2521B196F926027EEE54800C9B5C82CA84E45E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&___expected3), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer1;
		NullCheck(L_1);
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&___expected3), (((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
	}

IL_0013:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_2 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer1;
		int32_t L_4 = ___offset2;
		int32_t L_5 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&___expected3), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_6 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(25 /* System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		int32_t L_7 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&___expected3), /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0031;
		}
	}
	{
		EndOfStreamException_t1B47BA867EC337F83056C2833A59293754AAC01F * L_8 = (EndOfStreamException_t1B47BA867EC337F83056C2833A59293754AAC01F *)il2cpp_codegen_object_new(EndOfStreamException_t1B47BA867EC337F83056C2833A59293754AAC01F_il2cpp_TypeInfo_var);
		EndOfStreamException__ctor_mD5C60B460580BBA98DFF238F6D5BBE4C9CAE1D80(L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, BinaryReaderExtension_ReadFully_m6E2521B196F926027EEE54800C9B5C82CA84E45E_RuntimeMethod_var);
	}

IL_0031:
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
// UnityEngine.Texture2D HDRLoader.HDRLoader::Load(System.IO.Stream,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * HDRLoader_Load_m5665F16AE7D74D85313B1312EB4DC2D46924D59F (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, float* ___gamma1, float* ___exposure2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HDRLoader_Load_m5665F16AE7D74D85313B1312EB4DC2D46924D59F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * V_0 = NULL;
	Rgbe_tF73B4C98C42FD35507AF1F153378CBB08C2E90F7 * V_1 = NULL;
	Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * V_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_4 = NULL;
	NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___stream0;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_1 = (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 *)il2cpp_codegen_object_new(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var);
		BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			Rgbe_tF73B4C98C42FD35507AF1F153378CBB08C2E90F7 * L_2 = (Rgbe_tF73B4C98C42FD35507AF1F153378CBB08C2E90F7 *)il2cpp_codegen_object_new(Rgbe_tF73B4C98C42FD35507AF1F153378CBB08C2E90F7_il2cpp_TypeInfo_var);
			Rgbe__ctor_m1EDC2180526731998C07DBD6AF237D2835BFB850(L_2, /*hidden argument*/NULL);
			V_1 = L_2;
			BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_3 = V_0;
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_4 = Rgbe_ReadHeader_m50CF8F54C666141C48245818B5EF3E3CB468086B(L_3, /*hidden argument*/NULL);
			V_2 = L_4;
			float* L_5 = ___gamma1;
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_6 = V_2;
			NullCheck(L_6);
			float L_7 = Header_get_Gamma_m032BF21D3D88DFF7E33459A84711E49F3EEBA71D_inline(L_6, /*hidden argument*/NULL);
			*((float*)L_5) = (float)L_7;
			float* L_8 = ___exposure2;
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_9 = V_2;
			NullCheck(L_9);
			float L_10 = Header_get_Exposure_mA9E236522B0C19A71BE014B0BB3770BE365A0B6F_inline(L_9, /*hidden argument*/NULL);
			*((float*)L_8) = (float)L_10;
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_11 = V_2;
			NullCheck(L_11);
			int32_t L_12 = Header_get_Width_m5DDAFAC97CCAF4EFEAE3289B3159295C874C915B_inline(L_11, /*hidden argument*/NULL);
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_13 = V_2;
			NullCheck(L_13);
			int32_t L_14 = Header_get_Height_m51B92607F6C6028EF62FE4FCE9D0338E5E3F8538_inline(L_13, /*hidden argument*/NULL);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)L_14)), (int32_t)4)));
			V_3 = L_15;
			BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_16 = V_0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = V_3;
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_18 = V_2;
			NullCheck(L_18);
			int32_t L_19 = Header_get_Width_m5DDAFAC97CCAF4EFEAE3289B3159295C874C915B_inline(L_18, /*hidden argument*/NULL);
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_20 = V_2;
			NullCheck(L_20);
			int32_t L_21 = Header_get_Height_m51B92607F6C6028EF62FE4FCE9D0338E5E3F8538_inline(L_20, /*hidden argument*/NULL);
			Rgbe_ReadPixelsRawRle_m925F05C0E33F91C91F6F6D4564DC25734E67293D(L_16, L_17, 0, L_19, L_21, /*hidden argument*/NULL);
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_22 = V_2;
			NullCheck(L_22);
			int32_t L_23 = Header_get_Width_m5DDAFAC97CCAF4EFEAE3289B3159295C874C915B_inline(L_22, /*hidden argument*/NULL);
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_24 = V_2;
			NullCheck(L_24);
			int32_t L_25 = Header_get_Height_m51B92607F6C6028EF62FE4FCE9D0338E5E3F8538_inline(L_24, /*hidden argument*/NULL);
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_26 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
			Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_26, L_23, L_25, ((int32_t)20), (bool)0, /*hidden argument*/NULL);
			V_4 = L_26;
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_27 = V_4;
			NullCheck(L_27);
			NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478  L_28 = Texture2D_GetRawTextureData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mA46027F34DBCE04CAC387FD8ACB1F42FDD322CFC(L_27, /*hidden argument*/Texture2D_GetRawTextureData_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mA46027F34DBCE04CAC387FD8ACB1F42FDD322CFC_RuntimeMethod_var);
			V_5 = L_28;
			V_6 = 0;
			goto IL_00be;
		}

IL_0071:
		{
			V_7 = 0;
			goto IL_00ae;
		}

IL_0076:
		{
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_29 = V_2;
			NullCheck(L_29);
			int32_t L_30 = Header_get_Height_m51B92607F6C6028EF62FE4FCE9D0338E5E3F8538_inline(L_29, /*hidden argument*/NULL);
			int32_t L_31 = V_6;
			V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)), (int32_t)1));
			Rgbe_tF73B4C98C42FD35507AF1F153378CBB08C2E90F7 * L_32 = V_1;
			NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478  L_33 = V_5;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_34 = V_3;
			int32_t L_35 = V_6;
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_36 = V_2;
			NullCheck(L_36);
			int32_t L_37 = Header_get_Width_m5DDAFAC97CCAF4EFEAE3289B3159295C874C915B_inline(L_36, /*hidden argument*/NULL);
			int32_t L_38 = V_7;
			int32_t L_39 = V_8;
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_40 = V_2;
			NullCheck(L_40);
			int32_t L_41 = Header_get_Width_m5DDAFAC97CCAF4EFEAE3289B3159295C874C915B_inline(L_40, /*hidden argument*/NULL);
			int32_t L_42 = V_7;
			NullCheck(L_32);
			Rgbe_Rgbe2Float_mC6F1CCADBB768ABDD82288992D201FF801AE4A5E(L_32, L_33, L_34, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_35, (int32_t)L_37)), (int32_t)L_38)), (int32_t)4)), ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_39, (int32_t)L_41)), (int32_t)L_42)), (int32_t)4)), /*hidden argument*/NULL);
			int32_t L_43 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		}

IL_00ae:
		{
			int32_t L_44 = V_7;
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_45 = V_2;
			NullCheck(L_45);
			int32_t L_46 = Header_get_Width_m5DDAFAC97CCAF4EFEAE3289B3159295C874C915B_inline(L_45, /*hidden argument*/NULL);
			if ((((int32_t)L_44) < ((int32_t)L_46)))
			{
				goto IL_0076;
			}
		}

IL_00b8:
		{
			int32_t L_47 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
		}

IL_00be:
		{
			int32_t L_48 = V_6;
			Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_49 = V_2;
			NullCheck(L_49);
			int32_t L_50 = Header_get_Height_m51B92607F6C6028EF62FE4FCE9D0338E5E3F8538_inline(L_49, /*hidden argument*/NULL);
			if ((((int32_t)L_48) < ((int32_t)L_50)))
			{
				goto IL_0071;
			}
		}

IL_00c8:
		{
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_51 = V_4;
			NullCheck(L_51);
			Texture2D_Apply_mCC17B1895AEB420CF75B1A50A62AB623C225A6C1(L_51, (bool)0, (bool)1, /*hidden argument*/NULL);
			Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_52 = V_4;
			V_9 = L_52;
			IL2CPP_LEAVE(0xE1, FINALLY_00d7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d7;
	}

FINALLY_00d7:
	{ // begin finally (depth: 1)
		{
			BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_53 = V_0;
			if (!L_53)
			{
				goto IL_00e0;
			}
		}

IL_00da:
		{
			BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_54 = V_0;
			NullCheck(L_54);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_54);
		}

IL_00e0:
		{
			IL2CPP_END_FINALLY(215)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(215)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE1, IL_00e1)
	}

IL_00e1:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_55 = V_9;
		return L_55;
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
// HDRLoader.Rgbe_Header HDRLoader.Rgbe::ReadHeader(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * Rgbe_ReadHeader_m50CF8F54C666141C48245818B5EF3E3CB468086B (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___in0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rgbe_ReadHeader_m50CF8F54C666141C48245818B5EF3E3CB468086B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * V_9 = NULL;
	{
		V_0 = 0;
		V_1 = (String_t*)NULL;
		V_2 = (1.0f);
		V_3 = (1.0f);
		V_4 = 0;
		V_5 = 0;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_0 = ___in0;
		String_t* L_1 = BinaryReaderExtension_ReadLine_m2A07DA1FD456D6C6FDC86393812F4E7CA6B101A6(L_0, /*hidden argument*/NULL);
		V_6 = L_1;
		String_t* L_2 = V_6;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_3 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_3, _stringLiteralD1A3988C24994839D76A235D055A8723E297A974, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Rgbe_ReadHeader_m50CF8F54C666141C48245818B5EF3E3CB468086B_RuntimeMethod_var);
	}

IL_002d:
	{
		String_t* L_4 = V_6;
		NullCheck(L_4);
		Il2CppChar L_5 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_4, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_6 = V_6;
		NullCheck(L_6);
		Il2CppChar L_7 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_6, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8|(int32_t)1));
		String_t* L_9 = V_6;
		NullCheck(L_9);
		String_t* L_10 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_9, 2, /*hidden argument*/NULL);
		V_1 = L_10;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_11 = ___in0;
		String_t* L_12 = BinaryReaderExtension_ReadLine_m2A07DA1FD456D6C6FDC86393812F4E7CA6B101A6(L_11, /*hidden argument*/NULL);
		V_6 = L_12;
		String_t* L_13 = V_6;
		if (L_13)
		{
			goto IL_0069;
		}
	}
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_14 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_14, _stringLiteral8E092A90B7BE30B098D68A4F6C586D16C4BC5CF0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, Rgbe_ReadHeader_m50CF8F54C666141C48245818B5EF3E3CB468086B_RuntimeMethod_var);
	}

IL_0069:
	{
		V_7 = (bool)0;
		V_8 = (bool)0;
		goto IL_0152;
	}

IL_0074:
	{
		String_t* L_15 = V_6;
		NullCheck(L_15);
		bool L_16 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_15, _stringLiteral627789169A1FF066C779D81EE7E16F4A4F2B13A8, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_008a;
		}
	}
	{
		V_7 = (bool)1;
		goto IL_0137;
	}

IL_008a:
	{
		String_t* L_17 = V_6;
		NullCheck(L_17);
		bool L_18 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_17, _stringLiteralFC47E5F22897B79D4D3962F4505F3AD964B521D4, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19|(int32_t)2));
		String_t* L_20 = V_6;
		NullCheck(_stringLiteralFC47E5F22897B79D4D3962F4505F3AD964B521D4);
		int32_t L_21 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(_stringLiteralFC47E5F22897B79D4D3962F4505F3AD964B521D4, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_22 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_20, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_23 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		float L_24 = Convert_ToSingle_m5F3E5F42FE95CB24ADF3164009FF7136DB1CE888(L_22, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		goto IL_0137;
	}

IL_00ba:
	{
		String_t* L_25 = V_6;
		NullCheck(L_25);
		bool L_26 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_25, _stringLiteral2A9FE40F8FC0F539CF7E6D82E90A25EF24A6C564, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_27 = V_0;
		V_0 = ((int32_t)((int32_t)L_27|(int32_t)4));
		String_t* L_28 = V_6;
		NullCheck(_stringLiteral2A9FE40F8FC0F539CF7E6D82E90A25EF24A6C564);
		int32_t L_29 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(_stringLiteral2A9FE40F8FC0F539CF7E6D82E90A25EF24A6C564, /*hidden argument*/NULL);
		NullCheck(L_28);
		String_t* L_30 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_28, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_31 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		float L_32 = Convert_ToSingle_m5F3E5F42FE95CB24ADF3164009FF7136DB1CE888(L_30, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		goto IL_0137;
	}

IL_00ea:
	{
		String_t* L_33 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF_il2cpp_TypeInfo_var);
		Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * L_34 = Regex_Match_m08332EE8B44F5A94218B8D432627EB7F71EE7BE2(L_33, _stringLiteral99E9757B0C7626ECE28CE28DD3CCA1EDD8A05872, 1, /*hidden argument*/NULL);
		V_9 = L_34;
		Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * L_35 = V_9;
		NullCheck(L_35);
		bool L_36 = Group_get_Success_m91D00749B3C9D2030B72C6DA3AF2B3BA48F22521(L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0137;
		}
	}
	{
		Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * L_37 = V_9;
		NullCheck(L_37);
		GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F * L_38 = VirtFuncInvoker0< GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F * >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_37);
		NullCheck(L_38);
		Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 * L_39 = GroupCollection_get_Item_m5ABF137CEFD5E2F2FE2EC76835963594300D4177(L_38, 2, /*hidden argument*/NULL);
		NullCheck(L_39);
		String_t* L_40 = Capture_get_Value_m8F739B7E4E173814B0890ECFEA37194D592BE91C(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_41 = Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365(L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		Match_tE447871AB59EED3642F31EB9559D162C2977EBB5 * L_42 = V_9;
		NullCheck(L_42);
		GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F * L_43 = VirtFuncInvoker0< GroupCollection_tD9051ED1A991E3666439262B517FDD2F968C064F * >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_42);
		NullCheck(L_43);
		Group_tB4759D0385925B2C8C14ED3FCD5D2F43CFBD0443 * L_44 = GroupCollection_get_Item_m5ABF137CEFD5E2F2FE2EC76835963594300D4177(L_43, 1, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45 = Capture_get_Value_m8F739B7E4E173814B0890ECFEA37194D592BE91C(L_44, /*hidden argument*/NULL);
		int32_t L_46 = Convert_ToInt32_m9394611E7CF9B83AADB891D865FFE74002F80365(L_45, /*hidden argument*/NULL);
		V_5 = L_46;
		V_8 = (bool)1;
	}

IL_0137:
	{
		bool L_47 = V_8;
		if (L_47)
		{
			goto IL_0152;
		}
	}
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_48 = ___in0;
		String_t* L_49 = BinaryReaderExtension_ReadLine_m2A07DA1FD456D6C6FDC86393812F4E7CA6B101A6(L_48, /*hidden argument*/NULL);
		V_6 = L_49;
		String_t* L_50 = V_6;
		if (L_50)
		{
			goto IL_0152;
		}
	}
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_51 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_51, _stringLiteralFC47C8D99F953315CBC88AF12A97FDF658A96969, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, Rgbe_ReadHeader_m50CF8F54C666141C48245818B5EF3E3CB468086B_RuntimeMethod_var);
	}

IL_0152:
	{
		bool L_52 = V_8;
		if (!L_52)
		{
			goto IL_0074;
		}
	}
	{
		bool L_53 = V_7;
		if (L_53)
		{
			goto IL_0168;
		}
	}
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_54 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_54, _stringLiteral05AFB70E0CBD90A999C7050C8B27877148DA9831, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, Rgbe_ReadHeader_m50CF8F54C666141C48245818B5EF3E3CB468086B_RuntimeMethod_var);
	}

IL_0168:
	{
		int32_t L_55 = V_0;
		String_t* L_56 = V_1;
		float L_57 = V_2;
		float L_58 = V_3;
		int32_t L_59 = V_4;
		int32_t L_60 = V_5;
		Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * L_61 = (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 *)il2cpp_codegen_object_new(Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89_il2cpp_TypeInfo_var);
		Header__ctor_mF86B1728E6E6C8F9651BB47E5C8103B0A3A8CF56(L_61, L_55, L_56, L_57, L_58, L_59, L_60, /*hidden argument*/NULL);
		return L_61;
	}
}
// System.Void HDRLoader.Rgbe::ReadPixelsRaw(System.IO.BinaryReader,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe_ReadPixelsRaw_m465AB5149A88A4F02950722772C033ED401EC60A (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___in0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, int32_t ___offset2, int32_t ___numpixels3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rgbe_ReadPixelsRaw_m465AB5149A88A4F02950722772C033ED401EC60A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___numpixels3;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_0));
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_1 = ___in0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data1;
		int32_t L_3 = ___offset2;
		int32_t L_4 = V_0;
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		BinaryReaderExtension_ReadFully_m6E2521B196F926027EEE54800C9B5C82CA84E45E(L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HDRLoader.Rgbe::ReadPixelsRawRle(System.IO.BinaryReader,System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe_ReadPixelsRawRle_m925F05C0E33F91C91F6F6D4564DC25734E67293D (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___in0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, int32_t ___offset2, int32_t ___scanline_width3, int32_t ___num_scanlines4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rgbe_ReadPixelsRawRle_m925F05C0E33F91C91F6F6D4564DC25734E67293D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		V_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)2);
		V_5 = L_1;
		int32_t L_2 = ___scanline_width3;
		if ((((int32_t)L_2) < ((int32_t)8)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___scanline_width3;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)32767))))
		{
			goto IL_021b;
		}
	}

IL_0020:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_4 = ___in0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___data1;
		int32_t L_6 = ___offset2;
		int32_t L_7 = ___scanline_width3;
		int32_t L_8 = ___num_scanlines4;
		Rgbe_ReadPixelsRaw_m465AB5149A88A4F02950722772C033ED401EC60A(L_4, L_5, L_6, ((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_8)), /*hidden argument*/NULL);
		goto IL_021b;
	}

IL_0031:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_9 = ___in0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_11 = V_6;
		BinaryReaderExtension_ReadFully_m6E2521B196F926027EEE54800C9B5C82CA84E45E(L_9, L_10, 0, L_11, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 1;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = 2;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if (!((int32_t)((int32_t)L_20&(int32_t)((int32_t)128))))
		{
			goto IL_0094;
		}
	}

IL_005a:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = ___data1;
		int32_t L_22 = ___offset2;
		int32_t L_23 = L_22;
		___offset2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 0;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)L_26);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = ___data1;
		int32_t L_28 = ___offset2;
		int32_t L_29 = L_28;
		___offset2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = 1;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint8_t)L_32);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = ___data1;
		int32_t L_34 = ___offset2;
		int32_t L_35 = L_34;
		___offset2 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37 = 2;
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint8_t)L_38);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_39 = ___data1;
		int32_t L_40 = ___offset2;
		int32_t L_41 = L_40;
		___offset2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = 3;
		uint8_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint8_t)L_44);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_45 = ___in0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = V_0;
		int32_t L_47 = ___offset2;
		int32_t L_48 = ___scanline_width3;
		int32_t L_49 = ___num_scanlines4;
		Rgbe_ReadPixelsRaw_m465AB5149A88A4F02950722772C033ED401EC60A(L_45, L_46, L_47, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_48, (int32_t)L_49)), (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0094:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = 2;
		uint8_t L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = 3;
		uint8_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = ___scanline_width3;
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_52&(int32_t)((int32_t)255)))<<(int32_t)8))|(int32_t)((int32_t)((int32_t)L_55&(int32_t)((int32_t)255)))))) == ((int32_t)L_56)))
		{
			goto IL_00e6;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = 2;
		uint8_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_60 = V_0;
		NullCheck(L_60);
		int32_t L_61 = 3;
		uint8_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_59&(int32_t)((int32_t)255)))<<(int32_t)8))|(int32_t)((int32_t)((int32_t)L_62&(int32_t)((int32_t)255)))));
		String_t* L_63 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_7), /*hidden argument*/NULL);
		String_t* L_64 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&___scanline_width3), /*hidden argument*/NULL);
		String_t* L_65 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral82FC524FDD4CDF6EBBEE2F907A93E57673E23BBF, L_63, _stringLiteralB2C6B8AF1D5DC22EFA4D96D8D47F22ACCF89EBDF, L_64, /*hidden argument*/NULL);
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_66 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_66, L_65, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_66, Rgbe_ReadPixelsRawRle_m925F05C0E33F91C91F6F6D4564DC25734E67293D_RuntimeMethod_var);
	}

IL_00e6:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_67 = V_1;
		if (L_67)
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_68 = ___scanline_width3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_69 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_68)));
		V_1 = L_69;
	}

IL_00f2:
	{
		V_2 = 0;
		V_8 = 0;
		goto IL_01c3;
	}

IL_00fc:
	{
		int32_t L_70 = V_8;
		int32_t L_71 = ___scanline_width3;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1)), (int32_t)L_71));
		goto IL_01b6;
	}

IL_0108:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_72 = ___in0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_73 = V_5;
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_74 = V_6;
		BinaryReaderExtension_ReadFully_m6E2521B196F926027EEE54800C9B5C82CA84E45E(L_72, L_73, 0, L_74, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_75 = V_5;
		NullCheck(L_75);
		int32_t L_76 = 0;
		uint8_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		if ((((int32_t)((int32_t)((int32_t)L_77&(int32_t)((int32_t)255)))) <= ((int32_t)((int32_t)128))))
		{
			goto IL_016b;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_78 = V_5;
		NullCheck(L_78);
		int32_t L_79 = 0;
		uint8_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_80&(int32_t)((int32_t)255))), (int32_t)((int32_t)128)));
		int32_t L_81 = V_4;
		if (!L_81)
		{
			goto IL_0149;
		}
	}
	{
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		int32_t L_84 = V_2;
		if ((((int32_t)L_82) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)L_84)))))
		{
			goto IL_015f;
		}
	}

IL_0149:
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_85 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_85, _stringLiteralED3DC016C6715A8A88BF7EC863B99F2E626A3443, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, Rgbe_ReadPixelsRawRle_m925F05C0E33F91C91F6F6D4564DC25734E67293D_RuntimeMethod_var);
	}

IL_0154:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_86 = V_1;
		int32_t L_87 = V_2;
		int32_t L_88 = L_87;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_89 = V_5;
		NullCheck(L_89);
		int32_t L_90 = 1;
		uint8_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (uint8_t)L_91);
	}

IL_015f:
	{
		int32_t L_92 = V_4;
		int32_t L_93 = L_92;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1));
		if ((((int32_t)L_93) > ((int32_t)0)))
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01b6;
	}

IL_016b:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_94 = V_5;
		NullCheck(L_94);
		int32_t L_95 = 0;
		uint8_t L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_4 = ((int32_t)((int32_t)L_96&(int32_t)((int32_t)255)));
		int32_t L_97 = V_4;
		if (!L_97)
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_98 = V_4;
		int32_t L_99 = V_3;
		int32_t L_100 = V_2;
		if ((((int32_t)L_98) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_99, (int32_t)L_100)))))
		{
			goto IL_018d;
		}
	}

IL_0182:
	{
		IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA * L_101 = (IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA *)il2cpp_codegen_object_new(IOException_t60E052020EDE4D3075F57A1DCC224FF8864354BA_il2cpp_TypeInfo_var);
		IOException__ctor_mB64DEFB376AA8E279A647A3770F913B20EF65175(L_101, _stringLiteralED3DC016C6715A8A88BF7EC863B99F2E626A3443, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_101, Rgbe_ReadPixelsRawRle_m925F05C0E33F91C91F6F6D4564DC25734E67293D_RuntimeMethod_var);
	}

IL_018d:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_102 = V_1;
		int32_t L_103 = V_2;
		int32_t L_104 = L_103;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_105 = V_5;
		NullCheck(L_105);
		int32_t L_106 = 1;
		uint8_t L_107 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_104), (uint8_t)L_107);
		int32_t L_108 = V_4;
		int32_t L_109 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_108, (int32_t)1));
		V_4 = L_109;
		if ((((int32_t)L_109) <= ((int32_t)0)))
		{
			goto IL_01b6;
		}
	}
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_110 = ___in0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_111 = V_1;
		int32_t L_112 = V_2;
		int32_t L_113 = V_4;
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_114;
		memset((&L_114), 0, sizeof(L_114));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_114), L_113, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		BinaryReaderExtension_ReadFully_m6E2521B196F926027EEE54800C9B5C82CA84E45E(L_110, L_111, L_112, L_114, /*hidden argument*/NULL);
		int32_t L_115 = V_2;
		int32_t L_116 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)L_116));
	}

IL_01b6:
	{
		int32_t L_117 = V_2;
		int32_t L_118 = V_3;
		if ((((int32_t)L_117) < ((int32_t)L_118)))
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_119 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_120 = V_8;
		if ((((int32_t)L_120) < ((int32_t)4)))
		{
			goto IL_00fc;
		}
	}
	{
		V_9 = 0;
		goto IL_0210;
	}

IL_01d0:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_121 = ___data1;
		int32_t L_122 = ___offset2;
		int32_t L_123 = L_122;
		___offset2 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_124 = V_1;
		int32_t L_125 = V_9;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		uint8_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (uint8_t)L_127);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_128 = ___data1;
		int32_t L_129 = ___offset2;
		int32_t L_130 = L_129;
		___offset2 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_131 = V_1;
		int32_t L_132 = V_9;
		int32_t L_133 = ___scanline_width3;
		NullCheck(L_131);
		int32_t L_134 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)L_133));
		uint8_t L_135 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(L_130), (uint8_t)L_135);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_136 = ___data1;
		int32_t L_137 = ___offset2;
		int32_t L_138 = L_137;
		___offset2 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_139 = V_1;
		int32_t L_140 = V_9;
		int32_t L_141 = ___scanline_width3;
		NullCheck(L_139);
		int32_t L_142 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_141))));
		uint8_t L_143 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(L_138), (uint8_t)L_143);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_144 = ___data1;
		int32_t L_145 = ___offset2;
		int32_t L_146 = L_145;
		___offset2 = ((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)1));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_147 = V_1;
		int32_t L_148 = V_9;
		int32_t L_149 = ___scanline_width3;
		NullCheck(L_147);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)L_149))));
		uint8_t L_151 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(L_146), (uint8_t)L_151);
		int32_t L_152 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1));
	}

IL_0210:
	{
		int32_t L_153 = V_9;
		int32_t L_154 = ___scanline_width3;
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_01d0;
		}
	}
	{
		int32_t L_155 = ___num_scanlines4;
		___num_scanlines4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_155, (int32_t)1));
	}

IL_021b:
	{
		int32_t L_156 = ___num_scanlines4;
		if ((((int32_t)L_156) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		return;
	}
}
// System.Void HDRLoader.Rgbe::Rgbe2Float(Unity.Collections.NativeArray`1<System.Single>,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe_Rgbe2Float_mC6F1CCADBB768ABDD82288992D201FF801AE4A5E (Rgbe_tF73B4C98C42FD35507AF1F153378CBB08C2E90F7 * __this, NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478  ___rgba0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___rgbe1, int32_t ___rgbeIndex2, int32_t ___rgbaIndex3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rgbe_Rgbe2Float_mC6F1CCADBB768ABDD82288992D201FF801AE4A5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___rgbe1;
		int32_t L_1 = ___rgbeIndex2;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)3));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_00b5;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = ___rgbe1;
		int32_t L_5 = ___rgbeIndex2;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)3));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = powf((2.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)255))), (int32_t)((int32_t)136)))))));
		V_0 = L_8;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = ___rgbe1;
		int32_t L_10 = ___rgbeIndex2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)((int32_t)L_12&(int32_t)((int32_t)255)))))), (float)L_13));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = ___rgbe1;
		int32_t L_15 = ___rgbeIndex2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		float L_18 = V_0;
		V_2 = ((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)((int32_t)L_17&(int32_t)((int32_t)255)))))), (float)L_18));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ___rgbe1;
		int32_t L_20 = ___rgbeIndex2;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)2));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		float L_23 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)((int32_t)L_22&(int32_t)((int32_t)255)))))), (float)L_23));
		V_4 = (1.0f);
		float L_24 = V_1;
		float L_25 = V_2;
		float L_26 = V_3;
		float L_27 = V_4;
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)(&V_5), L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_28 = Color_get_gamma_m38A0BB5A9A0A7F860BEEB3BD9F69F72CFA926A79((Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 *)(&V_5), /*hidden argument*/NULL);
		V_6 = L_28;
		int32_t L_29 = ___rgbaIndex3;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_30 = V_6;
		float L_31 = L_30.get_r_0();
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478 *)(&___rgba0))->___m_Buffer_0, L_29, L_31);
		int32_t L_32 = ___rgbaIndex3;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_33 = V_6;
		float L_34 = L_33.get_g_1();
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478 *)(&___rgba0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)), L_34);
		int32_t L_35 = ___rgbaIndex3;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_36 = V_6;
		float L_37 = L_36.get_b_2();
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478 *)(&___rgba0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)2)), L_37);
		int32_t L_38 = ___rgbaIndex3;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_39 = V_6;
		float L_40 = L_39.get_a_3();
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478 *)(&___rgba0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)3)), L_40);
		return;
	}

IL_00b5:
	{
		int32_t L_41 = ___rgbaIndex3;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478 *)(&___rgba0))->___m_Buffer_0, L_41, (0.0f));
		int32_t L_42 = ___rgbaIndex3;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478 *)(&___rgba0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)), (0.0f));
		int32_t L_43 = ___rgbaIndex3;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478 *)(&___rgba0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)2)), (0.0f));
		int32_t L_44 = ___rgbaIndex3;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478 *)(&___rgba0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)3)), (1.0f));
		return;
	}
}
// System.Void HDRLoader.Rgbe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe__ctor_m1EDC2180526731998C07DBD6AF237D2835BFB850 (Rgbe_tF73B4C98C42FD35507AF1F153378CBB08C2E90F7 * __this, const RuntimeMethod* method)
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
// System.Void HDRLoader.Rgbe_Header::.ctor(System.Int32,System.String,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header__ctor_mF86B1728E6E6C8F9651BB47E5C8103B0A3A8CF56 (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, int32_t ___valid0, String_t* ___programType1, float ___gamma2, float ___exposure3, int32_t ___width4, int32_t ___height5, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___valid0;
		__this->set__valid_0(L_0);
		String_t* L_1 = ___programType1;
		__this->set_U3CProgramTypeU3Ek__BackingField_4(L_1);
		float L_2 = ___gamma2;
		__this->set_U3CGammaU3Ek__BackingField_2(L_2);
		float L_3 = ___exposure3;
		__this->set_U3CExposureU3Ek__BackingField_1(L_3);
		int32_t L_4 = ___width4;
		__this->set_U3CWidthU3Ek__BackingField_5(L_4);
		int32_t L_5 = ___height5;
		__this->set_U3CHeightU3Ek__BackingField_3(L_5);
		return;
	}
}
// System.Single HDRLoader.Rgbe_Header::get_Exposure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Header_get_Exposure_mA9E236522B0C19A71BE014B0BB3770BE365A0B6F (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CExposureU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Single HDRLoader.Rgbe_Header::get_Gamma()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Header_get_Gamma_m032BF21D3D88DFF7E33459A84711E49F3EEBA71D (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CGammaU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Int32 HDRLoader.Rgbe_Header::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Header_get_Height_m51B92607F6C6028EF62FE4FCE9D0338E5E3F8538 (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CHeightU3Ek__BackingField_3();
		return L_0;
	}
}
// System.String HDRLoader.Rgbe_Header::get_ProgramType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Header_get_ProgramType_m41BAC50825193A4D1EA18D86BF593A04176CF842 (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CProgramTypeU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Int32 HDRLoader.Rgbe_Header::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Header_get_Width_m5DDAFAC97CCAF4EFEAE3289B3159295C874C915B (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CWidthU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Boolean HDRLoader.Rgbe_Header::get_IsExposureValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_IsExposureValid_mB228D5F7027AD253DF05882D785D907FB3D23E05 (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__valid_0();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean HDRLoader.Rgbe_Header::get_IsGammaValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_IsGammaValid_mE516765D867AF18FAADAB9B9AD4A54A66B5912B4 (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__valid_0();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean HDRLoader.Rgbe_Header::get_IsProgramTypeValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_IsProgramTypeValid_m607DC0C73474225A504F39DEA795A253E2ED52F3 (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__valid_0();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.String HDRLoader.Rgbe_Header::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Header_ToString_mA7A1AD8B5737180232853B9C9E10F989D9D44D9B (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Header_ToString_mA7A1AD8B5737180232853B9C9E10F989D9D44D9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Header_get_IsProgramTypeValid_m607DC0C73474225A504F39DEA795A253E2ED52F3(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		StringBuilder_t * L_2 = V_0;
		NullCheck(L_2);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_2, _stringLiteral08686AC968487E8315B2CED81BC1E8F59F1F6B1B, /*hidden argument*/NULL);
		StringBuilder_t * L_3 = V_0;
		String_t* L_4 = Header_get_ProgramType_m41BAC50825193A4D1EA18D86BF593A04176CF842_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		StringBuilder_t * L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_5, _stringLiteralC68147D0707C19B8B70C1BFA11124E47C707A634, /*hidden argument*/NULL);
		bool L_6 = Header_get_IsGammaValid_mE516765D867AF18FAADAB9B9AD4A54A66B5912B4(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_7, _stringLiteral9F1C0785410E5B64C4E10A25EE420CB8121FDB80, /*hidden argument*/NULL);
	}

IL_0047:
	{
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_8, _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = V_0;
		float L_10 = Header_get_Gamma_m032BF21D3D88DFF7E33459A84711E49F3EEBA71D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_Append_m95DAAD2C9A17B0CFA716D95A1385052C2272C1C1(L_9, L_10, /*hidden argument*/NULL);
		StringBuilder_t * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_11, _stringLiteral09AC065C6A96ABACE427026873A0188E6A7B6A81, /*hidden argument*/NULL);
		bool L_12 = Header_get_IsExposureValid_mB228D5F7027AD253DF05882D785D907FB3D23E05(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_13, _stringLiteral9F1C0785410E5B64C4E10A25EE420CB8121FDB80, /*hidden argument*/NULL);
	}

IL_0080:
	{
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_14, _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = V_0;
		float L_16 = Header_get_Exposure_mA9E236522B0C19A71BE014B0BB3770BE365A0B6F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_Append_m95DAAD2C9A17B0CFA716D95A1385052C2272C1C1(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_17, _stringLiteral6777449911C5B7FFDB0816AE7C89A844FC3FC071, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_0;
		int32_t L_19 = Header_get_Width_m5DDAFAC97CCAF4EFEAE3289B3159295C874C915B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		StringBuilder_Append_m85874CFF9E4B152DB2A91936C6F2CA3E9B1EFF84(L_18, L_19, /*hidden argument*/NULL);
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_20, _stringLiteral73C774F3077BCDA69B947EE284A1C7E56CE644F6, /*hidden argument*/NULL);
		StringBuilder_t * L_21 = V_0;
		int32_t L_22 = Header_get_Height_m51B92607F6C6028EF62FE4FCE9D0338E5E3F8538_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m85874CFF9E4B152DB2A91936C6F2CA3E9B1EFF84(L_21, L_22, /*hidden argument*/NULL);
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		return L_24;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Header_get_Gamma_m032BF21D3D88DFF7E33459A84711E49F3EEBA71D_inline (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CGammaU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Header_get_Exposure_mA9E236522B0C19A71BE014B0BB3770BE365A0B6F_inline (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_U3CExposureU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Header_get_Width_m5DDAFAC97CCAF4EFEAE3289B3159295C874C915B_inline (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CWidthU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Header_get_Height_m51B92607F6C6028EF62FE4FCE9D0338E5E3F8538_inline (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CHeightU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Header_get_ProgramType_m41BAC50825193A4D1EA18D86BF593A04176CF842_inline (Header_tDEA3AEAD47F4260C3404A8B1C568A734B1F5CE89 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CProgramTypeU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
