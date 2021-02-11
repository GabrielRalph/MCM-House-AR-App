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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Antlr4.Runtime.AntlrInputStream
struct AntlrInputStream_tF5987E6281D3A24587B1B457A28C0D5E7BE7DB1A;
// Antlr4.Runtime.Atn.ATN
struct ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51;
// Antlr4.Runtime.Atn.ATNDeserializationOptions
struct ATNDeserializationOptions_t253A84322E1EDB0AAB517409031C6B944ED871B5;
// Antlr4.Runtime.Atn.ATNDeserializer
struct ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C;
// Antlr4.Runtime.Atn.DecisionState
struct DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44;
// Antlr4.Runtime.Atn.ILexerAction[]
struct ILexerActionU5BU5D_t21C9200CE1D27B8BE2C783D3B0C3EA3F1DE3B8E2;
// Antlr4.Runtime.Atn.LexerATNSimulator
struct LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480;
// Antlr4.Runtime.Atn.MergeCache
struct MergeCache_tC8A8A468D3DD70D8A91082F7FBCFEBB04CA3735F;
// Antlr4.Runtime.Atn.ParserATNSimulator
struct ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC;
// Antlr4.Runtime.Atn.PredictionContextCache
struct PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D;
// Antlr4.Runtime.Atn.PredictionMode
struct PredictionMode_t9C8DE0B29EE537E6FDF306369DC917441B9A0D02;
// Antlr4.Runtime.Atn.RuleStartState[]
struct RuleStartStateU5BU5D_t8098C56442280D741EF0FDD791DF6EADCFE4EE1F;
// Antlr4.Runtime.Atn.RuleStopState[]
struct RuleStopStateU5BU5D_t6223296DE180B5A0081B944EF7E712B7021B57EE;
// Antlr4.Runtime.Atn.SimState
struct SimState_tC367FC3105EA94C3BAF9B7764A5D27F0BF159970;
// Antlr4.Runtime.CommonTokenStream
struct CommonTokenStream_t0A80A52294B69CD9EB76170958E601DFEFDE73C0;
// Antlr4.Runtime.Dfa.DFA
struct DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF;
// Antlr4.Runtime.Dfa.DFAState
struct DFAState_t0A3C08D7EFED26BFA2005D18024EBD80EF713984;
// Antlr4.Runtime.Dfa.DFA[]
struct DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540;
// Antlr4.Runtime.IAntlrErrorListener`1<Antlr4.Runtime.IToken>[]
struct IAntlrErrorListener_1U5BU5D_tE8032AD4FA6535BD1664E3CA120952FF0962C0BC;
// Antlr4.Runtime.IAntlrErrorListener`1<System.Int32>[]
struct IAntlrErrorListener_1U5BU5D_tA6D81C851EF0FE2E07CE75DF0DEDEB1F6B571B43;
// Antlr4.Runtime.IAntlrErrorListener`1<System.Object>[]
struct IAntlrErrorListener_1U5BU5D_tD13DCFFA8FD2DAA51D8AE0E533042EB74F5F0481;
// Antlr4.Runtime.IAntlrErrorStrategy
struct IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD;
// Antlr4.Runtime.ICharStream
struct ICharStream_t6491638030565776C8A682699BAC45295E3CF721;
// Antlr4.Runtime.IIntStream
struct IIntStream_t3F78FA066FF5CDB5CCCCD98348CB38730994D8BF;
// Antlr4.Runtime.IRecognizer
struct IRecognizer_tFBA3AC4C2C388B5E2D5C0AF466AD7FD74AFBBD68;
// Antlr4.Runtime.IToken
struct IToken_t7B506B1E10CE6E8BC3A1B317CD9D15E2A7581496;
// Antlr4.Runtime.ITokenFactory
struct ITokenFactory_t13F1A10DE960C67EFC69B7204DCF80C6836C155D;
// Antlr4.Runtime.ITokenSource
struct ITokenSource_tC7BD2C225C8E1A195A3D2462878B6D0CC1AD4EB0;
// Antlr4.Runtime.ITokenStream
struct ITokenStream_t914DFC597E36714C43DDD51262DCDF9DBFB4B12E;
// Antlr4.Runtime.IVocabulary
struct IVocabulary_t8BB4711EDD2CF0BF71DB00242D309359C847695A;
// Antlr4.Runtime.Lexer
struct Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7;
// Antlr4.Runtime.Misc.IntervalSet
struct IntervalSet_t496F02CDDBDCFFBC292D03D97BFAE6EAC9E80A56;
// Antlr4.Runtime.Parser
struct Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87;
// Antlr4.Runtime.Parser/TraceListener
struct TraceListener_tD462457BD468111AD0C41C8A552043F88DD0B399;
// Antlr4.Runtime.ParserRuleContext
struct ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE;
// Antlr4.Runtime.RecognitionException
struct RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C;
// Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>
struct Recognizer_2_t8FEA9423B15C3A552F5E40D4CCA30AEAB01E3C4F;
// Antlr4.Runtime.Recognizer`2<System.Object,System.Object>
struct Recognizer_2_t0DEA9546FEB2ABD340DDC3F9C36E49CB1AB5333E;
// Antlr4.Runtime.RuleContext
struct RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790;
// Antlr4.Runtime.Sharpen.ConcurrentDictionary`2<System.Int32,System.Int32>
struct ConcurrentDictionary_2_t2CFF995D3A8883C83960FEF89312FE5E562D9412;
// Antlr4.Runtime.Sharpen.Tuple`2<Antlr4.Runtime.ITokenSource,Antlr4.Runtime.ICharStream>
struct Tuple_2_t9A7A916ED0128382B81E5ABF64B150F175AB03BB;
// Antlr4.Runtime.Tree.IParseTreeListener
struct IParseTreeListener_t9536F8389DF3CEA1229C0E051CE5CB7E992C7DBD;
// Antlr4.Runtime.Tree.ITerminalNode
struct ITerminalNode_t1E6A1D044E4F8D2E5D99C9E94FE7D9A657676C9C;
// Antlr4.Runtime.Vocabulary
struct Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1;
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_tC183AAA061C88EE8BD281D19E9DF4CF6026F026D;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct InflaterInputStream_t54C07D2221F519ED4927A98DF99F40A319CEEC4B;
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
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.String>[]
struct EntryU5BU5D_tC8895DC1B392C241DCE9485A631A73A956B4DAFF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.String>
struct KeyCollection_tE24B829754F835A39F27D9C310809E65A78F7593;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.String>
struct ValueCollection_t9DE5B06ABDFF3EF47AE6CB311371E6F9B9AD0A21;
// System.Collections.Generic.Dictionary`2<Antlr4.Runtime.Atn.PredictionContext,Antlr4.Runtime.Atn.PredictionContext>
struct Dictionary_2_t6C07CBA125E7ED4812AF5303F67E45A52B498D66;
// System.Collections.Generic.Dictionary`2<Antlr4.Runtime.Dfa.DFAState,Antlr4.Runtime.Dfa.DFAState>
struct Dictionary_2_t9D008E55D11FE65A8E337545E4A541D7E87C0B7E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860;
// System.Collections.Generic.Dictionary`2<System.Int64,System.String>
struct Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.IDictionary`2<System.Int64,TriLibCore.Fbx.IFBXObject>
struct IDictionary_2_t5F0A05E9DC923D58F8493E786CACF32A280C0235;
// System.Collections.Generic.IDictionary`2<System.String,Antlr4.Runtime.Atn.ATN>
struct IDictionary_2_tAE7B6F035C7641972BD241609EF9238CF4187DCC;
// System.Collections.Generic.IDictionary`2<System.String,Antlr4.Runtime.Atn.TokensStartState>
struct IDictionary_2_t213B539640DECCCD45DAFE94449D42CB84A81956;
// System.Collections.Generic.IDictionary`2<TriLibCore.Interfaces.IModel,UnityEngine.GameObject>
struct IDictionary_2_tBF768F61B33127C039AE2BAEC8DC28D8CB33E838;
// System.Collections.Generic.IDictionary`2<UnityEngine.GameObject,System.String>
struct IDictionary_2_t249D631B1E6D566AA4C7524395316C9B88FBFC24;
// System.Collections.Generic.IDictionary`2<UnityEngine.GameObject,TriLibCore.Interfaces.IModel>
struct IDictionary_2_t39C6667F50E662B723A93B13A0A14D52E1921513;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t687CC016C273A05B2269AF904753378F23CC9A11;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t8BA8E0A3600A88AC1F3656FA795732039D920E4B;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_tCE7FAEBD9C8F140E2AE41F5FED27F05C5AFD6875;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t5BBF33C66D868C3B9C722A703D57C2AD3F18EE30;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tA111E8E29826F4195DBA282CAAD4CFD77A11D250;
// System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.ATNState>
struct IList_1_tAB1B1E59F2520B391892DC7A42E270EB2E7EA04F;
// System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.DecisionState>
struct IList_1_t5431BE64D4134F8A08D8A5C3B4DCA587AF7B647F;
// System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.TokensStartState>
struct IList_1_t7177CEC21FC47987B7159BB053D076592BFCFF43;
// System.Collections.Generic.IList`1<Antlr4.Runtime.IToken>
struct IList_1_t4FF40F3A9AB3AB1311DBD391ECCAF327DA779A37;
// System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTree>
struct IList_1_tD8EAC358108FCE056153CDE0DBDCF2D5C00D9155;
// System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTreeListener>
struct IList_1_t080C68D6904D5425ABFDAECCBA6529B19C9A4EFA;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t49F6E2FBA21AA260E6EF008D563B28F2BEE7F80C;
// System.Collections.Generic.IList`1<System.Guid>
struct IList_1_t47F0EC679B92A72E9C55A5874910222E8A8240EC;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tF29E035126153F9F00537AA5AF6CF508765D3708;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_tE5A1DB8759F54F21B2BFC17A31092C8BC2CD9629;
// System.Collections.Generic.IList`1<System.Single>
struct IList_1_tC63CCD3BC4FB3A7C80F16BEA9B7BD049F4C0C65F;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationCurve>
struct IList_1_tFAEB85495DFB81DF4131985027BA2DFF6C77624B;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationCurveNode>
struct IList_1_t5DF354F01CB2FD7E6EBE6B62CFA8DF87578FA149;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationLayer>
struct IList_1_tD0C9B52CF9D5507F637348EE87E10A3F3341B07F;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXBlendShapeGeometryGroup>
struct IList_1_t9B7D32D13E3C2A65A7FBA9137657D7F63BE1BB92;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXDeformer>
struct IList_1_t719C28EA6264B05D2851485AD0707AC9CB0A739C;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXModel>
struct IList_1_tA9A05B600D8727F6565D13BF624D075BA8F73F77;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXSubDeformer>
struct IList_1_tA3FB69AD2C79C3F289CFB44ED8B6B4476C0FABE1;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation>
struct IList_1_t24F446E864DD4F4D8F5C1A0EA619DC772A5C38B6;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>
struct IList_1_t4737D3225BDCBB9382ECB21BBD13FD6F8EFB9F6D;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>
struct IList_1_t5F0FF7BD21D4695CCCB837C658611673470A9158;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>
struct IList_1_tC74CD31A6FF298092234A6F8F46270F3630A0EE6;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture>
struct IList_1_t69F811AC7E036B8432D8959F4DC73D02C69112C1;
// System.Collections.Generic.IList`1<UnityEngine.Matrix4x4>
struct IList_1_tA81C5829E2DECDC3CD55E0312F611E583A86FDA7;
// System.Collections.Generic.List`1<Antlr4.Runtime.Atn.Transition>
struct List_1_tEF0864052C1B31D9290E8820DBB2C084CC4FFBDA;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tC62C1E1B0AD84992F0A374A5A4679609955E117E;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_tFB87A8A948C1087E530344595EAB9727C97EA783;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3BAE6359B3000921CD734BEE42C959E545C36C4D;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_tD551705A23AE36FAF48832FAF4782681CE96DA45;
// System.Comparison`1<TriLibCore.Fbx.FBXAnimationLayer>
struct Comparison_1_t61F655C43C6390A3629311DCEC84C8C1AB55E161;
// System.Console/InternalCancelHandler
struct InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
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
// System.IO.MemoryStream
struct MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IO.TextReader
struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TriLibCore.AssetLoaderContext
struct AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5;
// TriLibCore.AssetLoaderOptions
struct AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6;
// TriLibCore.Fbx.ASCII.FBXDocumentVisitor
struct FBXDocumentVisitor_tE80B6B9D96BA7C9ADA919FC4579CF86A45133DF0;
// TriLibCore.Fbx.ASCII.FBXNodesCounter
struct FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE;
// TriLibCore.Fbx.Binary.FBXBinaryReader
struct FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9;
// TriLibCore.Fbx.FBXAnimationCurve
struct FBXAnimationCurve_t7FAE6BA30DECD09EF3155514703B92392DF78FFF;
// TriLibCore.Fbx.FBXAnimationCurveNode
struct FBXAnimationCurveNode_tC4DE816A0C34495F25996853CCD8E727805EB8E0;
// TriLibCore.Fbx.FBXAnimationLayer
struct FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100;
// TriLibCore.Fbx.FBXAnimationStack
struct FBXAnimationStack_t27A5BB8F375151605C6C4A5489005540D48C97D3;
// TriLibCore.Fbx.FBXDeformer
struct FBXDeformer_t3477DA7D965B8050A94D4004029D9F3F32E075D8;
// TriLibCore.Fbx.FBXDocument
struct FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2;
// TriLibCore.Fbx.FBXGlobalSettings
struct FBXGlobalSettings_t86C6D516699288810377A4E4BCC97EF6DD14AF01;
// TriLibCore.Fbx.FBXMaterial
struct FBXMaterial_t62B60F79CD9C382E3C54A03C0A03D115D8DE21B2;
// TriLibCore.Fbx.FBXMatrices
struct FBXMatrices_t29DA4C671FC096FB9CFD6071E0067D331081BD69;
// TriLibCore.Fbx.FBXMatrixBuffer
struct FBXMatrixBuffer_tD32483A607F2E2B77931AB72EBE5ABA3E145BE8A;
// TriLibCore.Fbx.FBXModel
struct FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5;
// TriLibCore.Fbx.FBXNode[]
struct FBXNodeU5BU5D_tB39A3ADF50006ADFB6E9CA8229D401BD42DA3901;
// TriLibCore.Fbx.FBXObject
struct FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152;
// TriLibCore.Fbx.FBXProcessor
struct FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E;
// TriLibCore.Fbx.FBXProcessor/<>c
struct U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C;
// TriLibCore.Fbx.FBXProperty[]
struct FBXPropertyU5BU5D_t7A482ACDE3EA7CBF54BFAFA3EB7BF6FD59307F22;
// TriLibCore.Fbx.FBXRootModel
struct FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A;
// TriLibCore.Fbx.FBXSubDeformer
struct FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC;
// TriLibCore.Fbx.FBXTexture
struct FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28;
// TriLibCore.Fbx.FBXVideo
struct FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05;
// TriLibCore.Fbx.FbxLexer
struct FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920;
// TriLibCore.Fbx.FbxParser
struct FbxParser_t65668BC26E1BE49573365391ACC594D199830A15;
// TriLibCore.Fbx.FbxParser/ArrayContext
struct ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0;
// TriLibCore.Fbx.FbxParser/ArrayContext[]
struct ArrayContextU5BU5D_t0D654B7E1B1B80979F051D876DAD540123DF01C0;
// TriLibCore.Fbx.FbxParser/DataListContext
struct DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1;
// TriLibCore.Fbx.FbxParser/DataValueContext
struct DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0;
// TriLibCore.Fbx.FbxParser/DataValueContext[]
struct DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A;
// TriLibCore.Fbx.FbxParser/DocumentContext
struct DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634;
// TriLibCore.Fbx.FbxParser/NodeContext
struct NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10;
// TriLibCore.Fbx.FbxParser/NodeContext[]
struct NodeContextU5BU5D_tE60DD7EF4687D3544FD380AB84B03B802D19A8F7;
// TriLibCore.Fbx.FbxParser/NodeListContext
struct NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753;
// TriLibCore.Fbx.IFBXGeometryGroup
struct IFBXGeometryGroup_tA3A33A122E52905BC5907874B0B0945B0735B50C;
// TriLibCore.Fbx.PropertyAccessorByte
struct PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5;
// TriLibCore.Fbx.PropertyAccessorFloat
struct PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E;
// TriLibCore.Fbx.PropertyAccessorInt
struct PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC;
// TriLibCore.Fbx.PropertyAccessorLong
struct PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F;
// TriLibCore.Fbx.Reader.FbxReader
struct FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F;
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
// TriLibCore.Interfaces.IGeometryGroup
struct IGeometryGroup_tEB81CE51CC61019AD15D5EF71D81E437C7F0683C;
// TriLibCore.Interfaces.IModel
struct IModel_tFF0B5258B592E120735557A31A506201B33525B6;
// TriLibCore.Interfaces.IRootModel
struct IRootModel_t513220F97B0790AE4E1C4416507771CD1E17304F;
// TriLibCore.Interfaces.ITexture
struct ITexture_t016623F82B83617F487389C509F8CC9C04CE218E;
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
// UnityEngine.Avatar
struct Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;

IL2CPP_EXTERN_C RuntimeClass* ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AntlrInputStream_tF5987E6281D3A24587B1B457A28C0D5E7BE7DB1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTokenStream_t0A80A52294B69CD9EB76170958E601DFEFDE73C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FBXDocumentVisitor_tE80B6B9D96BA7C9ADA919FC4579CF86A45133DF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t4481BA4A19FC1056B110FF62ECFE8B3AEA03122B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIntStream_t3F78FA066FF5CDB5CCCCD98348CB38730994D8BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tC63CCD3BC4FB3A7C80F16BEA9B7BD049F4C0C65F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IParseTree_tD59FA081828F6F67D9E90205432E60D4657B26B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tE0C77A196A84043D212D9734D859F7AF173CF607____15B580C0404CC1FCF86176BE2C380FBE591D755BC07DCDDC7638DB5C2F4F3155_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tE0C77A196A84043D212D9734D859F7AF173CF607____E6B3F79A69AFCBAE02B9004D85874DA053BC73246695367BED4B3639B3FBC399_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral022C4EA79AD230D972547BE2DF3E91575F54684E;
IL2CPP_EXTERN_C String_t* _stringLiteral0E3B1F1FB38A7FE314D2F472DA7F442366E6C3F3;
IL2CPP_EXTERN_C String_t* _stringLiteral0FE37E40E5DAB3AC411C2DDCA6D21991E811ACFA;
IL2CPP_EXTERN_C String_t* _stringLiteral169374FF8CA75C48832034574E04A80968717F05;
IL2CPP_EXTERN_C String_t* _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADC90F5CECFC020F89A0D1629E1E7C9E710AD2C;
IL2CPP_EXTERN_C String_t* _stringLiteral1BA3456507AD0628FFEF08BFA52A7B0CD368F255;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC662893F90CD33FF16CFC700D3AAB02A1D585;
IL2CPP_EXTERN_C String_t* _stringLiteral2F0728A5FBC49746A9B9DDA32638731C15E57A81;
IL2CPP_EXTERN_C String_t* _stringLiteral424E19F99B751F585D85DC25B9C3B9D87C08141D;
IL2CPP_EXTERN_C String_t* _stringLiteral43D7402AF47515AD333CA1605665B8C66A18EF3A;
IL2CPP_EXTERN_C String_t* _stringLiteral4F8278C89AD16DA05FEC4FDFC61FE44798B92720;
IL2CPP_EXTERN_C String_t* _stringLiteral52FD104BBF0D5A2B47D8523B7DBB2531B2A21E4D;
IL2CPP_EXTERN_C String_t* _stringLiteral5BF4AC69233D2F998956A85B3AE562D0DB002A70;
IL2CPP_EXTERN_C String_t* _stringLiteral6529F695EF6BEA2B61BE4F42D6AF092FC3B74190;
IL2CPP_EXTERN_C String_t* _stringLiteral683C56A638704A556811BF81367843BDE7F1DFE5;
IL2CPP_EXTERN_C String_t* _stringLiteral6C208E949D20BFE95E6078574B9FD17442F7496B;
IL2CPP_EXTERN_C String_t* _stringLiteral6C516A9CDC9C6A2DC636E4DC4EDEF8CF15C9A35E;
IL2CPP_EXTERN_C String_t* _stringLiteral6E0E0148D20D0B9BFF59E1BA614145BD6AA4A2CF;
IL2CPP_EXTERN_C String_t* _stringLiteral703DDA89D5A1468347462E570B61919C97F49332;
IL2CPP_EXTERN_C String_t* _stringLiteral762EDC7A7A0B53D18035E7C003C1C3DCDDCFE936;
IL2CPP_EXTERN_C String_t* _stringLiteral7F70BC6C91862DD38B1D6970460040B7FDA79818;
IL2CPP_EXTERN_C String_t* _stringLiteral82214C4C72C814D368F6AED97C3ECF8A32B0E6D0;
IL2CPP_EXTERN_C String_t* _stringLiteral850D887793387455E960CBC2D611DB88AB13289D;
IL2CPP_EXTERN_C String_t* _stringLiteral87CF7CCE0693DDC238F9B7696651DE3283943AA3;
IL2CPP_EXTERN_C String_t* _stringLiteral92DC370ABEB4DD1784265CEE05422305C0A4DEF3;
IL2CPP_EXTERN_C String_t* _stringLiteral951073BF3052137F10909C5D078FC8FBEFBAB5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral968A8FF5D258B8366D56C62E06E3E56E11A36231;
IL2CPP_EXTERN_C String_t* _stringLiteralA51EBD13A86AE40E24855BD33FCA24E771C1A0BC;
IL2CPP_EXTERN_C String_t* _stringLiteralB1A13FADF51EF7EECE7DEA40C4B6E6E8042822D2;
IL2CPP_EXTERN_C String_t* _stringLiteralB3D9D9B3AF1557EAEB3628F6757E4E2D49E2EA67;
IL2CPP_EXTERN_C String_t* _stringLiteralB67F7553E410CBF50C7FA874229DB72256E73F13;
IL2CPP_EXTERN_C String_t* _stringLiteralCA45118107D1D32C51F635A83A27EB742FAECB9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCD98AE36981EE80A267C314EC60000C7F9D30870;
IL2CPP_EXTERN_C String_t* _stringLiteralDA5ABA16204EBD88821D2BBF3642268C4231FB1F;
IL2CPP_EXTERN_C String_t* _stringLiteralDB14AD9A84752B16F43266CFCEDA5559C75F0B3B;
IL2CPP_EXTERN_C String_t* _stringLiteralDF01DEBD2DBEA2B691BB3B454EFDBB4B14728FE6;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E966D1E207D02C44511A58DCCFF2F5429E9A3B;
IL2CPP_EXTERN_C String_t* _stringLiteralFFD6A129819CF79E42302EE62EB7CCEFABCB331A;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB1987AB89FD8B9AB5F0CA02B3AE8FE562B9FFEDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mF7B1805AB6167458AA043C48183160D082F8D51E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FBXProperties_BinaryGetStringValue_mC3452716854C6A0CA96F8D4AFF801B3A32E4ADB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FbxReader_ParseASCII_m8308FD93B819FA4F72E7AA0D2DB0B727E83C15EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FbxReader_ParseBinary_m7E259879BB6AE6B856492843585ACE74514FBB06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCB07D10172F4DF977726562C57192AD86ABC27A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m815D25D0C2C4683C925EF64C13C3256EED949127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParserRuleContext_GetRuleContext_TisDataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1_m5183E4B1228C385B98A9AE2D38F9767282FDC9CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParserRuleContext_GetRuleContext_TisNodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753_m43254CDCE9ECFD09760690B4277E91A02A6AACE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParserRuleContext_GetRuleContexts_TisArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0_m8688A45C5302ED6132A822E1D889076605AE763E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParserRuleContext_GetRuleContexts_TisDataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0_m94CC27EE6E2B483812ED90B65C66287B9CBA49B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParserRuleContext_GetRuleContexts_TisNodeContext_t3E9241FA9D066793174F9CFA648673716F922D10_m61E73B5DD4F8D309F1A69BC0B22DA6B3EB413AB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_Add_m99C6F95E24A61B3F579E80A309F8E49D389C814C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_Clear_m03A585FF3E57F81CD7B08B85683F712898EF6CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_Contains_m9A171B5B1904D2E916295FAAD01428AEAA7761DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_GetEnumerator_m313A28818F49406895B7E7719C12E8F85CDA884A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_IndexOf_m66604484DDD455E1FBC6F729335FC39438EB40F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_Insert_m2BF02C00C591FD753A3258F63EBF9A32690370C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_RemoveAt_m2A0B991098E7332E5A0CD7E83031DBF79D6CF194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_Remove_m57ED15E3952A3FBC7C1F5051D00AED6BBCD960A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_set_Item_m3ACB32AB853709E7DA8326CAB7F58B264FFCD2CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_Add_m316F705428F839F8E7965E7BA7CE8D1DDD548992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_Clear_mBD5287362EFE04A6023ABEE0B2D89060745FF704_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_Contains_m35576B03FE7089694211F393BC9550471CBFF527_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_GetEnumerator_m68A342A080F1A9754974829F480B7D0F7B348436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_IndexOf_mCA2F5389BC3C5B690416F748F0AA9F42B43149F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_Insert_m107E7A933E0E33D884FDA50DD5B383952923E9B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_RemoveAt_mAE59C41B1F1B8EEFB881EBB1A3D2797B4CECCDF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_Remove_m711AECAB78260ADCDD718331F9697D2C5077EC4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_set_Item_m27AE083116282F2A5F43F4A50D69DEB8BA1D4BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_Add_m76ADC5978D2F2FD638996B25F639921C3A4C5D8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_Clear_mB090E7F330C61C70FE3EFEF7E8912693209A5BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_Contains_mFD8DBA839E7D1AAB4FE1091F62A3337F506F9343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_GetEnumerator_m5B21BC8FE724DD999BE293E497212F3D58D933EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_IndexOf_mF1526D22C6119D7870705F838DFF07D78561D210_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_Insert_m85FCD38AC01D1C00204BFCAB4C0EA67A69B224B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_RemoveAt_m66753900311EC675797FEC80D7D5205F60CE950B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_Remove_m9AC5C3F67AADE202EA0A7129276E98D436142DEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_set_Item_m60758E1C8B082AB272F09C901E23BF2282658930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_Add_mAB958943B792B961586AC38560ACD9740BCDD411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_Clear_m3D3D6278DF2BAEC07D93AC34A6643F2FAE285DE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_Contains_m7A877052856C68A15345169D9F0D019DF2B5422F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_GetEnumerator_m3E36C1C4081C964F8767FC7A3101E47FF90C853A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_IndexOf_mB062F72768772E98E3ED1D2F578CD6D2CB8D6C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_Insert_m5A3EEEC7F8FE071D7730ACB22183FF49BB0A3005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_RemoveAt_m06DAC0B2470B38C7AF5AABA95B6B5D0584D09544_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_Remove_m4E9819F106EB0DB8D1762D52F08FCB0202D74415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_set_Item_m7AC9B6CAAF3B58A475532D82423535A91AA84FA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ArrayContext_EnterRule_m670AA99DB33519DA1A7E18BABA386389360018D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArrayContext_ExitRule_mE280CC77EE29F3B858D1F342E26D2E4A0EDD0D6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArrayContext__ctor_m91FAC2EF0461B24971DD4A8A151EA68688DEFEDB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArrayContext_dataList_m4DB31EBD8B77311ED4E3BF7F0A46ADABEF675F5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98ATriLibCore_Fbx1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABFTriLibCore_Fbx1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataListContext_EnterRule_m9941C1F4375FFA2E36D5DA6BD343F190FC50A7CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataListContext_ExitRule_mCFBA18A836156CD85D6E673D4BC3157125003048_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataListContext__ctor_mCF22468532FFB1E671DBE77FE0D3A1645787A77F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataListContext_dataValue_m3B7012BC5F5145736E60D6CFD03F5D06E7CC3594_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataValueContext_EnterRule_m44E2F376B5C3A4E34851B97FDEE0EC86A6A43816_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataValueContext_ExitRule_m8229424221125B5D26B04E43800BA420C6EC6B04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataValueContext__ctor_m11C25F7C483EC98BE4A74A54FEE332723C0E370E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DocumentContext_EnterRule_m9A32489240F54DD1C574BCBED21FBAE7E88D74DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DocumentContext_ExitRule_m6D1A09C178AC55591143FF28CE30646052C88667_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DocumentContext__ctor_m2B5D9CEB23D57738ACCCB92A17C9238598E16949_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DocumentContext_nodeList_mF76770961C29D50238577E9E81B19C55DC8C01D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FBXProperties_ASCIIGetProperty_m061F474FA9F45914CB7F5DACE407415462714CD5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FBXProperties_BinaryConvertFloatValue_m89ED95DFB0C293ECFD71CBEEF1AE6E11AAAAFC48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FBXProperties_BinaryGetMatrixValue_m3A51A6D82728D479A06C8732FD9209310667E8EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FBXProperties_BinaryGetStringValue_mC3452716854C6A0CA96F8D4AFF801B3A32E4ADB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FBXProperties_GetByteValues_mA03A3D0A5A86A269982391FD768D6521BED41A6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FBXProperties_GetFloatValues_m83932B0D390483A0AE19C864174626F364F12715_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FBXProperties_GetIntValues_mD5B6E1402BFDE4C42A2530422B841C27E1BCF167_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FBXProperties_GetLongValues_mCF2FABC06FDEE49A989DE6100A4C2F1C6D231153_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxLexer__cctor_mD6D74223ABEFB104E765CC8EE839DF95BD1C2780_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxLexer__ctor_m380C3D88D4EBB654C1F528003A6B903C331DCC68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxLexer__ctor_m9F31B6A6232CBC1CDB2EF61509BB037B01C58DBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxLexer_get_RuleNames_mEFC9FDBA4FC970B399F54DB394E78CC6E8839151_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxLexer_get_Vocabulary_mAEC1401CD9B7CAAF0B2ADA8EA8B73EC1E48D0635_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxParser__cctor_m5AB8F2439AD4C4FD7942563D425E8BC85714790B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxParser__ctor_m1BFA20CF19CE6188B7D48F14D991CEA8BFE0B249_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxParser__ctor_m7FFEE4F77EC01B3C00E013121C398B4F621BDD22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxParser_array_m749E0AC705B6AAB7F0147C1763F2BE27FB3448FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxParser_dataList_m9FA4685F941B4F58BD64F4D26D7E21373EDEB7AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxParser_dataValue_mC8A976B7578BE490B33C913C20A77220C07DB692_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxParser_document_mC1CEC9039F741AB64B1F416DC82F6F16D2F60207_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxParser_get_RuleNames_m45EDEFEE04D07F9D539601343F0FAE7D68C939F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxParser_get_Vocabulary_m0045998FBCD0C4B39535E6A0606A66F5D7B8CE37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxParser_nodeList_m6ACD15EEEB0C5FB1013CB1D7547647EADB3124BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxParser_node_mA92149AD574A14B9D81E1AF18E8D00DA47BBBC74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxReader_GetExtensions_m592F9BFDF921C534B99C3262B03A70CE94F5E20C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxReader_IsASCII_mB15AF22B5771FF92B248C2861CC1F634692527E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxReader_IsBinary_m1BE11530B06026C25C3EA590134827B88E7E2482_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxReader_ParseASCII_m8308FD93B819FA4F72E7AA0D2DB0B727E83C15EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxReader_ParseBinary_m7E259879BB6AE6B856492843585ACE74514FBB06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxReader_ReadStream_m8332223DF0718C3769F3E90491D84128D2C93A0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FbxReader__cctor_mF6C0B89047823DE53786FD6EED164185F1F6426B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeContext_EnterRule_mF592D941823FBC40D9FE4A5793169928828C4104_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeContext_ExitRule_mBBC6D7397F13C25013C942815440EC493E44794A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeContext__ctor_m59338BC50A8C89892384CDDBECE757170F511DA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeContext_dataList_m1A696B2CBAEEE4F97420922AE040274F6C099592_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeContext_nodeList_mA28AB193B4E8590C390D284F66A2E0599A552852_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeListContext_EnterRule_mC25BDD495CA21C772D4FE40C05ABC3CBD59EE841_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeListContext_ExitRule_m1DD10C1F26F25BD27B4B27FD6D57574C92A054B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeListContext__ctor_mC02566A90CFA1D53A003C20B268708C7CB405C2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeListContext_array_m21E3642A60C1F385309755212F69AAB28904320C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeListContext_node_m59F409381647D87268BE0580F0F1F7DCB3120987_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorByte_Add_m99C6F95E24A61B3F579E80A309F8E49D389C814C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorByte_Clear_m03A585FF3E57F81CD7B08B85683F712898EF6CEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorByte_Contains_m9A171B5B1904D2E916295FAAD01428AEAA7761DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorByte_GetEnumerator_m313A28818F49406895B7E7719C12E8F85CDA884A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorByte_IndexOf_m66604484DDD455E1FBC6F729335FC39438EB40F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorByte_Insert_m2BF02C00C591FD753A3258F63EBF9A32690370C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorByte_RemoveAt_m2A0B991098E7332E5A0CD7E83031DBF79D6CF194_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorByte_Remove_m57ED15E3952A3FBC7C1F5051D00AED6BBCD960A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorByte_set_Item_m3ACB32AB853709E7DA8326CAB7F58B264FFCD2CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorFloat_Add_m316F705428F839F8E7965E7BA7CE8D1DDD548992_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorFloat_Clear_mBD5287362EFE04A6023ABEE0B2D89060745FF704_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorFloat_Contains_m35576B03FE7089694211F393BC9550471CBFF527_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorFloat_GetEnumerator_m68A342A080F1A9754974829F480B7D0F7B348436_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorFloat_IndexOf_mCA2F5389BC3C5B690416F748F0AA9F42B43149F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorFloat_Insert_m107E7A933E0E33D884FDA50DD5B383952923E9B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorFloat_RemoveAt_mAE59C41B1F1B8EEFB881EBB1A3D2797B4CECCDF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorFloat_Remove_m711AECAB78260ADCDD718331F9697D2C5077EC4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorFloat_set_Item_m27AE083116282F2A5F43F4A50D69DEB8BA1D4BA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorInt_Add_m76ADC5978D2F2FD638996B25F639921C3A4C5D8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorInt_Clear_mB090E7F330C61C70FE3EFEF7E8912693209A5BAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorInt_Contains_mFD8DBA839E7D1AAB4FE1091F62A3337F506F9343_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorInt_GetEnumerator_m5B21BC8FE724DD999BE293E497212F3D58D933EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorInt_IndexOf_mF1526D22C6119D7870705F838DFF07D78561D210_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorInt_Insert_m85FCD38AC01D1C00204BFCAB4C0EA67A69B224B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorInt_RemoveAt_m66753900311EC675797FEC80D7D5205F60CE950B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorInt_Remove_m9AC5C3F67AADE202EA0A7129276E98D436142DEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorInt_set_Item_m60758E1C8B082AB272F09C901E23BF2282658930_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorLong_Add_mAB958943B792B961586AC38560ACD9740BCDD411_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorLong_Clear_m3D3D6278DF2BAEC07D93AC34A6643F2FAE285DE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorLong_Contains_m7A877052856C68A15345169D9F0D019DF2B5422F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorLong_GetEnumerator_m3E36C1C4081C964F8767FC7A3101E47FF90C853A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorLong_IndexOf_mB062F72768772E98E3ED1D2F578CD6D2CB8D6C23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorLong_Insert_m5A3EEEC7F8FE071D7730ACB22183FF49BB0A3005_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorLong_RemoveAt_m06DAC0B2470B38C7AF5AABA95B6B5D0584D09544_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorLong_Remove_m4E9819F106EB0DB8D1762D52F08FCB0202D74415_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyAccessorLong_set_Item_m7AC9B6CAAF3B58A475532D82423535A91AA84FA6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m008A22B387D38A0BB1AEC956E04007082F2183C2_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct ArrayContextU5BU5D_t0D654B7E1B1B80979F051D876DAD540123DF01C0;
struct DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A;
struct NodeContextU5BU5D_tE60DD7EF4687D3544FD380AB84B03B802D19A8F7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Antlr4.Runtime.Atn.ATNSimulator
struct  ATNSimulator_t66E4A4A38B33601FA1C37141A2568CD3DCC4B9BA  : public RuntimeObject
{
public:
	// Antlr4.Runtime.Atn.ATN Antlr4.Runtime.Atn.ATNSimulator::atn
	ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * ___atn_1;
	// Antlr4.Runtime.Atn.PredictionContextCache Antlr4.Runtime.Atn.ATNSimulator::sharedContextCache
	PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * ___sharedContextCache_2;

public:
	inline static int32_t get_offset_of_atn_1() { return static_cast<int32_t>(offsetof(ATNSimulator_t66E4A4A38B33601FA1C37141A2568CD3DCC4B9BA, ___atn_1)); }
	inline ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * get_atn_1() const { return ___atn_1; }
	inline ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 ** get_address_of_atn_1() { return &___atn_1; }
	inline void set_atn_1(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * value)
	{
		___atn_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atn_1), (void*)value);
	}

	inline static int32_t get_offset_of_sharedContextCache_2() { return static_cast<int32_t>(offsetof(ATNSimulator_t66E4A4A38B33601FA1C37141A2568CD3DCC4B9BA, ___sharedContextCache_2)); }
	inline PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * get_sharedContextCache_2() const { return ___sharedContextCache_2; }
	inline PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D ** get_address_of_sharedContextCache_2() { return &___sharedContextCache_2; }
	inline void set_sharedContextCache_2(PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * value)
	{
		___sharedContextCache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedContextCache_2), (void*)value);
	}
};

struct ATNSimulator_t66E4A4A38B33601FA1C37141A2568CD3DCC4B9BA_StaticFields
{
public:
	// Antlr4.Runtime.Dfa.DFAState Antlr4.Runtime.Atn.ATNSimulator::ERROR
	DFAState_t0A3C08D7EFED26BFA2005D18024EBD80EF713984 * ___ERROR_0;

public:
	inline static int32_t get_offset_of_ERROR_0() { return static_cast<int32_t>(offsetof(ATNSimulator_t66E4A4A38B33601FA1C37141A2568CD3DCC4B9BA_StaticFields, ___ERROR_0)); }
	inline DFAState_t0A3C08D7EFED26BFA2005D18024EBD80EF713984 * get_ERROR_0() const { return ___ERROR_0; }
	inline DFAState_t0A3C08D7EFED26BFA2005D18024EBD80EF713984 ** get_address_of_ERROR_0() { return &___ERROR_0; }
	inline void set_ERROR_0(DFAState_t0A3C08D7EFED26BFA2005D18024EBD80EF713984 * value)
	{
		___ERROR_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ERROR_0), (void*)value);
	}
};


// Antlr4.Runtime.Atn.ATNState
struct  ATNState_t707578E5D3A24A54FA00C9C8D5077EBCFD5CB4D9  : public RuntimeObject
{
public:
	// Antlr4.Runtime.Atn.ATN Antlr4.Runtime.Atn.ATNState::atn
	ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * ___atn_1;
	// System.Int32 Antlr4.Runtime.Atn.ATNState::stateNumber
	int32_t ___stateNumber_2;
	// System.Int32 Antlr4.Runtime.Atn.ATNState::ruleIndex
	int32_t ___ruleIndex_3;
	// System.Boolean Antlr4.Runtime.Atn.ATNState::epsilonOnlyTransitions
	bool ___epsilonOnlyTransitions_4;
	// System.Collections.Generic.List`1<Antlr4.Runtime.Atn.Transition> Antlr4.Runtime.Atn.ATNState::transitions
	List_1_tEF0864052C1B31D9290E8820DBB2C084CC4FFBDA * ___transitions_5;
	// System.Collections.Generic.List`1<Antlr4.Runtime.Atn.Transition> Antlr4.Runtime.Atn.ATNState::optimizedTransitions
	List_1_tEF0864052C1B31D9290E8820DBB2C084CC4FFBDA * ___optimizedTransitions_6;
	// Antlr4.Runtime.Misc.IntervalSet Antlr4.Runtime.Atn.ATNState::nextTokenWithinRule
	IntervalSet_t496F02CDDBDCFFBC292D03D97BFAE6EAC9E80A56 * ___nextTokenWithinRule_7;

public:
	inline static int32_t get_offset_of_atn_1() { return static_cast<int32_t>(offsetof(ATNState_t707578E5D3A24A54FA00C9C8D5077EBCFD5CB4D9, ___atn_1)); }
	inline ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * get_atn_1() const { return ___atn_1; }
	inline ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 ** get_address_of_atn_1() { return &___atn_1; }
	inline void set_atn_1(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * value)
	{
		___atn_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atn_1), (void*)value);
	}

	inline static int32_t get_offset_of_stateNumber_2() { return static_cast<int32_t>(offsetof(ATNState_t707578E5D3A24A54FA00C9C8D5077EBCFD5CB4D9, ___stateNumber_2)); }
	inline int32_t get_stateNumber_2() const { return ___stateNumber_2; }
	inline int32_t* get_address_of_stateNumber_2() { return &___stateNumber_2; }
	inline void set_stateNumber_2(int32_t value)
	{
		___stateNumber_2 = value;
	}

	inline static int32_t get_offset_of_ruleIndex_3() { return static_cast<int32_t>(offsetof(ATNState_t707578E5D3A24A54FA00C9C8D5077EBCFD5CB4D9, ___ruleIndex_3)); }
	inline int32_t get_ruleIndex_3() const { return ___ruleIndex_3; }
	inline int32_t* get_address_of_ruleIndex_3() { return &___ruleIndex_3; }
	inline void set_ruleIndex_3(int32_t value)
	{
		___ruleIndex_3 = value;
	}

	inline static int32_t get_offset_of_epsilonOnlyTransitions_4() { return static_cast<int32_t>(offsetof(ATNState_t707578E5D3A24A54FA00C9C8D5077EBCFD5CB4D9, ___epsilonOnlyTransitions_4)); }
	inline bool get_epsilonOnlyTransitions_4() const { return ___epsilonOnlyTransitions_4; }
	inline bool* get_address_of_epsilonOnlyTransitions_4() { return &___epsilonOnlyTransitions_4; }
	inline void set_epsilonOnlyTransitions_4(bool value)
	{
		___epsilonOnlyTransitions_4 = value;
	}

	inline static int32_t get_offset_of_transitions_5() { return static_cast<int32_t>(offsetof(ATNState_t707578E5D3A24A54FA00C9C8D5077EBCFD5CB4D9, ___transitions_5)); }
	inline List_1_tEF0864052C1B31D9290E8820DBB2C084CC4FFBDA * get_transitions_5() const { return ___transitions_5; }
	inline List_1_tEF0864052C1B31D9290E8820DBB2C084CC4FFBDA ** get_address_of_transitions_5() { return &___transitions_5; }
	inline void set_transitions_5(List_1_tEF0864052C1B31D9290E8820DBB2C084CC4FFBDA * value)
	{
		___transitions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transitions_5), (void*)value);
	}

	inline static int32_t get_offset_of_optimizedTransitions_6() { return static_cast<int32_t>(offsetof(ATNState_t707578E5D3A24A54FA00C9C8D5077EBCFD5CB4D9, ___optimizedTransitions_6)); }
	inline List_1_tEF0864052C1B31D9290E8820DBB2C084CC4FFBDA * get_optimizedTransitions_6() const { return ___optimizedTransitions_6; }
	inline List_1_tEF0864052C1B31D9290E8820DBB2C084CC4FFBDA ** get_address_of_optimizedTransitions_6() { return &___optimizedTransitions_6; }
	inline void set_optimizedTransitions_6(List_1_tEF0864052C1B31D9290E8820DBB2C084CC4FFBDA * value)
	{
		___optimizedTransitions_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optimizedTransitions_6), (void*)value);
	}

	inline static int32_t get_offset_of_nextTokenWithinRule_7() { return static_cast<int32_t>(offsetof(ATNState_t707578E5D3A24A54FA00C9C8D5077EBCFD5CB4D9, ___nextTokenWithinRule_7)); }
	inline IntervalSet_t496F02CDDBDCFFBC292D03D97BFAE6EAC9E80A56 * get_nextTokenWithinRule_7() const { return ___nextTokenWithinRule_7; }
	inline IntervalSet_t496F02CDDBDCFFBC292D03D97BFAE6EAC9E80A56 ** get_address_of_nextTokenWithinRule_7() { return &___nextTokenWithinRule_7; }
	inline void set_nextTokenWithinRule_7(IntervalSet_t496F02CDDBDCFFBC292D03D97BFAE6EAC9E80A56 * value)
	{
		___nextTokenWithinRule_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextTokenWithinRule_7), (void*)value);
	}
};

struct ATNState_t707578E5D3A24A54FA00C9C8D5077EBCFD5CB4D9_StaticFields
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Antlr4.Runtime.Atn.ATNState::serializationNames
	ReadOnlyCollection_1_tD551705A23AE36FAF48832FAF4782681CE96DA45 * ___serializationNames_0;

public:
	inline static int32_t get_offset_of_serializationNames_0() { return static_cast<int32_t>(offsetof(ATNState_t707578E5D3A24A54FA00C9C8D5077EBCFD5CB4D9_StaticFields, ___serializationNames_0)); }
	inline ReadOnlyCollection_1_tD551705A23AE36FAF48832FAF4782681CE96DA45 * get_serializationNames_0() const { return ___serializationNames_0; }
	inline ReadOnlyCollection_1_tD551705A23AE36FAF48832FAF4782681CE96DA45 ** get_address_of_serializationNames_0() { return &___serializationNames_0; }
	inline void set_serializationNames_0(ReadOnlyCollection_1_tD551705A23AE36FAF48832FAF4782681CE96DA45 * value)
	{
		___serializationNames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializationNames_0), (void*)value);
	}
};


// Antlr4.Runtime.Atn.PredictionContextCache
struct  PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Antlr4.Runtime.Atn.PredictionContext,Antlr4.Runtime.Atn.PredictionContext> Antlr4.Runtime.Atn.PredictionContextCache::cache
	Dictionary_2_t6C07CBA125E7ED4812AF5303F67E45A52B498D66 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D, ___cache_0)); }
	inline Dictionary_2_t6C07CBA125E7ED4812AF5303F67E45A52B498D66 * get_cache_0() const { return ___cache_0; }
	inline Dictionary_2_t6C07CBA125E7ED4812AF5303F67E45A52B498D66 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(Dictionary_2_t6C07CBA125E7ED4812AF5303F67E45A52B498D66 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cache_0), (void*)value);
	}
};


// Antlr4.Runtime.BaseInputCharStream
struct  BaseInputCharStream_t47C66E8AEA6EFD30CF250BD2823188CB1CFB4989  : public RuntimeObject
{
public:
	// System.Int32 Antlr4.Runtime.BaseInputCharStream::n
	int32_t ___n_0;
	// System.Int32 Antlr4.Runtime.BaseInputCharStream::p
	int32_t ___p_1;

public:
	inline static int32_t get_offset_of_n_0() { return static_cast<int32_t>(offsetof(BaseInputCharStream_t47C66E8AEA6EFD30CF250BD2823188CB1CFB4989, ___n_0)); }
	inline int32_t get_n_0() const { return ___n_0; }
	inline int32_t* get_address_of_n_0() { return &___n_0; }
	inline void set_n_0(int32_t value)
	{
		___n_0 = value;
	}

	inline static int32_t get_offset_of_p_1() { return static_cast<int32_t>(offsetof(BaseInputCharStream_t47C66E8AEA6EFD30CF250BD2823188CB1CFB4989, ___p_1)); }
	inline int32_t get_p_1() const { return ___p_1; }
	inline int32_t* get_address_of_p_1() { return &___p_1; }
	inline void set_p_1(int32_t value)
	{
		___p_1 = value;
	}
};


// Antlr4.Runtime.BufferedTokenStream
struct  BufferedTokenStream_t727375C02AC9D1AA011CD8384AEA660788D0A3E3  : public RuntimeObject
{
public:
	// Antlr4.Runtime.ITokenSource Antlr4.Runtime.BufferedTokenStream::_tokenSource
	RuntimeObject* ____tokenSource_0;
	// System.Collections.Generic.IList`1<Antlr4.Runtime.IToken> Antlr4.Runtime.BufferedTokenStream::tokens
	RuntimeObject* ___tokens_1;
	// System.Int32 Antlr4.Runtime.BufferedTokenStream::p
	int32_t ___p_2;
	// System.Boolean Antlr4.Runtime.BufferedTokenStream::fetchedEOF
	bool ___fetchedEOF_3;

public:
	inline static int32_t get_offset_of__tokenSource_0() { return static_cast<int32_t>(offsetof(BufferedTokenStream_t727375C02AC9D1AA011CD8384AEA660788D0A3E3, ____tokenSource_0)); }
	inline RuntimeObject* get__tokenSource_0() const { return ____tokenSource_0; }
	inline RuntimeObject** get_address_of__tokenSource_0() { return &____tokenSource_0; }
	inline void set__tokenSource_0(RuntimeObject* value)
	{
		____tokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tokenSource_0), (void*)value);
	}

	inline static int32_t get_offset_of_tokens_1() { return static_cast<int32_t>(offsetof(BufferedTokenStream_t727375C02AC9D1AA011CD8384AEA660788D0A3E3, ___tokens_1)); }
	inline RuntimeObject* get_tokens_1() const { return ___tokens_1; }
	inline RuntimeObject** get_address_of_tokens_1() { return &___tokens_1; }
	inline void set_tokens_1(RuntimeObject* value)
	{
		___tokens_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokens_1), (void*)value);
	}

	inline static int32_t get_offset_of_p_2() { return static_cast<int32_t>(offsetof(BufferedTokenStream_t727375C02AC9D1AA011CD8384AEA660788D0A3E3, ___p_2)); }
	inline int32_t get_p_2() const { return ___p_2; }
	inline int32_t* get_address_of_p_2() { return &___p_2; }
	inline void set_p_2(int32_t value)
	{
		___p_2 = value;
	}

	inline static int32_t get_offset_of_fetchedEOF_3() { return static_cast<int32_t>(offsetof(BufferedTokenStream_t727375C02AC9D1AA011CD8384AEA660788D0A3E3, ___fetchedEOF_3)); }
	inline bool get_fetchedEOF_3() const { return ___fetchedEOF_3; }
	inline bool* get_address_of_fetchedEOF_3() { return &___fetchedEOF_3; }
	inline void set_fetchedEOF_3(bool value)
	{
		___fetchedEOF_3 = value;
	}
};


// Antlr4.Runtime.Dfa.DFA
struct  DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Antlr4.Runtime.Dfa.DFAState,Antlr4.Runtime.Dfa.DFAState> Antlr4.Runtime.Dfa.DFA::states
	Dictionary_2_t9D008E55D11FE65A8E337545E4A541D7E87C0B7E * ___states_0;
	// Antlr4.Runtime.Dfa.DFAState Antlr4.Runtime.Dfa.DFA::s0
	DFAState_t0A3C08D7EFED26BFA2005D18024EBD80EF713984 * ___s0_1;
	// System.Int32 Antlr4.Runtime.Dfa.DFA::decision
	int32_t ___decision_2;
	// Antlr4.Runtime.Atn.DecisionState Antlr4.Runtime.Dfa.DFA::atnStartState
	DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44 * ___atnStartState_3;
	// System.Boolean Antlr4.Runtime.Dfa.DFA::precedenceDfa
	bool ___precedenceDfa_4;

public:
	inline static int32_t get_offset_of_states_0() { return static_cast<int32_t>(offsetof(DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF, ___states_0)); }
	inline Dictionary_2_t9D008E55D11FE65A8E337545E4A541D7E87C0B7E * get_states_0() const { return ___states_0; }
	inline Dictionary_2_t9D008E55D11FE65A8E337545E4A541D7E87C0B7E ** get_address_of_states_0() { return &___states_0; }
	inline void set_states_0(Dictionary_2_t9D008E55D11FE65A8E337545E4A541D7E87C0B7E * value)
	{
		___states_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___states_0), (void*)value);
	}

	inline static int32_t get_offset_of_s0_1() { return static_cast<int32_t>(offsetof(DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF, ___s0_1)); }
	inline DFAState_t0A3C08D7EFED26BFA2005D18024EBD80EF713984 * get_s0_1() const { return ___s0_1; }
	inline DFAState_t0A3C08D7EFED26BFA2005D18024EBD80EF713984 ** get_address_of_s0_1() { return &___s0_1; }
	inline void set_s0_1(DFAState_t0A3C08D7EFED26BFA2005D18024EBD80EF713984 * value)
	{
		___s0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s0_1), (void*)value);
	}

	inline static int32_t get_offset_of_decision_2() { return static_cast<int32_t>(offsetof(DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF, ___decision_2)); }
	inline int32_t get_decision_2() const { return ___decision_2; }
	inline int32_t* get_address_of_decision_2() { return &___decision_2; }
	inline void set_decision_2(int32_t value)
	{
		___decision_2 = value;
	}

	inline static int32_t get_offset_of_atnStartState_3() { return static_cast<int32_t>(offsetof(DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF, ___atnStartState_3)); }
	inline DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44 * get_atnStartState_3() const { return ___atnStartState_3; }
	inline DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44 ** get_address_of_atnStartState_3() { return &___atnStartState_3; }
	inline void set_atnStartState_3(DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44 * value)
	{
		___atnStartState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atnStartState_3), (void*)value);
	}

	inline static int32_t get_offset_of_precedenceDfa_4() { return static_cast<int32_t>(offsetof(DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF, ___precedenceDfa_4)); }
	inline bool get_precedenceDfa_4() const { return ___precedenceDfa_4; }
	inline bool* get_address_of_precedenceDfa_4() { return &___precedenceDfa_4; }
	inline void set_precedenceDfa_4(bool value)
	{
		___precedenceDfa_4 = value;
	}
};


// Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>
struct  Recognizer_2_t8FEA9423B15C3A552F5E40D4CCA30AEAB01E3C4F  : public RuntimeObject
{
public:
	// Antlr4.Runtime.IAntlrErrorListener`1<Symbol>[] Antlr4.Runtime.Recognizer`2::_listeners
	IAntlrErrorListener_1U5BU5D_tE8032AD4FA6535BD1664E3CA120952FF0962C0BC* ____listeners_0;
	// ATNInterpreter Antlr4.Runtime.Recognizer`2::_interp
	ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC * ____interp_1;
	// System.Int32 Antlr4.Runtime.Recognizer`2::_stateNumber
	int32_t ____stateNumber_2;

public:
	inline static int32_t get_offset_of__listeners_0() { return static_cast<int32_t>(offsetof(Recognizer_2_t8FEA9423B15C3A552F5E40D4CCA30AEAB01E3C4F, ____listeners_0)); }
	inline IAntlrErrorListener_1U5BU5D_tE8032AD4FA6535BD1664E3CA120952FF0962C0BC* get__listeners_0() const { return ____listeners_0; }
	inline IAntlrErrorListener_1U5BU5D_tE8032AD4FA6535BD1664E3CA120952FF0962C0BC** get_address_of__listeners_0() { return &____listeners_0; }
	inline void set__listeners_0(IAntlrErrorListener_1U5BU5D_tE8032AD4FA6535BD1664E3CA120952FF0962C0BC* value)
	{
		____listeners_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listeners_0), (void*)value);
	}

	inline static int32_t get_offset_of__interp_1() { return static_cast<int32_t>(offsetof(Recognizer_2_t8FEA9423B15C3A552F5E40D4CCA30AEAB01E3C4F, ____interp_1)); }
	inline ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC * get__interp_1() const { return ____interp_1; }
	inline ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC ** get_address_of__interp_1() { return &____interp_1; }
	inline void set__interp_1(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC * value)
	{
		____interp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interp_1), (void*)value);
	}

	inline static int32_t get_offset_of__stateNumber_2() { return static_cast<int32_t>(offsetof(Recognizer_2_t8FEA9423B15C3A552F5E40D4CCA30AEAB01E3C4F, ____stateNumber_2)); }
	inline int32_t get__stateNumber_2() const { return ____stateNumber_2; }
	inline int32_t* get_address_of__stateNumber_2() { return &____stateNumber_2; }
	inline void set__stateNumber_2(int32_t value)
	{
		____stateNumber_2 = value;
	}
};


// Antlr4.Runtime.Recognizer`2<System.Int32,Antlr4.Runtime.Atn.LexerATNSimulator>
struct  Recognizer_2_tD3DD21B483FCC34818F8EF8946F165150A9E9BF2  : public RuntimeObject
{
public:
	// Antlr4.Runtime.IAntlrErrorListener`1<Symbol>[] Antlr4.Runtime.Recognizer`2::_listeners
	IAntlrErrorListener_1U5BU5D_tA6D81C851EF0FE2E07CE75DF0DEDEB1F6B571B43* ____listeners_0;
	// ATNInterpreter Antlr4.Runtime.Recognizer`2::_interp
	LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480 * ____interp_1;
	// System.Int32 Antlr4.Runtime.Recognizer`2::_stateNumber
	int32_t ____stateNumber_2;

public:
	inline static int32_t get_offset_of__listeners_0() { return static_cast<int32_t>(offsetof(Recognizer_2_tD3DD21B483FCC34818F8EF8946F165150A9E9BF2, ____listeners_0)); }
	inline IAntlrErrorListener_1U5BU5D_tA6D81C851EF0FE2E07CE75DF0DEDEB1F6B571B43* get__listeners_0() const { return ____listeners_0; }
	inline IAntlrErrorListener_1U5BU5D_tA6D81C851EF0FE2E07CE75DF0DEDEB1F6B571B43** get_address_of__listeners_0() { return &____listeners_0; }
	inline void set__listeners_0(IAntlrErrorListener_1U5BU5D_tA6D81C851EF0FE2E07CE75DF0DEDEB1F6B571B43* value)
	{
		____listeners_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listeners_0), (void*)value);
	}

	inline static int32_t get_offset_of__interp_1() { return static_cast<int32_t>(offsetof(Recognizer_2_tD3DD21B483FCC34818F8EF8946F165150A9E9BF2, ____interp_1)); }
	inline LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480 * get__interp_1() const { return ____interp_1; }
	inline LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480 ** get_address_of__interp_1() { return &____interp_1; }
	inline void set__interp_1(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480 * value)
	{
		____interp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interp_1), (void*)value);
	}

	inline static int32_t get_offset_of__stateNumber_2() { return static_cast<int32_t>(offsetof(Recognizer_2_tD3DD21B483FCC34818F8EF8946F165150A9E9BF2, ____stateNumber_2)); }
	inline int32_t get__stateNumber_2() const { return ____stateNumber_2; }
	inline int32_t* get_address_of__stateNumber_2() { return &____stateNumber_2; }
	inline void set__stateNumber_2(int32_t value)
	{
		____stateNumber_2 = value;
	}
};


// Antlr4.Runtime.Recognizer`2<System.Object,System.Object>
struct  Recognizer_2_t0DEA9546FEB2ABD340DDC3F9C36E49CB1AB5333E  : public RuntimeObject
{
public:
	// Antlr4.Runtime.IAntlrErrorListener`1<Symbol>[] Antlr4.Runtime.Recognizer`2::_listeners
	IAntlrErrorListener_1U5BU5D_tD13DCFFA8FD2DAA51D8AE0E533042EB74F5F0481* ____listeners_0;
	// ATNInterpreter Antlr4.Runtime.Recognizer`2::_interp
	RuntimeObject * ____interp_1;
	// System.Int32 Antlr4.Runtime.Recognizer`2::_stateNumber
	int32_t ____stateNumber_2;

public:
	inline static int32_t get_offset_of__listeners_0() { return static_cast<int32_t>(offsetof(Recognizer_2_t0DEA9546FEB2ABD340DDC3F9C36E49CB1AB5333E, ____listeners_0)); }
	inline IAntlrErrorListener_1U5BU5D_tD13DCFFA8FD2DAA51D8AE0E533042EB74F5F0481* get__listeners_0() const { return ____listeners_0; }
	inline IAntlrErrorListener_1U5BU5D_tD13DCFFA8FD2DAA51D8AE0E533042EB74F5F0481** get_address_of__listeners_0() { return &____listeners_0; }
	inline void set__listeners_0(IAntlrErrorListener_1U5BU5D_tD13DCFFA8FD2DAA51D8AE0E533042EB74F5F0481* value)
	{
		____listeners_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listeners_0), (void*)value);
	}

	inline static int32_t get_offset_of__interp_1() { return static_cast<int32_t>(offsetof(Recognizer_2_t0DEA9546FEB2ABD340DDC3F9C36E49CB1AB5333E, ____interp_1)); }
	inline RuntimeObject * get__interp_1() const { return ____interp_1; }
	inline RuntimeObject ** get_address_of__interp_1() { return &____interp_1; }
	inline void set__interp_1(RuntimeObject * value)
	{
		____interp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interp_1), (void*)value);
	}

	inline static int32_t get_offset_of__stateNumber_2() { return static_cast<int32_t>(offsetof(Recognizer_2_t0DEA9546FEB2ABD340DDC3F9C36E49CB1AB5333E, ____stateNumber_2)); }
	inline int32_t get__stateNumber_2() const { return ____stateNumber_2; }
	inline int32_t* get_address_of__stateNumber_2() { return &____stateNumber_2; }
	inline void set__stateNumber_2(int32_t value)
	{
		____stateNumber_2 = value;
	}
};


// Antlr4.Runtime.RuleContext
struct  RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790  : public RuntimeObject
{
public:
	// Antlr4.Runtime.RuleContext Antlr4.Runtime.RuleContext::_parent
	RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790 * ____parent_0;
	// System.Int32 Antlr4.Runtime.RuleContext::invokingState
	int32_t ___invokingState_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790, ____parent_0)); }
	inline RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790 * get__parent_0() const { return ____parent_0; }
	inline RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_invokingState_1() { return static_cast<int32_t>(offsetof(RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790, ___invokingState_1)); }
	inline int32_t get_invokingState_1() const { return ___invokingState_1; }
	inline int32_t* get_address_of_invokingState_1() { return &___invokingState_1; }
	inline void set_invokingState_1(int32_t value)
	{
		___invokingState_1 = value;
	}
};


// Antlr4.Runtime.Tree.AbstractParseTreeVisitor`1<TriLibCore.Fbx.ASCII.FBXNodeResult>
struct  AbstractParseTreeVisitor_1_t624BB8E68BC13A658452CC29C77A9DD0902636A3  : public RuntimeObject
{
public:

public:
};


// Antlr4.Runtime.Vocabulary
struct  Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1  : public RuntimeObject
{
public:
	// System.String[] Antlr4.Runtime.Vocabulary::literalNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___literalNames_2;
	// System.String[] Antlr4.Runtime.Vocabulary::symbolicNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___symbolicNames_3;
	// System.String[] Antlr4.Runtime.Vocabulary::displayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___displayNames_4;
	// System.Int32 Antlr4.Runtime.Vocabulary::maxTokenType
	int32_t ___maxTokenType_5;

public:
	inline static int32_t get_offset_of_literalNames_2() { return static_cast<int32_t>(offsetof(Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1, ___literalNames_2)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_literalNames_2() const { return ___literalNames_2; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_literalNames_2() { return &___literalNames_2; }
	inline void set_literalNames_2(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___literalNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___literalNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_symbolicNames_3() { return static_cast<int32_t>(offsetof(Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1, ___symbolicNames_3)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_symbolicNames_3() const { return ___symbolicNames_3; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_symbolicNames_3() { return &___symbolicNames_3; }
	inline void set_symbolicNames_3(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___symbolicNames_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___symbolicNames_3), (void*)value);
	}

	inline static int32_t get_offset_of_displayNames_4() { return static_cast<int32_t>(offsetof(Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1, ___displayNames_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_displayNames_4() const { return ___displayNames_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_displayNames_4() { return &___displayNames_4; }
	inline void set_displayNames_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___displayNames_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayNames_4), (void*)value);
	}

	inline static int32_t get_offset_of_maxTokenType_5() { return static_cast<int32_t>(offsetof(Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1, ___maxTokenType_5)); }
	inline int32_t get_maxTokenType_5() const { return ___maxTokenType_5; }
	inline int32_t* get_address_of_maxTokenType_5() { return &___maxTokenType_5; }
	inline void set_maxTokenType_5(int32_t value)
	{
		___maxTokenType_5 = value;
	}
};

struct Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1_StaticFields
{
public:
	// System.String[] Antlr4.Runtime.Vocabulary::EmptyNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___EmptyNames_0;
	// Antlr4.Runtime.Vocabulary Antlr4.Runtime.Vocabulary::EmptyVocabulary
	Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1 * ___EmptyVocabulary_1;

public:
	inline static int32_t get_offset_of_EmptyNames_0() { return static_cast<int32_t>(offsetof(Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1_StaticFields, ___EmptyNames_0)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_EmptyNames_0() const { return ___EmptyNames_0; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_EmptyNames_0() { return &___EmptyNames_0; }
	inline void set_EmptyNames_0(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___EmptyNames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyNames_0), (void*)value);
	}

	inline static int32_t get_offset_of_EmptyVocabulary_1() { return static_cast<int32_t>(offsetof(Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1_StaticFields, ___EmptyVocabulary_1)); }
	inline Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1 * get_EmptyVocabulary_1() const { return ___EmptyVocabulary_1; }
	inline Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1 ** get_address_of_EmptyVocabulary_1() { return &___EmptyVocabulary_1; }
	inline void set_EmptyVocabulary_1(Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1 * value)
	{
		___EmptyVocabulary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyVocabulary_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int64,System.String>
struct  Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC8895DC1B392C241DCE9485A631A73A956B4DAFF* ___entries_1;
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
	KeyCollection_tE24B829754F835A39F27D9C310809E65A78F7593 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9DE5B06ABDFF3EF47AE6CB311371E6F9B9AD0A21 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1, ___entries_1)); }
	inline EntryU5BU5D_tC8895DC1B392C241DCE9485A631A73A956B4DAFF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC8895DC1B392C241DCE9485A631A73A956B4DAFF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC8895DC1B392C241DCE9485A631A73A956B4DAFF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1, ___keys_7)); }
	inline KeyCollection_tE24B829754F835A39F27D9C310809E65A78F7593 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE24B829754F835A39F27D9C310809E65A78F7593 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE24B829754F835A39F27D9C310809E65A78F7593 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1, ___values_8)); }
	inline ValueCollection_t9DE5B06ABDFF3EF47AE6CB311371E6F9B9AD0A21 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9DE5B06ABDFF3EF47AE6CB311371E6F9B9AD0A21 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9DE5B06ABDFF3EF47AE6CB311371E6F9B9AD0A21 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Console
struct  Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D  : public RuntimeObject
{
public:

public:
};

struct Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * ___cancel_event_5;
	// System.Console_InternalCancelHandler System.Console::cancel_handler
	InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * ___cancel_handler_6;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stdout_0)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdout_0), (void*)value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stderr_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stderr_1), (void*)value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___stdin_2)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stdin_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___inputEncoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEncoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___outputEncoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputEncoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_event_5() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___cancel_event_5)); }
	inline ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * get_cancel_event_5() const { return ___cancel_event_5; }
	inline ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 ** get_address_of_cancel_event_5() { return &___cancel_event_5; }
	inline void set_cancel_event_5(ConsoleCancelEventHandler_t6F3B5D9C55C25FF6B53EFEDA9150EFE807311EB4 * value)
	{
		___cancel_event_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_event_5), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_handler_6() { return static_cast<int32_t>(offsetof(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields, ___cancel_handler_6)); }
	inline InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * get_cancel_handler_6() const { return ___cancel_handler_6; }
	inline InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A ** get_address_of_cancel_handler_6() { return &___cancel_handler_6; }
	inline void set_cancel_handler_6(InternalCancelHandler_t2DD134D8150B67E2F9FAD1BC2E6BE92EED57968A * value)
	{
		___cancel_handler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_handler_6), (void*)value);
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
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

// TriLibCore.Fbx.ASCII.FBXNodesCounter
struct  FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE  : public RuntimeObject
{
public:
	// System.Int32 TriLibCore.Fbx.ASCII.FBXNodesCounter::NodesCount
	int32_t ___NodesCount_0;

public:
	inline static int32_t get_offset_of_NodesCount_0() { return static_cast<int32_t>(offsetof(FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE, ___NodesCount_0)); }
	inline int32_t get_NodesCount_0() const { return ___NodesCount_0; }
	inline int32_t* get_address_of_NodesCount_0() { return &___NodesCount_0; }
	inline void set_NodesCount_0(int32_t value)
	{
		___NodesCount_0 = value;
	}
};


// TriLibCore.Fbx.FBXProcessor
struct  FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E  : public RuntimeObject
{
public:
	// TriLibCore.Fbx.FBXDocument TriLibCore.Fbx.FBXProcessor::_document
	FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * ____document_0;
	// TriLibCore.Fbx.FBXNode[] TriLibCore.Fbx.FBXProcessor::Nodes
	FBXNodeU5BU5D_tB39A3ADF50006ADFB6E9CA8229D401BD42DA3901* ___Nodes_1;
	// TriLibCore.Fbx.FBXProperty[] TriLibCore.Fbx.FBXProcessor::Properties
	FBXPropertyU5BU5D_t7A482ACDE3EA7CBF54BFAFA3EB7BF6FD59307F22* ___Properties_2;
	// TriLibCore.Fbx.Reader.FbxReader TriLibCore.Fbx.FBXProcessor::FbxReader
	FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F * ___FbxReader_3;
	// System.Int32 TriLibCore.Fbx.FBXProcessor::ActiveBasePropertyIndex
	int32_t ___ActiveBasePropertyIndex_4;
	// System.Int32 TriLibCore.Fbx.FBXProcessor::ActiveDataSize
	int32_t ___ActiveDataSize_5;
	// System.Int32 TriLibCore.Fbx.FBXProcessor::ActiveSubDataSize
	int32_t ___ActiveSubDataSize_6;
	// System.IO.BinaryReader TriLibCore.Fbx.FBXProcessor::ActiveBinaryReader
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___ActiveBinaryReader_7;
	// System.Int32 TriLibCore.Fbx.FBXProcessor::_nodeIndex
	int32_t ____nodeIndex_8;
	// System.Int32 TriLibCore.Fbx.FBXProcessor::<PropertiesCount>k__BackingField
	int32_t ___U3CPropertiesCountU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<System.Int64,System.String> TriLibCore.Fbx.FBXProcessor::_strings
	Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1 * ____strings_10;
	// TriLibCore.Fbx.Binary.FBXBinaryReader TriLibCore.Fbx.FBXProcessor::FBXBinaryReader
	FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * ___FBXBinaryReader_11;
	// System.Int32[] TriLibCore.Fbx.FBXProcessor::_vertexIndicesBuffer
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____vertexIndicesBuffer_12;

public:
	inline static int32_t get_offset_of__document_0() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ____document_0)); }
	inline FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * get__document_0() const { return ____document_0; }
	inline FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 ** get_address_of__document_0() { return &____document_0; }
	inline void set__document_0(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * value)
	{
		____document_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____document_0), (void*)value);
	}

	inline static int32_t get_offset_of_Nodes_1() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ___Nodes_1)); }
	inline FBXNodeU5BU5D_tB39A3ADF50006ADFB6E9CA8229D401BD42DA3901* get_Nodes_1() const { return ___Nodes_1; }
	inline FBXNodeU5BU5D_tB39A3ADF50006ADFB6E9CA8229D401BD42DA3901** get_address_of_Nodes_1() { return &___Nodes_1; }
	inline void set_Nodes_1(FBXNodeU5BU5D_tB39A3ADF50006ADFB6E9CA8229D401BD42DA3901* value)
	{
		___Nodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Nodes_1), (void*)value);
	}

	inline static int32_t get_offset_of_Properties_2() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ___Properties_2)); }
	inline FBXPropertyU5BU5D_t7A482ACDE3EA7CBF54BFAFA3EB7BF6FD59307F22* get_Properties_2() const { return ___Properties_2; }
	inline FBXPropertyU5BU5D_t7A482ACDE3EA7CBF54BFAFA3EB7BF6FD59307F22** get_address_of_Properties_2() { return &___Properties_2; }
	inline void set_Properties_2(FBXPropertyU5BU5D_t7A482ACDE3EA7CBF54BFAFA3EB7BF6FD59307F22* value)
	{
		___Properties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Properties_2), (void*)value);
	}

	inline static int32_t get_offset_of_FbxReader_3() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ___FbxReader_3)); }
	inline FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F * get_FbxReader_3() const { return ___FbxReader_3; }
	inline FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F ** get_address_of_FbxReader_3() { return &___FbxReader_3; }
	inline void set_FbxReader_3(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F * value)
	{
		___FbxReader_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FbxReader_3), (void*)value);
	}

	inline static int32_t get_offset_of_ActiveBasePropertyIndex_4() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ___ActiveBasePropertyIndex_4)); }
	inline int32_t get_ActiveBasePropertyIndex_4() const { return ___ActiveBasePropertyIndex_4; }
	inline int32_t* get_address_of_ActiveBasePropertyIndex_4() { return &___ActiveBasePropertyIndex_4; }
	inline void set_ActiveBasePropertyIndex_4(int32_t value)
	{
		___ActiveBasePropertyIndex_4 = value;
	}

	inline static int32_t get_offset_of_ActiveDataSize_5() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ___ActiveDataSize_5)); }
	inline int32_t get_ActiveDataSize_5() const { return ___ActiveDataSize_5; }
	inline int32_t* get_address_of_ActiveDataSize_5() { return &___ActiveDataSize_5; }
	inline void set_ActiveDataSize_5(int32_t value)
	{
		___ActiveDataSize_5 = value;
	}

	inline static int32_t get_offset_of_ActiveSubDataSize_6() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ___ActiveSubDataSize_6)); }
	inline int32_t get_ActiveSubDataSize_6() const { return ___ActiveSubDataSize_6; }
	inline int32_t* get_address_of_ActiveSubDataSize_6() { return &___ActiveSubDataSize_6; }
	inline void set_ActiveSubDataSize_6(int32_t value)
	{
		___ActiveSubDataSize_6 = value;
	}

	inline static int32_t get_offset_of_ActiveBinaryReader_7() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ___ActiveBinaryReader_7)); }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * get_ActiveBinaryReader_7() const { return ___ActiveBinaryReader_7; }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 ** get_address_of_ActiveBinaryReader_7() { return &___ActiveBinaryReader_7; }
	inline void set_ActiveBinaryReader_7(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * value)
	{
		___ActiveBinaryReader_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveBinaryReader_7), (void*)value);
	}

	inline static int32_t get_offset_of__nodeIndex_8() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ____nodeIndex_8)); }
	inline int32_t get__nodeIndex_8() const { return ____nodeIndex_8; }
	inline int32_t* get_address_of__nodeIndex_8() { return &____nodeIndex_8; }
	inline void set__nodeIndex_8(int32_t value)
	{
		____nodeIndex_8 = value;
	}

	inline static int32_t get_offset_of_U3CPropertiesCountU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ___U3CPropertiesCountU3Ek__BackingField_9)); }
	inline int32_t get_U3CPropertiesCountU3Ek__BackingField_9() const { return ___U3CPropertiesCountU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CPropertiesCountU3Ek__BackingField_9() { return &___U3CPropertiesCountU3Ek__BackingField_9; }
	inline void set_U3CPropertiesCountU3Ek__BackingField_9(int32_t value)
	{
		___U3CPropertiesCountU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of__strings_10() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ____strings_10)); }
	inline Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1 * get__strings_10() const { return ____strings_10; }
	inline Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1 ** get_address_of__strings_10() { return &____strings_10; }
	inline void set__strings_10(Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1 * value)
	{
		____strings_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____strings_10), (void*)value);
	}

	inline static int32_t get_offset_of_FBXBinaryReader_11() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ___FBXBinaryReader_11)); }
	inline FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * get_FBXBinaryReader_11() const { return ___FBXBinaryReader_11; }
	inline FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 ** get_address_of_FBXBinaryReader_11() { return &___FBXBinaryReader_11; }
	inline void set_FBXBinaryReader_11(FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * value)
	{
		___FBXBinaryReader_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FBXBinaryReader_11), (void*)value);
	}

	inline static int32_t get_offset_of__vertexIndicesBuffer_12() { return static_cast<int32_t>(offsetof(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E, ____vertexIndicesBuffer_12)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__vertexIndicesBuffer_12() const { return ____vertexIndicesBuffer_12; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__vertexIndicesBuffer_12() { return &____vertexIndicesBuffer_12; }
	inline void set__vertexIndicesBuffer_12(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____vertexIndicesBuffer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____vertexIndicesBuffer_12), (void*)value);
	}
};


// TriLibCore.Fbx.FBXProcessor_<>c
struct  U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C_StaticFields
{
public:
	// TriLibCore.Fbx.FBXProcessor_<>c TriLibCore.Fbx.FBXProcessor_<>c::<>9
	U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C * ___U3CU3E9_0;
	// System.Comparison`1<TriLibCore.Fbx.FBXAnimationLayer> TriLibCore.Fbx.FBXProcessor_<>c::<>9__47_0
	Comparison_1_t61F655C43C6390A3629311DCEC84C8C1AB55E161 * ___U3CU3E9__47_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__47_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C_StaticFields, ___U3CU3E9__47_0_1)); }
	inline Comparison_1_t61F655C43C6390A3629311DCEC84C8C1AB55E161 * get_U3CU3E9__47_0_1() const { return ___U3CU3E9__47_0_1; }
	inline Comparison_1_t61F655C43C6390A3629311DCEC84C8C1AB55E161 ** get_address_of_U3CU3E9__47_0_1() { return &___U3CU3E9__47_0_1; }
	inline void set_U3CU3E9__47_0_1(Comparison_1_t61F655C43C6390A3629311DCEC84C8C1AB55E161 * value)
	{
		___U3CU3E9__47_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__47_0_1), (void*)value);
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


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D1002
struct  __StaticArrayInitTypeSizeU3D1002_t21C195FA78C083B66A8BF042A05830FF3C45F55C 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1002_t21C195FA78C083B66A8BF042A05830FF3C45F55C__padding[1002];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D2456
struct  __StaticArrayInitTypeSizeU3D2456_t20EC2637A48EFF6BF79B1C2C362913220D82F91E 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2456_t20EC2637A48EFF6BF79B1C2C362913220D82F91E__padding[2456];
	};

public:
};


// Antlr4.Runtime.AntlrInputStream
struct  AntlrInputStream_tF5987E6281D3A24587B1B457A28C0D5E7BE7DB1A  : public BaseInputCharStream_t47C66E8AEA6EFD30CF250BD2823188CB1CFB4989
{
public:
	// System.Char[] Antlr4.Runtime.AntlrInputStream::data
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___data_2;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(AntlrInputStream_tF5987E6281D3A24587B1B457A28C0D5E7BE7DB1A, ___data_2)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_data_2() const { return ___data_2; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}
};


// Antlr4.Runtime.Atn.DecisionState
struct  DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44  : public ATNState_t707578E5D3A24A54FA00C9C8D5077EBCFD5CB4D9
{
public:
	// System.Int32 Antlr4.Runtime.Atn.DecisionState::decision
	int32_t ___decision_8;
	// System.Boolean Antlr4.Runtime.Atn.DecisionState::nonGreedy
	bool ___nonGreedy_9;

public:
	inline static int32_t get_offset_of_decision_8() { return static_cast<int32_t>(offsetof(DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44, ___decision_8)); }
	inline int32_t get_decision_8() const { return ___decision_8; }
	inline int32_t* get_address_of_decision_8() { return &___decision_8; }
	inline void set_decision_8(int32_t value)
	{
		___decision_8 = value;
	}

	inline static int32_t get_offset_of_nonGreedy_9() { return static_cast<int32_t>(offsetof(DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44, ___nonGreedy_9)); }
	inline bool get_nonGreedy_9() const { return ___nonGreedy_9; }
	inline bool* get_address_of_nonGreedy_9() { return &___nonGreedy_9; }
	inline void set_nonGreedy_9(bool value)
	{
		___nonGreedy_9 = value;
	}
};


// Antlr4.Runtime.Atn.LexerATNSimulator
struct  LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480  : public ATNSimulator_t66E4A4A38B33601FA1C37141A2568CD3DCC4B9BA
{
public:
	// System.Boolean Antlr4.Runtime.Atn.LexerATNSimulator::debug
	bool ___debug_3;
	// Antlr4.Runtime.Lexer Antlr4.Runtime.Atn.LexerATNSimulator::recog
	Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7 * ___recog_6;
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::startIndex
	int32_t ___startIndex_7;
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::thisLine
	int32_t ___thisLine_8;
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::charPositionInLine
	int32_t ___charPositionInLine_9;
	// Antlr4.Runtime.Dfa.DFA[] Antlr4.Runtime.Atn.LexerATNSimulator::decisionToDFA
	DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* ___decisionToDFA_10;
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::mode
	int32_t ___mode_11;
	// Antlr4.Runtime.Atn.SimState Antlr4.Runtime.Atn.LexerATNSimulator::prevAccept
	SimState_tC367FC3105EA94C3BAF9B7764A5D27F0BF159970 * ___prevAccept_12;

public:
	inline static int32_t get_offset_of_debug_3() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480, ___debug_3)); }
	inline bool get_debug_3() const { return ___debug_3; }
	inline bool* get_address_of_debug_3() { return &___debug_3; }
	inline void set_debug_3(bool value)
	{
		___debug_3 = value;
	}

	inline static int32_t get_offset_of_recog_6() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480, ___recog_6)); }
	inline Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7 * get_recog_6() const { return ___recog_6; }
	inline Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7 ** get_address_of_recog_6() { return &___recog_6; }
	inline void set_recog_6(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7 * value)
	{
		___recog_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recog_6), (void*)value);
	}

	inline static int32_t get_offset_of_startIndex_7() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480, ___startIndex_7)); }
	inline int32_t get_startIndex_7() const { return ___startIndex_7; }
	inline int32_t* get_address_of_startIndex_7() { return &___startIndex_7; }
	inline void set_startIndex_7(int32_t value)
	{
		___startIndex_7 = value;
	}

	inline static int32_t get_offset_of_thisLine_8() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480, ___thisLine_8)); }
	inline int32_t get_thisLine_8() const { return ___thisLine_8; }
	inline int32_t* get_address_of_thisLine_8() { return &___thisLine_8; }
	inline void set_thisLine_8(int32_t value)
	{
		___thisLine_8 = value;
	}

	inline static int32_t get_offset_of_charPositionInLine_9() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480, ___charPositionInLine_9)); }
	inline int32_t get_charPositionInLine_9() const { return ___charPositionInLine_9; }
	inline int32_t* get_address_of_charPositionInLine_9() { return &___charPositionInLine_9; }
	inline void set_charPositionInLine_9(int32_t value)
	{
		___charPositionInLine_9 = value;
	}

	inline static int32_t get_offset_of_decisionToDFA_10() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480, ___decisionToDFA_10)); }
	inline DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* get_decisionToDFA_10() const { return ___decisionToDFA_10; }
	inline DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540** get_address_of_decisionToDFA_10() { return &___decisionToDFA_10; }
	inline void set_decisionToDFA_10(DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* value)
	{
		___decisionToDFA_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decisionToDFA_10), (void*)value);
	}

	inline static int32_t get_offset_of_mode_11() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480, ___mode_11)); }
	inline int32_t get_mode_11() const { return ___mode_11; }
	inline int32_t* get_address_of_mode_11() { return &___mode_11; }
	inline void set_mode_11(int32_t value)
	{
		___mode_11 = value;
	}

	inline static int32_t get_offset_of_prevAccept_12() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480, ___prevAccept_12)); }
	inline SimState_tC367FC3105EA94C3BAF9B7764A5D27F0BF159970 * get_prevAccept_12() const { return ___prevAccept_12; }
	inline SimState_tC367FC3105EA94C3BAF9B7764A5D27F0BF159970 ** get_address_of_prevAccept_12() { return &___prevAccept_12; }
	inline void set_prevAccept_12(SimState_tC367FC3105EA94C3BAF9B7764A5D27F0BF159970 * value)
	{
		___prevAccept_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevAccept_12), (void*)value);
	}
};

struct LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480_StaticFields
{
public:
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::MIN_DFA_EDGE
	int32_t ___MIN_DFA_EDGE_4;
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::MAX_DFA_EDGE
	int32_t ___MAX_DFA_EDGE_5;
	// System.Int32 Antlr4.Runtime.Atn.LexerATNSimulator::match_calls
	int32_t ___match_calls_13;

public:
	inline static int32_t get_offset_of_MIN_DFA_EDGE_4() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480_StaticFields, ___MIN_DFA_EDGE_4)); }
	inline int32_t get_MIN_DFA_EDGE_4() const { return ___MIN_DFA_EDGE_4; }
	inline int32_t* get_address_of_MIN_DFA_EDGE_4() { return &___MIN_DFA_EDGE_4; }
	inline void set_MIN_DFA_EDGE_4(int32_t value)
	{
		___MIN_DFA_EDGE_4 = value;
	}

	inline static int32_t get_offset_of_MAX_DFA_EDGE_5() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480_StaticFields, ___MAX_DFA_EDGE_5)); }
	inline int32_t get_MAX_DFA_EDGE_5() const { return ___MAX_DFA_EDGE_5; }
	inline int32_t* get_address_of_MAX_DFA_EDGE_5() { return &___MAX_DFA_EDGE_5; }
	inline void set_MAX_DFA_EDGE_5(int32_t value)
	{
		___MAX_DFA_EDGE_5 = value;
	}

	inline static int32_t get_offset_of_match_calls_13() { return static_cast<int32_t>(offsetof(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480_StaticFields, ___match_calls_13)); }
	inline int32_t get_match_calls_13() const { return ___match_calls_13; }
	inline int32_t* get_address_of_match_calls_13() { return &___match_calls_13; }
	inline void set_match_calls_13(int32_t value)
	{
		___match_calls_13 = value;
	}
};


// Antlr4.Runtime.Atn.ParserATNSimulator
struct  ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC  : public ATNSimulator_t66E4A4A38B33601FA1C37141A2568CD3DCC4B9BA
{
public:
	// Antlr4.Runtime.Parser Antlr4.Runtime.Atn.ParserATNSimulator::parser
	Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * ___parser_7;
	// Antlr4.Runtime.Dfa.DFA[] Antlr4.Runtime.Atn.ParserATNSimulator::decisionToDFA
	DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* ___decisionToDFA_8;
	// Antlr4.Runtime.Atn.PredictionMode Antlr4.Runtime.Atn.ParserATNSimulator::mode
	PredictionMode_t9C8DE0B29EE537E6FDF306369DC917441B9A0D02 * ___mode_9;
	// Antlr4.Runtime.Atn.MergeCache Antlr4.Runtime.Atn.ParserATNSimulator::mergeCache
	MergeCache_tC8A8A468D3DD70D8A91082F7FBCFEBB04CA3735F * ___mergeCache_10;
	// Antlr4.Runtime.ITokenStream Antlr4.Runtime.Atn.ParserATNSimulator::input
	RuntimeObject* ___input_11;
	// System.Int32 Antlr4.Runtime.Atn.ParserATNSimulator::startIndex
	int32_t ___startIndex_12;
	// Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Atn.ParserATNSimulator::context
	ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___context_13;
	// Antlr4.Runtime.Dfa.DFA Antlr4.Runtime.Atn.ParserATNSimulator::thisDfa
	DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF * ___thisDfa_14;

public:
	inline static int32_t get_offset_of_parser_7() { return static_cast<int32_t>(offsetof(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC, ___parser_7)); }
	inline Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * get_parser_7() const { return ___parser_7; }
	inline Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 ** get_address_of_parser_7() { return &___parser_7; }
	inline void set_parser_7(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * value)
	{
		___parser_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parser_7), (void*)value);
	}

	inline static int32_t get_offset_of_decisionToDFA_8() { return static_cast<int32_t>(offsetof(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC, ___decisionToDFA_8)); }
	inline DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* get_decisionToDFA_8() const { return ___decisionToDFA_8; }
	inline DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540** get_address_of_decisionToDFA_8() { return &___decisionToDFA_8; }
	inline void set_decisionToDFA_8(DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* value)
	{
		___decisionToDFA_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decisionToDFA_8), (void*)value);
	}

	inline static int32_t get_offset_of_mode_9() { return static_cast<int32_t>(offsetof(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC, ___mode_9)); }
	inline PredictionMode_t9C8DE0B29EE537E6FDF306369DC917441B9A0D02 * get_mode_9() const { return ___mode_9; }
	inline PredictionMode_t9C8DE0B29EE537E6FDF306369DC917441B9A0D02 ** get_address_of_mode_9() { return &___mode_9; }
	inline void set_mode_9(PredictionMode_t9C8DE0B29EE537E6FDF306369DC917441B9A0D02 * value)
	{
		___mode_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mode_9), (void*)value);
	}

	inline static int32_t get_offset_of_mergeCache_10() { return static_cast<int32_t>(offsetof(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC, ___mergeCache_10)); }
	inline MergeCache_tC8A8A468D3DD70D8A91082F7FBCFEBB04CA3735F * get_mergeCache_10() const { return ___mergeCache_10; }
	inline MergeCache_tC8A8A468D3DD70D8A91082F7FBCFEBB04CA3735F ** get_address_of_mergeCache_10() { return &___mergeCache_10; }
	inline void set_mergeCache_10(MergeCache_tC8A8A468D3DD70D8A91082F7FBCFEBB04CA3735F * value)
	{
		___mergeCache_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mergeCache_10), (void*)value);
	}

	inline static int32_t get_offset_of_input_11() { return static_cast<int32_t>(offsetof(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC, ___input_11)); }
	inline RuntimeObject* get_input_11() const { return ___input_11; }
	inline RuntimeObject** get_address_of_input_11() { return &___input_11; }
	inline void set_input_11(RuntimeObject* value)
	{
		___input_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_11), (void*)value);
	}

	inline static int32_t get_offset_of_startIndex_12() { return static_cast<int32_t>(offsetof(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC, ___startIndex_12)); }
	inline int32_t get_startIndex_12() const { return ___startIndex_12; }
	inline int32_t* get_address_of_startIndex_12() { return &___startIndex_12; }
	inline void set_startIndex_12(int32_t value)
	{
		___startIndex_12 = value;
	}

	inline static int32_t get_offset_of_context_13() { return static_cast<int32_t>(offsetof(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC, ___context_13)); }
	inline ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * get_context_13() const { return ___context_13; }
	inline ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE ** get_address_of_context_13() { return &___context_13; }
	inline void set_context_13(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * value)
	{
		___context_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_13), (void*)value);
	}

	inline static int32_t get_offset_of_thisDfa_14() { return static_cast<int32_t>(offsetof(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC, ___thisDfa_14)); }
	inline DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF * get_thisDfa_14() const { return ___thisDfa_14; }
	inline DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF ** get_address_of_thisDfa_14() { return &___thisDfa_14; }
	inline void set_thisDfa_14(DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF * value)
	{
		___thisDfa_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thisDfa_14), (void*)value);
	}
};

struct ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC_StaticFields
{
public:
	// System.Boolean Antlr4.Runtime.Atn.ParserATNSimulator::debug
	bool ___debug_3;
	// System.Boolean Antlr4.Runtime.Atn.ParserATNSimulator::debug_list_atn_decisions
	bool ___debug_list_atn_decisions_4;
	// System.Boolean Antlr4.Runtime.Atn.ParserATNSimulator::dfa_debug
	bool ___dfa_debug_5;
	// System.Boolean Antlr4.Runtime.Atn.ParserATNSimulator::retry_debug
	bool ___retry_debug_6;

public:
	inline static int32_t get_offset_of_debug_3() { return static_cast<int32_t>(offsetof(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC_StaticFields, ___debug_3)); }
	inline bool get_debug_3() const { return ___debug_3; }
	inline bool* get_address_of_debug_3() { return &___debug_3; }
	inline void set_debug_3(bool value)
	{
		___debug_3 = value;
	}

	inline static int32_t get_offset_of_debug_list_atn_decisions_4() { return static_cast<int32_t>(offsetof(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC_StaticFields, ___debug_list_atn_decisions_4)); }
	inline bool get_debug_list_atn_decisions_4() const { return ___debug_list_atn_decisions_4; }
	inline bool* get_address_of_debug_list_atn_decisions_4() { return &___debug_list_atn_decisions_4; }
	inline void set_debug_list_atn_decisions_4(bool value)
	{
		___debug_list_atn_decisions_4 = value;
	}

	inline static int32_t get_offset_of_dfa_debug_5() { return static_cast<int32_t>(offsetof(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC_StaticFields, ___dfa_debug_5)); }
	inline bool get_dfa_debug_5() const { return ___dfa_debug_5; }
	inline bool* get_address_of_dfa_debug_5() { return &___dfa_debug_5; }
	inline void set_dfa_debug_5(bool value)
	{
		___dfa_debug_5 = value;
	}

	inline static int32_t get_offset_of_retry_debug_6() { return static_cast<int32_t>(offsetof(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC_StaticFields, ___retry_debug_6)); }
	inline bool get_retry_debug_6() const { return ___retry_debug_6; }
	inline bool* get_address_of_retry_debug_6() { return &___retry_debug_6; }
	inline void set_retry_debug_6(bool value)
	{
		___retry_debug_6 = value;
	}
};


// Antlr4.Runtime.CommonTokenStream
struct  CommonTokenStream_t0A80A52294B69CD9EB76170958E601DFEFDE73C0  : public BufferedTokenStream_t727375C02AC9D1AA011CD8384AEA660788D0A3E3
{
public:
	// System.Int32 Antlr4.Runtime.CommonTokenStream::channel
	int32_t ___channel_4;

public:
	inline static int32_t get_offset_of_channel_4() { return static_cast<int32_t>(offsetof(CommonTokenStream_t0A80A52294B69CD9EB76170958E601DFEFDE73C0, ___channel_4)); }
	inline int32_t get_channel_4() const { return ___channel_4; }
	inline int32_t* get_address_of_channel_4() { return &___channel_4; }
	inline void set_channel_4(int32_t value)
	{
		___channel_4 = value;
	}
};


// Antlr4.Runtime.Lexer
struct  Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7  : public Recognizer_2_tD3DD21B483FCC34818F8EF8946F165150A9E9BF2
{
public:
	// Antlr4.Runtime.ICharStream Antlr4.Runtime.Lexer::_input
	RuntimeObject* ____input_3;
	// System.IO.TextWriter Antlr4.Runtime.Lexer::Output
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Output_4;
	// System.IO.TextWriter Antlr4.Runtime.Lexer::ErrorOutput
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___ErrorOutput_5;
	// Antlr4.Runtime.Sharpen.Tuple`2<Antlr4.Runtime.ITokenSource,Antlr4.Runtime.ICharStream> Antlr4.Runtime.Lexer::_tokenFactorySourcePair
	Tuple_2_t9A7A916ED0128382B81E5ABF64B150F175AB03BB * ____tokenFactorySourcePair_6;
	// Antlr4.Runtime.ITokenFactory Antlr4.Runtime.Lexer::_factory
	RuntimeObject* ____factory_7;
	// Antlr4.Runtime.IToken Antlr4.Runtime.Lexer::_token
	RuntimeObject* ____token_8;
	// System.Int32 Antlr4.Runtime.Lexer::_tokenStartCharIndex
	int32_t ____tokenStartCharIndex_9;
	// System.Int32 Antlr4.Runtime.Lexer::_tokenStartLine
	int32_t ____tokenStartLine_10;
	// System.Int32 Antlr4.Runtime.Lexer::_tokenStartColumn
	int32_t ____tokenStartColumn_11;
	// System.Boolean Antlr4.Runtime.Lexer::_hitEOF
	bool ____hitEOF_12;
	// System.Int32 Antlr4.Runtime.Lexer::_channel
	int32_t ____channel_13;
	// System.Int32 Antlr4.Runtime.Lexer::_type
	int32_t ____type_14;
	// System.Collections.Generic.Stack`1<System.Int32> Antlr4.Runtime.Lexer::_modeStack
	Stack_1_t3BAE6359B3000921CD734BEE42C959E545C36C4D * ____modeStack_15;
	// System.Int32 Antlr4.Runtime.Lexer::_mode
	int32_t ____mode_16;
	// System.String Antlr4.Runtime.Lexer::_text
	String_t* ____text_17;

public:
	inline static int32_t get_offset_of__input_3() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____input_3)); }
	inline RuntimeObject* get__input_3() const { return ____input_3; }
	inline RuntimeObject** get_address_of__input_3() { return &____input_3; }
	inline void set__input_3(RuntimeObject* value)
	{
		____input_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_3), (void*)value);
	}

	inline static int32_t get_offset_of_Output_4() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ___Output_4)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Output_4() const { return ___Output_4; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Output_4() { return &___Output_4; }
	inline void set_Output_4(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Output_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Output_4), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorOutput_5() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ___ErrorOutput_5)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_ErrorOutput_5() const { return ___ErrorOutput_5; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_ErrorOutput_5() { return &___ErrorOutput_5; }
	inline void set_ErrorOutput_5(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___ErrorOutput_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorOutput_5), (void*)value);
	}

	inline static int32_t get_offset_of__tokenFactorySourcePair_6() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____tokenFactorySourcePair_6)); }
	inline Tuple_2_t9A7A916ED0128382B81E5ABF64B150F175AB03BB * get__tokenFactorySourcePair_6() const { return ____tokenFactorySourcePair_6; }
	inline Tuple_2_t9A7A916ED0128382B81E5ABF64B150F175AB03BB ** get_address_of__tokenFactorySourcePair_6() { return &____tokenFactorySourcePair_6; }
	inline void set__tokenFactorySourcePair_6(Tuple_2_t9A7A916ED0128382B81E5ABF64B150F175AB03BB * value)
	{
		____tokenFactorySourcePair_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tokenFactorySourcePair_6), (void*)value);
	}

	inline static int32_t get_offset_of__factory_7() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____factory_7)); }
	inline RuntimeObject* get__factory_7() const { return ____factory_7; }
	inline RuntimeObject** get_address_of__factory_7() { return &____factory_7; }
	inline void set__factory_7(RuntimeObject* value)
	{
		____factory_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____factory_7), (void*)value);
	}

	inline static int32_t get_offset_of__token_8() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____token_8)); }
	inline RuntimeObject* get__token_8() const { return ____token_8; }
	inline RuntimeObject** get_address_of__token_8() { return &____token_8; }
	inline void set__token_8(RuntimeObject* value)
	{
		____token_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_8), (void*)value);
	}

	inline static int32_t get_offset_of__tokenStartCharIndex_9() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____tokenStartCharIndex_9)); }
	inline int32_t get__tokenStartCharIndex_9() const { return ____tokenStartCharIndex_9; }
	inline int32_t* get_address_of__tokenStartCharIndex_9() { return &____tokenStartCharIndex_9; }
	inline void set__tokenStartCharIndex_9(int32_t value)
	{
		____tokenStartCharIndex_9 = value;
	}

	inline static int32_t get_offset_of__tokenStartLine_10() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____tokenStartLine_10)); }
	inline int32_t get__tokenStartLine_10() const { return ____tokenStartLine_10; }
	inline int32_t* get_address_of__tokenStartLine_10() { return &____tokenStartLine_10; }
	inline void set__tokenStartLine_10(int32_t value)
	{
		____tokenStartLine_10 = value;
	}

	inline static int32_t get_offset_of__tokenStartColumn_11() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____tokenStartColumn_11)); }
	inline int32_t get__tokenStartColumn_11() const { return ____tokenStartColumn_11; }
	inline int32_t* get_address_of__tokenStartColumn_11() { return &____tokenStartColumn_11; }
	inline void set__tokenStartColumn_11(int32_t value)
	{
		____tokenStartColumn_11 = value;
	}

	inline static int32_t get_offset_of__hitEOF_12() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____hitEOF_12)); }
	inline bool get__hitEOF_12() const { return ____hitEOF_12; }
	inline bool* get_address_of__hitEOF_12() { return &____hitEOF_12; }
	inline void set__hitEOF_12(bool value)
	{
		____hitEOF_12 = value;
	}

	inline static int32_t get_offset_of__channel_13() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____channel_13)); }
	inline int32_t get__channel_13() const { return ____channel_13; }
	inline int32_t* get_address_of__channel_13() { return &____channel_13; }
	inline void set__channel_13(int32_t value)
	{
		____channel_13 = value;
	}

	inline static int32_t get_offset_of__type_14() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____type_14)); }
	inline int32_t get__type_14() const { return ____type_14; }
	inline int32_t* get_address_of__type_14() { return &____type_14; }
	inline void set__type_14(int32_t value)
	{
		____type_14 = value;
	}

	inline static int32_t get_offset_of__modeStack_15() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____modeStack_15)); }
	inline Stack_1_t3BAE6359B3000921CD734BEE42C959E545C36C4D * get__modeStack_15() const { return ____modeStack_15; }
	inline Stack_1_t3BAE6359B3000921CD734BEE42C959E545C36C4D ** get_address_of__modeStack_15() { return &____modeStack_15; }
	inline void set__modeStack_15(Stack_1_t3BAE6359B3000921CD734BEE42C959E545C36C4D * value)
	{
		____modeStack_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____modeStack_15), (void*)value);
	}

	inline static int32_t get_offset_of__mode_16() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____mode_16)); }
	inline int32_t get__mode_16() const { return ____mode_16; }
	inline int32_t* get_address_of__mode_16() { return &____mode_16; }
	inline void set__mode_16(int32_t value)
	{
		____mode_16 = value;
	}

	inline static int32_t get_offset_of__text_17() { return static_cast<int32_t>(offsetof(Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7, ____text_17)); }
	inline String_t* get__text_17() const { return ____text_17; }
	inline String_t** get_address_of__text_17() { return &____text_17; }
	inline void set__text_17(String_t* value)
	{
		____text_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____text_17), (void*)value);
	}
};


// Antlr4.Runtime.Parser
struct  Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87  : public Recognizer_2_t8FEA9423B15C3A552F5E40D4CCA30AEAB01E3C4F
{
public:
	// Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::_errHandler
	RuntimeObject* ____errHandler_4;
	// Antlr4.Runtime.ITokenStream Antlr4.Runtime.Parser::_input
	RuntimeObject* ____input_5;
	// System.Collections.Generic.List`1<System.Int32> Antlr4.Runtime.Parser::_precedenceStack
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ____precedenceStack_6;
	// Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::_ctx
	ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ____ctx_7;
	// System.Boolean Antlr4.Runtime.Parser::_buildParseTrees
	bool ____buildParseTrees_8;
	// Antlr4.Runtime.Parser_TraceListener Antlr4.Runtime.Parser::_tracer
	TraceListener_tD462457BD468111AD0C41C8A552043F88DD0B399 * ____tracer_9;
	// System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTreeListener> Antlr4.Runtime.Parser::_parseListeners
	RuntimeObject* ____parseListeners_10;
	// System.Int32 Antlr4.Runtime.Parser::_syntaxErrors
	int32_t ____syntaxErrors_11;
	// System.IO.TextWriter Antlr4.Runtime.Parser::Output
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Output_12;
	// System.IO.TextWriter Antlr4.Runtime.Parser::ErrorOutput
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___ErrorOutput_13;

public:
	inline static int32_t get_offset_of__errHandler_4() { return static_cast<int32_t>(offsetof(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87, ____errHandler_4)); }
	inline RuntimeObject* get__errHandler_4() const { return ____errHandler_4; }
	inline RuntimeObject** get_address_of__errHandler_4() { return &____errHandler_4; }
	inline void set__errHandler_4(RuntimeObject* value)
	{
		____errHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____errHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of__input_5() { return static_cast<int32_t>(offsetof(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87, ____input_5)); }
	inline RuntimeObject* get__input_5() const { return ____input_5; }
	inline RuntimeObject** get_address_of__input_5() { return &____input_5; }
	inline void set__input_5(RuntimeObject* value)
	{
		____input_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_5), (void*)value);
	}

	inline static int32_t get_offset_of__precedenceStack_6() { return static_cast<int32_t>(offsetof(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87, ____precedenceStack_6)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get__precedenceStack_6() const { return ____precedenceStack_6; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of__precedenceStack_6() { return &____precedenceStack_6; }
	inline void set__precedenceStack_6(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		____precedenceStack_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____precedenceStack_6), (void*)value);
	}

	inline static int32_t get_offset_of__ctx_7() { return static_cast<int32_t>(offsetof(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87, ____ctx_7)); }
	inline ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * get__ctx_7() const { return ____ctx_7; }
	inline ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE ** get_address_of__ctx_7() { return &____ctx_7; }
	inline void set__ctx_7(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * value)
	{
		____ctx_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ctx_7), (void*)value);
	}

	inline static int32_t get_offset_of__buildParseTrees_8() { return static_cast<int32_t>(offsetof(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87, ____buildParseTrees_8)); }
	inline bool get__buildParseTrees_8() const { return ____buildParseTrees_8; }
	inline bool* get_address_of__buildParseTrees_8() { return &____buildParseTrees_8; }
	inline void set__buildParseTrees_8(bool value)
	{
		____buildParseTrees_8 = value;
	}

	inline static int32_t get_offset_of__tracer_9() { return static_cast<int32_t>(offsetof(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87, ____tracer_9)); }
	inline TraceListener_tD462457BD468111AD0C41C8A552043F88DD0B399 * get__tracer_9() const { return ____tracer_9; }
	inline TraceListener_tD462457BD468111AD0C41C8A552043F88DD0B399 ** get_address_of__tracer_9() { return &____tracer_9; }
	inline void set__tracer_9(TraceListener_tD462457BD468111AD0C41C8A552043F88DD0B399 * value)
	{
		____tracer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tracer_9), (void*)value);
	}

	inline static int32_t get_offset_of__parseListeners_10() { return static_cast<int32_t>(offsetof(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87, ____parseListeners_10)); }
	inline RuntimeObject* get__parseListeners_10() const { return ____parseListeners_10; }
	inline RuntimeObject** get_address_of__parseListeners_10() { return &____parseListeners_10; }
	inline void set__parseListeners_10(RuntimeObject* value)
	{
		____parseListeners_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parseListeners_10), (void*)value);
	}

	inline static int32_t get_offset_of__syntaxErrors_11() { return static_cast<int32_t>(offsetof(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87, ____syntaxErrors_11)); }
	inline int32_t get__syntaxErrors_11() const { return ____syntaxErrors_11; }
	inline int32_t* get_address_of__syntaxErrors_11() { return &____syntaxErrors_11; }
	inline void set__syntaxErrors_11(int32_t value)
	{
		____syntaxErrors_11 = value;
	}

	inline static int32_t get_offset_of_Output_12() { return static_cast<int32_t>(offsetof(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87, ___Output_12)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Output_12() const { return ___Output_12; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Output_12() { return &___Output_12; }
	inline void set_Output_12(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Output_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Output_12), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorOutput_13() { return static_cast<int32_t>(offsetof(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87, ___ErrorOutput_13)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_ErrorOutput_13() const { return ___ErrorOutput_13; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_ErrorOutput_13() { return &___ErrorOutput_13; }
	inline void set_ErrorOutput_13(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___ErrorOutput_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorOutput_13), (void*)value);
	}
};

struct Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,Antlr4.Runtime.Atn.ATN> Antlr4.Runtime.Parser::bypassAltsAtnCache
	RuntimeObject* ___bypassAltsAtnCache_3;

public:
	inline static int32_t get_offset_of_bypassAltsAtnCache_3() { return static_cast<int32_t>(offsetof(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87_StaticFields, ___bypassAltsAtnCache_3)); }
	inline RuntimeObject* get_bypassAltsAtnCache_3() const { return ___bypassAltsAtnCache_3; }
	inline RuntimeObject** get_address_of_bypassAltsAtnCache_3() { return &___bypassAltsAtnCache_3; }
	inline void set_bypassAltsAtnCache_3(RuntimeObject* value)
	{
		___bypassAltsAtnCache_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bypassAltsAtnCache_3), (void*)value);
	}
};


// Antlr4.Runtime.ParserRuleContext
struct  ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE  : public RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790
{
public:
	// System.Collections.Generic.IList`1<Antlr4.Runtime.Tree.IParseTree> Antlr4.Runtime.ParserRuleContext::children
	RuntimeObject* ___children_3;
	// Antlr4.Runtime.IToken Antlr4.Runtime.ParserRuleContext::_start
	RuntimeObject* ____start_4;
	// Antlr4.Runtime.IToken Antlr4.Runtime.ParserRuleContext::_stop
	RuntimeObject* ____stop_5;
	// Antlr4.Runtime.RecognitionException Antlr4.Runtime.ParserRuleContext::exception
	RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * ___exception_6;

public:
	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE, ___children_3)); }
	inline RuntimeObject* get_children_3() const { return ___children_3; }
	inline RuntimeObject** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(RuntimeObject* value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___children_3), (void*)value);
	}

	inline static int32_t get_offset_of__start_4() { return static_cast<int32_t>(offsetof(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE, ____start_4)); }
	inline RuntimeObject* get__start_4() const { return ____start_4; }
	inline RuntimeObject** get_address_of__start_4() { return &____start_4; }
	inline void set__start_4(RuntimeObject* value)
	{
		____start_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____start_4), (void*)value);
	}

	inline static int32_t get_offset_of__stop_5() { return static_cast<int32_t>(offsetof(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE, ____stop_5)); }
	inline RuntimeObject* get__stop_5() const { return ____stop_5; }
	inline RuntimeObject** get_address_of__stop_5() { return &____stop_5; }
	inline void set__stop_5(RuntimeObject* value)
	{
		____stop_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stop_5), (void*)value);
	}

	inline static int32_t get_offset_of_exception_6() { return static_cast<int32_t>(offsetof(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE, ___exception_6)); }
	inline RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * get_exception_6() const { return ___exception_6; }
	inline RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C ** get_address_of_exception_6() { return &___exception_6; }
	inline void set_exception_6(RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * value)
	{
		___exception_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_6), (void*)value);
	}
};

struct ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE_StaticFields
{
public:
	// Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.ParserRuleContext::EMPTY
	ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___EMPTY_2;

public:
	inline static int32_t get_offset_of_EMPTY_2() { return static_cast<int32_t>(offsetof(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE_StaticFields, ___EMPTY_2)); }
	inline ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * get_EMPTY_2() const { return ___EMPTY_2; }
	inline ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE ** get_address_of_EMPTY_2() { return &___EMPTY_2; }
	inline void set_EMPTY_2(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * value)
	{
		___EMPTY_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EMPTY_2), (void*)value);
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


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
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

// System.Guid
struct  Guid_t 
{
public:
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

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
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


// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
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


// System.Nullable`1<System.Double>
struct  Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9, ___has_value_1)); }
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


// TriLibCore.Fbx.ASCII.FBXNodeResult
struct  FBXNodeResult_tBDF2ACF0B3B8CB0206074A983D369015EF3C60A9 
{
public:
	// System.Int32 TriLibCore.Fbx.ASCII.FBXNodeResult::NodeIndex
	int32_t ___NodeIndex_0;
	// System.Int32 TriLibCore.Fbx.ASCII.FBXNodeResult::NodesCount
	int32_t ___NodesCount_1;

public:
	inline static int32_t get_offset_of_NodeIndex_0() { return static_cast<int32_t>(offsetof(FBXNodeResult_tBDF2ACF0B3B8CB0206074A983D369015EF3C60A9, ___NodeIndex_0)); }
	inline int32_t get_NodeIndex_0() const { return ___NodeIndex_0; }
	inline int32_t* get_address_of_NodeIndex_0() { return &___NodeIndex_0; }
	inline void set_NodeIndex_0(int32_t value)
	{
		___NodeIndex_0 = value;
	}

	inline static int32_t get_offset_of_NodesCount_1() { return static_cast<int32_t>(offsetof(FBXNodeResult_tBDF2ACF0B3B8CB0206074A983D369015EF3C60A9, ___NodesCount_1)); }
	inline int32_t get_NodesCount_1() const { return ___NodesCount_1; }
	inline int32_t* get_address_of_NodesCount_1() { return &___NodesCount_1; }
	inline void set_NodesCount_1(int32_t value)
	{
		___NodesCount_1 = value;
	}
};


// TriLibCore.Fbx.Binary.FBXBinaryReader
struct  FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9  : public BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969
{
public:
	// System.Char[] TriLibCore.Fbx.Binary.FBXBinaryReader::Chars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___Chars_10;
	// System.Byte[] TriLibCore.Fbx.Binary.FBXBinaryReader::Buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Buffer_11;
	// TriLibCore.ReaderBase TriLibCore.Fbx.Binary.FBXBinaryReader::_reader
	ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * ____reader_12;
	// System.Boolean TriLibCore.Fbx.Binary.FBXBinaryReader::_is64Bits
	bool ____is64Bits_13;
	// System.Int32 TriLibCore.Fbx.Binary.FBXBinaryReader::_version
	int32_t ____version_14;
	// System.IO.Stream TriLibCore.Fbx.Binary.FBXBinaryReader::_inputStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ____inputStream_15;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream TriLibCore.Fbx.Binary.FBXBinaryReader::InflaterInputStream
	InflaterInputStream_t54C07D2221F519ED4927A98DF99F40A319CEEC4B * ___InflaterInputStream_16;
	// ICSharpCode.SharpZipLib.Zip.Compression.Inflater TriLibCore.Fbx.Binary.FBXBinaryReader::Inflater
	Inflater_tC183AAA061C88EE8BD281D19E9DF4CF6026F026D * ___Inflater_17;
	// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.Binary.FBXBinaryReader::_processor
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ____processor_18;

public:
	inline static int32_t get_offset_of_Chars_10() { return static_cast<int32_t>(offsetof(FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9, ___Chars_10)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_Chars_10() const { return ___Chars_10; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_Chars_10() { return &___Chars_10; }
	inline void set_Chars_10(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___Chars_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Chars_10), (void*)value);
	}

	inline static int32_t get_offset_of_Buffer_11() { return static_cast<int32_t>(offsetof(FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9, ___Buffer_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Buffer_11() const { return ___Buffer_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Buffer_11() { return &___Buffer_11; }
	inline void set_Buffer_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Buffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Buffer_11), (void*)value);
	}

	inline static int32_t get_offset_of__reader_12() { return static_cast<int32_t>(offsetof(FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9, ____reader_12)); }
	inline ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * get__reader_12() const { return ____reader_12; }
	inline ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F ** get_address_of__reader_12() { return &____reader_12; }
	inline void set__reader_12(ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * value)
	{
		____reader_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reader_12), (void*)value);
	}

	inline static int32_t get_offset_of__is64Bits_13() { return static_cast<int32_t>(offsetof(FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9, ____is64Bits_13)); }
	inline bool get__is64Bits_13() const { return ____is64Bits_13; }
	inline bool* get_address_of__is64Bits_13() { return &____is64Bits_13; }
	inline void set__is64Bits_13(bool value)
	{
		____is64Bits_13 = value;
	}

	inline static int32_t get_offset_of__version_14() { return static_cast<int32_t>(offsetof(FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9, ____version_14)); }
	inline int32_t get__version_14() const { return ____version_14; }
	inline int32_t* get_address_of__version_14() { return &____version_14; }
	inline void set__version_14(int32_t value)
	{
		____version_14 = value;
	}

	inline static int32_t get_offset_of__inputStream_15() { return static_cast<int32_t>(offsetof(FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9, ____inputStream_15)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get__inputStream_15() const { return ____inputStream_15; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of__inputStream_15() { return &____inputStream_15; }
	inline void set__inputStream_15(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		____inputStream_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inputStream_15), (void*)value);
	}

	inline static int32_t get_offset_of_InflaterInputStream_16() { return static_cast<int32_t>(offsetof(FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9, ___InflaterInputStream_16)); }
	inline InflaterInputStream_t54C07D2221F519ED4927A98DF99F40A319CEEC4B * get_InflaterInputStream_16() const { return ___InflaterInputStream_16; }
	inline InflaterInputStream_t54C07D2221F519ED4927A98DF99F40A319CEEC4B ** get_address_of_InflaterInputStream_16() { return &___InflaterInputStream_16; }
	inline void set_InflaterInputStream_16(InflaterInputStream_t54C07D2221F519ED4927A98DF99F40A319CEEC4B * value)
	{
		___InflaterInputStream_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InflaterInputStream_16), (void*)value);
	}

	inline static int32_t get_offset_of_Inflater_17() { return static_cast<int32_t>(offsetof(FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9, ___Inflater_17)); }
	inline Inflater_tC183AAA061C88EE8BD281D19E9DF4CF6026F026D * get_Inflater_17() const { return ___Inflater_17; }
	inline Inflater_tC183AAA061C88EE8BD281D19E9DF4CF6026F026D ** get_address_of_Inflater_17() { return &___Inflater_17; }
	inline void set_Inflater_17(Inflater_tC183AAA061C88EE8BD281D19E9DF4CF6026F026D * value)
	{
		___Inflater_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Inflater_17), (void*)value);
	}

	inline static int32_t get_offset_of__processor_18() { return static_cast<int32_t>(offsetof(FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9, ____processor_18)); }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * get__processor_18() const { return ____processor_18; }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E ** get_address_of__processor_18() { return &____processor_18; }
	inline void set__processor_18(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * value)
	{
		____processor_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____processor_18), (void*)value);
	}
};


// TriLibCore.Fbx.FBXProperties
struct  FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXProperties::<PropertiesCount>k__BackingField
	int32_t ___U3CPropertiesCountU3Ek__BackingField_0;
	// System.Int32 TriLibCore.Fbx.FBXProperties::BasePropertyIndex
	int32_t ___BasePropertyIndex_1;
	// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.FBXProperties::_processor
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ____processor_2;
	// TriLibCore.Fbx.FbxParser_DataValueContext[] TriLibCore.Fbx.FBXProperties::_context
	DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* ____context_3;

public:
	inline static int32_t get_offset_of_U3CPropertiesCountU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9, ___U3CPropertiesCountU3Ek__BackingField_0)); }
	inline int32_t get_U3CPropertiesCountU3Ek__BackingField_0() const { return ___U3CPropertiesCountU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CPropertiesCountU3Ek__BackingField_0() { return &___U3CPropertiesCountU3Ek__BackingField_0; }
	inline void set_U3CPropertiesCountU3Ek__BackingField_0(int32_t value)
	{
		___U3CPropertiesCountU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_BasePropertyIndex_1() { return static_cast<int32_t>(offsetof(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9, ___BasePropertyIndex_1)); }
	inline int32_t get_BasePropertyIndex_1() const { return ___BasePropertyIndex_1; }
	inline int32_t* get_address_of_BasePropertyIndex_1() { return &___BasePropertyIndex_1; }
	inline void set_BasePropertyIndex_1(int32_t value)
	{
		___BasePropertyIndex_1 = value;
	}

	inline static int32_t get_offset_of__processor_2() { return static_cast<int32_t>(offsetof(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9, ____processor_2)); }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * get__processor_2() const { return ____processor_2; }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E ** get_address_of__processor_2() { return &____processor_2; }
	inline void set__processor_2(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * value)
	{
		____processor_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____processor_2), (void*)value);
	}

	inline static int32_t get_offset_of__context_3() { return static_cast<int32_t>(offsetof(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9, ____context_3)); }
	inline DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* get__context_3() const { return ____context_3; }
	inline DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A** get_address_of__context_3() { return &____context_3; }
	inline void set__context_3(DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* value)
	{
		____context_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TriLibCore.Fbx.FBXProperties
struct FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshaled_pinvoke
{
	int32_t ___U3CPropertiesCountU3Ek__BackingField_0;
	int32_t ___BasePropertyIndex_1;
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ____processor_2;
	DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* ____context_3;
};
// Native definition for COM marshalling of TriLibCore.Fbx.FBXProperties
struct FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshaled_com
{
	int32_t ___U3CPropertiesCountU3Ek__BackingField_0;
	int32_t ___BasePropertyIndex_1;
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ____processor_2;
	DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* ____context_3;
};

// TriLibCore.Fbx.FBXProperty
struct  FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE 
{
public:
	// System.Byte[] TriLibCore.Fbx.FBXProperty::Decoded
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Decoded_0;
	// System.Int32 TriLibCore.Fbx.FBXProperty::ArrayLength
	int32_t ___ArrayLength_1;
	// System.Boolean TriLibCore.Fbx.FBXProperty::Encoded
	bool ___Encoded_2;
	// System.Int32 TriLibCore.Fbx.FBXProperty::CompressedLength
	int32_t ___CompressedLength_3;
	// System.Char TriLibCore.Fbx.FBXProperty::PropertyType
	Il2CppChar ___PropertyType_4;
	// System.Int64 TriLibCore.Fbx.FBXProperty::Position
	int64_t ___Position_5;
	// System.Int64 TriLibCore.Fbx.FBXProperty::OriginalPosition
	int64_t ___OriginalPosition_6;
	// System.IO.BinaryReader TriLibCore.Fbx.FBXProperty::DecodedBinaryReader
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___DecodedBinaryReader_7;
	// System.IO.MemoryStream TriLibCore.Fbx.FBXProperty::DecodedMemoryStream
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * ___DecodedMemoryStream_8;

public:
	inline static int32_t get_offset_of_Decoded_0() { return static_cast<int32_t>(offsetof(FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE, ___Decoded_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Decoded_0() const { return ___Decoded_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Decoded_0() { return &___Decoded_0; }
	inline void set_Decoded_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Decoded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Decoded_0), (void*)value);
	}

	inline static int32_t get_offset_of_ArrayLength_1() { return static_cast<int32_t>(offsetof(FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE, ___ArrayLength_1)); }
	inline int32_t get_ArrayLength_1() const { return ___ArrayLength_1; }
	inline int32_t* get_address_of_ArrayLength_1() { return &___ArrayLength_1; }
	inline void set_ArrayLength_1(int32_t value)
	{
		___ArrayLength_1 = value;
	}

	inline static int32_t get_offset_of_Encoded_2() { return static_cast<int32_t>(offsetof(FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE, ___Encoded_2)); }
	inline bool get_Encoded_2() const { return ___Encoded_2; }
	inline bool* get_address_of_Encoded_2() { return &___Encoded_2; }
	inline void set_Encoded_2(bool value)
	{
		___Encoded_2 = value;
	}

	inline static int32_t get_offset_of_CompressedLength_3() { return static_cast<int32_t>(offsetof(FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE, ___CompressedLength_3)); }
	inline int32_t get_CompressedLength_3() const { return ___CompressedLength_3; }
	inline int32_t* get_address_of_CompressedLength_3() { return &___CompressedLength_3; }
	inline void set_CompressedLength_3(int32_t value)
	{
		___CompressedLength_3 = value;
	}

	inline static int32_t get_offset_of_PropertyType_4() { return static_cast<int32_t>(offsetof(FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE, ___PropertyType_4)); }
	inline Il2CppChar get_PropertyType_4() const { return ___PropertyType_4; }
	inline Il2CppChar* get_address_of_PropertyType_4() { return &___PropertyType_4; }
	inline void set_PropertyType_4(Il2CppChar value)
	{
		___PropertyType_4 = value;
	}

	inline static int32_t get_offset_of_Position_5() { return static_cast<int32_t>(offsetof(FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE, ___Position_5)); }
	inline int64_t get_Position_5() const { return ___Position_5; }
	inline int64_t* get_address_of_Position_5() { return &___Position_5; }
	inline void set_Position_5(int64_t value)
	{
		___Position_5 = value;
	}

	inline static int32_t get_offset_of_OriginalPosition_6() { return static_cast<int32_t>(offsetof(FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE, ___OriginalPosition_6)); }
	inline int64_t get_OriginalPosition_6() const { return ___OriginalPosition_6; }
	inline int64_t* get_address_of_OriginalPosition_6() { return &___OriginalPosition_6; }
	inline void set_OriginalPosition_6(int64_t value)
	{
		___OriginalPosition_6 = value;
	}

	inline static int32_t get_offset_of_DecodedBinaryReader_7() { return static_cast<int32_t>(offsetof(FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE, ___DecodedBinaryReader_7)); }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * get_DecodedBinaryReader_7() const { return ___DecodedBinaryReader_7; }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 ** get_address_of_DecodedBinaryReader_7() { return &___DecodedBinaryReader_7; }
	inline void set_DecodedBinaryReader_7(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * value)
	{
		___DecodedBinaryReader_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DecodedBinaryReader_7), (void*)value);
	}

	inline static int32_t get_offset_of_DecodedMemoryStream_8() { return static_cast<int32_t>(offsetof(FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE, ___DecodedMemoryStream_8)); }
	inline MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * get_DecodedMemoryStream_8() const { return ___DecodedMemoryStream_8; }
	inline MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C ** get_address_of_DecodedMemoryStream_8() { return &___DecodedMemoryStream_8; }
	inline void set_DecodedMemoryStream_8(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * value)
	{
		___DecodedMemoryStream_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DecodedMemoryStream_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TriLibCore.Fbx.FBXProperty
struct FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Decoded_0;
	int32_t ___ArrayLength_1;
	int32_t ___Encoded_2;
	int32_t ___CompressedLength_3;
	uint8_t ___PropertyType_4;
	int64_t ___Position_5;
	int64_t ___OriginalPosition_6;
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___DecodedBinaryReader_7;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * ___DecodedMemoryStream_8;
};
// Native definition for COM marshalling of TriLibCore.Fbx.FBXProperty
struct FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Decoded_0;
	int32_t ___ArrayLength_1;
	int32_t ___Encoded_2;
	int32_t ___CompressedLength_3;
	uint8_t ___PropertyType_4;
	int64_t ___Position_5;
	int64_t ___OriginalPosition_6;
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___DecodedBinaryReader_7;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * ___DecodedMemoryStream_8;
};

// TriLibCore.Fbx.FbxBaseVisitor`1<TriLibCore.Fbx.ASCII.FBXNodeResult>
struct  FbxBaseVisitor_1_t06E2C03CA573759A7F77C796406CC9474C43E318  : public AbstractParseTreeVisitor_1_t624BB8E68BC13A658452CC29C77A9DD0902636A3
{
public:

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


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
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


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tE0C77A196A84043D212D9734D859F7AF173CF607  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tE0C77A196A84043D212D9734D859F7AF173CF607_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D2456 <PrivateImplementationDetails>::15B580C0404CC1FCF86176BE2C380FBE591D755BC07DCDDC7638DB5C2F4F3155
	__StaticArrayInitTypeSizeU3D2456_t20EC2637A48EFF6BF79B1C2C362913220D82F91E  ___15B580C0404CC1FCF86176BE2C380FBE591D755BC07DCDDC7638DB5C2F4F3155_0;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D1002 <PrivateImplementationDetails>::E6B3F79A69AFCBAE02B9004D85874DA053BC73246695367BED4B3639B3FBC399
	__StaticArrayInitTypeSizeU3D1002_t21C195FA78C083B66A8BF042A05830FF3C45F55C  ___E6B3F79A69AFCBAE02B9004D85874DA053BC73246695367BED4B3639B3FBC399_1;

public:
	inline static int32_t get_offset_of_U315B580C0404CC1FCF86176BE2C380FBE591D755BC07DCDDC7638DB5C2F4F3155_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tE0C77A196A84043D212D9734D859F7AF173CF607_StaticFields, ___15B580C0404CC1FCF86176BE2C380FBE591D755BC07DCDDC7638DB5C2F4F3155_0)); }
	inline __StaticArrayInitTypeSizeU3D2456_t20EC2637A48EFF6BF79B1C2C362913220D82F91E  get_U315B580C0404CC1FCF86176BE2C380FBE591D755BC07DCDDC7638DB5C2F4F3155_0() const { return ___15B580C0404CC1FCF86176BE2C380FBE591D755BC07DCDDC7638DB5C2F4F3155_0; }
	inline __StaticArrayInitTypeSizeU3D2456_t20EC2637A48EFF6BF79B1C2C362913220D82F91E * get_address_of_U315B580C0404CC1FCF86176BE2C380FBE591D755BC07DCDDC7638DB5C2F4F3155_0() { return &___15B580C0404CC1FCF86176BE2C380FBE591D755BC07DCDDC7638DB5C2F4F3155_0; }
	inline void set_U315B580C0404CC1FCF86176BE2C380FBE591D755BC07DCDDC7638DB5C2F4F3155_0(__StaticArrayInitTypeSizeU3D2456_t20EC2637A48EFF6BF79B1C2C362913220D82F91E  value)
	{
		___15B580C0404CC1FCF86176BE2C380FBE591D755BC07DCDDC7638DB5C2F4F3155_0 = value;
	}

	inline static int32_t get_offset_of_E6B3F79A69AFCBAE02B9004D85874DA053BC73246695367BED4B3639B3FBC399_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tE0C77A196A84043D212D9734D859F7AF173CF607_StaticFields, ___E6B3F79A69AFCBAE02B9004D85874DA053BC73246695367BED4B3639B3FBC399_1)); }
	inline __StaticArrayInitTypeSizeU3D1002_t21C195FA78C083B66A8BF042A05830FF3C45F55C  get_E6B3F79A69AFCBAE02B9004D85874DA053BC73246695367BED4B3639B3FBC399_1() const { return ___E6B3F79A69AFCBAE02B9004D85874DA053BC73246695367BED4B3639B3FBC399_1; }
	inline __StaticArrayInitTypeSizeU3D1002_t21C195FA78C083B66A8BF042A05830FF3C45F55C * get_address_of_E6B3F79A69AFCBAE02B9004D85874DA053BC73246695367BED4B3639B3FBC399_1() { return &___E6B3F79A69AFCBAE02B9004D85874DA053BC73246695367BED4B3639B3FBC399_1; }
	inline void set_E6B3F79A69AFCBAE02B9004D85874DA053BC73246695367BED4B3639B3FBC399_1(__StaticArrayInitTypeSizeU3D1002_t21C195FA78C083B66A8BF042A05830FF3C45F55C  value)
	{
		___E6B3F79A69AFCBAE02B9004D85874DA053BC73246695367BED4B3639B3FBC399_1 = value;
	}
};


// Antlr4.Runtime.Atn.ATNDeserializer
struct  ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C  : public RuntimeObject
{
public:
	// Antlr4.Runtime.Atn.ATNDeserializationOptions Antlr4.Runtime.Atn.ATNDeserializer::deserializationOptions
	ATNDeserializationOptions_t253A84322E1EDB0AAB517409031C6B944ED871B5 * ___deserializationOptions_5;
	// System.Guid Antlr4.Runtime.Atn.ATNDeserializer::uuid
	Guid_t  ___uuid_6;
	// System.Char[] Antlr4.Runtime.Atn.ATNDeserializer::data
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___data_7;
	// System.Int32 Antlr4.Runtime.Atn.ATNDeserializer::p
	int32_t ___p_8;

public:
	inline static int32_t get_offset_of_deserializationOptions_5() { return static_cast<int32_t>(offsetof(ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C, ___deserializationOptions_5)); }
	inline ATNDeserializationOptions_t253A84322E1EDB0AAB517409031C6B944ED871B5 * get_deserializationOptions_5() const { return ___deserializationOptions_5; }
	inline ATNDeserializationOptions_t253A84322E1EDB0AAB517409031C6B944ED871B5 ** get_address_of_deserializationOptions_5() { return &___deserializationOptions_5; }
	inline void set_deserializationOptions_5(ATNDeserializationOptions_t253A84322E1EDB0AAB517409031C6B944ED871B5 * value)
	{
		___deserializationOptions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deserializationOptions_5), (void*)value);
	}

	inline static int32_t get_offset_of_uuid_6() { return static_cast<int32_t>(offsetof(ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C, ___uuid_6)); }
	inline Guid_t  get_uuid_6() const { return ___uuid_6; }
	inline Guid_t * get_address_of_uuid_6() { return &___uuid_6; }
	inline void set_uuid_6(Guid_t  value)
	{
		___uuid_6 = value;
	}

	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C, ___data_7)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_data_7() const { return ___data_7; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_7), (void*)value);
	}

	inline static int32_t get_offset_of_p_8() { return static_cast<int32_t>(offsetof(ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C, ___p_8)); }
	inline int32_t get_p_8() const { return ___p_8; }
	inline int32_t* get_address_of_p_8() { return &___p_8; }
	inline void set_p_8(int32_t value)
	{
		___p_8 = value;
	}
};

struct ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C_StaticFields
{
public:
	// System.Int32 Antlr4.Runtime.Atn.ATNDeserializer::SerializedVersion
	int32_t ___SerializedVersion_0;
	// System.Guid Antlr4.Runtime.Atn.ATNDeserializer::BaseSerializedUuid
	Guid_t  ___BaseSerializedUuid_1;
	// System.Guid Antlr4.Runtime.Atn.ATNDeserializer::AddedUnicodeSmp
	Guid_t  ___AddedUnicodeSmp_2;
	// System.Collections.Generic.IList`1<System.Guid> Antlr4.Runtime.Atn.ATNDeserializer::SupportedUuids
	RuntimeObject* ___SupportedUuids_3;
	// System.Guid Antlr4.Runtime.Atn.ATNDeserializer::SerializedUuid
	Guid_t  ___SerializedUuid_4;

public:
	inline static int32_t get_offset_of_SerializedVersion_0() { return static_cast<int32_t>(offsetof(ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C_StaticFields, ___SerializedVersion_0)); }
	inline int32_t get_SerializedVersion_0() const { return ___SerializedVersion_0; }
	inline int32_t* get_address_of_SerializedVersion_0() { return &___SerializedVersion_0; }
	inline void set_SerializedVersion_0(int32_t value)
	{
		___SerializedVersion_0 = value;
	}

	inline static int32_t get_offset_of_BaseSerializedUuid_1() { return static_cast<int32_t>(offsetof(ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C_StaticFields, ___BaseSerializedUuid_1)); }
	inline Guid_t  get_BaseSerializedUuid_1() const { return ___BaseSerializedUuid_1; }
	inline Guid_t * get_address_of_BaseSerializedUuid_1() { return &___BaseSerializedUuid_1; }
	inline void set_BaseSerializedUuid_1(Guid_t  value)
	{
		___BaseSerializedUuid_1 = value;
	}

	inline static int32_t get_offset_of_AddedUnicodeSmp_2() { return static_cast<int32_t>(offsetof(ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C_StaticFields, ___AddedUnicodeSmp_2)); }
	inline Guid_t  get_AddedUnicodeSmp_2() const { return ___AddedUnicodeSmp_2; }
	inline Guid_t * get_address_of_AddedUnicodeSmp_2() { return &___AddedUnicodeSmp_2; }
	inline void set_AddedUnicodeSmp_2(Guid_t  value)
	{
		___AddedUnicodeSmp_2 = value;
	}

	inline static int32_t get_offset_of_SupportedUuids_3() { return static_cast<int32_t>(offsetof(ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C_StaticFields, ___SupportedUuids_3)); }
	inline RuntimeObject* get_SupportedUuids_3() const { return ___SupportedUuids_3; }
	inline RuntimeObject** get_address_of_SupportedUuids_3() { return &___SupportedUuids_3; }
	inline void set_SupportedUuids_3(RuntimeObject* value)
	{
		___SupportedUuids_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SupportedUuids_3), (void*)value);
	}

	inline static int32_t get_offset_of_SerializedUuid_4() { return static_cast<int32_t>(offsetof(ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C_StaticFields, ___SerializedUuid_4)); }
	inline Guid_t  get_SerializedUuid_4() const { return ___SerializedUuid_4; }
	inline Guid_t * get_address_of_SerializedUuid_4() { return &___SerializedUuid_4; }
	inline void set_SerializedUuid_4(Guid_t  value)
	{
		___SerializedUuid_4 = value;
	}
};


// Antlr4.Runtime.Atn.ATNType
struct  ATNType_tFA4B578B673261FC412756B24686523854DC3BFF 
{
public:
	// System.Int32 Antlr4.Runtime.Atn.ATNType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ATNType_tFA4B578B673261FC412756B24686523854DC3BFF, ___value___2)); }
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


// System.IO.MemoryStream
struct  MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____buffer_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C, ____lastReadTask_14)); }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_t640F0CBB720BB9CD14B90B7B81624471A9F56D87 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_14), (void*)value);
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


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// TriLibCore.Fbx.ASCII.FBXDocumentVisitor
struct  FBXDocumentVisitor_tE80B6B9D96BA7C9ADA919FC4579CF86A45133DF0  : public FbxBaseVisitor_1_t06E2C03CA573759A7F77C796406CC9474C43E318
{
public:
	// TriLibCore.ReaderBase TriLibCore.Fbx.ASCII.FBXDocumentVisitor::_reader
	ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * ____reader_0;
	// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.ASCII.FBXDocumentVisitor::_processor
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ____processor_1;
	// TriLibCore.Fbx.ASCII.FBXNodesCounter TriLibCore.Fbx.ASCII.FBXDocumentVisitor::NodesCounter
	FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE * ___NodesCounter_2;

public:
	inline static int32_t get_offset_of__reader_0() { return static_cast<int32_t>(offsetof(FBXDocumentVisitor_tE80B6B9D96BA7C9ADA919FC4579CF86A45133DF0, ____reader_0)); }
	inline ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * get__reader_0() const { return ____reader_0; }
	inline ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F ** get_address_of__reader_0() { return &____reader_0; }
	inline void set__reader_0(ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * value)
	{
		____reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reader_0), (void*)value);
	}

	inline static int32_t get_offset_of__processor_1() { return static_cast<int32_t>(offsetof(FBXDocumentVisitor_tE80B6B9D96BA7C9ADA919FC4579CF86A45133DF0, ____processor_1)); }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * get__processor_1() const { return ____processor_1; }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E ** get_address_of__processor_1() { return &____processor_1; }
	inline void set__processor_1(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * value)
	{
		____processor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____processor_1), (void*)value);
	}

	inline static int32_t get_offset_of_NodesCounter_2() { return static_cast<int32_t>(offsetof(FBXDocumentVisitor_tE80B6B9D96BA7C9ADA919FC4579CF86A45133DF0, ___NodesCounter_2)); }
	inline FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE * get_NodesCounter_2() const { return ___NodesCounter_2; }
	inline FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE ** get_address_of_NodesCounter_2() { return &___NodesCounter_2; }
	inline void set_NodesCounter_2(FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE * value)
	{
		___NodesCounter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NodesCounter_2), (void*)value);
	}
};


// TriLibCore.Fbx.FBXAccessMode
struct  FBXAccessMode_t4F52EFB50E7E24D02AE55A8A610E332C0135A64C 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXAccessMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXAccessMode_t4F52EFB50E7E24D02AE55A8A610E332C0135A64C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXAlphaSource
struct  FBXAlphaSource_tC4EEA53661127FEF51C03ECBD62388878295EBA0 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXAlphaSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXAlphaSource_tC4EEA53661127FEF51C03ECBD62388878295EBA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXAnimationLayerBlendMode
struct  FBXAnimationLayerBlendMode_t43A96CFC88663A850B370975558D798CC1FE64A0 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXAnimationLayerBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXAnimationLayerBlendMode_t43A96CFC88663A850B370975558D798CC1FE64A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXBlendMode
struct  FBXBlendMode_t5F2DA0D2784F91DEF893F4200FFEE0B4B1E08F54 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXBlendMode_t5F2DA0D2784F91DEF893F4200FFEE0B4B1E08F54, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXInheritType
struct  FBXInheritType_t3B449B673CEA8EE1452980325D726C37DF9A1A9B 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXInheritType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXInheritType_t3B449B673CEA8EE1452980325D726C37DF9A1A9B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXInterlaceMode
struct  FBXInterlaceMode_tF6A8A7A24F8D9D27FEBF1C0B5C6DE48BFC82CF8A 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXInterlaceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXInterlaceMode_tF6A8A7A24F8D9D27FEBF1C0B5C6DE48BFC82CF8A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXNode
struct  FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD 
{
public:
	// System.String TriLibCore.Fbx.FBXNode::Name
	String_t* ___Name_0;
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.FBXNode::Properties
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ___Properties_1;
	// System.Int32 TriLibCore.Fbx.FBXNode::NodesCount
	int32_t ___NodesCount_2;
	// System.Int32 TriLibCore.Fbx.FBXNode::NameHashCode
	int32_t ___NameHashCode_3;
	// System.Int32 TriLibCore.Fbx.FBXNode::NextNodeIndex
	int32_t ___NextNodeIndex_4;
	// System.Int32 TriLibCore.Fbx.FBXNode::FirstNodeIndex
	int32_t ___FirstNodeIndex_5;
	// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.FBXNode::_processor
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ____processor_6;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Properties_1() { return static_cast<int32_t>(offsetof(FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD, ___Properties_1)); }
	inline FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  get_Properties_1() const { return ___Properties_1; }
	inline FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * get_address_of_Properties_1() { return &___Properties_1; }
	inline void set_Properties_1(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  value)
	{
		___Properties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Properties_1))->____processor_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Properties_1))->____context_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_NodesCount_2() { return static_cast<int32_t>(offsetof(FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD, ___NodesCount_2)); }
	inline int32_t get_NodesCount_2() const { return ___NodesCount_2; }
	inline int32_t* get_address_of_NodesCount_2() { return &___NodesCount_2; }
	inline void set_NodesCount_2(int32_t value)
	{
		___NodesCount_2 = value;
	}

	inline static int32_t get_offset_of_NameHashCode_3() { return static_cast<int32_t>(offsetof(FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD, ___NameHashCode_3)); }
	inline int32_t get_NameHashCode_3() const { return ___NameHashCode_3; }
	inline int32_t* get_address_of_NameHashCode_3() { return &___NameHashCode_3; }
	inline void set_NameHashCode_3(int32_t value)
	{
		___NameHashCode_3 = value;
	}

	inline static int32_t get_offset_of_NextNodeIndex_4() { return static_cast<int32_t>(offsetof(FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD, ___NextNodeIndex_4)); }
	inline int32_t get_NextNodeIndex_4() const { return ___NextNodeIndex_4; }
	inline int32_t* get_address_of_NextNodeIndex_4() { return &___NextNodeIndex_4; }
	inline void set_NextNodeIndex_4(int32_t value)
	{
		___NextNodeIndex_4 = value;
	}

	inline static int32_t get_offset_of_FirstNodeIndex_5() { return static_cast<int32_t>(offsetof(FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD, ___FirstNodeIndex_5)); }
	inline int32_t get_FirstNodeIndex_5() const { return ___FirstNodeIndex_5; }
	inline int32_t* get_address_of_FirstNodeIndex_5() { return &___FirstNodeIndex_5; }
	inline void set_FirstNodeIndex_5(int32_t value)
	{
		___FirstNodeIndex_5 = value;
	}

	inline static int32_t get_offset_of__processor_6() { return static_cast<int32_t>(offsetof(FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD, ____processor_6)); }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * get__processor_6() const { return ____processor_6; }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E ** get_address_of__processor_6() { return &____processor_6; }
	inline void set__processor_6(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * value)
	{
		____processor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____processor_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TriLibCore.Fbx.FBXNode
struct FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD_marshaled_pinvoke
{
	char* ___Name_0;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshaled_pinvoke ___Properties_1;
	int32_t ___NodesCount_2;
	int32_t ___NameHashCode_3;
	int32_t ___NextNodeIndex_4;
	int32_t ___FirstNodeIndex_5;
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ____processor_6;
};
// Native definition for COM marshalling of TriLibCore.Fbx.FBXNode
struct FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD_marshaled_com
{
	Il2CppChar* ___Name_0;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshaled_com ___Properties_1;
	int32_t ___NodesCount_2;
	int32_t ___NameHashCode_3;
	int32_t ___NextNodeIndex_4;
	int32_t ___FirstNodeIndex_5;
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ____processor_6;
};

// TriLibCore.Fbx.FBXObjectType
struct  FBXObjectType_tED68734E7C22BA6D56D8C38AE348EF91CAD77089 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXObjectType_tED68734E7C22BA6D56D8C38AE348EF91CAD77089, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXRotationAccumulationOrder
struct  FBXRotationAccumulationOrder_t6B1D2B8CB2E86EE2CAD9C9645CC826E24CDFF44F 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXRotationAccumulationOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXRotationAccumulationOrder_t6B1D2B8CB2E86EE2CAD9C9645CC826E24CDFF44F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXRotationOrder
struct  FBXRotationOrder_tBFB108AB90447B8F2E258FCA0F44CBDCA5E95C9E 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXRotationOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXRotationOrder_tBFB108AB90447B8F2E258FCA0F44CBDCA5E95C9E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXScaleAccumulationMode
struct  FBXScaleAccumulationMode_t77D1AD591385BB23EEEA92BA4F97EE25BEFED8F1 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXScaleAccumulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXScaleAccumulationMode_t77D1AD591385BB23EEEA92BA4F97EE25BEFED8F1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXTextureBlendMode
struct  FBXTextureBlendMode_tD590073510A379A9530EFCBE6A7E70AF7C821067 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXTextureBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXTextureBlendMode_tD590073510A379A9530EFCBE6A7E70AF7C821067, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXTextureUse6
struct  FBXTextureUse6_t78BC4541187E1485F8E62EFCAD8FA92FCADE6EAE 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXTextureUse6::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXTextureUse6_t78BC4541187E1485F8E62EFCAD8FA92FCADE6EAE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXUnifiedMappingType
struct  FBXUnifiedMappingType_tF50DCB8770B6D58C4F0A33AD449E72AD584DABF2 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXUnifiedMappingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXUnifiedMappingType_tF50DCB8770B6D58C4F0A33AD449E72AD584DABF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXUpVector
struct  FBXUpVector_t25E0AE76EB79FAFE6B216E51B48F23519B5E98CC 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXUpVector::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXUpVector_t25E0AE76EB79FAFE6B216E51B48F23519B5E98CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FBXWrapMode
struct  FBXWrapMode_t1C0A6990D88382408F16B4C1D50E6E53396DE17D 
{
public:
	// System.Int32 TriLibCore.Fbx.FBXWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FBXWrapMode_t1C0A6990D88382408F16B4C1D50E6E53396DE17D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriLibCore.Fbx.FbxLexer
struct  FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920  : public Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7
{
public:

public:
};

struct FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields
{
public:
	// Antlr4.Runtime.Dfa.DFA[] TriLibCore.Fbx.FbxLexer::decisionToDFA
	DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* ___decisionToDFA_18;
	// Antlr4.Runtime.Atn.PredictionContextCache TriLibCore.Fbx.FbxLexer::sharedContextCache
	PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * ___sharedContextCache_19;
	// System.String[] TriLibCore.Fbx.FbxLexer::channelNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channelNames_20;
	// System.String[] TriLibCore.Fbx.FbxLexer::modeNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___modeNames_21;
	// System.String[] TriLibCore.Fbx.FbxLexer::ruleNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___ruleNames_22;
	// System.String[] TriLibCore.Fbx.FbxLexer::_LiteralNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____LiteralNames_23;
	// System.String[] TriLibCore.Fbx.FbxLexer::_SymbolicNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____SymbolicNames_24;
	// Antlr4.Runtime.IVocabulary TriLibCore.Fbx.FbxLexer::DefaultVocabulary
	RuntimeObject* ___DefaultVocabulary_25;
	// System.Char[] TriLibCore.Fbx.FbxLexer::_serializedATN
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____serializedATN_26;
	// Antlr4.Runtime.Atn.ATN TriLibCore.Fbx.FbxLexer::_ATN
	ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * ____ATN_27;

public:
	inline static int32_t get_offset_of_decisionToDFA_18() { return static_cast<int32_t>(offsetof(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields, ___decisionToDFA_18)); }
	inline DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* get_decisionToDFA_18() const { return ___decisionToDFA_18; }
	inline DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540** get_address_of_decisionToDFA_18() { return &___decisionToDFA_18; }
	inline void set_decisionToDFA_18(DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* value)
	{
		___decisionToDFA_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decisionToDFA_18), (void*)value);
	}

	inline static int32_t get_offset_of_sharedContextCache_19() { return static_cast<int32_t>(offsetof(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields, ___sharedContextCache_19)); }
	inline PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * get_sharedContextCache_19() const { return ___sharedContextCache_19; }
	inline PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D ** get_address_of_sharedContextCache_19() { return &___sharedContextCache_19; }
	inline void set_sharedContextCache_19(PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * value)
	{
		___sharedContextCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedContextCache_19), (void*)value);
	}

	inline static int32_t get_offset_of_channelNames_20() { return static_cast<int32_t>(offsetof(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields, ___channelNames_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_channelNames_20() const { return ___channelNames_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_channelNames_20() { return &___channelNames_20; }
	inline void set_channelNames_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___channelNames_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelNames_20), (void*)value);
	}

	inline static int32_t get_offset_of_modeNames_21() { return static_cast<int32_t>(offsetof(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields, ___modeNames_21)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_modeNames_21() const { return ___modeNames_21; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_modeNames_21() { return &___modeNames_21; }
	inline void set_modeNames_21(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___modeNames_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modeNames_21), (void*)value);
	}

	inline static int32_t get_offset_of_ruleNames_22() { return static_cast<int32_t>(offsetof(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields, ___ruleNames_22)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_ruleNames_22() const { return ___ruleNames_22; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_ruleNames_22() { return &___ruleNames_22; }
	inline void set_ruleNames_22(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___ruleNames_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ruleNames_22), (void*)value);
	}

	inline static int32_t get_offset_of__LiteralNames_23() { return static_cast<int32_t>(offsetof(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields, ____LiteralNames_23)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__LiteralNames_23() const { return ____LiteralNames_23; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__LiteralNames_23() { return &____LiteralNames_23; }
	inline void set__LiteralNames_23(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____LiteralNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____LiteralNames_23), (void*)value);
	}

	inline static int32_t get_offset_of__SymbolicNames_24() { return static_cast<int32_t>(offsetof(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields, ____SymbolicNames_24)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__SymbolicNames_24() const { return ____SymbolicNames_24; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__SymbolicNames_24() { return &____SymbolicNames_24; }
	inline void set__SymbolicNames_24(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____SymbolicNames_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SymbolicNames_24), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultVocabulary_25() { return static_cast<int32_t>(offsetof(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields, ___DefaultVocabulary_25)); }
	inline RuntimeObject* get_DefaultVocabulary_25() const { return ___DefaultVocabulary_25; }
	inline RuntimeObject** get_address_of_DefaultVocabulary_25() { return &___DefaultVocabulary_25; }
	inline void set_DefaultVocabulary_25(RuntimeObject* value)
	{
		___DefaultVocabulary_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultVocabulary_25), (void*)value);
	}

	inline static int32_t get_offset_of__serializedATN_26() { return static_cast<int32_t>(offsetof(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields, ____serializedATN_26)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__serializedATN_26() const { return ____serializedATN_26; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__serializedATN_26() { return &____serializedATN_26; }
	inline void set__serializedATN_26(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____serializedATN_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializedATN_26), (void*)value);
	}

	inline static int32_t get_offset_of__ATN_27() { return static_cast<int32_t>(offsetof(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields, ____ATN_27)); }
	inline ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * get__ATN_27() const { return ____ATN_27; }
	inline ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 ** get_address_of__ATN_27() { return &____ATN_27; }
	inline void set__ATN_27(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * value)
	{
		____ATN_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ATN_27), (void*)value);
	}
};


// TriLibCore.Fbx.FbxParser
struct  FbxParser_t65668BC26E1BE49573365391ACC594D199830A15  : public Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87
{
public:

public:
};

struct FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields
{
public:
	// Antlr4.Runtime.Dfa.DFA[] TriLibCore.Fbx.FbxParser::decisionToDFA
	DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* ___decisionToDFA_14;
	// Antlr4.Runtime.Atn.PredictionContextCache TriLibCore.Fbx.FbxParser::sharedContextCache
	PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * ___sharedContextCache_15;
	// System.String[] TriLibCore.Fbx.FbxParser::ruleNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___ruleNames_16;
	// System.String[] TriLibCore.Fbx.FbxParser::_LiteralNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____LiteralNames_17;
	// System.String[] TriLibCore.Fbx.FbxParser::_SymbolicNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____SymbolicNames_18;
	// Antlr4.Runtime.IVocabulary TriLibCore.Fbx.FbxParser::DefaultVocabulary
	RuntimeObject* ___DefaultVocabulary_19;
	// System.Char[] TriLibCore.Fbx.FbxParser::_serializedATN
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____serializedATN_20;
	// Antlr4.Runtime.Atn.ATN TriLibCore.Fbx.FbxParser::_ATN
	ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * ____ATN_21;

public:
	inline static int32_t get_offset_of_decisionToDFA_14() { return static_cast<int32_t>(offsetof(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields, ___decisionToDFA_14)); }
	inline DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* get_decisionToDFA_14() const { return ___decisionToDFA_14; }
	inline DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540** get_address_of_decisionToDFA_14() { return &___decisionToDFA_14; }
	inline void set_decisionToDFA_14(DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* value)
	{
		___decisionToDFA_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decisionToDFA_14), (void*)value);
	}

	inline static int32_t get_offset_of_sharedContextCache_15() { return static_cast<int32_t>(offsetof(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields, ___sharedContextCache_15)); }
	inline PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * get_sharedContextCache_15() const { return ___sharedContextCache_15; }
	inline PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D ** get_address_of_sharedContextCache_15() { return &___sharedContextCache_15; }
	inline void set_sharedContextCache_15(PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * value)
	{
		___sharedContextCache_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedContextCache_15), (void*)value);
	}

	inline static int32_t get_offset_of_ruleNames_16() { return static_cast<int32_t>(offsetof(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields, ___ruleNames_16)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_ruleNames_16() const { return ___ruleNames_16; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_ruleNames_16() { return &___ruleNames_16; }
	inline void set_ruleNames_16(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___ruleNames_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ruleNames_16), (void*)value);
	}

	inline static int32_t get_offset_of__LiteralNames_17() { return static_cast<int32_t>(offsetof(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields, ____LiteralNames_17)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__LiteralNames_17() const { return ____LiteralNames_17; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__LiteralNames_17() { return &____LiteralNames_17; }
	inline void set__LiteralNames_17(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____LiteralNames_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____LiteralNames_17), (void*)value);
	}

	inline static int32_t get_offset_of__SymbolicNames_18() { return static_cast<int32_t>(offsetof(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields, ____SymbolicNames_18)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__SymbolicNames_18() const { return ____SymbolicNames_18; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__SymbolicNames_18() { return &____SymbolicNames_18; }
	inline void set__SymbolicNames_18(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____SymbolicNames_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SymbolicNames_18), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultVocabulary_19() { return static_cast<int32_t>(offsetof(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields, ___DefaultVocabulary_19)); }
	inline RuntimeObject* get_DefaultVocabulary_19() const { return ___DefaultVocabulary_19; }
	inline RuntimeObject** get_address_of_DefaultVocabulary_19() { return &___DefaultVocabulary_19; }
	inline void set_DefaultVocabulary_19(RuntimeObject* value)
	{
		___DefaultVocabulary_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultVocabulary_19), (void*)value);
	}

	inline static int32_t get_offset_of__serializedATN_20() { return static_cast<int32_t>(offsetof(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields, ____serializedATN_20)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__serializedATN_20() const { return ____serializedATN_20; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__serializedATN_20() { return &____serializedATN_20; }
	inline void set__serializedATN_20(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____serializedATN_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializedATN_20), (void*)value);
	}

	inline static int32_t get_offset_of__ATN_21() { return static_cast<int32_t>(offsetof(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields, ____ATN_21)); }
	inline ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * get__ATN_21() const { return ____ATN_21; }
	inline ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 ** get_address_of__ATN_21() { return &____ATN_21; }
	inline void set__ATN_21(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * value)
	{
		____ATN_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ATN_21), (void*)value);
	}
};


// TriLibCore.Fbx.FbxParser_ArrayContext
struct  ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0  : public ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE
{
public:

public:
};


// TriLibCore.Fbx.FbxParser_DataListContext
struct  DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1  : public ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE
{
public:

public:
};


// TriLibCore.Fbx.FbxParser_DataValueContext
struct  DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0  : public ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE
{
public:

public:
};


// TriLibCore.Fbx.FbxParser_DocumentContext
struct  DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634  : public ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE
{
public:

public:
};


// TriLibCore.Fbx.FbxParser_NodeContext
struct  NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10  : public ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE
{
public:

public:
};


// TriLibCore.Fbx.FbxParser_NodeListContext
struct  NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753  : public ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE
{
public:

public:
};


// TriLibCore.Fbx.PropertyAccessorByte
struct  PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5  : public RuntimeObject
{
public:
	// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.PropertyAccessorByte::_processor
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ____processor_0;
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.PropertyAccessorByte::_properties
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ____properties_1;
	// System.Boolean TriLibCore.Fbx.PropertyAccessorByte::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__processor_0() { return static_cast<int32_t>(offsetof(PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5, ____processor_0)); }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * get__processor_0() const { return ____processor_0; }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E ** get_address_of__processor_0() { return &____processor_0; }
	inline void set__processor_0(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * value)
	{
		____processor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____processor_0), (void*)value);
	}

	inline static int32_t get_offset_of__properties_1() { return static_cast<int32_t>(offsetof(PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5, ____properties_1)); }
	inline FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  get__properties_1() const { return ____properties_1; }
	inline FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * get_address_of__properties_1() { return &____properties_1; }
	inline void set__properties_1(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  value)
	{
		____properties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____properties_1))->____processor_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____properties_1))->____context_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5, ___U3CIsReadOnlyU3Ek__BackingField_2)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_2() const { return ___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_2() { return &___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_2(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_2 = value;
	}
};


// TriLibCore.Fbx.PropertyAccessorFloat
struct  PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E  : public RuntimeObject
{
public:
	// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.PropertyAccessorFloat::_processor
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ____processor_0;
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.PropertyAccessorFloat::_properties
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ____properties_1;
	// System.Boolean TriLibCore.Fbx.PropertyAccessorFloat::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__processor_0() { return static_cast<int32_t>(offsetof(PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E, ____processor_0)); }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * get__processor_0() const { return ____processor_0; }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E ** get_address_of__processor_0() { return &____processor_0; }
	inline void set__processor_0(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * value)
	{
		____processor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____processor_0), (void*)value);
	}

	inline static int32_t get_offset_of__properties_1() { return static_cast<int32_t>(offsetof(PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E, ____properties_1)); }
	inline FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  get__properties_1() const { return ____properties_1; }
	inline FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * get_address_of__properties_1() { return &____properties_1; }
	inline void set__properties_1(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  value)
	{
		____properties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____properties_1))->____processor_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____properties_1))->____context_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E, ___U3CIsReadOnlyU3Ek__BackingField_2)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_2() const { return ___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_2() { return &___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_2(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_2 = value;
	}
};


// TriLibCore.Fbx.PropertyAccessorInt
struct  PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC  : public RuntimeObject
{
public:
	// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.PropertyAccessorInt::_processor
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ____processor_0;
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.PropertyAccessorInt::_properties
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ____properties_1;
	// System.Boolean TriLibCore.Fbx.PropertyAccessorInt::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__processor_0() { return static_cast<int32_t>(offsetof(PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC, ____processor_0)); }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * get__processor_0() const { return ____processor_0; }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E ** get_address_of__processor_0() { return &____processor_0; }
	inline void set__processor_0(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * value)
	{
		____processor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____processor_0), (void*)value);
	}

	inline static int32_t get_offset_of__properties_1() { return static_cast<int32_t>(offsetof(PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC, ____properties_1)); }
	inline FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  get__properties_1() const { return ____properties_1; }
	inline FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * get_address_of__properties_1() { return &____properties_1; }
	inline void set__properties_1(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  value)
	{
		____properties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____properties_1))->____processor_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____properties_1))->____context_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC, ___U3CIsReadOnlyU3Ek__BackingField_2)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_2() const { return ___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_2() { return &___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_2(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_2 = value;
	}
};


// TriLibCore.Fbx.PropertyAccessorLong
struct  PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F  : public RuntimeObject
{
public:
	// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.PropertyAccessorLong::_processor
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ____processor_0;
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.PropertyAccessorLong::_properties
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ____properties_1;
	// System.Boolean TriLibCore.Fbx.PropertyAccessorLong::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__processor_0() { return static_cast<int32_t>(offsetof(PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F, ____processor_0)); }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * get__processor_0() const { return ____processor_0; }
	inline FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E ** get_address_of__processor_0() { return &____processor_0; }
	inline void set__processor_0(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * value)
	{
		____processor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____processor_0), (void*)value);
	}

	inline static int32_t get_offset_of__properties_1() { return static_cast<int32_t>(offsetof(PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F, ____properties_1)); }
	inline FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  get__properties_1() const { return ____properties_1; }
	inline FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * get_address_of__properties_1() { return &____properties_1; }
	inline void set__properties_1(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  value)
	{
		____properties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____properties_1))->____processor_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____properties_1))->____context_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F, ___U3CIsReadOnlyU3Ek__BackingField_2)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_2() const { return ___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_2() { return &___U3CIsReadOnlyU3Ek__BackingField_2; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_2(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_2 = value;
	}
};


// TriLibCore.Fbx.Reader.FbxReader
struct  FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F  : public ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F
{
public:
	// System.Byte[] TriLibCore.Fbx.Reader.FbxReader::_fileBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____fileBuffer_12;

public:
	inline static int32_t get_offset_of__fileBuffer_12() { return static_cast<int32_t>(offsetof(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F, ____fileBuffer_12)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__fileBuffer_12() const { return ____fileBuffer_12; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__fileBuffer_12() { return &____fileBuffer_12; }
	inline void set__fileBuffer_12(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____fileBuffer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileBuffer_12), (void*)value);
	}
};

struct FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_StaticFields
{
public:
	// System.Boolean TriLibCore.Fbx.Reader.FbxReader::FBXCompatibilityMode
	bool ___FBXCompatibilityMode_9;
	// System.Boolean TriLibCore.Fbx.Reader.FbxReader::EnableSpecularMaterials
	bool ___EnableSpecularMaterials_10;
	// System.Nullable`1<System.Double> TriLibCore.Fbx.Reader.FbxReader::FBXConversionPrecision
	Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9  ___FBXConversionPrecision_11;

public:
	inline static int32_t get_offset_of_FBXCompatibilityMode_9() { return static_cast<int32_t>(offsetof(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_StaticFields, ___FBXCompatibilityMode_9)); }
	inline bool get_FBXCompatibilityMode_9() const { return ___FBXCompatibilityMode_9; }
	inline bool* get_address_of_FBXCompatibilityMode_9() { return &___FBXCompatibilityMode_9; }
	inline void set_FBXCompatibilityMode_9(bool value)
	{
		___FBXCompatibilityMode_9 = value;
	}

	inline static int32_t get_offset_of_EnableSpecularMaterials_10() { return static_cast<int32_t>(offsetof(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_StaticFields, ___EnableSpecularMaterials_10)); }
	inline bool get_EnableSpecularMaterials_10() const { return ___EnableSpecularMaterials_10; }
	inline bool* get_address_of_EnableSpecularMaterials_10() { return &___EnableSpecularMaterials_10; }
	inline void set_EnableSpecularMaterials_10(bool value)
	{
		___EnableSpecularMaterials_10 = value;
	}

	inline static int32_t get_offset_of_FBXConversionPrecision_11() { return static_cast<int32_t>(offsetof(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_StaticFields, ___FBXConversionPrecision_11)); }
	inline Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9  get_FBXConversionPrecision_11() const { return ___FBXConversionPrecision_11; }
	inline Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9 * get_address_of_FBXConversionPrecision_11() { return &___FBXConversionPrecision_11; }
	inline void set_FBXConversionPrecision_11(Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9  value)
	{
		___FBXConversionPrecision_11 = value;
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


// Antlr4.Runtime.Atn.ATN
struct  ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.ATNState> Antlr4.Runtime.Atn.ATN::states
	RuntimeObject* ___states_0;
	// System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.DecisionState> Antlr4.Runtime.Atn.ATN::decisionToState
	RuntimeObject* ___decisionToState_1;
	// Antlr4.Runtime.Atn.RuleStartState[] Antlr4.Runtime.Atn.ATN::ruleToStartState
	RuleStartStateU5BU5D_t8098C56442280D741EF0FDD791DF6EADCFE4EE1F* ___ruleToStartState_2;
	// Antlr4.Runtime.Atn.RuleStopState[] Antlr4.Runtime.Atn.ATN::ruleToStopState
	RuleStopStateU5BU5D_t6223296DE180B5A0081B944EF7E712B7021B57EE* ___ruleToStopState_3;
	// System.Collections.Generic.IDictionary`2<System.String,Antlr4.Runtime.Atn.TokensStartState> Antlr4.Runtime.Atn.ATN::modeNameToStartState
	RuntimeObject* ___modeNameToStartState_4;
	// Antlr4.Runtime.Atn.ATNType Antlr4.Runtime.Atn.ATN::grammarType
	int32_t ___grammarType_5;
	// System.Int32 Antlr4.Runtime.Atn.ATN::maxTokenType
	int32_t ___maxTokenType_6;
	// System.Int32[] Antlr4.Runtime.Atn.ATN::ruleToTokenType
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___ruleToTokenType_7;
	// Antlr4.Runtime.Atn.ILexerAction[] Antlr4.Runtime.Atn.ATN::lexerActions
	ILexerActionU5BU5D_t21C9200CE1D27B8BE2C783D3B0C3EA3F1DE3B8E2* ___lexerActions_8;
	// System.Collections.Generic.IList`1<Antlr4.Runtime.Atn.TokensStartState> Antlr4.Runtime.Atn.ATN::modeToStartState
	RuntimeObject* ___modeToStartState_9;
	// Antlr4.Runtime.Atn.PredictionContextCache Antlr4.Runtime.Atn.ATN::contextCache
	PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * ___contextCache_10;
	// Antlr4.Runtime.Dfa.DFA[] Antlr4.Runtime.Atn.ATN::decisionToDFA
	DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* ___decisionToDFA_11;
	// Antlr4.Runtime.Dfa.DFA[] Antlr4.Runtime.Atn.ATN::modeToDFA
	DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* ___modeToDFA_12;
	// Antlr4.Runtime.Sharpen.ConcurrentDictionary`2<System.Int32,System.Int32> Antlr4.Runtime.Atn.ATN::LL1Table
	ConcurrentDictionary_2_t2CFF995D3A8883C83960FEF89312FE5E562D9412 * ___LL1Table_13;

public:
	inline static int32_t get_offset_of_states_0() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___states_0)); }
	inline RuntimeObject* get_states_0() const { return ___states_0; }
	inline RuntimeObject** get_address_of_states_0() { return &___states_0; }
	inline void set_states_0(RuntimeObject* value)
	{
		___states_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___states_0), (void*)value);
	}

	inline static int32_t get_offset_of_decisionToState_1() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___decisionToState_1)); }
	inline RuntimeObject* get_decisionToState_1() const { return ___decisionToState_1; }
	inline RuntimeObject** get_address_of_decisionToState_1() { return &___decisionToState_1; }
	inline void set_decisionToState_1(RuntimeObject* value)
	{
		___decisionToState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decisionToState_1), (void*)value);
	}

	inline static int32_t get_offset_of_ruleToStartState_2() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___ruleToStartState_2)); }
	inline RuleStartStateU5BU5D_t8098C56442280D741EF0FDD791DF6EADCFE4EE1F* get_ruleToStartState_2() const { return ___ruleToStartState_2; }
	inline RuleStartStateU5BU5D_t8098C56442280D741EF0FDD791DF6EADCFE4EE1F** get_address_of_ruleToStartState_2() { return &___ruleToStartState_2; }
	inline void set_ruleToStartState_2(RuleStartStateU5BU5D_t8098C56442280D741EF0FDD791DF6EADCFE4EE1F* value)
	{
		___ruleToStartState_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ruleToStartState_2), (void*)value);
	}

	inline static int32_t get_offset_of_ruleToStopState_3() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___ruleToStopState_3)); }
	inline RuleStopStateU5BU5D_t6223296DE180B5A0081B944EF7E712B7021B57EE* get_ruleToStopState_3() const { return ___ruleToStopState_3; }
	inline RuleStopStateU5BU5D_t6223296DE180B5A0081B944EF7E712B7021B57EE** get_address_of_ruleToStopState_3() { return &___ruleToStopState_3; }
	inline void set_ruleToStopState_3(RuleStopStateU5BU5D_t6223296DE180B5A0081B944EF7E712B7021B57EE* value)
	{
		___ruleToStopState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ruleToStopState_3), (void*)value);
	}

	inline static int32_t get_offset_of_modeNameToStartState_4() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___modeNameToStartState_4)); }
	inline RuntimeObject* get_modeNameToStartState_4() const { return ___modeNameToStartState_4; }
	inline RuntimeObject** get_address_of_modeNameToStartState_4() { return &___modeNameToStartState_4; }
	inline void set_modeNameToStartState_4(RuntimeObject* value)
	{
		___modeNameToStartState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modeNameToStartState_4), (void*)value);
	}

	inline static int32_t get_offset_of_grammarType_5() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___grammarType_5)); }
	inline int32_t get_grammarType_5() const { return ___grammarType_5; }
	inline int32_t* get_address_of_grammarType_5() { return &___grammarType_5; }
	inline void set_grammarType_5(int32_t value)
	{
		___grammarType_5 = value;
	}

	inline static int32_t get_offset_of_maxTokenType_6() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___maxTokenType_6)); }
	inline int32_t get_maxTokenType_6() const { return ___maxTokenType_6; }
	inline int32_t* get_address_of_maxTokenType_6() { return &___maxTokenType_6; }
	inline void set_maxTokenType_6(int32_t value)
	{
		___maxTokenType_6 = value;
	}

	inline static int32_t get_offset_of_ruleToTokenType_7() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___ruleToTokenType_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_ruleToTokenType_7() const { return ___ruleToTokenType_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_ruleToTokenType_7() { return &___ruleToTokenType_7; }
	inline void set_ruleToTokenType_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___ruleToTokenType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ruleToTokenType_7), (void*)value);
	}

	inline static int32_t get_offset_of_lexerActions_8() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___lexerActions_8)); }
	inline ILexerActionU5BU5D_t21C9200CE1D27B8BE2C783D3B0C3EA3F1DE3B8E2* get_lexerActions_8() const { return ___lexerActions_8; }
	inline ILexerActionU5BU5D_t21C9200CE1D27B8BE2C783D3B0C3EA3F1DE3B8E2** get_address_of_lexerActions_8() { return &___lexerActions_8; }
	inline void set_lexerActions_8(ILexerActionU5BU5D_t21C9200CE1D27B8BE2C783D3B0C3EA3F1DE3B8E2* value)
	{
		___lexerActions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lexerActions_8), (void*)value);
	}

	inline static int32_t get_offset_of_modeToStartState_9() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___modeToStartState_9)); }
	inline RuntimeObject* get_modeToStartState_9() const { return ___modeToStartState_9; }
	inline RuntimeObject** get_address_of_modeToStartState_9() { return &___modeToStartState_9; }
	inline void set_modeToStartState_9(RuntimeObject* value)
	{
		___modeToStartState_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modeToStartState_9), (void*)value);
	}

	inline static int32_t get_offset_of_contextCache_10() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___contextCache_10)); }
	inline PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * get_contextCache_10() const { return ___contextCache_10; }
	inline PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D ** get_address_of_contextCache_10() { return &___contextCache_10; }
	inline void set_contextCache_10(PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * value)
	{
		___contextCache_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contextCache_10), (void*)value);
	}

	inline static int32_t get_offset_of_decisionToDFA_11() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___decisionToDFA_11)); }
	inline DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* get_decisionToDFA_11() const { return ___decisionToDFA_11; }
	inline DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540** get_address_of_decisionToDFA_11() { return &___decisionToDFA_11; }
	inline void set_decisionToDFA_11(DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* value)
	{
		___decisionToDFA_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decisionToDFA_11), (void*)value);
	}

	inline static int32_t get_offset_of_modeToDFA_12() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___modeToDFA_12)); }
	inline DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* get_modeToDFA_12() const { return ___modeToDFA_12; }
	inline DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540** get_address_of_modeToDFA_12() { return &___modeToDFA_12; }
	inline void set_modeToDFA_12(DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* value)
	{
		___modeToDFA_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modeToDFA_12), (void*)value);
	}

	inline static int32_t get_offset_of_LL1Table_13() { return static_cast<int32_t>(offsetof(ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51, ___LL1Table_13)); }
	inline ConcurrentDictionary_2_t2CFF995D3A8883C83960FEF89312FE5E562D9412 * get_LL1Table_13() const { return ___LL1Table_13; }
	inline ConcurrentDictionary_2_t2CFF995D3A8883C83960FEF89312FE5E562D9412 ** get_address_of_LL1Table_13() { return &___LL1Table_13; }
	inline void set_LL1Table_13(ConcurrentDictionary_2_t2CFF995D3A8883C83960FEF89312FE5E562D9412 * value)
	{
		___LL1Table_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LL1Table_13), (void*)value);
	}
};


// Antlr4.Runtime.RecognitionException
struct  RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C  : public Exception_t
{
public:
	// Antlr4.Runtime.IRecognizer Antlr4.Runtime.RecognitionException::recognizer
	RuntimeObject* ___recognizer_17;
	// Antlr4.Runtime.RuleContext Antlr4.Runtime.RecognitionException::ctx
	RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790 * ___ctx_18;
	// Antlr4.Runtime.IIntStream Antlr4.Runtime.RecognitionException::input
	RuntimeObject* ___input_19;
	// Antlr4.Runtime.IToken Antlr4.Runtime.RecognitionException::offendingToken
	RuntimeObject* ___offendingToken_20;
	// System.Int32 Antlr4.Runtime.RecognitionException::offendingState
	int32_t ___offendingState_21;

public:
	inline static int32_t get_offset_of_recognizer_17() { return static_cast<int32_t>(offsetof(RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C, ___recognizer_17)); }
	inline RuntimeObject* get_recognizer_17() const { return ___recognizer_17; }
	inline RuntimeObject** get_address_of_recognizer_17() { return &___recognizer_17; }
	inline void set_recognizer_17(RuntimeObject* value)
	{
		___recognizer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizer_17), (void*)value);
	}

	inline static int32_t get_offset_of_ctx_18() { return static_cast<int32_t>(offsetof(RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C, ___ctx_18)); }
	inline RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790 * get_ctx_18() const { return ___ctx_18; }
	inline RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790 ** get_address_of_ctx_18() { return &___ctx_18; }
	inline void set_ctx_18(RuleContext_t000B539B7E7F676B169A1CE037CBB6CB5E8D5790 * value)
	{
		___ctx_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctx_18), (void*)value);
	}

	inline static int32_t get_offset_of_input_19() { return static_cast<int32_t>(offsetof(RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C, ___input_19)); }
	inline RuntimeObject* get_input_19() const { return ___input_19; }
	inline RuntimeObject** get_address_of_input_19() { return &___input_19; }
	inline void set_input_19(RuntimeObject* value)
	{
		___input_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_19), (void*)value);
	}

	inline static int32_t get_offset_of_offendingToken_20() { return static_cast<int32_t>(offsetof(RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C, ___offendingToken_20)); }
	inline RuntimeObject* get_offendingToken_20() const { return ___offendingToken_20; }
	inline RuntimeObject** get_address_of_offendingToken_20() { return &___offendingToken_20; }
	inline void set_offendingToken_20(RuntimeObject* value)
	{
		___offendingToken_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offendingToken_20), (void*)value);
	}

	inline static int32_t get_offset_of_offendingState_21() { return static_cast<int32_t>(offsetof(RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C, ___offendingState_21)); }
	inline int32_t get_offendingState_21() const { return ___offendingState_21; }
	inline int32_t* get_address_of_offendingState_21() { return &___offendingState_21; }
	inline void set_offendingState_21(int32_t value)
	{
		___offendingState_21 = value;
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


// TriLibCore.Fbx.FBXObject
struct  FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152  : public RuntimeObject
{
public:
	// System.String TriLibCore.Fbx.FBXObject::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// TriLibCore.Fbx.FBXDocument TriLibCore.Fbx.FBXObject::<Document>k__BackingField
	FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * ___U3CDocumentU3Ek__BackingField_1;
	// System.Int64 TriLibCore.Fbx.FBXObject::<Id>k__BackingField
	int64_t ___U3CIdU3Ek__BackingField_2;
	// TriLibCore.Fbx.FBXObjectType TriLibCore.Fbx.FBXObject::<ObjectType>k__BackingField
	int32_t ___U3CObjectTypeU3Ek__BackingField_3;
	// System.String TriLibCore.Fbx.FBXObject::<Class>k__BackingField
	String_t* ___U3CClassU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDocumentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152, ___U3CDocumentU3Ek__BackingField_1)); }
	inline FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * get_U3CDocumentU3Ek__BackingField_1() const { return ___U3CDocumentU3Ek__BackingField_1; }
	inline FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 ** get_address_of_U3CDocumentU3Ek__BackingField_1() { return &___U3CDocumentU3Ek__BackingField_1; }
	inline void set_U3CDocumentU3Ek__BackingField_1(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * value)
	{
		___U3CDocumentU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDocumentU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152, ___U3CIdU3Ek__BackingField_2)); }
	inline int64_t get_U3CIdU3Ek__BackingField_2() const { return ___U3CIdU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CIdU3Ek__BackingField_2() { return &___U3CIdU3Ek__BackingField_2; }
	inline void set_U3CIdU3Ek__BackingField_2(int64_t value)
	{
		___U3CIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CObjectTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152, ___U3CObjectTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CObjectTypeU3Ek__BackingField_3() const { return ___U3CObjectTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CObjectTypeU3Ek__BackingField_3() { return &___U3CObjectTypeU3Ek__BackingField_3; }
	inline void set_U3CObjectTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CObjectTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CClassU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152, ___U3CClassU3Ek__BackingField_4)); }
	inline String_t* get_U3CClassU3Ek__BackingField_4() const { return ___U3CClassU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CClassU3Ek__BackingField_4() { return &___U3CClassU3Ek__BackingField_4; }
	inline void set_U3CClassU3Ek__BackingField_4(String_t* value)
	{
		___U3CClassU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClassU3Ek__BackingField_4), (void*)value);
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


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
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


// TriLibCore.Fbx.FBXAnimationLayer
struct  FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100  : public FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152
{
public:
	// TriLibCore.Fbx.FBXAnimationLayerBlendMode TriLibCore.Fbx.FBXAnimationLayer::BlendMode
	int32_t ___BlendMode_5;
	// TriLibCore.Fbx.FBXRotationAccumulationOrder TriLibCore.Fbx.FBXAnimationLayer::RotationAccumulationMode
	int32_t ___RotationAccumulationMode_6;
	// TriLibCore.Fbx.FBXScaleAccumulationMode TriLibCore.Fbx.FBXAnimationLayer::ScaleAccumulationMode
	int32_t ___ScaleAccumulationMode_7;
	// System.Int32 TriLibCore.Fbx.FBXAnimationLayer::LayerId
	int32_t ___LayerId_8;
	// System.Single TriLibCore.Fbx.FBXAnimationLayer::Weight
	float ___Weight_9;
	// System.Boolean TriLibCore.Fbx.FBXAnimationLayer::Mute
	bool ___Mute_10;
	// System.Boolean TriLibCore.Fbx.FBXAnimationLayer::Solo
	bool ___Solo_11;
	// System.Boolean TriLibCore.Fbx.FBXAnimationLayer::Lock
	bool ___Lock_12;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationCurveNode> TriLibCore.Fbx.FBXAnimationLayer::CurveNodes
	RuntimeObject* ___CurveNodes_13;
	// System.Int32 TriLibCore.Fbx.FBXAnimationLayer::CurveNodesCount
	int32_t ___CurveNodesCount_14;
	// TriLibCore.Fbx.FBXAnimationStack TriLibCore.Fbx.FBXAnimationLayer::AnimationStack
	FBXAnimationStack_t27A5BB8F375151605C6C4A5489005540D48C97D3 * ___AnimationStack_15;

public:
	inline static int32_t get_offset_of_BlendMode_5() { return static_cast<int32_t>(offsetof(FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100, ___BlendMode_5)); }
	inline int32_t get_BlendMode_5() const { return ___BlendMode_5; }
	inline int32_t* get_address_of_BlendMode_5() { return &___BlendMode_5; }
	inline void set_BlendMode_5(int32_t value)
	{
		___BlendMode_5 = value;
	}

	inline static int32_t get_offset_of_RotationAccumulationMode_6() { return static_cast<int32_t>(offsetof(FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100, ___RotationAccumulationMode_6)); }
	inline int32_t get_RotationAccumulationMode_6() const { return ___RotationAccumulationMode_6; }
	inline int32_t* get_address_of_RotationAccumulationMode_6() { return &___RotationAccumulationMode_6; }
	inline void set_RotationAccumulationMode_6(int32_t value)
	{
		___RotationAccumulationMode_6 = value;
	}

	inline static int32_t get_offset_of_ScaleAccumulationMode_7() { return static_cast<int32_t>(offsetof(FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100, ___ScaleAccumulationMode_7)); }
	inline int32_t get_ScaleAccumulationMode_7() const { return ___ScaleAccumulationMode_7; }
	inline int32_t* get_address_of_ScaleAccumulationMode_7() { return &___ScaleAccumulationMode_7; }
	inline void set_ScaleAccumulationMode_7(int32_t value)
	{
		___ScaleAccumulationMode_7 = value;
	}

	inline static int32_t get_offset_of_LayerId_8() { return static_cast<int32_t>(offsetof(FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100, ___LayerId_8)); }
	inline int32_t get_LayerId_8() const { return ___LayerId_8; }
	inline int32_t* get_address_of_LayerId_8() { return &___LayerId_8; }
	inline void set_LayerId_8(int32_t value)
	{
		___LayerId_8 = value;
	}

	inline static int32_t get_offset_of_Weight_9() { return static_cast<int32_t>(offsetof(FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100, ___Weight_9)); }
	inline float get_Weight_9() const { return ___Weight_9; }
	inline float* get_address_of_Weight_9() { return &___Weight_9; }
	inline void set_Weight_9(float value)
	{
		___Weight_9 = value;
	}

	inline static int32_t get_offset_of_Mute_10() { return static_cast<int32_t>(offsetof(FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100, ___Mute_10)); }
	inline bool get_Mute_10() const { return ___Mute_10; }
	inline bool* get_address_of_Mute_10() { return &___Mute_10; }
	inline void set_Mute_10(bool value)
	{
		___Mute_10 = value;
	}

	inline static int32_t get_offset_of_Solo_11() { return static_cast<int32_t>(offsetof(FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100, ___Solo_11)); }
	inline bool get_Solo_11() const { return ___Solo_11; }
	inline bool* get_address_of_Solo_11() { return &___Solo_11; }
	inline void set_Solo_11(bool value)
	{
		___Solo_11 = value;
	}

	inline static int32_t get_offset_of_Lock_12() { return static_cast<int32_t>(offsetof(FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100, ___Lock_12)); }
	inline bool get_Lock_12() const { return ___Lock_12; }
	inline bool* get_address_of_Lock_12() { return &___Lock_12; }
	inline void set_Lock_12(bool value)
	{
		___Lock_12 = value;
	}

	inline static int32_t get_offset_of_CurveNodes_13() { return static_cast<int32_t>(offsetof(FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100, ___CurveNodes_13)); }
	inline RuntimeObject* get_CurveNodes_13() const { return ___CurveNodes_13; }
	inline RuntimeObject** get_address_of_CurveNodes_13() { return &___CurveNodes_13; }
	inline void set_CurveNodes_13(RuntimeObject* value)
	{
		___CurveNodes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurveNodes_13), (void*)value);
	}

	inline static int32_t get_offset_of_CurveNodesCount_14() { return static_cast<int32_t>(offsetof(FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100, ___CurveNodesCount_14)); }
	inline int32_t get_CurveNodesCount_14() const { return ___CurveNodesCount_14; }
	inline int32_t* get_address_of_CurveNodesCount_14() { return &___CurveNodesCount_14; }
	inline void set_CurveNodesCount_14(int32_t value)
	{
		___CurveNodesCount_14 = value;
	}

	inline static int32_t get_offset_of_AnimationStack_15() { return static_cast<int32_t>(offsetof(FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100, ___AnimationStack_15)); }
	inline FBXAnimationStack_t27A5BB8F375151605C6C4A5489005540D48C97D3 * get_AnimationStack_15() const { return ___AnimationStack_15; }
	inline FBXAnimationStack_t27A5BB8F375151605C6C4A5489005540D48C97D3 ** get_address_of_AnimationStack_15() { return &___AnimationStack_15; }
	inline void set_AnimationStack_15(FBXAnimationStack_t27A5BB8F375151605C6C4A5489005540D48C97D3 * value)
	{
		___AnimationStack_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimationStack_15), (void*)value);
	}
};


// TriLibCore.Fbx.FBXModel
struct  FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5  : public FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152
{
public:
	// TriLibCore.Fbx.FBXRotationOrder TriLibCore.Fbx.FBXModel::RotationOrder
	int32_t ___RotationOrder_5;
	// TriLibCore.Fbx.FBXInheritType TriLibCore.Fbx.FBXModel::InheritType
	int32_t ___InheritType_6;
	// System.Boolean TriLibCore.Fbx.FBXModel::<Visibility>k__BackingField
	bool ___U3CVisibilityU3Ek__BackingField_7;
	// TriLibCore.Fbx.FBXMatrices TriLibCore.Fbx.FBXModel::Matrices
	FBXMatrices_t29DA4C671FC096FB9CFD6071E0067D331081BD69 * ___Matrices_8;
	// UnityEngine.Vector3 TriLibCore.Fbx.FBXModel::_localPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____localPosition_9;
	// UnityEngine.Quaternion TriLibCore.Fbx.FBXModel::_localRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ____localRotation_10;
	// UnityEngine.Vector3 TriLibCore.Fbx.FBXModel::_localScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____localScale_11;
	// System.Boolean TriLibCore.Fbx.FBXModel::<IsBone>k__BackingField
	bool ___U3CIsBoneU3Ek__BackingField_12;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Fbx.FBXModel::<GeometryGroup>k__BackingField
	RuntimeObject* ___U3CGeometryGroupU3Ek__BackingField_13;
	// TriLibCore.Interfaces.IModel TriLibCore.Fbx.FBXModel::_parent
	RuntimeObject* ____parent_14;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Fbx.FBXModel::<Children>k__BackingField
	RuntimeObject* ___U3CChildrenU3Ek__BackingField_15;
	// System.Int32 TriLibCore.Fbx.FBXModel::ChildrenCount
	int32_t ___ChildrenCount_16;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Fbx.FBXModel::<Bones>k__BackingField
	RuntimeObject* ___U3CBonesU3Ek__BackingField_17;
	// System.Int32 TriLibCore.Fbx.FBXModel::BonesCount
	int32_t ___BonesCount_18;
	// System.Collections.Generic.IList`1<UnityEngine.Matrix4x4> TriLibCore.Fbx.FBXModel::BindPosesList
	RuntimeObject* ___BindPosesList_19;
	// UnityEngine.Matrix4x4[] TriLibCore.Fbx.FBXModel::<BindPoses>k__BackingField
	Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* ___U3CBindPosesU3Ek__BackingField_20;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Fbx.FBXModel::<MaterialIndices>k__BackingField
	RuntimeObject* ___U3CMaterialIndicesU3Ek__BackingField_21;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Fbx.FBXModel::AllMaterialIndices
	RuntimeObject* ___AllMaterialIndices_22;
	// System.Int32 TriLibCore.Fbx.FBXModel::AllMaterialIndicesCount
	int32_t ___AllMaterialIndicesCount_23;
	// TriLibCore.Fbx.FBXTexture TriLibCore.Fbx.FBXModel::DiffuseTexture
	FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * ___DiffuseTexture_24;

public:
	inline static int32_t get_offset_of_RotationOrder_5() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___RotationOrder_5)); }
	inline int32_t get_RotationOrder_5() const { return ___RotationOrder_5; }
	inline int32_t* get_address_of_RotationOrder_5() { return &___RotationOrder_5; }
	inline void set_RotationOrder_5(int32_t value)
	{
		___RotationOrder_5 = value;
	}

	inline static int32_t get_offset_of_InheritType_6() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___InheritType_6)); }
	inline int32_t get_InheritType_6() const { return ___InheritType_6; }
	inline int32_t* get_address_of_InheritType_6() { return &___InheritType_6; }
	inline void set_InheritType_6(int32_t value)
	{
		___InheritType_6 = value;
	}

	inline static int32_t get_offset_of_U3CVisibilityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___U3CVisibilityU3Ek__BackingField_7)); }
	inline bool get_U3CVisibilityU3Ek__BackingField_7() const { return ___U3CVisibilityU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CVisibilityU3Ek__BackingField_7() { return &___U3CVisibilityU3Ek__BackingField_7; }
	inline void set_U3CVisibilityU3Ek__BackingField_7(bool value)
	{
		___U3CVisibilityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_Matrices_8() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___Matrices_8)); }
	inline FBXMatrices_t29DA4C671FC096FB9CFD6071E0067D331081BD69 * get_Matrices_8() const { return ___Matrices_8; }
	inline FBXMatrices_t29DA4C671FC096FB9CFD6071E0067D331081BD69 ** get_address_of_Matrices_8() { return &___Matrices_8; }
	inline void set_Matrices_8(FBXMatrices_t29DA4C671FC096FB9CFD6071E0067D331081BD69 * value)
	{
		___Matrices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Matrices_8), (void*)value);
	}

	inline static int32_t get_offset_of__localPosition_9() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ____localPosition_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__localPosition_9() const { return ____localPosition_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__localPosition_9() { return &____localPosition_9; }
	inline void set__localPosition_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____localPosition_9 = value;
	}

	inline static int32_t get_offset_of__localRotation_10() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ____localRotation_10)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get__localRotation_10() const { return ____localRotation_10; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of__localRotation_10() { return &____localRotation_10; }
	inline void set__localRotation_10(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		____localRotation_10 = value;
	}

	inline static int32_t get_offset_of__localScale_11() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ____localScale_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__localScale_11() const { return ____localScale_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__localScale_11() { return &____localScale_11; }
	inline void set__localScale_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____localScale_11 = value;
	}

	inline static int32_t get_offset_of_U3CIsBoneU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___U3CIsBoneU3Ek__BackingField_12)); }
	inline bool get_U3CIsBoneU3Ek__BackingField_12() const { return ___U3CIsBoneU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CIsBoneU3Ek__BackingField_12() { return &___U3CIsBoneU3Ek__BackingField_12; }
	inline void set_U3CIsBoneU3Ek__BackingField_12(bool value)
	{
		___U3CIsBoneU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CGeometryGroupU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___U3CGeometryGroupU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CGeometryGroupU3Ek__BackingField_13() const { return ___U3CGeometryGroupU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CGeometryGroupU3Ek__BackingField_13() { return &___U3CGeometryGroupU3Ek__BackingField_13; }
	inline void set_U3CGeometryGroupU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CGeometryGroupU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGeometryGroupU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of__parent_14() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ____parent_14)); }
	inline RuntimeObject* get__parent_14() const { return ____parent_14; }
	inline RuntimeObject** get_address_of__parent_14() { return &____parent_14; }
	inline void set__parent_14(RuntimeObject* value)
	{
		____parent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CChildrenU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___U3CChildrenU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CChildrenU3Ek__BackingField_15() const { return ___U3CChildrenU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CChildrenU3Ek__BackingField_15() { return &___U3CChildrenU3Ek__BackingField_15; }
	inline void set_U3CChildrenU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CChildrenU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CChildrenU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_ChildrenCount_16() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___ChildrenCount_16)); }
	inline int32_t get_ChildrenCount_16() const { return ___ChildrenCount_16; }
	inline int32_t* get_address_of_ChildrenCount_16() { return &___ChildrenCount_16; }
	inline void set_ChildrenCount_16(int32_t value)
	{
		___ChildrenCount_16 = value;
	}

	inline static int32_t get_offset_of_U3CBonesU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___U3CBonesU3Ek__BackingField_17)); }
	inline RuntimeObject* get_U3CBonesU3Ek__BackingField_17() const { return ___U3CBonesU3Ek__BackingField_17; }
	inline RuntimeObject** get_address_of_U3CBonesU3Ek__BackingField_17() { return &___U3CBonesU3Ek__BackingField_17; }
	inline void set_U3CBonesU3Ek__BackingField_17(RuntimeObject* value)
	{
		___U3CBonesU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBonesU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_BonesCount_18() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___BonesCount_18)); }
	inline int32_t get_BonesCount_18() const { return ___BonesCount_18; }
	inline int32_t* get_address_of_BonesCount_18() { return &___BonesCount_18; }
	inline void set_BonesCount_18(int32_t value)
	{
		___BonesCount_18 = value;
	}

	inline static int32_t get_offset_of_BindPosesList_19() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___BindPosesList_19)); }
	inline RuntimeObject* get_BindPosesList_19() const { return ___BindPosesList_19; }
	inline RuntimeObject** get_address_of_BindPosesList_19() { return &___BindPosesList_19; }
	inline void set_BindPosesList_19(RuntimeObject* value)
	{
		___BindPosesList_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BindPosesList_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBindPosesU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___U3CBindPosesU3Ek__BackingField_20)); }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* get_U3CBindPosesU3Ek__BackingField_20() const { return ___U3CBindPosesU3Ek__BackingField_20; }
	inline Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9** get_address_of_U3CBindPosesU3Ek__BackingField_20() { return &___U3CBindPosesU3Ek__BackingField_20; }
	inline void set_U3CBindPosesU3Ek__BackingField_20(Matrix4x4U5BU5D_t1C64F7A0C34058334A8A95BF165F0027690598C9* value)
	{
		___U3CBindPosesU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBindPosesU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaterialIndicesU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___U3CMaterialIndicesU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CMaterialIndicesU3Ek__BackingField_21() const { return ___U3CMaterialIndicesU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CMaterialIndicesU3Ek__BackingField_21() { return &___U3CMaterialIndicesU3Ek__BackingField_21; }
	inline void set_U3CMaterialIndicesU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CMaterialIndicesU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaterialIndicesU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_AllMaterialIndices_22() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___AllMaterialIndices_22)); }
	inline RuntimeObject* get_AllMaterialIndices_22() const { return ___AllMaterialIndices_22; }
	inline RuntimeObject** get_address_of_AllMaterialIndices_22() { return &___AllMaterialIndices_22; }
	inline void set_AllMaterialIndices_22(RuntimeObject* value)
	{
		___AllMaterialIndices_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AllMaterialIndices_22), (void*)value);
	}

	inline static int32_t get_offset_of_AllMaterialIndicesCount_23() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___AllMaterialIndicesCount_23)); }
	inline int32_t get_AllMaterialIndicesCount_23() const { return ___AllMaterialIndicesCount_23; }
	inline int32_t* get_address_of_AllMaterialIndicesCount_23() { return &___AllMaterialIndicesCount_23; }
	inline void set_AllMaterialIndicesCount_23(int32_t value)
	{
		___AllMaterialIndicesCount_23 = value;
	}

	inline static int32_t get_offset_of_DiffuseTexture_24() { return static_cast<int32_t>(offsetof(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5, ___DiffuseTexture_24)); }
	inline FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * get_DiffuseTexture_24() const { return ___DiffuseTexture_24; }
	inline FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 ** get_address_of_DiffuseTexture_24() { return &___DiffuseTexture_24; }
	inline void set_DiffuseTexture_24(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * value)
	{
		___DiffuseTexture_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DiffuseTexture_24), (void*)value);
	}
};


// TriLibCore.Fbx.FBXSubDeformer
struct  FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC  : public FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152
{
public:
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Fbx.FBXSubDeformer::Indexes
	RuntimeObject* ___Indexes_5;
	// UnityEngine.Matrix4x4 TriLibCore.Fbx.FBXSubDeformer::Transform
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___Transform_6;
	// UnityEngine.Matrix4x4 TriLibCore.Fbx.FBXSubDeformer::TransformLink
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___TransformLink_7;
	// System.Collections.Generic.IList`1<System.Single> TriLibCore.Fbx.FBXSubDeformer::Weights
	RuntimeObject* ___Weights_8;
	// TriLibCore.Fbx.FBXModel TriLibCore.Fbx.FBXSubDeformer::Model
	FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5 * ___Model_9;
	// TriLibCore.Fbx.FBXDeformer TriLibCore.Fbx.FBXSubDeformer::BaseDeformer
	FBXDeformer_t3477DA7D965B8050A94D4004029D9F3F32E075D8 * ___BaseDeformer_10;

public:
	inline static int32_t get_offset_of_Indexes_5() { return static_cast<int32_t>(offsetof(FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC, ___Indexes_5)); }
	inline RuntimeObject* get_Indexes_5() const { return ___Indexes_5; }
	inline RuntimeObject** get_address_of_Indexes_5() { return &___Indexes_5; }
	inline void set_Indexes_5(RuntimeObject* value)
	{
		___Indexes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Indexes_5), (void*)value);
	}

	inline static int32_t get_offset_of_Transform_6() { return static_cast<int32_t>(offsetof(FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC, ___Transform_6)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_Transform_6() const { return ___Transform_6; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_Transform_6() { return &___Transform_6; }
	inline void set_Transform_6(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___Transform_6 = value;
	}

	inline static int32_t get_offset_of_TransformLink_7() { return static_cast<int32_t>(offsetof(FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC, ___TransformLink_7)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_TransformLink_7() const { return ___TransformLink_7; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_TransformLink_7() { return &___TransformLink_7; }
	inline void set_TransformLink_7(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___TransformLink_7 = value;
	}

	inline static int32_t get_offset_of_Weights_8() { return static_cast<int32_t>(offsetof(FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC, ___Weights_8)); }
	inline RuntimeObject* get_Weights_8() const { return ___Weights_8; }
	inline RuntimeObject** get_address_of_Weights_8() { return &___Weights_8; }
	inline void set_Weights_8(RuntimeObject* value)
	{
		___Weights_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Weights_8), (void*)value);
	}

	inline static int32_t get_offset_of_Model_9() { return static_cast<int32_t>(offsetof(FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC, ___Model_9)); }
	inline FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5 * get_Model_9() const { return ___Model_9; }
	inline FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5 ** get_address_of_Model_9() { return &___Model_9; }
	inline void set_Model_9(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5 * value)
	{
		___Model_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Model_9), (void*)value);
	}

	inline static int32_t get_offset_of_BaseDeformer_10() { return static_cast<int32_t>(offsetof(FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC, ___BaseDeformer_10)); }
	inline FBXDeformer_t3477DA7D965B8050A94D4004029D9F3F32E075D8 * get_BaseDeformer_10() const { return ___BaseDeformer_10; }
	inline FBXDeformer_t3477DA7D965B8050A94D4004029D9F3F32E075D8 ** get_address_of_BaseDeformer_10() { return &___BaseDeformer_10; }
	inline void set_BaseDeformer_10(FBXDeformer_t3477DA7D965B8050A94D4004029D9F3F32E075D8 * value)
	{
		___BaseDeformer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseDeformer_10), (void*)value);
	}
};


// TriLibCore.Fbx.FBXTexture
struct  FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28  : public FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152
{
public:
	// TriLibCore.Fbx.FBXTextureUse6 TriLibCore.Fbx.FBXTexture::TextureTypeUse
	int32_t ___TextureTypeUse_5;
	// System.Single TriLibCore.Fbx.FBXTexture::TextureAlpha
	float ___TextureAlpha_6;
	// TriLibCore.Fbx.FBXUnifiedMappingType TriLibCore.Fbx.FBXTexture::CurrentMappingType
	int32_t ___CurrentMappingType_7;
	// TriLibCore.Fbx.FBXWrapMode TriLibCore.Fbx.FBXTexture::TextureWrapModeU
	int32_t ___TextureWrapModeU_8;
	// TriLibCore.Fbx.FBXWrapMode TriLibCore.Fbx.FBXTexture::TextureWrapModeV
	int32_t ___TextureWrapModeV_9;
	// System.Boolean TriLibCore.Fbx.FBXTexture::UVSwap
	bool ___UVSwap_10;
	// System.Boolean TriLibCore.Fbx.FBXTexture::PremultiplyAlpha
	bool ___PremultiplyAlpha_11;
	// UnityEngine.Vector3 TriLibCore.Fbx.FBXTexture::Translation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Translation_12;
	// UnityEngine.Vector3 TriLibCore.Fbx.FBXTexture::Rotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Rotation_13;
	// UnityEngine.Vector3 TriLibCore.Fbx.FBXTexture::Scaling
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Scaling_14;
	// UnityEngine.Vector3 TriLibCore.Fbx.FBXTexture::TextureRotationPivot
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___TextureRotationPivot_15;
	// UnityEngine.Vector3 TriLibCore.Fbx.FBXTexture::TextureScalingPivot
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___TextureScalingPivot_16;
	// TriLibCore.Fbx.FBXBlendMode TriLibCore.Fbx.FBXTexture::CurrentTextureBlendMode
	int32_t ___CurrentTextureBlendMode_17;
	// System.String TriLibCore.Fbx.FBXTexture::UVSet
	String_t* ___UVSet_18;
	// System.Boolean TriLibCore.Fbx.FBXTexture::UseMaterial
	bool ___UseMaterial_19;
	// System.Boolean TriLibCore.Fbx.FBXTexture::UseMipMap
	bool ___UseMipMap_20;
	// TriLibCore.Fbx.FBXAlphaSource TriLibCore.Fbx.FBXTexture::AlphaSource
	int32_t ___AlphaSource_21;
	// UnityEngine.Vector4 TriLibCore.Fbx.FBXTexture::Cropping
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___Cropping_22;
	// TriLibCore.Fbx.FBXVideo TriLibCore.Fbx.FBXTexture::Video
	FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * ___Video_23;
	// System.String TriLibCore.Fbx.FBXTexture::TextureName
	String_t* ___TextureName_24;
	// System.String TriLibCore.Fbx.FBXTexture::Media
	String_t* ___Media_25;
	// System.String TriLibCore.Fbx.FBXTexture::FullFilename
	String_t* ___FullFilename_26;
	// System.String TriLibCore.Fbx.FBXTexture::RelativeFilename
	String_t* ___RelativeFilename_27;
	// UnityEngine.Vector2 TriLibCore.Fbx.FBXTexture::ModelUVTranslation
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___ModelUVTranslation_28;
	// UnityEngine.Vector2 TriLibCore.Fbx.FBXTexture::ModelUVScaling
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___ModelUVScaling_29;
	// System.String TriLibCore.Fbx.FBXTexture::Texture_Alpha_Source
	String_t* ___Texture_Alpha_Source_30;
	// System.String TriLibCore.Fbx.FBXTexture::Type
	String_t* ___Type_31;
	// System.Int32 TriLibCore.Fbx.FBXTexture::<TextureId>k__BackingField
	int32_t ___U3CTextureIdU3Ek__BackingField_32;
	// System.String TriLibCore.Fbx.FBXTexture::<ResolvedFilename>k__BackingField
	String_t* ___U3CResolvedFilenameU3Ek__BackingField_33;
	// System.Boolean TriLibCore.Fbx.FBXTexture::<HasAlpha>k__BackingField
	bool ___U3CHasAlphaU3Ek__BackingField_34;

public:
	inline static int32_t get_offset_of_TextureTypeUse_5() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___TextureTypeUse_5)); }
	inline int32_t get_TextureTypeUse_5() const { return ___TextureTypeUse_5; }
	inline int32_t* get_address_of_TextureTypeUse_5() { return &___TextureTypeUse_5; }
	inline void set_TextureTypeUse_5(int32_t value)
	{
		___TextureTypeUse_5 = value;
	}

	inline static int32_t get_offset_of_TextureAlpha_6() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___TextureAlpha_6)); }
	inline float get_TextureAlpha_6() const { return ___TextureAlpha_6; }
	inline float* get_address_of_TextureAlpha_6() { return &___TextureAlpha_6; }
	inline void set_TextureAlpha_6(float value)
	{
		___TextureAlpha_6 = value;
	}

	inline static int32_t get_offset_of_CurrentMappingType_7() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___CurrentMappingType_7)); }
	inline int32_t get_CurrentMappingType_7() const { return ___CurrentMappingType_7; }
	inline int32_t* get_address_of_CurrentMappingType_7() { return &___CurrentMappingType_7; }
	inline void set_CurrentMappingType_7(int32_t value)
	{
		___CurrentMappingType_7 = value;
	}

	inline static int32_t get_offset_of_TextureWrapModeU_8() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___TextureWrapModeU_8)); }
	inline int32_t get_TextureWrapModeU_8() const { return ___TextureWrapModeU_8; }
	inline int32_t* get_address_of_TextureWrapModeU_8() { return &___TextureWrapModeU_8; }
	inline void set_TextureWrapModeU_8(int32_t value)
	{
		___TextureWrapModeU_8 = value;
	}

	inline static int32_t get_offset_of_TextureWrapModeV_9() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___TextureWrapModeV_9)); }
	inline int32_t get_TextureWrapModeV_9() const { return ___TextureWrapModeV_9; }
	inline int32_t* get_address_of_TextureWrapModeV_9() { return &___TextureWrapModeV_9; }
	inline void set_TextureWrapModeV_9(int32_t value)
	{
		___TextureWrapModeV_9 = value;
	}

	inline static int32_t get_offset_of_UVSwap_10() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___UVSwap_10)); }
	inline bool get_UVSwap_10() const { return ___UVSwap_10; }
	inline bool* get_address_of_UVSwap_10() { return &___UVSwap_10; }
	inline void set_UVSwap_10(bool value)
	{
		___UVSwap_10 = value;
	}

	inline static int32_t get_offset_of_PremultiplyAlpha_11() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___PremultiplyAlpha_11)); }
	inline bool get_PremultiplyAlpha_11() const { return ___PremultiplyAlpha_11; }
	inline bool* get_address_of_PremultiplyAlpha_11() { return &___PremultiplyAlpha_11; }
	inline void set_PremultiplyAlpha_11(bool value)
	{
		___PremultiplyAlpha_11 = value;
	}

	inline static int32_t get_offset_of_Translation_12() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___Translation_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Translation_12() const { return ___Translation_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Translation_12() { return &___Translation_12; }
	inline void set_Translation_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Translation_12 = value;
	}

	inline static int32_t get_offset_of_Rotation_13() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___Rotation_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Rotation_13() const { return ___Rotation_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Rotation_13() { return &___Rotation_13; }
	inline void set_Rotation_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Rotation_13 = value;
	}

	inline static int32_t get_offset_of_Scaling_14() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___Scaling_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Scaling_14() const { return ___Scaling_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Scaling_14() { return &___Scaling_14; }
	inline void set_Scaling_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Scaling_14 = value;
	}

	inline static int32_t get_offset_of_TextureRotationPivot_15() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___TextureRotationPivot_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_TextureRotationPivot_15() const { return ___TextureRotationPivot_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_TextureRotationPivot_15() { return &___TextureRotationPivot_15; }
	inline void set_TextureRotationPivot_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___TextureRotationPivot_15 = value;
	}

	inline static int32_t get_offset_of_TextureScalingPivot_16() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___TextureScalingPivot_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_TextureScalingPivot_16() const { return ___TextureScalingPivot_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_TextureScalingPivot_16() { return &___TextureScalingPivot_16; }
	inline void set_TextureScalingPivot_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___TextureScalingPivot_16 = value;
	}

	inline static int32_t get_offset_of_CurrentTextureBlendMode_17() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___CurrentTextureBlendMode_17)); }
	inline int32_t get_CurrentTextureBlendMode_17() const { return ___CurrentTextureBlendMode_17; }
	inline int32_t* get_address_of_CurrentTextureBlendMode_17() { return &___CurrentTextureBlendMode_17; }
	inline void set_CurrentTextureBlendMode_17(int32_t value)
	{
		___CurrentTextureBlendMode_17 = value;
	}

	inline static int32_t get_offset_of_UVSet_18() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___UVSet_18)); }
	inline String_t* get_UVSet_18() const { return ___UVSet_18; }
	inline String_t** get_address_of_UVSet_18() { return &___UVSet_18; }
	inline void set_UVSet_18(String_t* value)
	{
		___UVSet_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UVSet_18), (void*)value);
	}

	inline static int32_t get_offset_of_UseMaterial_19() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___UseMaterial_19)); }
	inline bool get_UseMaterial_19() const { return ___UseMaterial_19; }
	inline bool* get_address_of_UseMaterial_19() { return &___UseMaterial_19; }
	inline void set_UseMaterial_19(bool value)
	{
		___UseMaterial_19 = value;
	}

	inline static int32_t get_offset_of_UseMipMap_20() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___UseMipMap_20)); }
	inline bool get_UseMipMap_20() const { return ___UseMipMap_20; }
	inline bool* get_address_of_UseMipMap_20() { return &___UseMipMap_20; }
	inline void set_UseMipMap_20(bool value)
	{
		___UseMipMap_20 = value;
	}

	inline static int32_t get_offset_of_AlphaSource_21() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___AlphaSource_21)); }
	inline int32_t get_AlphaSource_21() const { return ___AlphaSource_21; }
	inline int32_t* get_address_of_AlphaSource_21() { return &___AlphaSource_21; }
	inline void set_AlphaSource_21(int32_t value)
	{
		___AlphaSource_21 = value;
	}

	inline static int32_t get_offset_of_Cropping_22() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___Cropping_22)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_Cropping_22() const { return ___Cropping_22; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_Cropping_22() { return &___Cropping_22; }
	inline void set_Cropping_22(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___Cropping_22 = value;
	}

	inline static int32_t get_offset_of_Video_23() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___Video_23)); }
	inline FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * get_Video_23() const { return ___Video_23; }
	inline FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 ** get_address_of_Video_23() { return &___Video_23; }
	inline void set_Video_23(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * value)
	{
		___Video_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Video_23), (void*)value);
	}

	inline static int32_t get_offset_of_TextureName_24() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___TextureName_24)); }
	inline String_t* get_TextureName_24() const { return ___TextureName_24; }
	inline String_t** get_address_of_TextureName_24() { return &___TextureName_24; }
	inline void set_TextureName_24(String_t* value)
	{
		___TextureName_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextureName_24), (void*)value);
	}

	inline static int32_t get_offset_of_Media_25() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___Media_25)); }
	inline String_t* get_Media_25() const { return ___Media_25; }
	inline String_t** get_address_of_Media_25() { return &___Media_25; }
	inline void set_Media_25(String_t* value)
	{
		___Media_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Media_25), (void*)value);
	}

	inline static int32_t get_offset_of_FullFilename_26() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___FullFilename_26)); }
	inline String_t* get_FullFilename_26() const { return ___FullFilename_26; }
	inline String_t** get_address_of_FullFilename_26() { return &___FullFilename_26; }
	inline void set_FullFilename_26(String_t* value)
	{
		___FullFilename_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullFilename_26), (void*)value);
	}

	inline static int32_t get_offset_of_RelativeFilename_27() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___RelativeFilename_27)); }
	inline String_t* get_RelativeFilename_27() const { return ___RelativeFilename_27; }
	inline String_t** get_address_of_RelativeFilename_27() { return &___RelativeFilename_27; }
	inline void set_RelativeFilename_27(String_t* value)
	{
		___RelativeFilename_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RelativeFilename_27), (void*)value);
	}

	inline static int32_t get_offset_of_ModelUVTranslation_28() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___ModelUVTranslation_28)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_ModelUVTranslation_28() const { return ___ModelUVTranslation_28; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_ModelUVTranslation_28() { return &___ModelUVTranslation_28; }
	inline void set_ModelUVTranslation_28(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___ModelUVTranslation_28 = value;
	}

	inline static int32_t get_offset_of_ModelUVScaling_29() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___ModelUVScaling_29)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_ModelUVScaling_29() const { return ___ModelUVScaling_29; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_ModelUVScaling_29() { return &___ModelUVScaling_29; }
	inline void set_ModelUVScaling_29(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___ModelUVScaling_29 = value;
	}

	inline static int32_t get_offset_of_Texture_Alpha_Source_30() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___Texture_Alpha_Source_30)); }
	inline String_t* get_Texture_Alpha_Source_30() const { return ___Texture_Alpha_Source_30; }
	inline String_t** get_address_of_Texture_Alpha_Source_30() { return &___Texture_Alpha_Source_30; }
	inline void set_Texture_Alpha_Source_30(String_t* value)
	{
		___Texture_Alpha_Source_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Texture_Alpha_Source_30), (void*)value);
	}

	inline static int32_t get_offset_of_Type_31() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___Type_31)); }
	inline String_t* get_Type_31() const { return ___Type_31; }
	inline String_t** get_address_of_Type_31() { return &___Type_31; }
	inline void set_Type_31(String_t* value)
	{
		___Type_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTextureIdU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___U3CTextureIdU3Ek__BackingField_32)); }
	inline int32_t get_U3CTextureIdU3Ek__BackingField_32() const { return ___U3CTextureIdU3Ek__BackingField_32; }
	inline int32_t* get_address_of_U3CTextureIdU3Ek__BackingField_32() { return &___U3CTextureIdU3Ek__BackingField_32; }
	inline void set_U3CTextureIdU3Ek__BackingField_32(int32_t value)
	{
		___U3CTextureIdU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CResolvedFilenameU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___U3CResolvedFilenameU3Ek__BackingField_33)); }
	inline String_t* get_U3CResolvedFilenameU3Ek__BackingField_33() const { return ___U3CResolvedFilenameU3Ek__BackingField_33; }
	inline String_t** get_address_of_U3CResolvedFilenameU3Ek__BackingField_33() { return &___U3CResolvedFilenameU3Ek__BackingField_33; }
	inline void set_U3CResolvedFilenameU3Ek__BackingField_33(String_t* value)
	{
		___U3CResolvedFilenameU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResolvedFilenameU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHasAlphaU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28, ___U3CHasAlphaU3Ek__BackingField_34)); }
	inline bool get_U3CHasAlphaU3Ek__BackingField_34() const { return ___U3CHasAlphaU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CHasAlphaU3Ek__BackingField_34() { return &___U3CHasAlphaU3Ek__BackingField_34; }
	inline void set_U3CHasAlphaU3Ek__BackingField_34(bool value)
	{
		___U3CHasAlphaU3Ek__BackingField_34 = value;
	}
};


// TriLibCore.Fbx.FBXVideo
struct  FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05  : public FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152
{
public:
	// UnityEngine.Color TriLibCore.Fbx.FBXVideo::Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___Color_5;
	// System.Int64 TriLibCore.Fbx.FBXVideo::ClipIn
	int64_t ___ClipIn_6;
	// System.Int64 TriLibCore.Fbx.FBXVideo::ClipOut
	int64_t ___ClipOut_7;
	// System.Boolean TriLibCore.Fbx.FBXVideo::Mute
	bool ___Mute_8;
	// System.Boolean TriLibCore.Fbx.FBXVideo::ImageSequence
	bool ___ImageSequence_9;
	// System.Int32 TriLibCore.Fbx.FBXVideo::ImageSequenceOffset
	int32_t ___ImageSequenceOffset_10;
	// System.Single TriLibCore.Fbx.FBXVideo::FrameRate
	float ___FrameRate_11;
	// System.Int32 TriLibCore.Fbx.FBXVideo::LastFrame
	int32_t ___LastFrame_12;
	// System.Int32 TriLibCore.Fbx.FBXVideo::Width
	int32_t ___Width_13;
	// System.Int32 TriLibCore.Fbx.FBXVideo::Height
	int32_t ___Height_14;
	// System.Int32 TriLibCore.Fbx.FBXVideo::StartFrame
	int32_t ___StartFrame_15;
	// System.Int32 TriLibCore.Fbx.FBXVideo::StopFrame
	int32_t ___StopFrame_16;
	// System.String TriLibCore.Fbx.FBXVideo::Path
	String_t* ___Path_17;
	// System.String TriLibCore.Fbx.FBXVideo::RelPath
	String_t* ___RelPath_18;
	// System.Single TriLibCore.Fbx.FBXVideo::PlayOffset
	float ___PlayOffset_19;
	// System.Int64 TriLibCore.Fbx.FBXVideo::Offset
	int64_t ___Offset_20;
	// TriLibCore.Fbx.FBXInterlaceMode TriLibCore.Fbx.FBXVideo::InterlaceMode
	int32_t ___InterlaceMode_21;
	// System.Boolean TriLibCore.Fbx.FBXVideo::FreeRunning
	bool ___FreeRunning_22;
	// System.Boolean TriLibCore.Fbx.FBXVideo::Loop
	bool ___Loop_23;
	// TriLibCore.Fbx.FBXAccessMode TriLibCore.Fbx.FBXVideo::AccessMode
	int32_t ___AccessMode_24;
	// System.String TriLibCore.Fbx.FBXVideo::Type
	String_t* ___Type_25;
	// System.Boolean TriLibCore.Fbx.FBXVideo::UseMipMap
	bool ___UseMipMap_26;
	// System.String TriLibCore.Fbx.FBXVideo::Filename
	String_t* ___Filename_27;
	// System.String TriLibCore.Fbx.FBXVideo::RelativeFilename
	String_t* ___RelativeFilename_28;
	// System.Byte[] TriLibCore.Fbx.FBXVideo::Content
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Content_29;

public:
	inline static int32_t get_offset_of_Color_5() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___Color_5)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_Color_5() const { return ___Color_5; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_Color_5() { return &___Color_5; }
	inline void set_Color_5(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___Color_5 = value;
	}

	inline static int32_t get_offset_of_ClipIn_6() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___ClipIn_6)); }
	inline int64_t get_ClipIn_6() const { return ___ClipIn_6; }
	inline int64_t* get_address_of_ClipIn_6() { return &___ClipIn_6; }
	inline void set_ClipIn_6(int64_t value)
	{
		___ClipIn_6 = value;
	}

	inline static int32_t get_offset_of_ClipOut_7() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___ClipOut_7)); }
	inline int64_t get_ClipOut_7() const { return ___ClipOut_7; }
	inline int64_t* get_address_of_ClipOut_7() { return &___ClipOut_7; }
	inline void set_ClipOut_7(int64_t value)
	{
		___ClipOut_7 = value;
	}

	inline static int32_t get_offset_of_Mute_8() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___Mute_8)); }
	inline bool get_Mute_8() const { return ___Mute_8; }
	inline bool* get_address_of_Mute_8() { return &___Mute_8; }
	inline void set_Mute_8(bool value)
	{
		___Mute_8 = value;
	}

	inline static int32_t get_offset_of_ImageSequence_9() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___ImageSequence_9)); }
	inline bool get_ImageSequence_9() const { return ___ImageSequence_9; }
	inline bool* get_address_of_ImageSequence_9() { return &___ImageSequence_9; }
	inline void set_ImageSequence_9(bool value)
	{
		___ImageSequence_9 = value;
	}

	inline static int32_t get_offset_of_ImageSequenceOffset_10() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___ImageSequenceOffset_10)); }
	inline int32_t get_ImageSequenceOffset_10() const { return ___ImageSequenceOffset_10; }
	inline int32_t* get_address_of_ImageSequenceOffset_10() { return &___ImageSequenceOffset_10; }
	inline void set_ImageSequenceOffset_10(int32_t value)
	{
		___ImageSequenceOffset_10 = value;
	}

	inline static int32_t get_offset_of_FrameRate_11() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___FrameRate_11)); }
	inline float get_FrameRate_11() const { return ___FrameRate_11; }
	inline float* get_address_of_FrameRate_11() { return &___FrameRate_11; }
	inline void set_FrameRate_11(float value)
	{
		___FrameRate_11 = value;
	}

	inline static int32_t get_offset_of_LastFrame_12() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___LastFrame_12)); }
	inline int32_t get_LastFrame_12() const { return ___LastFrame_12; }
	inline int32_t* get_address_of_LastFrame_12() { return &___LastFrame_12; }
	inline void set_LastFrame_12(int32_t value)
	{
		___LastFrame_12 = value;
	}

	inline static int32_t get_offset_of_Width_13() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___Width_13)); }
	inline int32_t get_Width_13() const { return ___Width_13; }
	inline int32_t* get_address_of_Width_13() { return &___Width_13; }
	inline void set_Width_13(int32_t value)
	{
		___Width_13 = value;
	}

	inline static int32_t get_offset_of_Height_14() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___Height_14)); }
	inline int32_t get_Height_14() const { return ___Height_14; }
	inline int32_t* get_address_of_Height_14() { return &___Height_14; }
	inline void set_Height_14(int32_t value)
	{
		___Height_14 = value;
	}

	inline static int32_t get_offset_of_StartFrame_15() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___StartFrame_15)); }
	inline int32_t get_StartFrame_15() const { return ___StartFrame_15; }
	inline int32_t* get_address_of_StartFrame_15() { return &___StartFrame_15; }
	inline void set_StartFrame_15(int32_t value)
	{
		___StartFrame_15 = value;
	}

	inline static int32_t get_offset_of_StopFrame_16() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___StopFrame_16)); }
	inline int32_t get_StopFrame_16() const { return ___StopFrame_16; }
	inline int32_t* get_address_of_StopFrame_16() { return &___StopFrame_16; }
	inline void set_StopFrame_16(int32_t value)
	{
		___StopFrame_16 = value;
	}

	inline static int32_t get_offset_of_Path_17() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___Path_17)); }
	inline String_t* get_Path_17() const { return ___Path_17; }
	inline String_t** get_address_of_Path_17() { return &___Path_17; }
	inline void set_Path_17(String_t* value)
	{
		___Path_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_17), (void*)value);
	}

	inline static int32_t get_offset_of_RelPath_18() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___RelPath_18)); }
	inline String_t* get_RelPath_18() const { return ___RelPath_18; }
	inline String_t** get_address_of_RelPath_18() { return &___RelPath_18; }
	inline void set_RelPath_18(String_t* value)
	{
		___RelPath_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RelPath_18), (void*)value);
	}

	inline static int32_t get_offset_of_PlayOffset_19() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___PlayOffset_19)); }
	inline float get_PlayOffset_19() const { return ___PlayOffset_19; }
	inline float* get_address_of_PlayOffset_19() { return &___PlayOffset_19; }
	inline void set_PlayOffset_19(float value)
	{
		___PlayOffset_19 = value;
	}

	inline static int32_t get_offset_of_Offset_20() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___Offset_20)); }
	inline int64_t get_Offset_20() const { return ___Offset_20; }
	inline int64_t* get_address_of_Offset_20() { return &___Offset_20; }
	inline void set_Offset_20(int64_t value)
	{
		___Offset_20 = value;
	}

	inline static int32_t get_offset_of_InterlaceMode_21() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___InterlaceMode_21)); }
	inline int32_t get_InterlaceMode_21() const { return ___InterlaceMode_21; }
	inline int32_t* get_address_of_InterlaceMode_21() { return &___InterlaceMode_21; }
	inline void set_InterlaceMode_21(int32_t value)
	{
		___InterlaceMode_21 = value;
	}

	inline static int32_t get_offset_of_FreeRunning_22() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___FreeRunning_22)); }
	inline bool get_FreeRunning_22() const { return ___FreeRunning_22; }
	inline bool* get_address_of_FreeRunning_22() { return &___FreeRunning_22; }
	inline void set_FreeRunning_22(bool value)
	{
		___FreeRunning_22 = value;
	}

	inline static int32_t get_offset_of_Loop_23() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___Loop_23)); }
	inline bool get_Loop_23() const { return ___Loop_23; }
	inline bool* get_address_of_Loop_23() { return &___Loop_23; }
	inline void set_Loop_23(bool value)
	{
		___Loop_23 = value;
	}

	inline static int32_t get_offset_of_AccessMode_24() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___AccessMode_24)); }
	inline int32_t get_AccessMode_24() const { return ___AccessMode_24; }
	inline int32_t* get_address_of_AccessMode_24() { return &___AccessMode_24; }
	inline void set_AccessMode_24(int32_t value)
	{
		___AccessMode_24 = value;
	}

	inline static int32_t get_offset_of_Type_25() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___Type_25)); }
	inline String_t* get_Type_25() const { return ___Type_25; }
	inline String_t** get_address_of_Type_25() { return &___Type_25; }
	inline void set_Type_25(String_t* value)
	{
		___Type_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_25), (void*)value);
	}

	inline static int32_t get_offset_of_UseMipMap_26() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___UseMipMap_26)); }
	inline bool get_UseMipMap_26() const { return ___UseMipMap_26; }
	inline bool* get_address_of_UseMipMap_26() { return &___UseMipMap_26; }
	inline void set_UseMipMap_26(bool value)
	{
		___UseMipMap_26 = value;
	}

	inline static int32_t get_offset_of_Filename_27() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___Filename_27)); }
	inline String_t* get_Filename_27() const { return ___Filename_27; }
	inline String_t** get_address_of_Filename_27() { return &___Filename_27; }
	inline void set_Filename_27(String_t* value)
	{
		___Filename_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Filename_27), (void*)value);
	}

	inline static int32_t get_offset_of_RelativeFilename_28() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___RelativeFilename_28)); }
	inline String_t* get_RelativeFilename_28() const { return ___RelativeFilename_28; }
	inline String_t** get_address_of_RelativeFilename_28() { return &___RelativeFilename_28; }
	inline void set_RelativeFilename_28(String_t* value)
	{
		___RelativeFilename_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RelativeFilename_28), (void*)value);
	}

	inline static int32_t get_offset_of_Content_29() { return static_cast<int32_t>(offsetof(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05, ___Content_29)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Content_29() const { return ___Content_29; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Content_29() { return &___Content_29; }
	inline void set_Content_29(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Content_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Content_29), (void*)value);
	}
};


// TriLibCore.Fbx.FBXRootModel
struct  FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A  : public FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5
{
public:
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Fbx.FBXRootModel::<AllAnimations>k__BackingField
	RuntimeObject* ___U3CAllAnimationsU3Ek__BackingField_25;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Fbx.FBXRootModel::<AllMaterials>k__BackingField
	RuntimeObject* ___U3CAllMaterialsU3Ek__BackingField_26;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Fbx.FBXRootModel::<AllGeometryGroups>k__BackingField
	RuntimeObject* ___U3CAllGeometryGroupsU3Ek__BackingField_27;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Fbx.FBXRootModel::<AllTextures>k__BackingField
	RuntimeObject* ___U3CAllTexturesU3Ek__BackingField_28;

public:
	inline static int32_t get_offset_of_U3CAllAnimationsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A, ___U3CAllAnimationsU3Ek__BackingField_25)); }
	inline RuntimeObject* get_U3CAllAnimationsU3Ek__BackingField_25() const { return ___U3CAllAnimationsU3Ek__BackingField_25; }
	inline RuntimeObject** get_address_of_U3CAllAnimationsU3Ek__BackingField_25() { return &___U3CAllAnimationsU3Ek__BackingField_25; }
	inline void set_U3CAllAnimationsU3Ek__BackingField_25(RuntimeObject* value)
	{
		___U3CAllAnimationsU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAllAnimationsU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAllMaterialsU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A, ___U3CAllMaterialsU3Ek__BackingField_26)); }
	inline RuntimeObject* get_U3CAllMaterialsU3Ek__BackingField_26() const { return ___U3CAllMaterialsU3Ek__BackingField_26; }
	inline RuntimeObject** get_address_of_U3CAllMaterialsU3Ek__BackingField_26() { return &___U3CAllMaterialsU3Ek__BackingField_26; }
	inline void set_U3CAllMaterialsU3Ek__BackingField_26(RuntimeObject* value)
	{
		___U3CAllMaterialsU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAllMaterialsU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAllGeometryGroupsU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A, ___U3CAllGeometryGroupsU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CAllGeometryGroupsU3Ek__BackingField_27() const { return ___U3CAllGeometryGroupsU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CAllGeometryGroupsU3Ek__BackingField_27() { return &___U3CAllGeometryGroupsU3Ek__BackingField_27; }
	inline void set_U3CAllGeometryGroupsU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CAllGeometryGroupsU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAllGeometryGroupsU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAllTexturesU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A, ___U3CAllTexturesU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CAllTexturesU3Ek__BackingField_28() const { return ___U3CAllTexturesU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CAllTexturesU3Ek__BackingField_28() { return &___U3CAllTexturesU3Ek__BackingField_28; }
	inline void set_U3CAllTexturesU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CAllTexturesU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAllTexturesU3Ek__BackingField_28), (void*)value);
	}
};


// TriLibCore.Fbx.FBXDocument
struct  FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2  : public FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A
{
public:
	// System.Int32 TriLibCore.Fbx.FBXDocument::Version
	int32_t ___Version_29;
	// System.Boolean TriLibCore.Fbx.FBXDocument::IsBinary
	bool ___IsBinary_30;
	// TriLibCore.Fbx.FBXGlobalSettings TriLibCore.Fbx.FBXDocument::GlobalSettings
	FBXGlobalSettings_t86C6D516699288810377A4E4BCC97EF6DD14AF01 * ___GlobalSettings_31;
	// TriLibCore.Fbx.FBXModel TriLibCore.Fbx.FBXDocument::ModelDefinition
	FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5 * ___ModelDefinition_32;
	// TriLibCore.Fbx.FBXAnimationLayer TriLibCore.Fbx.FBXDocument::AnimationLayerDefinition
	FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100 * ___AnimationLayerDefinition_33;
	// TriLibCore.Fbx.FBXAnimationCurve TriLibCore.Fbx.FBXDocument::AnimationCurveDefinition
	FBXAnimationCurve_t7FAE6BA30DECD09EF3155514703B92392DF78FFF * ___AnimationCurveDefinition_34;
	// TriLibCore.Fbx.FBXAnimationCurveNode TriLibCore.Fbx.FBXDocument::AnimationCurveNodeDefinition
	FBXAnimationCurveNode_tC4DE816A0C34495F25996853CCD8E727805EB8E0 * ___AnimationCurveNodeDefinition_35;
	// TriLibCore.Fbx.FBXAnimationStack TriLibCore.Fbx.FBXDocument::AnimationStackDefinition
	FBXAnimationStack_t27A5BB8F375151605C6C4A5489005540D48C97D3 * ___AnimationStackDefinition_36;
	// TriLibCore.Fbx.FBXDeformer TriLibCore.Fbx.FBXDocument::DeformerDefinition
	FBXDeformer_t3477DA7D965B8050A94D4004029D9F3F32E075D8 * ___DeformerDefinition_37;
	// TriLibCore.Fbx.FBXMaterial TriLibCore.Fbx.FBXDocument::MaterialDefinition
	FBXMaterial_t62B60F79CD9C382E3C54A03C0A03D115D8DE21B2 * ___MaterialDefinition_38;
	// TriLibCore.Fbx.FBXVideo TriLibCore.Fbx.FBXDocument::VideoDefinition
	FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * ___VideoDefinition_39;
	// TriLibCore.Fbx.FBXTexture TriLibCore.Fbx.FBXDocument::TextureDefinition
	FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * ___TextureDefinition_40;
	// TriLibCore.Fbx.IFBXGeometryGroup TriLibCore.Fbx.FBXDocument::GeometryGroupDefinition
	RuntimeObject* ___GeometryGroupDefinition_41;
	// TriLibCore.Fbx.FBXSubDeformer TriLibCore.Fbx.FBXDocument::SubDeformerDefinition
	FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC * ___SubDeformerDefinition_42;
	// System.Collections.Generic.IDictionary`2<System.Int64,TriLibCore.Fbx.IFBXObject> TriLibCore.Fbx.FBXDocument::Objects
	RuntimeObject* ___Objects_43;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXModel> TriLibCore.Fbx.FBXDocument::Models
	RuntimeObject* ___Models_44;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXDeformer> TriLibCore.Fbx.FBXDocument::Deformers
	RuntimeObject* ___Deformers_45;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXSubDeformer> TriLibCore.Fbx.FBXDocument::SubDeformers
	RuntimeObject* ___SubDeformers_46;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationCurveNode> TriLibCore.Fbx.FBXDocument::AnimationCurveNodes
	RuntimeObject* ___AnimationCurveNodes_47;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationCurve> TriLibCore.Fbx.FBXDocument::AnimationCurves
	RuntimeObject* ___AnimationCurves_48;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationLayer> TriLibCore.Fbx.FBXDocument::AnimationLayers
	RuntimeObject* ___AnimationLayers_49;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXBlendShapeGeometryGroup> TriLibCore.Fbx.FBXDocument::BlendShapeGeometryGroups
	RuntimeObject* ___BlendShapeGeometryGroups_50;
	// System.Int32 TriLibCore.Fbx.FBXDocument::ModelsCount
	int32_t ___ModelsCount_51;
	// System.Int32 TriLibCore.Fbx.FBXDocument::MaterialsCount
	int32_t ___MaterialsCount_52;
	// System.Int32 TriLibCore.Fbx.FBXDocument::VideosCount
	int32_t ___VideosCount_53;
	// System.Int32 TriLibCore.Fbx.FBXDocument::TexturesCount
	int32_t ___TexturesCount_54;
	// System.Int32 TriLibCore.Fbx.FBXDocument::LayeredTexturesCount
	int32_t ___LayeredTexturesCount_55;
	// System.Int32 TriLibCore.Fbx.FBXDocument::GeometriesCount
	int32_t ___GeometriesCount_56;
	// System.Int32 TriLibCore.Fbx.FBXDocument::AnimationStacksCount
	int32_t ___AnimationStacksCount_57;
	// System.Int32 TriLibCore.Fbx.FBXDocument::AnimationLayersCount
	int32_t ___AnimationLayersCount_58;
	// System.Int32 TriLibCore.Fbx.FBXDocument::AnimationCurvesCount
	int32_t ___AnimationCurvesCount_59;
	// System.Int32 TriLibCore.Fbx.FBXDocument::AnimationCurveNodesCount
	int32_t ___AnimationCurveNodesCount_60;
	// System.Int32 TriLibCore.Fbx.FBXDocument::DeformersCount
	int32_t ___DeformersCount_61;
	// System.Int32 TriLibCore.Fbx.FBXDocument::SubDeformersCount
	int32_t ___SubDeformersCount_62;
	// System.Int32 TriLibCore.Fbx.FBXDocument::ObjectsCount
	int32_t ___ObjectsCount_63;
	// System.Int32 TriLibCore.Fbx.FBXDocument::ConnectedGeometriesCount
	int32_t ___ConnectedGeometriesCount_64;
	// TriLibCore.Fbx.FBXMatrixBuffer TriLibCore.Fbx.FBXDocument::MatrixBuffer
	FBXMatrixBuffer_tD32483A607F2E2B77931AB72EBE5ABA3E145BE8A * ___MatrixBuffer_65;
	// System.Boolean TriLibCore.Fbx.FBXDocument::NewTC
	bool ___NewTC_66;

public:
	inline static int32_t get_offset_of_Version_29() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___Version_29)); }
	inline int32_t get_Version_29() const { return ___Version_29; }
	inline int32_t* get_address_of_Version_29() { return &___Version_29; }
	inline void set_Version_29(int32_t value)
	{
		___Version_29 = value;
	}

	inline static int32_t get_offset_of_IsBinary_30() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___IsBinary_30)); }
	inline bool get_IsBinary_30() const { return ___IsBinary_30; }
	inline bool* get_address_of_IsBinary_30() { return &___IsBinary_30; }
	inline void set_IsBinary_30(bool value)
	{
		___IsBinary_30 = value;
	}

	inline static int32_t get_offset_of_GlobalSettings_31() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___GlobalSettings_31)); }
	inline FBXGlobalSettings_t86C6D516699288810377A4E4BCC97EF6DD14AF01 * get_GlobalSettings_31() const { return ___GlobalSettings_31; }
	inline FBXGlobalSettings_t86C6D516699288810377A4E4BCC97EF6DD14AF01 ** get_address_of_GlobalSettings_31() { return &___GlobalSettings_31; }
	inline void set_GlobalSettings_31(FBXGlobalSettings_t86C6D516699288810377A4E4BCC97EF6DD14AF01 * value)
	{
		___GlobalSettings_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GlobalSettings_31), (void*)value);
	}

	inline static int32_t get_offset_of_ModelDefinition_32() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___ModelDefinition_32)); }
	inline FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5 * get_ModelDefinition_32() const { return ___ModelDefinition_32; }
	inline FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5 ** get_address_of_ModelDefinition_32() { return &___ModelDefinition_32; }
	inline void set_ModelDefinition_32(FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5 * value)
	{
		___ModelDefinition_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ModelDefinition_32), (void*)value);
	}

	inline static int32_t get_offset_of_AnimationLayerDefinition_33() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___AnimationLayerDefinition_33)); }
	inline FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100 * get_AnimationLayerDefinition_33() const { return ___AnimationLayerDefinition_33; }
	inline FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100 ** get_address_of_AnimationLayerDefinition_33() { return &___AnimationLayerDefinition_33; }
	inline void set_AnimationLayerDefinition_33(FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100 * value)
	{
		___AnimationLayerDefinition_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimationLayerDefinition_33), (void*)value);
	}

	inline static int32_t get_offset_of_AnimationCurveDefinition_34() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___AnimationCurveDefinition_34)); }
	inline FBXAnimationCurve_t7FAE6BA30DECD09EF3155514703B92392DF78FFF * get_AnimationCurveDefinition_34() const { return ___AnimationCurveDefinition_34; }
	inline FBXAnimationCurve_t7FAE6BA30DECD09EF3155514703B92392DF78FFF ** get_address_of_AnimationCurveDefinition_34() { return &___AnimationCurveDefinition_34; }
	inline void set_AnimationCurveDefinition_34(FBXAnimationCurve_t7FAE6BA30DECD09EF3155514703B92392DF78FFF * value)
	{
		___AnimationCurveDefinition_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimationCurveDefinition_34), (void*)value);
	}

	inline static int32_t get_offset_of_AnimationCurveNodeDefinition_35() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___AnimationCurveNodeDefinition_35)); }
	inline FBXAnimationCurveNode_tC4DE816A0C34495F25996853CCD8E727805EB8E0 * get_AnimationCurveNodeDefinition_35() const { return ___AnimationCurveNodeDefinition_35; }
	inline FBXAnimationCurveNode_tC4DE816A0C34495F25996853CCD8E727805EB8E0 ** get_address_of_AnimationCurveNodeDefinition_35() { return &___AnimationCurveNodeDefinition_35; }
	inline void set_AnimationCurveNodeDefinition_35(FBXAnimationCurveNode_tC4DE816A0C34495F25996853CCD8E727805EB8E0 * value)
	{
		___AnimationCurveNodeDefinition_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimationCurveNodeDefinition_35), (void*)value);
	}

	inline static int32_t get_offset_of_AnimationStackDefinition_36() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___AnimationStackDefinition_36)); }
	inline FBXAnimationStack_t27A5BB8F375151605C6C4A5489005540D48C97D3 * get_AnimationStackDefinition_36() const { return ___AnimationStackDefinition_36; }
	inline FBXAnimationStack_t27A5BB8F375151605C6C4A5489005540D48C97D3 ** get_address_of_AnimationStackDefinition_36() { return &___AnimationStackDefinition_36; }
	inline void set_AnimationStackDefinition_36(FBXAnimationStack_t27A5BB8F375151605C6C4A5489005540D48C97D3 * value)
	{
		___AnimationStackDefinition_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimationStackDefinition_36), (void*)value);
	}

	inline static int32_t get_offset_of_DeformerDefinition_37() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___DeformerDefinition_37)); }
	inline FBXDeformer_t3477DA7D965B8050A94D4004029D9F3F32E075D8 * get_DeformerDefinition_37() const { return ___DeformerDefinition_37; }
	inline FBXDeformer_t3477DA7D965B8050A94D4004029D9F3F32E075D8 ** get_address_of_DeformerDefinition_37() { return &___DeformerDefinition_37; }
	inline void set_DeformerDefinition_37(FBXDeformer_t3477DA7D965B8050A94D4004029D9F3F32E075D8 * value)
	{
		___DeformerDefinition_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeformerDefinition_37), (void*)value);
	}

	inline static int32_t get_offset_of_MaterialDefinition_38() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___MaterialDefinition_38)); }
	inline FBXMaterial_t62B60F79CD9C382E3C54A03C0A03D115D8DE21B2 * get_MaterialDefinition_38() const { return ___MaterialDefinition_38; }
	inline FBXMaterial_t62B60F79CD9C382E3C54A03C0A03D115D8DE21B2 ** get_address_of_MaterialDefinition_38() { return &___MaterialDefinition_38; }
	inline void set_MaterialDefinition_38(FBXMaterial_t62B60F79CD9C382E3C54A03C0A03D115D8DE21B2 * value)
	{
		___MaterialDefinition_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaterialDefinition_38), (void*)value);
	}

	inline static int32_t get_offset_of_VideoDefinition_39() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___VideoDefinition_39)); }
	inline FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * get_VideoDefinition_39() const { return ___VideoDefinition_39; }
	inline FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 ** get_address_of_VideoDefinition_39() { return &___VideoDefinition_39; }
	inline void set_VideoDefinition_39(FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * value)
	{
		___VideoDefinition_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VideoDefinition_39), (void*)value);
	}

	inline static int32_t get_offset_of_TextureDefinition_40() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___TextureDefinition_40)); }
	inline FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * get_TextureDefinition_40() const { return ___TextureDefinition_40; }
	inline FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 ** get_address_of_TextureDefinition_40() { return &___TextureDefinition_40; }
	inline void set_TextureDefinition_40(FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * value)
	{
		___TextureDefinition_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextureDefinition_40), (void*)value);
	}

	inline static int32_t get_offset_of_GeometryGroupDefinition_41() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___GeometryGroupDefinition_41)); }
	inline RuntimeObject* get_GeometryGroupDefinition_41() const { return ___GeometryGroupDefinition_41; }
	inline RuntimeObject** get_address_of_GeometryGroupDefinition_41() { return &___GeometryGroupDefinition_41; }
	inline void set_GeometryGroupDefinition_41(RuntimeObject* value)
	{
		___GeometryGroupDefinition_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GeometryGroupDefinition_41), (void*)value);
	}

	inline static int32_t get_offset_of_SubDeformerDefinition_42() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___SubDeformerDefinition_42)); }
	inline FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC * get_SubDeformerDefinition_42() const { return ___SubDeformerDefinition_42; }
	inline FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC ** get_address_of_SubDeformerDefinition_42() { return &___SubDeformerDefinition_42; }
	inline void set_SubDeformerDefinition_42(FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC * value)
	{
		___SubDeformerDefinition_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubDeformerDefinition_42), (void*)value);
	}

	inline static int32_t get_offset_of_Objects_43() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___Objects_43)); }
	inline RuntimeObject* get_Objects_43() const { return ___Objects_43; }
	inline RuntimeObject** get_address_of_Objects_43() { return &___Objects_43; }
	inline void set_Objects_43(RuntimeObject* value)
	{
		___Objects_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Objects_43), (void*)value);
	}

	inline static int32_t get_offset_of_Models_44() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___Models_44)); }
	inline RuntimeObject* get_Models_44() const { return ___Models_44; }
	inline RuntimeObject** get_address_of_Models_44() { return &___Models_44; }
	inline void set_Models_44(RuntimeObject* value)
	{
		___Models_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Models_44), (void*)value);
	}

	inline static int32_t get_offset_of_Deformers_45() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___Deformers_45)); }
	inline RuntimeObject* get_Deformers_45() const { return ___Deformers_45; }
	inline RuntimeObject** get_address_of_Deformers_45() { return &___Deformers_45; }
	inline void set_Deformers_45(RuntimeObject* value)
	{
		___Deformers_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Deformers_45), (void*)value);
	}

	inline static int32_t get_offset_of_SubDeformers_46() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___SubDeformers_46)); }
	inline RuntimeObject* get_SubDeformers_46() const { return ___SubDeformers_46; }
	inline RuntimeObject** get_address_of_SubDeformers_46() { return &___SubDeformers_46; }
	inline void set_SubDeformers_46(RuntimeObject* value)
	{
		___SubDeformers_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubDeformers_46), (void*)value);
	}

	inline static int32_t get_offset_of_AnimationCurveNodes_47() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___AnimationCurveNodes_47)); }
	inline RuntimeObject* get_AnimationCurveNodes_47() const { return ___AnimationCurveNodes_47; }
	inline RuntimeObject** get_address_of_AnimationCurveNodes_47() { return &___AnimationCurveNodes_47; }
	inline void set_AnimationCurveNodes_47(RuntimeObject* value)
	{
		___AnimationCurveNodes_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimationCurveNodes_47), (void*)value);
	}

	inline static int32_t get_offset_of_AnimationCurves_48() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___AnimationCurves_48)); }
	inline RuntimeObject* get_AnimationCurves_48() const { return ___AnimationCurves_48; }
	inline RuntimeObject** get_address_of_AnimationCurves_48() { return &___AnimationCurves_48; }
	inline void set_AnimationCurves_48(RuntimeObject* value)
	{
		___AnimationCurves_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimationCurves_48), (void*)value);
	}

	inline static int32_t get_offset_of_AnimationLayers_49() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___AnimationLayers_49)); }
	inline RuntimeObject* get_AnimationLayers_49() const { return ___AnimationLayers_49; }
	inline RuntimeObject** get_address_of_AnimationLayers_49() { return &___AnimationLayers_49; }
	inline void set_AnimationLayers_49(RuntimeObject* value)
	{
		___AnimationLayers_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimationLayers_49), (void*)value);
	}

	inline static int32_t get_offset_of_BlendShapeGeometryGroups_50() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___BlendShapeGeometryGroups_50)); }
	inline RuntimeObject* get_BlendShapeGeometryGroups_50() const { return ___BlendShapeGeometryGroups_50; }
	inline RuntimeObject** get_address_of_BlendShapeGeometryGroups_50() { return &___BlendShapeGeometryGroups_50; }
	inline void set_BlendShapeGeometryGroups_50(RuntimeObject* value)
	{
		___BlendShapeGeometryGroups_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BlendShapeGeometryGroups_50), (void*)value);
	}

	inline static int32_t get_offset_of_ModelsCount_51() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___ModelsCount_51)); }
	inline int32_t get_ModelsCount_51() const { return ___ModelsCount_51; }
	inline int32_t* get_address_of_ModelsCount_51() { return &___ModelsCount_51; }
	inline void set_ModelsCount_51(int32_t value)
	{
		___ModelsCount_51 = value;
	}

	inline static int32_t get_offset_of_MaterialsCount_52() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___MaterialsCount_52)); }
	inline int32_t get_MaterialsCount_52() const { return ___MaterialsCount_52; }
	inline int32_t* get_address_of_MaterialsCount_52() { return &___MaterialsCount_52; }
	inline void set_MaterialsCount_52(int32_t value)
	{
		___MaterialsCount_52 = value;
	}

	inline static int32_t get_offset_of_VideosCount_53() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___VideosCount_53)); }
	inline int32_t get_VideosCount_53() const { return ___VideosCount_53; }
	inline int32_t* get_address_of_VideosCount_53() { return &___VideosCount_53; }
	inline void set_VideosCount_53(int32_t value)
	{
		___VideosCount_53 = value;
	}

	inline static int32_t get_offset_of_TexturesCount_54() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___TexturesCount_54)); }
	inline int32_t get_TexturesCount_54() const { return ___TexturesCount_54; }
	inline int32_t* get_address_of_TexturesCount_54() { return &___TexturesCount_54; }
	inline void set_TexturesCount_54(int32_t value)
	{
		___TexturesCount_54 = value;
	}

	inline static int32_t get_offset_of_LayeredTexturesCount_55() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___LayeredTexturesCount_55)); }
	inline int32_t get_LayeredTexturesCount_55() const { return ___LayeredTexturesCount_55; }
	inline int32_t* get_address_of_LayeredTexturesCount_55() { return &___LayeredTexturesCount_55; }
	inline void set_LayeredTexturesCount_55(int32_t value)
	{
		___LayeredTexturesCount_55 = value;
	}

	inline static int32_t get_offset_of_GeometriesCount_56() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___GeometriesCount_56)); }
	inline int32_t get_GeometriesCount_56() const { return ___GeometriesCount_56; }
	inline int32_t* get_address_of_GeometriesCount_56() { return &___GeometriesCount_56; }
	inline void set_GeometriesCount_56(int32_t value)
	{
		___GeometriesCount_56 = value;
	}

	inline static int32_t get_offset_of_AnimationStacksCount_57() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___AnimationStacksCount_57)); }
	inline int32_t get_AnimationStacksCount_57() const { return ___AnimationStacksCount_57; }
	inline int32_t* get_address_of_AnimationStacksCount_57() { return &___AnimationStacksCount_57; }
	inline void set_AnimationStacksCount_57(int32_t value)
	{
		___AnimationStacksCount_57 = value;
	}

	inline static int32_t get_offset_of_AnimationLayersCount_58() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___AnimationLayersCount_58)); }
	inline int32_t get_AnimationLayersCount_58() const { return ___AnimationLayersCount_58; }
	inline int32_t* get_address_of_AnimationLayersCount_58() { return &___AnimationLayersCount_58; }
	inline void set_AnimationLayersCount_58(int32_t value)
	{
		___AnimationLayersCount_58 = value;
	}

	inline static int32_t get_offset_of_AnimationCurvesCount_59() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___AnimationCurvesCount_59)); }
	inline int32_t get_AnimationCurvesCount_59() const { return ___AnimationCurvesCount_59; }
	inline int32_t* get_address_of_AnimationCurvesCount_59() { return &___AnimationCurvesCount_59; }
	inline void set_AnimationCurvesCount_59(int32_t value)
	{
		___AnimationCurvesCount_59 = value;
	}

	inline static int32_t get_offset_of_AnimationCurveNodesCount_60() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___AnimationCurveNodesCount_60)); }
	inline int32_t get_AnimationCurveNodesCount_60() const { return ___AnimationCurveNodesCount_60; }
	inline int32_t* get_address_of_AnimationCurveNodesCount_60() { return &___AnimationCurveNodesCount_60; }
	inline void set_AnimationCurveNodesCount_60(int32_t value)
	{
		___AnimationCurveNodesCount_60 = value;
	}

	inline static int32_t get_offset_of_DeformersCount_61() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___DeformersCount_61)); }
	inline int32_t get_DeformersCount_61() const { return ___DeformersCount_61; }
	inline int32_t* get_address_of_DeformersCount_61() { return &___DeformersCount_61; }
	inline void set_DeformersCount_61(int32_t value)
	{
		___DeformersCount_61 = value;
	}

	inline static int32_t get_offset_of_SubDeformersCount_62() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___SubDeformersCount_62)); }
	inline int32_t get_SubDeformersCount_62() const { return ___SubDeformersCount_62; }
	inline int32_t* get_address_of_SubDeformersCount_62() { return &___SubDeformersCount_62; }
	inline void set_SubDeformersCount_62(int32_t value)
	{
		___SubDeformersCount_62 = value;
	}

	inline static int32_t get_offset_of_ObjectsCount_63() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___ObjectsCount_63)); }
	inline int32_t get_ObjectsCount_63() const { return ___ObjectsCount_63; }
	inline int32_t* get_address_of_ObjectsCount_63() { return &___ObjectsCount_63; }
	inline void set_ObjectsCount_63(int32_t value)
	{
		___ObjectsCount_63 = value;
	}

	inline static int32_t get_offset_of_ConnectedGeometriesCount_64() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___ConnectedGeometriesCount_64)); }
	inline int32_t get_ConnectedGeometriesCount_64() const { return ___ConnectedGeometriesCount_64; }
	inline int32_t* get_address_of_ConnectedGeometriesCount_64() { return &___ConnectedGeometriesCount_64; }
	inline void set_ConnectedGeometriesCount_64(int32_t value)
	{
		___ConnectedGeometriesCount_64 = value;
	}

	inline static int32_t get_offset_of_MatrixBuffer_65() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___MatrixBuffer_65)); }
	inline FBXMatrixBuffer_tD32483A607F2E2B77931AB72EBE5ABA3E145BE8A * get_MatrixBuffer_65() const { return ___MatrixBuffer_65; }
	inline FBXMatrixBuffer_tD32483A607F2E2B77931AB72EBE5ABA3E145BE8A ** get_address_of_MatrixBuffer_65() { return &___MatrixBuffer_65; }
	inline void set_MatrixBuffer_65(FBXMatrixBuffer_tD32483A607F2E2B77931AB72EBE5ABA3E145BE8A * value)
	{
		___MatrixBuffer_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatrixBuffer_65), (void*)value);
	}

	inline static int32_t get_offset_of_NewTC_66() { return static_cast<int32_t>(offsetof(FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2, ___NewTC_66)); }
	inline bool get_NewTC_66() const { return ___NewTC_66; }
	inline bool* get_address_of_NewTC_66() { return &___NewTC_66; }
	inline void set_NewTC_66(bool value)
	{
		___NewTC_66 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// TriLibCore.Fbx.FbxParser_DataValueContext[]
struct DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * m_Items[1];

public:
	inline DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// Antlr4.Runtime.Dfa.DFA[]
struct DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF * m_Items[1];

public:
	inline DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// TriLibCore.Fbx.FbxParser_ArrayContext[]
struct ArrayContextU5BU5D_t0D654B7E1B1B80979F051D876DAD540123DF01C0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * m_Items[1];

public:
	inline ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TriLibCore.Fbx.FbxParser_NodeContext[]
struct NodeContextU5BU5D_tE60DD7EF4687D3544FD380AB84B03B802D19A8F7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * m_Items[1];

public:
	inline NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD505D618179AB84ED9864D70B3895FA7F3BF328D_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, int64_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m40FFEFACFB162EC28BA66FE545561D386337C234_gshared (Dictionary_2_tCD5D79DED1F046A086BA21623BFB989D9BE18860 * __this, int64_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCB07D10172F4DF977726562C57192AD86ABC27A5_gshared_inline (Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m815D25D0C2C4683C925EF64C13C3256EED949127_gshared (Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9 * __this, const RuntimeMethod* method);
// System.Int32 Antlr4.Runtime.Recognizer`2<System.Object,System.Object>::get_State()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Recognizer_2_get_State_m0002885046E1AF57A9A6335D2C8A4B802E35044E_gshared_inline (Recognizer_2_t0DEA9546FEB2ABD340DDC3F9C36E49CB1AB5333E * __this, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Recognizer`2<System.Object,System.Object>::set_State(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_2_set_State_m24D4644E01F90DE1E76EB8410FE0AA2ABE6EDC67_gshared (Recognizer_2_t0DEA9546FEB2ABD340DDC3F9C36E49CB1AB5333E * __this, int32_t ___value0, const RuntimeMethod* method);

// System.Void TriLibCore.Fbx.FBXProcessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCAB674EBB9E11BE0A44603E8C16484458CC433C7 (U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_m2EB2B72F9095FF3438D830118D57E32E1CC67195 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FBXProperties::set_PropertiesCount(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FBXProperties_set_PropertiesCount_mC789216786D60442ED5B53398D9EF5BDE12F23BB_inline (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean TriLibCore.Fbx.FBXProperties::get_IsASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.FBXProcessor::get_PropertiesCount()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t FBXProcessor_get_PropertiesCount_m5183A56A29C12DFBFC8F8FF90B8A8644647771DD_inline (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FBXProperties::.ctor(TriLibCore.Fbx.FBXProcessor,System.Int32,TriLibCore.Fbx.FbxParser/DataValueContext[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProperties__ctor_m3098EDE02A74CF8BE62373507A0F4AE4256A0029 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor0, int32_t ___propertiesCount1, DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* ___context2, const RuntimeMethod* method);
// System.String TriLibCore.Fbx.FBXProperties::BinaryGetStringValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXProperties_BinaryGetStringValue_mC3452716854C6A0CA96F8D4AFF801B3A32E4ADB7 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.String TriLibCore.Fbx.FBXProperties::ASCIIGetStringValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXProperties_ASCIIGetStringValue_mB112A4A0FF537A806BBC63A336580006D383B780 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.String TriLibCore.Fbx.FBXProperties::GetStringValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXProperties_GetStringValue_mE766887603A0456BE8B0DF47394AB1A8AFA320DE (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.FBXProperties::BinaryGetIntValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_BinaryGetIntValue_mFB5CC22AF09B59642DA816523D359D56B3E46EA6 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.FBXProperties::ASCIIGetIntValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_ASCIIGetIntValue_mD6C9B5DBC4426493A0A5ABFF5070B5575FF5031A (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.FBXProperties::GetIntValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_GetIntValue_m127D8F2E504309FFF46598EE917CC558FE81182B (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int64 TriLibCore.Fbx.FBXProperties::BinaryGetLongValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXProperties_BinaryGetLongValue_m7BF758CA43E77EA24289E5C429013AF748DA9F13 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int64 TriLibCore.Fbx.FBXProperties::ASCIIGetLongValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXProperties_ASCIIGetLongValue_m91087567F7E7DD9336F5010335E381B6AA15015B (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int64 TriLibCore.Fbx.FBXProperties::GetLongValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXProperties_GetLongValue_mF3FE09902D56D4374B7023F76C331847F99AE947 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Single TriLibCore.Fbx.FBXProperties::BinaryGetFloatValue(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, bool ___iee7541, const RuntimeMethod* method);
// System.Single TriLibCore.Fbx.FBXProperties::ASCIIGetFloatValue(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, bool ___iee7541, const RuntimeMethod* method);
// System.Single TriLibCore.Fbx.FBXProperties::GetFloatValue(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FBXProperties_GetFloatValue_m5A11D308BBEFB82B959C9AAF3A62C134927FFC2F (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, bool ___iee7541, const RuntimeMethod* method);
// System.Boolean TriLibCore.Fbx.FBXProperties::BinaryGetBoolValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXProperties_BinaryGetBoolValue_mDC972766A2268BA6E82B7B0E7FF077E483161055 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean TriLibCore.Fbx.FBXProperties::ASCIIGetBoolValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXProperties_ASCIIGetBoolValue_m7AF9FC223B8C224379A4D0526B253892BCB9941D (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean TriLibCore.Fbx.FBXProperties::GetBoolValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXProperties_GetBoolValue_m0BE83B2D2EB973A3A6EA4D92DA182AFDA0EEDF07 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 TriLibCore.Fbx.FBXProperties::BinaryGetVector2Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FBXProperties_BinaryGetVector2Value_mB57840B292A9CC0103C2BDEB38F2EA6B896D6D39 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 TriLibCore.Fbx.FBXProperties::ASCIIGetVector2Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FBXProperties_ASCIIGetVector2Value_m93841D0E02B97B4C1EF08A3D4704E8FE288A1B70 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 TriLibCore.Fbx.FBXProperties::GetVector2Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FBXProperties_GetVector2Value_mDD13E45B4CE7E70EAE479AD7134B65BA215ACCFF (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 TriLibCore.Fbx.FBXProperties::BinaryGetVector3Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FBXProperties_BinaryGetVector3Value_m3F248630D30EF94FC3FF734280C8203CEECD88DD (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 TriLibCore.Fbx.FBXProperties::ASCIIGetVector3Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FBXProperties_ASCIIGetVector3Value_m097574EB5948A535FBED947CD1C42A4DB8774A73 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 TriLibCore.Fbx.FBXProperties::GetVector3Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FBXProperties_GetVector3Value_mC6DE6016D1E9E78A3FF056C8C43EC4DD1EFD37C7 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector4 TriLibCore.Fbx.FBXProperties::BinaryGetVector4Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  FBXProperties_BinaryGetVector4Value_m9423386B2B2EB7EC29A41DBCBC22AC969B761F80 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector4 TriLibCore.Fbx.FBXProperties::ASCIIGetVector4Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  FBXProperties_ASCIIGetVector4Value_m0393D0296703611A783607B9453DD9FF89C7FB90 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector4 TriLibCore.Fbx.FBXProperties::GetVector4Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  FBXProperties_GetVector4Value_m3D8AAF338474A3A6637B80EB8FD237B2EE9C1A31 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Color TriLibCore.Fbx.FBXProperties::BinaryGetColorValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  FBXProperties_BinaryGetColorValue_m5D6E6FAD1F19C17C3F20CB1D19D4DA11A9E70E81 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Color TriLibCore.Fbx.FBXProperties::ASCIIGetColorValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  FBXProperties_ASCIIGetColorValue_m4A8390FB74E8347C9A19FA0AD634DBE0135F8BEA (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Color TriLibCore.Fbx.FBXProperties::GetColorValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  FBXProperties_GetColorValue_m66C9057CE1A8E64F5DE17E7DE612A3E0F156F28C (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 TriLibCore.Fbx.FBXProperties::BinaryGetMatrixValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  FBXProperties_BinaryGetMatrixValue_m3A51A6D82728D479A06C8732FD9209310667E8EC (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 TriLibCore.Fbx.FBXProperties::ASCIIGetMatrixValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  FBXProperties_ASCIIGetMatrixValue_mE485840E69FACBAF720E31DB0E13D41FDCA87501 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 TriLibCore.Fbx.FBXProperties::GetMatrixValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  FBXProperties_GetMatrixValue_m0A0C75A484A18F80FB7600D92E6EA6B440CB408D (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.FBXProperties::BinaryGetPropertyArrayLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_BinaryGetPropertyArrayLength_m9049CDD145CD39C44F54484C36B233481FD736FF (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.FBXProperties::ASCIIGetPropertyArrayLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_ASCIIGetPropertyArrayLength_m5CA15BB784ED21728B944A62C6847434C4D60D78 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.FBXProperties::GetPropertyArrayLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_GetPropertyArrayLength_m2CF5268C993BD291D6FE40F90BF8A2D3C9B19D75 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method);
// TriLibCore.Fbx.FBXProperty TriLibCore.Fbx.FBXProcessor::LoadProperty(System.Int32,System.Int32,System.IO.BinaryReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  FBXProcessor_LoadProperty_mED9B70041C7B2BED6952ED371E8BB4B89EB2CEA6 (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * __this, int32_t ___basePropertyIndex0, int32_t ___index1, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 ** ___binaryReader2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m174F4957D6DEDB6359835123005304B14E79132E (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// System.Int64 TriLibCore.Fbx.FBXProcessor::GetHash(System.Collections.Generic.IList`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXProcessor_GetHash_m6A3ED7E78ED0E0063D6BCF95E2718A35F75719DB (RuntimeObject* ___bytes0, int32_t ___count1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.String>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mF7B1805AB6167458AA043C48183160D082F8D51E (Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1 * __this, int64_t ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1 *, int64_t, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD505D618179AB84ED9864D70B3895FA7F3BF328D_gshared)(__this, ___key0, ___value1, method);
}
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mB1987AB89FD8B9AB5F0CA02B3AE8FE562B9FFEDC (Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1 * __this, int64_t ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1 *, int64_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_m40FFEFACFB162EC28BA66FE545561D386337C234_gshared)(__this, ___key0, ___value1, method);
}
// System.Byte TriLibCore.Fbx.FBXProperties::BinaryConvertByteValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t FBXProperties_BinaryConvertByteValue_m18341CC7F9ECAA5E46C217E6732588A954C005A1 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___binaryProperty1, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.FBXProperties::BinaryConvertIntValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_BinaryConvertIntValue_m42773BBFBBB4C350CE9F891F91E4572EF2DDB4F5 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___binaryProperty1, const RuntimeMethod* method);
// System.Int64 TriLibCore.Fbx.FBXProperties::BinaryConvertLongValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXProperties_BinaryConvertLongValue_mA0F61AD450F879C8342117D6E7208F95E20D305E (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___binaryProperty1, const RuntimeMethod* method);
// System.Single TriLibCore.Fbx.FBXProperties::BinaryConvertFloatValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FBXProperties_BinaryConvertFloatValue_m89ED95DFB0C293ECFD71CBEEF1AE6E11AAAAFC48 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___binaryProperty1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCB07D10172F4DF977726562C57192AD86ABC27A5_inline (Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9 *, const RuntimeMethod*))Nullable_1_get_HasValue_mCB07D10172F4DF977726562C57192AD86ABC27A5_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m815D25D0C2C4683C925EF64C13C3256EED949127 (Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9 * __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9 *, const RuntimeMethod*))Nullable_1_get_Value_m815D25D0C2C4683C925EF64C13C3256EED949127_gshared)(__this, method);
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::.ctor(TriLibCore.Fbx.FBXProcessor,TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte__ctor_m7492E29B7EDA6CBD77CC4A955C9140478881A6D5 (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor0, FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ___properties1, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Byte> TriLibCore.Fbx.FBXProperties::GetByteValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXProperties_GetByteValues_mA03A3D0A5A86A269982391FD768D6521BED41A6A (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.PropertyAccessorInt::.ctor(TriLibCore.Fbx.FBXProcessor,TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt__ctor_m60AA2E834C312CDB8503CDD67CD949241D527060 (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor0, FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ___properties1, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Fbx.FBXProperties::GetIntValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXProperties_GetIntValues_mD5B6E1402BFDE4C42A2530422B841C27E1BCF167 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.PropertyAccessorLong::.ctor(TriLibCore.Fbx.FBXProcessor,TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong__ctor_m75C56B4D0EB0BAF86DC0568CF62941C8E523790A (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor0, FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ___properties1, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Int64> TriLibCore.Fbx.FBXProperties::GetLongValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXProperties_GetLongValues_mCF2FABC06FDEE49A989DE6100A4C2F1C6D231153 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::.ctor(TriLibCore.Fbx.FBXProcessor,TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat__ctor_m3D52B735C69866ED9CF0A63F8E4E6B9B20544A90 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor0, FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ___properties1, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Single> TriLibCore.Fbx.FBXProperties::GetFloatValues(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXProperties_GetFloatValues_m83932B0D390483A0AE19C864174626F364F12715 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, bool ___iee7540, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_get_identity_mA0CECDE2A5E85CF014375084624F3770B5B7B79B (const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m63E67A0D3E7C3CFEA191C2E73D4380A07C9046AE (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// TriLibCore.Fbx.FBXProperty TriLibCore.Fbx.FBXProcessor::GetProperty(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  FBXProcessor_GetProperty_m86702D5C3F7D397DEB764935877D2E632E9C1784 (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * __this, int32_t ___baseIndex0, int32_t ___index1, const RuntimeMethod* method);
// TriLibCore.AssetLoaderContext TriLibCore.ReaderBase::get_AssetLoaderContext()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline (ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Antlr4.Runtime.Tree.ITerminalNode TriLibCore.Fbx.FbxParser/DataValueContext::STRING()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataValueContext_STRING_mE6F1FBFCF5DE65B15F6670AB20401C87245C9F1E (DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Intern(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Intern_m07AFEAB8C0E1C21D724BCB38CBF7D6F8AD185E75 (String_t* ___str0, const RuntimeMethod* method);
// System.String TriLibCore.Fbx.FBXProperties::ASCIIGetProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXProperties_ASCIIGetProperty_m061F474FA9F45914CB7F5DACE407415462714CD5 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Byte::TryParse(System.String,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_TryParse_m4E27B75C7E05A8F2EEF380671471C958A32BB3EA (String_t* ___s0, uint8_t* ___result1, const RuntimeMethod* method);
// System.Byte TriLibCore.Fbx.FBXProperties::ASCIIGetByteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t FBXProperties_ASCIIGetByteValue_mD67FD93B72A4087D234A911E1DB913AA68124462 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m5C60567D82BACC7D9C18F7A9A83025FC94AD0E95 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_m4FE60E3061A34FB7B835A80AC156A85649610744 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, float* ___result3, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FBXProcessor::ReleaseBinaryProperty(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProcessor_ReleaseBinaryProperty_m414DE56EB1A07154D185AA71C21110997222EB44 (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * __this, int32_t ___basePropertyIndex0, int32_t ___index1, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FBXProperties::ReleaseProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProperties_ReleaseProperty_m981A3EA768138EDF0899161616D8A2B7ECE1BCE6 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean TriLibCore.Fbx.FBXProperty::get_CanDecode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXProperty_get_CanDecode_m75216FB43624305E39A3BC72ECF29A1125F0EBB2 (FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE * __this, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader_Dispose_m2047D05935E76EBB1E910D491671B339E320203C (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FBXProperty::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProperty_Dispose_m7AB9BC04BF6141A9A24E6CD726E025C0D9BC1A6E (FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE * __this, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.FBXProperty::GetSubDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperty_GetSubDataSize_m5E05EC799CC35C3D112B77CE5C1C439BBB511E82 (FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE * __this, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.FBXProperty::GetDataSize(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperty_GetDataSize_mB6C4AAF6EE17F941A6D6A1D530BA3B55D89FE6A8 (FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE * __this, int32_t* ___subDataSize0, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FBXModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXModel__ctor_m547FD960826D1D588C72743E912F7888A2ABB694 (FBXModel_t3CEF6F87164BFD3F1A27CE2807866C044A1054D5 * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FBXObject::.ctor(TriLibCore.Fbx.FBXDocument,System.String,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXObject__ctor_mFFCEAEABB174593EDF4E56FE3379A51FCEE3055A (FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152 * __this, FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * ___document0, String_t* ___name1, int64_t ___objectId2, String_t* ___objectClass3, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FBXObject::set_ObjectType(TriLibCore.Fbx.FBXObjectType)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FBXObject_set_ObjectType_m54CE048630BF1A75528C3348107F51DFA33017FC_inline (FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152 * __this, int32_t ___value0, const RuntimeMethod* method);
// TriLibCore.Fbx.FBXDocument TriLibCore.Fbx.FBXObject::get_Document()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline (FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152 * __this, const RuntimeMethod* method);
// System.Boolean TriLibCore.Utils.TextureComparators::Equals(TriLibCore.Interfaces.ITexture,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureComparators_Equals_m5B206CA06618231B2586E9B5844CBC20466D4932 (RuntimeObject* ___a0, RuntimeObject * ___b1, const RuntimeMethod* method);
// System.Int32 TriLibCore.Utils.TextureComparators::GetHashCode(TriLibCore.Interfaces.ITexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureComparators_GetHashCode_m592831368FFB47074D7031135129D156F3DCD212 (RuntimeObject* ___a0, const RuntimeMethod* method);
// System.IO.TextWriter System.Console::get_Out()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABF_inline (const RuntimeMethod* method);
// System.IO.TextWriter System.Console::get_Error()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98A_inline (const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FbxLexer::.ctor(Antlr4.Runtime.ICharStream,System.IO.TextWriter,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxLexer__ctor_m9F31B6A6232CBC1CDB2EF61509BB037B01C58DBC (FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920 * __this, RuntimeObject* ___input0, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___output1, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___errorOutput2, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Lexer::.ctor(Antlr4.Runtime.ICharStream,System.IO.TextWriter,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_m30DC55FEE7B51828E522C1A7F17125C39DCBEA15 (Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7 * __this, RuntimeObject* ___input0, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___output1, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___errorOutput2, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Atn.LexerATNSimulator::.ctor(Antlr4.Runtime.Lexer,Antlr4.Runtime.Atn.ATN,Antlr4.Runtime.Dfa.DFA[],Antlr4.Runtime.Atn.PredictionContextCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LexerATNSimulator__ctor_mA5AEED39E1348558FEDA0D512992089C00A9B666 (LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480 * __this, Lexer_t38F664E3C596F803DFA482BC0F17846184BEB0B7 * ___recog0, ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * ___atn1, DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* ___decisionToDFA2, PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * ___sharedContextCache3, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Atn.PredictionContextCache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PredictionContextCache__ctor_mB75F0F65B8B4CB05888842F96832BC81955E1B15 (PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * __this, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Vocabulary::.ctor(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vocabulary__ctor_mC18DB1FDCC17D191BF82625647675500E3685B22 (Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___literalNames0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___symbolicNames1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Atn.ATNDeserializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATNDeserializer__ctor_m298DE3A0731B00217D2CAAAF5EFB81673D2EC960 (ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C * __this, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Dfa.DFA::.ctor(Antlr4.Runtime.Atn.DecisionState,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DFA__ctor_m06EF20A1467F0164A9AF812DF1F820CCDFE70AE7 (DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF * __this, DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44 * ___atnStartState0, int32_t ___decision1, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FbxParser::.ctor(Antlr4.Runtime.ITokenStream,System.IO.TextWriter,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxParser__ctor_m7FFEE4F77EC01B3C00E013121C398B4F621BDD22 (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, RuntimeObject* ___input0, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___output1, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___errorOutput2, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Parser::.ctor(Antlr4.Runtime.ITokenStream,System.IO.TextWriter,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m4FF0A78960939AA324606D1FA7A81FEA031466FB (Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * __this, RuntimeObject* ___input0, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___output1, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___errorOutput2, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Atn.ParserATNSimulator::.ctor(Antlr4.Runtime.Parser,Antlr4.Runtime.Atn.ATN,Antlr4.Runtime.Dfa.DFA[],Antlr4.Runtime.Atn.PredictionContextCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserATNSimulator__ctor_mDE8447A4307D82BD6FDBCD1D8374FB4407EE6DF9 (ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC * __this, Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * ___parser0, ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * ___atn1, DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* ___decisionToDFA2, PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * ___sharedContextCache3, const RuntimeMethod* method);
// System.Int32 Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_State()
inline int32_t Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_inline (Recognizer_2_t8FEA9423B15C3A552F5E40D4CCA30AEAB01E3C4F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Recognizer_2_t8FEA9423B15C3A552F5E40D4CCA30AEAB01E3C4F *, const RuntimeMethod*))Recognizer_2_get_State_m0002885046E1AF57A9A6335D2C8A4B802E35044E_gshared_inline)(__this, method);
}
// System.Void TriLibCore.Fbx.FbxParser/DocumentContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentContext__ctor_m2B5D9CEB23D57738ACCCB92A17C9238598E16949 (DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::set_State(System.Int32)
inline void Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00 (Recognizer_2_t8FEA9423B15C3A552F5E40D4CCA30AEAB01E3C4F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Recognizer_2_t8FEA9423B15C3A552F5E40D4CCA30AEAB01E3C4F *, int32_t, const RuntimeMethod*))Recognizer_2_set_State_m24D4644E01F90DE1E76EB8410FE0AA2ABE6EDC67_gshared)(__this, ___value0, method);
}
// Antlr4.Runtime.ITokenStream Antlr4.Runtime.Parser::get_TokenStream()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline (Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * __this, const RuntimeMethod* method);
// TriLibCore.Fbx.FbxParser/NodeListContext TriLibCore.Fbx.FbxParser::nodeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * FbxParser_nodeList_m6ACD15EEEB0C5FB1013CB1D7547647EADB3124BC (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FbxParser/NodeListContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeListContext__ctor_mC02566A90CFA1D53A003C20B268708C7CB405C2E (NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method);
// TriLibCore.Fbx.FbxParser/ArrayContext TriLibCore.Fbx.FbxParser::array()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * FbxParser_array_m749E0AC705B6AAB7F0147C1763F2BE27FB3448FD (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method);
// TriLibCore.Fbx.FbxParser/NodeContext TriLibCore.Fbx.FbxParser::node()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * FbxParser_node_mA92149AD574A14B9D81E1AF18E8D00DA47BBBC74 (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FbxParser/ArrayContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayContext__ctor_m91FAC2EF0461B24971DD4A8A151EA68688DEFEDB (ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method);
// TriLibCore.Fbx.FbxParser/DataListContext TriLibCore.Fbx.FbxParser::dataList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * FbxParser_dataList_m9FA4685F941B4F58BD64F4D26D7E21373EDEB7AB (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FbxParser/NodeContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeContext__ctor_m59338BC50A8C89892384CDDBECE757170F511DA9 (NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FbxParser/DataListContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataListContext__ctor_mCF22468532FFB1E671DBE77FE0D3A1645787A77F (DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method);
// TriLibCore.Fbx.FbxParser/DataValueContext TriLibCore.Fbx.FbxParser::dataValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * FbxParser_dataValue_mC8A976B7578BE490B33C913C20A77220C07DB692 (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FbxParser/DataValueContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataValueContext__ctor_m11C25F7C483EC98BE4A74A54FEE332723C0E370E (DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.ParserRuleContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserRuleContext__ctor_mC56CC27CEB2A31E78078A3D174AC913770C58FDB (ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingStateNumber1, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4 (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Byte> TriLibCore.Fbx.PropertyAccessorByte::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorByte_GetEnumerator_m313A28818F49406895B7E7719C12E8F85CDA884A (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, const RuntimeMethod* method);
// System.Byte TriLibCore.Fbx.PropertyAccessorByte::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PropertyAccessorByte_GetElement_m749539B7A1E5E0A7CDFCD7B688D1F468971824DB (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.PropertyAccessorByte::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorByte_get_Count_m5903D2BF83CF351E0A9190DCDCCA249F08CF9651 (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, const RuntimeMethod* method);
// TriLibCore.Fbx.FBXProperty TriLibCore.Fbx.FBXProcessor::LoadArrayProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  FBXProcessor_LoadArrayProperty_mDC46E3B2C891ECDE143C43D0F6FC6A9806693B2B (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * __this, int32_t ___basePropertyIndex0, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FBXProcessor::SetActiveBinaryReader(TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProcessor_SetActiveBinaryReader_m3D2195A2CECF883B72C77BF070A2F4AD6503909C (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * __this, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___activeProperty0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Single> TriLibCore.Fbx.PropertyAccessorFloat::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorFloat_GetEnumerator_m68A342A080F1A9754974829F480B7D0F7B348436 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, const RuntimeMethod* method);
// System.Single TriLibCore.Fbx.PropertyAccessorFloat::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyAccessorFloat_GetElement_m4365F7F0EC10D128412E71CB75BFE68011BD7738 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.PropertyAccessorFloat::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorFloat_get_Count_mF041757D7C628A07058605A1543CDE162B5FE32F (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Int32> TriLibCore.Fbx.PropertyAccessorInt::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorInt_GetEnumerator_m5B21BC8FE724DD999BE293E497212F3D58D933EB (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.PropertyAccessorInt::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorInt_GetElement_m9FF39B7D999D28F59B5EBCE2599F4AE85F77AF40 (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.PropertyAccessorInt::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorInt_get_Count_mF9D56A290F6E1EFF951CA24259AD1E90EF90DF27 (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Int64> TriLibCore.Fbx.PropertyAccessorLong::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorLong_GetEnumerator_m3E36C1C4081C964F8767FC7A3101E47FF90C853A (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, const RuntimeMethod* method);
// System.Int64 TriLibCore.Fbx.PropertyAccessorLong::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PropertyAccessorLong_GetElement_mDBD3985E2695017A3F5181476EDB35EE19FBB2E6 (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 TriLibCore.Fbx.PropertyAccessorLong::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorLong_get_Count_m9EC2E74AE777A25104B5F0D5D54B6444A6B2E3AA (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, const RuntimeMethod* method);
// TriLibCore.Interfaces.IRootModel TriLibCore.ReaderBase::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReaderBase_ReadStream_m11740C4C3E1CEAE8DD0390C747EB59A3A67769FD (ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * ___assetLoaderContext1, String_t* ___filename2, Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 * ___onProgress3, const RuntimeMethod* method);
// System.Boolean TriLibCore.Fbx.Reader.FbxReader::IsBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FbxReader_IsBinary_m1BE11530B06026C25C3EA590134827B88E7E2482 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// TriLibCore.Interfaces.IRootModel TriLibCore.Fbx.Reader.FbxReader::ParseBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxReader_ParseBinary_m7E259879BB6AE6B856492843585ACE74514FBB06 (FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// System.Void TriLibCore.ReaderBase::PostProcessModel(TriLibCore.Interfaces.IRootModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_PostProcessModel_mB5399AA97BA14DE8D7477821FF0DF920E0473B03 (ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * __this, RuntimeObject* ___model0, const RuntimeMethod* method);
// System.Boolean TriLibCore.Fbx.Reader.FbxReader::IsASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FbxReader_IsASCII_mB15AF22B5771FF92B248C2861CC1F634692527E3 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// TriLibCore.Interfaces.IRootModel TriLibCore.Fbx.Reader.FbxReader::ParseASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxReader_ParseASCII_m8308FD93B819FA4F72E7AA0D2DB0B727E83C15EE (FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FBXProcessor::.ctor(TriLibCore.Fbx.Reader.FbxReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProcessor__ctor_m52691003391DD6274967295C0C63A9C91C7C29B8 (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * __this, FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F * ___fbxReader0, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.Binary.FBXBinaryReader::.ctor(System.IO.Stream,TriLibCore.ReaderBase,TriLibCore.Fbx.FBXProcessor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXBinaryReader__ctor_m87EF1F4E16180B7A357028BDBC98E647E495D84B (FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___inputStream0, ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * ___reader1, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor2, const RuntimeMethod* method);
// TriLibCore.Fbx.FBXNode TriLibCore.Fbx.Binary.FBXBinaryReader::ReadDocument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD  FBXBinaryReader_ReadDocument_mDC6541A9B0957FA9F264BDA91CF1973BFACAF6AF (FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * __this, const RuntimeMethod* method);
// TriLibCore.Interfaces.IRootModel TriLibCore.Fbx.FBXProcessor::Process(TriLibCore.Fbx.FBXNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXProcessor_Process_m2F8DA2D8DD6B1AD7CF528ED33126723E58A1E04D (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * __this, FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD  ___rootNode0, bool ___isBinary1, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.Binary.FBXBinaryReader::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXBinaryReader_Unload_m32F78449DB31729125503ECDD1908289B1046565 (FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * __this, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.AntlrInputStream::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AntlrInputStream__ctor_mC5C18AD0AE6D7C9756E9BB8F07207C47B2C11677 (AntlrInputStream_tF5987E6281D3A24587B1B457A28C0D5E7BE7DB1A * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input0, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FbxLexer::.ctor(Antlr4.Runtime.ICharStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxLexer__ctor_m380C3D88D4EBB654C1F528003A6B903C331DCC68 (FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920 * __this, RuntimeObject* ___input0, const RuntimeMethod* method);
// System.Void Antlr4.Runtime.CommonTokenStream::.ctor(Antlr4.Runtime.ITokenSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTokenStream__ctor_mB7F9D0121A4211DDDCE3ADBE96BB3D11262768C8 (CommonTokenStream_t0A80A52294B69CD9EB76170958E601DFEFDE73C0 * __this, RuntimeObject* ___tokenSource0, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.ASCII.FBXNodesCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXNodesCounter__ctor_m1189356531910C28038C3EF1B46179980DF4BE40 (FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FbxParser::.ctor(Antlr4.Runtime.ITokenStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxParser__ctor_m1BFA20CF19CE6188B7D48F14D991CEA8BFE0B249 (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, RuntimeObject* ___input0, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.ASCII.FBXDocumentVisitor::.ctor(TriLibCore.ReaderBase,TriLibCore.Fbx.FBXProcessor,TriLibCore.Fbx.ASCII.FBXNodesCounter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXDocumentVisitor__ctor_mA5A89318864CDC722E4DD360AA50EA4277FE1AB7 (FBXDocumentVisitor_tE80B6B9D96BA7C9ADA919FC4579CF86A45133DF0 * __this, ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * ___reader0, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor1, FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE * ___nodesCounter2, const RuntimeMethod* method);
// TriLibCore.Fbx.FbxParser/DocumentContext TriLibCore.Fbx.FbxParser::document()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * FbxParser_document_mC1CEC9039F741AB64B1F416DC82F6F16D2F60207 (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method);
// System.Void TriLibCore.Fbx.FBXProcessor::SetupNodesBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProcessor_SetupNodesBuffer_m5596D816AAA103E76D07CE429C44F78446663385 (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * __this, int32_t ___totalNodesCount0, const RuntimeMethod* method);
// TriLibCore.Fbx.FBXNode TriLibCore.Fbx.FBXProcessor::GetNode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD  FBXProcessor_GetNode_m35E9D504BADF3E9D4008A396DD77806A8614AC04 (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * __this, int32_t ___nodeIndex0, const RuntimeMethod* method);
// System.Void TriLibCore.ReaderBase::UpdateLoadingPercentage(System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_UpdateLoadingPercentage_mE85C029F452B2FF867199DBDE590A95CF6EB31CB (ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * __this, float ___value0, int32_t ___step1, int32_t ___maxValue2, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean TriLibCore.Extensions.StreamExtensions::MatchRegex(System.IO.Stream,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamExtensions_MatchRegex_m3DC5161E677F84A9EF921771AAFBD6ABA1B014CD (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___patterns1, const RuntimeMethod* method);
// System.Void TriLibCore.ReaderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase__ctor_mE57241B3A26D1B2ECFF1C6778B1A52E97BC507EC (ReaderBase_t077B09CC69704DBD8C12EE4ACEE4A22C1BEE319F * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriLibCore.Fbx.FBXProcessor_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m008A22B387D38A0BB1AEC956E04007082F2183C2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m008A22B387D38A0BB1AEC956E04007082F2183C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C * L_0 = (U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C *)il2cpp_codegen_object_new(U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCAB674EBB9E11BE0A44603E8C16484458CC433C7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TriLibCore.Fbx.FBXProcessor_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCAB674EBB9E11BE0A44603E8C16484458CC433C7 (U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TriLibCore.Fbx.FBXProcessor_<>c::<PostProcessAnimations>b__47_0(TriLibCore.Fbx.FBXAnimationLayer,TriLibCore.Fbx.FBXAnimationLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CPostProcessAnimationsU3Eb__47_0_mE2F7A00B58AD9FFE9AF4FDBB4ECF1C605E6D4BC4 (U3CU3Ec_t9138240AEE33DCD3C6C4457704C57F11E131F79C * __this, FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100 * ___a0, FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100 * ___b1, const RuntimeMethod* method)
{
	{
		FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100 * L_0 = ___a0;
		NullCheck(L_0);
		int32_t* L_1 = L_0->get_address_of_LayerId_8();
		FBXAnimationLayer_t0E3DA27600F1007B0EE9EB5CB401245EBAF37100 * L_2 = ___b1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_LayerId_8();
		int32_t L_4 = Int32_CompareTo_m2EB2B72F9095FF3438D830118D57E32E1CC67195((int32_t*)L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// Conversion methods for marshalling of: TriLibCore.Fbx.FBXProperties
IL2CPP_EXTERN_C void FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshal_pinvoke(const FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9& unmarshaled, FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshaled_pinvoke& marshaled)
{
	Exception_t* ____processor_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_processor' of type 'FBXProperties': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____processor_2Exception, NULL);
}
IL2CPP_EXTERN_C void FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshal_pinvoke_back(const FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshaled_pinvoke& marshaled, FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9& unmarshaled)
{
	Exception_t* ____processor_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_processor' of type 'FBXProperties': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____processor_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: TriLibCore.Fbx.FBXProperties
IL2CPP_EXTERN_C void FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshal_pinvoke_cleanup(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TriLibCore.Fbx.FBXProperties
IL2CPP_EXTERN_C void FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshal_com(const FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9& unmarshaled, FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshaled_com& marshaled)
{
	Exception_t* ____processor_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_processor' of type 'FBXProperties': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____processor_2Exception, NULL);
}
IL2CPP_EXTERN_C void FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshal_com_back(const FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshaled_com& marshaled, FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9& unmarshaled)
{
	Exception_t* ____processor_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_processor' of type 'FBXProperties': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____processor_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: TriLibCore.Fbx.FBXProperties
IL2CPP_EXTERN_C void FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshal_com_cleanup(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9_marshaled_com& marshaled)
{
}
// System.Void TriLibCore.Fbx.FBXProperties::set_PropertiesCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProperties_set_PropertiesCount_mC789216786D60442ED5B53398D9EF5BDE12F23BB (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPropertiesCountU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void FBXProperties_set_PropertiesCount_mC789216786D60442ED5B53398D9EF5BDE12F23BB_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	FBXProperties_set_PropertiesCount_mC789216786D60442ED5B53398D9EF5BDE12F23BB_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean TriLibCore.Fbx.FBXProperties::get_IsASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method)
{
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = __this->get__processor_2();
		NullCheck(L_0);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_1 = L_0->get_FBXBinaryReader_11();
		return (bool)((((RuntimeObject*)(FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C(_thisAdjusted, method);
}
// System.Void TriLibCore.Fbx.FBXProperties::.ctor(TriLibCore.Fbx.FBXProcessor,System.Int32,TriLibCore.Fbx.FbxParser_DataValueContext[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProperties__ctor_m3098EDE02A74CF8BE62373507A0F4AE4256A0029 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor0, int32_t ___propertiesCount1, DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* ___context2, const RuntimeMethod* method)
{
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = ___processor0;
		__this->set__processor_2(L_0);
		DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* L_1 = ___context2;
		__this->set__context_3(L_1);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_2 = __this->get__processor_2();
		NullCheck(L_2);
		int32_t L_3 = FBXProcessor_get_PropertiesCount_m5183A56A29C12DFBFC8F8FF90B8A8644647771DD_inline(L_2, /*hidden argument*/NULL);
		__this->set_BasePropertyIndex_1(L_3);
		int32_t L_4 = ___propertiesCount1;
		FBXProperties_set_PropertiesCount_mC789216786D60442ED5B53398D9EF5BDE12F23BB_inline((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void FBXProperties__ctor_m3098EDE02A74CF8BE62373507A0F4AE4256A0029_AdjustorThunk (RuntimeObject * __this, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor0, int32_t ___propertiesCount1, DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* ___context2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	FBXProperties__ctor_m3098EDE02A74CF8BE62373507A0F4AE4256A0029(_thisAdjusted, ___processor0, ___propertiesCount1, ___context2, method);
}
// System.String TriLibCore.Fbx.FBXProperties::GetStringValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXProperties_GetStringValue_mE766887603A0456BE8B0DF47394AB1A8AFA320DE (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		bool L_0 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___index0;
		String_t* L_2 = FBXProperties_BinaryGetStringValue_mC3452716854C6A0CA96F8D4AFF801B3A32E4ADB7((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___index0;
		String_t* L_4 = FBXProperties_ASCIIGetStringValue_mB112A4A0FF537A806BBC63A336580006D383B780((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* FBXProperties_GetStringValue_mE766887603A0456BE8B0DF47394AB1A8AFA320DE_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetStringValue_mE766887603A0456BE8B0DF47394AB1A8AFA320DE(_thisAdjusted, ___index0, method);
}
// System.Int32 TriLibCore.Fbx.FBXProperties::GetIntValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_GetIntValue_m127D8F2E504309FFF46598EE917CC558FE81182B (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		bool L_0 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2 = FBXProperties_BinaryGetIntValue_mFB5CC22AF09B59642DA816523D359D56B3E46EA6((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___index0;
		int32_t L_4 = FBXProperties_ASCIIGetIntValue_mD6C9B5DBC4426493A0A5ABFF5070B5575FF5031A((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t FBXProperties_GetIntValue_m127D8F2E504309FFF46598EE917CC558FE81182B_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetIntValue_m127D8F2E504309FFF46598EE917CC558FE81182B(_thisAdjusted, ___index0, method);
}
// System.Int64 TriLibCore.Fbx.FBXProperties::GetLongValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXProperties_GetLongValue_mF3FE09902D56D4374B7023F76C331847F99AE947 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		bool L_0 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___index0;
		int64_t L_2 = FBXProperties_BinaryGetLongValue_m7BF758CA43E77EA24289E5C429013AF748DA9F13((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___index0;
		int64_t L_4 = FBXProperties_ASCIIGetLongValue_m91087567F7E7DD9336F5010335E381B6AA15015B((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int64_t FBXProperties_GetLongValue_mF3FE09902D56D4374B7023F76C331847F99AE947_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetLongValue_mF3FE09902D56D4374B7023F76C331847F99AE947(_thisAdjusted, ___index0, method);
}
// System.Single TriLibCore.Fbx.FBXProperties::GetFloatValue(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FBXProperties_GetFloatValue_m5A11D308BBEFB82B959C9AAF3A62C134927FFC2F (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, bool ___iee7541, const RuntimeMethod* method)
{
	{
		bool L_0 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___index0;
		bool L_2 = ___iee7541;
		float L_3 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0011:
	{
		int32_t L_4 = ___index0;
		bool L_5 = ___iee7541;
		float L_6 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  float FBXProperties_GetFloatValue_m5A11D308BBEFB82B959C9AAF3A62C134927FFC2F_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, bool ___iee7541, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetFloatValue_m5A11D308BBEFB82B959C9AAF3A62C134927FFC2F(_thisAdjusted, ___index0, ___iee7541, method);
}
// System.Boolean TriLibCore.Fbx.FBXProperties::GetBoolValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXProperties_GetBoolValue_m0BE83B2D2EB973A3A6EA4D92DA182AFDA0EEDF07 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		bool L_0 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___index0;
		bool L_2 = FBXProperties_BinaryGetBoolValue_mDC972766A2268BA6E82B7B0E7FF077E483161055((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___index0;
		bool L_4 = FBXProperties_ASCIIGetBoolValue_m7AF9FC223B8C224379A4D0526B253892BCB9941D((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool FBXProperties_GetBoolValue_m0BE83B2D2EB973A3A6EA4D92DA182AFDA0EEDF07_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetBoolValue_m0BE83B2D2EB973A3A6EA4D92DA182AFDA0EEDF07(_thisAdjusted, ___index0, method);
}
// UnityEngine.Vector2 TriLibCore.Fbx.FBXProperties::GetVector2Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FBXProperties_GetVector2Value_mDD13E45B4CE7E70EAE479AD7134B65BA215ACCFF (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		bool L_0 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___index0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = FBXProperties_BinaryGetVector2Value_mB57840B292A9CC0103C2BDEB38F2EA6B896D6D39((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___index0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = FBXProperties_ASCIIGetVector2Value_m93841D0E02B97B4C1EF08A3D4704E8FE288A1B70((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FBXProperties_GetVector2Value_mDD13E45B4CE7E70EAE479AD7134B65BA215ACCFF_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetVector2Value_mDD13E45B4CE7E70EAE479AD7134B65BA215ACCFF(_thisAdjusted, ___index0, method);
}
// UnityEngine.Vector3 TriLibCore.Fbx.FBXProperties::GetVector3Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FBXProperties_GetVector3Value_mC6DE6016D1E9E78A3FF056C8C43EC4DD1EFD37C7 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		bool L_0 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___index0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = FBXProperties_BinaryGetVector3Value_m3F248630D30EF94FC3FF734280C8203CEECD88DD((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___index0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = FBXProperties_ASCIIGetVector3Value_m097574EB5948A535FBED947CD1C42A4DB8774A73((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FBXProperties_GetVector3Value_mC6DE6016D1E9E78A3FF056C8C43EC4DD1EFD37C7_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetVector3Value_mC6DE6016D1E9E78A3FF056C8C43EC4DD1EFD37C7(_thisAdjusted, ___index0, method);
}
// UnityEngine.Vector4 TriLibCore.Fbx.FBXProperties::GetVector4Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  FBXProperties_GetVector4Value_m3D8AAF338474A3A6637B80EB8FD237B2EE9C1A31 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		bool L_0 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___index0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = FBXProperties_BinaryGetVector4Value_m9423386B2B2EB7EC29A41DBCBC22AC969B761F80((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___index0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = FBXProperties_ASCIIGetVector4Value_m0393D0296703611A783607B9453DD9FF89C7FB90((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  FBXProperties_GetVector4Value_m3D8AAF338474A3A6637B80EB8FD237B2EE9C1A31_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetVector4Value_m3D8AAF338474A3A6637B80EB8FD237B2EE9C1A31(_thisAdjusted, ___index0, method);
}
// UnityEngine.Color TriLibCore.Fbx.FBXProperties::GetColorValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  FBXProperties_GetColorValue_m66C9057CE1A8E64F5DE17E7DE612A3E0F156F28C (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		bool L_0 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___index0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = FBXProperties_BinaryGetColorValue_m5D6E6FAD1F19C17C3F20CB1D19D4DA11A9E70E81((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___index0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = FBXProperties_ASCIIGetColorValue_m4A8390FB74E8347C9A19FA0AD634DBE0135F8BEA((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  FBXProperties_GetColorValue_m66C9057CE1A8E64F5DE17E7DE612A3E0F156F28C_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetColorValue_m66C9057CE1A8E64F5DE17E7DE612A3E0F156F28C(_thisAdjusted, ___index0, method);
}
// UnityEngine.Matrix4x4 TriLibCore.Fbx.FBXProperties::GetMatrixValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  FBXProperties_GetMatrixValue_m0A0C75A484A18F80FB7600D92E6EA6B440CB408D (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = FBXProperties_BinaryGetMatrixValue_m3A51A6D82728D479A06C8732FD9209310667E8EC((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_2 = FBXProperties_ASCIIGetMatrixValue_mE485840E69FACBAF720E31DB0E13D41FDCA87501((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  FBXProperties_GetMatrixValue_m0A0C75A484A18F80FB7600D92E6EA6B440CB408D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetMatrixValue_m0A0C75A484A18F80FB7600D92E6EA6B440CB408D(_thisAdjusted, method);
}
// System.Int32 TriLibCore.Fbx.FBXProperties::GetPropertyArrayLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_GetPropertyArrayLength_m2CF5268C993BD291D6FE40F90BF8A2D3C9B19D75 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = FBXProperties_BinaryGetPropertyArrayLength_m9049CDD145CD39C44F54484C36B233481FD736FF((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_000f:
	{
		int32_t L_2 = FBXProperties_ASCIIGetPropertyArrayLength_m5CA15BB784ED21728B944A62C6847434C4D60D78((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t FBXProperties_GetPropertyArrayLength_m2CF5268C993BD291D6FE40F90BF8A2D3C9B19D75_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetPropertyArrayLength_m2CF5268C993BD291D6FE40F90BF8A2D3C9B19D75(_thisAdjusted, method);
}
// System.String TriLibCore.Fbx.FBXProperties::BinaryGetStringValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXProperties_BinaryGetStringValue_mC3452716854C6A0CA96F8D4AFF801B3A32E4ADB7 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FBXProperties_BinaryGetStringValue_mC3452716854C6A0CA96F8D4AFF801B3A32E4ADB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * V_1 = NULL;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B9_0 = 0;
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = __this->get__processor_2();
		int32_t L_1 = __this->get_BasePropertyIndex_1();
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_3 = FBXProcessor_LoadProperty_mED9B70041C7B2BED6952ED371E8BB4B89EB2CEA6(L_0, L_1, L_2, (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 **)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_4 = V_0;
		int32_t L_5 = L_4.get_ArrayLength_1();
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0022:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_7 = V_1;
		NullCheck(L_7);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_8 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_7);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_9 = V_0;
		int64_t L_10 = L_9.get_Position_5();
		NullCheck(L_8);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_8, L_10, 0);
		int32_t L_11 = V_2;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_12 = __this->get__processor_2();
		NullCheck(L_12);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_13 = L_12->get_FBXBinaryReader_11();
		NullCheck(L_13);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = L_13->get_Buffer_11();
		NullCheck(L_14);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))))
		{
			goto IL_0055;
		}
	}
	{
		Exception_t * L_15 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_15, _stringLiteral6E0E0148D20D0B9BFF59E1BA614145BD6AA4A2CF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, FBXProperties_BinaryGetStringValue_mC3452716854C6A0CA96F8D4AFF801B3A32E4ADB7_RuntimeMethod_var);
	}

IL_0055:
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_16 = __this->get__processor_2();
		NullCheck(L_16);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_17 = L_16->get_FBXBinaryReader_11();
		NullCheck(L_17);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = L_17->get_Buffer_11();
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_19 = __this->get__processor_2();
		NullCheck(L_19);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_20 = L_19->get_FBXBinaryReader_11();
		NullCheck(L_20);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = L_20->get_Buffer_11();
		NullCheck(L_21);
		Array_Clear_m174F4957D6DEDB6359835123005304B14E79132E((RuntimeArray *)(RuntimeArray *)L_18, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))), /*hidden argument*/NULL);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_22 = __this->get__processor_2();
		NullCheck(L_22);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_23 = L_22->get_FBXBinaryReader_11();
		NullCheck(L_23);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_24 = L_23->get_Chars_10();
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_25 = __this->get__processor_2();
		NullCheck(L_25);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_26 = L_25->get_FBXBinaryReader_11();
		NullCheck(L_26);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_27 = L_26->get_Chars_10();
		NullCheck(L_27);
		Array_Clear_m174F4957D6DEDB6359835123005304B14E79132E((RuntimeArray *)(RuntimeArray *)L_24, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))), /*hidden argument*/NULL);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_28 = V_1;
		NullCheck(L_28);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_29 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_28);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_30 = __this->get__processor_2();
		NullCheck(L_30);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_31 = L_30->get_FBXBinaryReader_11();
		NullCheck(L_31);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = L_31->get_Buffer_11();
		int32_t L_33 = V_2;
		NullCheck(L_29);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_29, L_32, 0, L_33);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_34 = __this->get__processor_2();
		NullCheck(L_34);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_35 = L_34->get_FBXBinaryReader_11();
		NullCheck(L_35);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = L_35->get_Buffer_11();
		int32_t L_37 = V_2;
		int64_t L_38 = FBXProcessor_GetHash_m6A3ED7E78ED0E0063D6BCF95E2718A35F75719DB((RuntimeObject*)(RuntimeObject*)L_36, L_37, /*hidden argument*/NULL);
		V_3 = L_38;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_39 = __this->get__processor_2();
		NullCheck(L_39);
		Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1 * L_40 = L_39->get__strings_10();
		int64_t L_41 = V_3;
		NullCheck(L_40);
		bool L_42 = Dictionary_2_TryGetValue_mF7B1805AB6167458AA043C48183160D082F8D51E(L_40, L_41, (String_t**)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_mF7B1805AB6167458AA043C48183160D082F8D51E_RuntimeMethod_var);
		if (L_42)
		{
			goto IL_0193;
		}
	}
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_43 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_44 = __this->get__processor_2();
		NullCheck(L_44);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_45 = L_44->get_FBXBinaryReader_11();
		NullCheck(L_45);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = L_45->get_Buffer_11();
		int32_t L_47 = V_2;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_48 = __this->get__processor_2();
		NullCheck(L_48);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_49 = L_48->get_FBXBinaryReader_11();
		NullCheck(L_49);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_50 = L_49->get_Chars_10();
		NullCheck(L_43);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*, int32_t >::Invoke(24 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_43, L_46, 0, L_47, L_50, 0);
		V_5 = 0;
		V_6 = 0;
	}

IL_0126:
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_51 = __this->get__processor_2();
		NullCheck(L_51);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_52 = L_51->get_FBXBinaryReader_11();
		NullCheck(L_52);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_53 = L_52->get_Chars_10();
		int32_t L_54 = V_5;
		int32_t L_55 = L_54;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		NullCheck(L_53);
		int32_t L_56 = L_55;
		uint16_t L_57 = (uint16_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if (!L_57)
		{
			goto IL_0143;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_0147;
	}

IL_0143:
	{
		int32_t L_58 = V_6;
		G_B9_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_0147:
	{
		V_6 = G_B9_0;
		int32_t L_59 = V_5;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_60 = __this->get__processor_2();
		NullCheck(L_60);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_61 = L_60->get_FBXBinaryReader_11();
		NullCheck(L_61);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_62 = L_61->get_Buffer_11();
		NullCheck(L_62);
		if ((((int32_t)L_59) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))))
		{
			goto IL_0164;
		}
	}
	{
		int32_t L_63 = V_6;
		if ((((int32_t)L_63) < ((int32_t)2)))
		{
			goto IL_0126;
		}
	}

IL_0164:
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_64 = __this->get__processor_2();
		NullCheck(L_64);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_65 = L_64->get_FBXBinaryReader_11();
		NullCheck(L_65);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_66 = L_65->get_Chars_10();
		int32_t L_67 = V_5;
		String_t* L_68 = String_CreateString_mC7FB167C0D5B97F7EF502AF54399C61DD5B87509(NULL, L_66, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)2)), /*hidden argument*/NULL);
		V_4 = L_68;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_69 = __this->get__processor_2();
		NullCheck(L_69);
		Dictionary_2_t3D2FBA63C823AC073F43CE4ED3A1350A7E7953E1 * L_70 = L_69->get__strings_10();
		int64_t L_71 = V_3;
		String_t* L_72 = V_4;
		NullCheck(L_70);
		Dictionary_2_Add_mB1987AB89FD8B9AB5F0CA02B3AE8FE562B9FFEDC(L_70, L_71, L_72, /*hidden argument*/Dictionary_2_Add_mB1987AB89FD8B9AB5F0CA02B3AE8FE562B9FFEDC_RuntimeMethod_var);
	}

IL_0193:
	{
		String_t* L_73 = V_4;
		return L_73;
	}
}
IL2CPP_EXTERN_C  String_t* FBXProperties_BinaryGetStringValue_mC3452716854C6A0CA96F8D4AFF801B3A32E4ADB7_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryGetStringValue_mC3452716854C6A0CA96F8D4AFF801B3A32E4ADB7(_thisAdjusted, ___index0, method);
}
// System.Byte TriLibCore.Fbx.FBXProperties::BinaryConvertByteValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t FBXProperties_BinaryConvertByteValue_m18341CC7F9ECAA5E46C217E6732588A954C005A1 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___binaryProperty1, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	{
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_0 = ___binaryProperty1;
		Il2CppChar L_1 = L_0.get_PropertyType_4();
		V_0 = L_1;
		Il2CppChar L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)82)))))
		{
			goto IL_0048;
		}
	}
	{
		Il2CppChar L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)66))))
		{
			case 0:
			{
				goto IL_0098;
			}
			case 1:
			{
				goto IL_0089;
			}
			case 2:
			{
				goto IL_00b8;
			}
			case 3:
			{
				goto IL_00c0;
			}
			case 4:
			{
				goto IL_00b0;
			}
			case 5:
			{
				goto IL_00c0;
			}
			case 6:
			{
				goto IL_00c0;
			}
			case 7:
			{
				goto IL_00a0;
			}
			case 8:
			{
				goto IL_00c0;
			}
			case 9:
			{
				goto IL_00c0;
			}
			case 10:
			{
				goto IL_00a8;
			}
		}
	}
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)82))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00c0;
	}

IL_0048:
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)89))))
		{
			goto IL_0090;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)98))))
		{
			case 0:
			{
				goto IL_0098;
			}
			case 1:
			{
				goto IL_0089;
			}
			case 2:
			{
				goto IL_00b8;
			}
			case 3:
			{
				goto IL_00c0;
			}
			case 4:
			{
				goto IL_00b0;
			}
			case 5:
			{
				goto IL_00c0;
			}
			case 6:
			{
				goto IL_00c0;
			}
			case 7:
			{
				goto IL_00a0;
			}
			case 8:
			{
				goto IL_00c0;
			}
			case 9:
			{
				goto IL_00c0;
			}
			case 10:
			{
				goto IL_00a8;
			}
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)121))))
		{
			goto IL_0090;
		}
	}
	{
		goto IL_00c0;
	}

IL_0089:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_8 = ___binaryReader0;
		NullCheck(L_8);
		uint8_t L_9 = VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_8);
		return L_9;
	}

IL_0090:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_10 = ___binaryReader0;
		NullCheck(L_10);
		int16_t L_11 = VirtFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_10);
		return (uint8_t)(((int32_t)((uint8_t)L_11)));
	}

IL_0098:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_12 = ___binaryReader0;
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_12);
		return (uint8_t)(((int32_t)((uint8_t)L_13)));
	}

IL_00a0:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_14 = ___binaryReader0;
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_14);
		return (uint8_t)(((int32_t)((uint8_t)L_15)));
	}

IL_00a8:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_16 = ___binaryReader0;
		NullCheck(L_16);
		int64_t L_17 = VirtFuncInvoker0< int64_t >::Invoke(18 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_16);
		return (uint8_t)(((int32_t)((uint8_t)L_17)));
	}

IL_00b0:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_18 = ___binaryReader0;
		NullCheck(L_18);
		float L_19 = VirtFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_18);
		return (uint8_t)(il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_19));
	}

IL_00b8:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_20 = ___binaryReader0;
		NullCheck(L_20);
		double L_21 = VirtFuncInvoker0< double >::Invoke(21 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_20);
		return (uint8_t)(il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(L_21));
	}

IL_00c0:
	{
		return (uint8_t)0;
	}
}
IL2CPP_EXTERN_C  uint8_t FBXProperties_BinaryConvertByteValue_m18341CC7F9ECAA5E46C217E6732588A954C005A1_AdjustorThunk (RuntimeObject * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___binaryProperty1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryConvertByteValue_m18341CC7F9ECAA5E46C217E6732588A954C005A1(_thisAdjusted, ___binaryReader0, ___binaryProperty1, method);
}
// System.Int32 TriLibCore.Fbx.FBXProperties::BinaryGetIntValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_BinaryGetIntValue_mFB5CC22AF09B59642DA816523D359D56B3E46EA6 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * V_1 = NULL;
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = __this->get__processor_2();
		int32_t L_1 = __this->get_BasePropertyIndex_1();
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_3 = FBXProcessor_LoadProperty_mED9B70041C7B2BED6952ED371E8BB4B89EB2CEA6(L_0, L_1, L_2, (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 **)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_4 = V_1;
		NullCheck(L_4);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_4);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_6 = V_0;
		int64_t L_7 = L_6.get_Position_5();
		NullCheck(L_5);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_5, L_7, 0);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_8 = V_1;
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_9 = V_0;
		int32_t L_10 = FBXProperties_BinaryConvertIntValue_m42773BBFBBB4C350CE9F891F91E4572EF2DDB4F5((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t FBXProperties_BinaryGetIntValue_mFB5CC22AF09B59642DA816523D359D56B3E46EA6_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryGetIntValue_mFB5CC22AF09B59642DA816523D359D56B3E46EA6(_thisAdjusted, ___index0, method);
}
// System.Int32 TriLibCore.Fbx.FBXProperties::BinaryConvertIntValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_BinaryConvertIntValue_m42773BBFBBB4C350CE9F891F91E4572EF2DDB4F5 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___binaryProperty1, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	{
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_0 = ___binaryProperty1;
		Il2CppChar L_1 = L_0.get_PropertyType_4();
		V_0 = L_1;
		Il2CppChar L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)82)))))
		{
			goto IL_0048;
		}
	}
	{
		Il2CppChar L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)66))))
		{
			case 0:
			{
				goto IL_0097;
			}
			case 1:
			{
				goto IL_0089;
			}
			case 2:
			{
				goto IL_00b5;
			}
			case 3:
			{
				goto IL_00bd;
			}
			case 4:
			{
				goto IL_00ad;
			}
			case 5:
			{
				goto IL_00bd;
			}
			case 6:
			{
				goto IL_00bd;
			}
			case 7:
			{
				goto IL_009e;
			}
			case 8:
			{
				goto IL_00bd;
			}
			case 9:
			{
				goto IL_00bd;
			}
			case 10:
			{
				goto IL_00a5;
			}
		}
	}
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)82))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00bd;
	}

IL_0048:
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)89))))
		{
			goto IL_0090;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)98))))
		{
			case 0:
			{
				goto IL_0097;
			}
			case 1:
			{
				goto IL_0089;
			}
			case 2:
			{
				goto IL_00b5;
			}
			case 3:
			{
				goto IL_00bd;
			}
			case 4:
			{
				goto IL_00ad;
			}
			case 5:
			{
				goto IL_00bd;
			}
			case 6:
			{
				goto IL_00bd;
			}
			case 7:
			{
				goto IL_009e;
			}
			case 8:
			{
				goto IL_00bd;
			}
			case 9:
			{
				goto IL_00bd;
			}
			case 10:
			{
				goto IL_00a5;
			}
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)121))))
		{
			goto IL_0090;
		}
	}
	{
		goto IL_00bd;
	}

IL_0089:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_8 = ___binaryReader0;
		NullCheck(L_8);
		uint8_t L_9 = VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_8);
		return L_9;
	}

IL_0090:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_10 = ___binaryReader0;
		NullCheck(L_10);
		int16_t L_11 = VirtFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_10);
		return L_11;
	}

IL_0097:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_12 = ___binaryReader0;
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_12);
		return L_13;
	}

IL_009e:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_14 = ___binaryReader0;
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_14);
		return L_15;
	}

IL_00a5:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_16 = ___binaryReader0;
		NullCheck(L_16);
		int64_t L_17 = VirtFuncInvoker0< int64_t >::Invoke(18 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_16);
		return (((int32_t)((int32_t)L_17)));
	}

IL_00ad:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_18 = ___binaryReader0;
		NullCheck(L_18);
		float L_19 = VirtFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_18);
		return (((int32_t)((int32_t)L_19)));
	}

IL_00b5:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_20 = ___binaryReader0;
		NullCheck(L_20);
		double L_21 = VirtFuncInvoker0< double >::Invoke(21 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_20);
		return (((int32_t)((int32_t)L_21)));
	}

IL_00bd:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t FBXProperties_BinaryConvertIntValue_m42773BBFBBB4C350CE9F891F91E4572EF2DDB4F5_AdjustorThunk (RuntimeObject * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___binaryProperty1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryConvertIntValue_m42773BBFBBB4C350CE9F891F91E4572EF2DDB4F5(_thisAdjusted, ___binaryReader0, ___binaryProperty1, method);
}
// System.Int64 TriLibCore.Fbx.FBXProperties::BinaryGetLongValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXProperties_BinaryGetLongValue_m7BF758CA43E77EA24289E5C429013AF748DA9F13 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * V_1 = NULL;
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = __this->get__processor_2();
		int32_t L_1 = __this->get_BasePropertyIndex_1();
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_3 = FBXProcessor_LoadProperty_mED9B70041C7B2BED6952ED371E8BB4B89EB2CEA6(L_0, L_1, L_2, (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 **)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_4 = V_1;
		NullCheck(L_4);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_4);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_6 = V_0;
		int64_t L_7 = L_6.get_Position_5();
		NullCheck(L_5);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_5, L_7, 0);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_8 = V_1;
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_9 = V_0;
		int64_t L_10 = FBXProperties_BinaryConvertLongValue_mA0F61AD450F879C8342117D6E7208F95E20D305E((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  int64_t FBXProperties_BinaryGetLongValue_m7BF758CA43E77EA24289E5C429013AF748DA9F13_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryGetLongValue_m7BF758CA43E77EA24289E5C429013AF748DA9F13(_thisAdjusted, ___index0, method);
}
// System.Int64 TriLibCore.Fbx.FBXProperties::BinaryConvertLongValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXProperties_BinaryConvertLongValue_mA0F61AD450F879C8342117D6E7208F95E20D305E (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___binaryProperty1, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	{
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_0 = ___binaryProperty1;
		Il2CppChar L_1 = L_0.get_PropertyType_4();
		V_0 = L_1;
		Il2CppChar L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)82)))))
		{
			goto IL_0048;
		}
	}
	{
		Il2CppChar L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)66))))
		{
			case 0:
			{
				goto IL_0099;
			}
			case 1:
			{
				goto IL_0089;
			}
			case 2:
			{
				goto IL_00b8;
			}
			case 3:
			{
				goto IL_00c0;
			}
			case 4:
			{
				goto IL_00b0;
			}
			case 5:
			{
				goto IL_00c0;
			}
			case 6:
			{
				goto IL_00c0;
			}
			case 7:
			{
				goto IL_00a1;
			}
			case 8:
			{
				goto IL_00c0;
			}
			case 9:
			{
				goto IL_00c0;
			}
			case 10:
			{
				goto IL_00a9;
			}
		}
	}
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)82))))
		{
			goto IL_0089;
		}
	}
	{
		goto IL_00c0;
	}

IL_0048:
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)89))))
		{
			goto IL_0091;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)98))))
		{
			case 0:
			{
				goto IL_0099;
			}
			case 1:
			{
				goto IL_0089;
			}
			case 2:
			{
				goto IL_00b8;
			}
			case 3:
			{
				goto IL_00c0;
			}
			case 4:
			{
				goto IL_00b0;
			}
			case 5:
			{
				goto IL_00c0;
			}
			case 6:
			{
				goto IL_00c0;
			}
			case 7:
			{
				goto IL_00a1;
			}
			case 8:
			{
				goto IL_00c0;
			}
			case 9:
			{
				goto IL_00c0;
			}
			case 10:
			{
				goto IL_00a9;
			}
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)121))))
		{
			goto IL_0091;
		}
	}
	{
		goto IL_00c0;
	}

IL_0089:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_8 = ___binaryReader0;
		NullCheck(L_8);
		uint8_t L_9 = VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_8);
		return (((int64_t)((uint64_t)L_9)));
	}

IL_0091:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_10 = ___binaryReader0;
		NullCheck(L_10);
		int16_t L_11 = VirtFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_10);
		return (((int64_t)((int64_t)L_11)));
	}

IL_0099:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_12 = ___binaryReader0;
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_12);
		return (((int64_t)((int64_t)L_13)));
	}

IL_00a1:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_14 = ___binaryReader0;
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_14);
		return (((int64_t)((int64_t)L_15)));
	}

IL_00a9:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_16 = ___binaryReader0;
		NullCheck(L_16);
		int64_t L_17 = VirtFuncInvoker0< int64_t >::Invoke(18 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_16);
		return L_17;
	}

IL_00b0:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_18 = ___binaryReader0;
		NullCheck(L_18);
		float L_19 = VirtFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_18);
		return (((int64_t)((int64_t)L_19)));
	}

IL_00b8:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_20 = ___binaryReader0;
		NullCheck(L_20);
		double L_21 = VirtFuncInvoker0< double >::Invoke(21 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_20);
		return (((int64_t)((int64_t)L_21)));
	}

IL_00c0:
	{
		return (((int64_t)((int64_t)0)));
	}
}
IL2CPP_EXTERN_C  int64_t FBXProperties_BinaryConvertLongValue_mA0F61AD450F879C8342117D6E7208F95E20D305E_AdjustorThunk (RuntimeObject * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___binaryProperty1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryConvertLongValue_mA0F61AD450F879C8342117D6E7208F95E20D305E(_thisAdjusted, ___binaryReader0, ___binaryProperty1, method);
}
// System.Single TriLibCore.Fbx.FBXProperties::BinaryGetFloatValue(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, bool ___iee7541, const RuntimeMethod* method)
{
	FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * V_1 = NULL;
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = __this->get__processor_2();
		int32_t L_1 = __this->get_BasePropertyIndex_1();
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_3 = FBXProcessor_LoadProperty_mED9B70041C7B2BED6952ED371E8BB4B89EB2CEA6(L_0, L_1, L_2, (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 **)(&V_1), /*hidden argument*/NULL);
		V_0 = L_3;
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_4 = V_1;
		NullCheck(L_4);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_4);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_6 = V_0;
		int64_t L_7 = L_6.get_Position_5();
		NullCheck(L_5);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_5, L_7, 0);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_8 = V_1;
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_9 = V_0;
		float L_10 = FBXProperties_BinaryConvertFloatValue_m89ED95DFB0C293ECFD71CBEEF1AE6E11AAAAFC48((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  float FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, bool ___iee7541, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59(_thisAdjusted, ___index0, ___iee7541, method);
}
// System.Single TriLibCore.Fbx.FBXProperties::BinaryConvertFloatValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FBXProperties_BinaryConvertFloatValue_m89ED95DFB0C293ECFD71CBEEF1AE6E11AAAAFC48 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___binaryProperty1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FBXProperties_BinaryConvertFloatValue_m89ED95DFB0C293ECFD71CBEEF1AE6E11AAAAFC48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	double V_1 = 0.0;
	double G_B17_0 = 0.0;
	{
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_0 = ___binaryProperty1;
		Il2CppChar L_1 = L_0.get_PropertyType_4();
		V_0 = L_1;
		Il2CppChar L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)82)))))
		{
			goto IL_004b;
		}
	}
	{
		Il2CppChar L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)66))))
		{
			case 0:
			{
				goto IL_009c;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_00bb;
			}
			case 3:
			{
				goto IL_00df;
			}
			case 4:
			{
				goto IL_00b4;
			}
			case 5:
			{
				goto IL_00df;
			}
			case 6:
			{
				goto IL_00df;
			}
			case 7:
			{
				goto IL_00a4;
			}
			case 8:
			{
				goto IL_00df;
			}
			case 9:
			{
				goto IL_00df;
			}
			case 10:
			{
				goto IL_00ac;
			}
		}
	}
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)82))))
		{
			goto IL_008c;
		}
	}
	{
		goto IL_00df;
	}

IL_004b:
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)89))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)98))))
		{
			case 0:
			{
				goto IL_009c;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_00bb;
			}
			case 3:
			{
				goto IL_00df;
			}
			case 4:
			{
				goto IL_00b4;
			}
			case 5:
			{
				goto IL_00df;
			}
			case 6:
			{
				goto IL_00df;
			}
			case 7:
			{
				goto IL_00a4;
			}
			case 8:
			{
				goto IL_00df;
			}
			case 9:
			{
				goto IL_00df;
			}
			case 10:
			{
				goto IL_00ac;
			}
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)121))))
		{
			goto IL_0094;
		}
	}
	{
		goto IL_00df;
	}

IL_008c:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_8 = ___binaryReader0;
		NullCheck(L_8);
		uint8_t L_9 = VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_8);
		return (((float)((float)L_9)));
	}

IL_0094:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_10 = ___binaryReader0;
		NullCheck(L_10);
		int16_t L_11 = VirtFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_10);
		return (((float)((float)L_11)));
	}

IL_009c:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_12 = ___binaryReader0;
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_12);
		return (((float)((float)L_13)));
	}

IL_00a4:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_14 = ___binaryReader0;
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_14);
		return (((float)((float)L_15)));
	}

IL_00ac:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_16 = ___binaryReader0;
		NullCheck(L_16);
		int64_t L_17 = VirtFuncInvoker0< int64_t >::Invoke(18 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_16);
		return (((float)((float)L_17)));
	}

IL_00b4:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_18 = ___binaryReader0;
		NullCheck(L_18);
		float L_19 = VirtFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_18);
		return L_19;
	}

IL_00bb:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_20 = ___binaryReader0;
		NullCheck(L_20);
		double L_21 = VirtFuncInvoker0< double >::Invoke(21 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_20);
		V_1 = L_21;
		IL2CPP_RUNTIME_CLASS_INIT(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_il2cpp_TypeInfo_var);
		bool L_22 = Nullable_1_get_HasValue_mCB07D10172F4DF977726562C57192AD86ABC27A5_inline((Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9 *)(((FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_StaticFields*)il2cpp_codegen_static_fields_for(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_il2cpp_TypeInfo_var))->get_address_of_FBXConversionPrecision_11()), /*hidden argument*/Nullable_1_get_HasValue_mCB07D10172F4DF977726562C57192AD86ABC27A5_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_00d1;
		}
	}
	{
		double L_23 = V_1;
		G_B17_0 = L_23;
		goto IL_00dd;
	}

IL_00d1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_il2cpp_TypeInfo_var);
		double L_24 = Nullable_1_get_Value_m815D25D0C2C4683C925EF64C13C3256EED949127((Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9 *)(((FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_StaticFields*)il2cpp_codegen_static_fields_for(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_il2cpp_TypeInfo_var))->get_address_of_FBXConversionPrecision_11()), /*hidden argument*/Nullable_1_get_Value_m815D25D0C2C4683C925EF64C13C3256EED949127_RuntimeMethod_var);
		double L_25 = V_1;
		G_B17_0 = ((double)il2cpp_codegen_multiply((double)L_24, (double)L_25));
	}

IL_00dd:
	{
		return (((float)((float)G_B17_0)));
	}

IL_00df:
	{
		return (0.0f);
	}
}
IL2CPP_EXTERN_C  float FBXProperties_BinaryConvertFloatValue_m89ED95DFB0C293ECFD71CBEEF1AE6E11AAAAFC48_AdjustorThunk (RuntimeObject * __this, BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___binaryReader0, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  ___binaryProperty1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryConvertFloatValue_m89ED95DFB0C293ECFD71CBEEF1AE6E11AAAAFC48(_thisAdjusted, ___binaryReader0, ___binaryProperty1, method);
}
// System.Collections.Generic.IList`1<System.Byte> TriLibCore.Fbx.FBXProperties::GetByteValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXProperties_GetByteValues_mA03A3D0A5A86A269982391FD768D6521BED41A6A (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FBXProperties_GetByteValues_mA03A3D0A5A86A269982391FD768D6521BED41A6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = __this->get__processor_2();
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  L_1 = (*(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this);
		PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * L_2 = (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 *)il2cpp_codegen_object_new(PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5_il2cpp_TypeInfo_var);
		PropertyAccessorByte__ctor_m7492E29B7EDA6CBD77CC4A955C9140478881A6D5(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FBXProperties_GetByteValues_mA03A3D0A5A86A269982391FD768D6521BED41A6A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetByteValues_mA03A3D0A5A86A269982391FD768D6521BED41A6A(_thisAdjusted, method);
}
// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Fbx.FBXProperties::GetIntValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXProperties_GetIntValues_mD5B6E1402BFDE4C42A2530422B841C27E1BCF167 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FBXProperties_GetIntValues_mD5B6E1402BFDE4C42A2530422B841C27E1BCF167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = __this->get__processor_2();
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  L_1 = (*(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this);
		PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * L_2 = (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC *)il2cpp_codegen_object_new(PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC_il2cpp_TypeInfo_var);
		PropertyAccessorInt__ctor_m60AA2E834C312CDB8503CDD67CD949241D527060(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FBXProperties_GetIntValues_mD5B6E1402BFDE4C42A2530422B841C27E1BCF167_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetIntValues_mD5B6E1402BFDE4C42A2530422B841C27E1BCF167(_thisAdjusted, method);
}
// System.Collections.Generic.IList`1<System.Int64> TriLibCore.Fbx.FBXProperties::GetLongValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXProperties_GetLongValues_mCF2FABC06FDEE49A989DE6100A4C2F1C6D231153 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FBXProperties_GetLongValues_mCF2FABC06FDEE49A989DE6100A4C2F1C6D231153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = __this->get__processor_2();
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  L_1 = (*(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this);
		PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * L_2 = (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F *)il2cpp_codegen_object_new(PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F_il2cpp_TypeInfo_var);
		PropertyAccessorLong__ctor_m75C56B4D0EB0BAF86DC0568CF62941C8E523790A(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FBXProperties_GetLongValues_mCF2FABC06FDEE49A989DE6100A4C2F1C6D231153_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetLongValues_mCF2FABC06FDEE49A989DE6100A4C2F1C6D231153(_thisAdjusted, method);
}
// System.Collections.Generic.IList`1<System.Single> TriLibCore.Fbx.FBXProperties::GetFloatValues(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXProperties_GetFloatValues_m83932B0D390483A0AE19C864174626F364F12715 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, bool ___iee7540, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FBXProperties_GetFloatValues_m83932B0D390483A0AE19C864174626F364F12715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = __this->get__processor_2();
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  L_1 = (*(FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this);
		PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * L_2 = (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E *)il2cpp_codegen_object_new(PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E_il2cpp_TypeInfo_var);
		PropertyAccessorFloat__ctor_m3D52B735C69866ED9CF0A63F8E4E6B9B20544A90(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FBXProperties_GetFloatValues_m83932B0D390483A0AE19C864174626F364F12715_AdjustorThunk (RuntimeObject * __this, bool ___iee7540, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_GetFloatValues_m83932B0D390483A0AE19C864174626F364F12715(_thisAdjusted, ___iee7540, method);
}
// System.Boolean TriLibCore.Fbx.FBXProperties::BinaryGetBoolValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXProperties_BinaryGetBoolValue_mDC972766A2268BA6E82B7B0E7FF077E483161055 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = FBXProperties_BinaryGetIntValue_mFB5CC22AF09B59642DA816523D359D56B3E46EA6((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool FBXProperties_BinaryGetBoolValue_mDC972766A2268BA6E82B7B0E7FF077E483161055_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryGetBoolValue_mDC972766A2268BA6E82B7B0E7FF077E483161055(_thisAdjusted, ___index0, method);
}
// UnityEngine.Vector2 TriLibCore.Fbx.FBXProperties::BinaryGetVector2Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FBXProperties_BinaryGetVector2Value_mB57840B292A9CC0103C2BDEB38F2EA6B896D6D39 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		float L_1 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, (bool)0, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		float L_3 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_5), L_1, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FBXProperties_BinaryGetVector2Value_mB57840B292A9CC0103C2BDEB38F2EA6B896D6D39_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryGetVector2Value_mB57840B292A9CC0103C2BDEB38F2EA6B896D6D39(_thisAdjusted, ___index0, method);
}
// UnityEngine.Vector3 TriLibCore.Fbx.FBXProperties::BinaryGetVector3Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FBXProperties_BinaryGetVector3Value_m3F248630D30EF94FC3FF734280C8203CEECD88DD (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		int32_t L_0 = ___index0;
		float L_1 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, (bool)0, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		float L_3 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___index0;
		float L_5 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)), (bool)0, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = V_0;
		float L_7 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), L_1, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FBXProperties_BinaryGetVector3Value_m3F248630D30EF94FC3FF734280C8203CEECD88DD_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryGetVector3Value_m3F248630D30EF94FC3FF734280C8203CEECD88DD(_thisAdjusted, ___index0, method);
}
// UnityEngine.Vector4 TriLibCore.Fbx.FBXProperties::BinaryGetVector4Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  FBXProperties_BinaryGetVector4Value_m9423386B2B2EB7EC29A41DBCBC22AC969B761F80 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		float L_1 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, (bool)0, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		float L_3 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___index0;
		float L_5 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)), (bool)0, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = ___index0;
		float L_7 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)3)), (bool)0, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = V_0;
		float L_9 = V_1;
		float L_10 = V_2;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_11), L_1, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  FBXProperties_BinaryGetVector4Value_m9423386B2B2EB7EC29A41DBCBC22AC969B761F80_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryGetVector4Value_m9423386B2B2EB7EC29A41DBCBC22AC969B761F80(_thisAdjusted, ___index0, method);
}
// UnityEngine.Color TriLibCore.Fbx.FBXProperties::BinaryGetColorValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  FBXProperties_BinaryGetColorValue_m5D6E6FAD1F19C17C3F20CB1D19D4DA11A9E70E81 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		int32_t L_0 = ___index0;
		float L_1 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, (bool)0, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		float L_3 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___index0;
		float L_5 = FBXProperties_BinaryGetFloatValue_mC7EEB40092F975C62E42A1241C32ECF610FACE59((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)), (bool)0, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = V_0;
		float L_7 = V_1;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m20DF490CEB364C4FC36D7EE392640DF5B7420D7C((&L_8), L_1, L_6, L_7, (1.0f), /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  FBXProperties_BinaryGetColorValue_m5D6E6FAD1F19C17C3F20CB1D19D4DA11A9E70E81_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryGetColorValue_m5D6E6FAD1F19C17C3F20CB1D19D4DA11A9E70E81(_thisAdjusted, ___index0, method);
}
// UnityEngine.Matrix4x4 TriLibCore.Fbx.FBXProperties::BinaryGetMatrixValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  FBXProperties_BinaryGetMatrixValue_m3A51A6D82728D479A06C8732FD9209310667E8EC (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FBXProperties_BinaryGetMatrixValue_m3A51A6D82728D479A06C8732FD9209310667E8EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = Matrix4x4_get_identity_mA0CECDE2A5E85CF014375084624F3770B5B7B79B(/*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = FBXProperties_GetFloatValues_m83932B0D390483A0AE19C864174626F364F12715((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, (bool)0, /*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_002a;
	}

IL_0012:
	{
		int32_t L_2 = V_2;
		RuntimeObject* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		float L_5 = InterfaceFuncInvoker1< float, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Single>::get_Item(System.Int32) */, IList_1_tC63CCD3BC4FB3A7C80F16BEA9B7BD049F4C0C65F_il2cpp_TypeInfo_var, L_3, L_4);
		Matrix4x4_set_Item_m63E67A0D3E7C3CFEA191C2E73D4380A07C9046AE((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), L_2, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_8 = V_2;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count() */, ICollection_1_t4481BA4A19FC1056B110FF62ECFE8B3AEA03122B_il2cpp_TypeInfo_var, L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0012;
		}
	}

IL_0033:
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  FBXProperties_BinaryGetMatrixValue_m3A51A6D82728D479A06C8732FD9209310667E8EC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryGetMatrixValue_m3A51A6D82728D479A06C8732FD9209310667E8EC(_thisAdjusted, method);
}
// System.Int32 TriLibCore.Fbx.FBXProperties::BinaryGetPropertyArrayLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_BinaryGetPropertyArrayLength_m9049CDD145CD39C44F54484C36B233481FD736FF (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method)
{
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = __this->get__processor_2();
		int32_t L_1 = __this->get_BasePropertyIndex_1();
		NullCheck(L_0);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_2 = FBXProcessor_GetProperty_m86702D5C3F7D397DEB764935877D2E632E9C1784(L_0, L_1, 0, /*hidden argument*/NULL);
		int32_t L_3 = L_2.get_ArrayLength_1();
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t FBXProperties_BinaryGetPropertyArrayLength_m9049CDD145CD39C44F54484C36B233481FD736FF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_BinaryGetPropertyArrayLength_m9049CDD145CD39C44F54484C36B233481FD736FF(_thisAdjusted, method);
}
// System.String TriLibCore.Fbx.FBXProperties::ASCIIGetProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXProperties_ASCIIGetProperty_m061F474FA9F45914CB7F5DACE407415462714CD5 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FBXProperties_ASCIIGetProperty_m061F474FA9F45914CB7F5DACE407415462714CD5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___index0;
		DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* L_2 = __this->get__context_3();
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))))
		{
			goto IL_0046;
		}
	}

IL_000f:
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_3 = __this->get__processor_2();
		NullCheck(L_3);
		FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F * L_4 = L_3->get_FbxReader_3();
		NullCheck(L_4);
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_5 = ReaderBase_get_AssetLoaderContext_mA301BE19BE03E21F9D8130757E1A4B50ACDB5766_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		AssetLoaderOptions_tBAB3E940FC34AC6E876DDA36A02657E684011EC6 * L_6 = L_5->get_Options_0();
		NullCheck(L_6);
		bool L_7 = L_6->get_ShowLoadingWarnings_50();
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_8 = ___index0;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral683C56A638704A556811BF81367843BDE7F1DFE5, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_11, /*hidden argument*/NULL);
	}

IL_0040:
	{
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_12;
	}

IL_0046:
	{
		DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* L_13 = __this->get__context_3();
		int32_t L_14 = ___index0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = L_16;
		DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * L_17 = V_0;
		if (!L_17)
		{
			goto IL_0093;
		}
	}
	{
		DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * L_18 = V_0;
		NullCheck(L_18);
		RuntimeObject* L_19 = DataValueContext_STRING_mE6F1FBFCF5DE65B15F6670AB20401C87245C9F1E(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		RuntimeObject* L_20 = V_1;
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject* L_21 = V_1;
		NullCheck(L_21);
		String_t* L_22 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Antlr4.Runtime.Tree.IParseTree::GetText() */, IParseTree_tD59FA081828F6F67D9E90205432E60D4657B26B6_il2cpp_TypeInfo_var, L_21);
		V_2 = L_22;
		String_t* L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_24) > ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_25 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_25;
	}

IL_0072:
	{
		String_t* L_26 = V_2;
		String_t* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_29 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_26, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)2)), /*hidden argument*/NULL);
		String_t* L_30 = String_Intern_m07AFEAB8C0E1C21D724BCB38CBF7D6F8AD185E75(L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_0087:
	{
		DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String Antlr4.Runtime.RuleContext::GetText() */, L_31);
		String_t* L_33 = String_Intern_m07AFEAB8C0E1C21D724BCB38CBF7D6F8AD185E75(L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_0093:
	{
		return (String_t*)NULL;
	}
}
IL2CPP_EXTERN_C  String_t* FBXProperties_ASCIIGetProperty_m061F474FA9F45914CB7F5DACE407415462714CD5_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetProperty_m061F474FA9F45914CB7F5DACE407415462714CD5(_thisAdjusted, ___index0, method);
}
// System.String TriLibCore.Fbx.FBXProperties::ASCIIGetStringValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXProperties_ASCIIGetStringValue_mB112A4A0FF537A806BBC63A336580006D383B780 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		String_t* L_1 = FBXProperties_ASCIIGetProperty_m061F474FA9F45914CB7F5DACE407415462714CD5((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* FBXProperties_ASCIIGetStringValue_mB112A4A0FF537A806BBC63A336580006D383B780_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetStringValue_mB112A4A0FF537A806BBC63A336580006D383B780(_thisAdjusted, ___index0, method);
}
// System.Byte TriLibCore.Fbx.FBXProperties::ASCIIGetByteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t FBXProperties_ASCIIGetByteValue_mD67FD93B72A4087D234A911E1DB913AA68124462 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		int32_t L_0 = ___index0;
		String_t* L_1 = FBXProperties_ASCIIGetProperty_m061F474FA9F45914CB7F5DACE407415462714CD5((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, /*hidden argument*/NULL);
		Byte_TryParse_m4E27B75C7E05A8F2EEF380671471C958A32BB3EA(L_1, (uint8_t*)(&V_0), /*hidden argument*/NULL);
		uint8_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  uint8_t FBXProperties_ASCIIGetByteValue_mD67FD93B72A4087D234A911E1DB913AA68124462_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetByteValue_mD67FD93B72A4087D234A911E1DB913AA68124462(_thisAdjusted, ___index0, method);
}
// System.Int32 TriLibCore.Fbx.FBXProperties::ASCIIGetIntValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_ASCIIGetIntValue_mD6C9B5DBC4426493A0A5ABFF5070B5575FF5031A (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		String_t* L_1 = FBXProperties_ASCIIGetProperty_m061F474FA9F45914CB7F5DACE407415462714CD5((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, /*hidden argument*/NULL);
		Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t FBXProperties_ASCIIGetIntValue_mD6C9B5DBC4426493A0A5ABFF5070B5575FF5031A_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetIntValue_mD6C9B5DBC4426493A0A5ABFF5070B5575FF5031A(_thisAdjusted, ___index0, method);
}
// System.Int64 TriLibCore.Fbx.FBXProperties::ASCIIGetLongValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXProperties_ASCIIGetLongValue_m91087567F7E7DD9336F5010335E381B6AA15015B (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		String_t* L_1 = FBXProperties_ASCIIGetProperty_m061F474FA9F45914CB7F5DACE407415462714CD5((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, /*hidden argument*/NULL);
		Int64_TryParse_m5C60567D82BACC7D9C18F7A9A83025FC94AD0E95(L_1, (int64_t*)(&V_0), /*hidden argument*/NULL);
		int64_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int64_t FBXProperties_ASCIIGetLongValue_m91087567F7E7DD9336F5010335E381B6AA15015B_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetLongValue_m91087567F7E7DD9336F5010335E381B6AA15015B(_thisAdjusted, ___index0, method);
}
// System.Single TriLibCore.Fbx.FBXProperties::ASCIIGetFloatValue(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, bool ___iee7541, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		String_t* L_1 = FBXProperties_ASCIIGetProperty_m061F474FA9F45914CB7F5DACE407415462714CD5((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_2 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		Single_TryParse_m4FE60E3061A34FB7B835A80AC156A85649610744(L_1, ((int32_t)511), L_2, (float*)(&V_0), /*hidden argument*/NULL);
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  float FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, bool ___iee7541, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE(_thisAdjusted, ___index0, ___iee7541, method);
}
// System.Boolean TriLibCore.Fbx.FBXProperties::ASCIIGetBoolValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXProperties_ASCIIGetBoolValue_m7AF9FC223B8C224379A4D0526B253892BCB9941D (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		String_t* L_1 = FBXProperties_ASCIIGetProperty_m061F474FA9F45914CB7F5DACE407415462714CD5((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, /*hidden argument*/NULL);
		Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool FBXProperties_ASCIIGetBoolValue_m7AF9FC223B8C224379A4D0526B253892BCB9941D_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetBoolValue_m7AF9FC223B8C224379A4D0526B253892BCB9941D(_thisAdjusted, ___index0, method);
}
// UnityEngine.Vector2 TriLibCore.Fbx.FBXProperties::ASCIIGetVector2Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FBXProperties_ASCIIGetVector2Value_m93841D0E02B97B4C1EF08A3D4704E8FE288A1B70 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		float L_1 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, (bool)0, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		float L_3 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_5), L_1, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  FBXProperties_ASCIIGetVector2Value_m93841D0E02B97B4C1EF08A3D4704E8FE288A1B70_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetVector2Value_m93841D0E02B97B4C1EF08A3D4704E8FE288A1B70(_thisAdjusted, ___index0, method);
}
// UnityEngine.Vector3 TriLibCore.Fbx.FBXProperties::ASCIIGetVector3Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FBXProperties_ASCIIGetVector3Value_m097574EB5948A535FBED947CD1C42A4DB8774A73 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		int32_t L_0 = ___index0;
		float L_1 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, (bool)0, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		float L_3 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___index0;
		float L_5 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)), (bool)0, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = V_0;
		float L_7 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_8), L_1, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  FBXProperties_ASCIIGetVector3Value_m097574EB5948A535FBED947CD1C42A4DB8774A73_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetVector3Value_m097574EB5948A535FBED947CD1C42A4DB8774A73(_thisAdjusted, ___index0, method);
}
// UnityEngine.Vector4 TriLibCore.Fbx.FBXProperties::ASCIIGetVector4Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  FBXProperties_ASCIIGetVector4Value_m0393D0296703611A783607B9453DD9FF89C7FB90 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		float L_1 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, (bool)0, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		float L_3 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___index0;
		float L_5 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)), (bool)0, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = ___index0;
		float L_7 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)3)), (bool)0, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = V_0;
		float L_9 = V_1;
		float L_10 = V_2;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_11), L_1, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
IL2CPP_EXTERN_C  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  FBXProperties_ASCIIGetVector4Value_m0393D0296703611A783607B9453DD9FF89C7FB90_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetVector4Value_m0393D0296703611A783607B9453DD9FF89C7FB90(_thisAdjusted, ___index0, method);
}
// UnityEngine.Color TriLibCore.Fbx.FBXProperties::ASCIIGetColorValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  FBXProperties_ASCIIGetColorValue_m4A8390FB74E8347C9A19FA0AD634DBE0135F8BEA (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		int32_t L_0 = ___index0;
		float L_1 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_0, (bool)0, /*hidden argument*/NULL);
		int32_t L_2 = ___index0;
		float L_3 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___index0;
		float L_5 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)), (bool)0, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = V_0;
		float L_7 = V_1;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_8), L_1, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  FBXProperties_ASCIIGetColorValue_m4A8390FB74E8347C9A19FA0AD634DBE0135F8BEA_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetColorValue_m4A8390FB74E8347C9A19FA0AD634DBE0135F8BEA(_thisAdjusted, ___index0, method);
}
// UnityEngine.Matrix4x4 TriLibCore.Fbx.FBXProperties::ASCIIGetMatrixValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  FBXProperties_ASCIIGetMatrixValue_mE485840E69FACBAF720E31DB0E13D41FDCA87501 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method)
{
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA ));
		V_1 = 0;
		goto IL_0020;
	}

IL_000c:
	{
		int32_t L_0 = V_1;
		int32_t L_1 = V_1;
		float L_2 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, L_1, (bool)0, /*hidden argument*/NULL);
		Matrix4x4_set_Item_m63E67A0D3E7C3CFEA191C2E73D4380A07C9046AE((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), L_0, L_2, /*hidden argument*/NULL);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)16))))
		{
			goto IL_000c;
		}
	}
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  FBXProperties_ASCIIGetMatrixValue_mE485840E69FACBAF720E31DB0E13D41FDCA87501_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetMatrixValue_mE485840E69FACBAF720E31DB0E13D41FDCA87501(_thisAdjusted, method);
}
// System.Int32 TriLibCore.Fbx.FBXProperties::ASCIIGetPropertyArrayLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_ASCIIGetPropertyArrayLength_m5CA15BB784ED21728B944A62C6847434C4D60D78 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, const RuntimeMethod* method)
{
	{
		DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* L_0 = __this->get__context_3();
		NullCheck(L_0);
		return (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
	}
}
IL2CPP_EXTERN_C  int32_t FBXProperties_ASCIIGetPropertyArrayLength_m5CA15BB784ED21728B944A62C6847434C4D60D78_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	return FBXProperties_ASCIIGetPropertyArrayLength_m5CA15BB784ED21728B944A62C6847434C4D60D78(_thisAdjusted, method);
}
// System.Void TriLibCore.Fbx.FBXProperties::ReleaseProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProperties_ReleaseProperty_m981A3EA768138EDF0899161616D8A2B7ECE1BCE6 (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		bool L_0 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_1 = __this->get__processor_2();
		int32_t L_2 = __this->get_BasePropertyIndex_1();
		int32_t L_3 = ___index0;
		NullCheck(L_1);
		FBXProcessor_ReleaseBinaryProperty_m414DE56EB1A07154D185AA71C21110997222EB44(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void FBXProperties_ReleaseProperty_m981A3EA768138EDF0899161616D8A2B7ECE1BCE6_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * _thisAdjusted = reinterpret_cast<FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *>(__this + _offset);
	FBXProperties_ReleaseProperty_m981A3EA768138EDF0899161616D8A2B7ECE1BCE6(_thisAdjusted, ___index0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TriLibCore.Fbx.FBXProperty
IL2CPP_EXTERN_C void FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshal_pinvoke(const FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE& unmarshaled, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___DecodedBinaryReader_7Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DecodedBinaryReader' of type 'FBXProperty': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DecodedBinaryReader_7Exception, NULL);
}
IL2CPP_EXTERN_C void FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshal_pinvoke_back(const FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshaled_pinvoke& marshaled, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE& unmarshaled)
{
	Exception_t* ___DecodedBinaryReader_7Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DecodedBinaryReader' of type 'FBXProperty': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DecodedBinaryReader_7Exception, NULL);
}
// Conversion method for clean up from marshalling of: TriLibCore.Fbx.FBXProperty
IL2CPP_EXTERN_C void FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshal_pinvoke_cleanup(FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TriLibCore.Fbx.FBXProperty
IL2CPP_EXTERN_C void FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshal_com(const FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE& unmarshaled, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshaled_com& marshaled)
{
	Exception_t* ___DecodedBinaryReader_7Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DecodedBinaryReader' of type 'FBXProperty': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DecodedBinaryReader_7Exception, NULL);
}
IL2CPP_EXTERN_C void FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshal_com_back(const FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshaled_com& marshaled, FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE& unmarshaled)
{
	Exception_t* ___DecodedBinaryReader_7Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'DecodedBinaryReader' of type 'FBXProperty': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___DecodedBinaryReader_7Exception, NULL);
}
// Conversion method for clean up from marshalling of: TriLibCore.Fbx.FBXProperty
IL2CPP_EXTERN_C void FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshal_com_cleanup(FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE_marshaled_com& marshaled)
{
}
// System.Boolean TriLibCore.Fbx.FBXProperty::get_CanDecode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXProperty_get_CanDecode_m75216FB43624305E39A3BC72ECF29A1125F0EBB2 (FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_Encoded_2();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = __this->get_Decoded_0();
		return (bool)((((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool FBXProperty_get_CanDecode_m75216FB43624305E39A3BC72ECF29A1125F0EBB2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE * _thisAdjusted = reinterpret_cast<FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE *>(__this + _offset);
	return FBXProperty_get_CanDecode_m75216FB43624305E39A3BC72ECF29A1125F0EBB2(_thisAdjusted, method);
}
// System.Void TriLibCore.Fbx.FBXProperty::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProperty_Dispose_m7AB9BC04BF6141A9A24E6CD726E025C0D9BC1A6E (FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE * __this, const RuntimeMethod* method)
{
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * G_B2_0 = NULL;
	MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * G_B1_0 = NULL;
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * G_B5_0 = NULL;
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * G_B4_0 = NULL;
	{
		__this->set_Decoded_0((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_0 = __this->get_DecodedMemoryStream_8();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7(G_B2_0, /*hidden argument*/NULL);
	}

IL_0018:
	{
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_2 = __this->get_DecodedBinaryReader_7();
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
		NullCheck(G_B5_0);
		BinaryReader_Dispose_m2047D05935E76EBB1E910D491671B339E320203C(G_B5_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void FBXProperty_Dispose_m7AB9BC04BF6141A9A24E6CD726E025C0D9BC1A6E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE * _thisAdjusted = reinterpret_cast<FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE *>(__this + _offset);
	FBXProperty_Dispose_m7AB9BC04BF6141A9A24E6CD726E025C0D9BC1A6E(_thisAdjusted, method);
}
// System.Int32 TriLibCore.Fbx.FBXProperty::GetDataSize(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperty_GetDataSize_mB6C4AAF6EE17F941A6D6A1D530BA3B55D89FE6A8 (FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE * __this, int32_t* ___subDataSize0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___subDataSize0;
		int32_t L_1 = FBXProperty_GetSubDataSize_m5E05EC799CC35C3D112B77CE5C1C439BBB511E82((FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE *)__this, /*hidden argument*/NULL);
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t* L_2 = ___subDataSize0;
		int32_t L_3 = *((int32_t*)L_2);
		int32_t L_4 = __this->get_ArrayLength_1();
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4));
	}
}
IL2CPP_EXTERN_C  int32_t FBXProperty_GetDataSize_mB6C4AAF6EE17F941A6D6A1D530BA3B55D89FE6A8_AdjustorThunk (RuntimeObject * __this, int32_t* ___subDataSize0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE * _thisAdjusted = reinterpret_cast<FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE *>(__this + _offset);
	return FBXProperty_GetDataSize_mB6C4AAF6EE17F941A6D6A1D530BA3B55D89FE6A8(_thisAdjusted, ___subDataSize0, method);
}
// System.Int32 TriLibCore.Fbx.FBXProperty::GetSubDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperty_GetSubDataSize_m5E05EC799CC35C3D112B77CE5C1C439BBB511E82 (FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		Il2CppChar L_0 = __this->get_PropertyType_4();
		V_1 = L_0;
		Il2CppChar L_1 = V_1;
		if ((!(((uint32_t)L_1) <= ((uint32_t)((int32_t)83)))))
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)66))))
		{
			case 0:
			{
				goto IL_008e;
			}
			case 1:
			{
				goto IL_008e;
			}
			case 2:
			{
				goto IL_009e;
			}
			case 3:
			{
				goto IL_00a6;
			}
			case 4:
			{
				goto IL_009a;
			}
			case 5:
			{
				goto IL_00a6;
			}
			case 6:
			{
				goto IL_00a6;
			}
			case 7:
			{
				goto IL_0096;
			}
			case 8:
			{
				goto IL_00a6;
			}
			case 9:
			{
				goto IL_00a6;
			}
			case 10:
			{
				goto IL_00a2;
			}
		}
	}
	{
		Il2CppChar L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)82))))
		{
			goto IL_008e;
		}
	}
	{
		Il2CppChar L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)83))))
		{
			goto IL_008e;
		}
	}
	{
		goto IL_00a6;
	}

IL_004d:
	{
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)89))))
		{
			goto IL_0092;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)98))))
		{
			case 0:
			{
				goto IL_008e;
			}
			case 1:
			{
				goto IL_008e;
			}
			case 2:
			{
				goto IL_009e;
			}
			case 3:
			{
				goto IL_00a6;
			}
			case 4:
			{
				goto IL_009a;
			}
			case 5:
			{
				goto IL_00a6;
			}
			case 6:
			{
				goto IL_00a6;
			}
			case 7:
			{
				goto IL_0096;
			}
			case 8:
			{
				goto IL_00a6;
			}
			case 9:
			{
				goto IL_00a6;
			}
			case 10:
			{
				goto IL_00a2;
			}
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)121))))
		{
			goto IL_0092;
		}
	}
	{
		goto IL_00a6;
	}

IL_008e:
	{
		V_0 = 1;
		goto IL_00a8;
	}

IL_0092:
	{
		V_0 = 2;
		goto IL_00a8;
	}

IL_0096:
	{
		V_0 = 4;
		goto IL_00a8;
	}

IL_009a:
	{
		V_0 = 4;
		goto IL_00a8;
	}

IL_009e:
	{
		V_0 = 8;
		goto IL_00a8;
	}

IL_00a2:
	{
		V_0 = 8;
		goto IL_00a8;
	}

IL_00a6:
	{
		return (-1);
	}

IL_00a8:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t FBXProperty_GetSubDataSize_m5E05EC799CC35C3D112B77CE5C1C439BBB511E82_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE * _thisAdjusted = reinterpret_cast<FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE *>(__this + _offset);
	return FBXProperty_GetSubDataSize_m5E05EC799CC35C3D112B77CE5C1C439BBB511E82(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Fbx.FBXRootModel::get_AllAnimations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXRootModel_get_AllAnimations_m7444BDE80F90CA324E51274491A9E38012853109 (FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAllAnimationsU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FBXRootModel::set_AllAnimations(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXRootModel_set_AllAnimations_m6C126A354C04F47C41F1644D42BBF58367FCA26C (FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CAllAnimationsU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Fbx.FBXRootModel::get_AllMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXRootModel_get_AllMaterials_m4570E982EA2E8249549F5FEF8F9A1DEE9757C425 (FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAllMaterialsU3Ek__BackingField_26();
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FBXRootModel::set_AllMaterials(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXRootModel_set_AllMaterials_m9278D2D226F1AB404D630EDF56F9E7C2AAE51E49 (FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CAllMaterialsU3Ek__BackingField_26(L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Fbx.FBXRootModel::get_AllGeometryGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXRootModel_get_AllGeometryGroups_mEA4071A1D817D1E8A7537496E5DF13194742A1AA (FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAllGeometryGroupsU3Ek__BackingField_27();
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FBXRootModel::set_AllGeometryGroups(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXRootModel_set_AllGeometryGroups_m4839FBDFB47A675A6BE01EC50CE209351147709C (FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CAllGeometryGroupsU3Ek__BackingField_27(L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Fbx.FBXRootModel::get_AllTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FBXRootModel_get_AllTextures_m3FF81550D457C4B990D49387E769D528912445B9 (FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CAllTexturesU3Ek__BackingField_28();
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FBXRootModel::set_AllTextures(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXRootModel_set_AllTextures_m0A40D3DC0B0CF04F721AD6C8132B7DB823D0BBCA (FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CAllTexturesU3Ek__BackingField_28(L_0);
		return;
	}
}
// System.Void TriLibCore.Fbx.FBXRootModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXRootModel__ctor_m9E3E5A9737A669D28BB8D76BEF1A8F9D55E34A53 (FBXRootModel_t8427488E2212F2CE35A79809328637E31798362A * __this, const RuntimeMethod* method)
{
	{
		FBXModel__ctor_m547FD960826D1D588C72743E912F7888A2ABB694(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriLibCore.Fbx.FBXSubDeformer::.ctor(TriLibCore.Fbx.FBXDocument,System.String,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXSubDeformer__ctor_m85B7E549F728BF1A4FD6A471BB8C7DEC1142FD20 (FBXSubDeformer_t601F91BC2DD27962B69C7B568CEF0954A20BBEAC * __this, FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * ___document0, String_t* ___name1, int64_t ___objectId2, String_t* ___objectClass3, const RuntimeMethod* method)
{
	{
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_0 = ___document0;
		String_t* L_1 = ___name1;
		int64_t L_2 = ___objectId2;
		String_t* L_3 = ___objectClass3;
		FBXObject__ctor_mFFCEAEABB174593EDF4E56FE3379A51FCEE3055A(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		FBXObject_set_ObjectType_m54CE048630BF1A75528C3348107F51DFA33017FC_inline(__this, ((int32_t)11), /*hidden argument*/NULL);
		int64_t L_4 = ___objectId2;
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)((int64_t)(-1)))))))
		{
			goto IL_001e;
		}
	}
	{
		VirtActionInvoker0::Invoke(14 /* System.Void TriLibCore.Fbx.FBXObject::LoadDefinition() */, __this);
	}

IL_001e:
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
// System.Void TriLibCore.Fbx.FBXTexture::AddTexture(TriLibCore.Interfaces.ITexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXTexture_AddTexture_m535F74D186FA91170BB44D2BE7BA6EDC10437D37 (FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * __this, RuntimeObject* ___texture0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Byte[] TriLibCore.Fbx.FBXTexture::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* FBXTexture_get_Data_mD51DB4C8D6FDD5BD6323CA93213735219A33A7F1 (FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * __this, const RuntimeMethod* method)
{
	FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * G_B2_0 = NULL;
	FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * G_B1_0 = NULL;
	{
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_0 = __this->get_Video_23();
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = G_B2_0->get_Content_29();
		return L_2;
	}
}
// System.String TriLibCore.Fbx.FBXTexture::get_Filename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXTexture_get_Filename_m3ACACB67E6693B6FEC8E2E26C8BA41D98A55BC22 (FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * __this, const RuntimeMethod* method)
{
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = __this->get_RelativeFilename_27();
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = __this->get_FullFilename_26();
		G_B2_0 = L_2;
	}

IL_0010:
	{
		return G_B2_0;
	}
}
// System.Int32 TriLibCore.Fbx.FBXTexture::get_TextureId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXTexture_get_TextureId_mE1CFDAA6E3112F841D079D1B93E050B13CD30277 (FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTextureIdU3Ek__BackingField_32();
		return L_0;
	}
}
// System.String TriLibCore.Fbx.FBXTexture::get_ResolvedFilename()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXTexture_get_ResolvedFilename_m39C90E005E7A957EEE07D274D460ED9512718BB3 (FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CResolvedFilenameU3Ek__BackingField_33();
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FBXTexture::set_ResolvedFilename(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXTexture_set_ResolvedFilename_m786D6F22F0CDB20BA7459124C9A6EF74BA0F67C1 (FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CResolvedFilenameU3Ek__BackingField_33(L_0);
		return;
	}
}
// System.Boolean TriLibCore.Fbx.FBXTexture::get_HasAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXTexture_get_HasAlpha_m22AE02FF9D8A1868176CBDC8603E238788F017BC (FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHasAlphaU3Ek__BackingField_34();
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FBXTexture::set_HasAlpha(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXTexture_set_HasAlpha_mC69AA73E15D2702902FEAE732468C00428C722A1 (FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHasAlphaU3Ek__BackingField_34(L_0);
		return;
	}
}
// System.Void TriLibCore.Fbx.FBXTexture::.ctor(TriLibCore.Fbx.FBXDocument,System.String,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXTexture__ctor_mBCC8859DEEBFB56F69ECE1F4442725A909F29BDC (FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * __this, FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * ___document0, String_t* ___name1, int64_t ___objectId2, String_t* ___objectClass3, const RuntimeMethod* method)
{
	{
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_0 = ___document0;
		String_t* L_1 = ___name1;
		int64_t L_2 = ___objectId2;
		String_t* L_3 = ___objectClass3;
		FBXObject__ctor_mFFCEAEABB174593EDF4E56FE3379A51FCEE3055A(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		FBXObject_set_ObjectType_m54CE048630BF1A75528C3348107F51DFA33017FC_inline(__this, 3, /*hidden argument*/NULL);
		int64_t L_4 = ___objectId2;
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)((int64_t)(-1)))))))
		{
			goto IL_001d;
		}
	}
	{
		VirtActionInvoker0::Invoke(14 /* System.Void TriLibCore.Fbx.FBXObject::LoadDefinition() */, __this);
	}

IL_001d:
	{
		return;
	}
}
// System.Void TriLibCore.Fbx.FBXTexture::LoadDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXTexture_LoadDefinition_mBFCE6A729ABA5982DE128EAE81B6519CFC09C830 (FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * __this, const RuntimeMethod* method)
{
	{
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_0 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_1 = L_0->get_TextureDefinition_40();
		if (!L_1)
		{
			goto IL_019c;
		}
	}
	{
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_2 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_3 = L_2->get_TextureDefinition_40();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_TextureTypeUse_5();
		__this->set_TextureTypeUse_5(L_4);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_5 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_6 = L_5->get_TextureDefinition_40();
		NullCheck(L_6);
		float L_7 = L_6->get_TextureAlpha_6();
		__this->set_TextureAlpha_6(L_7);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_8 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_9 = L_8->get_TextureDefinition_40();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_CurrentMappingType_7();
		__this->set_CurrentMappingType_7(L_10);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_11 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_12 = L_11->get_TextureDefinition_40();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_TextureWrapModeU_8();
		__this->set_TextureWrapModeU_8(L_13);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_14 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_15 = L_14->get_TextureDefinition_40();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_TextureWrapModeV_9();
		__this->set_TextureWrapModeV_9(L_16);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_17 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_18 = L_17->get_TextureDefinition_40();
		NullCheck(L_18);
		bool L_19 = L_18->get_UVSwap_10();
		__this->set_UVSwap_10(L_19);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_20 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_21 = L_20->get_TextureDefinition_40();
		NullCheck(L_21);
		bool L_22 = L_21->get_PremultiplyAlpha_11();
		__this->set_PremultiplyAlpha_11(L_22);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_23 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_24 = L_23->get_TextureDefinition_40();
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = L_24->get_Translation_12();
		__this->set_Translation_12(L_25);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_26 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_27 = L_26->get_TextureDefinition_40();
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = L_27->get_Rotation_13();
		__this->set_Rotation_13(L_28);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_29 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_30 = L_29->get_TextureDefinition_40();
		NullCheck(L_30);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = L_30->get_Scaling_14();
		__this->set_Scaling_14(L_31);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_32 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_33 = L_32->get_TextureDefinition_40();
		NullCheck(L_33);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = L_33->get_TextureRotationPivot_15();
		__this->set_TextureRotationPivot_15(L_34);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_35 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_36 = L_35->get_TextureDefinition_40();
		NullCheck(L_36);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = L_36->get_TextureScalingPivot_16();
		__this->set_TextureScalingPivot_16(L_37);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_38 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_39 = L_38->get_TextureDefinition_40();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_CurrentTextureBlendMode_17();
		__this->set_CurrentTextureBlendMode_17(L_40);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_41 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_42 = L_41->get_TextureDefinition_40();
		NullCheck(L_42);
		String_t* L_43 = L_42->get_UVSet_18();
		__this->set_UVSet_18(L_43);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_44 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_45 = L_44->get_TextureDefinition_40();
		NullCheck(L_45);
		bool L_46 = L_45->get_UseMaterial_19();
		__this->set_UseMaterial_19(L_46);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_47 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_48 = L_47->get_TextureDefinition_40();
		NullCheck(L_48);
		bool L_49 = L_48->get_UseMipMap_20();
		__this->set_UseMipMap_20(L_49);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_50 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_51 = L_50->get_TextureDefinition_40();
		NullCheck(L_51);
		int32_t L_52 = L_51->get_AlphaSource_21();
		__this->set_AlphaSource_21(L_52);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_53 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * L_54 = L_53->get_TextureDefinition_40();
		NullCheck(L_54);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_55 = L_54->get_Cropping_22();
		__this->set_Cropping_22(L_55);
	}

IL_019c:
	{
		return;
	}
}
// System.Boolean TriLibCore.Fbx.FBXTexture::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXTexture_Equals_mCEB10E5FCC62E3C65C37E334380B7585C7ACB929 (FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = TextureComparators_Equals_m5B206CA06618231B2586E9B5844CBC20466D4932(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 TriLibCore.Fbx.FBXTexture::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXTexture_GetHashCode_m76D9F5837345B5AF436ECA2CD3D2EF2A3C9E5DAE (FBXTexture_tA869FE2705B7F2EE31127B522B997C55B008DF28 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = TextureComparators_GetHashCode_m592831368FFB47074D7031135129D156F3DCD212(__this, /*hidden argument*/NULL);
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
// System.Void TriLibCore.Fbx.FBXVideo::.ctor(TriLibCore.Fbx.FBXDocument,System.String,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXVideo__ctor_mD62F17FD1F2C29A87D88106944F03414ECD2FE96 (FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * __this, FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * ___document0, String_t* ___name1, int64_t ___objectId2, String_t* ___objectClass3, const RuntimeMethod* method)
{
	{
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_0 = ___document0;
		String_t* L_1 = ___name1;
		int64_t L_2 = ___objectId2;
		String_t* L_3 = ___objectClass3;
		FBXObject__ctor_mFFCEAEABB174593EDF4E56FE3379A51FCEE3055A(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		FBXObject_set_ObjectType_m54CE048630BF1A75528C3348107F51DFA33017FC_inline(__this, 5, /*hidden argument*/NULL);
		int64_t L_4 = ___objectId2;
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)((int64_t)(-1)))))))
		{
			goto IL_001d;
		}
	}
	{
		VirtActionInvoker0::Invoke(14 /* System.Void TriLibCore.Fbx.FBXObject::LoadDefinition() */, __this);
	}

IL_001d:
	{
		return;
	}
}
// System.Void TriLibCore.Fbx.FBXVideo::LoadDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXVideo_LoadDefinition_m85EEE644A39556973D3C17949E16A9ED80D457A5 (FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * __this, const RuntimeMethod* method)
{
	{
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_0 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_1 = L_0->get_VideoDefinition_39();
		if (!L_1)
		{
			goto IL_01c8;
		}
	}
	{
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_2 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_3 = L_2->get_VideoDefinition_39();
		NullCheck(L_3);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = L_3->get_Color_5();
		__this->set_Color_5(L_4);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_5 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_6 = L_5->get_VideoDefinition_39();
		NullCheck(L_6);
		int64_t L_7 = L_6->get_ClipIn_6();
		__this->set_ClipIn_6(L_7);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_8 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_9 = L_8->get_VideoDefinition_39();
		NullCheck(L_9);
		int64_t L_10 = L_9->get_ClipOut_7();
		__this->set_ClipOut_7(L_10);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_11 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_12 = L_11->get_VideoDefinition_39();
		NullCheck(L_12);
		bool L_13 = L_12->get_Mute_8();
		__this->set_Mute_8(L_13);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_14 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_15 = L_14->get_VideoDefinition_39();
		NullCheck(L_15);
		bool L_16 = L_15->get_ImageSequence_9();
		__this->set_ImageSequence_9(L_16);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_17 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_18 = L_17->get_VideoDefinition_39();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_ImageSequenceOffset_10();
		__this->set_ImageSequenceOffset_10(L_19);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_20 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_21 = L_20->get_VideoDefinition_39();
		NullCheck(L_21);
		float L_22 = L_21->get_FrameRate_11();
		__this->set_FrameRate_11(L_22);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_23 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_24 = L_23->get_VideoDefinition_39();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_LastFrame_12();
		__this->set_LastFrame_12(L_25);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_26 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_27 = L_26->get_VideoDefinition_39();
		NullCheck(L_27);
		int32_t L_28 = L_27->get_Width_13();
		__this->set_Width_13(L_28);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_29 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_30 = L_29->get_VideoDefinition_39();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_Height_14();
		__this->set_Height_14(L_31);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_32 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_33 = L_32->get_VideoDefinition_39();
		NullCheck(L_33);
		int32_t L_34 = L_33->get_StartFrame_15();
		__this->set_StartFrame_15(L_34);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_35 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_36 = L_35->get_VideoDefinition_39();
		NullCheck(L_36);
		int32_t L_37 = L_36->get_StopFrame_16();
		__this->set_StopFrame_16(L_37);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_38 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_39 = L_38->get_VideoDefinition_39();
		NullCheck(L_39);
		String_t* L_40 = L_39->get_Path_17();
		__this->set_Path_17(L_40);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_41 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_42 = L_41->get_VideoDefinition_39();
		NullCheck(L_42);
		String_t* L_43 = L_42->get_RelPath_18();
		__this->set_RelPath_18(L_43);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_44 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_45 = L_44->get_VideoDefinition_39();
		NullCheck(L_45);
		float L_46 = L_45->get_PlayOffset_19();
		__this->set_PlayOffset_19(L_46);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_47 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_48 = L_47->get_VideoDefinition_39();
		NullCheck(L_48);
		int64_t L_49 = L_48->get_Offset_20();
		__this->set_Offset_20(L_49);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_50 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_51 = L_50->get_VideoDefinition_39();
		NullCheck(L_51);
		int32_t L_52 = L_51->get_InterlaceMode_21();
		__this->set_InterlaceMode_21(L_52);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_53 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_54 = L_53->get_VideoDefinition_39();
		NullCheck(L_54);
		bool L_55 = L_54->get_FreeRunning_22();
		__this->set_FreeRunning_22(L_55);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_56 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_57 = L_56->get_VideoDefinition_39();
		NullCheck(L_57);
		bool L_58 = L_57->get_Loop_23();
		__this->set_Loop_23(L_58);
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_59 = FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_59);
		FBXVideo_t2DBF0E238079F2709F006E5F91B3B4B3BF0BEB05 * L_60 = L_59->get_VideoDefinition_39();
		NullCheck(L_60);
		int32_t L_61 = L_60->get_AccessMode_24();
		__this->set_AccessMode_24(L_61);
	}

IL_01c8:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriLibCore.Fbx.FbxLexer::.ctor(Antlr4.Runtime.ICharStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxLexer__ctor_m380C3D88D4EBB654C1F528003A6B903C331DCC68 (FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxLexer__ctor_m380C3D88D4EBB654C1F528003A6B903C331DCC68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_1 = Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABF_inline(/*hidden argument*/NULL);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_2 = Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98A_inline(/*hidden argument*/NULL);
		FbxLexer__ctor_m9F31B6A6232CBC1CDB2EF61509BB037B01C58DBC(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriLibCore.Fbx.FbxLexer::.ctor(Antlr4.Runtime.ICharStream,System.IO.TextWriter,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxLexer__ctor_m9F31B6A6232CBC1CDB2EF61509BB037B01C58DBC (FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920 * __this, RuntimeObject* ___input0, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___output1, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___errorOutput2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxLexer__ctor_m9F31B6A6232CBC1CDB2EF61509BB037B01C58DBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_1 = ___output1;
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_2 = ___errorOutput2;
		Lexer__ctor_m30DC55FEE7B51828E522C1A7F17125C39DCBEA15(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var);
		ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * L_3 = ((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->get__ATN_27();
		DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* L_4 = ((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->get_decisionToDFA_18();
		PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * L_5 = ((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->get_sharedContextCache_19();
		LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480 * L_6 = (LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480 *)il2cpp_codegen_object_new(LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480_il2cpp_TypeInfo_var);
		LexerATNSimulator__ctor_mA5AEED39E1348558FEDA0D512992089C00A9B666(L_6, __this, L_3, L_4, L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< LexerATNSimulator_t2EEE6DDD3286255462D8A12A4B925C160E8B2480 * >::Invoke(11 /* System.Void Antlr4.Runtime.Recognizer`2<System.Int32,Antlr4.Runtime.Atn.LexerATNSimulator>::set_Interpreter(!1) */, __this, L_6);
		return;
	}
}
// Antlr4.Runtime.IVocabulary TriLibCore.Fbx.FbxLexer::get_Vocabulary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxLexer_get_Vocabulary_mAEC1401CD9B7CAAF0B2ADA8EA8B73EC1E48D0635 (FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxLexer_get_Vocabulary_mAEC1401CD9B7CAAF0B2ADA8EA8B73EC1E48D0635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->get_DefaultVocabulary_25();
		return L_0;
	}
}
// System.String[] TriLibCore.Fbx.FbxLexer::get_RuleNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* FbxLexer_get_RuleNames_mEFC9FDBA4FC970B399F54DB394E78CC6E8839151 (FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxLexer_get_RuleNames_mEFC9FDBA4FC970B399F54DB394E78CC6E8839151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->get_ruleNames_22();
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FbxLexer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxLexer__cctor_mD6D74223ABEFB104E765CC8EE839DF95BD1C2780 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxLexer__cctor_mD6D74223ABEFB104E765CC8EE839DF95BD1C2780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * L_0 = (PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D *)il2cpp_codegen_object_new(PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D_il2cpp_TypeInfo_var);
		PredictionContextCache__ctor_mB75F0F65B8B4CB05888842F96832BC81955E1B15(L_0, /*hidden argument*/NULL);
		((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->set_sharedContextCache_19(L_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral5BF4AC69233D2F998956A85B3AE562D0DB002A70);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5BF4AC69233D2F998956A85B3AE562D0DB002A70);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral1BA3456507AD0628FFEF08BFA52A7B0CD368F255);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral1BA3456507AD0628FFEF08BFA52A7B0CD368F255);
		((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->set_channelNames_20(L_3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralB3D9D9B3AF1557EAEB3628F6757E4E2D49E2EA67);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB3D9D9B3AF1557EAEB3628F6757E4E2D49E2EA67);
		((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->set_modeNames_21(L_5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral2F0728A5FBC49746A9B9DDA32638731C15E57A81);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2F0728A5FBC49746A9B9DDA32638731C15E57A81);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralA51EBD13A86AE40E24855BD33FCA24E771C1A0BC);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA51EBD13A86AE40E24855BD33FCA24E771C1A0BC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral43D7402AF47515AD333CA1605665B8C66A18EF3A);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral43D7402AF47515AD333CA1605665B8C66A18EF3A);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral87CF7CCE0693DDC238F9B7696651DE3283943AA3);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral87CF7CCE0693DDC238F9B7696651DE3283943AA3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral52FD104BBF0D5A2B47D8523B7DBB2531B2A21E4D);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral52FD104BBF0D5A2B47D8523B7DBB2531B2A21E4D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralB67F7553E410CBF50C7FA874229DB72256E73F13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB67F7553E410CBF50C7FA874229DB72256E73F13);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral0E3B1F1FB38A7FE314D2F472DA7F442366E6C3F3);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral0E3B1F1FB38A7FE314D2F472DA7F442366E6C3F3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral6529F695EF6BEA2B61BE4F42D6AF092FC3B74190);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral6529F695EF6BEA2B61BE4F42D6AF092FC3B74190);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral424E19F99B751F585D85DC25B9C3B9D87C08141D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral424E19F99B751F585D85DC25B9C3B9D87C08141D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral6C516A9CDC9C6A2DC636E4DC4EDEF8CF15C9A35E);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral6C516A9CDC9C6A2DC636E4DC4EDEF8CF15C9A35E);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral0FE37E40E5DAB3AC411C2DDCA6D21991E811ACFA);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral0FE37E40E5DAB3AC411C2DDCA6D21991E811ACFA);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral6C208E949D20BFE95E6078574B9FD17442F7496B);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral6C208E949D20BFE95E6078574B9FD17442F7496B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralCD98AE36981EE80A267C314EC60000C7F9D30870);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralCD98AE36981EE80A267C314EC60000C7F9D30870);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralDA5ABA16204EBD88821D2BBF3642268C4231FB1F);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralDA5ABA16204EBD88821D2BBF3642268C4231FB1F);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralDB14AD9A84752B16F43266CFCEDA5559C75F0B3B);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralDB14AD9A84752B16F43266CFCEDA5559C75F0B3B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralB1A13FADF51EF7EECE7DEA40C4B6E6E8042822D2);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralB1A13FADF51EF7EECE7DEA40C4B6E6E8042822D2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralFFD6A129819CF79E42302EE62EB7CCEFABCB331A);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralFFD6A129819CF79E42302EE62EB7CCEFABCB331A);
		((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->set_ruleNames_22(L_23);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_24 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral92DC370ABEB4DD1784265CEE05422305C0A4DEF3);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral92DC370ABEB4DD1784265CEE05422305C0A4DEF3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral762EDC7A7A0B53D18035E7C003C1C3DCDDCFE936);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral762EDC7A7A0B53D18035E7C003C1C3DCDDCFE936);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral968A8FF5D258B8366D56C62E06E3E56E11A36231);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral968A8FF5D258B8366D56C62E06E3E56E11A36231);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral850D887793387455E960CBC2D611DB88AB13289D);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral850D887793387455E960CBC2D611DB88AB13289D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral703DDA89D5A1468347462E570B61919C97F49332);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral703DDA89D5A1468347462E570B61919C97F49332);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral951073BF3052137F10909C5D078FC8FBEFBAB5B8);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral951073BF3052137F10909C5D078FC8FBEFBAB5B8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral169374FF8CA75C48832034574E04A80968717F05);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral169374FF8CA75C48832034574E04A80968717F05);
		((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->set__LiteralNames_23(L_31);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_32 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral0E3B1F1FB38A7FE314D2F472DA7F442366E6C3F3);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral0E3B1F1FB38A7FE314D2F472DA7F442366E6C3F3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral6529F695EF6BEA2B61BE4F42D6AF092FC3B74190);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral6529F695EF6BEA2B61BE4F42D6AF092FC3B74190);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral0FE37E40E5DAB3AC411C2DDCA6D21991E811ACFA);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral0FE37E40E5DAB3AC411C2DDCA6D21991E811ACFA);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralCD98AE36981EE80A267C314EC60000C7F9D30870);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralCD98AE36981EE80A267C314EC60000C7F9D30870);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralDA5ABA16204EBD88821D2BBF3642268C4231FB1F);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralDA5ABA16204EBD88821D2BBF3642268C4231FB1F);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralDB14AD9A84752B16F43266CFCEDA5559C75F0B3B);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralDB14AD9A84752B16F43266CFCEDA5559C75F0B3B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralB1A13FADF51EF7EECE7DEA40C4B6E6E8042822D2);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralB1A13FADF51EF7EECE7DEA40C4B6E6E8042822D2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteralFFD6A129819CF79E42302EE62EB7CCEFABCB331A);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralFFD6A129819CF79E42302EE62EB7CCEFABCB331A);
		((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->set__SymbolicNames_24(L_40);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_41 = ((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->get__LiteralNames_23();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_42 = ((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->get__SymbolicNames_24();
		Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1 * L_43 = (Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1 *)il2cpp_codegen_object_new(Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1_il2cpp_TypeInfo_var);
		Vocabulary__ctor_mC18DB1FDCC17D191BF82625647675500E3685B22(L_43, L_41, L_42, /*hidden argument*/NULL);
		((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->set_DefaultVocabulary_25(L_43);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_44 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1228));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_45 = L_44;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_46 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tE0C77A196A84043D212D9734D859F7AF173CF607____15B580C0404CC1FCF86176BE2C380FBE591D755BC07DCDDC7638DB5C2F4F3155_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_45, L_46, /*hidden argument*/NULL);
		((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->set__serializedATN_26(L_45);
		ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C * L_47 = (ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C *)il2cpp_codegen_object_new(ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C_il2cpp_TypeInfo_var);
		ATNDeserializer__ctor_m298DE3A0731B00217D2CAAAF5EFB81673D2EC960(L_47, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_48 = ((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->get__serializedATN_26();
		NullCheck(L_47);
		ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * L_49 = VirtFuncInvoker1< ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 *, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* >::Invoke(5 /* Antlr4.Runtime.Atn.ATN Antlr4.Runtime.Atn.ATNDeserializer::Deserialize(System.Char[]) */, L_47, L_48);
		((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->set__ATN_27(L_49);
		ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * L_50 = ((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->get__ATN_27();
		NullCheck(L_50);
		int32_t L_51 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 Antlr4.Runtime.Atn.ATN::get_NumberOfDecisions() */, L_50);
		DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* L_52 = (DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540*)(DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540*)SZArrayNew(DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540_il2cpp_TypeInfo_var, (uint32_t)L_51);
		((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->set_decisionToDFA_18(L_52);
		V_0 = 0;
		goto IL_01e1;
	}

IL_01c5:
	{
		DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* L_53 = ((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->get_decisionToDFA_18();
		int32_t L_54 = V_0;
		ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * L_55 = ((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->get__ATN_27();
		int32_t L_56 = V_0;
		NullCheck(L_55);
		DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44 * L_57 = VirtFuncInvoker1< DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44 *, int32_t >::Invoke(8 /* Antlr4.Runtime.Atn.DecisionState Antlr4.Runtime.Atn.ATN::GetDecisionState(System.Int32) */, L_55, L_56);
		int32_t L_58 = V_0;
		DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF * L_59 = (DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF *)il2cpp_codegen_object_new(DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF_il2cpp_TypeInfo_var);
		DFA__ctor_m06EF20A1467F0164A9AF812DF1F820CCDFE70AE7(L_59, L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_59);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF *)L_59);
		int32_t L_60 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_01e1:
	{
		int32_t L_61 = V_0;
		ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * L_62 = ((FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_StaticFields*)il2cpp_codegen_static_fields_for(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var))->get__ATN_27();
		NullCheck(L_62);
		int32_t L_63 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 Antlr4.Runtime.Atn.ATN::get_NumberOfDecisions() */, L_62);
		if ((((int32_t)L_61) < ((int32_t)L_63)))
		{
			goto IL_01c5;
		}
	}
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
// Antlr4.Runtime.IVocabulary TriLibCore.Fbx.FbxParser::get_Vocabulary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxParser_get_Vocabulary_m0045998FBCD0C4B39535E6A0606A66F5D7B8CE37 (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxParser_get_Vocabulary_m0045998FBCD0C4B39535E6A0606A66F5D7B8CE37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->get_DefaultVocabulary_19();
		return L_0;
	}
}
// System.String[] TriLibCore.Fbx.FbxParser::get_RuleNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* FbxParser_get_RuleNames_m45EDEFEE04D07F9D539601343F0FAE7D68C939F9 (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxParser_get_RuleNames_m45EDEFEE04D07F9D539601343F0FAE7D68C939F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->get_ruleNames_16();
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FbxParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxParser__cctor_m5AB8F2439AD4C4FD7942563D425E8BC85714790B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxParser__cctor_m5AB8F2439AD4C4FD7942563D425E8BC85714790B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * L_0 = (PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D *)il2cpp_codegen_object_new(PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D_il2cpp_TypeInfo_var);
		PredictionContextCache__ctor_mB75F0F65B8B4CB05888842F96832BC81955E1B15(L_0, /*hidden argument*/NULL);
		((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->set_sharedContextCache_15(L_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral4F8278C89AD16DA05FEC4FDFC61FE44798B92720);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4F8278C89AD16DA05FEC4FDFC61FE44798B92720);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral82214C4C72C814D368F6AED97C3ECF8A32B0E6D0);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral82214C4C72C814D368F6AED97C3ECF8A32B0E6D0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralF8E966D1E207D02C44511A58DCCFF2F5429E9A3B);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF8E966D1E207D02C44511A58DCCFF2F5429E9A3B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral7F70BC6C91862DD38B1D6970460040B7FDA79818);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral7F70BC6C91862DD38B1D6970460040B7FDA79818);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralDF01DEBD2DBEA2B691BB3B454EFDBB4B14728FE6);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDF01DEBD2DBEA2B691BB3B454EFDBB4B14728FE6);
		((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->set_ruleNames_16(L_7);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral92DC370ABEB4DD1784265CEE05422305C0A4DEF3);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral92DC370ABEB4DD1784265CEE05422305C0A4DEF3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral762EDC7A7A0B53D18035E7C003C1C3DCDDCFE936);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral762EDC7A7A0B53D18035E7C003C1C3DCDDCFE936);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral968A8FF5D258B8366D56C62E06E3E56E11A36231);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral968A8FF5D258B8366D56C62E06E3E56E11A36231);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral850D887793387455E960CBC2D611DB88AB13289D);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral850D887793387455E960CBC2D611DB88AB13289D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral703DDA89D5A1468347462E570B61919C97F49332);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral703DDA89D5A1468347462E570B61919C97F49332);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral951073BF3052137F10909C5D078FC8FBEFBAB5B8);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral951073BF3052137F10909C5D078FC8FBEFBAB5B8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral169374FF8CA75C48832034574E04A80968717F05);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral169374FF8CA75C48832034574E04A80968717F05);
		((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->set__LiteralNames_17(L_15);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral0E3B1F1FB38A7FE314D2F472DA7F442366E6C3F3);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral0E3B1F1FB38A7FE314D2F472DA7F442366E6C3F3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral6529F695EF6BEA2B61BE4F42D6AF092FC3B74190);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral6529F695EF6BEA2B61BE4F42D6AF092FC3B74190);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral0FE37E40E5DAB3AC411C2DDCA6D21991E811ACFA);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral0FE37E40E5DAB3AC411C2DDCA6D21991E811ACFA);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralCD98AE36981EE80A267C314EC60000C7F9D30870);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralCD98AE36981EE80A267C314EC60000C7F9D30870);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralDA5ABA16204EBD88821D2BBF3642268C4231FB1F);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralDA5ABA16204EBD88821D2BBF3642268C4231FB1F);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralDB14AD9A84752B16F43266CFCEDA5559C75F0B3B);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralDB14AD9A84752B16F43266CFCEDA5559C75F0B3B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralB1A13FADF51EF7EECE7DEA40C4B6E6E8042822D2);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralB1A13FADF51EF7EECE7DEA40C4B6E6E8042822D2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralFFD6A129819CF79E42302EE62EB7CCEFABCB331A);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralFFD6A129819CF79E42302EE62EB7CCEFABCB331A);
		((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->set__SymbolicNames_18(L_24);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = ((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->get__LiteralNames_17();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = ((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->get__SymbolicNames_18();
		Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1 * L_27 = (Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1 *)il2cpp_codegen_object_new(Vocabulary_tD039903A43171F5A9249522BFBD64348E09C98D1_il2cpp_TypeInfo_var);
		Vocabulary__ctor_mC18DB1FDCC17D191BF82625647675500E3685B22(L_27, L_25, L_26, /*hidden argument*/NULL);
		((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->set_DefaultVocabulary_19(L_27);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_28 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)501));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_29 = L_28;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_30 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tE0C77A196A84043D212D9734D859F7AF173CF607____E6B3F79A69AFCBAE02B9004D85874DA053BC73246695367BED4B3639B3FBC399_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_29, L_30, /*hidden argument*/NULL);
		((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->set__serializedATN_20(L_29);
		ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C * L_31 = (ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C *)il2cpp_codegen_object_new(ATNDeserializer_t8C01A5DD47C55122671958919C7377B19D87F20C_il2cpp_TypeInfo_var);
		ATNDeserializer__ctor_m298DE3A0731B00217D2CAAAF5EFB81673D2EC960(L_31, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_32 = ((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->get__serializedATN_20();
		NullCheck(L_31);
		ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * L_33 = VirtFuncInvoker1< ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 *, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* >::Invoke(5 /* Antlr4.Runtime.Atn.ATN Antlr4.Runtime.Atn.ATNDeserializer::Deserialize(System.Char[]) */, L_31, L_32);
		((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->set__ATN_21(L_33);
		ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * L_34 = ((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->get__ATN_21();
		NullCheck(L_34);
		int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 Antlr4.Runtime.Atn.ATN::get_NumberOfDecisions() */, L_34);
		DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* L_36 = (DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540*)(DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540*)SZArrayNew(DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540_il2cpp_TypeInfo_var, (uint32_t)L_35);
		((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->set_decisionToDFA_14(L_36);
		V_0 = 0;
		goto IL_0152;
	}

IL_0136:
	{
		DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* L_37 = ((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->get_decisionToDFA_14();
		int32_t L_38 = V_0;
		ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * L_39 = ((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->get__ATN_21();
		int32_t L_40 = V_0;
		NullCheck(L_39);
		DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44 * L_41 = VirtFuncInvoker1< DecisionState_tE37DA23CC69DC086EDB48A7788C5F7B5DDE3FC44 *, int32_t >::Invoke(8 /* Antlr4.Runtime.Atn.DecisionState Antlr4.Runtime.Atn.ATN::GetDecisionState(System.Int32) */, L_39, L_40);
		int32_t L_42 = V_0;
		DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF * L_43 = (DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF *)il2cpp_codegen_object_new(DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF_il2cpp_TypeInfo_var);
		DFA__ctor_m06EF20A1467F0164A9AF812DF1F820CCDFE70AE7(L_43, L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_43);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (DFA_tBA00A1E9B8BBCE90A78F97CF9A7965F8C18AECFF *)L_43);
		int32_t L_44 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_0152:
	{
		int32_t L_45 = V_0;
		ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * L_46 = ((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->get__ATN_21();
		NullCheck(L_46);
		int32_t L_47 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 Antlr4.Runtime.Atn.ATN::get_NumberOfDecisions() */, L_46);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_0136;
		}
	}
	{
		return;
	}
}
// System.Void TriLibCore.Fbx.FbxParser::.ctor(Antlr4.Runtime.ITokenStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxParser__ctor_m1BFA20CF19CE6188B7D48F14D991CEA8BFE0B249 (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxParser__ctor_m1BFA20CF19CE6188B7D48F14D991CEA8BFE0B249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_1 = Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABF_inline(/*hidden argument*/NULL);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_2 = Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98A_inline(/*hidden argument*/NULL);
		FbxParser__ctor_m7FFEE4F77EC01B3C00E013121C398B4F621BDD22(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriLibCore.Fbx.FbxParser::.ctor(Antlr4.Runtime.ITokenStream,System.IO.TextWriter,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxParser__ctor_m7FFEE4F77EC01B3C00E013121C398B4F621BDD22 (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, RuntimeObject* ___input0, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___output1, TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___errorOutput2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxParser__ctor_m7FFEE4F77EC01B3C00E013121C398B4F621BDD22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_1 = ___output1;
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_2 = ___errorOutput2;
		IL2CPP_RUNTIME_CLASS_INIT(Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87_il2cpp_TypeInfo_var);
		Parser__ctor_m4FF0A78960939AA324606D1FA7A81FEA031466FB(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var);
		ATN_t428FA9098FC797D5127620C1F56E7FBA6EC36F51 * L_3 = ((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->get__ATN_21();
		DFAU5BU5D_t5539F5957A7FE523866D05A8CEECEEFDF753A540* L_4 = ((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->get_decisionToDFA_14();
		PredictionContextCache_t13B46ED3764163A8234AE8E7ED0C0A5C7E60FB5D * L_5 = ((FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_StaticFields*)il2cpp_codegen_static_fields_for(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var))->get_sharedContextCache_15();
		ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC * L_6 = (ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC *)il2cpp_codegen_object_new(ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC_il2cpp_TypeInfo_var);
		ParserATNSimulator__ctor_mDE8447A4307D82BD6FDBCD1D8374FB4407EE6DF9(L_6, __this, L_3, L_4, L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC * >::Invoke(11 /* System.Void Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::set_Interpreter(!1) */, __this, L_6);
		return;
	}
}
// TriLibCore.Fbx.FbxParser_DocumentContext TriLibCore.Fbx.FbxParser::document()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * FbxParser_document_mC1CEC9039F741AB64B1F416DC82F6F16D2F60207 (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxParser_document_mC1CEC9039F741AB64B1F416DC82F6F16D2F60207_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * V_0 = NULL;
	RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_0 = VirtFuncInvoker0< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * >::Invoke(32 /* Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_Context() */, __this);
		int32_t L_1 = Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_inline(__this, /*hidden argument*/Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_RuntimeMethod_var);
		DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * L_2 = (DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 *)il2cpp_codegen_object_new(DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634_il2cpp_TypeInfo_var);
		DocumentContext__ctor_m2B5D9CEB23D57738ACCCB92A17C9238598E16949(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * L_3 = V_0;
		VirtActionInvoker3< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *, int32_t, int32_t >::Invoke(29 /* System.Void Antlr4.Runtime.Parser::EnterRule(Antlr4.Runtime.ParserRuleContext,System.Int32,System.Int32) */, __this, L_3, 0, 0);
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * L_4 = V_0;
				VirtActionInvoker2< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *, int32_t >::Invoke(31 /* System.Void Antlr4.Runtime.Parser::EnterOuterAlt(Antlr4.Runtime.ParserRuleContext,System.Int32) */, __this, L_4, 1);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)13), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				RuntimeObject* L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
				NullCheck(L_5);
				InterfaceActionInvoker1< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * >::Invoke(3 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Sync(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_5, __this);
				RuntimeObject* L_6 = Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_6);
				int32_t L_7 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t3F78FA066FF5CDB5CCCCD98348CB38730994D8BF_il2cpp_TypeInfo_var, L_6, 1);
				if ((!(((uint32_t)L_7) == ((uint32_t)7))))
				{
					goto IL_0055;
				}
			}

IL_0046:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)12), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				FbxParser_nodeList_m6ACD15EEEB0C5FB1013CB1D7547647EADB3124BC(__this, /*hidden argument*/NULL);
			}

IL_0055:
			{
				IL2CPP_LEAVE(0x82, FINALLY_007b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0057;
			throw e;
		}

CATCH_0057:
		{ // begin catch(Antlr4.Runtime.RecognitionException)
			V_1 = ((RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C *)__exception_local);
			DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * L_8 = V_0;
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_9 = V_1;
			NullCheck(L_8);
			((ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *)L_8)->set_exception_6(L_9);
			RuntimeObject* L_10 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_11 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker2< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 *, RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * >::Invoke(6 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::ReportError(Antlr4.Runtime.Parser,Antlr4.Runtime.RecognitionException) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_10, __this, L_11);
			RuntimeObject* L_12 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_13 = V_1;
			NullCheck(L_12);
			InterfaceActionInvoker2< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 *, RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * >::Invoke(2 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Recover(Antlr4.Runtime.Parser,Antlr4.Runtime.RecognitionException) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_12, __this, L_13);
			IL2CPP_LEAVE(0x82, FINALLY_007b);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007b;
	}

FINALLY_007b:
	{ // begin finally (depth: 1)
		VirtActionInvoker0::Invoke(30 /* System.Void Antlr4.Runtime.Parser::ExitRule() */, __this);
		IL2CPP_END_FINALLY(123)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(123)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x82, IL_0082)
	}

IL_0082:
	{
		DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * L_14 = V_0;
		return L_14;
	}
}
// TriLibCore.Fbx.FbxParser_NodeListContext TriLibCore.Fbx.FbxParser::nodeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * FbxParser_nodeList_m6ACD15EEEB0C5FB1013CB1D7547647EADB3124BC (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxParser_nodeList_m6ACD15EEEB0C5FB1013CB1D7547647EADB3124BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_0 = VirtFuncInvoker0< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * >::Invoke(32 /* Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_Context() */, __this);
		int32_t L_1 = Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_inline(__this, /*hidden argument*/Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_RuntimeMethod_var);
		NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * L_2 = (NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 *)il2cpp_codegen_object_new(NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753_il2cpp_TypeInfo_var);
		NodeListContext__ctor_mC02566A90CFA1D53A003C20B268708C7CB405C2E(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * L_3 = V_0;
		VirtActionInvoker3< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *, int32_t, int32_t >::Invoke(29 /* System.Void Antlr4.Runtime.Parser::EnterRule(Antlr4.Runtime.ParserRuleContext,System.Int32,System.Int32) */, __this, L_3, 2, 1);
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * L_4 = V_0;
				VirtActionInvoker2< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *, int32_t >::Invoke(31 /* System.Void Antlr4.Runtime.Parser::EnterOuterAlt(Antlr4.Runtime.ParserRuleContext,System.Int32) */, __this, L_4, 1);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)17), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				RuntimeObject* L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
				NullCheck(L_5);
				InterfaceActionInvoker1< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * >::Invoke(3 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Sync(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_5, __this);
				RuntimeObject* L_6 = Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_6);
				int32_t L_7 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t3F78FA066FF5CDB5CCCCD98348CB38730994D8BF_il2cpp_TypeInfo_var, L_6, 1);
				V_1 = L_7;
			}

IL_0044:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)17), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				RuntimeObject* L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
				NullCheck(L_8);
				InterfaceActionInvoker1< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * >::Invoke(3 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Sync(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_8, __this);
				ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC * L_9 = VirtFuncInvoker0< ParserATNSimulator_tCC3DBFD74DE6474B6A72BEA42507D7A7B73A70FC * >::Invoke(10 /* !1 Antlr4.Runtime.Recognizer`2<Antlr4.Runtime.IToken,Antlr4.Runtime.Atn.ParserATNSimulator>::get_Interpreter() */, __this);
				RuntimeObject* L_10 = Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline(__this, /*hidden argument*/NULL);
				ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_11 = VirtFuncInvoker0< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * >::Invoke(32 /* Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_Context() */, __this);
				NullCheck(L_9);
				int32_t L_12 = VirtFuncInvoker3< int32_t, RuntimeObject*, int32_t, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * >::Invoke(5 /* System.Int32 Antlr4.Runtime.Atn.ParserATNSimulator::AdaptivePredict(Antlr4.Runtime.ITokenStream,System.Int32,Antlr4.Runtime.ParserRuleContext) */, L_9, L_10, 1, L_11);
				V_2 = L_12;
				int32_t L_13 = V_2;
				if ((((int32_t)L_13) == ((int32_t)1)))
				{
					goto IL_007b;
				}
			}

IL_0075:
			{
				int32_t L_14 = V_2;
				if ((((int32_t)L_14) == ((int32_t)2)))
				{
					goto IL_008c;
				}
			}

IL_0079:
			{
				goto IL_009b;
			}

IL_007b:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)15), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				FbxParser_array_m749E0AC705B6AAB7F0147C1763F2BE27FB3448FD(__this, /*hidden argument*/NULL);
				goto IL_009b;
			}

IL_008c:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)16), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				FbxParser_node_mA92149AD574A14B9D81E1AF18E8D00DA47BBBC74(__this, /*hidden argument*/NULL);
			}

IL_009b:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)19), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				RuntimeObject* L_15 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
				NullCheck(L_15);
				InterfaceActionInvoker1< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * >::Invoke(3 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Sync(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_15, __this);
				RuntimeObject* L_16 = Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_16);
				int32_t L_17 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t3F78FA066FF5CDB5CCCCD98348CB38730994D8BF_il2cpp_TypeInfo_var, L_16, 1);
				V_1 = L_17;
				int32_t L_18 = V_1;
				if ((((int32_t)L_18) == ((int32_t)7)))
				{
					goto IL_0044;
				}
			}

IL_00c0:
			{
				IL2CPP_LEAVE(0xED, FINALLY_00e6);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00c2;
			throw e;
		}

CATCH_00c2:
		{ // begin catch(Antlr4.Runtime.RecognitionException)
			V_3 = ((RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C *)__exception_local);
			NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * L_19 = V_0;
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_20 = V_3;
			NullCheck(L_19);
			((ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *)L_19)->set_exception_6(L_20);
			RuntimeObject* L_21 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_22 = V_3;
			NullCheck(L_21);
			InterfaceActionInvoker2< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 *, RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * >::Invoke(6 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::ReportError(Antlr4.Runtime.Parser,Antlr4.Runtime.RecognitionException) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_21, __this, L_22);
			RuntimeObject* L_23 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_24 = V_3;
			NullCheck(L_23);
			InterfaceActionInvoker2< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 *, RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * >::Invoke(2 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Recover(Antlr4.Runtime.Parser,Antlr4.Runtime.RecognitionException) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_23, __this, L_24);
			IL2CPP_LEAVE(0xED, FINALLY_00e6);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e6;
	}

FINALLY_00e6:
	{ // begin finally (depth: 1)
		VirtActionInvoker0::Invoke(30 /* System.Void Antlr4.Runtime.Parser::ExitRule() */, __this);
		IL2CPP_END_FINALLY(230)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(230)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xED, IL_00ed)
	}

IL_00ed:
	{
		NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * L_25 = V_0;
		return L_25;
	}
}
// TriLibCore.Fbx.FbxParser_ArrayContext TriLibCore.Fbx.FbxParser::array()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * FbxParser_array_m749E0AC705B6AAB7F0147C1763F2BE27FB3448FD (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxParser_array_m749E0AC705B6AAB7F0147C1763F2BE27FB3448FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * V_0 = NULL;
	RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_0 = VirtFuncInvoker0< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * >::Invoke(32 /* Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_Context() */, __this);
		int32_t L_1 = Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_inline(__this, /*hidden argument*/Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_RuntimeMethod_var);
		ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * L_2 = (ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 *)il2cpp_codegen_object_new(ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0_il2cpp_TypeInfo_var);
		ArrayContext__ctor_m91FAC2EF0461B24971DD4A8A151EA68688DEFEDB(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * L_3 = V_0;
		VirtActionInvoker3< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *, int32_t, int32_t >::Invoke(29 /* System.Void Antlr4.Runtime.Parser::EnterRule(Antlr4.Runtime.ParserRuleContext,System.Int32,System.Int32) */, __this, L_3, 4, 2);
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * L_4 = V_0;
				VirtActionInvoker2< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *, int32_t >::Invoke(31 /* System.Void Antlr4.Runtime.Parser::EnterOuterAlt(Antlr4.Runtime.ParserRuleContext,System.Int32) */, __this, L_4, 1);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)21), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, 7);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)22), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, 1);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)23), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, 2);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)24), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, ((int32_t)9));
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)25), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, 3);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)29), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				RuntimeObject* L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
				NullCheck(L_5);
				InterfaceActionInvoker1< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * >::Invoke(3 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Sync(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_5, __this);
				RuntimeObject* L_6 = Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_6);
				int32_t L_7 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t3F78FA066FF5CDB5CCCCD98348CB38730994D8BF_il2cpp_TypeInfo_var, L_6, 1);
				if ((!(((uint32_t)L_7) == ((uint32_t)4))))
				{
					goto IL_00c6;
				}
			}

IL_0097:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)26), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, 4);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)27), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, 1);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)28), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				FbxParser_dataList_m9FA4685F941B4F58BD64F4D26D7E21373EDEB7AB(__this, /*hidden argument*/NULL);
			}

IL_00c6:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)31), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, 5);
				IL2CPP_LEAVE(0x103, FINALLY_00fc);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00d8;
			throw e;
		}

CATCH_00d8:
		{ // begin catch(Antlr4.Runtime.RecognitionException)
			V_1 = ((RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C *)__exception_local);
			ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * L_8 = V_0;
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_9 = V_1;
			NullCheck(L_8);
			((ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *)L_8)->set_exception_6(L_9);
			RuntimeObject* L_10 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_11 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker2< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 *, RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * >::Invoke(6 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::ReportError(Antlr4.Runtime.Parser,Antlr4.Runtime.RecognitionException) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_10, __this, L_11);
			RuntimeObject* L_12 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_13 = V_1;
			NullCheck(L_12);
			InterfaceActionInvoker2< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 *, RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * >::Invoke(2 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Recover(Antlr4.Runtime.Parser,Antlr4.Runtime.RecognitionException) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_12, __this, L_13);
			IL2CPP_LEAVE(0x103, FINALLY_00fc);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fc;
	}

FINALLY_00fc:
	{ // begin finally (depth: 1)
		VirtActionInvoker0::Invoke(30 /* System.Void Antlr4.Runtime.Parser::ExitRule() */, __this);
		IL2CPP_END_FINALLY(252)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(252)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x103, IL_0103)
	}

IL_0103:
	{
		ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * L_14 = V_0;
		return L_14;
	}
}
// TriLibCore.Fbx.FbxParser_NodeContext TriLibCore.Fbx.FbxParser::node()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * FbxParser_node_mA92149AD574A14B9D81E1AF18E8D00DA47BBBC74 (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxParser_node_mA92149AD574A14B9D81E1AF18E8D00DA47BBBC74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * V_0 = NULL;
	int32_t V_1 = 0;
	RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_0 = VirtFuncInvoker0< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * >::Invoke(32 /* Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_Context() */, __this);
		int32_t L_1 = Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_inline(__this, /*hidden argument*/Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_RuntimeMethod_var);
		NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * L_2 = (NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 *)il2cpp_codegen_object_new(NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10_il2cpp_TypeInfo_var);
		NodeContext__ctor_m59338BC50A8C89892384CDDBECE757170F511DA9(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * L_3 = V_0;
		VirtActionInvoker3< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *, int32_t, int32_t >::Invoke(29 /* System.Void Antlr4.Runtime.Parser::EnterRule(Antlr4.Runtime.ParserRuleContext,System.Int32,System.Int32) */, __this, L_3, 6, 3);
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * L_4 = V_0;
				VirtActionInvoker2< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *, int32_t >::Invoke(31 /* System.Void Antlr4.Runtime.Parser::EnterOuterAlt(Antlr4.Runtime.ParserRuleContext,System.Int32) */, __this, L_4, 1);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)33), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, 7);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)34), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, 1);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)36), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				RuntimeObject* L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
				NullCheck(L_5);
				InterfaceActionInvoker1< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * >::Invoke(3 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Sync(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_5, __this);
				RuntimeObject* L_6 = Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_6);
				int32_t L_7 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t3F78FA066FF5CDB5CCCCD98348CB38730994D8BF_il2cpp_TypeInfo_var, L_6, 1);
				V_1 = L_7;
				int32_t L_8 = V_1;
				if (((int32_t)((int32_t)L_8&(int32_t)((int32_t)-64))))
				{
					goto IL_0089;
				}
			}

IL_006a:
			{
				int32_t L_9 = V_1;
				if (!((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)1)))<<(int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)63)))))&(int64_t)(((int64_t)((int64_t)((int32_t)3840)))))))
				{
					goto IL_0089;
				}
			}

IL_007a:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)35), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				FbxParser_dataList_m9FA4685F941B4F58BD64F4D26D7E21373EDEB7AB(__this, /*hidden argument*/NULL);
			}

IL_0089:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)43), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				RuntimeObject* L_10 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
				NullCheck(L_10);
				InterfaceActionInvoker1< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * >::Invoke(3 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Sync(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_10, __this);
				RuntimeObject* L_11 = Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_11);
				int32_t L_12 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t3F78FA066FF5CDB5CCCCD98348CB38730994D8BF_il2cpp_TypeInfo_var, L_11, 1);
				V_1 = L_12;
				int32_t L_13 = V_1;
				if ((!(((uint32_t)L_13) == ((uint32_t)3))))
				{
					goto IL_0102;
				}
			}

IL_00ae:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)38), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, 3);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)40), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				RuntimeObject* L_14 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
				NullCheck(L_14);
				InterfaceActionInvoker1< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * >::Invoke(3 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Sync(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_14, __this);
				RuntimeObject* L_15 = Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_15);
				int32_t L_16 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t3F78FA066FF5CDB5CCCCD98348CB38730994D8BF_il2cpp_TypeInfo_var, L_15, 1);
				V_1 = L_16;
				int32_t L_17 = V_1;
				if ((!(((uint32_t)L_17) == ((uint32_t)7))))
				{
					goto IL_00f2;
				}
			}

IL_00e3:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)39), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				FbxParser_nodeList_m6ACD15EEEB0C5FB1013CB1D7547647EADB3124BC(__this, /*hidden argument*/NULL);
			}

IL_00f2:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)42), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, 5);
			}

IL_0102:
			{
				IL2CPP_LEAVE(0x12F, FINALLY_0128);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0104;
			throw e;
		}

CATCH_0104:
		{ // begin catch(Antlr4.Runtime.RecognitionException)
			V_2 = ((RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C *)__exception_local);
			NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * L_18 = V_0;
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_19 = V_2;
			NullCheck(L_18);
			((ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *)L_18)->set_exception_6(L_19);
			RuntimeObject* L_20 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_21 = V_2;
			NullCheck(L_20);
			InterfaceActionInvoker2< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 *, RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * >::Invoke(6 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::ReportError(Antlr4.Runtime.Parser,Antlr4.Runtime.RecognitionException) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_20, __this, L_21);
			RuntimeObject* L_22 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_23 = V_2;
			NullCheck(L_22);
			InterfaceActionInvoker2< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 *, RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * >::Invoke(2 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Recover(Antlr4.Runtime.Parser,Antlr4.Runtime.RecognitionException) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_22, __this, L_23);
			IL2CPP_LEAVE(0x12F, FINALLY_0128);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0128;
	}

FINALLY_0128:
	{ // begin finally (depth: 1)
		VirtActionInvoker0::Invoke(30 /* System.Void Antlr4.Runtime.Parser::ExitRule() */, __this);
		IL2CPP_END_FINALLY(296)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(296)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x12F, IL_012f)
	}

IL_012f:
	{
		NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * L_24 = V_0;
		return L_24;
	}
}
// TriLibCore.Fbx.FbxParser_DataListContext TriLibCore.Fbx.FbxParser::dataList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * FbxParser_dataList_m9FA4685F941B4F58BD64F4D26D7E21373EDEB7AB (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxParser_dataList_m9FA4685F941B4F58BD64F4D26D7E21373EDEB7AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * V_0 = NULL;
	int32_t V_1 = 0;
	RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_0 = VirtFuncInvoker0< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * >::Invoke(32 /* Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_Context() */, __this);
		int32_t L_1 = Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_inline(__this, /*hidden argument*/Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_RuntimeMethod_var);
		DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * L_2 = (DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 *)il2cpp_codegen_object_new(DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1_il2cpp_TypeInfo_var);
		DataListContext__ctor_mCF22468532FFB1E671DBE77FE0D3A1645787A77F(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * L_3 = V_0;
		VirtActionInvoker3< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *, int32_t, int32_t >::Invoke(29 /* System.Void Antlr4.Runtime.Parser::EnterRule(Antlr4.Runtime.ParserRuleContext,System.Int32,System.Int32) */, __this, L_3, 8, 4);
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * L_4 = V_0;
				VirtActionInvoker2< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *, int32_t >::Invoke(31 /* System.Void Antlr4.Runtime.Parser::EnterOuterAlt(Antlr4.Runtime.ParserRuleContext,System.Int32) */, __this, L_4, 1);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)45), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				FbxParser_dataValue_mC8A976B7578BE490B33C913C20A77220C07DB692(__this, /*hidden argument*/NULL);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)50), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				RuntimeObject* L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
				NullCheck(L_5);
				InterfaceActionInvoker1< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * >::Invoke(3 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Sync(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_5, __this);
				RuntimeObject* L_6 = Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_6);
				int32_t L_7 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t3F78FA066FF5CDB5CCCCD98348CB38730994D8BF_il2cpp_TypeInfo_var, L_6, 1);
				V_1 = L_7;
				goto IL_0095;
			}

IL_0055:
			{
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)46), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				VirtFuncInvoker1< RuntimeObject*, int32_t >::Invoke(19 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Match(System.Int32) */, __this, 6);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)47), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				FbxParser_dataValue_mC8A976B7578BE490B33C913C20A77220C07DB692(__this, /*hidden argument*/NULL);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)52), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				RuntimeObject* L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
				NullCheck(L_8);
				InterfaceActionInvoker1< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * >::Invoke(3 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Sync(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_8, __this);
				RuntimeObject* L_9 = Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_9);
				int32_t L_10 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t3F78FA066FF5CDB5CCCCD98348CB38730994D8BF_il2cpp_TypeInfo_var, L_9, 1);
				V_1 = L_10;
			}

IL_0095:
			{
				int32_t L_11 = V_1;
				if ((((int32_t)L_11) == ((int32_t)6)))
				{
					goto IL_0055;
				}
			}

IL_0099:
			{
				IL2CPP_LEAVE(0xC6, FINALLY_00bf);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_009b;
			throw e;
		}

CATCH_009b:
		{ // begin catch(Antlr4.Runtime.RecognitionException)
			V_2 = ((RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C *)__exception_local);
			DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * L_12 = V_0;
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_13 = V_2;
			NullCheck(L_12);
			((ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *)L_12)->set_exception_6(L_13);
			RuntimeObject* L_14 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_15 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker2< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 *, RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * >::Invoke(6 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::ReportError(Antlr4.Runtime.Parser,Antlr4.Runtime.RecognitionException) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_14, __this, L_15);
			RuntimeObject* L_16 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_17 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker2< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 *, RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * >::Invoke(2 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Recover(Antlr4.Runtime.Parser,Antlr4.Runtime.RecognitionException) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_16, __this, L_17);
			IL2CPP_LEAVE(0xC6, FINALLY_00bf);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bf;
	}

FINALLY_00bf:
	{ // begin finally (depth: 1)
		VirtActionInvoker0::Invoke(30 /* System.Void Antlr4.Runtime.Parser::ExitRule() */, __this);
		IL2CPP_END_FINALLY(191)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(191)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC6, IL_00c6)
	}

IL_00c6:
	{
		DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * L_18 = V_0;
		return L_18;
	}
}
// TriLibCore.Fbx.FbxParser_DataValueContext TriLibCore.Fbx.FbxParser::dataValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * FbxParser_dataValue_mC8A976B7578BE490B33C913C20A77220C07DB692 (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxParser_dataValue_mC8A976B7578BE490B33C913C20A77220C07DB692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * V_0 = NULL;
	int32_t V_1 = 0;
	RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_0 = VirtFuncInvoker0< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * >::Invoke(32 /* Antlr4.Runtime.ParserRuleContext Antlr4.Runtime.Parser::get_Context() */, __this);
		int32_t L_1 = Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_inline(__this, /*hidden argument*/Recognizer_2_get_State_mEC1DB1DD799EE81BB7E88922C23588CE078D144B_RuntimeMethod_var);
		DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * L_2 = (DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 *)il2cpp_codegen_object_new(DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0_il2cpp_TypeInfo_var);
		DataValueContext__ctor_m11C25F7C483EC98BE4A74A54FEE332723C0E370E(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * L_3 = V_0;
		VirtActionInvoker3< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *, int32_t, int32_t >::Invoke(29 /* System.Void Antlr4.Runtime.Parser::EnterRule(Antlr4.Runtime.ParserRuleContext,System.Int32,System.Int32) */, __this, L_3, ((int32_t)10), 5);
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * L_4 = V_0;
				VirtActionInvoker2< ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *, int32_t >::Invoke(31 /* System.Void Antlr4.Runtime.Parser::EnterOuterAlt(Antlr4.Runtime.ParserRuleContext,System.Int32) */, __this, L_4, 1);
				Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00(__this, ((int32_t)53), /*hidden argument*/Recognizer_2_set_State_m9377E23B1B3AB9A5A4BAEFBD634C08EECD655A00_RuntimeMethod_var);
				RuntimeObject* L_5 = Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline(__this, /*hidden argument*/NULL);
				NullCheck(L_5);
				int32_t L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Antlr4.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t3F78FA066FF5CDB5CCCCD98348CB38730994D8BF_il2cpp_TypeInfo_var, L_5, 1);
				V_1 = L_6;
				int32_t L_7 = V_1;
				if (((int32_t)((int32_t)L_7&(int32_t)((int32_t)-64))))
				{
					goto IL_004f;
				}
			}

IL_003f:
			{
				int32_t L_8 = V_1;
				if (((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)1)))<<(int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)63)))))&(int64_t)(((int64_t)((int64_t)((int32_t)3840)))))))
				{
					goto IL_005e;
				}
			}

IL_004f:
			{
				RuntimeObject* L_9 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
				NullCheck(L_9);
				InterfaceFuncInvoker1< RuntimeObject*, Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * >::Invoke(1 /* Antlr4.Runtime.IToken Antlr4.Runtime.IAntlrErrorStrategy::RecoverInline(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_9, __this);
				goto IL_0071;
			}

IL_005e:
			{
				RuntimeObject* L_10 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
				NullCheck(L_10);
				InterfaceActionInvoker1< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * >::Invoke(5 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::ReportMatch(Antlr4.Runtime.Parser) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_10, __this);
				VirtFuncInvoker0< RuntimeObject* >::Invoke(27 /* Antlr4.Runtime.IToken Antlr4.Runtime.Parser::Consume() */, __this);
			}

IL_0071:
			{
				IL2CPP_LEAVE(0x9E, FINALLY_0097);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0073;
			throw e;
		}

CATCH_0073:
		{ // begin catch(Antlr4.Runtime.RecognitionException)
			V_2 = ((RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C *)__exception_local);
			DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * L_11 = V_0;
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_12 = V_2;
			NullCheck(L_11);
			((ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE *)L_11)->set_exception_6(L_12);
			RuntimeObject* L_13 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_14 = V_2;
			NullCheck(L_13);
			InterfaceActionInvoker2< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 *, RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * >::Invoke(6 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::ReportError(Antlr4.Runtime.Parser,Antlr4.Runtime.RecognitionException) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_13, __this, L_14);
			RuntimeObject* L_15 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* Antlr4.Runtime.IAntlrErrorStrategy Antlr4.Runtime.Parser::get_ErrorHandler() */, __this);
			RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * L_16 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker2< Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 *, RecognitionException_tC98F8865FCDB97459FA5D17990CD9554BA5DCC4C * >::Invoke(2 /* System.Void Antlr4.Runtime.IAntlrErrorStrategy::Recover(Antlr4.Runtime.Parser,Antlr4.Runtime.RecognitionException) */, IAntlrErrorStrategy_tCF416BCA768C850F586F5EB2E889CFDEFF41D1DD_il2cpp_TypeInfo_var, L_15, __this, L_16);
			IL2CPP_LEAVE(0x9E, FINALLY_0097);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0097;
	}

FINALLY_0097:
	{ // begin finally (depth: 1)
		VirtActionInvoker0::Invoke(30 /* System.Void Antlr4.Runtime.Parser::ExitRule() */, __this);
		IL2CPP_END_FINALLY(151)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(151)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9E, IL_009e)
	}

IL_009e:
	{
		DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * L_17 = V_0;
		return L_17;
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
// Antlr4.Runtime.Tree.ITerminalNode TriLibCore.Fbx.FbxParser_ArrayContext::IDENTIFIER()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayContext_IDENTIFIER_m8C6141ACADF6EFAE9F7D81EEA1E5FF467654E2B2 (ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(27 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32) */, __this, 7, 0);
		return L_0;
	}
}
// TriLibCore.Fbx.FbxParser_DataListContext TriLibCore.Fbx.FbxParser_ArrayContext::dataList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * ArrayContext_dataList_m4DB31EBD8B77311ED4E3BF7F0A46ADABEF675F5E (ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArrayContext_dataList_m4DB31EBD8B77311ED4E3BF7F0A46ADABEF675F5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * L_0 = GenericVirtFuncInvoker1< DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisDataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1_m5183E4B1228C385B98A9AE2D38F9767282FDC9CC_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_ArrayContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayContext__ctor_m91FAC2EF0461B24971DD4A8A151EA68688DEFEDB (ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArrayContext__ctor_m91FAC2EF0461B24971DD4A8A151EA68688DEFEDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_mC56CC27CEB2A31E78078A3D174AC913770C58FDB(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TriLibCore.Fbx.FbxParser_ArrayContext::get_RuleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayContext_get_RuleIndex_mC34C9D5E145A4256EFD86754D83605EBE23704E2 (ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * __this, const RuntimeMethod* method)
{
	{
		return 2;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_ArrayContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayContext_EnterRule_m670AA99DB33519DA1A7E18BABA386389360018D0 (ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArrayContext_EnterRule_m670AA99DB33519DA1A7E18BABA386389360018D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * >::Invoke(4 /* System.Void TriLibCore.Fbx.IFbxListener::EnterArray(TriLibCore.Fbx.FbxParser/ArrayContext) */, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_ArrayContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayContext_ExitRule_mE280CC77EE29F3B858D1F342E26D2E4A0EDD0D6E (ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArrayContext_ExitRule_mE280CC77EE29F3B858D1F342E26D2E4A0EDD0D6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< ArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0 * >::Invoke(5 /* System.Void TriLibCore.Fbx.IFbxListener::ExitArray(TriLibCore.Fbx.FbxParser/ArrayContext) */, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// TriLibCore.Fbx.FbxParser_DataValueContext[] TriLibCore.Fbx.FbxParser_DataListContext::dataValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* DataListContext_dataValue_m3B7012BC5F5145736E60D6CFD03F5D06E7CC3594 (DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataListContext_dataValue_m3B7012BC5F5145736E60D6CFD03F5D06E7CC3594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* L_0 = GenericVirtFuncInvoker0< DataValueContextU5BU5D_t2E4789CE2FE5137389CC7478688D1A215D7F789A* >::Invoke(ParserRuleContext_GetRuleContexts_TisDataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0_m94CC27EE6E2B483812ED90B65C66287B9CBA49B2_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_DataListContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataListContext__ctor_mCF22468532FFB1E671DBE77FE0D3A1645787A77F (DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataListContext__ctor_mCF22468532FFB1E671DBE77FE0D3A1645787A77F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_mC56CC27CEB2A31E78078A3D174AC913770C58FDB(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TriLibCore.Fbx.FbxParser_DataListContext::get_RuleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataListContext_get_RuleIndex_m72722973719F7A8A56949E6C91D784220CC14A01 (DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * __this, const RuntimeMethod* method)
{
	{
		return 4;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_DataListContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataListContext_EnterRule_m9941C1F4375FFA2E36D5DA6BD343F190FC50A7CB (DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataListContext_EnterRule_m9941C1F4375FFA2E36D5DA6BD343F190FC50A7CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * >::Invoke(8 /* System.Void TriLibCore.Fbx.IFbxListener::EnterDataList(TriLibCore.Fbx.FbxParser/DataListContext) */, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_DataListContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataListContext_ExitRule_mCFBA18A836156CD85D6E673D4BC3157125003048 (DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataListContext_ExitRule_mCFBA18A836156CD85D6E673D4BC3157125003048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * >::Invoke(9 /* System.Void TriLibCore.Fbx.IFbxListener::ExitDataList(TriLibCore.Fbx.FbxParser/DataListContext) */, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// Antlr4.Runtime.Tree.ITerminalNode TriLibCore.Fbx.FbxParser_DataValueContext::STRING()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataValueContext_STRING_mE6F1FBFCF5DE65B15F6670AB20401C87245C9F1E (DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(27 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32) */, __this, ((int32_t)11), 0);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_DataValueContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataValueContext__ctor_m11C25F7C483EC98BE4A74A54FEE332723C0E370E (DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataValueContext__ctor_m11C25F7C483EC98BE4A74A54FEE332723C0E370E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_mC56CC27CEB2A31E78078A3D174AC913770C58FDB(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TriLibCore.Fbx.FbxParser_DataValueContext::get_RuleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataValueContext_get_RuleIndex_m192BE9E6F96096EFDE3E080B783DF65D1666D62D (DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * __this, const RuntimeMethod* method)
{
	{
		return 5;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_DataValueContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataValueContext_EnterRule_m44E2F376B5C3A4E34851B97FDEE0EC86A6A43816 (DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataValueContext_EnterRule_m44E2F376B5C3A4E34851B97FDEE0EC86A6A43816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * >::Invoke(10 /* System.Void TriLibCore.Fbx.IFbxListener::EnterDataValue(TriLibCore.Fbx.FbxParser/DataValueContext) */, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_DataValueContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataValueContext_ExitRule_m8229424221125B5D26B04E43800BA420C6EC6B04 (DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataValueContext_ExitRule_m8229424221125B5D26B04E43800BA420C6EC6B04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DataValueContext_t64AC213852DF756E4EF0BC41CA00E53EB91926A0 * >::Invoke(11 /* System.Void TriLibCore.Fbx.IFbxListener::ExitDataValue(TriLibCore.Fbx.FbxParser/DataValueContext) */, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// TriLibCore.Fbx.FbxParser_NodeListContext TriLibCore.Fbx.FbxParser_DocumentContext::nodeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * DocumentContext_nodeList_mF76770961C29D50238577E9E81B19C55DC8C01D4 (DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DocumentContext_nodeList_mF76770961C29D50238577E9E81B19C55DC8C01D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * L_0 = GenericVirtFuncInvoker1< NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisNodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753_m43254CDCE9ECFD09760690B4277E91A02A6AACE8_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_DocumentContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentContext__ctor_m2B5D9CEB23D57738ACCCB92A17C9238598E16949 (DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DocumentContext__ctor_m2B5D9CEB23D57738ACCCB92A17C9238598E16949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_mC56CC27CEB2A31E78078A3D174AC913770C58FDB(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TriLibCore.Fbx.FbxParser_DocumentContext::get_RuleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DocumentContext_get_RuleIndex_mBA599E8AC4E6A2F2DE4FA44D40FBEE54F2CB3FA3 (DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_DocumentContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentContext_EnterRule_m9A32489240F54DD1C574BCBED21FBAE7E88D74DC (DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DocumentContext_EnterRule_m9A32489240F54DD1C574BCBED21FBAE7E88D74DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * >::Invoke(0 /* System.Void TriLibCore.Fbx.IFbxListener::EnterDocument(TriLibCore.Fbx.FbxParser/DocumentContext) */, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_DocumentContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DocumentContext_ExitRule_m6D1A09C178AC55591143FF28CE30646052C88667 (DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DocumentContext_ExitRule_m6D1A09C178AC55591143FF28CE30646052C88667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * >::Invoke(1 /* System.Void TriLibCore.Fbx.IFbxListener::ExitDocument(TriLibCore.Fbx.FbxParser/DocumentContext) */, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// Antlr4.Runtime.Tree.ITerminalNode TriLibCore.Fbx.FbxParser_NodeContext::IDENTIFIER()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeContext_IDENTIFIER_m58467CE6C45CDDE33506DADDC3F567EFBF0F9C08 (NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = VirtFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(27 /* Antlr4.Runtime.Tree.ITerminalNode Antlr4.Runtime.ParserRuleContext::GetToken(System.Int32,System.Int32) */, __this, 7, 0);
		return L_0;
	}
}
// TriLibCore.Fbx.FbxParser_DataListContext TriLibCore.Fbx.FbxParser_NodeContext::dataList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * NodeContext_dataList_m1A696B2CBAEEE4F97420922AE040274F6C099592 (NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeContext_dataList_m1A696B2CBAEEE4F97420922AE040274F6C099592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 * L_0 = GenericVirtFuncInvoker1< DataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisDataListContext_t5976DBEF47102AC620473D37AA76BF72A96C67F1_m5183E4B1228C385B98A9AE2D38F9767282FDC9CC_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// TriLibCore.Fbx.FbxParser_NodeListContext TriLibCore.Fbx.FbxParser_NodeContext::nodeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * NodeContext_nodeList_mA28AB193B4E8590C390D284F66A2E0599A552852 (NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeContext_nodeList_mA28AB193B4E8590C390D284F66A2E0599A552852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * L_0 = GenericVirtFuncInvoker1< NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 *, int32_t >::Invoke(ParserRuleContext_GetRuleContext_TisNodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753_m43254CDCE9ECFD09760690B4277E91A02A6AACE8_RuntimeMethod_var, __this, 0);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_NodeContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeContext__ctor_m59338BC50A8C89892384CDDBECE757170F511DA9 (NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeContext__ctor_m59338BC50A8C89892384CDDBECE757170F511DA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_mC56CC27CEB2A31E78078A3D174AC913770C58FDB(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TriLibCore.Fbx.FbxParser_NodeContext::get_RuleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeContext_get_RuleIndex_m513BBE67B061223FA640524F695BF52B5A52E5F3 (NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * __this, const RuntimeMethod* method)
{
	{
		return 3;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_NodeContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeContext_EnterRule_mF592D941823FBC40D9FE4A5793169928828C4104 (NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeContext_EnterRule_mF592D941823FBC40D9FE4A5793169928828C4104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * >::Invoke(6 /* System.Void TriLibCore.Fbx.IFbxListener::EnterNode(TriLibCore.Fbx.FbxParser/NodeContext) */, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_NodeContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeContext_ExitRule_mBBC6D7397F13C25013C942815440EC493E44794A (NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeContext_ExitRule_mBBC6D7397F13C25013C942815440EC493E44794A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< NodeContext_t3E9241FA9D066793174F9CFA648673716F922D10 * >::Invoke(7 /* System.Void TriLibCore.Fbx.IFbxListener::ExitNode(TriLibCore.Fbx.FbxParser/NodeContext) */, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// TriLibCore.Fbx.FbxParser_ArrayContext[] TriLibCore.Fbx.FbxParser_NodeListContext::array()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayContextU5BU5D_t0D654B7E1B1B80979F051D876DAD540123DF01C0* NodeListContext_array_m21E3642A60C1F385309755212F69AAB28904320C (NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeListContext_array_m21E3642A60C1F385309755212F69AAB28904320C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayContextU5BU5D_t0D654B7E1B1B80979F051D876DAD540123DF01C0* L_0 = GenericVirtFuncInvoker0< ArrayContextU5BU5D_t0D654B7E1B1B80979F051D876DAD540123DF01C0* >::Invoke(ParserRuleContext_GetRuleContexts_TisArrayContext_t158EBE3CBCC4E6F6F3587D3B1717175C36D61DB0_m8688A45C5302ED6132A822E1D889076605AE763E_RuntimeMethod_var, __this);
		return L_0;
	}
}
// TriLibCore.Fbx.FbxParser_NodeContext[] TriLibCore.Fbx.FbxParser_NodeListContext::node()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeContextU5BU5D_tE60DD7EF4687D3544FD380AB84B03B802D19A8F7* NodeListContext_node_m59F409381647D87268BE0580F0F1F7DCB3120987 (NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeListContext_node_m59F409381647D87268BE0580F0F1F7DCB3120987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeContextU5BU5D_tE60DD7EF4687D3544FD380AB84B03B802D19A8F7* L_0 = GenericVirtFuncInvoker0< NodeContextU5BU5D_tE60DD7EF4687D3544FD380AB84B03B802D19A8F7* >::Invoke(ParserRuleContext_GetRuleContexts_TisNodeContext_t3E9241FA9D066793174F9CFA648673716F922D10_m61E73B5DD4F8D309F1A69BC0B22DA6B3EB413AB6_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_NodeListContext::.ctor(Antlr4.Runtime.ParserRuleContext,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeListContext__ctor_mC02566A90CFA1D53A003C20B268708C7CB405C2E (NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * __this, ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * ___parent0, int32_t ___invokingState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeListContext__ctor_mC02566A90CFA1D53A003C20B268708C7CB405C2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE * L_0 = ___parent0;
		int32_t L_1 = ___invokingState1;
		IL2CPP_RUNTIME_CLASS_INIT(ParserRuleContext_tF0703CE4F728BD16A5052A391908AFF5002D44EE_il2cpp_TypeInfo_var);
		ParserRuleContext__ctor_mC56CC27CEB2A31E78078A3D174AC913770C58FDB(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 TriLibCore.Fbx.FbxParser_NodeListContext::get_RuleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeListContext_get_RuleIndex_m4950603D6458127D9DC2BD319D9580F26946C47E (NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * __this, const RuntimeMethod* method)
{
	{
		return 1;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_NodeListContext::EnterRule(Antlr4.Runtime.Tree.IParseTreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeListContext_EnterRule_mC25BDD495CA21C772D4FE40C05ABC3CBD59EE841 (NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeListContext_EnterRule_mC25BDD495CA21C772D4FE40C05ABC3CBD59EE841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * >::Invoke(2 /* System.Void TriLibCore.Fbx.IFbxListener::EnterNodeList(TriLibCore.Fbx.FbxParser/NodeListContext) */, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
	{
		return;
	}
}
// System.Void TriLibCore.Fbx.FbxParser_NodeListContext::ExitRule(Antlr4.Runtime.Tree.IParseTreeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeListContext_ExitRule_m1DD10C1F26F25BD27B4B27FD6D57574C92A054B7 (NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeListContext_ExitRule_m1DD10C1F26F25BD27B4B27FD6D57574C92A054B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< NodeListContext_tD3251428F6F4D7A29CFA906BFED3D78965DD0753 * >::Invoke(3 /* System.Void TriLibCore.Fbx.IFbxListener::ExitNodeList(TriLibCore.Fbx.FbxParser/NodeListContext) */, IFbxListener_tD8C6C5D3C8181AAD1FE6589FBD46AA637C020A64_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0011:
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
// System.Void TriLibCore.Fbx.PropertyAccessorByte::.ctor(TriLibCore.Fbx.FBXProcessor,TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte__ctor_m7492E29B7EDA6CBD77CC4A955C9140478881A6D5 (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor0, FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ___properties1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = ___processor0;
		__this->set__processor_0(L_0);
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  L_1 = ___properties1;
		__this->set__properties_1(L_1);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Byte> TriLibCore.Fbx.PropertyAccessorByte::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorByte_GetEnumerator_m313A28818F49406895B7E7719C12E8F85CDA884A (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorByte_GetEnumerator_m313A28818F49406895B7E7719C12E8F85CDA884A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorByte_GetEnumerator_m313A28818F49406895B7E7719C12E8F85CDA884A_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator TriLibCore.Fbx.PropertyAccessorByte::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorByte_System_Collections_IEnumerable_GetEnumerator_mC2F8F5377CA537CBCDE0314BA510BF97E65AFB08 (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = PropertyAccessorByte_GetEnumerator_m313A28818F49406895B7E7719C12E8F85CDA884A(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::Add(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte_Add_m99C6F95E24A61B3F579E80A309F8E49D389C814C (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorByte_Add_m99C6F95E24A61B3F579E80A309F8E49D389C814C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorByte_Add_m99C6F95E24A61B3F579E80A309F8E49D389C814C_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte_Clear_m03A585FF3E57F81CD7B08B85683F712898EF6CEF (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorByte_Clear_m03A585FF3E57F81CD7B08B85683F712898EF6CEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorByte_Clear_m03A585FF3E57F81CD7B08B85683F712898EF6CEF_RuntimeMethod_var);
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorByte::Contains(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorByte_Contains_m9A171B5B1904D2E916295FAAD01428AEAA7761DE (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorByte_Contains_m9A171B5B1904D2E916295FAAD01428AEAA7761DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorByte_Contains_m9A171B5B1904D2E916295FAAD01428AEAA7761DE_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::CopyTo(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte_CopyTo_m561CB9E7D26F3DA5BB76BE34C9E365D7B0B9505A (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		uint8_t L_4 = PropertyAccessorByte_GetElement_m749539B7A1E5E0A7CDFCD7B688D1F468971824DB(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))), (uint8_t)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = PropertyAccessorByte_get_Count_m5903D2BF83CF351E0A9190DCDCCA249F08CF9651(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorByte::Remove(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorByte_Remove_m57ED15E3952A3FBC7C1F5051D00AED6BBCD960A3 (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorByte_Remove_m57ED15E3952A3FBC7C1F5051D00AED6BBCD960A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorByte_Remove_m57ED15E3952A3FBC7C1F5051D00AED6BBCD960A3_RuntimeMethod_var);
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorByte::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorByte_get_Count_m5903D2BF83CF351E0A9190DCDCCA249F08CF9651 (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, const RuntimeMethod* method)
{
	{
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_0 = __this->get_address_of__properties_1();
		int32_t L_1 = FBXProperties_GetPropertyArrayLength_m2CF5268C993BD291D6FE40F90BF8A2D3C9B19D75((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorByte::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorByte_get_IsReadOnly_m1F946C6BC812D32434030560A27020FBD20625FC (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsReadOnlyU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorByte::IndexOf(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorByte_IndexOf_m66604484DDD455E1FBC6F729335FC39438EB40F9 (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorByte_IndexOf_m66604484DDD455E1FBC6F729335FC39438EB40F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorByte_IndexOf_m66604484DDD455E1FBC6F729335FC39438EB40F9_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::Insert(System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte_Insert_m2BF02C00C591FD753A3258F63EBF9A32690370C2 (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, int32_t ___index0, uint8_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorByte_Insert_m2BF02C00C591FD753A3258F63EBF9A32690370C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorByte_Insert_m2BF02C00C591FD753A3258F63EBF9A32690370C2_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte_RemoveAt_m2A0B991098E7332E5A0CD7E83031DBF79D6CF194 (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorByte_RemoveAt_m2A0B991098E7332E5A0CD7E83031DBF79D6CF194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorByte_RemoveAt_m2A0B991098E7332E5A0CD7E83031DBF79D6CF194_RuntimeMethod_var);
	}
}
// System.Byte TriLibCore.Fbx.PropertyAccessorByte::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PropertyAccessorByte_get_Item_m8DADDE0EFC766B22BCCAF815F339FE60066CEB31 (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		uint8_t L_1 = PropertyAccessorByte_GetElement_m749539B7A1E5E0A7CDFCD7B688D1F468971824DB(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::set_Item(System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte_set_Item_m3ACB32AB853709E7DA8326CAB7F58B264FFCD2CE (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, int32_t ___index0, uint8_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorByte_set_Item_m3ACB32AB853709E7DA8326CAB7F58B264FFCD2CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorByte_set_Item_m3ACB32AB853709E7DA8326CAB7F58B264FFCD2CE_RuntimeMethod_var);
	}
}
// System.Byte TriLibCore.Fbx.PropertyAccessorByte::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PropertyAccessorByte_GetElement_m749539B7A1E5E0A7CDFCD7B688D1F468971824DB (PropertyAccessorByte_tC865D288ED78B5227320D45CA86A4BC710D15CD5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_0 = __this->get_address_of__properties_1();
		bool L_1 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_2 = __this->get_address_of__properties_1();
		int32_t L_3 = ___i0;
		uint8_t L_4 = FBXProperties_ASCIIGetByteValue_mD67FD93B72A4087D234A911E1DB913AA68124462((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_5 = __this->get__processor_0();
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_6 = __this->get_address_of__properties_1();
		int32_t L_7 = L_6->get_BasePropertyIndex_1();
		NullCheck(L_5);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_8 = FBXProcessor_LoadArrayProperty_mDC46E3B2C891ECDE143C43D0F6FC6A9806693B2B(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_9 = __this->get__processor_0();
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_10 = V_0;
		NullCheck(L_9);
		FBXProcessor_SetActiveBinaryReader_m3D2195A2CECF883B72C77BF070A2F4AD6503909C(L_9, L_10, /*hidden argument*/NULL);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_11 = __this->get__processor_0();
		NullCheck(L_11);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_12 = L_11->get_ActiveBinaryReader_7();
		NullCheck(L_12);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_13 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_12);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_14 = V_0;
		int64_t L_15 = L_14.get_Position_5();
		int32_t L_16 = ___i0;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_17 = __this->get__processor_0();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_ActiveSubDataSize_6();
		NullCheck(L_13);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_13, ((int64_t)il2cpp_codegen_add((int64_t)L_15, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)L_18))))))), 0);
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_19 = __this->get_address_of__properties_1();
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_20 = __this->get__processor_0();
		NullCheck(L_20);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_21 = L_20->get_ActiveBinaryReader_7();
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_22 = V_0;
		uint8_t L_23 = FBXProperties_BinaryConvertByteValue_m18341CC7F9ECAA5E46C217E6732588A954C005A1((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_19, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
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
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::.ctor(TriLibCore.Fbx.FBXProcessor,TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat__ctor_m3D52B735C69866ED9CF0A63F8E4E6B9B20544A90 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor0, FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ___properties1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = ___processor0;
		__this->set__processor_0(L_0);
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  L_1 = ___properties1;
		__this->set__properties_1(L_1);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Single> TriLibCore.Fbx.PropertyAccessorFloat::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorFloat_GetEnumerator_m68A342A080F1A9754974829F480B7D0F7B348436 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorFloat_GetEnumerator_m68A342A080F1A9754974829F480B7D0F7B348436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorFloat_GetEnumerator_m68A342A080F1A9754974829F480B7D0F7B348436_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator TriLibCore.Fbx.PropertyAccessorFloat::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorFloat_System_Collections_IEnumerable_GetEnumerator_m18FA921AA4205A09FF96B44E06532E7F5DB5926D (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = PropertyAccessorFloat_GetEnumerator_m68A342A080F1A9754974829F480B7D0F7B348436(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::Add(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat_Add_m316F705428F839F8E7965E7BA7CE8D1DDD548992 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, float ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorFloat_Add_m316F705428F839F8E7965E7BA7CE8D1DDD548992_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorFloat_Add_m316F705428F839F8E7965E7BA7CE8D1DDD548992_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat_Clear_mBD5287362EFE04A6023ABEE0B2D89060745FF704 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorFloat_Clear_mBD5287362EFE04A6023ABEE0B2D89060745FF704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorFloat_Clear_mBD5287362EFE04A6023ABEE0B2D89060745FF704_RuntimeMethod_var);
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorFloat::Contains(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorFloat_Contains_m35576B03FE7089694211F393BC9550471CBFF527 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, float ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorFloat_Contains_m35576B03FE7089694211F393BC9550471CBFF527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorFloat_Contains_m35576B03FE7089694211F393BC9550471CBFF527_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::CopyTo(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat_CopyTo_m34A629567DAEFCCB5FD54D83161C10780015EEE3 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		float L_4 = PropertyAccessorFloat_GetElement_m4365F7F0EC10D128412E71CB75BFE68011BD7738(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))), (float)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = PropertyAccessorFloat_get_Count_mF041757D7C628A07058605A1543CDE162B5FE32F(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorFloat::Remove(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorFloat_Remove_m711AECAB78260ADCDD718331F9697D2C5077EC4E (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, float ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorFloat_Remove_m711AECAB78260ADCDD718331F9697D2C5077EC4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorFloat_Remove_m711AECAB78260ADCDD718331F9697D2C5077EC4E_RuntimeMethod_var);
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorFloat::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorFloat_get_Count_mF041757D7C628A07058605A1543CDE162B5FE32F (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, const RuntimeMethod* method)
{
	{
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_0 = __this->get_address_of__properties_1();
		int32_t L_1 = FBXProperties_GetPropertyArrayLength_m2CF5268C993BD291D6FE40F90BF8A2D3C9B19D75((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorFloat::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorFloat_get_IsReadOnly_mE6E70317D9740D7978D5709216A8521BE7467621 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsReadOnlyU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorFloat::IndexOf(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorFloat_IndexOf_mCA2F5389BC3C5B690416F748F0AA9F42B43149F7 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, float ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorFloat_IndexOf_mCA2F5389BC3C5B690416F748F0AA9F42B43149F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorFloat_IndexOf_mCA2F5389BC3C5B690416F748F0AA9F42B43149F7_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::Insert(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat_Insert_m107E7A933E0E33D884FDA50DD5B383952923E9B3 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, int32_t ___index0, float ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorFloat_Insert_m107E7A933E0E33D884FDA50DD5B383952923E9B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorFloat_Insert_m107E7A933E0E33D884FDA50DD5B383952923E9B3_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat_RemoveAt_mAE59C41B1F1B8EEFB881EBB1A3D2797B4CECCDF1 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorFloat_RemoveAt_mAE59C41B1F1B8EEFB881EBB1A3D2797B4CECCDF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorFloat_RemoveAt_mAE59C41B1F1B8EEFB881EBB1A3D2797B4CECCDF1_RuntimeMethod_var);
	}
}
// System.Single TriLibCore.Fbx.PropertyAccessorFloat::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyAccessorFloat_get_Item_m40DB4A4DF8B6082A1D599D587CDBCC68398BBF17 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		float L_1 = PropertyAccessorFloat_GetElement_m4365F7F0EC10D128412E71CB75BFE68011BD7738(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat_set_Item_m27AE083116282F2A5F43F4A50D69DEB8BA1D4BA5 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorFloat_set_Item_m27AE083116282F2A5F43F4A50D69DEB8BA1D4BA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorFloat_set_Item_m27AE083116282F2A5F43F4A50D69DEB8BA1D4BA5_RuntimeMethod_var);
	}
}
// System.Single TriLibCore.Fbx.PropertyAccessorFloat::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyAccessorFloat_GetElement_m4365F7F0EC10D128412E71CB75BFE68011BD7738 (PropertyAccessorFloat_t127D73645DA5121A964B1C045C699B0A6FF54D6E * __this, int32_t ___i0, const RuntimeMethod* method)
{
	FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_0 = __this->get_address_of__properties_1();
		bool L_1 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_2 = __this->get_address_of__properties_1();
		int32_t L_3 = ___i0;
		float L_4 = FBXProperties_ASCIIGetFloatValue_m429F0879B93C07511D3DB1D6C24F1B4B5BD6F5AE((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_2, L_3, (bool)0, /*hidden argument*/NULL);
		return L_4;
	}

IL_001b:
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_5 = __this->get__processor_0();
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_6 = __this->get_address_of__properties_1();
		int32_t L_7 = L_6->get_BasePropertyIndex_1();
		NullCheck(L_5);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_8 = FBXProcessor_LoadArrayProperty_mDC46E3B2C891ECDE143C43D0F6FC6A9806693B2B(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_9 = __this->get__processor_0();
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_10 = V_0;
		NullCheck(L_9);
		FBXProcessor_SetActiveBinaryReader_m3D2195A2CECF883B72C77BF070A2F4AD6503909C(L_9, L_10, /*hidden argument*/NULL);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_11 = __this->get__processor_0();
		NullCheck(L_11);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_12 = L_11->get_ActiveBinaryReader_7();
		NullCheck(L_12);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_13 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_12);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_14 = V_0;
		int64_t L_15 = L_14.get_Position_5();
		int32_t L_16 = ___i0;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_17 = __this->get__processor_0();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_ActiveSubDataSize_6();
		NullCheck(L_13);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_13, ((int64_t)il2cpp_codegen_add((int64_t)L_15, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)L_18))))))), 0);
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_19 = __this->get_address_of__properties_1();
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_20 = __this->get__processor_0();
		NullCheck(L_20);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_21 = L_20->get_ActiveBinaryReader_7();
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_22 = V_0;
		float L_23 = FBXProperties_BinaryConvertFloatValue_m89ED95DFB0C293ECFD71CBEEF1AE6E11AAAAFC48((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_19, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
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
// System.Void TriLibCore.Fbx.PropertyAccessorInt::.ctor(TriLibCore.Fbx.FBXProcessor,TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt__ctor_m60AA2E834C312CDB8503CDD67CD949241D527060 (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor0, FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ___properties1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = ___processor0;
		__this->set__processor_0(L_0);
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  L_1 = ___properties1;
		__this->set__properties_1(L_1);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Int32> TriLibCore.Fbx.PropertyAccessorInt::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorInt_GetEnumerator_m5B21BC8FE724DD999BE293E497212F3D58D933EB (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorInt_GetEnumerator_m5B21BC8FE724DD999BE293E497212F3D58D933EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorInt_GetEnumerator_m5B21BC8FE724DD999BE293E497212F3D58D933EB_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator TriLibCore.Fbx.PropertyAccessorInt::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorInt_System_Collections_IEnumerable_GetEnumerator_m685808366FB979DDD9AF1D41314CB1E316A02A88 (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = PropertyAccessorInt_GetEnumerator_m5B21BC8FE724DD999BE293E497212F3D58D933EB(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorInt::Add(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt_Add_m76ADC5978D2F2FD638996B25F639921C3A4C5D8B (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, int32_t ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorInt_Add_m76ADC5978D2F2FD638996B25F639921C3A4C5D8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorInt_Add_m76ADC5978D2F2FD638996B25F639921C3A4C5D8B_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorInt::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt_Clear_mB090E7F330C61C70FE3EFEF7E8912693209A5BAB (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorInt_Clear_mB090E7F330C61C70FE3EFEF7E8912693209A5BAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorInt_Clear_mB090E7F330C61C70FE3EFEF7E8912693209A5BAB_RuntimeMethod_var);
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorInt::Contains(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorInt_Contains_mFD8DBA839E7D1AAB4FE1091F62A3337F506F9343 (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, int32_t ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorInt_Contains_mFD8DBA839E7D1AAB4FE1091F62A3337F506F9343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorInt_Contains_mFD8DBA839E7D1AAB4FE1091F62A3337F506F9343_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorInt::CopyTo(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt_CopyTo_mCA84DEF09E7BC5DF3AF15E292B12EFEC9C97E78B (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		int32_t L_4 = PropertyAccessorInt_GetElement_m9FF39B7D999D28F59B5EBCE2599F4AE85F77AF40(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))), (int32_t)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = PropertyAccessorInt_get_Count_mF9D56A290F6E1EFF951CA24259AD1E90EF90DF27(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorInt::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorInt_Remove_m9AC5C3F67AADE202EA0A7129276E98D436142DEB (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, int32_t ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorInt_Remove_m9AC5C3F67AADE202EA0A7129276E98D436142DEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorInt_Remove_m9AC5C3F67AADE202EA0A7129276E98D436142DEB_RuntimeMethod_var);
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorInt::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorInt_get_Count_mF9D56A290F6E1EFF951CA24259AD1E90EF90DF27 (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, const RuntimeMethod* method)
{
	{
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_0 = __this->get_address_of__properties_1();
		int32_t L_1 = FBXProperties_GetPropertyArrayLength_m2CF5268C993BD291D6FE40F90BF8A2D3C9B19D75((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorInt::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorInt_get_IsReadOnly_mFC0C0A2A60D7236F3872CD4FDDF37619B90D231E (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsReadOnlyU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorInt::IndexOf(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorInt_IndexOf_mF1526D22C6119D7870705F838DFF07D78561D210 (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, int32_t ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorInt_IndexOf_mF1526D22C6119D7870705F838DFF07D78561D210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorInt_IndexOf_mF1526D22C6119D7870705F838DFF07D78561D210_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorInt::Insert(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt_Insert_m85FCD38AC01D1C00204BFCAB4C0EA67A69B224B6 (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, int32_t ___index0, int32_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorInt_Insert_m85FCD38AC01D1C00204BFCAB4C0EA67A69B224B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorInt_Insert_m85FCD38AC01D1C00204BFCAB4C0EA67A69B224B6_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorInt::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt_RemoveAt_m66753900311EC675797FEC80D7D5205F60CE950B (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorInt_RemoveAt_m66753900311EC675797FEC80D7D5205F60CE950B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorInt_RemoveAt_m66753900311EC675797FEC80D7D5205F60CE950B_RuntimeMethod_var);
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorInt::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorInt_get_Item_m649559744238FABABCE73EB921CFBC8AE5A3600B (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = PropertyAccessorInt_GetElement_m9FF39B7D999D28F59B5EBCE2599F4AE85F77AF40(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorInt::set_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt_set_Item_m60758E1C8B082AB272F09C901E23BF2282658930 (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorInt_set_Item_m60758E1C8B082AB272F09C901E23BF2282658930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorInt_set_Item_m60758E1C8B082AB272F09C901E23BF2282658930_RuntimeMethod_var);
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorInt::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorInt_GetElement_m9FF39B7D999D28F59B5EBCE2599F4AE85F77AF40 (PropertyAccessorInt_tCDF4F66A1055014283B1A38D5BD7E0BF048409AC * __this, int32_t ___i0, const RuntimeMethod* method)
{
	FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_0 = __this->get_address_of__properties_1();
		bool L_1 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_2 = __this->get_address_of__properties_1();
		int32_t L_3 = ___i0;
		int32_t L_4 = FBXProperties_ASCIIGetIntValue_mD6C9B5DBC4426493A0A5ABFF5070B5575FF5031A((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_5 = __this->get__processor_0();
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_6 = __this->get_address_of__properties_1();
		int32_t L_7 = L_6->get_BasePropertyIndex_1();
		NullCheck(L_5);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_8 = FBXProcessor_LoadArrayProperty_mDC46E3B2C891ECDE143C43D0F6FC6A9806693B2B(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_9 = __this->get__processor_0();
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_10 = V_0;
		NullCheck(L_9);
		FBXProcessor_SetActiveBinaryReader_m3D2195A2CECF883B72C77BF070A2F4AD6503909C(L_9, L_10, /*hidden argument*/NULL);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_11 = __this->get__processor_0();
		NullCheck(L_11);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_12 = L_11->get_ActiveBinaryReader_7();
		NullCheck(L_12);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_13 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_12);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_14 = V_0;
		int64_t L_15 = L_14.get_Position_5();
		int32_t L_16 = ___i0;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_17 = __this->get__processor_0();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_ActiveSubDataSize_6();
		NullCheck(L_13);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_13, ((int64_t)il2cpp_codegen_add((int64_t)L_15, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)L_18))))))), 0);
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_19 = __this->get_address_of__properties_1();
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_20 = __this->get__processor_0();
		NullCheck(L_20);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_21 = L_20->get_ActiveBinaryReader_7();
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_22 = V_0;
		int32_t L_23 = FBXProperties_BinaryConvertIntValue_m42773BBFBBB4C350CE9F891F91E4572EF2DDB4F5((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_19, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
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
// System.Void TriLibCore.Fbx.PropertyAccessorLong::.ctor(TriLibCore.Fbx.FBXProcessor,TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong__ctor_m75C56B4D0EB0BAF86DC0568CF62941C8E523790A (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * ___processor0, FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  ___properties1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = ___processor0;
		__this->set__processor_0(L_0);
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9  L_1 = ___properties1;
		__this->set__properties_1(L_1);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Int64> TriLibCore.Fbx.PropertyAccessorLong::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorLong_GetEnumerator_m3E36C1C4081C964F8767FC7A3101E47FF90C853A (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorLong_GetEnumerator_m3E36C1C4081C964F8767FC7A3101E47FF90C853A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorLong_GetEnumerator_m3E36C1C4081C964F8767FC7A3101E47FF90C853A_RuntimeMethod_var);
	}
}
// System.Collections.IEnumerator TriLibCore.Fbx.PropertyAccessorLong::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorLong_System_Collections_IEnumerable_GetEnumerator_m7FE5D1F10F4027C09569A41AEE32D37E08CEA9C0 (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = PropertyAccessorLong_GetEnumerator_m3E36C1C4081C964F8767FC7A3101E47FF90C853A(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorLong::Add(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong_Add_mAB958943B792B961586AC38560ACD9740BCDD411 (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, int64_t ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorLong_Add_mAB958943B792B961586AC38560ACD9740BCDD411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorLong_Add_mAB958943B792B961586AC38560ACD9740BCDD411_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorLong::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong_Clear_m3D3D6278DF2BAEC07D93AC34A6643F2FAE285DE4 (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorLong_Clear_m3D3D6278DF2BAEC07D93AC34A6643F2FAE285DE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorLong_Clear_m3D3D6278DF2BAEC07D93AC34A6643F2FAE285DE4_RuntimeMethod_var);
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorLong::Contains(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorLong_Contains_m7A877052856C68A15345169D9F0D019DF2B5422F (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, int64_t ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorLong_Contains_m7A877052856C68A15345169D9F0D019DF2B5422F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorLong_Contains_m7A877052856C68A15345169D9F0D019DF2B5422F_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorLong::CopyTo(System.Int64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong_CopyTo_m4D01CA2AAFCF5308733484927772911864C9726A (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		int64_t L_4 = PropertyAccessorLong_GetElement_mDBD3985E2695017A3F5181476EDB35EE19FBB2E6(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))), (int64_t)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = PropertyAccessorLong_get_Count_m9EC2E74AE777A25104B5F0D5D54B6444A6B2E3AA(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorLong::Remove(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorLong_Remove_m4E9819F106EB0DB8D1762D52F08FCB0202D74415 (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, int64_t ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorLong_Remove_m4E9819F106EB0DB8D1762D52F08FCB0202D74415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorLong_Remove_m4E9819F106EB0DB8D1762D52F08FCB0202D74415_RuntimeMethod_var);
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorLong::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorLong_get_Count_m9EC2E74AE777A25104B5F0D5D54B6444A6B2E3AA (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, const RuntimeMethod* method)
{
	{
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_0 = __this->get_address_of__properties_1();
		int32_t L_1 = FBXProperties_GetPropertyArrayLength_m2CF5268C993BD291D6FE40F90BF8A2D3C9B19D75((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorLong::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorLong_get_IsReadOnly_mC3E4ACD4B66D13B7706FDE5394FAB783A01C6CC8 (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsReadOnlyU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorLong::IndexOf(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorLong_IndexOf_mB062F72768772E98E3ED1D2F578CD6D2CB8D6C23 (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, int64_t ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorLong_IndexOf_mB062F72768772E98E3ED1D2F578CD6D2CB8D6C23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorLong_IndexOf_mB062F72768772E98E3ED1D2F578CD6D2CB8D6C23_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorLong::Insert(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong_Insert_m5A3EEEC7F8FE071D7730ACB22183FF49BB0A3005 (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, int32_t ___index0, int64_t ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorLong_Insert_m5A3EEEC7F8FE071D7730ACB22183FF49BB0A3005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorLong_Insert_m5A3EEEC7F8FE071D7730ACB22183FF49BB0A3005_RuntimeMethod_var);
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorLong::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong_RemoveAt_m06DAC0B2470B38C7AF5AABA95B6B5D0584D09544 (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorLong_RemoveAt_m06DAC0B2470B38C7AF5AABA95B6B5D0584D09544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorLong_RemoveAt_m06DAC0B2470B38C7AF5AABA95B6B5D0584D09544_RuntimeMethod_var);
	}
}
// System.Int64 TriLibCore.Fbx.PropertyAccessorLong::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PropertyAccessorLong_get_Item_m38127E40812B9115320691F2367FD124A1EE4744 (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int64_t L_1 = PropertyAccessorLong_GetElement_mDBD3985E2695017A3F5181476EDB35EE19FBB2E6(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorLong::set_Item(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong_set_Item_m7AC9B6CAAF3B58A475532D82423535A91AA84FA6 (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, int32_t ___index0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyAccessorLong_set_Item_m7AC9B6CAAF3B58A475532D82423535A91AA84FA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m8BEA657E260FC05F0C6D2C43A6E9BC08040F59C4(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, PropertyAccessorLong_set_Item_m7AC9B6CAAF3B58A475532D82423535A91AA84FA6_RuntimeMethod_var);
	}
}
// System.Int64 TriLibCore.Fbx.PropertyAccessorLong::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PropertyAccessorLong_GetElement_mDBD3985E2695017A3F5181476EDB35EE19FBB2E6 (PropertyAccessorLong_tED74AABDB22F90D61C93021532A05D5B6C7E8F3F * __this, int32_t ___i0, const RuntimeMethod* method)
{
	FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_0 = __this->get_address_of__properties_1();
		bool L_1 = FBXProperties_get_IsASCII_m041A05323871212FECEF75AED678F310B8F7652C((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_2 = __this->get_address_of__properties_1();
		int32_t L_3 = ___i0;
		int64_t L_4 = FBXProperties_ASCIIGetLongValue_m91087567F7E7DD9336F5010335E381B6AA15015B((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_5 = __this->get__processor_0();
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_6 = __this->get_address_of__properties_1();
		int32_t L_7 = L_6->get_BasePropertyIndex_1();
		NullCheck(L_5);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_8 = FBXProcessor_LoadArrayProperty_mDC46E3B2C891ECDE143C43D0F6FC6A9806693B2B(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_9 = __this->get__processor_0();
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_10 = V_0;
		NullCheck(L_9);
		FBXProcessor_SetActiveBinaryReader_m3D2195A2CECF883B72C77BF070A2F4AD6503909C(L_9, L_10, /*hidden argument*/NULL);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_11 = __this->get__processor_0();
		NullCheck(L_11);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_12 = L_11->get_ActiveBinaryReader_7();
		NullCheck(L_12);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_13 = VirtFuncInvoker0< Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_12);
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_14 = V_0;
		int64_t L_15 = L_14.get_Position_5();
		int32_t L_16 = ___i0;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_17 = __this->get__processor_0();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_ActiveSubDataSize_6();
		NullCheck(L_13);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_13, ((int64_t)il2cpp_codegen_add((int64_t)L_15, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)L_18))))))), 0);
		FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * L_19 = __this->get_address_of__properties_1();
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_20 = __this->get__processor_0();
		NullCheck(L_20);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_21 = L_20->get_ActiveBinaryReader_7();
		FBXProperty_t4ACF2D951DDE00A81B6EA27988D99BB5761927BE  L_22 = V_0;
		int64_t L_23 = FBXProperties_BinaryConvertLongValue_mA0F61AD450F879C8342117D6E7208F95E20D305E((FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 *)L_19, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
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
// System.String[] TriLibCore.Fbx.Reader.FbxReader::GetExtensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* FbxReader_GetExtensions_m592F9BFDF921C534B99C3262B03A70CE94F5E20C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxReader_GetExtensions_m592F9BFDF921C534B99C3262B03A70CE94F5E20C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral022C4EA79AD230D972547BE2DF3E91575F54684E);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral022C4EA79AD230D972547BE2DF3E91575F54684E);
		return L_1;
	}
}
// System.Int32 TriLibCore.Fbx.Reader.FbxReader::get_LoadingStepsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FbxReader_get_LoadingStepsCount_mA2115C05E4AF3CF1D23A8AC7B7ADD48E747F3F55 (FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F * __this, const RuntimeMethod* method)
{
	{
		return 2;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Fbx.Reader.FbxReader::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxReader_ReadStream_m8332223DF0718C3769F3E90491D84128D2C93A0F (FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * ___assetLoaderContext1, String_t* ___filename2, Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 * ___onProgress3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxReader_ReadStream_m8332223DF0718C3769F3E90491D84128D2C93A0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___stream0;
		AssetLoaderContext_t964C7C2ADCCC4D8AFCF6B3B152EA5132052962F5 * L_1 = ___assetLoaderContext1;
		String_t* L_2 = ___filename2;
		Action_2_t2F88D7832DC49E062EC62053616A2E69915EF0B9 * L_3 = ___onProgress3;
		ReaderBase_ReadStream_m11740C4C3E1CEAE8DD0390C747EB59A3A67769FD(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = ___stream0;
		IL2CPP_RUNTIME_CLASS_INIT(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_il2cpp_TypeInfo_var);
		bool L_5 = FbxReader_IsBinary_m1BE11530B06026C25C3EA590134827B88E7E2482(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_6 = ___stream0;
		RuntimeObject* L_7 = FbxReader_ParseBinary_m7E259879BB6AE6B856492843585ACE74514FBB06(__this, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject* L_8 = V_0;
		ReaderBase_PostProcessModel_mB5399AA97BA14DE8D7477821FF0DF920E0473B03(__this, L_8, /*hidden argument*/NULL);
		RuntimeObject* L_9 = V_0;
		return L_9;
	}

IL_0025:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_10 = ___stream0;
		IL2CPP_RUNTIME_CLASS_INIT(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_il2cpp_TypeInfo_var);
		bool L_11 = FbxReader_IsASCII_mB15AF22B5771FF92B248C2861CC1F634692527E3(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_12 = ___stream0;
		RuntimeObject* L_13 = FbxReader_ParseASCII_m8308FD93B819FA4F72E7AA0D2DB0B727E83C15EE(__this, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		RuntimeObject* L_14 = V_1;
		ReaderBase_PostProcessModel_mB5399AA97BA14DE8D7477821FF0DF920E0473B03(__this, L_14, /*hidden argument*/NULL);
		RuntimeObject* L_15 = V_1;
		return L_15;
	}

IL_003e:
	{
		return (RuntimeObject*)NULL;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Fbx.Reader.FbxReader::ParseBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxReader_ParseBinary_m7E259879BB6AE6B856492843585ACE74514FBB06 (FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxReader_ParseBinary_m7E259879BB6AE6B856492843585ACE74514FBB06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * V_0 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_1 = NULL;
	FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * V_2 = NULL;
	FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E *)il2cpp_codegen_object_new(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E_il2cpp_TypeInfo_var);
		FBXProcessor__ctor_m52691003391DD6274967295C0C63A9C91C7C29B8(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___stream0;
		if (((MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)IsInstClass((RuntimeObject*)L_1, MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___stream0;
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
		if ((int64_t)(L_3) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), FbxReader_ParseBinary_m7E259879BB6AE6B856492843585ACE74514FBB06_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_3)));
		__this->set__fileBuffer_12(L_4);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__fileBuffer_12();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_7 = ___stream0;
		NullCheck(L_7);
		int64_t L_8 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_7);
		NullCheck(L_5);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)L_8))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = __this->get__fileBuffer_12();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_10 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF(L_10, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0046;
	}

IL_0044:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_11 = ___stream0;
		V_1 = L_11;
	}

IL_0046:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_12 = V_1;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_13 = V_0;
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_14 = (FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 *)il2cpp_codegen_object_new(FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9_il2cpp_TypeInfo_var);
		FBXBinaryReader__ctor_m87EF1F4E16180B7A357028BDBC98E647E495D84B(L_14, L_12, __this, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_15 = V_2;
		NullCheck(L_15);
		FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD  L_16 = FBXBinaryReader_ReadDocument_mDC6541A9B0957FA9F264BDA91CF1973BFACAF6AF(L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_17 = V_0;
		FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD  L_18 = V_3;
		NullCheck(L_17);
		RuntimeObject* L_19 = FBXProcessor_Process_m2F8DA2D8DD6B1AD7CF528ED33126723E58A1E04D(L_17, L_18, (bool)1, /*hidden argument*/NULL);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_20 = V_2;
		NullCheck(L_20);
		FBXBinaryReader_Unload_m32F78449DB31729125503ECDD1908289B1046565(L_20, /*hidden argument*/NULL);
		FBXBinaryReader_tC2C96A51AD98C19F25F5F33A56FBF370203BBCE9 * L_21 = V_2;
		NullCheck(L_21);
		BinaryReader_Dispose_m2047D05935E76EBB1E910D491671B339E320203C(L_21, /*hidden argument*/NULL);
		return L_19;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Fbx.Reader.FbxReader::ParseASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxReader_ParseASCII_m8308FD93B819FA4F72E7AA0D2DB0B727E83C15EE (FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxReader_ParseASCII_m8308FD93B819FA4F72E7AA0D2DB0B727E83C15EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * V_0 = NULL;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_1 = NULL;
	FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE * V_2 = NULL;
	FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * V_3 = NULL;
	DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * V_4 = NULL;
	FBXNodeResult_tBDF2ACF0B3B8CB0206074A983D369015EF3C60A9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_0 = (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E *)il2cpp_codegen_object_new(FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E_il2cpp_TypeInfo_var);
		FBXProcessor__ctor_m52691003391DD6274967295C0C63A9C91C7C29B8(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___stream0;
		if (((MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)IsInstClass((RuntimeObject*)L_1, MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_2 = ___stream0;
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
		if ((int64_t)(L_3) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), FbxReader_ParseASCII_m8308FD93B819FA4F72E7AA0D2DB0B727E83C15EE_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_3)));
		__this->set__fileBuffer_12(L_4);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_5 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = __this->get__fileBuffer_12();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_7 = ___stream0;
		NullCheck(L_7);
		int64_t L_8 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_7);
		NullCheck(L_5);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)L_8))));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = __this->get__fileBuffer_12();
		MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C * L_10 = (MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C *)il2cpp_codegen_object_new(MemoryStream_t495F44B85E6B4DDE2BB7E17DE963256A74E2298C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m731754F1435D29F87C407D84ED47AF35FFF9B0EF(L_10, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0046;
	}

IL_0044:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_11 = ___stream0;
		V_1 = L_11;
	}

IL_0046:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_12 = V_1;
		AntlrInputStream_tF5987E6281D3A24587B1B457A28C0D5E7BE7DB1A * L_13 = (AntlrInputStream_tF5987E6281D3A24587B1B457A28C0D5E7BE7DB1A *)il2cpp_codegen_object_new(AntlrInputStream_tF5987E6281D3A24587B1B457A28C0D5E7BE7DB1A_il2cpp_TypeInfo_var);
		AntlrInputStream__ctor_mC5C18AD0AE6D7C9756E9BB8F07207C47B2C11677(L_13, L_12, /*hidden argument*/NULL);
		FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920 * L_14 = (FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920 *)il2cpp_codegen_object_new(FbxLexer_t73CE78D1B2148DED3FDE659D0C48C5CD2CA06920_il2cpp_TypeInfo_var);
		FbxLexer__ctor_m380C3D88D4EBB654C1F528003A6B903C331DCC68(L_14, L_13, /*hidden argument*/NULL);
		CommonTokenStream_t0A80A52294B69CD9EB76170958E601DFEFDE73C0 * L_15 = (CommonTokenStream_t0A80A52294B69CD9EB76170958E601DFEFDE73C0 *)il2cpp_codegen_object_new(CommonTokenStream_t0A80A52294B69CD9EB76170958E601DFEFDE73C0_il2cpp_TypeInfo_var);
		CommonTokenStream__ctor_mB7F9D0121A4211DDDCE3ADBE96BB3D11262768C8(L_15, L_14, /*hidden argument*/NULL);
		FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE * L_16 = (FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE *)il2cpp_codegen_object_new(FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE_il2cpp_TypeInfo_var);
		FBXNodesCounter__ctor_m1189356531910C28038C3EF1B46179980DF4BE40(L_16, /*hidden argument*/NULL);
		V_2 = L_16;
		FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * L_17 = (FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 *)il2cpp_codegen_object_new(FbxParser_t65668BC26E1BE49573365391ACC594D199830A15_il2cpp_TypeInfo_var);
		FbxParser__ctor_m1BFA20CF19CE6188B7D48F14D991CEA8BFE0B249(L_17, L_15, /*hidden argument*/NULL);
		V_3 = L_17;
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_18 = V_0;
		FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE * L_19 = V_2;
		FBXDocumentVisitor_tE80B6B9D96BA7C9ADA919FC4579CF86A45133DF0 * L_20 = (FBXDocumentVisitor_tE80B6B9D96BA7C9ADA919FC4579CF86A45133DF0 *)il2cpp_codegen_object_new(FBXDocumentVisitor_tE80B6B9D96BA7C9ADA919FC4579CF86A45133DF0_il2cpp_TypeInfo_var);
		FBXDocumentVisitor__ctor_mA5A89318864CDC722E4DD360AA50EA4277FE1AB7(L_20, __this, L_18, L_19, /*hidden argument*/NULL);
		FbxParser_t65668BC26E1BE49573365391ACC594D199830A15 * L_21 = V_3;
		NullCheck(L_21);
		DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * L_22 = FbxParser_document_mC1CEC9039F741AB64B1F416DC82F6F16D2F60207(L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		FBXDocumentVisitor_tE80B6B9D96BA7C9ADA919FC4579CF86A45133DF0 * L_23 = L_20;
		DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * L_24 = V_4;
		NullCheck(L_23);
		VirtFuncInvoker1< FBXNodeResult_tBDF2ACF0B3B8CB0206074A983D369015EF3C60A9 , DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * >::Invoke(20 /* Result TriLibCore.Fbx.FbxBaseVisitor`1<TriLibCore.Fbx.ASCII.FBXNodeResult>::VisitDocument(TriLibCore.Fbx.FbxParser/DocumentContext) */, L_23, L_24);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_25 = V_0;
		FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE * L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_NodesCount_0();
		NullCheck(L_25);
		FBXProcessor_SetupNodesBuffer_m5596D816AAA103E76D07CE429C44F78446663385(L_25, L_27, /*hidden argument*/NULL);
		FBXDocumentVisitor_tE80B6B9D96BA7C9ADA919FC4579CF86A45133DF0 * L_28 = L_23;
		NullCheck(L_28);
		L_28->set_NodesCounter_2((FBXNodesCounter_tDF69857953AE0F138B571DDFA5454B3DA983ADAE *)NULL);
		DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * L_29 = V_4;
		NullCheck(L_28);
		FBXNodeResult_tBDF2ACF0B3B8CB0206074A983D369015EF3C60A9  L_30 = VirtFuncInvoker1< FBXNodeResult_tBDF2ACF0B3B8CB0206074A983D369015EF3C60A9 , DocumentContext_t38FD6DF10E4CF0E4B7C90D9062EF66AED8E82634 * >::Invoke(20 /* Result TriLibCore.Fbx.FbxBaseVisitor`1<TriLibCore.Fbx.ASCII.FBXNodeResult>::VisitDocument(TriLibCore.Fbx.FbxParser/DocumentContext) */, L_28, L_29);
		V_5 = L_30;
		FBXNodeResult_tBDF2ACF0B3B8CB0206074A983D369015EF3C60A9  L_31 = V_5;
		int32_t L_32 = L_31.get_NodeIndex_0();
		if ((((int32_t)L_32) >= ((int32_t)0)))
		{
			goto IL_00ac;
		}
	}
	{
		Exception_t * L_33 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_33, _stringLiteralCA45118107D1D32C51F635A83A27EB742FAECB9D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, FbxReader_ParseASCII_m8308FD93B819FA4F72E7AA0D2DB0B727E83C15EE_RuntimeMethod_var);
	}

IL_00ac:
	{
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_34 = V_0;
		FBXNodeResult_tBDF2ACF0B3B8CB0206074A983D369015EF3C60A9  L_35 = V_5;
		int32_t L_36 = L_35.get_NodeIndex_0();
		NullCheck(L_34);
		FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD  L_37 = FBXProcessor_GetNode_m35E9D504BADF3E9D4008A396DD77806A8614AC04(L_34, L_36, /*hidden argument*/NULL);
		V_6 = L_37;
		ReaderBase_UpdateLoadingPercentage_mE85C029F452B2FF867199DBDE590A95CF6EB31CB(__this, (1.0f), 0, 0, /*hidden argument*/NULL);
		FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * L_38 = V_0;
		FBXNode_t8ACEF6B5B9C07D8FB234A37CA2AE18943722F0DD  L_39 = V_6;
		NullCheck(L_38);
		RuntimeObject* L_40 = FBXProcessor_Process_m2F8DA2D8DD6B1AD7CF528ED33126723E58A1E04D(L_38, L_39, (bool)0, /*hidden argument*/NULL);
		return L_40;
	}
}
// System.Boolean TriLibCore.Fbx.Reader.FbxReader::IsBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FbxReader_IsBinary_m1BE11530B06026C25C3EA590134827B88E7E2482 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxReader_IsBinary_m1BE11530B06026C25C3EA590134827B88E7E2482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		V_0 = (bool)0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		V_1 = L_0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_1;
		NullCheck(L_1);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, ((int32_t)18));
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_3 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_1;
		NullCheck(L_3);
		String_t* L_5 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_3, L_4);
		bool L_6 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, _stringLiteral24CC662893F90CD33FF16CFC700D3AAB02A1D585, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002e:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_7 = ___stream0;
		NullCheck(L_7);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_7, (((int64_t)((int64_t)0))), 0);
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean TriLibCore.Fbx.Reader.FbxReader::IsASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FbxReader_IsASCII_mB15AF22B5771FF92B248C2861CC1F634692527E3 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxReader_IsASCII_mB15AF22B5771FF92B248C2861CC1F634692527E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___stream0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral1ADC90F5CECFC020F89A0D1629E1E7C9E710AD2C);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1ADC90F5CECFC020F89A0D1629E1E7C9E710AD2C);
		bool L_3 = StreamExtensions_MatchRegex_m3DC5161E677F84A9EF921771AAFBD6ABA1B014CD(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void TriLibCore.Fbx.Reader.FbxReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxReader__ctor_m1F458EB47BA61BD87282D1E0448837723C8BA8A2 (FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F * __this, const RuntimeMethod* method)
{
	{
		ReaderBase__ctor_mE57241B3A26D1B2ECFF1C6778B1A52E97BC507EC(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriLibCore.Fbx.Reader.FbxReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxReader__cctor_mF6C0B89047823DE53786FD6EED164185F1F6426B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FbxReader__cctor_mF6C0B89047823DE53786FD6EED164185F1F6426B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_StaticFields*)il2cpp_codegen_static_fields_for(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_il2cpp_TypeInfo_var))->set_FBXCompatibilityMode_9((bool)1);
		((FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_StaticFields*)il2cpp_codegen_static_fields_for(FbxReader_t768521CE9F80DF6DA5B2808C764E35E1B80DA90F_il2cpp_TypeInfo_var))->set_EnableSpecularMaterials_10((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FBXProperties_set_PropertiesCount_mC789216786D60442ED5B53398D9EF5BDE12F23BB_inline (FBXProperties_t774161D127DA1EEF72F5F2B1B998F874EB8520F9 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPropertiesCountU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t FBXProcessor_get_PropertiesCount_m5183A56A29C12DFBFC8F8FF90B8A8644647771DD_inline (FBXProcessor_t0C71456B91DBAAD62BD0063569E59AD468934B4E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPropertiesCountU3Ek__BackingField_9();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void FBXObject_set_ObjectType_m54CE048630BF1A75528C3348107F51DFA33017FC_inline (FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CObjectTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * FBXObject_get_Document_mDFD4825C73617A48D66EC9E3805E5AF2803DB5D7_inline (FBXObject_tACDD2C4617DD2C4F6E2E55565A14048449406152 * __this, const RuntimeMethod* method)
{
	{
		FBXDocument_tFB56EF97C65827FE69BC075F09DC6F2D16D30CB2 * L_0 = __this->get_U3CDocumentU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_get_Out_m39013EA4B394882407DA00C8670B7D7873CFFABFTriLibCore_Fbx1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_0 = ((Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields*)il2cpp_codegen_static_fields_for(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var))->get_stdout_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Console_get_Error_mE1078EFC5C7C133964838D2A72B8FB9567E4C98ATriLibCore_Fbx1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_0 = ((Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_StaticFields*)il2cpp_codegen_static_fields_for(Console_t5C8E87BA271B0DECA837A3BF9093AC3560DB3D5D_il2cpp_TypeInfo_var))->get_stderr_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* Parser_get_TokenStream_m6CD7451874F51EF07948D2D08589A4DCD77432A2_inline (Parser_t70FB64B493E43D7FED065A167D8C8D4FCF6FCC87 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get__input_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCB07D10172F4DF977726562C57192AD86ABC27A5_gshared_inline (Nullable_1_tD5055683A598FDA6905932387AAE1EAD94B917D9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Recognizer_2_get_State_m0002885046E1AF57A9A6335D2C8A4B802E35044E_gshared_inline (Recognizer_2_t0DEA9546FEB2ABD340DDC3F9C36E49CB1AB5333E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__stateNumber_2();
		return (int32_t)L_0;
	}
}
