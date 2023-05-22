#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<Ink.Runtime.Choice>
struct Action_1_t16D9E813F23DBC6B2E5DBFB7ABC91BCA2C679D18;
// System.Action`2<System.String,System.Object[]>
struct Action_2_t48A40D13AC950EA4E32E5F1B0B1787B102798910;
// System.Action`4<System.String,System.Object[],System.String,System.Object>
struct Action_4_t6F52DFEEE9C8656E1874926136A959F191DA8BDE;
// System.Collections.Generic.Dictionary`2<Ink.Runtime.InkListItem,System.Int32>
struct Dictionary_2_t42041C50878B397AF5D58241F38EFF5E871070EB;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.Expression>
struct Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ExternalDeclaration>
struct Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.FlowBase>
struct Dictionary_2_t7036DE9B0F2F80FBA9FBA3A30E3971F4F9DD9C37;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.INamedContent>
struct Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint>
struct Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListDefinition>
struct Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListElementDefinition>
struct Dictionary_2_tE97196D98524B83CDC1CBCD47EE15F32C15E13E5;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.NativeFunctionCall>
struct Dictionary_2_t4CC902C3BEAE01B4BF57BB5789C6B6900E6B24D5;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.VariableAssignment>
struct Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.Story/ExternalFunctionDef>
struct Dictionary_2_tF062828A54ADD443C677C71A299000A1A7FF0ECA;
// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.Story/VariableObserver>
struct Dictionary_2_t0FC1AA36A3E09D400A2240C13ACFB7B4BAA39FF4;
// System.Collections.Generic.Dictionary`2<Ink.Runtime.ValueType,System.Object>
struct Dictionary_2_tF1FC776C6B428E6A5BC5C41A9C25A3C8A253D9BD;
// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.Choice>
struct FindQueryFunc_1_t336B67E9DF3943E1288CC482ACB0BBF4A96D7199;
// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.ConstantDeclaration>
struct FindQueryFunc_1_t88DB34734FC78E98F67D0DD2A9EA542043B35D2A;
// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.Divert>
struct FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911;
// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.IWeavePoint>
struct FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40;
// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.ListDefinition>
struct FindQueryFunc_1_t10539BCA97AC966ED5258992D5E813042F7498C7;
// Ink.Parsed.Object/FindQueryFunc`1<System.Object>
struct FindQueryFunc_1_tF0B7DF2C2BB336BC978FCC0A8D82910DD79BAE75;
// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.TunnelOnwards>
struct FindQueryFunc_1_tD49158339C9E80306F093B9B3FFDC0266098B984;
// System.Func`2<Ink.Parsed.Identifier,System.String>
struct Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`3<Ink.Runtime.DebugMetadata,Ink.Parsed.Identifier,Ink.Runtime.DebugMetadata>
struct Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Collections.Generic.HashSet`1<Ink.Runtime.Container>
struct HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEnumerable`1<Ink.Parsed.Identifier>
struct IEnumerable_1_tB9E8F7D9384F3C953FE4AE7BB2E49929F31572EC;
// System.Collections.Generic.IEnumerable`1<Ink.Parsed.Object>
struct IEnumerable_1_tEF23BA501451A845C4C1EB07ED0A90E7C765A30B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Ink.Parsed.Weave/GatherPointToResolve>
struct IEnumerable_1_tAF9E850594E4A7970DED03E4D7A2DB7CFA704D15;
// System.Collections.Generic.IEnumerator`1<Ink.Parsed.Object>
struct IEnumerator_1_t0D3F6B72AD03CC8C65B4782F8C2DA9E2EFAEBCD7;
// System.Collections.Generic.IEqualityComparer`1<Ink.Runtime.Container>
struct IEqualityComparer_1_tEE9723E2DC4164E8F92D30B23E9CC09C57B6A44D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Ink.Parsed.Expression>
struct KeyCollection_t503A12E35743D870D563C7F531995AE6C48A0070;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Ink.Parsed.ExternalDeclaration>
struct KeyCollection_t746DA7F7B5F87B87586C9779814165728BA79AA0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Ink.Runtime.INamedContent>
struct KeyCollection_tD8C90CEAD584D2D5F4E8E7E7238CCCECAE291B8E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Ink.Parsed.IWeavePoint>
struct KeyCollection_tE294307EF6D15862F2CEA15169D3AC24CADE930A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Ink.Parsed.ListDefinition>
struct KeyCollection_t34F0615D8D09BE6C128A5B4008385A2A19696C59;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Ink.Parsed.VariableAssignment>
struct KeyCollection_t102C1D8C7F79446903FFF13A4CB0D8B97FC9BBE9;
// System.Collections.Generic.List`1<Ink.Parsed.Choice>
struct List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C;
// System.Collections.Generic.List`1<Ink.Parsed.ConditionalSingleBranch>
struct List_1_t488491625CFD9ED32600FE60136E562DEE6CAC34;
// System.Collections.Generic.List`1<Ink.Parsed.ConstantDeclaration>
struct List_1_t67AAD19C0FFF8E5732D2ABD9BCF0AB17A6313BAF;
// System.Collections.Generic.List`1<Ink.Runtime.Container>
struct List_1_t349BFECBCFD8087208E39C04E6DF080F8E0507A9;
// System.Collections.Generic.List`1<Ink.Parsed.ContentList>
struct List_1_t7CAB48FCDDBB3C931F99DE4CEFE682DE8A6981DF;
// System.Collections.Generic.List`1<Ink.Parsed.Expression>
struct List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F;
// System.Collections.Generic.List`1<Ink.Parsed.FlowBase>
struct List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB;
// System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>
struct List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A;
// System.Collections.Generic.List`1<Ink.Parsed.Identifier>
struct List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08;
// System.Collections.Generic.List`1<Ink.Parsed.ListDefinition>
struct List_1_t2A94DBFCBC352D91C986BE84C30FEBFF0678BAD2;
// System.Collections.Generic.List`1<Ink.Runtime.ListDefinition>
struct List_1_tEAA34814BB98964FD8B62D24AF030A7829378907;
// System.Collections.Generic.List`1<Ink.Parsed.ListElementDefinition>
struct List_1_t5616402C899551039E0CA5216EA28E3B5E8B4010;
// System.Collections.Generic.List`1<Ink.Parsed.Object>
struct List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55;
// System.Collections.Generic.List`1<Ink.Runtime.Object>
struct List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Ink.Parsed.FlowBase/Argument>
struct List_1_t5A7C284E404753F1786689E097CE59A152638444;
// System.Collections.Generic.List`1<Ink.Runtime.Path/Component>
struct List_1_t8358C58AEB53A1DE0181CC62DFE97831F8DA9C7C;
// System.Collections.Generic.List`1<Ink.Parsed.Sequence/SequenceDivertToResolve>
struct List_1_t790425294EA2A6F283208CCC3E6906D3E7986012;
// System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve>
struct List_1_tA7383995CB6636153484C17B150C3B16C85C49B7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Ink.Parsed.Expression>
struct ValueCollection_tCE698A7FAAAF070B8FFDB1A4693A10F0EB241F23;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Ink.Parsed.ExternalDeclaration>
struct ValueCollection_t979A688F4E5BFA7DEC23847C535A2ED067A90773;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Ink.Runtime.INamedContent>
struct ValueCollection_t3DE12603F8024796594A48FD9E713B6E7977421B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Ink.Parsed.IWeavePoint>
struct ValueCollection_tF4AE1DFA82FAD6E67385BC2779CC11C2C1CDD8F4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Ink.Parsed.ListDefinition>
struct ValueCollection_tB77EF8792DDD817803E91EF1AA64331CAF44C125;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Ink.Parsed.VariableAssignment>
struct ValueCollection_tED59132BEDB9790038E0AB36E829D5DFA80CDA90;
// Ink.Parsed.Wrap`1<Ink.Runtime.Glue>
struct Wrap_1_tC06BF2A45CCF887EEF2D86199C08609A6927998F;
// Ink.Parsed.Wrap`1<System.Object>
struct Wrap_1_t07205EDFFF18F5F5B08620D9B41DCA4780859265;
// Ink.Parsed.Wrap`1<Ink.Runtime.Tag>
struct Wrap_1_t30A29E9AC5AC4AEC0670984E15D014B48C63BFF9;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Ink.Parsed.Expression>[]
struct EntryU5BU5D_tB9FE1E425353F78F91E5392B9BE2B33881681716;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Ink.Parsed.ExternalDeclaration>[]
struct EntryU5BU5D_t10B583DBE3923FF0E9189A71ACDD107BA7D9A918;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Ink.Runtime.INamedContent>[]
struct EntryU5BU5D_t335B4173407FA82F09B3C528B37AB4E5E162069E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Ink.Parsed.IWeavePoint>[]
struct EntryU5BU5D_tE8DBBBAEDA6BF12A00601ABAD28AF6ADA42E4943;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Ink.Parsed.ListDefinition>[]
struct EntryU5BU5D_tD5851B6AE8114C2FAD13AC9EA914B403C229400E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Ink.Parsed.VariableAssignment>[]
struct EntryU5BU5D_t6EA4D10B0FB6DAF528D762CF7DA0130C9F1B54A9;
// System.Collections.Generic.HashSet`1/Slot<Ink.Runtime.Container>[]
struct SlotU5BU5D_tF5C961DB238E20395E6AB43D6B348C93F81666B5;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Ink.Parsed.Choice[]
struct ChoiceU5BU5D_t6400BB5EF477B560BCAB3701E2F8F3A6B1922DC2;
// Ink.Parsed.ConstantDeclaration[]
struct ConstantDeclarationU5BU5D_t320EEC880705F76AA82ECBE56AACEAFEDB907445;
// Ink.Parsed.ContentList[]
struct ContentListU5BU5D_tBDBC62837DC07510821B20462E18669AA6633E0E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Ink.Parsed.Expression[]
struct ExpressionU5BU5D_t4C9E9240950A707982208D3B55C3D8B74D69F633;
// Ink.Parsed.FlowBase[]
struct FlowBaseU5BU5D_t16780B0F060658CB5F6CD22371E715783A53DF20;
// Ink.Parsed.IWeavePoint[]
struct IWeavePointU5BU5D_t4F2E7A60D510D4699D15DF11C869F5A32C8C73A3;
// Ink.Parsed.Identifier[]
struct IdentifierU5BU5D_tB903070C54BCA9897B3C2FCF3D4A87BADFCFA09A;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Ink.Parsed.ListDefinition[]
struct ListDefinitionU5BU5D_tE71B5BA20F6C3C02DF30D8547D2152BBE4862087;
// Ink.Runtime.ListDefinition[]
struct ListDefinitionU5BU5D_tA8F61BEC35A82487A9645C6A384108C0FA8153AD;
// Ink.Parsed.ListElementDefinition[]
struct ListElementDefinitionU5BU5D_t3AEDE198B2550E786EF75C56E3E4A22A5F153418;
// Ink.Parsed.Object[]
struct ObjectU5BU5D_t3586EF5ABA6916A1264318D0FA7041D17C7C0A80;
// Ink.Runtime.Object[]
struct ObjectU5BU5D_tEDD38A5588B3EF2CA1042B823EABFD3C073B03A5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Ink.Parsed.FlowBase/Argument[]
struct ArgumentU5BU5D_tA6DB24DD78D19EFAE08E0F6B6C2DEF4D0EAA64A7;
// Ink.Parsed.Sequence/SequenceDivertToResolve[]
struct SequenceDivertToResolveU5BU5D_t5F10FA515DBEEC8DB07D5EFDEDC0F5F67277F397;
// Ink.Parsed.Weave/GatherPointToResolve[]
struct GatherPointToResolveU5BU5D_tCFBD4CA83BCF7F3F701B7B631061CC962657A3C4;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Ink.Parsed.Choice
struct Choice_t36174EC808231C52E43CE7768134739559499893;
// Ink.Runtime.ChoicePoint
struct ChoicePoint_t4B38D1BE22B41C7C0AF41CA18AD6A6D12239111D;
// Ink.Parsed.ConstantDeclaration
struct ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA;
// Ink.Runtime.Container
struct Container_t74302BC1028974B0A346A43F334AECB681D79579;
// Ink.Parsed.ContentList
struct ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23;
// Ink.Runtime.ControlCommand
struct ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6;
// Ink.Runtime.DebugMetadata
struct DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Ink.Parsed.Divert
struct Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186;
// Ink.Runtime.Divert
struct Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA;
// Ink.Runtime.DivertTargetValue
struct DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B;
// Ink.ErrorHandler
struct ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728;
// System.Exception
struct Exception_t;
// Ink.Parsed.Expression
struct Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D;
// Ink.Parsed.ExternalDeclaration
struct ExternalDeclaration_t6A600B5552FFC2082997474D7E5256DFA8782367;
// Ink.Parsed.FlowBase
struct FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822;
// Ink.Parsed.Gather
struct Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B;
// Ink.Parsed.Glue
struct Glue_t1B0423D93951017DCD923A001EEEE15092EF1D2A;
// Ink.Runtime.Glue
struct Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Ink.Runtime.INamedContent
struct INamedContent_tEBD662BBE63CAFEDF6979C8CD78911D766FD86CE;
// Ink.Parsed.IWeavePoint
struct IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE;
// Ink.Parsed.Identifier
struct Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD;
// Ink.Parsed.IncludedFile
struct IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0;
// Ink.Runtime.IntValue
struct IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358;
// Ink.Parsed.ListDefinition
struct ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65;
// Ink.Runtime.ListDefinition
struct ListDefinition_t9DBDAC7E019BF524675B9B821F706894EEC42CE6;
// Ink.Runtime.ListDefinitionsOrigin
struct ListDefinitionsOrigin_tBDD8343C1C7129DD84565AB1E6C435FECE0BEF89;
// Ink.Parsed.ListElementDefinition
struct ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Ink.Runtime.NativeFunctionCall
struct NativeFunctionCall_tE48D7B25FFE2719D67C09A104593781EA0FE60C5;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Ink.Parsed.Object
struct Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7;
// Ink.Runtime.Object
struct Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB;
// Ink.Parsed.Path
struct Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC;
// Ink.Runtime.Path
struct Path_tCC1F1626DB60711735401EA8FA76A191D9014600;
// Ink.Runtime.Profiler
struct Profiler_tF4E485997B5D938116F7C370F114B9EBA327BBFA;
// Ink.Parsed.Return
struct Return_tF820135B4E13C7AA4FB7A0BAB1EB362B26B6FC14;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Ink.Parsed.Sequence
struct Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Ink.Parsed.Stitch
struct Stitch_t681670B130517D97D8E480F375F9F27EB8D19E84;
// Ink.Parsed.Story
struct Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7;
// Ink.Runtime.Story
struct Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A;
// Ink.Runtime.StoryState
struct StoryState_t93975BE855AACA9E18087DADAAF0FFE6312F26EF;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Ink.Parsed.StringExpression
struct StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678;
// Ink.Runtime.StringValue
struct StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2;
// Ink.Parsed.Tag
struct Tag_tAB0A2B0822AC49777B0EF88C69DFC2D2A203DFF9;
// Ink.Runtime.Tag
struct Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29;
// Ink.Parsed.Text
struct Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED;
// Ink.Parsed.TunnelOnwards
struct TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450;
// System.Type
struct Type_t;
// Ink.Parsed.VariableAssignment
struct VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82;
// Ink.Runtime.VariableAssignment
struct VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9;
// Ink.Parsed.VariableReference
struct VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049;
// Ink.Runtime.VariableReference
struct VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819;
// Ink.Runtime.Void
struct Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Ink.Parsed.Weave
struct Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37;
// Ink.Parsed.FlowBase/Argument
struct Argument_t57F624390C64DEA5183C13B31DE384F707B17021;
// Ink.Parsed.Path/<>c
struct U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E;
// Ink.Parsed.Sequence/SequenceDivertToResolve
struct SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88;
// Ink.Parsed.VariableReference/<>c
struct U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0;
// Ink.Parsed.Weave/<>c
struct U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807;
// Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29
struct U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C;
// Ink.Parsed.Weave/BadTerminationHandler
struct BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC;
// Ink.Parsed.Weave/GatherPointToResolve
struct GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14;

IL2CPP_EXTERN_C RuntimeClass* AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivertTarget_t72F939797266E1087B339BC7F70A4A43A8E91F2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tEF23BA501451A845C4C1EB07ED0A90E7C765A30B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0D3F6B72AD03CC8C65B4782F8C2DA9E2EFAEBCD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t790425294EA2A6F283208CCC3E6906D3E7986012_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA7383995CB6636153484C17B150C3B16C85C49B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEAA34814BB98964FD8B62D24AF030A7829378907_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0A3D8009FFDBAE9CB67DE816B9D07EB6AAAADCF9;
IL2CPP_EXTERN_C String_t* _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF;
IL2CPP_EXTERN_C String_t* _stringLiteral11B627459AAD233CBA753F7CEE364321151E20AC;
IL2CPP_EXTERN_C String_t* _stringLiteral150B27AD9FCE6BA42816F8D2051EA4AF694907C6;
IL2CPP_EXTERN_C String_t* _stringLiteral18AE8E87420A5CC9A7FA0789118773C846F2CB8B;
IL2CPP_EXTERN_C String_t* _stringLiteral1E496DD143AA8143CEB7E732FC7B782BF3979F24;
IL2CPP_EXTERN_C String_t* _stringLiteral21F29DAD0A8FD7E88D981478E32D509D5426BBC7;
IL2CPP_EXTERN_C String_t* _stringLiteral232E29D3CB1BEBAB46125A6580F94B6237639795;
IL2CPP_EXTERN_C String_t* _stringLiteral2340491507D6D7C22EC2BC0B19E42F463062EFED;
IL2CPP_EXTERN_C String_t* _stringLiteral2437997BAF8FA7A4A8655553ED6B4212ED7CA684;
IL2CPP_EXTERN_C String_t* _stringLiteral24D3FA9EF9027D38088033AD06B49AC53ACB4ADB;
IL2CPP_EXTERN_C String_t* _stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499;
IL2CPP_EXTERN_C String_t* _stringLiteral2C91334D20F9D5BCAD75C87EE33F619CB3011C29;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9B9636C08DCF722A46533B315A13FA42C775C5;
IL2CPP_EXTERN_C String_t* _stringLiteral416AF169B6F034C64E0B70C982D6C06389C3899B;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral443BD561FA5A81D321CAAF0B444C0CFB1C5811D4;
IL2CPP_EXTERN_C String_t* _stringLiteral47EDDD3AC0C77F7723A9A0525312D7E49A059D09;
IL2CPP_EXTERN_C String_t* _stringLiteral495DC0FD751814351D0F918BCFE0E9C782E2E090;
IL2CPP_EXTERN_C String_t* _stringLiteral4A5EAECA242025908B1BA2BDB34B2296B923397E;
IL2CPP_EXTERN_C String_t* _stringLiteral4BAD6CD617D272A279F787BE0B87FA21DB8B7C02;
IL2CPP_EXTERN_C String_t* _stringLiteral4D2A7DC38E3D06969C09083548DE5A6AC3F8CE8E;
IL2CPP_EXTERN_C String_t* _stringLiteral552DA4F83AB1BC270CE749E47D3C68702AB45097;
IL2CPP_EXTERN_C String_t* _stringLiteral55CFC3484E2E301297CB8C75443E10F75CBF9517;
IL2CPP_EXTERN_C String_t* _stringLiteral580238E6E0ACB59AECE7F14975A94031E75C9F37;
IL2CPP_EXTERN_C String_t* _stringLiteral597A362DB8D6E186B492CF582B27E2FC8F03E2D3;
IL2CPP_EXTERN_C String_t* _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946;
IL2CPP_EXTERN_C String_t* _stringLiteral63FEAE5081ABFB719642D387AE43B7D4DFB3CFEB;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral6DC9AC61476AAE77F1CE47714E462CD38340FFEA;
IL2CPP_EXTERN_C String_t* _stringLiteral6E2A118D02EEC0264ECB711997DC50620920E7B0;
IL2CPP_EXTERN_C String_t* _stringLiteral70DF22C72E101915AD175E52251DF81548FAA318;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD319493499620E43634FF644A0CEF1624086AD;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF1829A378D66B1DD70A767729127A0DC5EDCAE;
IL2CPP_EXTERN_C String_t* _stringLiteral834B13F856924DCC46AB8FF86DB1C23A385C2FFF;
IL2CPP_EXTERN_C String_t* _stringLiteral8636634916056B376E0921A5D119E8B11C100BB0;
IL2CPP_EXTERN_C String_t* _stringLiteral91E01FFA5E6CD3B876C514BED83BB94FB75433EB;
IL2CPP_EXTERN_C String_t* _stringLiteral968938F0BED5019FA928295E1C69B47C868B5F69;
IL2CPP_EXTERN_C String_t* _stringLiteralA871E06BD04BA167F0121D2D4D2A6C4C82D64CE6;
IL2CPP_EXTERN_C String_t* _stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5;
IL2CPP_EXTERN_C String_t* _stringLiteralAC28842E9EA0E895314A073E2904F6E18886AD17;
IL2CPP_EXTERN_C String_t* _stringLiteralAE96E999CE28460225F268D6B8C1BBCB581FDE4C;
IL2CPP_EXTERN_C String_t* _stringLiteralB2DA18276C09711F93B7634679484CD9E5BB7498;
IL2CPP_EXTERN_C String_t* _stringLiteralB53E3868832BD0EF55666E126B25E567528AC5AD;
IL2CPP_EXTERN_C String_t* _stringLiteralB5EA60EDD2142984A91D0AB523AFEF5F0038056E;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBDCE5AC3929E9CA18E1A0EDD397BC9C4E7B2382C;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCF0C06BDB698BEE69D59BD9367155F6EFC70CDEC;
IL2CPP_EXTERN_C String_t* _stringLiteralD28C21A745DAAD04F4A4BAA862741D9A6EBEF607;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralE5CF365411A1923514E649FC7DC6B0FBEA3F8683;
IL2CPP_EXTERN_C String_t* _stringLiteralE8C4A72F529A8F05A6993B83DBA0A7D4C6EDA140;
IL2CPP_EXTERN_C String_t* _stringLiteralEA7BB2120EF43C457E7A6E84116ED6268AC8D48C;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF42442CA83AE953CBF0C9F2D7BD30697A2BCCE58;
IL2CPP_EXTERN_C String_t* _stringLiteralF8B61217D46DA3BC553C980F9397D47D55C737C2;
IL2CPP_EXTERN_C String_t* _stringLiteralFAADEE259CA27EB2EEAEFC368E2BE391D2D0CCDA;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m0F6C37D27FD2753844BDF8E50AE219156F3DD897_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m700822A334A40D10260E85DC795A4F8DCAEB2C36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m3F3537AB1C5407F28DCE82734A44B9867552F677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m4B109CA28C72E6EA470C7DC36B63B66EF9204A25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m58606EF7E646E6EC6F77966DDCC3DFEE5425C416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mB4FF51425EAC5D355088BF673235771595C2C2E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m01BBC460329BB84348DB03F5F79D91AF34ACD25F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m95EB4406228F27D45F9EEF25AFF40A9FF2577C4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m09D0B05560B270A9FADCF6E5D9C0736FA6CB8BAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m80237D55B3C8A89F91AEDF6EEA97E964CE793D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m96701DAA09851839D795DBFFBE541AD7FDDBF39A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFAD28A4AD3D41F7430DD3C8AA00B50505D45B168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m851B53831C1D952866C76EEAC18EF50F93AB791A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mB3D8551E03496E45CB5D68058A63A3DFEFE6F35B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m6C949EF2044C18D5BB5A889D60D195A11BE22B69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mAA08D8B1D90E5E645461227F453508FF161AB975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB3E6F224B561B6953AE6814C34334DF8917BFC0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mFFB77ACE82551B167A900FA09E9F5898B44F9D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Aggregate_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisDebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01_mD582FBD8810F5558D7B1085272C9DB034DAF0E64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m5425AF7896889A0D84459D56ACB1885279425F5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_m8C56738EBBCF4E4D7F049FC27FC7341390A83B47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m054E8A41329353C6B3766814A91704B5E2E87390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0695B17C766EB9522542CB394DC3B4B851B29B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3D695EEE7F8DBADB4E29925482335EFD8D5FF76C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m585A6A954709BD6CC8800FB71676F68D465292EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m63B8AF385972D5864FFDD46485F7B58A97F1E77C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6A3B34030CCB4372A88686FD98B98559C7802874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7BF2E33709CCA1C3182CB0B0823B5CC036376CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8366584410DF9635633C8684F575FA535CDF78A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m93AA6E5260B31B0E4A015483CD40732F6079367E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA0ADD22FB2ACC3151922FA044E9938ED618FFE78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB10A59CB2A7182E10D5AA3B84F66F09573A4A56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCE863A998546EAD25CFF5AA7DB1FD2BDA33CFFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD7214F14C1BAA998274190AC37240F40A399C28F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF4F6F2AA60837635347C6E6A0ABA10B0DF354B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0859E7EB111114970E0EEEE2F42B885680F4F344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0E266551F3F19E392882EA2ADC18A12F7F76FE4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m12335FB814C6C5B848D108D4A232E326FD1C2AFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3E6779FD1F45D3506C88709EDFA61A7FBABF497A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m514B4BBBE22D79C44A3955A2ABEE7ADFCCA68C68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m592DA1580FDC9900A7E27B34AB105B28CCAEAE37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6B49178CB9527B57DB94E5731B3E3F92DFE48DDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m78DCAA6637B4AB25991AD72F32AB7F288C10B29D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m92606E59E1BC7E1DDC87C96B815D73FBB6BB6E58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA226D5AC035B8AA46A1A5B0AD87D66B4747F85C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC647D2F1D2FCB04ABCC6E2C49C34DA886A411FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCD8574B18EAD84CC0914D6D0C6D73F3BFC0D8E90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDBC2140ABF4BFE23ACFEC8FC7084261C08F60DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFB93B9DD5E695BD31507F275338EA1AB8E0A17B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1FB39938CFD6138E1234BE2B1290025DF3D47AD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m26B937F5FF3C7B7320DCEB15714EA0288EFAA5BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m32E970B18F5B70BFE0C4A1913DAA8875E50D8F7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m53028144BDF8B628A22F679031E7BCE3BBAB6078_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5ABBE55A689E904113FB50E82F51E9A8109800EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6A7426E8C116E2CD2DBAD408C3A01C2F0D394DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m711969C4E360FC0725DE03CBA64788D763F715B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9153940C6F59F062F69715809C71D5A3D40A1D0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9630323BCC31A88964106965722CCA1FDA4DC22F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m987ADC83E21F27DE3A5E98DA01634843FCA83551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAE2D0F63AC021CDF331A873DB4D4D07C212C86FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC575015244897CC52C360CCFCD80B4F917A2DC37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC6ACA691B775B80C7B2AFFA23DF097D7EE70AF4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEE72C4D75A73C8C271D50350162CFE419F958D3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mB13C4C374F94EB008D025E53507C435EEB66B255_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mF4C2662792DE761C68D2A181E9121E422DC1EFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m14D518BFE7CB52396D67A492025306F7D6FCEB03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mBEA76E25FE25A85B1F140ED6C2D1F91A1E803DE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC2DE5CEAAF0F24570A1BA7E14675B32B40526360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mD222AD5CAEECD12BE8311BAC449090BBC57EF1DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mD7DDCAFDD092A3FE66808181161A5CC59C32AC82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m648C3909C024CDF768979896869147D7419149F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7919590FC8730088240AC8626E9A64EA1F12CC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mF2BDBBCCE3A7432DD1B1E16A68584F08AA0EB138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mFD10793F7A8114D83CDAD42FA058A63DB117AB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mBCEF5AADA8A0D29F430CC45EF1F72F25DA9726EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF67AEA92CB96A7EB9B237EA52FC2B38AA9B16BBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5A9752318EEC93FA92913E63EE9368B1E51EE2F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9D42F1337D5D751C33120AAABB9C59385A7CAA8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9D5476A26C0E25EA2F030DE559BEC98CF3DE6E84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA51DBCB8C46E069011DFC7F42326D4AEEAEA32BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCA442648CC7166D2F1F4C38D743E6C1E4D9D59C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB11A36DC9CB485BE0C7EA0E338F61ED2F4907E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m08A65C5E03A152020EA23579AED6CCE81B6D8B75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m348505C31E656F7C5F28165620EF27119D805BB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7CD99F6C4892332B0D870EFD09FF048D3C3924BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m96D11E7D645953447EA46D4A4A82F9618A32F4BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m993230E35DF67B7C3E14E1B6FEBFE234AB1BEE84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m993E21BCA341FEDBDE10AEFD25BBD3C49887247D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mAEED457850E75DD1B9ABC47B1937E3ECF5056AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB0447A1912B57CEC4309668380290C854E249335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBB5A38567E85BD23F19A6F563A9325AAB9FFFB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetRange_mEBA06D625B0F423AB20F3D64D0494EBB300C103D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m1C061628DB61D0C27E07DC5E390C2117383F62D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m549CA9389C0FF54CE448A6557816E0F0E7B58CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_InsertRange_m81197082109732E9D071CD54E1D42B531AC0F3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mDAD0B657BF66CA49FF92D46A4F1B5DE663A1932D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mDC57B7FA373AF75CDE1E30C27D41F0F530DE9D2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mF07CF701C047CD5DE92819D05FB0237F12923C48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m5CF433B308EA5F7DBC3D30C53F2536C2F47F8067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mCBEBB6515D8558B4F63B567960F012CE96E33BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m60A33E724150BD07A6081520E30BCBB4D524DFF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB6FCD13803E793F69359FB195161D2AFFED1C956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD3B873D7DF952D0E566E1D7C8DBB61D8FCBDD0B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE857C294F1FDC1B1EB7A48BD4C4B118802AD68F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF74A80C08203240AA21DF548A75AA891A2BA9062_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFBD5335DB80BD5C7F42356A6430C470A4D63CD72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m28F4FD8191AC70A79F88724B9BD21145FF88B3A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2EF709723E8742028D2BF885FA5335303F0B0282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3729CD7808E34BFD9068F3A791D9D00B90282588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAC8DA4D73CB00E162F7C0182BF3D6F0C25C5EFC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD7C86426165B299E1AF57E1CC3ADF4B9B0EDB97D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m449FB6200AAA05A7F50EB4B9BFF670422EC8C982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m3FCF32E15AB33459D20EC525DDCFC0C602BC378A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m45FF4EC1B2A358D173EBA31B28C7414D10F43861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mF6F4E83D0080A7E6A1384B94FCA8295260938273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_AddContent_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_mBC95D48BAC65CC876001759F3105E180FAC26E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_AddContent_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_m6169C2A2781ABFF41FF6C9D08702D6F37EC74523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m9D687DD3683A1F764C11223332FDE089739003CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindAll_TisChoice_t36174EC808231C52E43CE7768134739559499893_mFB83BCB5BDDDC5DF66331F766264D20DA55A29FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindAll_TisConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA_m74BDB1CE93F756F937FB0BC1C18BA142CF0C5C2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindAll_TisIWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_m7F252A913726163DB529A7C7F372736A522BD2A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindAll_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_mFFA3E83A3C6C3CC89AD0DC6F00460311015CD70A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Find_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_m745B0DEECFF6B651C7BC919A569845794345ED5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Find_TisTunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450_mBD53B00353D1047ED928ED4004D14DCAE7E8D31C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_InsertContent_TisWeave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_m2F8400F9F5E13FE2D2EF334CA9462E8CE3F86715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Story_Error_m07F65AEBFE75393B2F8ADB2A416CF1BD3ED8644E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_mBA08869463F19FC9EB5B34368BB75D9936C07DFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CContentThatFollowsWeavePointU3Ed__29_MoveNext_mFA2F28A62D5039FC397153C696FFBCE1D580918A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_IEnumerator_Reset_m115B11CD324347AE797625EACD51442CA8267AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveWeavePointNamingU3Eb__16_0_mD2E1AE17D456275345755805605BAB67AD659C93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CValidateFlowOfObjectsTerminatesU3Eb__33_0_mA29EFEC2C9F28D2F9138006B50AA65EB411F911E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__16_0_m100F96F238BA9E462A570C4DD891720F6EBC3FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_dotSeparatedComponentsU3Eb__9_0_m9BC7727506544F0B56B8295AA627708D90796A9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_identifierU3Eb__5_0_m3F93841E2FC7D9D434FE11EC13DC12E0706B2C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Weave_BadNestedTerminationHandler_m4531FCF23C4DAE2724AC2E1483B94C4FB23F97E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrap_1__ctor_m55E3265081F6A8406F0C3A7A7D3B2ABBC0311B0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wrap_1__ctor_mC7A871A14C44F022C311E215DA575CE02DBA3A62_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FlowBaseU5BU5D_t16780B0F060658CB5F6CD22371E715783A53DF20;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.Expression>
struct Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB9FE1E425353F78F91E5392B9BE2B33881681716* ____entries_1;
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
	KeyCollection_t503A12E35743D870D563C7F531995AE6C48A0070* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE698A7FAAAF070B8FFDB1A4693A10F0EB241F23* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ExternalDeclaration>
struct Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t10B583DBE3923FF0E9189A71ACDD107BA7D9A918* ____entries_1;
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
	KeyCollection_t746DA7F7B5F87B87586C9779814165728BA79AA0* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t979A688F4E5BFA7DEC23847C535A2ED067A90773* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.INamedContent>
struct Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t335B4173407FA82F09B3C528B37AB4E5E162069E* ____entries_1;
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
	KeyCollection_tD8C90CEAD584D2D5F4E8E7E7238CCCECAE291B8E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3DE12603F8024796594A48FD9E713B6E7977421B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint>
struct Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE8DBBBAEDA6BF12A00601ABAD28AF6ADA42E4943* ____entries_1;
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
	KeyCollection_tE294307EF6D15862F2CEA15169D3AC24CADE930A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF4AE1DFA82FAD6E67385BC2779CC11C2C1CDD8F4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListDefinition>
struct Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD5851B6AE8114C2FAD13AC9EA914B403C229400E* ____entries_1;
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
	KeyCollection_t34F0615D8D09BE6C128A5B4008385A2A19696C59* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB77EF8792DDD817803E91EF1AA64331CAF44C125* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.VariableAssignment>
struct Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6EA4D10B0FB6DAF528D762CF7DA0130C9F1B54A9* ____entries_1;
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
	KeyCollection_t102C1D8C7F79446903FFF13A4CB0D8B97FC9BBE9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tED59132BEDB9790038E0AB36E829D5DFA80CDA90* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<Ink.Runtime.Container>
struct HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tF5C961DB238E20395E6AB43D6B348C93F81666B5* ____slots_8;
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

// System.Collections.Generic.List`1<Ink.Parsed.Choice>
struct List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChoiceU5BU5D_t6400BB5EF477B560BCAB3701E2F8F3A6B1922DC2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChoiceU5BU5D_t6400BB5EF477B560BCAB3701E2F8F3A6B1922DC2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.ConstantDeclaration>
struct List_1_t67AAD19C0FFF8E5732D2ABD9BCF0AB17A6313BAF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ConstantDeclarationU5BU5D_t320EEC880705F76AA82ECBE56AACEAFEDB907445* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t67AAD19C0FFF8E5732D2ABD9BCF0AB17A6313BAF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ConstantDeclarationU5BU5D_t320EEC880705F76AA82ECBE56AACEAFEDB907445* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.ContentList>
struct List_1_t7CAB48FCDDBB3C931F99DE4CEFE682DE8A6981DF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ContentListU5BU5D_tBDBC62837DC07510821B20462E18669AA6633E0E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7CAB48FCDDBB3C931F99DE4CEFE682DE8A6981DF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ContentListU5BU5D_tBDBC62837DC07510821B20462E18669AA6633E0E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.Expression>
struct List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExpressionU5BU5D_t4C9E9240950A707982208D3B55C3D8B74D69F633* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExpressionU5BU5D_t4C9E9240950A707982208D3B55C3D8B74D69F633* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.FlowBase>
struct List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FlowBaseU5BU5D_t16780B0F060658CB5F6CD22371E715783A53DF20* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FlowBaseU5BU5D_t16780B0F060658CB5F6CD22371E715783A53DF20* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>
struct List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IWeavePointU5BU5D_t4F2E7A60D510D4699D15DF11C869F5A32C8C73A3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IWeavePointU5BU5D_t4F2E7A60D510D4699D15DF11C869F5A32C8C73A3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.Identifier>
struct List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IdentifierU5BU5D_tB903070C54BCA9897B3C2FCF3D4A87BADFCFA09A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IdentifierU5BU5D_tB903070C54BCA9897B3C2FCF3D4A87BADFCFA09A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.ListDefinition>
struct List_1_t2A94DBFCBC352D91C986BE84C30FEBFF0678BAD2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ListDefinitionU5BU5D_tE71B5BA20F6C3C02DF30D8547D2152BBE4862087* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2A94DBFCBC352D91C986BE84C30FEBFF0678BAD2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ListDefinitionU5BU5D_tE71B5BA20F6C3C02DF30D8547D2152BBE4862087* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Runtime.ListDefinition>
struct List_1_tEAA34814BB98964FD8B62D24AF030A7829378907  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ListDefinitionU5BU5D_tA8F61BEC35A82487A9645C6A384108C0FA8153AD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEAA34814BB98964FD8B62D24AF030A7829378907_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ListDefinitionU5BU5D_tA8F61BEC35A82487A9645C6A384108C0FA8153AD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.ListElementDefinition>
struct List_1_t5616402C899551039E0CA5216EA28E3B5E8B4010  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ListElementDefinitionU5BU5D_t3AEDE198B2550E786EF75C56E3E4A22A5F153418* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5616402C899551039E0CA5216EA28E3B5E8B4010_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ListElementDefinitionU5BU5D_t3AEDE198B2550E786EF75C56E3E4A22A5F153418* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.Object>
struct List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3586EF5ABA6916A1264318D0FA7041D17C7C0A80* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t3586EF5ABA6916A1264318D0FA7041D17C7C0A80* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Runtime.Object>
struct List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tEDD38A5588B3EF2CA1042B823EABFD3C073B03A5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_tEDD38A5588B3EF2CA1042B823EABFD3C073B03A5* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<Ink.Parsed.FlowBase/Argument>
struct List_1_t5A7C284E404753F1786689E097CE59A152638444  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ArgumentU5BU5D_tA6DB24DD78D19EFAE08E0F6B6C2DEF4D0EAA64A7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5A7C284E404753F1786689E097CE59A152638444_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ArgumentU5BU5D_tA6DB24DD78D19EFAE08E0F6B6C2DEF4D0EAA64A7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.Sequence/SequenceDivertToResolve>
struct List_1_t790425294EA2A6F283208CCC3E6906D3E7986012  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SequenceDivertToResolveU5BU5D_t5F10FA515DBEEC8DB07D5EFDEDC0F5F67277F397* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t790425294EA2A6F283208CCC3E6906D3E7986012_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SequenceDivertToResolveU5BU5D_t5F10FA515DBEEC8DB07D5EFDEDC0F5F67277F397* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve>
struct List_1_tA7383995CB6636153484C17B150C3B16C85C49B7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GatherPointToResolveU5BU5D_tCFBD4CA83BCF7F3F701B7B631061CC962657A3C4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA7383995CB6636153484C17B150C3B16C85C49B7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GatherPointToResolveU5BU5D_tCFBD4CA83BCF7F3F701B7B631061CC962657A3C4* ___s_emptyArray_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0A8F161D0AFAAAFBB8002FDA60CE4399F88BF872  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Ink.Runtime.DebugMetadata
struct DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01  : public RuntimeObject
{
	// System.Int32 Ink.Runtime.DebugMetadata::startLineNumber
	int32_t ___startLineNumber_0;
	// System.Int32 Ink.Runtime.DebugMetadata::endLineNumber
	int32_t ___endLineNumber_1;
	// System.Int32 Ink.Runtime.DebugMetadata::startCharacterNumber
	int32_t ___startCharacterNumber_2;
	// System.Int32 Ink.Runtime.DebugMetadata::endCharacterNumber
	int32_t ___endCharacterNumber_3;
	// System.String Ink.Runtime.DebugMetadata::fileName
	String_t* ___fileName_4;
	// System.String Ink.Runtime.DebugMetadata::sourceName
	String_t* ___sourceName_5;
};

// Ink.Parsed.Identifier
struct Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD  : public RuntimeObject
{
	// System.String Ink.Parsed.Identifier::name
	String_t* ___name_0;
	// Ink.Runtime.DebugMetadata Ink.Parsed.Identifier::debugMetadata
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ___debugMetadata_1;
};

struct Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD_StaticFields
{
	// Ink.Parsed.Identifier Ink.Parsed.Identifier::Done
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___Done_2;
};

// Ink.Runtime.ListDefinition
struct ListDefinition_t9DBDAC7E019BF524675B9B821F706894EEC42CE6  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<Ink.Runtime.InkListItem,System.Int32> Ink.Runtime.ListDefinition::_items
	Dictionary_2_t42041C50878B397AF5D58241F38EFF5E871070EB* ____items_0;
	// System.String Ink.Runtime.ListDefinition::_name
	String_t* ____name_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Ink.Runtime.ListDefinition::_itemNameToValues
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____itemNameToValues_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Ink.Parsed.Object
struct Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7  : public RuntimeObject
{
	// Ink.Runtime.DebugMetadata Ink.Parsed.Object::_debugMetadata
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ____debugMetadata_0;
	// Ink.Parsed.Object Ink.Parsed.Object::<parent>k__BackingField
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___U3CparentU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.Object::<content>k__BackingField
	List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___U3CcontentU3Ek__BackingField_2;
	// Ink.Runtime.Object Ink.Parsed.Object::_runtimeObject
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ____runtimeObject_3;
	// System.Boolean Ink.Parsed.Object::_alreadyHadError
	bool ____alreadyHadError_4;
	// System.Boolean Ink.Parsed.Object::_alreadyHadWarning
	bool ____alreadyHadWarning_5;
};

// Ink.Runtime.Object
struct Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB  : public RuntimeObject
{
	// Ink.Runtime.Object Ink.Runtime.Object::<parent>k__BackingField
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___U3CparentU3Ek__BackingField_0;
	// Ink.Runtime.DebugMetadata Ink.Runtime.Object::_debugMetadata
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ____debugMetadata_1;
	// Ink.Runtime.Path Ink.Runtime.Object::_path
	Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ____path_2;
};

// Ink.Runtime.Path
struct Path_tCC1F1626DB60711735401EA8FA76A191D9014600  : public RuntimeObject
{
	// System.Boolean Ink.Runtime.Path::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_1;
	// System.String Ink.Runtime.Path::_componentsString
	String_t* ____componentsString_2;
	// System.Collections.Generic.List`1<Ink.Runtime.Path/Component> Ink.Runtime.Path::_components
	List_1_t8358C58AEB53A1DE0181CC62DFE97831F8DA9C7C* ____components_3;
};

struct Path_tCC1F1626DB60711735401EA8FA76A191D9014600_StaticFields
{
	// System.String Ink.Runtime.Path::parentId
	String_t* ___parentId_0;
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

// Ink.Parsed.FlowBase/Argument
struct Argument_t57F624390C64DEA5183C13B31DE384F707B17021  : public RuntimeObject
{
	// Ink.Parsed.Identifier Ink.Parsed.FlowBase/Argument::identifier
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___identifier_0;
	// System.Boolean Ink.Parsed.FlowBase/Argument::isByReference
	bool ___isByReference_1;
	// System.Boolean Ink.Parsed.FlowBase/Argument::isDivertTarget
	bool ___isDivertTarget_2;
};

// Ink.Parsed.Path/<>c
struct U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E  : public RuntimeObject
{
};

struct U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_StaticFields
{
	// Ink.Parsed.Path/<>c Ink.Parsed.Path/<>c::<>9
	U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E* ___U3CU3E9_0;
	// System.Func`2<Ink.Parsed.Identifier,System.String> Ink.Parsed.Path/<>c::<>9__9_0
	Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* ___U3CU3E9__9_0_1;
};

// Ink.Parsed.Sequence/SequenceDivertToResolve
struct SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88  : public RuntimeObject
{
	// Ink.Runtime.Divert Ink.Parsed.Sequence/SequenceDivertToResolve::divert
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ___divert_0;
	// Ink.Runtime.Object Ink.Parsed.Sequence/SequenceDivertToResolve::targetContent
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___targetContent_1;
};

// Ink.Parsed.VariableReference/<>c
struct U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0  : public RuntimeObject
{
};

struct U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields
{
	// Ink.Parsed.VariableReference/<>c Ink.Parsed.VariableReference/<>c::<>9
	U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* ___U3CU3E9_0;
	// System.Func`3<Ink.Runtime.DebugMetadata,Ink.Parsed.Identifier,Ink.Runtime.DebugMetadata> Ink.Parsed.VariableReference/<>c::<>9__5_0
	Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* ___U3CU3E9__5_0_1;
	// System.Func`2<Ink.Parsed.Identifier,System.String> Ink.Parsed.VariableReference/<>c::<>9__16_0
	Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* ___U3CU3E9__16_0_2;
};

// Ink.Parsed.Weave/<>c
struct U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807  : public RuntimeObject
{
};

struct U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields
{
	// Ink.Parsed.Weave/<>c Ink.Parsed.Weave/<>c::<>9
	U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* ___U3CU3E9_0;
	// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.IWeavePoint> Ink.Parsed.Weave/<>c::<>9__16_0
	FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* ___U3CU3E9__16_0_1;
	// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.Divert> Ink.Parsed.Weave/<>c::<>9__33_0
	FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* ___U3CU3E9__33_0_2;
};

// Ink.Parsed.Weave/GatherPointToResolve
struct GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14  : public RuntimeObject
{
	// Ink.Runtime.Divert Ink.Parsed.Weave/GatherPointToResolve::divert
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ___divert_0;
	// Ink.Runtime.Object Ink.Parsed.Weave/GatherPointToResolve::targetRuntimeObj
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___targetRuntimeObj_1;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ConstantDeclaration>
struct Enumerator_t991C2824424E8830112FADEC37C39FA54A2FDAC1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t67AAD19C0FFF8E5732D2ABD9BCF0AB17A6313BAF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<Ink.Runtime.Container>
struct Enumerator_t2F1BB79EEB703736F808D627A13B5D97A1C96271 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ContentList>
struct Enumerator_t01D3AE12B6AD2CBBD7748943A6EEE3E2D4143663 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7CAB48FCDDBB3C931F99DE4CEFE682DE8A6981DF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.FlowBase>
struct Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.IWeavePoint>
struct Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ListDefinition>
struct Enumerator_tE7D1E550D963BCDC5ACB63A3099ED81CA85A3F3A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2A94DBFCBC352D91C986BE84C30FEBFF0678BAD2* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ListElementDefinition>
struct Enumerator_tD9C45AEA0CD1E79572A7164FD177676AEB7EBE53 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5616402C899551039E0CA5216EA28E3B5E8B4010* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Object>
struct Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Runtime.Object>
struct Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.FlowBase/Argument>
struct Enumerator_t85ABE7A908BBD2336D59882D900E9D4CBD6183B1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5A7C284E404753F1786689E097CE59A152638444* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Argument_t57F624390C64DEA5183C13B31DE384F707B17021* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Sequence/SequenceDivertToResolve>
struct Enumerator_tC11A5B12CF26B13BAD8CDCC5375367E670FBEA63 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t790425294EA2A6F283208CCC3E6906D3E7986012* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Weave/GatherPointToResolve>
struct Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,Ink.Runtime.INamedContent>
struct KeyValuePair_2_t5E4CC453E09A531E3B06120F018B9F3132190A81 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,Ink.Parsed.IWeavePoint>
struct KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,Ink.Parsed.ListDefinition>
struct KeyValuePair_2_tF6D8142A0F6DC48B7EC7A1321A329733A7B86266 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,Ink.Parsed.VariableAssignment>
struct KeyValuePair_2_t44892EA16A995E68634C6E2AF928750976CA6D02 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* ___value_1;
};

// System.Nullable`1<Ink.Parsed.FlowLevel>
struct Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// Ink.Parsed.Wrap`1<Ink.Runtime.Glue>
struct Wrap_1_tC06BF2A45CCF887EEF2D86199C08609A6927998F  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// T Ink.Parsed.Wrap`1::_objToWrap
	Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D* ____objToWrap_6;
};

// Ink.Parsed.Wrap`1<Ink.Runtime.Tag>
struct Wrap_1_t30A29E9AC5AC4AEC0670984E15D014B48C63BFF9  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// T Ink.Parsed.Wrap`1::_objToWrap
	Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29* ____objToWrap_6;
};

// Ink.Parsed.AuthorWarning
struct AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// System.String Ink.Parsed.AuthorWarning::warningMessage
	String_t* ___warningMessage_6;
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

// Ink.Parsed.Choice
struct Choice_t36174EC808231C52E43CE7768134739559499893  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.ContentList Ink.Parsed.Choice::<startContent>k__BackingField
	ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* ___U3CstartContentU3Ek__BackingField_6;
	// Ink.Parsed.ContentList Ink.Parsed.Choice::<choiceOnlyContent>k__BackingField
	ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* ___U3CchoiceOnlyContentU3Ek__BackingField_7;
	// Ink.Parsed.ContentList Ink.Parsed.Choice::<innerContent>k__BackingField
	ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* ___U3CinnerContentU3Ek__BackingField_8;
	// Ink.Parsed.Identifier Ink.Parsed.Choice::<identifier>k__BackingField
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___U3CidentifierU3Ek__BackingField_9;
	// System.Boolean Ink.Parsed.Choice::<onceOnly>k__BackingField
	bool ___U3ConceOnlyU3Ek__BackingField_10;
	// System.Boolean Ink.Parsed.Choice::<isInvisibleDefault>k__BackingField
	bool ___U3CisInvisibleDefaultU3Ek__BackingField_11;
	// System.Int32 Ink.Parsed.Choice::<indentationDepth>k__BackingField
	int32_t ___U3CindentationDepthU3Ek__BackingField_12;
	// System.Boolean Ink.Parsed.Choice::<hasWeaveStyleInlineBrackets>k__BackingField
	bool ___U3ChasWeaveStyleInlineBracketsU3Ek__BackingField_13;
	// Ink.Runtime.ChoicePoint Ink.Parsed.Choice::_runtimeChoice
	ChoicePoint_t4B38D1BE22B41C7C0AF41CA18AD6A6D12239111D* ____runtimeChoice_14;
	// Ink.Runtime.Container Ink.Parsed.Choice::_innerContentContainer
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____innerContentContainer_15;
	// Ink.Runtime.Container Ink.Parsed.Choice::_outerContainer
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____outerContainer_16;
	// Ink.Runtime.Container Ink.Parsed.Choice::_startContentRuntimeContainer
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____startContentRuntimeContainer_17;
	// Ink.Runtime.Divert Ink.Parsed.Choice::_divertToStartContentOuter
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ____divertToStartContentOuter_18;
	// Ink.Runtime.Divert Ink.Parsed.Choice::_divertToStartContentInner
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ____divertToStartContentInner_19;
	// Ink.Runtime.Container Ink.Parsed.Choice::_r1Label
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____r1Label_20;
	// Ink.Runtime.Container Ink.Parsed.Choice::_r2Label
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____r2Label_21;
	// Ink.Runtime.DivertTargetValue Ink.Parsed.Choice::_returnToR1
	DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* ____returnToR1_22;
	// Ink.Runtime.DivertTargetValue Ink.Parsed.Choice::_returnToR2
	DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* ____returnToR2_23;
	// Ink.Parsed.Expression Ink.Parsed.Choice::_condition
	Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ____condition_24;
};

// Ink.Parsed.Conditional
struct Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Expression Ink.Parsed.Conditional::<initialCondition>k__BackingField
	Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___U3CinitialConditionU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<Ink.Parsed.ConditionalSingleBranch> Ink.Parsed.Conditional::<branches>k__BackingField
	List_1_t488491625CFD9ED32600FE60136E562DEE6CAC34* ___U3CbranchesU3Ek__BackingField_7;
	// Ink.Runtime.ControlCommand Ink.Parsed.Conditional::_reJoinTarget
	ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ____reJoinTarget_8;
};

// Ink.Parsed.ConstantDeclaration
struct ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.ConstantDeclaration::<constantIdentifier>k__BackingField
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___U3CconstantIdentifierU3Ek__BackingField_6;
	// Ink.Parsed.Expression Ink.Parsed.ConstantDeclaration::<expression>k__BackingField
	Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___U3CexpressionU3Ek__BackingField_7;
};

// Ink.Runtime.Container
struct Container_t74302BC1028974B0A346A43F334AECB681D79579  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// System.String Ink.Runtime.Container::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<Ink.Runtime.Object> Ink.Runtime.Container::_content
	List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* ____content_4;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.INamedContent> Ink.Runtime.Container::<namedContent>k__BackingField
	Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49* ___U3CnamedContentU3Ek__BackingField_5;
	// System.Boolean Ink.Runtime.Container::<visitsShouldBeCounted>k__BackingField
	bool ___U3CvisitsShouldBeCountedU3Ek__BackingField_6;
	// System.Boolean Ink.Runtime.Container::<turnIndexShouldBeCounted>k__BackingField
	bool ___U3CturnIndexShouldBeCountedU3Ek__BackingField_7;
	// System.Boolean Ink.Runtime.Container::<countingAtStartOnly>k__BackingField
	bool ___U3CcountingAtStartOnlyU3Ek__BackingField_8;
	// Ink.Runtime.Path Ink.Runtime.Container::_pathToFirstLeafContent
	Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ____pathToFirstLeafContent_9;
};

// Ink.Parsed.ContentList
struct ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// System.Boolean Ink.Parsed.ContentList::<dontFlatten>k__BackingField
	bool ___U3CdontFlattenU3Ek__BackingField_6;
};

// Ink.Runtime.ControlCommand
struct ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// Ink.Runtime.ControlCommand/CommandType Ink.Runtime.ControlCommand::<commandType>k__BackingField
	int32_t ___U3CcommandTypeU3Ek__BackingField_3;
};

// Ink.Parsed.Divert
struct Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Path Ink.Parsed.Divert::<target>k__BackingField
	Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* ___U3CtargetU3Ek__BackingField_6;
	// Ink.Parsed.Object Ink.Parsed.Divert::<targetContent>k__BackingField
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___U3CtargetContentU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<Ink.Parsed.Expression> Ink.Parsed.Divert::<arguments>k__BackingField
	List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* ___U3CargumentsU3Ek__BackingField_8;
	// Ink.Runtime.Divert Ink.Parsed.Divert::<runtimeDivert>k__BackingField
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ___U3CruntimeDivertU3Ek__BackingField_9;
	// System.Boolean Ink.Parsed.Divert::<isFunctionCall>k__BackingField
	bool ___U3CisFunctionCallU3Ek__BackingField_10;
	// System.Boolean Ink.Parsed.Divert::<isEmpty>k__BackingField
	bool ___U3CisEmptyU3Ek__BackingField_11;
	// System.Boolean Ink.Parsed.Divert::<isTunnel>k__BackingField
	bool ___U3CisTunnelU3Ek__BackingField_12;
	// System.Boolean Ink.Parsed.Divert::<isThread>k__BackingField
	bool ___U3CisThreadU3Ek__BackingField_13;
};

// Ink.Parsed.Expression
struct Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// System.Boolean Ink.Parsed.Expression::<outputWhenComplete>k__BackingField
	bool ___U3CoutputWhenCompleteU3Ek__BackingField_6;
	// Ink.Runtime.Container Ink.Parsed.Expression::_prototypeRuntimeConstantExpression
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____prototypeRuntimeConstantExpression_7;
};

// Ink.Parsed.ExternalDeclaration
struct ExternalDeclaration_t6A600B5552FFC2082997474D7E5256DFA8782367  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.ExternalDeclaration::<identifier>k__BackingField
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___U3CidentifierU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<System.String> Ink.Parsed.ExternalDeclaration::<argumentNames>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CargumentNamesU3Ek__BackingField_7;
};

// Ink.Parsed.FlowBase
struct FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.FlowBase::<identifier>k__BackingField
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___U3CidentifierU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<Ink.Parsed.FlowBase/Argument> Ink.Parsed.FlowBase::<arguments>k__BackingField
	List_1_t5A7C284E404753F1786689E097CE59A152638444* ___U3CargumentsU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.VariableAssignment> Ink.Parsed.FlowBase::variableDeclarations
	Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0* ___variableDeclarations_8;
	// System.Boolean Ink.Parsed.FlowBase::<isFunction>k__BackingField
	bool ___U3CisFunctionU3Ek__BackingField_9;
	// Ink.Parsed.Weave Ink.Parsed.FlowBase::_rootWeave
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* ____rootWeave_10;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.FlowBase> Ink.Parsed.FlowBase::_subFlowsByName
	Dictionary_2_t7036DE9B0F2F80FBA9FBA3A30E3971F4F9DD9C37* ____subFlowsByName_11;
	// Ink.Runtime.Divert Ink.Parsed.FlowBase::_startingSubFlowDivert
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ____startingSubFlowDivert_12;
	// Ink.Runtime.Object Ink.Parsed.FlowBase::_startingSubFlowRuntime
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ____startingSubFlowRuntime_13;
	// Ink.Parsed.FlowBase Ink.Parsed.FlowBase::_firstChildFlow
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* ____firstChildFlow_14;
};

// Ink.Parsed.Gather
struct Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.Gather::<identifier>k__BackingField
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___U3CidentifierU3Ek__BackingField_6;
	// System.Int32 Ink.Parsed.Gather::<indentationDepth>k__BackingField
	int32_t ___U3CindentationDepthU3Ek__BackingField_7;
};

// Ink.Runtime.Glue
struct Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
};

// Ink.Parsed.IncludedFile
struct IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Story Ink.Parsed.IncludedFile::<includedStory>k__BackingField
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* ___U3CincludedStoryU3Ek__BackingField_6;
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

// Ink.Parsed.ListDefinition
struct ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.ListDefinition::identifier
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___identifier_6;
	// System.Collections.Generic.List`1<Ink.Parsed.ListElementDefinition> Ink.Parsed.ListDefinition::itemDefinitions
	List_1_t5616402C899551039E0CA5216EA28E3B5E8B4010* ___itemDefinitions_7;
	// Ink.Parsed.VariableAssignment Ink.Parsed.ListDefinition::variableAssignment
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* ___variableAssignment_8;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListElementDefinition> Ink.Parsed.ListDefinition::_elementsByName
	Dictionary_2_tE97196D98524B83CDC1CBCD47EE15F32C15E13E5* ____elementsByName_9;
};

// Ink.Runtime.NativeFunctionCall
struct NativeFunctionCall_tE48D7B25FFE2719D67C09A104593781EA0FE60C5  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// System.String Ink.Runtime.NativeFunctionCall::_name
	String_t* ____name_34;
	// System.Int32 Ink.Runtime.NativeFunctionCall::_numberOfParameters
	int32_t ____numberOfParameters_35;
	// Ink.Runtime.NativeFunctionCall Ink.Runtime.NativeFunctionCall::_prototype
	NativeFunctionCall_tE48D7B25FFE2719D67C09A104593781EA0FE60C5* ____prototype_36;
	// System.Boolean Ink.Runtime.NativeFunctionCall::_isPrototype
	bool ____isPrototype_37;
	// System.Collections.Generic.Dictionary`2<Ink.Runtime.ValueType,System.Object> Ink.Runtime.NativeFunctionCall::_operationFuncs
	Dictionary_2_tF1FC776C6B428E6A5BC5C41A9C25A3C8A253D9BD* ____operationFuncs_38;
};

struct NativeFunctionCall_tE48D7B25FFE2719D67C09A104593781EA0FE60C5_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.NativeFunctionCall> Ink.Runtime.NativeFunctionCall::_nativeFunctions
	Dictionary_2_t4CC902C3BEAE01B4BF57BB5789C6B6900E6B24D5* ____nativeFunctions_39;
};

// Ink.Runtime.Pointer
struct Pointer_tAE29AE1A481AA7FDB6539F59D006A589CDB9EA87 
{
	// Ink.Runtime.Container Ink.Runtime.Pointer::container
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container_0;
	// System.Int32 Ink.Runtime.Pointer::index
	int32_t ___index_1;
};

struct Pointer_tAE29AE1A481AA7FDB6539F59D006A589CDB9EA87_StaticFields
{
	// Ink.Runtime.Pointer Ink.Runtime.Pointer::Null
	Pointer_tAE29AE1A481AA7FDB6539F59D006A589CDB9EA87 ___Null_2;
};
// Native definition for P/Invoke marshalling of Ink.Runtime.Pointer
struct Pointer_tAE29AE1A481AA7FDB6539F59D006A589CDB9EA87_marshaled_pinvoke
{
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container_0;
	int32_t ___index_1;
};
// Native definition for COM marshalling of Ink.Runtime.Pointer
struct Pointer_tAE29AE1A481AA7FDB6539F59D006A589CDB9EA87_marshaled_com
{
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container_0;
	int32_t ___index_1;
};

// Ink.Parsed.Return
struct Return_tF820135B4E13C7AA4FB7A0BAB1EB362B26B6FC14  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Expression Ink.Parsed.Return::<returnedExpression>k__BackingField
	Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___U3CreturnedExpressionU3Ek__BackingField_6;
};

// Ink.Parsed.Sequence
struct Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.Sequence::sequenceElements
	List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___sequenceElements_6;
	// Ink.Parsed.SequenceType Ink.Parsed.Sequence::sequenceType
	int32_t ___sequenceType_7;
	// System.Collections.Generic.List`1<Ink.Parsed.Sequence/SequenceDivertToResolve> Ink.Parsed.Sequence::_sequenceDivertsToResove
	List_1_t790425294EA2A6F283208CCC3E6906D3E7986012* ____sequenceDivertsToResove_8;
};

// Ink.Runtime.Story
struct Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// Ink.ErrorHandler Ink.Runtime.Story::onError
	ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728* ___onError_5;
	// System.Action Ink.Runtime.Story::onDidContinue
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onDidContinue_6;
	// System.Action`1<Ink.Runtime.Choice> Ink.Runtime.Story::onMakeChoice
	Action_1_t16D9E813F23DBC6B2E5DBFB7ABC91BCA2C679D18* ___onMakeChoice_7;
	// System.Action`2<System.String,System.Object[]> Ink.Runtime.Story::onEvaluateFunction
	Action_2_t48A40D13AC950EA4E32E5F1B0B1787B102798910* ___onEvaluateFunction_8;
	// System.Action`4<System.String,System.Object[],System.String,System.Object> Ink.Runtime.Story::onCompleteEvaluateFunction
	Action_4_t6F52DFEEE9C8656E1874926136A959F191DA8BDE* ___onCompleteEvaluateFunction_9;
	// System.Action`2<System.String,System.Object[]> Ink.Runtime.Story::onChoosePathString
	Action_2_t48A40D13AC950EA4E32E5F1B0B1787B102798910* ___onChoosePathString_10;
	// System.Collections.Generic.List`1<Ink.Runtime.Container> Ink.Runtime.Story::_prevContainers
	List_1_t349BFECBCFD8087208E39C04E6DF080F8E0507A9* ____prevContainers_11;
	// System.Boolean Ink.Runtime.Story::<allowExternalFunctionFallbacks>k__BackingField
	bool ___U3CallowExternalFunctionFallbacksU3Ek__BackingField_12;
	// Ink.Runtime.Container Ink.Runtime.Story::_mainContentContainer
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____mainContentContainer_13;
	// Ink.Runtime.ListDefinitionsOrigin Ink.Runtime.Story::_listDefinitions
	ListDefinitionsOrigin_tBDD8343C1C7129DD84565AB1E6C435FECE0BEF89* ____listDefinitions_14;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.Story/ExternalFunctionDef> Ink.Runtime.Story::_externals
	Dictionary_2_tF062828A54ADD443C677C71A299000A1A7FF0ECA* ____externals_15;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.Story/VariableObserver> Ink.Runtime.Story::_variableObservers
	Dictionary_2_t0FC1AA36A3E09D400A2240C13ACFB7B4BAA39FF4* ____variableObservers_16;
	// System.Boolean Ink.Runtime.Story::_hasValidatedExternals
	bool ____hasValidatedExternals_17;
	// Ink.Runtime.Container Ink.Runtime.Story::_temporaryEvaluationContainer
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____temporaryEvaluationContainer_18;
	// Ink.Runtime.StoryState Ink.Runtime.Story::_state
	StoryState_t93975BE855AACA9E18087DADAAF0FFE6312F26EF* ____state_19;
	// System.Boolean Ink.Runtime.Story::_asyncContinueActive
	bool ____asyncContinueActive_20;
	// Ink.Runtime.StoryState Ink.Runtime.Story::_stateSnapshotAtLastNewline
	StoryState_t93975BE855AACA9E18087DADAAF0FFE6312F26EF* ____stateSnapshotAtLastNewline_21;
	// System.Boolean Ink.Runtime.Story::_sawLookaheadUnsafeFunctionAfterNewline
	bool ____sawLookaheadUnsafeFunctionAfterNewline_22;
	// System.Int32 Ink.Runtime.Story::_recursiveContinueCount
	int32_t ____recursiveContinueCount_23;
	// System.Boolean Ink.Runtime.Story::_asyncSaving
	bool ____asyncSaving_24;
	// Ink.Runtime.Profiler Ink.Runtime.Story::_profiler
	Profiler_tF4E485997B5D938116F7C370F114B9EBA327BBFA* ____profiler_25;
};

// Ink.Runtime.Tag
struct Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// System.String Ink.Runtime.Tag::<text>k__BackingField
	String_t* ___U3CtextU3Ek__BackingField_3;
};

// Ink.Parsed.Text
struct Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// System.String Ink.Parsed.Text::<text>k__BackingField
	String_t* ___U3CtextU3Ek__BackingField_6;
};

// Ink.Parsed.TunnelOnwards
struct TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Divert Ink.Parsed.TunnelOnwards::_divertAfter
	Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* ____divertAfter_6;
	// Ink.Runtime.DivertTargetValue Ink.Parsed.TunnelOnwards::_overrideDivertTarget
	DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* ____overrideDivertTarget_7;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// Ink.Runtime.Value
struct Value_t83388D9312CF9361C360A2BF2FB68504251BDF28  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
};

// Ink.Parsed.VariableAssignment
struct VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.VariableAssignment::<variableIdentifier>k__BackingField
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___U3CvariableIdentifierU3Ek__BackingField_6;
	// Ink.Parsed.Expression Ink.Parsed.VariableAssignment::<expression>k__BackingField
	Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___U3CexpressionU3Ek__BackingField_7;
	// Ink.Parsed.ListDefinition Ink.Parsed.VariableAssignment::<listDefinition>k__BackingField
	ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___U3ClistDefinitionU3Ek__BackingField_8;
	// System.Boolean Ink.Parsed.VariableAssignment::<isGlobalDeclaration>k__BackingField
	bool ___U3CisGlobalDeclarationU3Ek__BackingField_9;
	// System.Boolean Ink.Parsed.VariableAssignment::<isNewTemporaryDeclaration>k__BackingField
	bool ___U3CisNewTemporaryDeclarationU3Ek__BackingField_10;
	// Ink.Runtime.VariableAssignment Ink.Parsed.VariableAssignment::_runtimeAssignment
	VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* ____runtimeAssignment_11;
};

// Ink.Runtime.VariableAssignment
struct VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// System.String Ink.Runtime.VariableAssignment::<variableName>k__BackingField
	String_t* ___U3CvariableNameU3Ek__BackingField_3;
	// System.Boolean Ink.Runtime.VariableAssignment::<isNewDeclaration>k__BackingField
	bool ___U3CisNewDeclarationU3Ek__BackingField_4;
	// System.Boolean Ink.Runtime.VariableAssignment::<isGlobal>k__BackingField
	bool ___U3CisGlobalU3Ek__BackingField_5;
};

// Ink.Runtime.VariableReference
struct VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// System.String Ink.Runtime.VariableReference::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_3;
	// Ink.Runtime.Path Ink.Runtime.VariableReference::<pathForCount>k__BackingField
	Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___U3CpathForCountU3Ek__BackingField_4;
};

// Ink.Runtime.Void
struct Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
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

// Ink.Parsed.Weave
struct Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Runtime.Container Ink.Parsed.Weave::<currentContainer>k__BackingField
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ___U3CcurrentContainerU3Ek__BackingField_6;
	// System.Int32 Ink.Parsed.Weave::<baseIndentIndex>k__BackingField
	int32_t ___U3CbaseIndentIndexU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint> Ink.Parsed.Weave::looseEnds
	List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* ___looseEnds_8;
	// System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve> Ink.Parsed.Weave::gatherPointsToResolve
	List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* ___gatherPointsToResolve_9;
	// Ink.Parsed.IWeavePoint Ink.Parsed.Weave::previousWeavePoint
	RuntimeObject* ___previousWeavePoint_10;
	// System.Boolean Ink.Parsed.Weave::addContentToPreviousWeavePoint
	bool ___addContentToPreviousWeavePoint_11;
	// System.Boolean Ink.Parsed.Weave::hasSeenChoiceInSection
	bool ___hasSeenChoiceInSection_12;
	// System.Int32 Ink.Parsed.Weave::_unnamedGatherCount
	int32_t ____unnamedGatherCount_13;
	// System.Int32 Ink.Parsed.Weave::_choiceCount
	int32_t ____choiceCount_14;
	// Ink.Runtime.Container Ink.Parsed.Weave::_rootContainer
	Container_t74302BC1028974B0A346A43F334AECB681D79579* ____rootContainer_15;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint> Ink.Parsed.Weave::_namedWeavePoints
	Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* ____namedWeavePoints_16;
};

// Ink.Parsed.FlowBase/VariableResolveResult
struct VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 
{
	// System.Boolean Ink.Parsed.FlowBase/VariableResolveResult::found
	bool ___found_0;
	// System.Boolean Ink.Parsed.FlowBase/VariableResolveResult::isGlobal
	bool ___isGlobal_1;
	// System.Boolean Ink.Parsed.FlowBase/VariableResolveResult::isArgument
	bool ___isArgument_2;
	// System.Boolean Ink.Parsed.FlowBase/VariableResolveResult::isTemporary
	bool ___isTemporary_3;
	// Ink.Parsed.FlowBase Ink.Parsed.FlowBase/VariableResolveResult::ownerFlow
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* ___ownerFlow_4;
};
// Native definition for P/Invoke marshalling of Ink.Parsed.FlowBase/VariableResolveResult
struct VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2_marshaled_pinvoke
{
	int32_t ___found_0;
	int32_t ___isGlobal_1;
	int32_t ___isArgument_2;
	int32_t ___isTemporary_3;
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* ___ownerFlow_4;
};
// Native definition for COM marshalling of Ink.Parsed.FlowBase/VariableResolveResult
struct VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2_marshaled_com
{
	int32_t ___found_0;
	int32_t ___isGlobal_1;
	int32_t ___isArgument_2;
	int32_t ___isTemporary_3;
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* ___ownerFlow_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Runtime.INamedContent>
struct Enumerator_tC49652DEA3A38051A5EB7023060F5273631F66F5 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t5E4CC453E09A531E3B06120F018B9F3132190A81 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.IWeavePoint>
struct Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.ListDefinition>
struct Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tF6D8142A0F6DC48B7EC7A1321A329733A7B86266 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.VariableAssignment>
struct Enumerator_t67A9F5376E8773E1B1EA88376D61BA00993080A3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t44892EA16A995E68634C6E2AF928750976CA6D02 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// Ink.Runtime.Value`1<System.Int32>
struct Value_1_tAADB02C974EBAF60F1A32201EAABE50B26B1C080  : public Value_t83388D9312CF9361C360A2BF2FB68504251BDF28
{
	// T Ink.Runtime.Value`1::<value>k__BackingField
	int32_t ___U3CvalueU3Ek__BackingField_3;
};

// Ink.Runtime.Value`1<Ink.Runtime.Path>
struct Value_1_t9DD824A3332707D30F0278B26B48A270886802FC  : public Value_t83388D9312CF9361C360A2BF2FB68504251BDF28
{
	// T Ink.Runtime.Value`1::<value>k__BackingField
	Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___U3CvalueU3Ek__BackingField_3;
};

// Ink.Runtime.Value`1<System.String>
struct Value_1_t62B415E6A65821732DA445E45DF5E6F3FBD6978C  : public Value_t83388D9312CF9361C360A2BF2FB68504251BDF28
{
	// T Ink.Runtime.Value`1::<value>k__BackingField
	String_t* ___U3CvalueU3Ek__BackingField_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// Ink.Runtime.Divert
struct Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA  : public Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB
{
	// Ink.Runtime.Path Ink.Runtime.Divert::_targetPath
	Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ____targetPath_3;
	// Ink.Runtime.Pointer Ink.Runtime.Divert::_targetPointer
	Pointer_tAE29AE1A481AA7FDB6539F59D006A589CDB9EA87 ____targetPointer_4;
	// System.String Ink.Runtime.Divert::<variableDivertName>k__BackingField
	String_t* ___U3CvariableDivertNameU3Ek__BackingField_5;
	// System.Boolean Ink.Runtime.Divert::<pushesToStack>k__BackingField
	bool ___U3CpushesToStackU3Ek__BackingField_6;
	// Ink.Runtime.PushPopType Ink.Runtime.Divert::stackPushType
	int32_t ___stackPushType_7;
	// System.Boolean Ink.Runtime.Divert::<isExternal>k__BackingField
	bool ___U3CisExternalU3Ek__BackingField_8;
	// System.Int32 Ink.Runtime.Divert::<externalArgs>k__BackingField
	int32_t ___U3CexternalArgsU3Ek__BackingField_9;
	// System.Boolean Ink.Runtime.Divert::<isConditional>k__BackingField
	bool ___U3CisConditionalU3Ek__BackingField_10;
};

// Ink.Parsed.DivertTarget
struct DivertTarget_t72F939797266E1087B339BC7F70A4A43A8E91F2D  : public Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D
{
	// Ink.Parsed.Divert Ink.Parsed.DivertTarget::divert
	Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* ___divert_8;
	// Ink.Runtime.DivertTargetValue Ink.Parsed.DivertTarget::_runtimeDivertTargetValue
	DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* ____runtimeDivertTargetValue_9;
	// Ink.Runtime.Divert Ink.Parsed.DivertTarget::_runtimeDivert
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ____runtimeDivert_10;
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

// Ink.Parsed.Glue
struct Glue_t1B0423D93951017DCD923A001EEEE15092EF1D2A  : public Wrap_1_tC06BF2A45CCF887EEF2D86199C08609A6927998F
{
};

// Ink.Parsed.ListElementDefinition
struct ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD  : public Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7
{
	// Ink.Parsed.Identifier Ink.Parsed.ListElementDefinition::identifier
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___identifier_6;
	// System.Nullable`1<System.Int32> Ink.Parsed.ListElementDefinition::explicitValue
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___explicitValue_7;
	// System.Int32 Ink.Parsed.ListElementDefinition::seriesValue
	int32_t ___seriesValue_8;
	// System.Boolean Ink.Parsed.ListElementDefinition::inInitialList
	bool ___inInitialList_9;
};

// Ink.Parsed.Path
struct Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC  : public RuntimeObject
{
	// System.String Ink.Parsed.Path::_dotSeparatedComponents
	String_t* ____dotSeparatedComponents_0;
	// System.Collections.Generic.List`1<Ink.Parsed.Identifier> Ink.Parsed.Path::<components>k__BackingField
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* ___U3CcomponentsU3Ek__BackingField_1;
	// System.Nullable`1<Ink.Parsed.FlowLevel> Ink.Parsed.Path::_baseTargetLevel
	Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC ____baseTargetLevel_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Ink.Parsed.Stitch
struct Stitch_t681670B130517D97D8E480F375F9F27EB8D19E84  : public FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822
{
};

// Ink.Parsed.Story
struct Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7  : public FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822
{
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.Expression> Ink.Parsed.Story::constants
	Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* ___constants_15;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ExternalDeclaration> Ink.Parsed.Story::externals
	Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0* ___externals_16;
	// System.Boolean Ink.Parsed.Story::countAllVisits
	bool ___countAllVisits_17;
	// Ink.ErrorHandler Ink.Parsed.Story::_errorHandler
	ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728* ____errorHandler_18;
	// System.Boolean Ink.Parsed.Story::_hadError
	bool ____hadError_19;
	// System.Boolean Ink.Parsed.Story::_hadWarning
	bool ____hadWarning_20;
	// System.Collections.Generic.HashSet`1<Ink.Runtime.Container> Ink.Parsed.Story::_dontFlattenContainers
	HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* ____dontFlattenContainers_21;
	// System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListDefinition> Ink.Parsed.Story::_listDefs
	Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* ____listDefs_22;
};

// Ink.Parsed.StringExpression
struct StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678  : public Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D
{
};

// Ink.Parsed.Tag
struct Tag_tAB0A2B0822AC49777B0EF88C69DFC2D2A203DFF9  : public Wrap_1_t30A29E9AC5AC4AEC0670984E15D014B48C63BFF9
{
};

// Ink.Parsed.VariableReference
struct VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049  : public Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D
{
	// System.String Ink.Parsed.VariableReference::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_8;
	// Ink.Parsed.Identifier Ink.Parsed.VariableReference::_singleIdentifier
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ____singleIdentifier_9;
	// System.Collections.Generic.List`1<Ink.Parsed.Identifier> Ink.Parsed.VariableReference::pathIdentifiers
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* ___pathIdentifiers_10;
	// System.Collections.Generic.List`1<System.String> Ink.Parsed.VariableReference::<path>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CpathU3Ek__BackingField_11;
	// System.Boolean Ink.Parsed.VariableReference::isConstantReference
	bool ___isConstantReference_12;
	// System.Boolean Ink.Parsed.VariableReference::isListItemReference
	bool ___isListItemReference_13;
	// Ink.Runtime.VariableReference Ink.Parsed.VariableReference::_runtimeVarRef
	VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* ____runtimeVarRef_14;
};

// Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29
struct U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C  : public RuntimeObject
{
	// System.Int32 Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Ink.Parsed.Object Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>2__current
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___U3CU3E2__current_1;
	// System.Int32 Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Ink.Parsed.IWeavePoint Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::weavePoint
	RuntimeObject* ___weavePoint_3;
	// Ink.Parsed.IWeavePoint Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>3__weavePoint
	RuntimeObject* ___U3CU3E3__weavePoint_4;
	// Ink.Parsed.Weave Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>4__this
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* ___U3CU3E4__this_5;
	// Ink.Parsed.Object Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<obj>5__2
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___U3CobjU3E5__2_6;
	// Ink.Parsed.Weave Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<parentWeave>5__3
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* ___U3CparentWeaveU3E5__3_7;
	// System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Object> Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>7__wrap3
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C ___U3CU3E7__wrap3_8;
	// System.Int32 Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<i>5__5
	int32_t ___U3CiU3E5__5_9;
};

// Ink.Runtime.DivertTargetValue
struct DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B  : public Value_1_t9DD824A3332707D30F0278B26B48A270886802FC
{
};

// Ink.Runtime.IntValue
struct IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358  : public Value_1_tAADB02C974EBAF60F1A32201EAABE50B26B1C080
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Ink.Runtime.StringValue
struct StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2  : public Value_1_t62B415E6A65821732DA445E45DF5E6F3FBD6978C
{
	// System.Boolean Ink.Runtime.StringValue::<isNewline>k__BackingField
	bool ___U3CisNewlineU3Ek__BackingField_4;
	// System.Boolean Ink.Runtime.StringValue::<isInlineWhitespace>k__BackingField
	bool ___U3CisInlineWhitespaceU3Ek__BackingField_5;
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

// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.Choice>
struct FindQueryFunc_1_t336B67E9DF3943E1288CC482ACB0BBF4A96D7199  : public MulticastDelegate_t
{
};

// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.ConstantDeclaration>
struct FindQueryFunc_1_t88DB34734FC78E98F67D0DD2A9EA542043B35D2A  : public MulticastDelegate_t
{
};

// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.Divert>
struct FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911  : public MulticastDelegate_t
{
};

// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.IWeavePoint>
struct FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40  : public MulticastDelegate_t
{
};

// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.ListDefinition>
struct FindQueryFunc_1_t10539BCA97AC966ED5258992D5E813042F7498C7  : public MulticastDelegate_t
{
};

// Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.TunnelOnwards>
struct FindQueryFunc_1_tD49158339C9E80306F093B9B3FFDC0266098B984  : public MulticastDelegate_t
{
};

// System.Func`2<Ink.Parsed.Identifier,System.String>
struct Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875  : public MulticastDelegate_t
{
};

// System.Func`3<Ink.Runtime.DebugMetadata,Ink.Parsed.Identifier,Ink.Runtime.DebugMetadata>
struct Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Ink.ErrorHandler
struct ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Ink.Parsed.Weave/BadTerminationHandler
struct BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Ink.Parsed.FlowBase[]
struct FlowBaseU5BU5D_t16780B0F060658CB5F6CD22371E715783A53DF20  : public RuntimeArray
{
	ALIGN_FIELD (8) FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* m_Items[1];

	inline FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* value)
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m26287DBB36429B2E2FBCB3F96F439248F8CAA8BB_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::AddContent<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_AddContent_TisRuntimeObject_m88FD0921CF023EC8A98CA0158EB868EBECB6273F_gshared (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, RuntimeObject* ___subContent0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___collection1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> Ink.Parsed.Object::FindAll<System.Object>(Ink.Parsed.Object/FindQueryFunc`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Object_FindAll_TisRuntimeObject_m368416BE935DDD2F291D003D061DBAAC99383FB9_gshared (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_tF0B7DF2C2BB336BC978FCC0A8D82910DD79BAE75* ___queryFunc0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object::AddContent<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_AddContent_TisRuntimeObject_m602F0E148C596C72999222ED0EA4E9C0779BFD6E_gshared (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___listContent0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TAccumulate System.Linq.Enumerable::Aggregate<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Aggregate_TisRuntimeObject_TisRuntimeObject_mB8EE5BC99A611E57CA705344C56A84E9D7072F0A_gshared (RuntimeObject* ___source0, RuntimeObject* ___seed1, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___func2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.String System.String::Join<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisRuntimeObject_m7F966936BE15193A65D544C972FAF2D35A83A221_gshared (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object/FindQueryFunc`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindQueryFunc_1__ctor_m0A3323A942DFF84A818F2D4BCF3101FEEB1ED7EF_gshared (FindQueryFunc_1_tF0B7DF2C2BB336BC978FCC0A8D82910DD79BAE75* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* List_1_GetRange_m8F5CCE68284D0E231F22C5C2DBBA51B856D70F25_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::InsertContent<System.Object>(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_InsertContent_TisRuntimeObject_m6278B89820234B7EC5CE91674E04EC2E517C4ADC_gshared (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, int32_t ___index0, RuntimeObject* ___subContent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::Find<System.Object>(Ink.Parsed.Object/FindQueryFunc`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Find_TisRuntimeObject_m432376B603D8571C2E9C1CF7CA2030D12E6D8A44_gshared (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_tF0B7DF2C2BB336BC978FCC0A8D82910DD79BAE75* ___queryFunc0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Wrap`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wrap_1__ctor_mA5A5D12BFDE33FADD6E2E6CABE7EE893286C212B_gshared (Wrap_1_t07205EDFFF18F5F5B08620D9B41DCA4780859265* __this, RuntimeObject* ___objToWrap0, const RuntimeMethod* method) ;

// System.Boolean Ink.Parsed.Path::get_baseLevelIsAmbiguous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_get_baseLevelIsAmbiguous_m03B3365985E0AFF96FF2EA9F0305BF33FB1334CB (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Ink.Parsed.FlowLevel>::get_Value()
inline int32_t Nullable_1_get_Value_mF6F4E83D0080A7E6A1384B94FCA8295260938273 (Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Ink.Parsed.FlowLevel>::get_HasValue()
inline bool Nullable_1_get_HasValue_m45FF4EC1B2A358D173EBA31B28C7414D10F43861_inline (Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Ink.Parsed.Identifier> Ink.Parsed.Path::get_components()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Parsed.Identifier>::get_Count()
inline int32_t List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_inline (List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Ink.Parsed.Identifier>::get_Item(System.Int32)
inline Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* List_1_get_Item_mAC8DA4D73CB00E162F7C0182BF3D6F0C25C5EFC7 (List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* (*) (List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Func`2<Ink.Parsed.Identifier,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB5EB3293BD72F180C6BB12565679FEF66CC283EE (Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Ink.Parsed.Identifier,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_m8C56738EBBCF4E4D7F049FC27FC7341390A83B47 (RuntimeObject* ___source0, Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m675422BC1927F19F7135C5211B45EE7AC9F7D632 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Ink.Parsed.FlowLevel>::.ctor(T)
inline void Nullable_1__ctor_m3FCF32E15AB33459D20EC525DDCFC0C602BC378A (Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Identifier>::.ctor()
inline void List_1__ctor_mD3B873D7DF952D0E566E1D7C8DBB61D8FCBDD0B6 (List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Identifier>::Add(T)
inline void List_1_Add_m9D5476A26C0E25EA2F030DE559BEC98CF3DE6E84_inline (List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08*, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Ink.Parsed.FlowLevel Ink.Parsed.Path::get_baseTargetLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Path_get_baseTargetLevel_m302A790B35D368EC94AF754E9EA037BDBC5A2AA2 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) ;
// System.String Ink.Parsed.Path::get_dotSeparatedComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_get_dotSeparatedComponents_mBB7D9A23856A701D60A4A2B9D1625925622A4BEC (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// Ink.Parsed.Object Ink.Parsed.Path::ResolveBaseTarget(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Path_ResolveBaseTarget_m08575D981E3A2A951376C0480B9D91AABD1FEF81 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___originalContext0, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Object::op_Equality(Ink.Parsed.Object,Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___a0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___b1, const RuntimeMethod* method) ;
// Ink.Parsed.Object Ink.Parsed.Path::ResolveTailComponents(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Path_ResolveTailComponents_m26B7D1F85B2F0610935E7D1C78796C233F5B2E7D (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___rootTarget0, const RuntimeMethod* method) ;
// System.String Ink.Parsed.Path::get_firstComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_get_firstComponent_mF0DB92EC3C5CCA852966F18FBE6E3CD181AC6F2B (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) ;
// Ink.Parsed.Object Ink.Parsed.Path::TryGetChildFromContext(Ink.Parsed.Object,System.String,System.Nullable`1<Ink.Parsed.FlowLevel>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Path_TryGetChildFromContext_m422034BAA43ADE6D750CAC3482BCB19481F4CC7A (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___context0, String_t* ___childName1, Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC ___minimumLevel2, bool ___forceDeepSearch3, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Object::op_Inequality(Ink.Parsed.Object,Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___a0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___b1, const RuntimeMethod* method) ;
// Ink.Parsed.Object Ink.Parsed.Object::get_parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Ink.Parsed.FlowLevel>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m449FB6200AAA05A7F50EB4B9BFF670422EC8C982_inline (Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m26287DBB36429B2E2FBCB3F96F439248F8CAA8BB_gshared_inline)(__this, method);
}
// Ink.Parsed.IWeavePoint Ink.Parsed.Weave::WeavePointNamed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Weave_WeavePointNamed_mB6BBB582A93BE2C68059F5642F3CCCA6446648F0 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// Ink.Parsed.Object Ink.Parsed.FlowBase::ContentWithNameAtLevel(System.String,System.Nullable`1<Ink.Parsed.FlowLevel>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* FlowBase_ContentWithNameAtLevel_mBEA01AF67EC82BAF3485DEB39E7C5F6EB95DCE42 (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, String_t* ___name0, Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC ___level1, bool ___deepSearch2, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Path/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE4EBAFCB6B7202F8F5E681C4DAD67E48363DEF47 (U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Object::op_Implicit(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___obj0, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::AddContent<Ink.Parsed.Expression>(T)
inline Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___subContent0, const RuntimeMethod* method)
{
	return ((  Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D*, const RuntimeMethod*))Object_AddContent_TisRuntimeObject_m88FD0921CF023EC8A98CA0158EB868EBECB6273F_gshared)(__this, ___subContent0, method);
}
// System.Void Ink.Parsed.Return::set_returnedExpression(Ink.Parsed.Expression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Return_set_returnedExpression_mCA02FC2F1D627F8DA28FB6A16D5F4BFE582BA17D_inline (Return_tF820135B4E13C7AA4FB7A0BAB1EB362B26B6FC14* __this, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Container::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container__ctor_mE49EAAD4892EDEFFDA64A7A54823A021ECBF4F84 (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, const RuntimeMethod* method) ;
// Ink.Parsed.Expression Ink.Parsed.Return::get_returnedExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* Return_get_returnedExpression_m0F3B090A66709E032F417E8046A3B5AA3990F4E6_inline (Return_tF820135B4E13C7AA4FB7A0BAB1EB362B26B6FC14* __this, const RuntimeMethod* method) ;
// Ink.Runtime.Object Ink.Parsed.Object::get_runtimeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Container::AddContent(Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76 (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___contentObj0, const RuntimeMethod* method) ;
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::EvalStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_EvalStart_m5552F30F2BAF74C7B324DFF8E150AF206369A412 (const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Void::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Void__ctor_mE6655AC1CDBDF3AEAF058E98834803EFA65A8886 (Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0* __this, const RuntimeMethod* method) ;
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::EvalEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_EvalEnd_mB619929D3EB97531D9F354283A15D3EA22CD983F (const RuntimeMethod* method) ;
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::PopFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_PopFunction_m494AA2B4F94401CE9A26173A0CA0111DB987A6B4 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Object>::.ctor()
inline void List_1__ctor_mFBD5335DB80BD5C7F42356A6430C470A4D63CD72 (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.ContentList>::GetEnumerator()
inline Enumerator_t01D3AE12B6AD2CBBD7748943A6EEE3E2D4143663 List_1_GetEnumerator_m96D11E7D645953447EA46D4A4A82F9618A32F4BC (List_1_t7CAB48FCDDBB3C931F99DE4CEFE682DE8A6981DF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t01D3AE12B6AD2CBBD7748943A6EEE3E2D4143663 (*) (List_1_t7CAB48FCDDBB3C931F99DE4CEFE682DE8A6981DF*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ContentList>::Dispose()
inline void Enumerator_Dispose_mB10A59CB2A7182E10D5AA3B84F66F09573A4A56D (Enumerator_t01D3AE12B6AD2CBBD7748943A6EEE3E2D4143663* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t01D3AE12B6AD2CBBD7748943A6EEE3E2D4143663*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ContentList>::get_Current()
inline ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* Enumerator_get_Current_mEE72C4D75A73C8C271D50350162CFE419F958D3B_inline (Enumerator_t01D3AE12B6AD2CBBD7748943A6EEE3E2D4143663* __this, const RuntimeMethod* method)
{
	return ((  ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* (*) (Enumerator_t01D3AE12B6AD2CBBD7748943A6EEE3E2D4143663*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.Object::get_content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Parsed.Object>::get_Count()
inline int32_t List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Ink.Parsed.Weave::.ctor(System.Collections.Generic.List`1<Ink.Parsed.Object>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave__ctor_mE804413D35CA9D86F034623450393D361FB63449 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___cont0, int32_t ___indentIndex1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Object>::Add(T)
inline void List_1_Add_m5A9752318EEC93FA92913E63EE9368B1E51EE2F0_inline (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T Ink.Parsed.Object::AddContent<Ink.Parsed.Object>(T)
inline Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m9D687DD3683A1F764C11223332FDE089739003CD (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___subContent0, const RuntimeMethod* method)
{
	return ((  Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*))Object_AddContent_TisRuntimeObject_m88FD0921CF023EC8A98CA0158EB868EBECB6273F_gshared)(__this, ___subContent0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ContentList>::MoveNext()
inline bool Enumerator_MoveNext_m92606E59E1BC7E1DDC87C96B815D73FBB6BB6E58 (Enumerator_t01D3AE12B6AD2CBBD7748943A6EEE3E2D4143663* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t01D3AE12B6AD2CBBD7748943A6EEE3E2D4143663*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Ink.Runtime.Container::set_visitsShouldBeCounted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Container_set_visitsShouldBeCounted_mCA668E9A96F2D5B8F25801AE1169786E35B2091C_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Container::set_countingAtStartOnly(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Container_set_countingAtStartOnly_m97E94EA0207E814538744AB785E0A71821257C2D_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Sequence/SequenceDivertToResolve>::.ctor()
inline void List_1__ctor_mB6FCD13803E793F69359FB195161D2AFFED1C956 (List_1_t790425294EA2A6F283208CCC3E6906D3E7986012* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t790425294EA2A6F283208CCC3E6906D3E7986012*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::VisitIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_VisitIndex_m1E553992BBAFAB7C7C559CF34703BE4A0FC9C402 (const RuntimeMethod* method) ;
// System.Void Ink.Runtime.IntValue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntValue__ctor_m5E32D02EF5024D1A265F9296D640A8ECFB79C652 (IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358* __this, int32_t ___intVal0, const RuntimeMethod* method) ;
// Ink.Runtime.NativeFunctionCall Ink.Runtime.NativeFunctionCall::CallWithName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeFunctionCall_tE48D7B25FFE2719D67C09A104593781EA0FE60C5* NativeFunctionCall_CallWithName_m503BA033EC27B0900F693BB2113BA022ED987D22 (String_t* ___functionName0, const RuntimeMethod* method) ;
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::NoOp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_NoOp_m266A1359A3EADDEE5A83531F6589D43FD2D9DBAF (const RuntimeMethod* method) ;
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::Duplicate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_Duplicate_mD1FA6CC1DF935600116FB461C4C43EC6718642DB (const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Divert::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Divert__ctor_m6EF2247FDA9554C19F47356ACDC569D214095A3A (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Divert::set_isConditional(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Divert_set_isConditional_mDB631828EAA0091F708E2DA06B743FA3BD7BF33A_inline (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Sequence::AddDivertToResolve(Ink.Runtime.Divert,Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_AddDivertToResolve_m5EC3A0BE4AF25B6A0EB2657D3061FDB8BEE5713A (Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85* __this, Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ___divert0, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___targetContent1, const RuntimeMethod* method) ;
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::SequenceShuffleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_SequenceShuffleIndex_m9333D7F7436E81C8B480522125587C3601D1F678 (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Ink.Parsed.Object>::get_Item(System.Int32)
inline Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11 (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Container::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Container_set_name_m8F5A2754D5F5B724CDB73F5754F75D179253D1B1_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::PopEvaluatedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_PopEvaluatedValue_mB363CF3E2CD932F98B55DB33737C7FA746FE4721 (const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Container::InsertContent(Ink.Runtime.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_InsertContent_m844F5C9F5AF7856E920DFB5F17DBEC8A262B5144 (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___contentObj0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Container::AddToNamedContentOnly(Ink.Runtime.INamedContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_AddToNamedContentOnly_mE22F23FF9DA10C2E08C20DD7DFCF0B2A3C689461 (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, RuntimeObject* ___namedContentObj0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Sequence/SequenceDivertToResolve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequenceDivertToResolve__ctor_mAC464AB231B33607221F02499E124936E2FC760C (SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Sequence/SequenceDivertToResolve>::Add(T)
inline void List_1_Add_m9D42F1337D5D751C33120AAABB9C59385A7CAA8A_inline (List_1_t790425294EA2A6F283208CCC3E6906D3E7986012* __this, SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t790425294EA2A6F283208CCC3E6906D3E7986012*, SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Ink.Parsed.Object::ResolveReferences(Ink.Parsed.Story)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_ResolveReferences_m8BC5DD701019191459A9CEF84D71FFBE2FEDFF8E (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* ___context0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.Sequence/SequenceDivertToResolve>::GetEnumerator()
inline Enumerator_tC11A5B12CF26B13BAD8CDCC5375367E670FBEA63 List_1_GetEnumerator_m993E21BCA341FEDBDE10AEFD25BBD3C49887247D (List_1_t790425294EA2A6F283208CCC3E6906D3E7986012* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC11A5B12CF26B13BAD8CDCC5375367E670FBEA63 (*) (List_1_t790425294EA2A6F283208CCC3E6906D3E7986012*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Sequence/SequenceDivertToResolve>::Dispose()
inline void Enumerator_Dispose_m0695B17C766EB9522542CB394DC3B4B851B29B0F (Enumerator_tC11A5B12CF26B13BAD8CDCC5375367E670FBEA63* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC11A5B12CF26B13BAD8CDCC5375367E670FBEA63*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Sequence/SequenceDivertToResolve>::get_Current()
inline SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* Enumerator_get_Current_m5ABBE55A689E904113FB50E82F51E9A8109800EE_inline (Enumerator_tC11A5B12CF26B13BAD8CDCC5375367E670FBEA63* __this, const RuntimeMethod* method)
{
	return ((  SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* (*) (Enumerator_tC11A5B12CF26B13BAD8CDCC5375367E670FBEA63*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Ink.Runtime.Path Ink.Runtime.Object::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Path_tCC1F1626DB60711735401EA8FA76A191D9014600* Object_get_path_m08402839773DCFE39E1D2C20D91F21D2A294A765 (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Divert::set_targetPath(Ink.Runtime.Path)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Divert_set_targetPath_m3BA5FF19D878E1BFB3A1D9D5C952FD41110E0213 (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* __this, Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Sequence/SequenceDivertToResolve>::MoveNext()
inline bool Enumerator_MoveNext_m514B4BBBE22D79C44A3955A2ABEE7ADFCCA68C68 (Enumerator_tC11A5B12CF26B13BAD8CDCC5375367E670FBEA63* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC11A5B12CF26B13BAD8CDCC5375367E670FBEA63*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Ink.Parsed.FlowBase::.ctor(Ink.Parsed.Identifier,System.Collections.Generic.List`1<Ink.Parsed.Object>,System.Collections.Generic.List`1<Ink.Parsed.FlowBase/Argument>,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlowBase__ctor_m9617379391C6CBF8E44705B74D16326088D2A916 (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___name0, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___topLevelObjects1, List_1_t5A7C284E404753F1786689E097CE59A152638444* ___arguments2, bool ___isFunction3, bool ___isIncludedStory4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Ink.Runtime.Container>::.ctor()
inline void HashSet_1__ctor_mBEA76E25FE25A85B1F140ED6C2D1F91A1E803DE2 (HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Parsed.FlowBase>::.ctor()
inline void List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889 (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Object>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mF07CF701C047CD5DE92819D05FB0237F12923C48 (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// Ink.Parsed.Story Ink.Parsed.IncludedFile::get_includedStory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* IncludedFile_get_includedStory_m0264E5FA6B7C163059E8BE7C769E55061D6E4C1D_inline (IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.Object>::GetEnumerator()
inline Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73 (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Object>::Dispose()
inline void Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273 (Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Object>::get_Current()
inline Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline (Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* __this, const RuntimeMethod* method)
{
	return ((  Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* (*) (Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Parsed.FlowBase>::Add(T)
inline void List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_inline (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* __this, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB*, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Object>::MoveNext()
inline bool Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89 (Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Ink.Parsed.Text::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text__ctor_mCC47ACBD825802241319B32E0BBAB28EEABD7BE0 (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_InsertRange_m81197082109732E9D071CD54E1D42B531AC0F3E1 (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, int32_t ___index0, RuntimeObject* ___collection1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A_gshared)(__this, ___index0, ___collection1, method);
}
// T[] System.Collections.Generic.List`1<Ink.Parsed.FlowBase>::ToArray()
inline FlowBaseU5BU5D_t16780B0F060658CB5F6CD22371E715783A53DF20* List_1_ToArray_mCBEBB6515D8558B4F63B567960F012CE96E33BB5 (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* __this, const RuntimeMethod* method)
{
	return ((  FlowBaseU5BU5D_t16780B0F060658CB5F6CD22371E715783A53DF20* (*) (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mBCEF5AADA8A0D29F430CC45EF1F72F25DA9726EF (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.Expression>::.ctor()
inline void Dictionary_2__ctor_mFAD28A4AD3D41F7430DD3C8AA00B50505D45B168 (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.List`1<T> Ink.Parsed.Object::FindAll<Ink.Parsed.ConstantDeclaration>(Ink.Parsed.Object/FindQueryFunc`1<T>)
inline List_1_t67AAD19C0FFF8E5732D2ABD9BCF0AB17A6313BAF* Object_FindAll_TisConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA_m74BDB1CE93F756F937FB0BC1C18BA142CF0C5C2A (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_t88DB34734FC78E98F67D0DD2A9EA542043B35D2A* ___queryFunc0, const RuntimeMethod* method)
{
	return ((  List_1_t67AAD19C0FFF8E5732D2ABD9BCF0AB17A6313BAF* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, FindQueryFunc_1_t88DB34734FC78E98F67D0DD2A9EA542043B35D2A*, const RuntimeMethod*))Object_FindAll_TisRuntimeObject_m368416BE935DDD2F291D003D061DBAAC99383FB9_gshared)(__this, ___queryFunc0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.ConstantDeclaration>::GetEnumerator()
inline Enumerator_t991C2824424E8830112FADEC37C39FA54A2FDAC1 List_1_GetEnumerator_m348505C31E656F7C5F28165620EF27119D805BB4 (List_1_t67AAD19C0FFF8E5732D2ABD9BCF0AB17A6313BAF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t991C2824424E8830112FADEC37C39FA54A2FDAC1 (*) (List_1_t67AAD19C0FFF8E5732D2ABD9BCF0AB17A6313BAF*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ConstantDeclaration>::Dispose()
inline void Enumerator_Dispose_m63B8AF385972D5864FFDD46485F7B58A97F1E77C (Enumerator_t991C2824424E8830112FADEC37C39FA54A2FDAC1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t991C2824424E8830112FADEC37C39FA54A2FDAC1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ConstantDeclaration>::get_Current()
inline ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* Enumerator_get_Current_mC6ACA691B775B80C7B2AFFA23DF097D7EE70AF4C_inline (Enumerator_t991C2824424E8830112FADEC37C39FA54A2FDAC1* __this, const RuntimeMethod* method)
{
	return ((  ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* (*) (Enumerator_t991C2824424E8830112FADEC37C39FA54A2FDAC1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String Ink.Parsed.ConstantDeclaration::get_constantName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConstantDeclaration_get_constantName_mE522F21F2F045F8DE74DF39A64772E51A8401092 (ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.Expression>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* __this, String_t* ___key0, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301*, String_t*, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Ink.Parsed.Expression Ink.Parsed.ConstantDeclaration::get_expression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ConstantDeclaration_get_expression_mDD0F91B64454035715A6CC71941060766DB4BCDD_inline (ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* __this, const RuntimeMethod* method) ;
// Ink.Runtime.DebugMetadata Ink.Parsed.Object::get_debugMetadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.Expression>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mB3E6F224B561B6953AE6814C34334DF8917BFC0D (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* __this, String_t* ___key0, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301*, String_t*, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ConstantDeclaration>::MoveNext()
inline bool Enumerator_MoveNext_m78DCAA6637B4AB25991AD72F32AB7F288C10B29D (Enumerator_t991C2824424E8830112FADEC37C39FA54A2FDAC1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t991C2824424E8830112FADEC37C39FA54A2FDAC1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListDefinition>::.ctor()
inline void Dictionary_2__ctor_m96701DAA09851839D795DBFFBE541AD7FDDBF39A (Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.List`1<T> Ink.Parsed.Object::FindAll<Ink.Parsed.ListDefinition>(Ink.Parsed.Object/FindQueryFunc`1<T>)
inline List_1_t2A94DBFCBC352D91C986BE84C30FEBFF0678BAD2* Object_FindAll_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_mFFA3E83A3C6C3CC89AD0DC6F00460311015CD70A (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_t10539BCA97AC966ED5258992D5E813042F7498C7* ___queryFunc0, const RuntimeMethod* method)
{
	return ((  List_1_t2A94DBFCBC352D91C986BE84C30FEBFF0678BAD2* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, FindQueryFunc_1_t10539BCA97AC966ED5258992D5E813042F7498C7*, const RuntimeMethod*))Object_FindAll_TisRuntimeObject_m368416BE935DDD2F291D003D061DBAAC99383FB9_gshared)(__this, ___queryFunc0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.ListDefinition>::GetEnumerator()
inline Enumerator_tE7D1E550D963BCDC5ACB63A3099ED81CA85A3F3A List_1_GetEnumerator_m993230E35DF67B7C3E14E1B6FEBFE234AB1BEE84 (List_1_t2A94DBFCBC352D91C986BE84C30FEBFF0678BAD2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE7D1E550D963BCDC5ACB63A3099ED81CA85A3F3A (*) (List_1_t2A94DBFCBC352D91C986BE84C30FEBFF0678BAD2*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ListDefinition>::Dispose()
inline void Enumerator_Dispose_m054E8A41329353C6B3766814A91704B5E2E87390 (Enumerator_tE7D1E550D963BCDC5ACB63A3099ED81CA85A3F3A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE7D1E550D963BCDC5ACB63A3099ED81CA85A3F3A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ListDefinition>::get_Current()
inline ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* Enumerator_get_Current_m26B937F5FF3C7B7320DCEB15714EA0288EFAA5BB_inline (Enumerator_tE7D1E550D963BCDC5ACB63A3099ED81CA85A3F3A* __this, const RuntimeMethod* method)
{
	return ((  ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* (*) (Enumerator_tE7D1E550D963BCDC5ACB63A3099ED81CA85A3F3A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListDefinition>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m6C949EF2044C18D5BB5A889D60D195A11BE22B69 (Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* __this, String_t* ___key0, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398*, String_t*, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ListDefinition>::MoveNext()
inline bool Enumerator_MoveNext_m0859E7EB111114970E0EEEE2F42B885680F4F344 (Enumerator_tE7D1E550D963BCDC5ACB63A3099ED81CA85A3F3A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE7D1E550D963BCDC5ACB63A3099ED81CA85A3F3A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ExternalDeclaration>::.ctor()
inline void Dictionary_2__ctor_m80237D55B3C8A89F91AEDF6EEA97E964CE793D22 (Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Ink.Parsed.FlowBase::ResolveWeavePointNaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlowBase_ResolveWeavePointNaming_m8F5BB832C501D3ABC6080126EAC9FC1305905693 (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Runtime.ListDefinition>::.ctor()
inline void List_1__ctor_mF74A80C08203240AA21DF548A75AA891A2BA9062 (List_1_tEAA34814BB98964FD8B62D24AF030A7829378907* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEAA34814BB98964FD8B62D24AF030A7829378907*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.VariableAssignment>::GetEnumerator()
inline Enumerator_t67A9F5376E8773E1B1EA88376D61BA00993080A3 Dictionary_2_GetEnumerator_mB4FF51425EAC5D355088BF673235771595C2C2E0 (Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t67A9F5376E8773E1B1EA88376D61BA00993080A3 (*) (Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.VariableAssignment>::Dispose()
inline void Enumerator_Dispose_mF4F6F2AA60837635347C6E6A0ABA10B0DF354B8A (Enumerator_t67A9F5376E8773E1B1EA88376D61BA00993080A3* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t67A9F5376E8773E1B1EA88376D61BA00993080A3*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.VariableAssignment>::get_Current()
inline KeyValuePair_2_t44892EA16A995E68634C6E2AF928750976CA6D02 Enumerator_get_Current_m6A7426E8C116E2CD2DBAD408C3A01C2F0D394DE2_inline (Enumerator_t67A9F5376E8773E1B1EA88376D61BA00993080A3* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t44892EA16A995E68634C6E2AF928750976CA6D02 (*) (Enumerator_t67A9F5376E8773E1B1EA88376D61BA00993080A3*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,Ink.Parsed.VariableAssignment>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mD7DDCAFDD092A3FE66808181161A5CC59C32AC82_inline (KeyValuePair_2_t44892EA16A995E68634C6E2AF928750976CA6D02* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t44892EA16A995E68634C6E2AF928750976CA6D02*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,Ink.Parsed.VariableAssignment>::get_Value()
inline VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* KeyValuePair_2_get_Value_m648C3909C024CDF768979896869147D7419149F0_inline (KeyValuePair_2_t44892EA16A995E68634C6E2AF928750976CA6D02* __this, const RuntimeMethod* method)
{
	return ((  VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* (*) (KeyValuePair_2_t44892EA16A995E68634C6E2AF928750976CA6D02*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean Ink.Parsed.VariableAssignment::get_isGlobalDeclaration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// Ink.Parsed.ListDefinition Ink.Parsed.VariableAssignment::get_listDefinition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// Ink.Runtime.ListDefinition Ink.Parsed.ListDefinition::get_runtimeListDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListDefinition_t9DBDAC7E019BF524675B9B821F706894EEC42CE6* ListDefinition_get_runtimeListDefinition_mD053577FFD9CC1DCAB4A19F9D48A39F7FE8BA683 (ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Runtime.ListDefinition>::Add(T)
inline void List_1_Add_mA51DBCB8C46E069011DFC7F42326D4AEEAEA32BF_inline (List_1_tEAA34814BB98964FD8B62D24AF030A7829378907* __this, ListDefinition_t9DBDAC7E019BF524675B9B821F706894EEC42CE6* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEAA34814BB98964FD8B62D24AF030A7829378907*, ListDefinition_t9DBDAC7E019BF524675B9B821F706894EEC42CE6*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Ink.Parsed.Expression Ink.Parsed.VariableAssignment::get_expression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.VariableAssignment::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment__ctor_m34573492CA6DA1C98F74FD9F2F3ECCB2FCE7E1B6 (VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* __this, String_t* ___variableName0, bool ___isNewDeclaration1, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.VariableAssignment::set_isGlobal(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_isGlobal_m7E2A5FFCF8C182807B5941792682A0A1D26535DE_inline (VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.VariableAssignment>::MoveNext()
inline bool Enumerator_MoveNext_m12335FB814C6C5B848D108D4A232E326FD1C2AFA (Enumerator_t67A9F5376E8773E1B1EA88376D61BA00993080A3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t67A9F5376E8773E1B1EA88376D61BA00993080A3*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_End_m491EC9214C6D6CF568CEEA10222A5F568047CE21 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.VariableAssignment>::get_Count()
inline int32_t Dictionary_2_get_Count_mB3D8551E03496E45CB5D68058A63A3DFEFE6F35B (Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_Done_mB19ECD1047B9145F4421E0186A7840BEB532FD09 (const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Story::.ctor(Ink.Runtime.Container,System.Collections.Generic.List`1<Ink.Runtime.ListDefinition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story__ctor_m227850ACF45FE0868365FF3884EFB809BDE8434A (Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___contentContainer0, List_1_tEAA34814BB98964FD8B62D24AF030A7829378907* ___lists1, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object::set_runtimeObject(Ink.Runtime.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_set_runtimeObject_m57463274E68C0F3DC1CB6788CD8DD795801B7FE8_inline (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Story::FlattenContainersIn(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_FlattenContainersIn_m6831DB8B004021EA48FE64AF521F8FC72D28A64E (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container0, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Story::ResetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_ResetState_m35B852B571E1F3CB65A4CDD208CEE21D3E359C9B (Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListDefinition>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m95EB4406228F27D45F9EEF25AFF40A9FF2577C4E (Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* __this, String_t* ___key0, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398*, String_t*, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Ink.Parsed.ListElementDefinition Ink.Parsed.ListDefinition::ItemNamed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* ListDefinition_ItemNamed_mE935A909A9DC7F9063B349E85F9137234AA5031F (ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* __this, String_t* ___itemName0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ListDefinition>::GetEnumerator()
inline Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844 Dictionary_2_GetEnumerator_m4B109CA28C72E6EA470C7DC36B63B66EF9204A25 (Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844 (*) (Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.ListDefinition>::Dispose()
inline void Enumerator_Dispose_mD7214F14C1BAA998274190AC37240F40A399C28F (Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.ListDefinition>::get_Current()
inline KeyValuePair_2_tF6D8142A0F6DC48B7EC7A1321A329733A7B86266 Enumerator_get_Current_m711969C4E360FC0725DE03CBA64788D763F715B4_inline (Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF6D8142A0F6DC48B7EC7A1321A329733A7B86266 (*) (Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,Ink.Parsed.ListDefinition>::get_Value()
inline ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* KeyValuePair_2_get_Value_mFD10793F7A8114D83CDAD42FA058A63DB117AB6F_inline (KeyValuePair_2_tF6D8142A0F6DC48B7EC7A1321A329733A7B86266* __this, const RuntimeMethod* method)
{
	return ((  ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* (*) (KeyValuePair_2_tF6D8142A0F6DC48B7EC7A1321A329733A7B86266*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.ListDefinition>::MoveNext()
inline bool Enumerator_MoveNext_mCD8574B18EAD84CC0914D6D0C6D73F3BFC0D8E90 (Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Collections.Generic.List`1<Ink.Runtime.Object> Ink.Runtime.Container::get_content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Runtime.Object>::GetEnumerator()
inline Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A List_1_GetEnumerator_mBB5A38567E85BD23F19A6F563A9325AAB9FFFB2F (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A (*) (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Runtime.Object>::Dispose()
inline void Enumerator_Dispose_m93AA6E5260B31B0E4A015483CD40732F6079367E (Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Runtime.Object>::get_Current()
inline Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* Enumerator_get_Current_mC575015244897CC52C360CCFCD80B4F917A2DC37_inline (Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A* __this, const RuntimeMethod* method)
{
	return ((  Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* (*) (Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean Ink.Runtime.Object::op_Implicit(Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3AA10F430AAFC09D12BF9F4DB10404F2C4527CCC (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Ink.Runtime.Container>::Add(T)
inline bool HashSet_1_Add_mB13C4C374F94EB008D025E53507C435EEB66B255 (HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586*, Container_t74302BC1028974B0A346A43F334AECB681D79579*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Runtime.Object>::MoveNext()
inline bool Enumerator_MoveNext_mDBC2140ABF4BFE23ACFEC8FC7084261C08F60DF6 (Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.INamedContent> Ink.Runtime.Container::get_namedContent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49* Container_get_namedContent_m887ECF350132F5C92388DCC11BDD9BF07267C86A_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.INamedContent>::GetEnumerator()
inline Enumerator_tC49652DEA3A38051A5EB7023060F5273631F66F5 Dictionary_2_GetEnumerator_m3F3537AB1C5407F28DCE82734A44B9867552F677 (Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC49652DEA3A38051A5EB7023060F5273631F66F5 (*) (Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Runtime.INamedContent>::Dispose()
inline void Enumerator_Dispose_m6A3B34030CCB4372A88686FD98B98559C7802874 (Enumerator_tC49652DEA3A38051A5EB7023060F5273631F66F5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC49652DEA3A38051A5EB7023060F5273631F66F5*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Runtime.INamedContent>::get_Current()
inline KeyValuePair_2_t5E4CC453E09A531E3B06120F018B9F3132190A81 Enumerator_get_Current_m32E970B18F5B70BFE0C4A1913DAA8875E50D8F7E_inline (Enumerator_tC49652DEA3A38051A5EB7023060F5273631F66F5* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t5E4CC453E09A531E3B06120F018B9F3132190A81 (*) (Enumerator_tC49652DEA3A38051A5EB7023060F5273631F66F5*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,Ink.Runtime.INamedContent>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_mF2BDBBCCE3A7432DD1B1E16A68584F08AA0EB138_inline (KeyValuePair_2_t5E4CC453E09A531E3B06120F018B9F3132190A81* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t5E4CC453E09A531E3B06120F018B9F3132190A81*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Runtime.INamedContent>::MoveNext()
inline bool Enumerator_MoveNext_m6B49178CB9527B57DB94E5731B3E3F92DFE48DDE (Enumerator_tC49652DEA3A38051A5EB7023060F5273631F66F5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC49652DEA3A38051A5EB7023060F5273631F66F5*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<Ink.Runtime.Container>::GetEnumerator()
inline Enumerator_t2F1BB79EEB703736F808D627A13B5D97A1C96271 HashSet_1_GetEnumerator_m14D518BFE7CB52396D67A492025306F7D6FCEB03 (HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2F1BB79EEB703736F808D627A13B5D97A1C96271 (*) (HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Ink.Runtime.Container>::Dispose()
inline void Enumerator_Dispose_mA0ADD22FB2ACC3151922FA044E9938ED618FFE78 (Enumerator_t2F1BB79EEB703736F808D627A13B5D97A1C96271* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2F1BB79EEB703736F808D627A13B5D97A1C96271*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<Ink.Runtime.Container>::get_Current()
inline Container_t74302BC1028974B0A346A43F334AECB681D79579* Enumerator_get_Current_m53028144BDF8B628A22F679031E7BCE3BBAB6078_inline (Enumerator_t2F1BB79EEB703736F808D627A13B5D97A1C96271* __this, const RuntimeMethod* method)
{
	return ((  Container_t74302BC1028974B0A346A43F334AECB681D79579* (*) (Enumerator_t2F1BB79EEB703736F808D627A13B5D97A1C96271*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Void Ink.Parsed.Story::TryFlattenContainer(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_TryFlattenContainer_m1ED5C4A74B839ADC1188F3526EAD7C219CE56F3B (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Ink.Runtime.Container>::MoveNext()
inline bool Enumerator_MoveNext_mFB93B9DD5E695BD31507F275338EA1AB8E0A17B8 (Enumerator_t2F1BB79EEB703736F808D627A13B5D97A1C96271* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2F1BB79EEB703736F808D627A13B5D97A1C96271*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Ink.Runtime.INamedContent>::get_Count()
inline int32_t Dictionary_2_get_Count_m851B53831C1D952866C76EEAC18EF50F93AB791A (Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Boolean Ink.Runtime.Container::get_hasValidName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Container_get_hasValidName_m97036F7247EFD720300054CD8E700F2B1DB4A076 (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Ink.Runtime.Container>::Contains(T)
inline bool HashSet_1_Contains_mF4C2662792DE761C68D2A181E9121E422DC1EFAC (HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586*, Container_t74302BC1028974B0A346A43F334AECB681D79579*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// Ink.Runtime.Object Ink.Runtime.Object::get_parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* Object_get_parent_m9AF0B36330B6034B93000874D98617B032E6183D_inline (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Runtime.Object>::IndexOf(T)
inline int32_t List_1_IndexOf_m1C061628DB61D0C27E07DC5E390C2117383F62D2 (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63*, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Runtime.Object>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mDC57B7FA373AF75CDE1E30C27D41F0F530DE9D2D (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// Ink.Runtime.DebugMetadata Ink.Runtime.Object::get_ownDebugMetadata()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* Object_get_ownDebugMetadata_m5C84AE212A83FD7AE37E573867BF6360281467EE_inline (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Object::set_parent(Ink.Runtime.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_set_parent_m313E7123FE19E7C089F5856A0B9AB83D092AF2FF_inline (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.Object::set_debugMetadata(Ink.Runtime.DebugMetadata)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_set_debugMetadata_mEF4D1395140C148FF2206F19E4A2AB9DB0A6F825_inline (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* __this, DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Ink.ErrorHandler::Invoke(System.String,Ink.ErrorType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorHandler_Invoke_m79D2EBC45964D545F88193253C28EB1C67FEB2E2_inline (ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728* __this, String_t* ___message0, int32_t ___type1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ExternalDeclaration>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m700822A334A40D10260E85DC795A4F8DCAEB2C36 (Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.String Ink.Parsed.ExternalDeclaration::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalDeclaration_get_name_m3BF1B7E988044FC4FECD56BE9EEF8ACB8D27D67B (ExternalDeclaration_t6A600B5552FFC2082997474D7E5256DFA8782367* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.ExternalDeclaration>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mFFB77ACE82551B167A900FA09E9F5898B44F9D8D (Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0* __this, String_t* ___key0, ExternalDeclaration_t6A600B5552FFC2082997474D7E5256DFA8782367* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0*, String_t*, ExternalDeclaration_t6A600B5552FFC2082997474D7E5256DFA8782367*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mE2C82785F81B842321200CA571789E2BA8972976 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Story::IsReservedKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Story_IsReservedKeyword_m040A09DD2A5FC692D830E777669CA96560130A18 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String Ink.Parsed.FlowBase::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FlowBase_get_name_m7039F76999F2B76C702FA8DDE92FBD86BC58D97F (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.FunctionCall::IsBuiltIn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FunctionCall_IsBuiltIn_mFF0A2C5A4AEC60C019F4691DB6DCA57C83091B33 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Story::NameConflictError(Ink.Parsed.Object,System.String,Ink.Parsed.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_NameConflictError_mC11E05EB554082B930A521510DC1F3CF6390361B (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___obj0, String_t* ___name1, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___existingObj2, String_t* ___typeNameToPrint3, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,Ink.Parsed.ListDefinition>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC2DE5CEAAF0F24570A1BA7E14675B32B40526360_inline (KeyValuePair_2_tF6D8142A0F6DC48B7EC7A1321A329733A7B86266* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tF6D8142A0F6DC48B7EC7A1321A329733A7B86266*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.ListElementDefinition>::GetEnumerator()
inline Enumerator_tD9C45AEA0CD1E79572A7164FD177676AEB7EBE53 List_1_GetEnumerator_m7CD99F6C4892332B0D870EFD09FF048D3C3924BC (List_1_t5616402C899551039E0CA5216EA28E3B5E8B4010* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD9C45AEA0CD1E79572A7164FD177676AEB7EBE53 (*) (List_1_t5616402C899551039E0CA5216EA28E3B5E8B4010*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ListElementDefinition>::Dispose()
inline void Enumerator_Dispose_m585A6A954709BD6CC8800FB71676F68D465292EE (Enumerator_tD9C45AEA0CD1E79572A7164FD177676AEB7EBE53* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD9C45AEA0CD1E79572A7164FD177676AEB7EBE53*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ListElementDefinition>::get_Current()
inline ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* Enumerator_get_Current_m9630323BCC31A88964106965722CCA1FDA4DC22F_inline (Enumerator_tD9C45AEA0CD1E79572A7164FD177676AEB7EBE53* __this, const RuntimeMethod* method)
{
	return ((  ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* (*) (Enumerator_tD9C45AEA0CD1E79572A7164FD177676AEB7EBE53*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String Ink.Parsed.ListElementDefinition::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ListElementDefinition_get_name_m30CB7F2D47D10EE4754E57C4BB59BA679E44B77B (ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.ListElementDefinition>::MoveNext()
inline bool Enumerator_MoveNext_mC647D2F1D2FCB04ABCC6E2C49C34DA886A411FFB (Enumerator_tD9C45AEA0CD1E79572A7164FD177676AEB7EBE53* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD9C45AEA0CD1E79572A7164FD177676AEB7EBE53*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.VariableAssignment>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m01BBC460329BB84348DB03F5F79D91AF34ACD25F (Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0* __this, String_t* ___key0, VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0*, String_t*, VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Ink.Parsed.Path::.ctor(Ink.Parsed.Identifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path__ctor_m628CF348ABC9C3AB26F4D235A5E212BB05233A47 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___ambiguousName0, const RuntimeMethod* method) ;
// Ink.Parsed.Object Ink.Parsed.Path::ResolveFromContext(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Path_ResolveFromContext_m2E7745228A2131E2474943DDB9BE94219BE1AF60 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___context0, const RuntimeMethod* method) ;
// Ink.Parsed.FlowBase Ink.Parsed.Object::ClosestFlowBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* Object_ClosestFlowBase_mFBB185F20F260315B894395561CE129F351600AC (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.FlowBase::get_hasParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlowBase_get_hasParameters_m027F45A42DE762AE37A79C6B41ADFE58BF73E63C (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Ink.Parsed.FlowBase/Argument> Ink.Parsed.FlowBase::get_arguments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5A7C284E404753F1786689E097CE59A152638444* FlowBase_get_arguments_m1EF87837594B7A14507C461AE7EB4B685F61EB47_inline (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.FlowBase/Argument>::GetEnumerator()
inline Enumerator_t85ABE7A908BBD2336D59882D900E9D4CBD6183B1 List_1_GetEnumerator_m08A65C5E03A152020EA23579AED6CCE81B6D8B75 (List_1_t5A7C284E404753F1786689E097CE59A152638444* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t85ABE7A908BBD2336D59882D900E9D4CBD6183B1 (*) (List_1_t5A7C284E404753F1786689E097CE59A152638444*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.FlowBase/Argument>::Dispose()
inline void Enumerator_Dispose_m8366584410DF9635633C8684F575FA535CDF78A1 (Enumerator_t85ABE7A908BBD2336D59882D900E9D4CBD6183B1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t85ABE7A908BBD2336D59882D900E9D4CBD6183B1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.FlowBase/Argument>::get_Current()
inline Argument_t57F624390C64DEA5183C13B31DE384F707B17021* Enumerator_get_Current_m9153940C6F59F062F69715809C71D5A3D40A1D0E_inline (Enumerator_t85ABE7A908BBD2336D59882D900E9D4CBD6183B1* __this, const RuntimeMethod* method)
{
	return ((  Argument_t57F624390C64DEA5183C13B31DE384F707B17021* (*) (Enumerator_t85ABE7A908BBD2336D59882D900E9D4CBD6183B1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Ink.Parsed.Identifier Ink.Parsed.FlowBase::get_identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* FlowBase_get_identifier_m4690D9A6AAB405E233688C9261A4F0BB19BFC105_inline (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.FlowBase/Argument>::MoveNext()
inline bool Enumerator_MoveNext_m592DA1580FDC9900A7E27B34AB105B28CCAEAE37 (Enumerator_t85ABE7A908BBD2336D59882D900E9D4CBD6183B1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t85ABE7A908BBD2336D59882D900E9D4CBD6183B1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Ink.Parsed.Expression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expression__ctor_mBA2907DB4D7FEA90D9A52A1C9820CDBC72DFB2AD (Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object::AddContent<Ink.Parsed.Object>(System.Collections.Generic.List`1<T>)
inline void Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___listContent0, const RuntimeMethod* method)
{
	((  void (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, const RuntimeMethod*))Object_AddContent_TisRuntimeObject_m602F0E148C596C72999222ED0EA4E9C0779BFD6E_gshared)(__this, ___listContent0, method);
}
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::BeginString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_BeginString_m5BAEFED246E194673F543F04ED89AAB6F41072AD (const RuntimeMethod* method) ;
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::EndString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_EndString_m6789630C3741A32BE7882853CE46C620ABA6AD2E (const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.StringExpression::get_isSingleString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringExpression_get_isSingleString_m7A6128F11CA9543349BD832F63FC453C02242AF7 (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Text::set_text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Text_set_text_m174E6D93DD8C69932A47F52A61E8A97CAD231058_inline (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Ink.Parsed.Text::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Text_get_text_m14F6F4C8E14BAD266FF794A86DCFA15E89964103_inline (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.StringValue::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValue__ctor_m84F62339FA8008253A9A001E433CA1D5D82CA19E (StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2* __this, String_t* ___str0, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::AddContent<Ink.Parsed.Divert>(T)
inline Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* Object_AddContent_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_mBC95D48BAC65CC876001759F3105E180FAC26E32 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* ___subContent0, const RuntimeMethod* method)
{
	return ((  Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186*, const RuntimeMethod*))Object_AddContent_TisRuntimeObject_m88FD0921CF023EC8A98CA0158EB868EBECB6273F_gshared)(__this, ___subContent0, method);
}
// Ink.Parsed.Divert Ink.Parsed.TunnelOnwards::get_divertAfter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8_inline (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Ink.Parsed.Expression> Ink.Parsed.Divert::get_arguments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* Divert_get_arguments_m835B3FA82AB94C9D96B4472519BE0C4776F6FD5B_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Parsed.Expression>::get_Count()
inline int32_t List_1_get_Count_m28F4FD8191AC70A79F88724B9BD21145FF88B3A8_inline (List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Ink.Runtime.Object>::get_Item(System.Int32)
inline Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37 (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* (*) (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// Ink.Runtime.ControlCommand/CommandType Ink.Runtime.ControlCommand::get_commandType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControlCommand_get_commandType_mF43D077F555FA63FF4A1146790A56346647DBE8A_inline (ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Runtime.Object>::get_Count()
inline int32_t List_1_get_Count_m2EF709723E8742028D2BF885FA5335303F0B0282_inline (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Ink.Runtime.DivertTargetValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivertTargetValue__ctor_m1214D460147B45F9850424DA9BF5D34306720F06 (DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* __this, const RuntimeMethod* method) ;
// Ink.Runtime.ControlCommand Ink.Runtime.ControlCommand::PopTunnel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* ControlCommand_PopTunnel_mF958B8E15026C2EB84256FF06B8494FB5D05C3E2 (const RuntimeMethod* method) ;
// Ink.Parsed.Object Ink.Parsed.Divert::get_targetContent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Divert_get_targetContent_m2A18F6F480779045E0B34983F78C0ADFE635D21C_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.DivertTargetValue::set_targetPath(Ink.Runtime.Path)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivertTargetValue_set_targetPath_m443285EA0636089C577FCD0240756CB8F7A9FEA3 (DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* __this, Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___value0, const RuntimeMethod* method) ;
// Ink.Parsed.Identifier Ink.Parsed.VariableAssignment::get_variableIdentifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* VariableAssignment_get_variableIdentifier_m5E36193B2BC86B48D2567C6EA389B4C5FE67CB9A_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.VariableAssignment::get_isNewTemporaryDeclaration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.VariableAssignment::set_variableIdentifier(Ink.Parsed.Identifier)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_variableIdentifier_m16684EEAA53B0C8C0A31B1072977CC5C115A35E3_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.VariableAssignment::set_expression(Ink.Parsed.Expression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_expression_m4CE2FDFCA9A76FEF3E8C76E0B93FE7CE9705AD48_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___value0, const RuntimeMethod* method) ;
// T Ink.Parsed.Object::AddContent<Ink.Parsed.ListDefinition>(T)
inline ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* Object_AddContent_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_m6169C2A2781ABFF41FF6C9D08702D6F37EC74523 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___subContent0, const RuntimeMethod* method)
{
	return ((  ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65*, const RuntimeMethod*))Object_AddContent_TisRuntimeObject_m88FD0921CF023EC8A98CA0158EB868EBECB6273F_gshared)(__this, ___subContent0, method);
}
// System.Void Ink.Parsed.VariableAssignment::set_listDefinition(Ink.Parsed.ListDefinition)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_listDefinition_m7675DC40AF4DAFF3918BE94FF4DD9190955AF87A_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.VariableAssignment::set_isGlobalDeclaration(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_isGlobalDeclaration_m3B705D1B9A8EC0FB9C5AB5B2B80B690ACD50D86D_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, bool ___value0, const RuntimeMethod* method) ;
// Ink.Parsed.Story Ink.Parsed.Object::get_story()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* Object_get_story_mC48C490DCCF22AEC1CC28FEA37BDD22AA31C8B1C (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.FlowBase::TryAddNewVariableDeclaration(Ink.Parsed.VariableAssignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlowBase_TryAddNewVariableDeclaration_mC160F28B3C771CE96BFF6AD1F0DA0DB41D5B2F0B (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* ___varDecl0, const RuntimeMethod* method) ;
// System.String Ink.Parsed.VariableAssignment::get_variableName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.VariableAssignment::get_isDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VariableAssignment_get_isDeclaration_m303120F48FE6770B5B59269240F63F40631554C5 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Story::CheckForNamingCollisions(Ink.Parsed.Object,Ink.Parsed.Identifier,Ink.Parsed.Story/SymbolType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_CheckForNamingCollisions_m13238A42D40F53489354F276C303D64C2D2AA2F6 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___obj0, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___identifier1, uint32_t ___symbolType2, String_t* ___typeNameOverride3, const RuntimeMethod* method) ;
// Ink.Parsed.FlowBase/VariableResolveResult Ink.Parsed.FlowBase::ResolveVariableWithName(System.String,Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 FlowBase_ResolveVariableWithName_m017DF795D3DA6FF4644793B10ED8B6386171E2C0 (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, String_t* ___varName0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___fromNode1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.Expression>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m0F6C37D27FD2753844BDF8E50AE219156F3DD897 (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean Ink.Runtime.Object::op_Inequality(Ink.Runtime.Object,Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m484EC06D033A2E53F169523E7CB9B1B2725D7BD7 (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___a0, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___b1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Ink.Parsed.VariableReference::get_path()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mE405D676C6881553258F8BAD40A20B462D611068 (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<Ink.Parsed.Identifier>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* Enumerable_First_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m5425AF7896889A0D84459D56ACB1885279425F5A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC0E9A81793F65BF8BEDFAAAD5B2401ADB054DD5A_gshared)(___source0, method);
}
// System.Void System.Func`3<Ink.Runtime.DebugMetadata,Ink.Parsed.Identifier,Ink.Runtime.DebugMetadata>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mD9CB1B1FF461F43FEBEB5BE74B1C742AD72B080D (Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared)(__this, ___object0, ___method1, method);
}
// TAccumulate System.Linq.Enumerable::Aggregate<Ink.Parsed.Identifier,Ink.Runtime.DebugMetadata>(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
inline DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* Enumerable_Aggregate_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisDebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01_mD582FBD8810F5558D7B1085272C9DB034DAF0E64 (RuntimeObject* ___source0, DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ___seed1, Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* ___func2, const RuntimeMethod* method)
{
	return ((  DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* (*) (RuntimeObject*, DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01*, Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED*, const RuntimeMethod*))Enumerable_Aggregate_TisRuntimeObject_TisRuntimeObject_mB8EE5BC99A611E57CA705344C56A84E9D7072F0A_gshared)(___source0, ___seed1, ___func2, method);
}
// System.Void Ink.Parsed.Identifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Identifier__ctor_m9005D97AF26A8FF60030DE8B472F085F4FABEE84 (Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
// System.Void Ink.Parsed.VariableReference::set_path(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_path_m2987340812E384B0F12578542E50B0CEFABDEAB0_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Join<Ink.Parsed.Identifier>(System.String,System.Collections.Generic.IEnumerable`1<T>)
inline String_t* String_Join_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_mBA08869463F19FC9EB5B34368BB75D9936C07DFD (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisRuntimeObject_m7F966936BE15193A65D544C972FAF2D35A83A221_gshared)(___separator0, ___values1, method);
}
// System.Void Ink.Parsed.VariableReference::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_name_mCA878128BFBEF54B19531F832CD1FB62A617ED65_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Ink.Parsed.VariableReference::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VariableReference_get_name_mE6D2556C23D83C040F82E27DE755F7D6FBD90E0F_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Expression::GenerateConstantIntoContainer(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expression_GenerateConstantIntoContainer_mEC1F77A0C77E93571A23830C1AFFC661A5FD1354 (Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container0, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.VariableReference::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference__ctor_mEFCD8F4CFF06B6A3F076B4688E09AC5DE0786718 (VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// Ink.Parsed.ListElementDefinition Ink.Parsed.Story::ResolveListItem(System.String,System.String,Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* Story_ResolveListItem_m857290E9E49BEC424C7D3A54E6171F11DE081302 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, String_t* ___listName0, String_t* ___itemName1, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___source2, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Path::.ctor(System.Collections.Generic.List`1<Ink.Parsed.Identifier>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path__ctor_m1FA0634AFC2CCF3487EE1E3F27F2236655C8AB25 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* ___components0, const RuntimeMethod* method) ;
// System.Boolean Ink.Runtime.Object::op_Equality(Ink.Runtime.Object,Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB7B1691F79F79E2A3FECC61D568B160EC9CFAE6B (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___a0, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___b1, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.VariableReference::set_pathForCount(Ink.Runtime.Path)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_pathForCount_m3488741E05F86E09B7A082704610A095EF0C7016_inline (VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* __this, Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Runtime.VariableReference::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_name_mD0F82FBF6521B061476F855E565D665D03BADF29_inline (VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.FlowBase::get_isFunction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlowBase_get_isFunction_m89BD3D4FC104434B4EB5091C121C29C3E817D30F_inline (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object::Warning(System.String,Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Warning_m9F035739B3D45548FE13DD8787B33B931836F50A (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, String_t* ___message0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___source1, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.VariableReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m99983106CE4D2AC262F8BD9DC13B7823049F8684 (U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* __this, const RuntimeMethod* method) ;
// Ink.Runtime.DebugMetadata Ink.Runtime.DebugMetadata::Merge(Ink.Runtime.DebugMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* DebugMetadata_Merge_m77879AC51F0FFC3021B79DEEBB6EA37DE53923AC (DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* __this, DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ___dm0, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Weave::IsGlobalDeclaration(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weave_IsGlobalDeclaration_m2F27AA5E1B93C4B938128743ECD736C5C69F43A3 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___obj0, const RuntimeMethod* method) ;
// Ink.Parsed.Object Ink.Parsed.Weave::get_lastParsedSignificantObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Weave_get_lastParsedSignificantObject_m1B04EDF689CE2860594576D416B2EBC60C55423B (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// System.Int32 Ink.Parsed.Weave::DetermineBaseIndentationFromContent(System.Collections.Generic.List`1<Ink.Parsed.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weave_DetermineBaseIndentationFromContent_m938BFF91272784586BFBB6F194284632D19CD604 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___contentList0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave::set_baseIndentIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weave_set_baseIndentIndex_m6F3D26B4F215BB48218CFE3E84BD0B26532B98B1_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave::ConstructWeaveHierarchyFromIndentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ConstructWeaveHierarchyFromIndentation_m347CCA2577E3B2907C247FAD50CB1DD71E5C259D (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.IWeavePoint>::.ctor(System.Object,System.IntPtr)
inline void FindQueryFunc_1__ctor_m50A841D0C50D66E3DBEFCD964A9471DCF3A8C678 (FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40*, RuntimeObject*, intptr_t, const RuntimeMethod*))FindQueryFunc_1__ctor_m0A3323A942DFF84A818F2D4BCF3101FEEB1ED7EF_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<T> Ink.Parsed.Object::FindAll<Ink.Parsed.IWeavePoint>(Ink.Parsed.Object/FindQueryFunc`1<T>)
inline List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* Object_FindAll_TisIWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_m7F252A913726163DB529A7C7F372736A522BD2A6 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* ___queryFunc0, const RuntimeMethod* method)
{
	return ((  List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40*, const RuntimeMethod*))Object_FindAll_TisRuntimeObject_m368416BE935DDD2F291D003D061DBAAC99383FB9_gshared)(__this, ___queryFunc0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint>::.ctor()
inline void Dictionary_2__ctor_m09D0B05560B270A9FADCF6E5D9C0736FA6CB8BAC (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::GetEnumerator()
inline Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87 (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.IWeavePoint>::Dispose()
inline void Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A (Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.IWeavePoint>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_inline (Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826 (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* __this, String_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mAA08D8B1D90E5E645461227F453508FF161AB975 (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.IWeavePoint>::MoveNext()
inline bool Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39 (Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 Ink.Parsed.Weave::get_baseIndentIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Weave_get_baseIndentIndex_m98068082F6788CEF08908CCDF9E62F4C4938839D_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<Ink.Parsed.Object>::GetRange(System.Int32,System.Int32)
inline List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* List_1_GetRange_mEBA06D625B0F423AB20F3D64D0494EBB300C103D (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, int32_t, int32_t, const RuntimeMethod*))List_1_GetRange_m8F5CCE68284D0E231F22C5C2DBBA51B856D70F25_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Object>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m5CF433B308EA5F7DBC3D30C53F2536C2F47F8067 (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared)(__this, ___index0, ___count1, method);
}
// T Ink.Parsed.Object::InsertContent<Ink.Parsed.Weave>(System.Int32,T)
inline Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* Object_InsertContent_TisWeave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_m2F8400F9F5E13FE2D2EF334CA9462E8CE3F86715 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, int32_t ___index0, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* ___subContent1, const RuntimeMethod* method)
{
	return ((  Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, int32_t, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*, const RuntimeMethod*))Object_InsertContent_TisRuntimeObject_m6278B89820234B7EC5CE91674E04EC2E517C4ADC_gshared)(__this, ___index0, ___subContent1, method);
}
// System.Void Ink.Parsed.Weave::set_currentContainer(Ink.Runtime.Container)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weave_set_currentContainer_m726341F02CE4FBBF970874A494486A48190F7C23_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::.ctor()
inline void List_1__ctor_m60A33E724150BD07A6081520E30BCBB4D524DFF8 (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve>::.ctor()
inline void List_1__ctor_mE857C294F1FDC1B1EB7A48BD4C4B118802AD68F8 (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Ink.Parsed.Weave::AddRuntimeForWeavePoint(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddRuntimeForWeavePoint_m6DEEC1E96DDB0A13DBF6DB29CEAF545C28CEDB08 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___weavePoint0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave::AddRuntimeForNestedWeave(Ink.Parsed.Weave)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddRuntimeForNestedWeave_m92A81F04518DC007BED67ACD094084B91BCC1F06 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* ___nestedResult0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF67AEA92CB96A7EB9B237EA52FC2B38AA9B16BBB (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// System.Void Ink.Parsed.Weave::AddGeneralRuntimeContent(Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddGeneralRuntimeContent_mFCCE215692B86EC17515E4331F2B7ED81042BBC6 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___content0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave::PassLooseEndsToAncestors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_PassLooseEndsToAncestors_m839B4E4D82628F01520F428FD2012F1F87D969AC (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// Ink.Runtime.Container Ink.Parsed.Gather::get_runtimeContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Gather_get_runtimeContainer_m13E079CEF8E544DF6A4B0C0B6241E5DD120FB715 (Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* __this, const RuntimeMethod* method) ;
// System.String Ink.Parsed.Gather::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Gather_get_name_m86E8FB66407D71DEAC7AD878AA2F2EBDEDD094FA (Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* __this, const RuntimeMethod* method) ;
// Ink.Runtime.Container Ink.Parsed.Weave::get_currentContainer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// System.Int32 Ink.Parsed.Gather::get_indentationDepth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Gather_get_indentationDepth_m40F76E3F69111BE1085CFE0B79370156045C94E4_inline (Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave/GatherPointToResolve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GatherPointToResolve__ctor_mFFE076E7B088D6AF79E86D10264A6E2387C69ED2 (GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve>::Add(T)
inline void List_1_Add_mCA442648CC7166D2F1F4C38D743E6C1E4D9D59C6_inline (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* __this, GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7*, GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::Clear()
inline void List_1_Clear_mB11A36DC9CB485BE0C7EA0E338F61ED2F4907E00_inline (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Ink.Parsed.Weave::AddRuntimeForGather(Ink.Parsed.Gather)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddRuntimeForGather_m4CE16001900F51C5A06C0AE87C5284C903B0AEEF (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* ___gather0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::Remove(T)
inline bool List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22 (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// Ink.Runtime.Container Ink.Parsed.Choice::get_innerContentContainer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Choice_get_innerContentContainer_m9C30F03A0EFE2BEE3AC920D6F39B50E84127C3F3_inline (Choice_t36174EC808231C52E43CE7768134739559499893* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Weave::WeavePointHasLooseEnd(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weave_WeavePointHasLooseEnd_m86BFC84415A3BB79B512FA7B60845FE92D80C03C (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___weavePoint0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::Add(T)
inline void List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_inline (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Ink.Runtime.Container Ink.Parsed.Weave::get_rootContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Weave_get_rootContainer_mF7051B9D57FAE9724FFA81B7760DABEE4A7330E5 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::get_Count()
inline int32_t List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_inline (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_mD7C86426165B299E1AF57E1CC3ADF4B9B0EDB97D (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Ink.Parsed.Weave::ReceiveLooseEnd(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ReceiveLooseEnd_mCAAB5B4208181C3DFFA3FBC9CD8E7D11F23A3256 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___childWeaveLooseEnd0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Ink.Parsed.IWeavePoint>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mDAD0B657BF66CA49FF92D46A4F1B5DE663A1932D (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void Ink.Parsed.Weave/BadTerminationHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadTerminationHandler__ctor_mAD3499682FC2CD65E716A6714C8EBD32F3C0C1D1 (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave::ValidateTermination(Ink.Parsed.Weave/BadTerminationHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ValidateTermination_mC042A95722BFF6A02755640F589BA1487AE94849 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* ___badTerminationHandler0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.Weave/GatherPointToResolve>::GetEnumerator()
inline Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453 List_1_GetEnumerator_mAEED457850E75DD1B9ABC47B1937E3ECF5056AE0 (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453 (*) (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Weave/GatherPointToResolve>::Dispose()
inline void Enumerator_Dispose_mCE863A998546EAD25CFF5AA7DB1FD2BDA33CFFB5 (Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Weave/GatherPointToResolve>::get_Current()
inline GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* Enumerator_get_Current_mAE2D0F63AC021CDF331A873DB4D4D07C212C86FC_inline (Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453* __this, const RuntimeMethod* method)
{
	return ((  GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* (*) (Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.Weave/GatherPointToResolve>::MoveNext()
inline bool Enumerator_MoveNext_mA226D5AC035B8AA46A1A5B0AD87D66B4747F85C6 (Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Ink.Parsed.Weave::CheckForWeavePointNamingCollisions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_CheckForWeavePointNamingCollisions_m3E4BA051D8AD9D9B38568439E424B6C562FA61CE (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29__ctor_mE1960E7B1C2FB83975604BBA11B328B6279E88F5 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<Ink.Parsed.Object> Ink.Parsed.Weave::ContentThatFollowsWeavePoint(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Weave_ContentThatFollowsWeavePoint_m2CB425112D0A7BA7FC3E83215F095C70A98B9273 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___weavePoint0, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave::ValidateFlowOfObjectsTerminates(System.Collections.Generic.IEnumerable`1<Ink.Parsed.Object>,Ink.Parsed.Object,Ink.Parsed.Weave/BadTerminationHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ValidateFlowOfObjectsTerminates_m7239B14D782F7304DD3D0726A3A8BDB972101757 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___objFlow0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___defaultObj1, BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* ___badTerminationHandler2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> Ink.Parsed.Object::FindAll<Ink.Parsed.Choice>(Ink.Parsed.Object/FindQueryFunc`1<T>)
inline List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C* Object_FindAll_TisChoice_t36174EC808231C52E43CE7768134739559499893_mFB83BCB5BDDDC5DF66331F766264D20DA55A29FF (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_t336B67E9DF3943E1288CC482ACB0BBF4A96D7199* ___queryFunc0, const RuntimeMethod* method)
{
	return ((  List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, FindQueryFunc_1_t336B67E9DF3943E1288CC482ACB0BBF4A96D7199*, const RuntimeMethod*))Object_FindAll_TisRuntimeObject_m368416BE935DDD2F291D003D061DBAAC99383FB9_gshared)(__this, ___queryFunc0, method);
}
// System.Int32 System.Collections.Generic.List`1<Ink.Parsed.Choice>::get_Count()
inline int32_t List_1_get_Count_m3729CD7808E34BFD9068F3A791D9D00B90282588_inline (List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Ink.Parsed.Object/FindQueryFunc`1<Ink.Parsed.Divert>::.ctor(System.Object,System.IntPtr)
inline void FindQueryFunc_1__ctor_m010478D5BA71A33518AA87D7DADB929919D9048F (FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911*, RuntimeObject*, intptr_t, const RuntimeMethod*))FindQueryFunc_1__ctor_m0A3323A942DFF84A818F2D4BCF3101FEEB1ED7EF_gshared)(__this, ___object0, ___method1, method);
}
// T Ink.Parsed.Object::Find<Ink.Parsed.Divert>(Ink.Parsed.Object/FindQueryFunc`1<T>)
inline Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* Object_Find_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_m745B0DEECFF6B651C7BC919A569845794345ED5B (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* ___queryFunc0, const RuntimeMethod* method)
{
	return ((  Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911*, const RuntimeMethod*))Object_Find_TisRuntimeObject_m432376B603D8571C2E9C1CF7CA2030D12E6D8A44_gshared)(__this, ___queryFunc0, method);
}
// T Ink.Parsed.Object::Find<Ink.Parsed.TunnelOnwards>(Ink.Parsed.Object/FindQueryFunc`1<T>)
inline TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* Object_Find_TisTunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450_mBD53B00353D1047ED928ED4004D14DCAE7E8D31C (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, FindQueryFunc_1_tD49158339C9E80306F093B9B3FFDC0266098B984* ___queryFunc0, const RuntimeMethod* method)
{
	return ((  TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* (*) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, FindQueryFunc_1_tD49158339C9E80306F093B9B3FFDC0266098B984*, const RuntimeMethod*))Object_Find_TisRuntimeObject_m432376B603D8571C2E9C1CF7CA2030D12E6D8A44_gshared)(__this, ___queryFunc0, method);
}
// System.Void Ink.Parsed.Weave/BadTerminationHandler::Invoke(Ink.Parsed.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_inline (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Divert::get_isThread()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Divert_get_isThread_m5AF57D150FA6189A096F00149ED4BB4ADC1D3F73_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Divert::get_isTunnel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Divert_get_isTunnel_m5F0B18A5D8A9CF7F751CCAE63840442D64E78EF0_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) ;
// System.Boolean Ink.Parsed.Divert::get_isFunctionCall()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Divert_get_isFunctionCall_m795B07F1FA11C85E330D67D0C5E93157BEC3BB13_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.Object::get_ancestry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* Object_get_ancestry_m8C64142AFC7746A69D598AE036ADB55C1CC560D4 (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Ink.Parsed.IWeavePoint>::GetEnumerator()
inline Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1 Dictionary_2_GetEnumerator_m58606EF7E646E6EC6F77966DDCC3DFEE5425C416 (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1 (*) (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.IWeavePoint>::Dispose()
inline void Enumerator_Dispose_m3D695EEE7F8DBADB4E29925482335EFD8D5FF76C (Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.IWeavePoint>::get_Current()
inline KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349 Enumerator_get_Current_m987ADC83E21F27DE3A5E98DA01634843FCA83551_inline (Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349 (*) (Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,Ink.Parsed.IWeavePoint>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mD222AD5CAEECD12BE8311BAC449090BBC57EF1DA_inline (KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,Ink.Parsed.IWeavePoint>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m7919590FC8730088240AC8626E9A64EA1F12CC6B_inline (KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Ink.Parsed.FlowBase>::GetEnumerator()
inline Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA List_1_GetEnumerator_mB0447A1912B57CEC4309668380290C854E249335 (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA (*) (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Ink.Parsed.FlowBase>::Dispose()
inline void Enumerator_Dispose_m7BF2E33709CCA1C3182CB0B0823B5CC036376CD6 (Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Ink.Parsed.FlowBase>::get_Current()
inline FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* Enumerator_get_Current_m1FB39938CFD6138E1234BE2B1290025DF3D47AD5_inline (Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA* __this, const RuntimeMethod* method)
{
	return ((  FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* (*) (Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Ink.Parsed.FlowBase>::MoveNext()
inline bool Enumerator_MoveNext_m3E6779FD1F45D3506C88709EDFA61A7FBABF497A (Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Ink.Parsed.IWeavePoint>::MoveNext()
inline bool Enumerator_MoveNext_m0E266551F3F19E392882EA2ADC18A12F7F76FE4F (Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void Ink.Parsed.Weave/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m73A5A4115E280FF369CFFC6C27BEDD0B00B1E75D (U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2 (const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29_U3CU3Em__Finally1_m64AF3C259A537D1E769580D6CBEB4C8C78B15B93 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29_System_IDisposable_Dispose_mBD65DB5199FA7CE6895F65C4F1AE28DEDF669AAF (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Ink.Parsed.Object>::IndexOf(T)
inline int32_t List_1_IndexOf_m549CA9389C0FF54CE448A6557816E0F0E7B58CE2 (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Ink.Parsed.Object> Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.Collections.Generic.IEnumerable<Ink.Parsed.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_Generic_IEnumerableU3CInk_Parsed_ObjectU3E_GetEnumerator_m8C4B5A788E923234DA9A3E586E88D149165EA3AD (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) ;
// System.Void Ink.Parsed.Wrap`1<Ink.Runtime.Glue>::.ctor(T)
inline void Wrap_1__ctor_m55E3265081F6A8406F0C3A7A7D3B2ABBC0311B0E (Wrap_1_tC06BF2A45CCF887EEF2D86199C08609A6927998F* __this, Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D* ___objToWrap0, const RuntimeMethod* method)
{
	((  void (*) (Wrap_1_tC06BF2A45CCF887EEF2D86199C08609A6927998F*, Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D*, const RuntimeMethod*))Wrap_1__ctor_mA5A5D12BFDE33FADD6E2E6CABE7EE893286C212B_gshared)(__this, ___objToWrap0, method);
}
// System.Void Ink.Parsed.Wrap`1<Ink.Runtime.Tag>::.ctor(T)
inline void Wrap_1__ctor_mC7A871A14C44F022C311E215DA575CE02DBA3A62 (Wrap_1_t30A29E9AC5AC4AEC0670984E15D014B48C63BFF9* __this, Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29* ___objToWrap0, const RuntimeMethod* method)
{
	((  void (*) (Wrap_1_t30A29E9AC5AC4AEC0670984E15D014B48C63BFF9*, Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29*, const RuntimeMethod*))Wrap_1__ctor_mA5A5D12BFDE33FADD6E2E6CABE7EE893286C212B_gshared)(__this, ___objToWrap0, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Ink.Parsed.FlowLevel Ink.Parsed.Path::get_baseTargetLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Path_get_baseTargetLevel_m302A790B35D368EC94AF754E9EA037BDBC5A2AA2 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mF6F4E83D0080A7E6A1384B94FCA8295260938273_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (baseLevelIsAmbiguous)
		bool L_0;
		L_0 = Path_get_baseLevelIsAmbiguous_m03B3365985E0AFF96FF2EA9F0305BF33FB1334CB(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return FlowLevel.Story;
		return (int32_t)(0);
	}

IL_000a:
	{
		// return (FlowLevel) _baseTargetLevel;
		Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC* L_1 = (&__this->____baseTargetLevel_2);
		int32_t L_2;
		L_2 = Nullable_1_get_Value_mF6F4E83D0080A7E6A1384B94FCA8295260938273(L_1, Nullable_1_get_Value_mF6F4E83D0080A7E6A1384B94FCA8295260938273_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Ink.Parsed.Path::get_baseLevelIsAmbiguous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Path_get_baseLevelIsAmbiguous_m03B3365985E0AFF96FF2EA9F0305BF33FB1334CB (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m45FF4EC1B2A358D173EBA31B28C7414D10F43861_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _baseTargetLevel == null;
		Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC* L_0 = (&__this->____baseTargetLevel_2);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m45FF4EC1B2A358D173EBA31B28C7414D10F43861_inline(L_0, Nullable_1_get_HasValue_m45FF4EC1B2A358D173EBA31B28C7414D10F43861_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Ink.Parsed.Path::get_firstComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_get_firstComponent_mF0DB92EC3C5CCA852966F18FBE6E3CD181AC6F2B (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAC8DA4D73CB00E162F7C0182BF3D6F0C25C5EFC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (components == null || components.Count == 0)
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_0;
		L_0 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_1;
		L_1 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		int32_t L_2;
		L_2 = List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_inline(L_1, List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0017:
	{
		// return components [0].name;
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_3;
		L_3 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_4;
		L_4 = List_1_get_Item_mAC8DA4D73CB00E162F7C0182BF3D6F0C25C5EFC7(L_3, 0, List_1_get_Item_mAC8DA4D73CB00E162F7C0182BF3D6F0C25C5EFC7_RuntimeMethod_var);
		String_t* L_5 = L_4->___name_0;
		return L_5;
	}
}
// System.Int32 Ink.Parsed.Path::get_numberOfComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Path_get_numberOfComponents_mFCD833E89443B20CCC91375BF9F0318C77951DFD (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return components.Count;
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_0;
		L_0 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		int32_t L_1;
		L_1 = List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_inline(L_0, List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		return L_1;
	}
}
// System.String Ink.Parsed.Path::get_dotSeparatedComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_get_dotSeparatedComponents_mBB7D9A23856A701D60A4A2B9D1625925622A4BEC (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_m8C56738EBBCF4E4D7F049FC27FC7341390A83B47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_dotSeparatedComponentsU3Eb__9_0_m9BC7727506544F0B56B8295AA627708D90796A9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* G_B3_0 = NULL;
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* G_B3_3 = NULL;
	Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* G_B2_0 = NULL;
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* G_B2_3 = NULL;
	{
		// if( _dotSeparatedComponents == null ) {
		String_t* L_0 = __this->____dotSeparatedComponents_0;
		if (L_0)
		{
			goto IL_0042;
		}
	}
	{
		// _dotSeparatedComponents = string.Join(".", components.Select(c => c?.name));
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_1;
		L_1 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_il2cpp_TypeInfo_var);
		Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* L_2 = ((U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = L_1;
		G_B2_2 = _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
		G_B2_3 = __this;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = L_1;
			G_B3_2 = _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
			G_B3_3 = __this;
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_il2cpp_TypeInfo_var);
		U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E* L_4 = ((U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* L_5 = (Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875*)il2cpp_codegen_object_new(Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875_il2cpp_TypeInfo_var);
		Func_2__ctor_mB5EB3293BD72F180C6BB12565679FEF66CC283EE(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3Cget_dotSeparatedComponentsU3Eb__9_0_m9BC7727506544F0B56B8295AA627708D90796A9B_RuntimeMethod_var), NULL);
		Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* L_6 = L_5;
		((U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_6);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0033:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_m8C56738EBBCF4E4D7F049FC27FC7341390A83B47(G_B3_1, G_B3_0, Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_m8C56738EBBCF4E4D7F049FC27FC7341390A83B47_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Join_m675422BC1927F19F7135C5211B45EE7AC9F7D632(G_B3_2, L_7, NULL);
		G_B3_3->____dotSeparatedComponents_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_3->____dotSeparatedComponents_0), (void*)L_8);
	}

IL_0042:
	{
		// return _dotSeparatedComponents;
		String_t* L_9 = __this->____dotSeparatedComponents_0;
		return L_9;
	}
}
// System.Collections.Generic.List`1<Ink.Parsed.Identifier> Ink.Parsed.Path::get_components()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* Path_get_components_m2175B7004024210CFF9479814652E73144748420 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) 
{
	{
		// public List<Identifier> components { get; }
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_0 = __this->___U3CcomponentsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Ink.Parsed.Path::.ctor(Ink.Parsed.FlowLevel,System.Collections.Generic.List`1<Ink.Parsed.Identifier>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path__ctor_m2C8AD20C68FDC1AFDDC68D53A3E4A95EE6BD1622 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, int32_t ___baseFlowLevel0, List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* ___components1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m3FCF32E15AB33459D20EC525DDCFC0C602BC378A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Path(FlowLevel baseFlowLevel, List<Identifier> components)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _baseTargetLevel = baseFlowLevel;
		int32_t L_0 = ___baseFlowLevel0;
		Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m3FCF32E15AB33459D20EC525DDCFC0C602BC378A((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m3FCF32E15AB33459D20EC525DDCFC0C602BC378A_RuntimeMethod_var);
		__this->____baseTargetLevel_2 = L_1;
		// this.components = components;
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_2 = ___components1;
		__this->___U3CcomponentsU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcomponentsU3Ek__BackingField_1), (void*)L_2);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Path::.ctor(System.Collections.Generic.List`1<Ink.Parsed.Identifier>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path__ctor_m1FA0634AFC2CCF3487EE1E3F27F2236655C8AB25 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* ___components0, const RuntimeMethod* method) 
{
	{
		// public Path(List<Identifier> components)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _baseTargetLevel = null;
		Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC* L_0 = (&__this->____baseTargetLevel_2);
		il2cpp_codegen_initobj(L_0, sizeof(Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC));
		// this.components = components;
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_1 = ___components0;
		__this->___U3CcomponentsU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcomponentsU3Ek__BackingField_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Path::.ctor(Ink.Parsed.Identifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Path__ctor_m628CF348ABC9C3AB26F4D235A5E212BB05233A47 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___ambiguousName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9D5476A26C0E25EA2F030DE559BEC98CF3DE6E84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD3B873D7DF952D0E566E1D7C8DBB61D8FCBDD0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Path(Identifier ambiguousName)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _baseTargetLevel = null;
		Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC* L_0 = (&__this->____baseTargetLevel_2);
		il2cpp_codegen_initobj(L_0, sizeof(Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC));
		// components = new List<Identifier> ();
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_1 = (List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08*)il2cpp_codegen_object_new(List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08_il2cpp_TypeInfo_var);
		List_1__ctor_mD3B873D7DF952D0E566E1D7C8DBB61D8FCBDD0B6(L_1, List_1__ctor_mD3B873D7DF952D0E566E1D7C8DBB61D8FCBDD0B6_RuntimeMethod_var);
		__this->___U3CcomponentsU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcomponentsU3Ek__BackingField_1), (void*)L_1);
		// components.Add (ambiguousName);
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_2;
		L_2 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_3 = ___ambiguousName0;
		List_1_Add_m9D5476A26C0E25EA2F030DE559BEC98CF3DE6E84_inline(L_2, L_3, List_1_Add_m9D5476A26C0E25EA2F030DE559BEC98CF3DE6E84_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Ink.Parsed.Path::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_ToString_m336A2D126CF8ABE46E29FB1480BF60EE2116CBEE (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2437997BAF8FA7A4A8655553ED6B4212ED7CA684);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416AF169B6F034C64E0B70C982D6C06389C3899B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8C4A72F529A8F05A6993B83DBA0A7D4C6EDA140);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (components == null || components.Count == 0) {
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_0;
		L_0 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_1;
		L_1 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		int32_t L_2;
		L_2 = List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_inline(L_1, List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_002a;
		}
	}

IL_0015:
	{
		// if (baseTargetLevel == FlowLevel.WeavePoint)
		int32_t L_3;
		L_3 = Path_get_baseTargetLevel_m302A790B35D368EC94AF754E9EA037BDBC5A2AA2(__this, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0024;
		}
	}
	{
		// return "-> <next gather point>";
		return _stringLiteralE8C4A72F529A8F05A6993B83DBA0A7D4C6EDA140;
	}

IL_0024:
	{
		// return "<invalid Path>";
		return _stringLiteral2437997BAF8FA7A4A8655553ED6B4212ED7CA684;
	}

IL_002a:
	{
		// return "-> " + dotSeparatedComponents;
		String_t* L_4;
		L_4 = Path_get_dotSeparatedComponents_mBB7D9A23856A701D60A4A2B9D1625925622A4BEC(__this, NULL);
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral416AF169B6F034C64E0B70C982D6C06389C3899B, L_4, NULL);
		return L_5;
	}
}
// Ink.Parsed.Object Ink.Parsed.Path::ResolveFromContext(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Path_ResolveFromContext_m2E7745228A2131E2474943DDB9BE94219BE1AF60 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_0 = NULL;
	{
		// if (components == null || components.Count == 0) {
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_0;
		L_0 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_1;
		L_1 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		int32_t L_2;
		L_2 = List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_inline(L_1, List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		// return null;
		return (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL;
	}

IL_0017:
	{
		// var baseTargetObject = ResolveBaseTarget (context);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3 = ___context0;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4;
		L_4 = Path_ResolveBaseTarget_m08575D981E3A2A951376C0480B9D91AABD1FEF81(__this, L_3, NULL);
		V_0 = L_4;
		// if (baseTargetObject == null) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5 = V_0;
		bool L_6;
		L_6 = Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43(L_5, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// return null;
		return (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL;
	}

IL_002a:
	{
		// if (components.Count > 1) {
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_7;
		L_7 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		int32_t L_8;
		L_8 = List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_inline(L_7, List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		// return ResolveTailComponents (baseTargetObject);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_9 = V_0;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_10;
		L_10 = Path_ResolveTailComponents_m26B7D1F85B2F0610935E7D1C78796C233F5B2E7D(__this, L_9, NULL);
		return L_10;
	}

IL_0040:
	{
		// return baseTargetObject;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_11 = V_0;
		return L_11;
	}
}
// Ink.Parsed.Object Ink.Parsed.Path::ResolveBaseTarget(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Path_ResolveBaseTarget_m08575D981E3A2A951376C0480B9D91AABD1FEF81 (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___originalContext0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_1 = NULL;
	bool V_2 = false;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_3 = NULL;
	Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var firstComp = firstComponent;
		String_t* L_0;
		L_0 = Path_get_firstComponent_mF0DB92EC3C5CCA852966F18FBE6E3CD181AC6F2B(__this, NULL);
		V_0 = L_0;
		// Parsed.Object ancestorContext = originalContext;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_1 = ___originalContext0;
		V_1 = L_1;
		goto IL_0039;
	}

IL_000b:
	{
		// bool deepSearch = ancestorContext == originalContext;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_2 = V_1;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3 = ___originalContext0;
		bool L_4;
		L_4 = Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43(L_2, L_3, NULL);
		V_2 = L_4;
		// var foundBase = TryGetChildFromContext (ancestorContext, firstComp, null, deepSearch);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5 = V_1;
		String_t* L_6 = V_0;
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC));
		Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC L_7 = V_4;
		bool L_8 = V_2;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_9;
		L_9 = Path_TryGetChildFromContext_m422034BAA43ADE6D750CAC3482BCB19481F4CC7A(__this, L_5, L_6, L_7, L_8, NULL);
		V_3 = L_9;
		// if (foundBase != null)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_10 = V_3;
		bool L_11;
		L_11 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_10, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0032;
		}
	}
	{
		// return foundBase;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_12 = V_3;
		return L_12;
	}

IL_0032:
	{
		// ancestorContext = ancestorContext.parent;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_13 = V_1;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_14;
		L_14 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_13, NULL);
		V_1 = L_14;
	}

IL_0039:
	{
		// while (ancestorContext != null) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_15 = V_1;
		bool L_16;
		L_16 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_15, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (L_16)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL;
	}
}
// Ink.Parsed.Object Ink.Parsed.Path::ResolveTailComponents(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Path_ResolveTailComponents_m26B7D1F85B2F0610935E7D1C78796C233F5B2E7D (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___rootTarget0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAC8DA4D73CB00E162F7C0182BF3D6F0C25C5EFC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m3FCF32E15AB33459D20EC525DDCFC0C602BC378A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* V_4 = NULL;
	{
		// Parsed.Object foundComponent = rootTarget;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = ___rootTarget0;
		V_0 = L_0;
		// for (int i = 1; i < components.Count; ++i) {
		V_1 = 1;
		goto IL_0055;
	}

IL_0006:
	{
		// var compName = components [i].name;
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_1;
		L_1 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		int32_t L_2 = V_1;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_3;
		L_3 = List_1_get_Item_mAC8DA4D73CB00E162F7C0182BF3D6F0C25C5EFC7(L_1, L_2, List_1_get_Item_mAC8DA4D73CB00E162F7C0182BF3D6F0C25C5EFC7_RuntimeMethod_var);
		String_t* L_4 = L_3->___name_0;
		V_2 = L_4;
		// var foundFlow = foundComponent as FlowBase;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5 = V_0;
		V_4 = ((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)IsInstClass((RuntimeObject*)L_5, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var));
		// if (foundFlow != null)
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_6 = V_4;
		bool L_7;
		L_7 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_6, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// minimumExpectedLevel = (FlowLevel)(foundFlow.flowLevel + 1);
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_8 = V_4;
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* Ink.Parsed.FlowLevel Ink.Parsed.FlowBase::get_flowLevel() */, L_8);
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, 1));
		goto IL_0038;
	}

IL_0036:
	{
		// minimumExpectedLevel = FlowLevel.WeavePoint;
		V_3 = 3;
	}

IL_0038:
	{
		// foundComponent = TryGetChildFromContext (foundComponent, compName, minimumExpectedLevel);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_10 = V_0;
		String_t* L_11 = V_2;
		int32_t L_12 = V_3;
		Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC L_13;
		memset((&L_13), 0, sizeof(L_13));
		Nullable_1__ctor_m3FCF32E15AB33459D20EC525DDCFC0C602BC378A((&L_13), L_12, /*hidden argument*/Nullable_1__ctor_m3FCF32E15AB33459D20EC525DDCFC0C602BC378A_RuntimeMethod_var);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_14;
		L_14 = Path_TryGetChildFromContext_m422034BAA43ADE6D750CAC3482BCB19481F4CC7A(__this, L_10, L_11, L_13, (bool)0, NULL);
		V_0 = L_14;
		// if (foundComponent == null)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_15 = V_0;
		bool L_16;
		L_16 = Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43(L_15, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (L_16)
		{
			goto IL_0063;
		}
	}
	{
		// for (int i = 1; i < components.Count; ++i) {
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0055:
	{
		// for (int i = 1; i < components.Count; ++i) {
		int32_t L_18 = V_1;
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_19;
		L_19 = Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline(__this, NULL);
		int32_t L_20;
		L_20 = List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_inline(L_19, List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0006;
		}
	}

IL_0063:
	{
		// return foundComponent;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_21 = V_0;
		return L_21;
	}
}
// Ink.Parsed.Object Ink.Parsed.Path::TryGetChildFromContext(Ink.Parsed.Object,System.String,System.Nullable`1<Ink.Parsed.FlowLevel>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Path_TryGetChildFromContext_m422034BAA43ADE6D750CAC3482BCB19481F4CC7A (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___context0, String_t* ___childName1, Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC ___minimumLevel2, bool ___forceDeepSearch3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m449FB6200AAA05A7F50EB4B9BFF670422EC8C982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m45FF4EC1B2A358D173EBA31B28C7414D10F43861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_1 = NULL;
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* V_2 = NULL;
	Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	{
		// bool ambiguousChildLevel = minimumLevel == null;
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m45FF4EC1B2A358D173EBA31B28C7414D10F43861_inline((&___minimumLevel2), Nullable_1_get_HasValue_m45FF4EC1B2A358D173EBA31B28C7414D10F43861_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// var weaveContext = context as Weave;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_1 = ___context0;
		V_1 = ((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_1, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var));
		// if ( weaveContext != null && (ambiguousChildLevel || minimumLevel == FlowLevel.WeavePoint)) {
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_2 = V_1;
		bool L_3;
		L_3 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_2, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC L_5 = ___minimumLevel2;
		V_3 = L_5;
		V_4 = 3;
		int32_t L_6;
		L_6 = Nullable_1_GetValueOrDefault_m449FB6200AAA05A7F50EB4B9BFF670422EC8C982_inline((&V_3), Nullable_1_GetValueOrDefault_m449FB6200AAA05A7F50EB4B9BFF670422EC8C982_RuntimeMethod_var);
		int32_t L_7 = V_4;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m45FF4EC1B2A358D173EBA31B28C7414D10F43861_inline((&V_3), Nullable_1_get_HasValue_m45FF4EC1B2A358D173EBA31B28C7414D10F43861_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0)&(int32_t)L_8)))
		{
			goto IL_0045;
		}
	}

IL_0038:
	{
		// return (Parsed.Object) weaveContext.WeavePointNamed (childName);
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_9 = V_1;
		String_t* L_10 = ___childName1;
		RuntimeObject* L_11;
		L_11 = Weave_WeavePointNamed_mB6BBB582A93BE2C68059F5642F3CCCA6446648F0(L_9, L_10, NULL);
		return ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_11, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var));
	}

IL_0045:
	{
		// var flowContext = context as FlowBase;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_12 = ___context0;
		V_2 = ((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)IsInstClass((RuntimeObject*)L_12, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var));
		// if (flowContext != null) {
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_13 = V_2;
		bool L_14;
		L_14 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_13, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0072;
		}
	}
	{
		// var shouldDeepSearch = forceDeepSearch || flowContext.flowLevel == FlowLevel.Knot;
		bool L_15 = ___forceDeepSearch3;
		if (L_15)
		{
			goto IL_0064;
		}
	}
	{
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_16 = V_2;
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* Ink.Parsed.FlowLevel Ink.Parsed.FlowBase::get_flowLevel() */, L_16);
		G_B8_0 = ((((int32_t)L_17) == ((int32_t)1))? 1 : 0);
		goto IL_0065;
	}

IL_0064:
	{
		G_B8_0 = 1;
	}

IL_0065:
	{
		V_5 = (bool)G_B8_0;
		// return flowContext.ContentWithNameAtLevel (childName, minimumLevel, shouldDeepSearch);
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_18 = V_2;
		String_t* L_19 = ___childName1;
		Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC L_20 = ___minimumLevel2;
		bool L_21 = V_5;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_22;
		L_22 = FlowBase_ContentWithNameAtLevel_mBEA01AF67EC82BAF3485DEB39E7C5F6EB95DCE42(L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}

IL_0072:
	{
		// return null;
		return (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL;
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
// System.Void Ink.Parsed.Path/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7184DF4125A30B8B250975EFF8306C2B0E44D070 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E* L_0 = (U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E*)il2cpp_codegen_object_new(U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE4EBAFCB6B7202F8F5E681C4DAD67E48363DEF47(L_0, NULL);
		((U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Ink.Parsed.Path/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE4EBAFCB6B7202F8F5E681C4DAD67E48363DEF47 (U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Ink.Parsed.Path/<>c::<get_dotSeparatedComponents>b__9_0(Ink.Parsed.Identifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3Cget_dotSeparatedComponentsU3Eb__9_0_m9BC7727506544F0B56B8295AA627708D90796A9B (U3CU3Ec_t4DE2A1738C6795E49209FBEE47FB37511ECCC70E* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___c0, const RuntimeMethod* method) 
{
	{
		// _dotSeparatedComponents = string.Join(".", components.Select(c => c?.name));
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = ___c0;
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
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_1 = ___c0;
		String_t* L_2 = L_1->___name_0;
		return L_2;
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
// Ink.Parsed.Expression Ink.Parsed.Return::get_returnedExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* Return_get_returnedExpression_m0F3B090A66709E032F417E8046A3B5AA3990F4E6 (Return_tF820135B4E13C7AA4FB7A0BAB1EB362B26B6FC14* __this, const RuntimeMethod* method) 
{
	{
		// public Expression returnedExpression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = __this->___U3CreturnedExpressionU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ink.Parsed.Return::set_returnedExpression(Ink.Parsed.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Return_set_returnedExpression_mCA02FC2F1D627F8DA28FB6A16D5F4BFE582BA17D (Return_tF820135B4E13C7AA4FB7A0BAB1EB362B26B6FC14* __this, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___value0, const RuntimeMethod* method) 
{
	{
		// public Expression returnedExpression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = ___value0;
		__this->___U3CreturnedExpressionU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreturnedExpressionU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Ink.Parsed.Return::.ctor(Ink.Parsed.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Return__ctor_m26DF6DBE7B13BA4E4C564B85BC8895F7FB30780E (Return_tF820135B4E13C7AA4FB7A0BAB1EB362B26B6FC14* __this, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___returnedExpression0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Return (Expression returnedExpression = null)
		Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A(__this, NULL);
		// if (returnedExpression) {
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = ___returnedExpression0;
		bool L_1;
		L_1 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// this.returnedExpression = AddContent(returnedExpression);
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_2 = ___returnedExpression0;
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_3;
		L_3 = Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F(__this, L_2, Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F_RuntimeMethod_var);
		Return_set_returnedExpression_mCA02FC2F1D627F8DA28FB6A16D5F4BFE582BA17D_inline(__this, L_3, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// Ink.Runtime.Object Ink.Parsed.Return::GenerateRuntimeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* Return_GenerateRuntimeObject_m121696E883A41C9102DD48FD3E7385CCE83D9AF7 (Return_tF820135B4E13C7AA4FB7A0BAB1EB362B26B6FC14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_0 = NULL;
	{
		// var container = new Runtime.Container ();
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = (Container_t74302BC1028974B0A346A43F334AECB681D79579*)il2cpp_codegen_object_new(Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		Container__ctor_mE49EAAD4892EDEFFDA64A7A54823A021ECBF4F84(L_0, NULL);
		V_0 = L_0;
		// if (returnedExpression) {
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_1;
		L_1 = Return_get_returnedExpression_m0F3B090A66709E032F417E8046A3B5AA3990F4E6_inline(__this, NULL);
		bool L_2;
		L_2 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// container.AddContent (returnedExpression.runtimeObject);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_3 = V_0;
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_4;
		L_4 = Return_get_returnedExpression_m0F3B090A66709E032F417E8046A3B5AA3990F4E6_inline(__this, NULL);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_5;
		L_5 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_4, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_3, L_5, NULL);
		goto IL_0047;
	}

IL_0026:
	{
		// container.AddContent (Runtime.ControlCommand.EvalStart ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_6 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_7;
		L_7 = ControlCommand_EvalStart_m5552F30F2BAF74C7B324DFF8E150AF206369A412(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_6, L_7, NULL);
		// container.AddContent (new Runtime.Void());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_8 = V_0;
		Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0* L_9 = (Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0*)il2cpp_codegen_object_new(Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0_il2cpp_TypeInfo_var);
		Void__ctor_mE6655AC1CDBDF3AEAF058E98834803EFA65A8886(L_9, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_8, L_9, NULL);
		// container.AddContent (Runtime.ControlCommand.EvalEnd ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_10 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_11;
		L_11 = ControlCommand_EvalEnd_mB619929D3EB97531D9F354283A15D3EA22CD983F(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_10, L_11, NULL);
	}

IL_0047:
	{
		// container.AddContent (Runtime.ControlCommand.PopFunction());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_12 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_13;
		L_13 = ControlCommand_PopFunction_m494AA2B4F94401CE9A26173A0CA0111DB987A6B4(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_12, L_13, NULL);
		// return container;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_14 = V_0;
		return L_14;
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
// System.Void Ink.Parsed.Sequence::.ctor(System.Collections.Generic.List`1<Ink.Parsed.ContentList>,Ink.Parsed.SequenceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence__ctor_m1B01CC7F617FBAD2953A343BAB0C7217EF902BB1 (Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85* __this, List_1_t7CAB48FCDDBB3C931F99DE4CEFE682DE8A6981DF* ___elementContentLists0, int32_t ___sequenceType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB10A59CB2A7182E10D5AA3B84F66F09573A4A56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m92606E59E1BC7E1DDC87C96B815D73FBB6BB6E58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEE72C4D75A73C8C271D50350162CFE419F958D3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5A9752318EEC93FA92913E63EE9368B1E51EE2F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m96D11E7D645953447EA46D4A4A82F9618A32F4BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFBD5335DB80BD5C7F42356A6430C470A4D63CD72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m9D687DD3683A1F764C11223332FDE089739003CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t01D3AE12B6AD2CBBD7748943A6EEE3E2D4143663 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* V_1 = NULL;
	List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* V_2 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_3 = NULL;
	{
		// public Sequence (List<ContentList> elementContentLists, SequenceType sequenceType)
		Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A(__this, NULL);
		// this.sequenceType = sequenceType;
		int32_t L_0 = ___sequenceType1;
		__this->___sequenceType_7 = L_0;
		// this.sequenceElements = new List<Parsed.Object> ();
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_1 = (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*)il2cpp_codegen_object_new(List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55_il2cpp_TypeInfo_var);
		List_1__ctor_mFBD5335DB80BD5C7F42356A6430C470A4D63CD72(L_1, List_1__ctor_mFBD5335DB80BD5C7F42356A6430C470A4D63CD72_RuntimeMethod_var);
		__this->___sequenceElements_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sequenceElements_6), (void*)L_1);
		// foreach (var elementContentList in elementContentLists) {
		List_1_t7CAB48FCDDBB3C931F99DE4CEFE682DE8A6981DF* L_2 = ___elementContentLists0;
		Enumerator_t01D3AE12B6AD2CBBD7748943A6EEE3E2D4143663 L_3;
		L_3 = List_1_GetEnumerator_m96D11E7D645953447EA46D4A4A82F9618A32F4BC(L_2, List_1_GetEnumerator_m96D11E7D645953447EA46D4A4A82F9618A32F4BC_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB10A59CB2A7182E10D5AA3B84F66F09573A4A56D((&V_0), Enumerator_Dispose_mB10A59CB2A7182E10D5AA3B84F66F09573A4A56D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005d_1;
			}

IL_0021_1:
			{
				// foreach (var elementContentList in elementContentLists) {
				ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* L_4;
				L_4 = Enumerator_get_Current_mEE72C4D75A73C8C271D50350162CFE419F958D3B_inline((&V_0), Enumerator_get_Current_mEE72C4D75A73C8C271D50350162CFE419F958D3B_RuntimeMethod_var);
				V_1 = L_4;
				// var contentObjs = elementContentList.content;
				ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* L_5 = V_1;
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_6;
				L_6 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_5, NULL);
				V_2 = L_6;
				// Parsed.Object seqElObject = null;
				V_3 = (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL;
				// if (contentObjs == null || contentObjs.Count == 0)
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_7 = V_2;
				if (!L_7)
				{
					goto IL_003d_1;
				}
			}
			{
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_8 = V_2;
				int32_t L_9;
				L_9 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_8, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0041_1;
				}
			}

IL_003d_1:
			{
				// seqElObject = elementContentList;
				ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23* L_10 = V_1;
				V_3 = L_10;
				goto IL_0049_1;
			}

IL_0041_1:
			{
				// seqElObject = new Weave (contentObjs);
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_11 = V_2;
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_12 = (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)il2cpp_codegen_object_new(Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
				Weave__ctor_mE804413D35CA9D86F034623450393D361FB63449(L_12, L_11, (-1), NULL);
				V_3 = L_12;
			}

IL_0049_1:
			{
				// this.sequenceElements.Add (seqElObject);
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_13 = __this->___sequenceElements_6;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_14 = V_3;
				List_1_Add_m5A9752318EEC93FA92913E63EE9368B1E51EE2F0_inline(L_13, L_14, List_1_Add_m5A9752318EEC93FA92913E63EE9368B1E51EE2F0_RuntimeMethod_var);
				// AddContent (seqElObject);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_15 = V_3;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_16;
				L_16 = Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m9D687DD3683A1F764C11223332FDE089739003CD(__this, L_15, Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m9D687DD3683A1F764C11223332FDE089739003CD_RuntimeMethod_var);
			}

IL_005d_1:
			{
				// foreach (var elementContentList in elementContentLists) {
				bool L_17;
				L_17 = Enumerator_MoveNext_m92606E59E1BC7E1DDC87C96B815D73FBB6BB6E58((&V_0), Enumerator_MoveNext_m92606E59E1BC7E1DDC87C96B815D73FBB6BB6E58_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_0076;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0076:
	{
		// }
		return;
	}
}
// Ink.Runtime.Object Ink.Parsed.Sequence::GenerateRuntimeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* Sequence_GenerateRuntimeObject_m8B50EA6F7B73BA3426FAF45681C8565B6D76094C (Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB6FCD13803E793F69359FB195161D2AFFED1C956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t790425294EA2A6F283208CCC3E6906D3E7986012_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF1829A378D66B1DD70A767729127A0DC5EDCAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5CF365411A1923514E649FC7DC6B0FBEA3F8683);
		s_Il2CppMethodInitialized = true;
	}
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* V_5 = NULL;
	ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* V_9 = NULL;
	int32_t V_10 = 0;
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* V_11 = NULL;
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_12 = NULL;
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* V_13 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// var container = new Runtime.Container ();
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = (Container_t74302BC1028974B0A346A43F334AECB681D79579*)il2cpp_codegen_object_new(Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		Container__ctor_mE49EAAD4892EDEFFDA64A7A54823A021ECBF4F84(L_0, NULL);
		V_0 = L_0;
		// container.visitsShouldBeCounted = true;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_1 = V_0;
		Container_set_visitsShouldBeCounted_mCA668E9A96F2D5B8F25801AE1169786E35B2091C_inline(L_1, (bool)1, NULL);
		// container.countingAtStartOnly = true;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_2 = V_0;
		Container_set_countingAtStartOnly_m97E94EA0207E814538744AB785E0A71821257C2D_inline(L_2, (bool)1, NULL);
		// _sequenceDivertsToResove = new List<SequenceDivertToResolve> ();
		List_1_t790425294EA2A6F283208CCC3E6906D3E7986012* L_3 = (List_1_t790425294EA2A6F283208CCC3E6906D3E7986012*)il2cpp_codegen_object_new(List_1_t790425294EA2A6F283208CCC3E6906D3E7986012_il2cpp_TypeInfo_var);
		List_1__ctor_mB6FCD13803E793F69359FB195161D2AFFED1C956(L_3, List_1__ctor_mB6FCD13803E793F69359FB195161D2AFFED1C956_RuntimeMethod_var);
		__this->____sequenceDivertsToResove_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sequenceDivertsToResove_8), (void*)L_3);
		// container.AddContent (Runtime.ControlCommand.EvalStart ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_4 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_5;
		L_5 = ControlCommand_EvalStart_m5552F30F2BAF74C7B324DFF8E150AF206369A412(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_4, L_5, NULL);
		// container.AddContent (Runtime.ControlCommand.VisitIndex ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_6 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_7;
		L_7 = ControlCommand_VisitIndex_m1E553992BBAFAB7C7C559CF34703BE4A0FC9C402(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_6, L_7, NULL);
		// bool once = (sequenceType & SequenceType.Once) > 0;
		int32_t L_8 = __this->___sequenceType_7;
		V_1 = (bool)((((int32_t)((int32_t)((int32_t)L_8&8))) > ((int32_t)0))? 1 : 0);
		// bool cycle = (sequenceType & SequenceType.Cycle) > 0;
		int32_t L_9 = __this->___sequenceType_7;
		V_2 = (bool)((((int32_t)((int32_t)((int32_t)L_9&2))) > ((int32_t)0))? 1 : 0);
		// bool stopping = (sequenceType & SequenceType.Stopping) > 0;
		int32_t L_10 = __this->___sequenceType_7;
		V_3 = (bool)((((int32_t)((int32_t)((int32_t)L_10&1))) > ((int32_t)0))? 1 : 0);
		// bool shuffle = (sequenceType & SequenceType.Shuffle) > 0;
		int32_t L_11 = __this->___sequenceType_7;
		// var seqBranchCount = sequenceElements.Count;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_12 = __this->___sequenceElements_6;
		int32_t L_13;
		L_13 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_12, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		V_4 = L_13;
		// if (once) seqBranchCount++;
		bool L_14 = V_1;
		G_B1_0 = ((((int32_t)((int32_t)((int32_t)L_11&4))) > ((int32_t)0))? 1 : 0);
		if (!L_14)
		{
			G_B2_0 = ((((int32_t)((int32_t)((int32_t)L_11&4))) > ((int32_t)0))? 1 : 0);
			goto IL_007a;
		}
	}
	{
		// if (once) seqBranchCount++;
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		G_B2_0 = G_B1_0;
	}

IL_007a:
	{
		// if (stopping || once) {
		bool L_16 = V_3;
		bool L_17 = V_1;
		G_B3_0 = G_B2_0;
		if (!((int32_t)((int32_t)L_16|(int32_t)L_17)))
		{
			G_B4_0 = G_B2_0;
			goto IL_00a0;
		}
	}
	{
		// container.AddContent (new Runtime.IntValue (seqBranchCount-1));
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_18 = V_0;
		int32_t L_19 = V_4;
		IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358* L_20 = (IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358*)il2cpp_codegen_object_new(IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358_il2cpp_TypeInfo_var);
		IntValue__ctor_m5E32D02EF5024D1A265F9296D640A8ECFB79C652(L_20, ((int32_t)il2cpp_codegen_subtract(L_19, 1)), NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_18, L_20, NULL);
		// container.AddContent (Runtime.NativeFunctionCall.CallWithName ("MIN"));
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_21 = V_0;
		NativeFunctionCall_tE48D7B25FFE2719D67C09A104593781EA0FE60C5* L_22;
		L_22 = NativeFunctionCall_CallWithName_m503BA033EC27B0900F693BB2113BA022ED987D22(_stringLiteralE5CF365411A1923514E649FC7DC6B0FBEA3F8683, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_21, L_22, NULL);
		G_B6_0 = G_B3_0;
		goto IL_00c9;
	}

IL_00a0:
	{
		// else if (cycle) {
		bool L_23 = V_2;
		G_B5_0 = G_B4_0;
		if (!L_23)
		{
			G_B6_0 = G_B4_0;
			goto IL_00c9;
		}
	}
	{
		// container.AddContent (new Runtime.IntValue (sequenceElements.Count));
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_24 = V_0;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_25 = __this->___sequenceElements_6;
		int32_t L_26;
		L_26 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_25, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358* L_27 = (IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358*)il2cpp_codegen_object_new(IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358_il2cpp_TypeInfo_var);
		IntValue__ctor_m5E32D02EF5024D1A265F9296D640A8ECFB79C652(L_27, L_26, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_24, L_27, NULL);
		// container.AddContent (Runtime.NativeFunctionCall.CallWithName ("%"));
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_28 = V_0;
		NativeFunctionCall_tE48D7B25FFE2719D67C09A104593781EA0FE60C5* L_29;
		L_29 = NativeFunctionCall_CallWithName_m503BA033EC27B0900F693BB2113BA022ED987D22(_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_28, L_29, NULL);
		G_B6_0 = G_B5_0;
	}

IL_00c9:
	{
		// if (shuffle) {
		if (!G_B6_0)
		{
			goto IL_017d;
		}
	}
	{
		// var postShuffleNoOp = Runtime.ControlCommand.NoOp();
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_30;
		L_30 = ControlCommand_NoOp_m266A1359A3EADDEE5A83531F6589D43FD2D9DBAF(NULL);
		V_6 = L_30;
		// if ( once || stopping )
		bool L_31 = V_1;
		bool L_32 = V_3;
		if (!((int32_t)((int32_t)L_31|(int32_t)L_32)))
		{
			goto IL_0142;
		}
	}
	{
		// int lastIdx = stopping ? sequenceElements.Count - 1 : sequenceElements.Count;
		bool L_33 = V_3;
		if (L_33)
		{
			goto IL_00ea;
		}
	}
	{
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_34 = __this->___sequenceElements_6;
		int32_t L_35;
		L_35 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_34, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		G_B11_0 = L_35;
		goto IL_00f7;
	}

IL_00ea:
	{
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_36 = __this->___sequenceElements_6;
		int32_t L_37;
		L_37 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_36, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
	}

IL_00f7:
	{
		V_8 = G_B11_0;
		// container.AddContent(Runtime.ControlCommand.Duplicate());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_38 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_39;
		L_39 = ControlCommand_Duplicate_mD1FA6CC1DF935600116FB461C4C43EC6718642DB(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_38, L_39, NULL);
		// container.AddContent(new Runtime.IntValue(lastIdx));
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_40 = V_0;
		int32_t L_41 = V_8;
		IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358* L_42 = (IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358*)il2cpp_codegen_object_new(IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358_il2cpp_TypeInfo_var);
		IntValue__ctor_m5E32D02EF5024D1A265F9296D640A8ECFB79C652(L_42, L_41, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_40, L_42, NULL);
		// container.AddContent(Runtime.NativeFunctionCall.CallWithName("=="));
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_43 = V_0;
		NativeFunctionCall_tE48D7B25FFE2719D67C09A104593781EA0FE60C5* L_44;
		L_44 = NativeFunctionCall_CallWithName_m503BA033EC27B0900F693BB2113BA022ED987D22(_stringLiteral7EF1829A378D66B1DD70A767729127A0DC5EDCAE, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_43, L_44, NULL);
		// var skipShuffleDivert = new Runtime.Divert();
		Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_45 = (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA*)il2cpp_codegen_object_new(Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA_il2cpp_TypeInfo_var);
		Divert__ctor_m6EF2247FDA9554C19F47356ACDC569D214095A3A(L_45, NULL);
		V_9 = L_45;
		// skipShuffleDivert.isConditional = true;
		Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_46 = V_9;
		Divert_set_isConditional_mDB631828EAA0091F708E2DA06B743FA3BD7BF33A_inline(L_46, (bool)1, NULL);
		// container.AddContent(skipShuffleDivert);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_47 = V_0;
		Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_48 = V_9;
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_47, L_48, NULL);
		// AddDivertToResolve(skipShuffleDivert, postShuffleNoOp);
		Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_49 = V_9;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_50 = V_6;
		Sequence_AddDivertToResolve_m5EC3A0BE4AF25B6A0EB2657D3061FDB8BEE5713A(__this, L_49, L_50, NULL);
	}

IL_0142:
	{
		// var elementCountToShuffle = sequenceElements.Count;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_51 = __this->___sequenceElements_6;
		int32_t L_52;
		L_52 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_51, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		V_7 = L_52;
		// if (stopping) elementCountToShuffle--;
		bool L_53 = V_3;
		if (!L_53)
		{
			goto IL_0158;
		}
	}
	{
		// if (stopping) elementCountToShuffle--;
		int32_t L_54 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_54, 1));
	}

IL_0158:
	{
		// container.AddContent (new Runtime.IntValue (elementCountToShuffle));
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_55 = V_0;
		int32_t L_56 = V_7;
		IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358* L_57 = (IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358*)il2cpp_codegen_object_new(IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358_il2cpp_TypeInfo_var);
		IntValue__ctor_m5E32D02EF5024D1A265F9296D640A8ECFB79C652(L_57, L_56, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_55, L_57, NULL);
		// container.AddContent (Runtime.ControlCommand.SequenceShuffleIndex ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_58 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_59;
		L_59 = ControlCommand_SequenceShuffleIndex_m9333D7F7436E81C8B480522125587C3601D1F678(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_58, L_59, NULL);
		// if (once || stopping) container.AddContent(postShuffleNoOp);
		bool L_60 = V_1;
		bool L_61 = V_3;
		if (!((int32_t)((int32_t)L_60|(int32_t)L_61)))
		{
			goto IL_017d;
		}
	}
	{
		// if (once || stopping) container.AddContent(postShuffleNoOp);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_62 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_63 = V_6;
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_62, L_63, NULL);
	}

IL_017d:
	{
		// container.AddContent (Runtime.ControlCommand.EvalEnd ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_64 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_65;
		L_65 = ControlCommand_EvalEnd_mB619929D3EB97531D9F354283A15D3EA22CD983F(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_64, L_65, NULL);
		// var postSequenceNoOp = Runtime.ControlCommand.NoOp();
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_66;
		L_66 = ControlCommand_NoOp_m266A1359A3EADDEE5A83531F6589D43FD2D9DBAF(NULL);
		V_5 = L_66;
		// for (var elIndex=0; elIndex<seqBranchCount; elIndex++) {
		V_10 = 0;
		goto IL_0274;
	}

IL_0197:
	{
		// container.AddContent (Runtime.ControlCommand.EvalStart ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_67 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_68;
		L_68 = ControlCommand_EvalStart_m5552F30F2BAF74C7B324DFF8E150AF206369A412(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_67, L_68, NULL);
		// container.AddContent (Runtime.ControlCommand.Duplicate ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_69 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_70;
		L_70 = ControlCommand_Duplicate_mD1FA6CC1DF935600116FB461C4C43EC6718642DB(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_69, L_70, NULL);
		// container.AddContent (new Runtime.IntValue (elIndex));
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_71 = V_0;
		int32_t L_72 = V_10;
		IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358* L_73 = (IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358*)il2cpp_codegen_object_new(IntValue_tC0948E5C349DCA9404A95108DBE50654C7C70358_il2cpp_TypeInfo_var);
		IntValue__ctor_m5E32D02EF5024D1A265F9296D640A8ECFB79C652(L_73, L_72, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_71, L_73, NULL);
		// container.AddContent (Runtime.NativeFunctionCall.CallWithName ("=="));
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_74 = V_0;
		NativeFunctionCall_tE48D7B25FFE2719D67C09A104593781EA0FE60C5* L_75;
		L_75 = NativeFunctionCall_CallWithName_m503BA033EC27B0900F693BB2113BA022ED987D22(_stringLiteral7EF1829A378D66B1DD70A767729127A0DC5EDCAE, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_74, L_75, NULL);
		// container.AddContent (Runtime.ControlCommand.EvalEnd ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_76 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_77;
		L_77 = ControlCommand_EvalEnd_mB619929D3EB97531D9F354283A15D3EA22CD983F(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_76, L_77, NULL);
		// var sequenceDivert = new Runtime.Divert ();
		Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_78 = (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA*)il2cpp_codegen_object_new(Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA_il2cpp_TypeInfo_var);
		Divert__ctor_m6EF2247FDA9554C19F47356ACDC569D214095A3A(L_78, NULL);
		V_11 = L_78;
		// sequenceDivert.isConditional = true;
		Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_79 = V_11;
		Divert_set_isConditional_mDB631828EAA0091F708E2DA06B743FA3BD7BF33A_inline(L_79, (bool)1, NULL);
		// container.AddContent (sequenceDivert);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_80 = V_0;
		Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_81 = V_11;
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_80, L_81, NULL);
		// if ( elIndex < sequenceElements.Count ) {
		int32_t L_82 = V_10;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_83 = __this->___sequenceElements_6;
		int32_t L_84;
		L_84 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_83, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		if ((((int32_t)L_82) >= ((int32_t)L_84)))
		{
			goto IL_0216;
		}
	}
	{
		// var el = sequenceElements[elIndex];
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_85 = __this->___sequenceElements_6;
		int32_t L_86 = V_10;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_87;
		L_87 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_85, L_86, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		// contentContainerForSequenceBranch = (Runtime.Container)el.runtimeObject;
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_88;
		L_88 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_87, NULL);
		V_12 = ((Container_t74302BC1028974B0A346A43F334AECB681D79579*)CastclassClass((RuntimeObject*)L_88, Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var));
		goto IL_021d;
	}

IL_0216:
	{
		// contentContainerForSequenceBranch = new Runtime.Container();
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_89 = (Container_t74302BC1028974B0A346A43F334AECB681D79579*)il2cpp_codegen_object_new(Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		Container__ctor_mE49EAAD4892EDEFFDA64A7A54823A021ECBF4F84(L_89, NULL);
		V_12 = L_89;
	}

IL_021d:
	{
		// contentContainerForSequenceBranch.name = "s" + elIndex;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_90 = V_12;
		String_t* L_91;
		L_91 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_10), NULL);
		String_t* L_92;
		L_92 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, L_91, NULL);
		Container_set_name_m8F5A2754D5F5B724CDB73F5754F75D179253D1B1_inline(L_90, L_92, NULL);
		// contentContainerForSequenceBranch.InsertContent(Runtime.ControlCommand.PopEvaluatedValue(), 0);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_93 = V_12;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_94;
		L_94 = ControlCommand_PopEvaluatedValue_mB363CF3E2CD932F98B55DB33737C7FA746FE4721(NULL);
		Container_InsertContent_m844F5C9F5AF7856E920DFB5F17DBEC8A262B5144(L_93, L_94, 0, NULL);
		// var seqBranchCompleteDivert = new Runtime.Divert ();
		Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_95 = (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA*)il2cpp_codegen_object_new(Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA_il2cpp_TypeInfo_var);
		Divert__ctor_m6EF2247FDA9554C19F47356ACDC569D214095A3A(L_95, NULL);
		V_13 = L_95;
		// contentContainerForSequenceBranch.AddContent (seqBranchCompleteDivert);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_96 = V_12;
		Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_97 = V_13;
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_96, L_97, NULL);
		// container.AddToNamedContentOnly (contentContainerForSequenceBranch);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_98 = V_0;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_99 = V_12;
		Container_AddToNamedContentOnly_mE22F23FF9DA10C2E08C20DD7DFCF0B2A3C689461(L_98, L_99, NULL);
		// AddDivertToResolve (sequenceDivert, contentContainerForSequenceBranch);
		Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_100 = V_11;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_101 = V_12;
		Sequence_AddDivertToResolve_m5EC3A0BE4AF25B6A0EB2657D3061FDB8BEE5713A(__this, L_100, L_101, NULL);
		// AddDivertToResolve (seqBranchCompleteDivert, postSequenceNoOp);
		Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_102 = V_13;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_103 = V_5;
		Sequence_AddDivertToResolve_m5EC3A0BE4AF25B6A0EB2657D3061FDB8BEE5713A(__this, L_102, L_103, NULL);
		// for (var elIndex=0; elIndex<seqBranchCount; elIndex++) {
		int32_t L_104 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0274:
	{
		// for (var elIndex=0; elIndex<seqBranchCount; elIndex++) {
		int32_t L_105 = V_10;
		int32_t L_106 = V_4;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_0197;
		}
	}
	{
		// container.AddContent (postSequenceNoOp);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_107 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_108 = V_5;
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_107, L_108, NULL);
		// return container;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_109 = V_0;
		return L_109;
	}
}
// System.Void Ink.Parsed.Sequence::AddDivertToResolve(Ink.Runtime.Divert,Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_AddDivertToResolve_m5EC3A0BE4AF25B6A0EB2657D3061FDB8BEE5713A (Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85* __this, Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* ___divert0, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___targetContent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9D42F1337D5D751C33120AAABB9C59385A7CAA8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _sequenceDivertsToResove.Add( new SequenceDivertToResolve() {
		//     divert = divert,
		//     targetContent = targetContent
		// });
		List_1_t790425294EA2A6F283208CCC3E6906D3E7986012* L_0 = __this->____sequenceDivertsToResove_8;
		SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* L_1 = (SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88*)il2cpp_codegen_object_new(SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88_il2cpp_TypeInfo_var);
		SequenceDivertToResolve__ctor_mAC464AB231B33607221F02499E124936E2FC760C(L_1, NULL);
		SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* L_2 = L_1;
		Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_3 = ___divert0;
		L_2->___divert_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___divert_0), (void*)L_3);
		SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* L_4 = L_2;
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_5 = ___targetContent1;
		L_4->___targetContent_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___targetContent_1), (void*)L_5);
		List_1_Add_m9D42F1337D5D751C33120AAABB9C59385A7CAA8A_inline(L_0, L_4, List_1_Add_m9D42F1337D5D751C33120AAABB9C59385A7CAA8A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Sequence::ResolveReferences(Ink.Parsed.Story)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sequence_ResolveReferences_mFE3D16CBB9F000E7C1ADC33289A64E478C8165B7 (Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85* __this, Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0695B17C766EB9522542CB394DC3B4B851B29B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m514B4BBBE22D79C44A3955A2ABEE7ADFCCA68C68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5ABBE55A689E904113FB50E82F51E9A8109800EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m993E21BCA341FEDBDE10AEFD25BBD3C49887247D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC11A5B12CF26B13BAD8CDCC5375367E670FBEA63 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* V_1 = NULL;
	{
		// base.ResolveReferences (context);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_0 = ___context0;
		Object_ResolveReferences_m8BC5DD701019191459A9CEF84D71FFBE2FEDFF8E(__this, L_0, NULL);
		// foreach (var toResolve in _sequenceDivertsToResove) {
		List_1_t790425294EA2A6F283208CCC3E6906D3E7986012* L_1 = __this->____sequenceDivertsToResove_8;
		Enumerator_tC11A5B12CF26B13BAD8CDCC5375367E670FBEA63 L_2;
		L_2 = List_1_GetEnumerator_m993E21BCA341FEDBDE10AEFD25BBD3C49887247D(L_1, List_1_GetEnumerator_m993E21BCA341FEDBDE10AEFD25BBD3C49887247D_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0695B17C766EB9522542CB394DC3B4B851B29B0F((&V_0), Enumerator_Dispose_m0695B17C766EB9522542CB394DC3B4B851B29B0F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0033_1;
			}

IL_0015_1:
			{
				// foreach (var toResolve in _sequenceDivertsToResove) {
				SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* L_3;
				L_3 = Enumerator_get_Current_m5ABBE55A689E904113FB50E82F51E9A8109800EE_inline((&V_0), Enumerator_get_Current_m5ABBE55A689E904113FB50E82F51E9A8109800EE_RuntimeMethod_var);
				V_1 = L_3;
				// toResolve.divert.targetPath = toResolve.targetContent.path;
				SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* L_4 = V_1;
				Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_5 = L_4->___divert_0;
				SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* L_6 = V_1;
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_7 = L_6->___targetContent_1;
				Path_tCC1F1626DB60711735401EA8FA76A191D9014600* L_8;
				L_8 = Object_get_path_m08402839773DCFE39E1D2C20D91F21D2A294A765(L_7, NULL);
				Divert_set_targetPath_m3BA5FF19D878E1BFB3A1D9D5C952FD41110E0213(L_5, L_8, NULL);
			}

IL_0033_1:
			{
				// foreach (var toResolve in _sequenceDivertsToResove) {
				bool L_9;
				L_9 = Enumerator_MoveNext_m514B4BBBE22D79C44A3955A2ABEE7ADFCCA68C68((&V_0), Enumerator_MoveNext_m514B4BBBE22D79C44A3955A2ABEE7ADFCCA68C68_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		// }
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
// System.Void Ink.Parsed.Sequence/SequenceDivertToResolve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequenceDivertToResolve__ctor_mAC464AB231B33607221F02499E124936E2FC760C (SequenceDivertToResolve_t37E4159370DD25778017F4CC7545576B876A5F88* __this, const RuntimeMethod* method) 
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
// Ink.Parsed.FlowLevel Ink.Parsed.Stitch::get_flowLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stitch_get_flowLevel_m9B763778C291A4586174FF3F0565C854B3686E15 (Stitch_t681670B130517D97D8E480F375F9F27EB8D19E84* __this, const RuntimeMethod* method) 
{
	{
		// public override FlowLevel flowLevel { get { return FlowLevel.Stitch; } }
		return (int32_t)(2);
	}
}
// System.Void Ink.Parsed.Stitch::.ctor(Ink.Parsed.Identifier,System.Collections.Generic.List`1<Ink.Parsed.Object>,System.Collections.Generic.List`1<Ink.Parsed.FlowBase/Argument>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stitch__ctor_m1939D9639A8B6837A816550D7D2C53EF196CF25A (Stitch_t681670B130517D97D8E480F375F9F27EB8D19E84* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___name0, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___topLevelObjects1, List_1_t5A7C284E404753F1786689E097CE59A152638444* ___arguments2, bool ___isFunction3, const RuntimeMethod* method) 
{
	{
		// public Stitch (Identifier name, List<Parsed.Object> topLevelObjects, List<Argument> arguments, bool isFunction) : base(name, topLevelObjects, arguments, isFunction)
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = ___name0;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_1 = ___topLevelObjects1;
		List_1_t5A7C284E404753F1786689E097CE59A152638444* L_2 = ___arguments2;
		bool L_3 = ___isFunction3;
		FlowBase__ctor_m9617379391C6CBF8E44705B74D16326088D2A916(__this, L_0, L_1, L_2, L_3, (bool)0, NULL);
		// }
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
// Ink.Parsed.FlowLevel Ink.Parsed.Story::get_flowLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Story_get_flowLevel_mCE16371E154C19AE5D4DD9D2CFF62BB150EE2BFF (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, const RuntimeMethod* method) 
{
	{
		// public override FlowLevel flowLevel { get { return FlowLevel.Story; } }
		return (int32_t)(0);
	}
}
// System.Boolean Ink.Parsed.Story::get_hadError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Story_get_hadError_mEF919AE10285FEF65A04B86A55656D8FFCB8E850 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, const RuntimeMethod* method) 
{
	{
		// internal bool hadError { get { return _hadError; } }
		bool L_0 = __this->____hadError_19;
		return L_0;
	}
}
// System.Boolean Ink.Parsed.Story::get_hadWarning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Story_get_hadWarning_mCECC164DE20D2B6FF8FB0EE1C6E819C93751C381 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, const RuntimeMethod* method) 
{
	{
		// internal bool hadWarning { get { return _hadWarning; } }
		bool L_0 = __this->____hadWarning_20;
		return L_0;
	}
}
// System.Void Ink.Parsed.Story::.ctor(System.Collections.Generic.List`1<Ink.Parsed.Object>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story__ctor_mA1A58815473DAD128B1A45597543911FC2533D58 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___toplevelObjects0, bool ___isInclude1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mBEA76E25FE25A85B1F140ED6C2D1F91A1E803DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HashSet<Runtime.Container> _dontFlattenContainers = new HashSet<Runtime.Container>();
		HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* L_0 = (HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586*)il2cpp_codegen_object_new(HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mBEA76E25FE25A85B1F140ED6C2D1F91A1E803DE2(L_0, HashSet_1__ctor_mBEA76E25FE25A85B1F140ED6C2D1F91A1E803DE2_RuntimeMethod_var);
		__this->____dontFlattenContainers_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dontFlattenContainers_21), (void*)L_0);
		// public Story (List<Parsed.Object> toplevelObjects, bool isInclude = false) : base(null, toplevelObjects, isIncludedStory:isInclude)
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_1 = ___toplevelObjects0;
		bool L_2 = ___isInclude1;
		FlowBase__ctor_m9617379391C6CBF8E44705B74D16326088D2A916(__this, (Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD*)NULL, L_1, (List_1_t5A7C284E404753F1786689E097CE59A152638444*)NULL, (bool)0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Story::PreProcessTopLevelObjects(System.Collections.Generic.List`1<Ink.Parsed.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_PreProcessTopLevelObjects_mF8131A2CD850A7C4C3F651EA017920BA1F7B1222 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___topLevelContent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mBCEF5AADA8A0D29F430CC45EF1F72F25DA9726EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5A9752318EEC93FA92913E63EE9368B1E51EE2F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_InsertRange_m81197082109732E9D071CD54E1D42B531AC0F3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mF07CF701C047CD5DE92819D05FB0237F12923C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mCBEBB6515D8558B4F63B567960F012CE96E33BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFBD5335DB80BD5C7F42356A6430C470A4D63CD72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* V_0 = NULL;
	int32_t V_1 = 0;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_2 = NULL;
	IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0* V_3 = NULL;
	List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* V_4 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* V_5 = NULL;
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_6;
	memset((&V_6), 0, sizeof(V_6));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_7 = NULL;
	{
		// var flowsFromOtherFiles = new List<FlowBase> ();
		List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* L_0 = (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB*)il2cpp_codegen_object_new(List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB_il2cpp_TypeInfo_var);
		List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889(L_0, List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889_RuntimeMethod_var);
		V_0 = L_0;
		// int i = 0;
		V_1 = 0;
		goto IL_00d3;
	}

IL_000d:
	{
		// var obj = topLevelContent [i];
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_1 = ___topLevelContent0;
		int32_t L_2 = V_1;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3;
		L_3 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_1, L_2, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		V_2 = L_3;
		// if (obj is IncludedFile) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4 = V_2;
		if (!((IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0*)IsInstClass((RuntimeObject*)L_4, IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0_il2cpp_TypeInfo_var)))
		{
			goto IL_00cf;
		}
	}
	{
		// var file = (IncludedFile)obj;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5 = V_2;
		V_3 = ((IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0*)CastclassClass((RuntimeObject*)L_5, IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0_il2cpp_TypeInfo_var));
		// topLevelContent.RemoveAt (i);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_6 = ___topLevelContent0;
		int32_t L_7 = V_1;
		List_1_RemoveAt_mF07CF701C047CD5DE92819D05FB0237F12923C48(L_6, L_7, List_1_RemoveAt_mF07CF701C047CD5DE92819D05FB0237F12923C48_RuntimeMethod_var);
		// if (file.includedStory) {
		IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0* L_8 = V_3;
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_9;
		L_9 = IncludedFile_get_includedStory_m0264E5FA6B7C163059E8BE7C769E55061D6E4C1D_inline(L_8, NULL);
		bool L_10;
		L_10 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_9, NULL);
		if (!L_10)
		{
			goto IL_00d3;
		}
	}
	{
		// var nonFlowContent = new List<Parsed.Object> ();
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_11 = (List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55*)il2cpp_codegen_object_new(List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55_il2cpp_TypeInfo_var);
		List_1__ctor_mFBD5335DB80BD5C7F42356A6430C470A4D63CD72(L_11, List_1__ctor_mFBD5335DB80BD5C7F42356A6430C470A4D63CD72_RuntimeMethod_var);
		V_4 = L_11;
		// var subStory = file.includedStory;
		IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0* L_12 = V_3;
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_13;
		L_13 = IncludedFile_get_includedStory_m0264E5FA6B7C163059E8BE7C769E55061D6E4C1D_inline(L_12, NULL);
		V_5 = L_13;
		// if (subStory.content != null) {
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_14 = V_5;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_15;
		L_15 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_14, NULL);
		if (!L_15)
		{
			goto IL_00d3;
		}
	}
	{
		// foreach (var subStoryObj in subStory.content) {
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_16 = V_5;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_17;
		L_17 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_16, NULL);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_18;
		L_18 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_17, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_6 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_6), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0090_1;
			}

IL_0066_1:
			{
				// foreach (var subStoryObj in subStory.content) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_19;
				L_19 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_6), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				V_7 = L_19;
				// if (subStoryObj is FlowBase) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_20 = V_7;
				if (!((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)IsInstClass((RuntimeObject*)L_20, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var)))
				{
					goto IL_0087_1;
				}
			}
			{
				// flowsFromOtherFiles.Add ((FlowBase)subStoryObj);
				List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* L_21 = V_0;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_22 = V_7;
				List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_inline(L_21, ((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)CastclassClass((RuntimeObject*)L_22, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var)), List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_RuntimeMethod_var);
				goto IL_0090_1;
			}

IL_0087_1:
			{
				// nonFlowContent.Add (subStoryObj);
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_23 = V_4;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_24 = V_7;
				List_1_Add_m5A9752318EEC93FA92913E63EE9368B1E51EE2F0_inline(L_23, L_24, List_1_Add_m5A9752318EEC93FA92913E63EE9368B1E51EE2F0_RuntimeMethod_var);
			}

IL_0090_1:
			{
				// foreach (var subStoryObj in subStory.content) {
				bool L_25;
				L_25 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_6), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_0066_1;
				}
			}
			{
				goto IL_00a9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a9:
	{
		// nonFlowContent.Add (new Parsed.Text ("\n"));
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_26 = V_4;
		Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* L_27 = (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED*)il2cpp_codegen_object_new(Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED_il2cpp_TypeInfo_var);
		Text__ctor_mCC47ACBD825802241319B32E0BBAB28EEABD7BE0(L_27, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		List_1_Add_m5A9752318EEC93FA92913E63EE9368B1E51EE2F0_inline(L_26, L_27, List_1_Add_m5A9752318EEC93FA92913E63EE9368B1E51EE2F0_RuntimeMethod_var);
		// topLevelContent.InsertRange (i, nonFlowContent);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_28 = ___topLevelContent0;
		int32_t L_29 = V_1;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_30 = V_4;
		List_1_InsertRange_m81197082109732E9D071CD54E1D42B531AC0F3E1(L_28, L_29, L_30, List_1_InsertRange_m81197082109732E9D071CD54E1D42B531AC0F3E1_RuntimeMethod_var);
		// i += nonFlowContent.Count;
		int32_t L_31 = V_1;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_32 = V_4;
		int32_t L_33;
		L_33 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_32, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, L_33));
		// continue;
		goto IL_00d3;
	}

IL_00cf:
	{
		// i++;
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d3:
	{
		// while (i < topLevelContent.Count) {
		int32_t L_35 = V_1;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_36 = ___topLevelContent0;
		int32_t L_37;
		L_37 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_36, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_000d;
		}
	}
	{
		// topLevelContent.AddRange (flowsFromOtherFiles.ToArray());
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_38 = ___topLevelContent0;
		List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* L_39 = V_0;
		FlowBaseU5BU5D_t16780B0F060658CB5F6CD22371E715783A53DF20* L_40;
		L_40 = List_1_ToArray_mCBEBB6515D8558B4F63B567960F012CE96E33BB5(L_39, List_1_ToArray_mCBEBB6515D8558B4F63B567960F012CE96E33BB5_RuntimeMethod_var);
		List_1_AddRange_mBCEF5AADA8A0D29F430CC45EF1F72F25DA9726EF(L_38, (RuntimeObject*)L_40, List_1_AddRange_mBCEF5AADA8A0D29F430CC45EF1F72F25DA9726EF_RuntimeMethod_var);
		// }
		return;
	}
}
// Ink.Runtime.Story Ink.Parsed.Story::ExportRuntime(Ink.ErrorHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* Story_ExportRuntime_mFF2C54C873E2718E88E4F2982E5AACC3A1B2324C (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728* ___errorHandler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mB4FF51425EAC5D355088BF673235771595C2C2E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m80237D55B3C8A89F91AEDF6EEA97E964CE793D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m96701DAA09851839D795DBFFBE541AD7FDDBF39A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFAD28A4AD3D41F7430DD3C8AA00B50505D45B168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mB3D8551E03496E45CB5D68058A63A3DFEFE6F35B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m6C949EF2044C18D5BB5A889D60D195A11BE22B69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB3E6F224B561B6953AE6814C34334DF8917BFC0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m054E8A41329353C6B3766814A91704B5E2E87390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m63B8AF385972D5864FFDD46485F7B58A97F1E77C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF4F6F2AA60837635347C6E6A0ABA10B0DF354B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0859E7EB111114970E0EEEE2F42B885680F4F344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m12335FB814C6C5B848D108D4A232E326FD1C2AFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m78DCAA6637B4AB25991AD72F32AB7F288C10B29D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m26B937F5FF3C7B7320DCEB15714EA0288EFAA5BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6A7426E8C116E2CD2DBAD408C3A01C2F0D394DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC6ACA691B775B80C7B2AFFA23DF097D7EE70AF4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mD7DDCAFDD092A3FE66808181161A5CC59C32AC82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m648C3909C024CDF768979896869147D7419149F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA51DBCB8C46E069011DFC7F42326D4AEEAEA32BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m348505C31E656F7C5F28165620EF27119D805BB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m993230E35DF67B7C3E14E1B6FEBFE234AB1BEE84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF74A80C08203240AA21DF548A75AA891A2BA9062_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEAA34814BB98964FD8B62D24AF030A7829378907_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindAll_TisConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA_m74BDB1CE93F756F937FB0BC1C18BA142CF0C5C2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindAll_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_mFFA3E83A3C6C3CC89AD0DC6F00460311015CD70A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18AE8E87420A5CC9A7FA0789118773C846F2CB8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8636634916056B376E0921A5D119E8B11C100BB0);
		s_Il2CppMethodInitialized = true;
	}
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_0 = NULL;
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_1 = NULL;
	List_1_tEAA34814BB98964FD8B62D24AF030A7829378907* V_2 = NULL;
	Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* V_3 = NULL;
	Enumerator_t991C2824424E8830112FADEC37C39FA54A2FDAC1 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* V_5 = NULL;
	Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* V_6 = NULL;
	String_t* V_7 = NULL;
	Enumerator_tE7D1E550D963BCDC5ACB63A3099ED81CA85A3F3A V_8;
	memset((&V_8), 0, sizeof(V_8));
	ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* V_9 = NULL;
	Enumerator_t67A9F5376E8773E1B1EA88376D61BA00993080A3 V_10;
	memset((&V_10), 0, sizeof(V_10));
	KeyValuePair_2_t44892EA16A995E68634C6E2AF928750976CA6D02 V_11;
	memset((&V_11), 0, sizeof(V_11));
	String_t* V_12 = NULL;
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* V_13 = NULL;
	VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* V_14 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B13_0 = NULL;
	Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* G_B13_1 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B12_0 = NULL;
	Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* G_B12_1 = NULL;
	String_t* G_B14_0 = NULL;
	Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* G_B14_1 = NULL;
	{
		// _errorHandler = errorHandler;
		ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728* L_0 = ___errorHandler0;
		__this->____errorHandler_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____errorHandler_18), (void*)L_0);
		// constants = new Dictionary<string, Expression> ();
		Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* L_1 = (Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301*)il2cpp_codegen_object_new(Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFAD28A4AD3D41F7430DD3C8AA00B50505D45B168(L_1, Dictionary_2__ctor_mFAD28A4AD3D41F7430DD3C8AA00B50505D45B168_RuntimeMethod_var);
		__this->___constants_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___constants_15), (void*)L_1);
		// foreach (var constDecl in FindAll<ConstantDeclaration> ()) {
		List_1_t67AAD19C0FFF8E5732D2ABD9BCF0AB17A6313BAF* L_2;
		L_2 = Object_FindAll_TisConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA_m74BDB1CE93F756F937FB0BC1C18BA142CF0C5C2A(__this, (FindQueryFunc_1_t88DB34734FC78E98F67D0DD2A9EA542043B35D2A*)NULL, Object_FindAll_TisConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA_m74BDB1CE93F756F937FB0BC1C18BA142CF0C5C2A_RuntimeMethod_var);
		Enumerator_t991C2824424E8830112FADEC37C39FA54A2FDAC1 L_3;
		L_3 = List_1_GetEnumerator_m348505C31E656F7C5F28165620EF27119D805BB4(L_2, List_1_GetEnumerator_m348505C31E656F7C5F28165620EF27119D805BB4_RuntimeMethod_var);
		V_4 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m63B8AF385972D5864FFDD46485F7B58A97F1E77C((&V_4), Enumerator_Dispose_m63B8AF385972D5864FFDD46485F7B58A97F1E77C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0092_1;
			}

IL_0022_1:
			{
				// foreach (var constDecl in FindAll<ConstantDeclaration> ()) {
				ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* L_4;
				L_4 = Enumerator_get_Current_mC6ACA691B775B80C7B2AFFA23DF097D7EE70AF4C_inline((&V_4), Enumerator_get_Current_mC6ACA691B775B80C7B2AFFA23DF097D7EE70AF4C_RuntimeMethod_var);
				V_5 = L_4;
				// Parsed.Expression existingDefinition = null;
				V_6 = (Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D*)NULL;
				// if (constants.TryGetValue (constDecl.constantName, out existingDefinition)) {
				Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* L_5 = __this->___constants_15;
				ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* L_6 = V_5;
				String_t* L_7;
				L_7 = ConstantDeclaration_get_constantName_mE522F21F2F045F8DE74DF39A64772E51A8401092(L_6, NULL);
				bool L_8;
				L_8 = Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F(L_5, L_7, (&V_6), Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F_RuntimeMethod_var);
				if (!L_8)
				{
					goto IL_0079_1;
				}
			}
			{
				// if (!existingDefinition.Equals (constDecl.expression)) {
				Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_9 = V_6;
				ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* L_10 = V_5;
				Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_11;
				L_11 = ConstantDeclaration_get_expression_mDD0F91B64454035715A6CC71941060766DB4BCDD_inline(L_10, NULL);
				bool L_12;
				L_12 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_9, L_11);
				if (L_12)
				{
					goto IL_0079_1;
				}
			}
			{
				// var errorMsg = string.Format ("CONST '{0}' has been redefined with a different value. Multiple definitions of the same CONST are valid so long as they contain the same value. Initial definition was on {1}.", constDecl.constantName, existingDefinition.debugMetadata);
				ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* L_13 = V_5;
				String_t* L_14;
				L_14 = ConstantDeclaration_get_constantName_mE522F21F2F045F8DE74DF39A64772E51A8401092(L_13, NULL);
				Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_15 = V_6;
				DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_16;
				L_16 = Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28(L_15, NULL);
				String_t* L_17;
				L_17 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral18AE8E87420A5CC9A7FA0789118773C846F2CB8B, L_14, L_16, NULL);
				V_7 = L_17;
				// Error (errorMsg, constDecl, isWarning:false);
				String_t* L_18 = V_7;
				ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* L_19 = V_5;
				VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_18, L_19, (bool)0);
			}

IL_0079_1:
			{
				// constants [constDecl.constantName] = constDecl.expression;
				Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* L_20 = __this->___constants_15;
				ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* L_21 = V_5;
				String_t* L_22;
				L_22 = ConstantDeclaration_get_constantName_mE522F21F2F045F8DE74DF39A64772E51A8401092(L_21, NULL);
				ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* L_23 = V_5;
				Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_24;
				L_24 = ConstantDeclaration_get_expression_mDD0F91B64454035715A6CC71941060766DB4BCDD_inline(L_23, NULL);
				Dictionary_2_set_Item_mB3E6F224B561B6953AE6814C34334DF8917BFC0D(L_20, L_22, L_24, Dictionary_2_set_Item_mB3E6F224B561B6953AE6814C34334DF8917BFC0D_RuntimeMethod_var);
			}

IL_0092_1:
			{
				// foreach (var constDecl in FindAll<ConstantDeclaration> ()) {
				bool L_25;
				L_25 = Enumerator_MoveNext_m78DCAA6637B4AB25991AD72F32AB7F288C10B29D((&V_4), Enumerator_MoveNext_m78DCAA6637B4AB25991AD72F32AB7F288C10B29D_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_00ab;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		// _listDefs = new Dictionary<string, ListDefinition> ();
		Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* L_26 = (Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398*)il2cpp_codegen_object_new(Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m96701DAA09851839D795DBFFBE541AD7FDDBF39A(L_26, Dictionary_2__ctor_m96701DAA09851839D795DBFFBE541AD7FDDBF39A_RuntimeMethod_var);
		__this->____listDefs_22 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listDefs_22), (void*)L_26);
		// foreach (var listDef in FindAll<ListDefinition> ()) {
		List_1_t2A94DBFCBC352D91C986BE84C30FEBFF0678BAD2* L_27;
		L_27 = Object_FindAll_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_mFFA3E83A3C6C3CC89AD0DC6F00460311015CD70A(__this, (FindQueryFunc_1_t10539BCA97AC966ED5258992D5E813042F7498C7*)NULL, Object_FindAll_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_mFFA3E83A3C6C3CC89AD0DC6F00460311015CD70A_RuntimeMethod_var);
		Enumerator_tE7D1E550D963BCDC5ACB63A3099ED81CA85A3F3A L_28;
		L_28 = List_1_GetEnumerator_m993230E35DF67B7C3E14E1B6FEBFE234AB1BEE84(L_27, List_1_GetEnumerator_m993230E35DF67B7C3E14E1B6FEBFE234AB1BEE84_RuntimeMethod_var);
		V_8 = L_28;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fa:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m054E8A41329353C6B3766814A91704B5E2E87390((&V_8), Enumerator_Dispose_m054E8A41329353C6B3766814A91704B5E2E87390_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ef_1;
			}

IL_00c6_1:
			{
				// foreach (var listDef in FindAll<ListDefinition> ()) {
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_29;
				L_29 = Enumerator_get_Current_m26B937F5FF3C7B7320DCEB15714EA0288EFAA5BB_inline((&V_8), Enumerator_get_Current_m26B937F5FF3C7B7320DCEB15714EA0288EFAA5BB_RuntimeMethod_var);
				V_9 = L_29;
				// _listDefs [listDef.identifier?.name] = listDef;
				Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* L_30 = __this->____listDefs_22;
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_31 = V_9;
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_32 = L_31->___identifier_6;
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_33 = L_32;
				G_B12_0 = L_33;
				G_B12_1 = L_30;
				if (L_33)
				{
					G_B13_0 = L_33;
					G_B13_1 = L_30;
					goto IL_00e3_1;
				}
			}
			{
				G_B14_0 = ((String_t*)(NULL));
				G_B14_1 = G_B12_1;
				goto IL_00e8_1;
			}

IL_00e3_1:
			{
				String_t* L_34 = G_B13_0->___name_0;
				G_B14_0 = L_34;
				G_B14_1 = G_B13_1;
			}

IL_00e8_1:
			{
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_35 = V_9;
				Dictionary_2_set_Item_m6C949EF2044C18D5BB5A889D60D195A11BE22B69(G_B14_1, G_B14_0, L_35, Dictionary_2_set_Item_m6C949EF2044C18D5BB5A889D60D195A11BE22B69_RuntimeMethod_var);
			}

IL_00ef_1:
			{
				// foreach (var listDef in FindAll<ListDefinition> ()) {
				bool L_36;
				L_36 = Enumerator_MoveNext_m0859E7EB111114970E0EEEE2F42B885680F4F344((&V_8), Enumerator_MoveNext_m0859E7EB111114970E0EEEE2F42B885680F4F344_RuntimeMethod_var);
				if (L_36)
				{
					goto IL_00c6_1;
				}
			}
			{
				goto IL_0108;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0108:
	{
		// externals = new Dictionary<string, ExternalDeclaration> ();
		Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0* L_37 = (Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0*)il2cpp_codegen_object_new(Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m80237D55B3C8A89F91AEDF6EEA97E964CE793D22(L_37, Dictionary_2__ctor_m80237D55B3C8A89F91AEDF6EEA97E964CE793D22_RuntimeMethod_var);
		__this->___externals_16 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___externals_16), (void*)L_37);
		// ResolveWeavePointNaming ();
		FlowBase_ResolveWeavePointNaming_m8F5BB832C501D3ABC6080126EAC9FC1305905693(__this, NULL);
		// var rootContainer = runtimeObject as Runtime.Container;
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_38;
		L_38 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(__this, NULL);
		V_0 = ((Container_t74302BC1028974B0A346A43F334AECB681D79579*)IsInstClass((RuntimeObject*)L_38, Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var));
		// var variableInitialisation = new Runtime.Container ();
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_39 = (Container_t74302BC1028974B0A346A43F334AECB681D79579*)il2cpp_codegen_object_new(Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		Container__ctor_mE49EAAD4892EDEFFDA64A7A54823A021ECBF4F84(L_39, NULL);
		V_1 = L_39;
		// variableInitialisation.AddContent (Runtime.ControlCommand.EvalStart ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_40 = V_1;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_41;
		L_41 = ControlCommand_EvalStart_m5552F30F2BAF74C7B324DFF8E150AF206369A412(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_40, L_41, NULL);
		// var runtimeLists = new List<Runtime.ListDefinition> ();
		List_1_tEAA34814BB98964FD8B62D24AF030A7829378907* L_42 = (List_1_tEAA34814BB98964FD8B62D24AF030A7829378907*)il2cpp_codegen_object_new(List_1_tEAA34814BB98964FD8B62D24AF030A7829378907_il2cpp_TypeInfo_var);
		List_1__ctor_mF74A80C08203240AA21DF548A75AA891A2BA9062(L_42, List_1__ctor_mF74A80C08203240AA21DF548A75AA891A2BA9062_RuntimeMethod_var);
		V_2 = L_42;
		// foreach (var nameDeclPair in variableDeclarations) {
		Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0* L_43 = ((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)__this)->___variableDeclarations_8;
		Enumerator_t67A9F5376E8773E1B1EA88376D61BA00993080A3 L_44;
		L_44 = Dictionary_2_GetEnumerator_mB4FF51425EAC5D355088BF673235771595C2C2E0(L_43, Dictionary_2_GetEnumerator_mB4FF51425EAC5D355088BF673235771595C2C2E0_RuntimeMethod_var);
		V_10 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01f0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF4F6F2AA60837635347C6E6A0ABA10B0DF354B8A((&V_10), Enumerator_Dispose_mF4F6F2AA60837635347C6E6A0ABA10B0DF354B8A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01e2_1;
			}

IL_014e_1:
			{
				// foreach (var nameDeclPair in variableDeclarations) {
				KeyValuePair_2_t44892EA16A995E68634C6E2AF928750976CA6D02 L_45;
				L_45 = Enumerator_get_Current_m6A7426E8C116E2CD2DBAD408C3A01C2F0D394DE2_inline((&V_10), Enumerator_get_Current_m6A7426E8C116E2CD2DBAD408C3A01C2F0D394DE2_RuntimeMethod_var);
				V_11 = L_45;
				// var varName = nameDeclPair.Key;
				String_t* L_46;
				L_46 = KeyValuePair_2_get_Key_mD7DDCAFDD092A3FE66808181161A5CC59C32AC82_inline((&V_11), KeyValuePair_2_get_Key_mD7DDCAFDD092A3FE66808181161A5CC59C32AC82_RuntimeMethod_var);
				V_12 = L_46;
				// var varDecl = nameDeclPair.Value;
				VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_47;
				L_47 = KeyValuePair_2_get_Value_m648C3909C024CDF768979896869147D7419149F0_inline((&V_11), KeyValuePair_2_get_Value_m648C3909C024CDF768979896869147D7419149F0_RuntimeMethod_var);
				V_13 = L_47;
				// if (varDecl.isGlobalDeclaration) {
				VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_48 = V_13;
				bool L_49;
				L_49 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(L_48, NULL);
				if (!L_49)
				{
					goto IL_01e2_1;
				}
			}
			{
				// if (varDecl.listDefinition != null) {
				VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_50 = V_13;
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_51;
				L_51 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(L_50, NULL);
				bool L_52;
				L_52 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_51, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
				if (!L_52)
				{
					goto IL_01bb_1;
				}
			}
			{
				// _listDefs[varName] = varDecl.listDefinition;
				Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* L_53 = __this->____listDefs_22;
				String_t* L_54 = V_12;
				VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_55 = V_13;
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_56;
				L_56 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(L_55, NULL);
				Dictionary_2_set_Item_m6C949EF2044C18D5BB5A889D60D195A11BE22B69(L_53, L_54, L_56, Dictionary_2_set_Item_m6C949EF2044C18D5BB5A889D60D195A11BE22B69_RuntimeMethod_var);
				// variableInitialisation.AddContent (varDecl.listDefinition.runtimeObject);
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_57 = V_1;
				VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_58 = V_13;
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_59;
				L_59 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(L_58, NULL);
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_60;
				L_60 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_59, NULL);
				Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_57, L_60, NULL);
				// runtimeLists.Add (varDecl.listDefinition.runtimeListDefinition);
				List_1_tEAA34814BB98964FD8B62D24AF030A7829378907* L_61 = V_2;
				VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_62 = V_13;
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_63;
				L_63 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(L_62, NULL);
				ListDefinition_t9DBDAC7E019BF524675B9B821F706894EEC42CE6* L_64;
				L_64 = ListDefinition_get_runtimeListDefinition_mD053577FFD9CC1DCAB4A19F9D48A39F7FE8BA683(L_63, NULL);
				List_1_Add_mA51DBCB8C46E069011DFC7F42326D4AEEAEA32BF_inline(L_61, L_64, List_1_Add_mA51DBCB8C46E069011DFC7F42326D4AEEAEA32BF_RuntimeMethod_var);
				goto IL_01c8_1;
			}

IL_01bb_1:
			{
				// varDecl.expression.GenerateIntoContainer (variableInitialisation);
				VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_65 = V_13;
				Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_66;
				L_66 = VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831_inline(L_65, NULL);
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_67 = V_1;
				VirtualActionInvoker1< Container_t74302BC1028974B0A346A43F334AECB681D79579* >::Invoke(11 /* System.Void Ink.Parsed.Expression::GenerateIntoContainer(Ink.Runtime.Container) */, L_66, L_67);
			}

IL_01c8_1:
			{
				// var runtimeVarAss = new Runtime.VariableAssignment (varName, isNewDeclaration:true);
				String_t* L_68 = V_12;
				VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* L_69 = (VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9*)il2cpp_codegen_object_new(VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9_il2cpp_TypeInfo_var);
				VariableAssignment__ctor_m34573492CA6DA1C98F74FD9F2F3ECCB2FCE7E1B6(L_69, L_68, (bool)1, NULL);
				V_14 = L_69;
				// runtimeVarAss.isGlobal = true;
				VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* L_70 = V_14;
				VariableAssignment_set_isGlobal_m7E2A5FFCF8C182807B5941792682A0A1D26535DE_inline(L_70, (bool)1, NULL);
				// variableInitialisation.AddContent (runtimeVarAss);
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_71 = V_1;
				VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* L_72 = V_14;
				Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_71, L_72, NULL);
			}

IL_01e2_1:
			{
				// foreach (var nameDeclPair in variableDeclarations) {
				bool L_73;
				L_73 = Enumerator_MoveNext_m12335FB814C6C5B848D108D4A232E326FD1C2AFA((&V_10), Enumerator_MoveNext_m12335FB814C6C5B848D108D4A232E326FD1C2AFA_RuntimeMethod_var);
				if (L_73)
				{
					goto IL_014e_1;
				}
			}
			{
				goto IL_01fe;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01fe:
	{
		// variableInitialisation.AddContent (Runtime.ControlCommand.EvalEnd ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_74 = V_1;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_75;
		L_75 = ControlCommand_EvalEnd_mB619929D3EB97531D9F354283A15D3EA22CD983F(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_74, L_75, NULL);
		// variableInitialisation.AddContent (Runtime.ControlCommand.End ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_76 = V_1;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_77;
		L_77 = ControlCommand_End_m491EC9214C6D6CF568CEEA10222A5F568047CE21(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_76, L_77, NULL);
		// if (variableDeclarations.Count > 0) {
		Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0* L_78 = ((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)__this)->___variableDeclarations_8;
		int32_t L_79;
		L_79 = Dictionary_2_get_Count_mB3D8551E03496E45CB5D68058A63A3DFEFE6F35B(L_78, Dictionary_2_get_Count_mB3D8551E03496E45CB5D68058A63A3DFEFE6F35B_RuntimeMethod_var);
		if ((((int32_t)L_79) <= ((int32_t)0)))
		{
			goto IL_0234;
		}
	}
	{
		// variableInitialisation.name = "global decl";
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_80 = V_1;
		Container_set_name_m8F5A2754D5F5B724CDB73F5754F75D179253D1B1_inline(L_80, _stringLiteral8636634916056B376E0921A5D119E8B11C100BB0, NULL);
		// rootContainer.AddToNamedContentOnly (variableInitialisation);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_81 = V_0;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_82 = V_1;
		Container_AddToNamedContentOnly_mE22F23FF9DA10C2E08C20DD7DFCF0B2A3C689461(L_81, L_82, NULL);
	}

IL_0234:
	{
		// rootContainer.AddContent (Runtime.ControlCommand.Done ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_83 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_84;
		L_84 = ControlCommand_Done_mB19ECD1047B9145F4421E0186A7840BEB532FD09(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_83, L_84, NULL);
		// var runtimeStory = new Runtime.Story (rootContainer, runtimeLists);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_85 = V_0;
		List_1_tEAA34814BB98964FD8B62D24AF030A7829378907* L_86 = V_2;
		Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* L_87 = (Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A*)il2cpp_codegen_object_new(Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A_il2cpp_TypeInfo_var);
		Story__ctor_m227850ACF45FE0868365FF3884EFB809BDE8434A(L_87, L_85, L_86, NULL);
		V_3 = L_87;
		// runtimeObject = runtimeStory;
		Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* L_88 = V_3;
		Object_set_runtimeObject_m57463274E68C0F3DC1CB6788CD8DD795801B7FE8_inline(__this, L_88, NULL);
		// if (_hadError)
		bool L_89 = __this->____hadError_19;
		if (!L_89)
		{
			goto IL_0258;
		}
	}
	{
		// return null;
		return (Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A*)NULL;
	}

IL_0258:
	{
		// FlattenContainersIn (rootContainer);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_90 = V_0;
		Story_FlattenContainersIn_m6831DB8B004021EA48FE64AF521F8FC72D28A64E(__this, L_90, NULL);
		// ResolveReferences (this);
		VirtualActionInvoker1< Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* >::Invoke(9 /* System.Void Ink.Parsed.Object::ResolveReferences(Ink.Parsed.Story) */, __this, __this);
		// if (_hadError)
		bool L_91 = __this->____hadError_19;
		if (!L_91)
		{
			goto IL_0270;
		}
	}
	{
		// return null;
		return (Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A*)NULL;
	}

IL_0270:
	{
		// runtimeStory.ResetState ();
		Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* L_92 = V_3;
		Story_ResetState_m35B852B571E1F3CB65A4CDD208CEE21D3E359C9B(L_92, NULL);
		// return runtimeStory;
		Story_t1FA227B6D8459FDD55218768DFAA17D93B2D057A* L_93 = V_3;
		return L_93;
	}
}
// Ink.Parsed.ListDefinition Ink.Parsed.Story::ResolveList(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* Story_ResolveList_m3BF53919891DB09B01026E81083C365F04F76AD6 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, String_t* ___listName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m95EB4406228F27D45F9EEF25AFF40A9FF2577C4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* V_0 = NULL;
	{
		// if (!_listDefs.TryGetValue (listName, out list))
		Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* L_0 = __this->____listDefs_22;
		String_t* L_1 = ___listName0;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m95EB4406228F27D45F9EEF25AFF40A9FF2577C4E(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m95EB4406228F27D45F9EEF25AFF40A9FF2577C4E_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return null;
		return (ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65*)NULL;
	}

IL_0012:
	{
		// return list;
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_3 = V_0;
		return L_3;
	}
}
// Ink.Parsed.ListElementDefinition Ink.Parsed.Story::ResolveListItem(System.String,System.String,Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* Story_ResolveListItem_m857290E9E49BEC424C7D3A54E6171F11DE081302 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, String_t* ___listName0, String_t* ___itemName1, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___source2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m4B109CA28C72E6EA470C7DC36B63B66EF9204A25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m95EB4406228F27D45F9EEF25AFF40A9FF2577C4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD7214F14C1BAA998274190AC37240F40A399C28F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCD8574B18EAD84CC0914D6D0C6D73F3BFC0D8E90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m711969C4E360FC0725DE03CBA64788D763F715B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mFD10793F7A8114D83CDAD42FA058A63DB117AB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E2A118D02EEC0264ECB711997DC50620920E7B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968938F0BED5019FA928295E1C69B47C868B5F69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2DA18276C09711F93B7634679484CD9E5BB7498);
		s_Il2CppMethodInitialized = true;
	}
	ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* V_0 = NULL;
	ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* V_1 = NULL;
	ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* V_2 = NULL;
	Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844 V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_tF6D8142A0F6DC48B7EC7A1321A329733A7B86266 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* V_5 = NULL;
	ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* V_6 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B10_4 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B9_4 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B11_4 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B13_4 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B12_4 = NULL;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B14_4 = NULL;
	{
		// ListDefinition listDef = null;
		V_0 = (ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65*)NULL;
		// if (listName != null) {
		String_t* L_0 = ___listName0;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// if (!_listDefs.TryGetValue (listName, out listDef))
		Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* L_1 = __this->____listDefs_22;
		String_t* L_2 = ___listName0;
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m95EB4406228F27D45F9EEF25AFF40A9FF2577C4E(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_m95EB4406228F27D45F9EEF25AFF40A9FF2577C4E_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return null;
		return (ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD*)NULL;
	}

IL_0017:
	{
		// return listDef.ItemNamed (itemName);
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_4 = V_0;
		String_t* L_5 = ___itemName1;
		ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* L_6;
		L_6 = ListDefinition_ItemNamed_mE935A909A9DC7F9063B349E85F9137234AA5031F(L_4, L_5, NULL);
		return L_6;
	}

IL_001f:
	{
		// ListElementDefinition foundItem = null;
		V_1 = (ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD*)NULL;
		// ListDefinition originalFoundList = null;
		V_2 = (ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65*)NULL;
		// foreach (var namedList in _listDefs) {
		Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* L_7 = __this->____listDefs_22;
		Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844 L_8;
		L_8 = Dictionary_2_GetEnumerator_m4B109CA28C72E6EA470C7DC36B63B66EF9204A25(L_7, Dictionary_2_GetEnumerator_m4B109CA28C72E6EA470C7DC36B63B66EF9204A25_RuntimeMethod_var);
		V_3 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD7214F14C1BAA998274190AC37240F40A399C28F((&V_3), Enumerator_Dispose_mD7214F14C1BAA998274190AC37240F40A399C28F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c4_1;
			}

IL_0034_1:
			{
				// foreach (var namedList in _listDefs) {
				KeyValuePair_2_tF6D8142A0F6DC48B7EC7A1321A329733A7B86266 L_9;
				L_9 = Enumerator_get_Current_m711969C4E360FC0725DE03CBA64788D763F715B4_inline((&V_3), Enumerator_get_Current_m711969C4E360FC0725DE03CBA64788D763F715B4_RuntimeMethod_var);
				V_4 = L_9;
				// var listToSearch = namedList.Value;
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_10;
				L_10 = KeyValuePair_2_get_Value_mFD10793F7A8114D83CDAD42FA058A63DB117AB6F_inline((&V_4), KeyValuePair_2_get_Value_mFD10793F7A8114D83CDAD42FA058A63DB117AB6F_RuntimeMethod_var);
				V_5 = L_10;
				// var itemInThisList = listToSearch.ItemNamed (itemName);
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_11 = V_5;
				String_t* L_12 = ___itemName1;
				ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* L_13;
				L_13 = ListDefinition_ItemNamed_mE935A909A9DC7F9063B349E85F9137234AA5031F(L_11, L_12, NULL);
				V_6 = L_13;
				// if (itemInThisList) {
				ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* L_14 = V_6;
				bool L_15;
				L_15 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_14, NULL);
				if (!L_15)
				{
					goto IL_00c4_1;
				}
			}
			{
				// if (foundItem != null) {
				ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* L_16 = V_1;
				bool L_17;
				L_17 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_16, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
				if (!L_17)
				{
					goto IL_00be_1;
				}
			}
			{
				// Error ("Ambiguous item name '" + itemName + "' found in multiple sets, including "+originalFoundList.identifier+" and "+listToSearch.identifier, source, isWarning:false);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
				ArrayElementTypeCheck (L_19, _stringLiteral968938F0BED5019FA928295E1C69B47C868B5F69);
				(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral968938F0BED5019FA928295E1C69B47C868B5F69);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
				String_t* L_21 = ___itemName1;
				ArrayElementTypeCheck (L_20, L_21);
				(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_21);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_20;
				ArrayElementTypeCheck (L_22, _stringLiteralB2DA18276C09711F93B7634679484CD9E5BB7498);
				(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB2DA18276C09711F93B7634679484CD9E5BB7498);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_24 = V_2;
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_25 = L_24->___identifier_6;
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_26 = L_25;
				G_B9_0 = L_26;
				G_B9_1 = 3;
				G_B9_2 = L_23;
				G_B9_3 = L_23;
				G_B9_4 = __this;
				if (L_26)
				{
					G_B10_0 = L_26;
					G_B10_1 = 3;
					G_B10_2 = L_23;
					G_B10_3 = L_23;
					G_B10_4 = __this;
					goto IL_008c_1;
				}
			}
			{
				G_B11_0 = ((String_t*)(NULL));
				G_B11_1 = G_B9_1;
				G_B11_2 = G_B9_2;
				G_B11_3 = G_B9_3;
				G_B11_4 = G_B9_4;
				goto IL_0091_1;
			}

IL_008c_1:
			{
				String_t* L_27;
				L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B10_0);
				G_B11_0 = L_27;
				G_B11_1 = G_B10_1;
				G_B11_2 = G_B10_2;
				G_B11_3 = G_B10_3;
				G_B11_4 = G_B10_4;
			}

IL_0091_1:
			{
				ArrayElementTypeCheck (G_B11_2, G_B11_0);
				(G_B11_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = G_B11_3;
				ArrayElementTypeCheck (L_28, _stringLiteral6E2A118D02EEC0264ECB711997DC50620920E7B0);
				(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral6E2A118D02EEC0264ECB711997DC50620920E7B0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_30 = V_5;
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_31 = L_30->___identifier_6;
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_32 = L_31;
				G_B12_0 = L_32;
				G_B12_1 = 5;
				G_B12_2 = L_29;
				G_B12_3 = L_29;
				G_B12_4 = G_B11_4;
				if (L_32)
				{
					G_B13_0 = L_32;
					G_B13_1 = 5;
					G_B13_2 = L_29;
					G_B13_3 = L_29;
					G_B13_4 = G_B11_4;
					goto IL_00aa_1;
				}
			}
			{
				G_B14_0 = ((String_t*)(NULL));
				G_B14_1 = G_B12_1;
				G_B14_2 = G_B12_2;
				G_B14_3 = G_B12_3;
				G_B14_4 = G_B12_4;
				goto IL_00af_1;
			}

IL_00aa_1:
			{
				String_t* L_33;
				L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B13_0);
				G_B14_0 = L_33;
				G_B14_1 = G_B13_1;
				G_B14_2 = G_B13_2;
				G_B14_3 = G_B13_3;
				G_B14_4 = G_B13_4;
			}

IL_00af_1:
			{
				ArrayElementTypeCheck (G_B14_2, G_B14_0);
				(G_B14_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B14_1), (String_t*)G_B14_0);
				String_t* L_34;
				L_34 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(G_B14_3, NULL);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_35 = ___source2;
				VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, G_B14_4, L_34, L_35, (bool)0);
				goto IL_00c4_1;
			}

IL_00be_1:
			{
				// foundItem = itemInThisList;
				ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* L_36 = V_6;
				V_1 = L_36;
				// originalFoundList = listToSearch;
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_37 = V_5;
				V_2 = L_37;
			}

IL_00c4_1:
			{
				// foreach (var namedList in _listDefs) {
				bool L_38;
				L_38 = Enumerator_MoveNext_mCD8574B18EAD84CC0914D6D0C6D73F3BFC0D8E90((&V_3), Enumerator_MoveNext_mCD8574B18EAD84CC0914D6D0C6D73F3BFC0D8E90_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_0034_1;
				}
			}
			{
				goto IL_00e0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e0:
	{
		// return foundItem;
		ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* L_39 = V_1;
		return L_39;
	}
}
// System.Void Ink.Parsed.Story::FlattenContainersIn(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_FlattenContainersIn_m6831DB8B004021EA48FE64AF521F8FC72D28A64E (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m3F3537AB1C5407F28DCE82734A44B9867552F677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6A3B34030CCB4372A88686FD98B98559C7802874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m93AA6E5260B31B0E4A015483CD40732F6079367E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA0ADD22FB2ACC3151922FA044E9938ED618FFE78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6B49178CB9527B57DB94E5731B3E3F92DFE48DDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDBC2140ABF4BFE23ACFEC8FC7084261C08F60DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFB93B9DD5E695BD31507F275338EA1AB8E0A17B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m32E970B18F5B70BFE0C4A1913DAA8875E50D8F7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53028144BDF8B628A22F679031E7BCE3BBAB6078_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC575015244897CC52C360CCFCD80B4F917A2DC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mB13C4C374F94EB008D025E53507C435EEB66B255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m14D518BFE7CB52396D67A492025306F7D6FCEB03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mBEA76E25FE25A85B1F140ED6C2D1F91A1E803DE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mF2BDBBCCE3A7432DD1B1E16A68584F08AA0EB138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBB5A38567E85BD23F19A6F563A9325AAB9FFFB2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* V_0 = NULL;
	Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_2 = NULL;
	Enumerator_tC49652DEA3A38051A5EB7023060F5273631F66F5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t5E4CC453E09A531E3B06120F018B9F3132190A81 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_5 = NULL;
	Enumerator_t2F1BB79EEB703736F808D627A13B5D97A1C96271 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_7 = NULL;
	{
		// var innerContainers = new HashSet<Runtime.Container> ();
		HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* L_0 = (HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586*)il2cpp_codegen_object_new(HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mBEA76E25FE25A85B1F140ED6C2D1F91A1E803DE2(L_0, HashSet_1__ctor_mBEA76E25FE25A85B1F140ED6C2D1F91A1E803DE2_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (var c in container.content) {
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_1 = ___container0;
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_2;
		L_2 = Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD_inline(L_1, NULL);
		Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A L_3;
		L_3 = List_1_GetEnumerator_mBB5A38567E85BD23F19A6F563A9325AAB9FFFB2F(L_2, List_1_GetEnumerator_mBB5A38567E85BD23F19A6F563A9325AAB9FFFB2F_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m93AA6E5260B31B0E4A015483CD40732F6079367E((&V_1), Enumerator_Dispose_m93AA6E5260B31B0E4A015483CD40732F6079367E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0031_1;
			}

IL_0014_1:
			{
				// foreach (var c in container.content) {
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_4;
				L_4 = Enumerator_get_Current_mC575015244897CC52C360CCFCD80B4F917A2DC37_inline((&V_1), Enumerator_get_Current_mC575015244897CC52C360CCFCD80B4F917A2DC37_RuntimeMethod_var);
				// var innerContainer = c as Runtime.Container;
				V_2 = ((Container_t74302BC1028974B0A346A43F334AECB681D79579*)IsInstClass((RuntimeObject*)L_4, Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var));
				// if (innerContainer)
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_5 = V_2;
				bool L_6;
				L_6 = Object_op_Implicit_m3AA10F430AAFC09D12BF9F4DB10404F2C4527CCC(L_5, NULL);
				if (!L_6)
				{
					goto IL_0031_1;
				}
			}
			{
				// innerContainers.Add (innerContainer);
				HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* L_7 = V_0;
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_8 = V_2;
				bool L_9;
				L_9 = HashSet_1_Add_mB13C4C374F94EB008D025E53507C435EEB66B255(L_7, L_8, HashSet_1_Add_mB13C4C374F94EB008D025E53507C435EEB66B255_RuntimeMethod_var);
			}

IL_0031_1:
			{
				// foreach (var c in container.content) {
				bool L_10;
				L_10 = Enumerator_MoveNext_mDBC2140ABF4BFE23ACFEC8FC7084261C08F60DF6((&V_1), Enumerator_MoveNext_mDBC2140ABF4BFE23ACFEC8FC7084261C08F60DF6_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// if (container.namedContent != null) {
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_11 = ___container0;
		Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49* L_12;
		L_12 = Container_get_namedContent_m887ECF350132F5C92388DCC11BDD9BF07267C86A_inline(L_11, NULL);
		if (!L_12)
		{
			goto IL_00a2;
		}
	}
	{
		// foreach (var keyValue in container.namedContent) {
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_13 = ___container0;
		Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49* L_14;
		L_14 = Container_get_namedContent_m887ECF350132F5C92388DCC11BDD9BF07267C86A_inline(L_13, NULL);
		Enumerator_tC49652DEA3A38051A5EB7023060F5273631F66F5 L_15;
		L_15 = Dictionary_2_GetEnumerator_m3F3537AB1C5407F28DCE82734A44B9867552F677(L_14, Dictionary_2_GetEnumerator_m3F3537AB1C5407F28DCE82734A44B9867552F677_RuntimeMethod_var);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0094:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6A3B34030CCB4372A88686FD98B98559C7802874((&V_3), Enumerator_Dispose_m6A3B34030CCB4372A88686FD98B98559C7802874_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0089_1;
			}

IL_0060_1:
			{
				// foreach (var keyValue in container.namedContent) {
				KeyValuePair_2_t5E4CC453E09A531E3B06120F018B9F3132190A81 L_16;
				L_16 = Enumerator_get_Current_m32E970B18F5B70BFE0C4A1913DAA8875E50D8F7E_inline((&V_3), Enumerator_get_Current_m32E970B18F5B70BFE0C4A1913DAA8875E50D8F7E_RuntimeMethod_var);
				V_4 = L_16;
				// var namedInnerContainer = keyValue.Value as Runtime.Container;
				RuntimeObject* L_17;
				L_17 = KeyValuePair_2_get_Value_mF2BDBBCCE3A7432DD1B1E16A68584F08AA0EB138_inline((&V_4), KeyValuePair_2_get_Value_mF2BDBBCCE3A7432DD1B1E16A68584F08AA0EB138_RuntimeMethod_var);
				V_5 = ((Container_t74302BC1028974B0A346A43F334AECB681D79579*)IsInstClass((RuntimeObject*)L_17, Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var));
				// if (namedInnerContainer)
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_18 = V_5;
				bool L_19;
				L_19 = Object_op_Implicit_m3AA10F430AAFC09D12BF9F4DB10404F2C4527CCC(L_18, NULL);
				if (!L_19)
				{
					goto IL_0089_1;
				}
			}
			{
				// innerContainers.Add (namedInnerContainer);
				HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* L_20 = V_0;
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_21 = V_5;
				bool L_22;
				L_22 = HashSet_1_Add_mB13C4C374F94EB008D025E53507C435EEB66B255(L_20, L_21, HashSet_1_Add_mB13C4C374F94EB008D025E53507C435EEB66B255_RuntimeMethod_var);
			}

IL_0089_1:
			{
				// foreach (var keyValue in container.namedContent) {
				bool L_23;
				L_23 = Enumerator_MoveNext_m6B49178CB9527B57DB94E5731B3E3F92DFE48DDE((&V_3), Enumerator_MoveNext_m6B49178CB9527B57DB94E5731B3E3F92DFE48DDE_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0060_1;
				}
			}
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		// foreach (var innerContainer in innerContainers) {
		HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* L_24 = V_0;
		Enumerator_t2F1BB79EEB703736F808D627A13B5D97A1C96271 L_25;
		L_25 = HashSet_1_GetEnumerator_m14D518BFE7CB52396D67A492025306F7D6FCEB03(L_24, HashSet_1_GetEnumerator_m14D518BFE7CB52396D67A492025306F7D6FCEB03_RuntimeMethod_var);
		V_6 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA0ADD22FB2ACC3151922FA044E9938ED618FFE78((&V_6), Enumerator_Dispose_mA0ADD22FB2ACC3151922FA044E9938ED618FFE78_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c5_1;
			}

IL_00ac_1:
			{
				// foreach (var innerContainer in innerContainers) {
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_26;
				L_26 = Enumerator_get_Current_m53028144BDF8B628A22F679031E7BCE3BBAB6078_inline((&V_6), Enumerator_get_Current_m53028144BDF8B628A22F679031E7BCE3BBAB6078_RuntimeMethod_var);
				V_7 = L_26;
				// TryFlattenContainer (innerContainer);
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_27 = V_7;
				Story_TryFlattenContainer_m1ED5C4A74B839ADC1188F3526EAD7C219CE56F3B(__this, L_27, NULL);
				// FlattenContainersIn (innerContainer);
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_28 = V_7;
				Story_FlattenContainersIn_m6831DB8B004021EA48FE64AF521F8FC72D28A64E(__this, L_28, NULL);
			}

IL_00c5_1:
			{
				// foreach (var innerContainer in innerContainers) {
				bool L_29;
				L_29 = Enumerator_MoveNext_mFB93B9DD5E695BD31507F275338EA1AB8E0A17B8((&V_6), Enumerator_MoveNext_mFB93B9DD5E695BD31507F275338EA1AB8E0A17B8_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00ac_1;
				}
			}
			{
				goto IL_00de;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00de:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.Story::TryFlattenContainer(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_TryFlattenContainer_m1ED5C4A74B839ADC1188F3526EAD7C219CE56F3B (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m851B53831C1D952866C76EEAC18EF50F93AB791A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m93AA6E5260B31B0E4A015483CD40732F6079367E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDBC2140ABF4BFE23ACFEC8FC7084261C08F60DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC575015244897CC52C360CCFCD80B4F917A2DC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mF4C2662792DE761C68D2A181E9121E422DC1EFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBB5A38567E85BD23F19A6F563A9325AAB9FFFB2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m1C061628DB61D0C27E07DC5E390C2117383F62D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mDC57B7FA373AF75CDE1E30C27D41F0F530DE9D2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_0 = NULL;
	int32_t V_1 = 0;
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* V_2 = NULL;
	Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A V_3;
	memset((&V_3), 0, sizeof(V_3));
	Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* V_4 = NULL;
	{
		// if (container.namedContent.Count > 0 || container.hasValidName || _dontFlattenContainers.Contains(container))
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = ___container0;
		Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49* L_1;
		L_1 = Container_get_namedContent_m887ECF350132F5C92388DCC11BDD9BF07267C86A_inline(L_0, NULL);
		int32_t L_2;
		L_2 = Dictionary_2_get_Count_m851B53831C1D952866C76EEAC18EF50F93AB791A(L_1, Dictionary_2_get_Count_m851B53831C1D952866C76EEAC18EF50F93AB791A_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_3 = ___container0;
		bool L_4;
		L_4 = Container_get_hasValidName_m97036F7247EFD720300054CD8E700F2B1DB4A076(L_3, NULL);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* L_5 = __this->____dontFlattenContainers_21;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_6 = ___container0;
		bool L_7;
		L_7 = HashSet_1_Contains_mF4C2662792DE761C68D2A181E9121E422DC1EFAC(L_5, L_6, HashSet_1_Contains_mF4C2662792DE761C68D2A181E9121E422DC1EFAC_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		// return;
		return;
	}

IL_0025:
	{
		// var parentContainer = container.parent as Runtime.Container;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_8 = ___container0;
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_9;
		L_9 = Object_get_parent_m9AF0B36330B6034B93000874D98617B032E6183D_inline(L_8, NULL);
		V_0 = ((Container_t74302BC1028974B0A346A43F334AECB681D79579*)IsInstClass((RuntimeObject*)L_9, Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var));
		// if (parentContainer) {
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_10 = V_0;
		bool L_11;
		L_11 = Object_op_Implicit_m3AA10F430AAFC09D12BF9F4DB10404F2C4527CCC(L_10, NULL);
		if (!L_11)
		{
			goto IL_00b2;
		}
	}
	{
		// var contentIdx = parentContainer.content.IndexOf (container);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_12 = V_0;
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_13;
		L_13 = Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD_inline(L_12, NULL);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_14 = ___container0;
		int32_t L_15;
		L_15 = List_1_IndexOf_m1C061628DB61D0C27E07DC5E390C2117383F62D2(L_13, L_14, List_1_IndexOf_m1C061628DB61D0C27E07DC5E390C2117383F62D2_RuntimeMethod_var);
		V_1 = L_15;
		// parentContainer.content.RemoveAt (contentIdx);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_16 = V_0;
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_17;
		L_17 = Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD_inline(L_16, NULL);
		int32_t L_18 = V_1;
		List_1_RemoveAt_mDC57B7FA373AF75CDE1E30C27D41F0F530DE9D2D(L_17, L_18, List_1_RemoveAt_mDC57B7FA373AF75CDE1E30C27D41F0F530DE9D2D_RuntimeMethod_var);
		// var dm = container.ownDebugMetadata;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_19 = ___container0;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_20;
		L_20 = Object_get_ownDebugMetadata_m5C84AE212A83FD7AE37E573867BF6360281467EE_inline(L_19, NULL);
		V_2 = L_20;
		// foreach (var innerContent in container.content) {
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_21 = ___container0;
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_22;
		L_22 = Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD_inline(L_21, NULL);
		Enumerator_t96C8BF597DE459FA9161D53376996011AAABED7A L_23;
		L_23 = List_1_GetEnumerator_mBB5A38567E85BD23F19A6F563A9325AAB9FFFB2F(L_22, List_1_GetEnumerator_mBB5A38567E85BD23F19A6F563A9325AAB9FFFB2F_RuntimeMethod_var);
		V_3 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m93AA6E5260B31B0E4A015483CD40732F6079367E((&V_3), Enumerator_Dispose_m93AA6E5260B31B0E4A015483CD40732F6079367E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0099_1;
			}

IL_0067_1:
			{
				// foreach (var innerContent in container.content) {
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_24;
				L_24 = Enumerator_get_Current_mC575015244897CC52C360CCFCD80B4F917A2DC37_inline((&V_3), Enumerator_get_Current_mC575015244897CC52C360CCFCD80B4F917A2DC37_RuntimeMethod_var);
				V_4 = L_24;
				// innerContent.parent = null;
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_25 = V_4;
				Object_set_parent_m313E7123FE19E7C089F5856A0B9AB83D092AF2FF_inline(L_25, (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL, NULL);
				// if (dm != null && innerContent.ownDebugMetadata == null)
				DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_26 = V_2;
				if (!L_26)
				{
					goto IL_008c_1;
				}
			}
			{
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_27 = V_4;
				DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_28;
				L_28 = Object_get_ownDebugMetadata_m5C84AE212A83FD7AE37E573867BF6360281467EE_inline(L_27, NULL);
				if (L_28)
				{
					goto IL_008c_1;
				}
			}
			{
				// innerContent.debugMetadata = dm;
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_29 = V_4;
				DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_30 = V_2;
				Object_set_debugMetadata_mEF4D1395140C148FF2206F19E4A2AB9DB0A6F825_inline(L_29, L_30, NULL);
			}

IL_008c_1:
			{
				// parentContainer.InsertContent (innerContent, contentIdx);
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_31 = V_0;
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_32 = V_4;
				int32_t L_33 = V_1;
				Container_InsertContent_m844F5C9F5AF7856E920DFB5F17DBEC8A262B5144(L_31, L_32, L_33, NULL);
				// contentIdx++;
				int32_t L_34 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
			}

IL_0099_1:
			{
				// foreach (var innerContent in container.content) {
				bool L_35;
				L_35 = Enumerator_MoveNext_mDBC2140ABF4BFE23ACFEC8FC7084261C08F60DF6((&V_3), Enumerator_MoveNext_mDBC2140ABF4BFE23ACFEC8FC7084261C08F60DF6_RuntimeMethod_var);
				if (L_35)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.Story::Error(System.String,Ink.Parsed.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_Error_m07F65AEBFE75393B2F8ADB2A416CF1BD3ED8644E (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, String_t* ___message0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___source1, bool ___isWarning2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A3D8009FFDBAE9CB67DE816B9D07EB6AAAADCF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E9B9636C08DCF722A46533B315A13FA42C775C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D2A7DC38E3D06969C09083548DE5A6AC3F8CE8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE96E999CE28460225F268D6B8C1BBCB581FDE4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF0C06BDB698BEE69D59BD9367155F6EFC70CDEC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		// ErrorType errorType = isWarning ? ErrorType.Warning : ErrorType.Error;
		bool L_0 = ___isWarning2;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		V_0 = G_B3_0;
		// var sb = new StringBuilder ();
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_1 = L_1;
		// if (source is AuthorWarning) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_2 = ___source1;
		if (!((AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE*)IsInstClass((RuntimeObject*)L_2, AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		// sb.Append ("TODO: ");
		StringBuilder_t* L_3 = V_1;
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteralAE96E999CE28460225F268D6B8C1BBCB581FDE4C, NULL);
		// errorType = ErrorType.Author;
		V_0 = 0;
		goto IL_0043;
	}

IL_0026:
	{
		// } else if (isWarning) {
		bool L_5 = ___isWarning2;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// sb.Append ("WARNING: ");
		StringBuilder_t* L_6 = V_1;
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteralCF0C06BDB698BEE69D59BD9367155F6EFC70CDEC, NULL);
		goto IL_0043;
	}

IL_0037:
	{
		// sb.Append ("ERROR: ");
		StringBuilder_t* L_8 = V_1;
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral4D2A7DC38E3D06969C09083548DE5A6AC3F8CE8E, NULL);
	}

IL_0043:
	{
		// if (source && source.debugMetadata != null && source.debugMetadata.startLineNumber >= 1 ) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_10 = ___source1;
		bool L_11;
		L_11 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_10, NULL);
		if (!L_11)
		{
			goto IL_00a1;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_12 = ___source1;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_13;
		L_13 = Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28(L_12, NULL);
		if (!L_13)
		{
			goto IL_00a1;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_14 = ___source1;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_15;
		L_15 = Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28(L_14, NULL);
		int32_t L_16 = L_15->___startLineNumber_0;
		if ((((int32_t)L_16) < ((int32_t)1)))
		{
			goto IL_00a1;
		}
	}
	{
		// if (source.debugMetadata.fileName != null) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_17 = ___source1;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_18;
		L_18 = Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28(L_17, NULL);
		String_t* L_19 = L_18->___fileName_4;
		if (!L_19)
		{
			goto IL_0085;
		}
	}
	{
		// sb.AppendFormat ("'{0}' ", source.debugMetadata.fileName);
		StringBuilder_t* L_20 = V_1;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_21 = ___source1;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_22;
		L_22 = Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28(L_21, NULL);
		String_t* L_23 = L_22->___fileName_4;
		StringBuilder_t* L_24;
		L_24 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_20, _stringLiteral3E9B9636C08DCF722A46533B315A13FA42C775C5, L_23, NULL);
	}

IL_0085:
	{
		// sb.AppendFormat ("line {0}: ", source.debugMetadata.startLineNumber);
		StringBuilder_t* L_25 = V_1;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_26 = ___source1;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_27;
		L_27 = Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28(L_26, NULL);
		int32_t L_28 = L_27->___startLineNumber_0;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_25, _stringLiteral0A3D8009FFDBAE9CB67DE816B9D07EB6AAAADCF9, L_30, NULL);
	}

IL_00a1:
	{
		// sb.Append (message);
		StringBuilder_t* L_32 = V_1;
		String_t* L_33 = ___message0;
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, L_33, NULL);
		// message = sb.ToString ();
		StringBuilder_t* L_35 = V_1;
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		___message0 = L_36;
		// if (_errorHandler != null) {
		ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728* L_37 = __this->____errorHandler_18;
		if (!L_37)
		{
			goto IL_00db;
		}
	}
	{
		// _hadError = errorType == ErrorType.Error;
		int32_t L_38 = V_0;
		__this->____hadError_19 = (bool)((((int32_t)L_38) == ((int32_t)2))? 1 : 0);
		// _hadWarning = errorType == ErrorType.Warning;
		int32_t L_39 = V_0;
		__this->____hadWarning_20 = (bool)((((int32_t)L_39) == ((int32_t)1))? 1 : 0);
		// _errorHandler (message, errorType);
		ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728* L_40 = __this->____errorHandler_18;
		String_t* L_41 = ___message0;
		int32_t L_42 = V_0;
		ErrorHandler_Invoke_m79D2EBC45964D545F88193253C28EB1C67FEB2E2_inline(L_40, L_41, L_42, NULL);
		return;
	}

IL_00db:
	{
		// throw new System.Exception (message);
		String_t* L_43 = ___message0;
		Exception_t* L_44 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_44, L_43, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Story_Error_m07F65AEBFE75393B2F8ADB2A416CF1BD3ED8644E_RuntimeMethod_var)));
	}
}
// System.Void Ink.Parsed.Story::ResetError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_ResetError_mFB31E14D49646A746EE937CE0007DB1574DCDCB1 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, const RuntimeMethod* method) 
{
	{
		// _hadError = false;
		__this->____hadError_19 = (bool)0;
		// _hadWarning = false;
		__this->____hadWarning_20 = (bool)0;
		// }
		return;
	}
}
// System.Boolean Ink.Parsed.Story::IsExternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Story_IsExternal_m0406222773013446CE46556B1109E84A673D972F (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, String_t* ___namedFuncTarget0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m700822A334A40D10260E85DC795A4F8DCAEB2C36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return externals.ContainsKey (namedFuncTarget);
		Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0* L_0 = __this->___externals_16;
		String_t* L_1 = ___namedFuncTarget0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m700822A334A40D10260E85DC795A4F8DCAEB2C36(L_0, L_1, Dictionary_2_ContainsKey_m700822A334A40D10260E85DC795A4F8DCAEB2C36_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Ink.Parsed.Story::AddExternal(Ink.Parsed.ExternalDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_AddExternal_m9C142559C7CA06012E5F8DD472D3965769B41E23 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, ExternalDeclaration_t6A600B5552FFC2082997474D7E5256DFA8782367* ___decl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m700822A334A40D10260E85DC795A4F8DCAEB2C36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mFFB77ACE82551B167A900FA09E9F5898B44F9D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC28842E9EA0E895314A073E2904F6E18886AD17);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (externals.ContainsKey (decl.name)) {
		Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0* L_0 = __this->___externals_16;
		ExternalDeclaration_t6A600B5552FFC2082997474D7E5256DFA8782367* L_1 = ___decl0;
		String_t* L_2;
		L_2 = ExternalDeclaration_get_name_m3BF1B7E988044FC4FECD56BE9EEF8ACB8D27D67B(L_1, NULL);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m700822A334A40D10260E85DC795A4F8DCAEB2C36(L_0, L_2, Dictionary_2_ContainsKey_m700822A334A40D10260E85DC795A4F8DCAEB2C36_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Error ("Duplicate EXTERNAL definition of '"+decl.name+"'", decl, false);
		ExternalDeclaration_t6A600B5552FFC2082997474D7E5256DFA8782367* L_4 = ___decl0;
		String_t* L_5;
		L_5 = ExternalDeclaration_get_name_m3BF1B7E988044FC4FECD56BE9EEF8ACB8D27D67B(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralAC28842E9EA0E895314A073E2904F6E18886AD17, L_5, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		ExternalDeclaration_t6A600B5552FFC2082997474D7E5256DFA8782367* L_7 = ___decl0;
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_6, L_7, (bool)0);
		return;
	}

IL_0031:
	{
		// externals [decl.name] = decl;
		Dictionary_2_t23D1D45E825E760926864DB6F6CA95F2C6B82EA0* L_8 = __this->___externals_16;
		ExternalDeclaration_t6A600B5552FFC2082997474D7E5256DFA8782367* L_9 = ___decl0;
		String_t* L_10;
		L_10 = ExternalDeclaration_get_name_m3BF1B7E988044FC4FECD56BE9EEF8ACB8D27D67B(L_9, NULL);
		ExternalDeclaration_t6A600B5552FFC2082997474D7E5256DFA8782367* L_11 = ___decl0;
		Dictionary_2_set_Item_mFFB77ACE82551B167A900FA09E9F5898B44F9D8D(L_8, L_10, L_11, Dictionary_2_set_Item_mFFB77ACE82551B167A900FA09E9F5898B44F9D8D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Story::DontFlattenContainer(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_DontFlattenContainer_m38E2485B7F6BAC07CD426713CC23E98FB069BD48 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mB13C4C374F94EB008D025E53507C435EEB66B255_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _dontFlattenContainers.Add (container);
		HashSet_1_tAF031AEBC83CBA64C37A89522097FD560F18B586* L_0 = __this->____dontFlattenContainers_21;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_1 = ___container0;
		bool L_2;
		L_2 = HashSet_1_Add_mB13C4C374F94EB008D025E53507C435EEB66B255(L_0, L_1, HashSet_1_Add_mB13C4C374F94EB008D025E53507C435EEB66B255_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Story::NameConflictError(Ink.Parsed.Object,System.String,Ink.Parsed.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_NameConflictError_mC11E05EB554082B930A521510DC1F3CF6390361B (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___obj0, String_t* ___name1, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___existingObj2, String_t* ___typeNameToPrint3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47EDDD3AC0C77F7723A9A0525312D7E49A059D09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70DF22C72E101915AD175E52251DF81548FAA318);
		s_Il2CppMethodInitialized = true;
	}
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B2_4 = NULL;
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B3_4 = NULL;
	{
		// obj.Error (typeNameToPrint+" '" + name + "': name has already been used for a " + existingObj.typeName.ToLower() + " on " +existingObj.debugMetadata);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = ___obj0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___typeNameToPrint3;
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		ArrayElementTypeCheck (L_4, _stringLiteral47EDDD3AC0C77F7723A9A0525312D7E49A059D09);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral47EDDD3AC0C77F7723A9A0525312D7E49A059D09);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___name1;
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		ArrayElementTypeCheck (L_7, _stringLiteral70DF22C72E101915AD175E52251DF81548FAA318);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral70DF22C72E101915AD175E52251DF81548FAA318);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_9 = ___existingObj2;
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Ink.Parsed.Object::get_typeName() */, L_9);
		String_t* L_11;
		L_11 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_10, NULL);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_8;
		ArrayElementTypeCheck (L_12, _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_14 = ___existingObj2;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_15;
		L_15 = Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28(L_14, NULL);
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_16 = L_15;
		G_B1_0 = L_16;
		G_B1_1 = 6;
		G_B1_2 = L_13;
		G_B1_3 = L_13;
		G_B1_4 = L_0;
		if (L_16)
		{
			G_B2_0 = L_16;
			G_B2_1 = 6;
			G_B2_2 = L_13;
			G_B2_3 = L_13;
			G_B2_4 = L_0;
			goto IL_0045;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_004a;
	}

IL_0045:
	{
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_17;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_004a:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		String_t* L_18;
		L_18 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(G_B3_3, NULL);
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, G_B3_4, L_18, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, (bool)0);
		// }
		return;
	}
}
// System.Boolean Ink.Parsed.Story::IsReservedKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Story_IsReservedKeyword_m040A09DD2A5FC692D830E777669CA96560130A18 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11B627459AAD233CBA753F7CEE364321151E20AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24D3FA9EF9027D38088033AD06B49AC53ACB4ADB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443BD561FA5A81D321CAAF0B444C0CFB1C5811D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DC0FD751814351D0F918BCFE0E9C782E2E090);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63FEAE5081ABFB719642D387AE43B7D4DFB3CFEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AD319493499620E43634FF644A0CEF1624086AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___name0;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mE2C82785F81B842321200CA571789E2BA8972976(L_0, NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)699505802)))))
		{
			goto IL_0052;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)184981848)))))
		{
			goto IL_002f;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)172932033))))
		{
			goto IL_010d;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)184981848))))
		{
			goto IL_00a4;
		}
	}
	{
		goto IL_012b;
	}

IL_002f:
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)218129310))))
		{
			goto IL_00e0;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)247034676))))
		{
			goto IL_00ef;
		}
	}
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)699505802))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_012b;
	}

IL_0052:
	{
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-2047985729)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1303515621))))
		{
			goto IL_008f;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-2047985729))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_012b;
	}

IL_006f:
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1630125495))))
		{
			goto IL_011c;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1111532560))))
		{
			goto IL_00d1;
		}
	}
	{
		uint32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1071923257))))
		{
			goto IL_00fe;
		}
	}
	{
		goto IL_012b;
	}

IL_008f:
	{
		String_t* L_15 = ___name0;
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (L_16)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_012b;
	}

IL_00a4:
	{
		String_t* L_17 = ___name0;
		bool L_18;
		L_18 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_17, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		if (L_18)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_012b;
	}

IL_00b3:
	{
		String_t* L_19 = ___name0;
		bool L_20;
		L_20 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_19, _stringLiteral63FEAE5081ABFB719642D387AE43B7D4DFB3CFEB, NULL);
		if (L_20)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_012b;
	}

IL_00c2:
	{
		String_t* L_21 = ___name0;
		bool L_22;
		L_22 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_21, _stringLiteral25F5EF17AC725A91FE3F3CE895C16ED6DD9B3499, NULL);
		if (L_22)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_012b;
	}

IL_00d1:
	{
		String_t* L_23 = ___name0;
		bool L_24;
		L_24 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_23, _stringLiteral443BD561FA5A81D321CAAF0B444C0CFB1C5811D4, NULL);
		if (L_24)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_012b;
	}

IL_00e0:
	{
		String_t* L_25 = ___name0;
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral24D3FA9EF9027D38088033AD06B49AC53ACB4ADB, NULL);
		if (L_26)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_012b;
	}

IL_00ef:
	{
		String_t* L_27 = ___name0;
		bool L_28;
		L_28 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_27, _stringLiteral11B627459AAD233CBA753F7CEE364321151E20AC, NULL);
		if (L_28)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_012b;
	}

IL_00fe:
	{
		String_t* L_29 = ___name0;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_29, _stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5, NULL);
		if (L_30)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_012b;
	}

IL_010d:
	{
		String_t* L_31 = ___name0;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral495DC0FD751814351D0F918BCFE0E9C782E2E090, NULL);
		if (L_32)
		{
			goto IL_0129;
		}
	}
	{
		goto IL_012b;
	}

IL_011c:
	{
		String_t* L_33 = ___name0;
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteral7AD319493499620E43634FF644A0CEF1624086AD, NULL);
		if (!L_34)
		{
			goto IL_012b;
		}
	}

IL_0129:
	{
		// return true;
		return (bool)1;
	}

IL_012b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Ink.Parsed.Story::CheckForNamingCollisions(Ink.Parsed.Object,Ink.Parsed.Identifier,Ink.Parsed.Story/SymbolType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Story_CheckForNamingCollisions_m13238A42D40F53489354F276C303D64C2D2AA2F6 (Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___obj0, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___identifier1, uint32_t ___symbolType2, String_t* ___typeNameOverride3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m4B109CA28C72E6EA470C7DC36B63B66EF9204A25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m01BBC460329BB84348DB03F5F79D91AF34ACD25F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m585A6A954709BD6CC8800FB71676F68D465292EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8366584410DF9635633C8684F575FA535CDF78A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD7214F14C1BAA998274190AC37240F40A399C28F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m592DA1580FDC9900A7E27B34AB105B28CCAEAE37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC647D2F1D2FCB04ABCC6E2C49C34DA886A411FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCD8574B18EAD84CC0914D6D0C6D73F3BFC0D8E90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m711969C4E360FC0725DE03CBA64788D763F715B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9153940C6F59F062F69715809C71D5A3D40A1D0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9630323BCC31A88964106965722CCA1FDA4DC22F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC2DE5CEAAF0F24570A1BA7E14675B32B40526360_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mFD10793F7A8114D83CDAD42FA058A63DB117AB6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m08A65C5E03A152020EA23579AED6CCE81B6D8B75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7CD99F6C4892332B0D870EFD09FF048D3C3924BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m3FCF32E15AB33459D20EC525DDCFC0C602BC378A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral150B27AD9FCE6BA42816F8D2051EA4AF694907C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2340491507D6D7C22EC2BC0B19E42F463062EFED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C91334D20F9D5BCAD75C87EE33F619CB3011C29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47EDDD3AC0C77F7723A9A0525312D7E49A059D09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA7BB2120EF43C457E7A6E84116ED6268AC8D48C);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* V_1 = NULL;
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* V_2 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_3 = NULL;
	Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844 V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_tF6D8142A0F6DC48B7EC7A1321A329733A7B86266 V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* V_7 = NULL;
	Enumerator_tD9C45AEA0CD1E79572A7164FD177676AEB7EBE53 V_8;
	memset((&V_8), 0, sizeof(V_8));
	ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* V_9 = NULL;
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* V_10 = NULL;
	Enumerator_t85ABE7A908BBD2336D59882D900E9D4CBD6183B1 V_11;
	memset((&V_11), 0, sizeof(V_11));
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B10_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B14_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B13_0 = NULL;
	String_t* G_B15_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B15_1 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B20_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B20_1 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B19_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B19_1 = NULL;
	String_t* G_B21_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B21_1 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B21_2 = NULL;
	String_t* G_B29_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B34_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B34_1 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B33_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B33_1 = NULL;
	String_t* G_B35_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B35_1 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B35_2 = NULL;
	String_t* G_B42_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B45_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B45_1 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B44_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B44_1 = NULL;
	String_t* G_B46_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B46_1 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B46_2 = NULL;
	Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0* G_B57_0 = NULL;
	Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0* G_B56_0 = NULL;
	String_t* G_B58_0 = NULL;
	Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0* G_B58_1 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B64_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B64_1 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B63_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B63_1 = NULL;
	String_t* G_B65_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B65_1 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B65_2 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B72_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B72_1 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B71_0 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B71_1 = NULL;
	String_t* G_B73_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B73_1 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B73_2 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B85_0 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B84_0 = NULL;
	String_t* G_B86_0 = NULL;
	String_t* G_B88_0 = NULL;
	String_t* G_B87_0 = NULL;
	String_t* G_B89_0 = NULL;
	String_t* G_B89_1 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B92_0 = NULL;
	int32_t G_B92_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B92_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B92_3 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B92_4 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B91_0 = NULL;
	int32_t G_B91_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B91_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B91_3 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B91_4 = NULL;
	String_t* G_B93_0 = NULL;
	int32_t G_B93_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B93_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B93_3 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B93_4 = NULL;
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* G_B95_0 = NULL;
	int32_t G_B95_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B95_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B95_3 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B95_4 = NULL;
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* G_B94_0 = NULL;
	int32_t G_B94_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B94_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B94_3 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B94_4 = NULL;
	String_t* G_B96_0 = NULL;
	int32_t G_B96_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B96_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B96_3 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B96_4 = NULL;
	{
		// string typeNameToPrint = typeNameOverride ?? obj.typeName;
		String_t* L_0 = ___typeNameOverride3;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_2 = ___obj0;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Ink.Parsed.Object::get_typeName() */, L_2);
		G_B2_0 = L_3;
	}

IL_000c:
	{
		V_0 = G_B2_0;
		// if (IsReservedKeyword (identifier?.name)) {
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_4 = ___identifier1;
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0019;
	}

IL_0013:
	{
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_5 = ___identifier1;
		String_t* L_6 = L_5->___name_0;
		G_B5_0 = L_6;
	}

IL_0019:
	{
		bool L_7;
		L_7 = Story_IsReservedKeyword_m040A09DD2A5FC692D830E777669CA96560130A18(G_B5_0, NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		// obj.Error ("'"+name + "' cannot be used for the name of a " + typeNameToPrint.ToLower() + " because it's a reserved keyword");
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_8 = ___obj0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12;
		L_12 = FlowBase_get_name_m7039F76999F2B76C702FA8DDE92FBD86BC58D97F(__this, NULL);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
		ArrayElementTypeCheck (L_13, _stringLiteralEA7BB2120EF43C457E7A6E84116ED6268AC8D48C);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEA7BB2120EF43C457E7A6E84116ED6268AC8D48C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		String_t* L_15 = V_0;
		String_t* L_16;
		L_16 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_15, NULL);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
		ArrayElementTypeCheck (L_17, _stringLiteral2C91334D20F9D5BCAD75C87EE33F619CB3011C29);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2C91334D20F9D5BCAD75C87EE33F619CB3011C29);
		String_t* L_18;
		L_18 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_17, NULL);
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, L_8, L_18, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, (bool)0);
		// return;
		return;
	}

IL_005e:
	{
		// if (FunctionCall.IsBuiltIn (identifier?.name)) {
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_19 = ___identifier1;
		if (L_19)
		{
			goto IL_0064;
		}
	}
	{
		G_B10_0 = ((String_t*)(NULL));
		goto IL_006a;
	}

IL_0064:
	{
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_20 = ___identifier1;
		String_t* L_21 = L_20->___name_0;
		G_B10_0 = L_21;
	}

IL_006a:
	{
		bool L_22;
		L_22 = FunctionCall_IsBuiltIn_mFF0A2C5A4AEC60C019F4691DB6DCA57C83091B33(G_B10_0, NULL);
		if (!L_22)
		{
			goto IL_00af;
		}
	}
	{
		// obj.Error ("'"+name + "' cannot be used for the name of a " + typeNameToPrint.ToLower() + " because it's a built in function");
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_23 = ___obj0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		ArrayElementTypeCheck (L_25, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		String_t* L_27;
		L_27 = FlowBase_get_name_m7039F76999F2B76C702FA8DDE92FBD86BC58D97F(__this, NULL);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_26;
		ArrayElementTypeCheck (L_28, _stringLiteralEA7BB2120EF43C457E7A6E84116ED6268AC8D48C);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEA7BB2120EF43C457E7A6E84116ED6268AC8D48C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		String_t* L_30 = V_0;
		String_t* L_31;
		L_31 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_30, NULL);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_29;
		ArrayElementTypeCheck (L_32, _stringLiteral150B27AD9FCE6BA42816F8D2051EA4AF694907C6);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral150B27AD9FCE6BA42816F8D2051EA4AF694907C6);
		String_t* L_33;
		L_33 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_32, NULL);
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, L_23, L_33, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, (bool)0);
		// return;
		return;
	}

IL_00af:
	{
		// FlowBase knotOrFunction = ContentWithNameAtLevel (identifier?.name, FlowLevel.Knot) as FlowBase;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_34 = ___identifier1;
		G_B13_0 = __this;
		if (L_34)
		{
			G_B14_0 = __this;
			goto IL_00b6;
		}
	}
	{
		G_B15_0 = ((String_t*)(NULL));
		G_B15_1 = G_B13_0;
		goto IL_00bc;
	}

IL_00b6:
	{
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_35 = ___identifier1;
		String_t* L_36 = L_35->___name_0;
		G_B15_0 = L_36;
		G_B15_1 = G_B14_0;
	}

IL_00bc:
	{
		Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC L_37;
		memset((&L_37), 0, sizeof(L_37));
		Nullable_1__ctor_m3FCF32E15AB33459D20EC525DDCFC0C602BC378A((&L_37), 1, /*hidden argument*/Nullable_1__ctor_m3FCF32E15AB33459D20EC525DDCFC0C602BC378A_RuntimeMethod_var);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_38;
		L_38 = FlowBase_ContentWithNameAtLevel_mBEA01AF67EC82BAF3485DEB39E7C5F6EB95DCE42(G_B15_1, G_B15_0, L_37, (bool)0, NULL);
		V_1 = ((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)IsInstClass((RuntimeObject*)L_38, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var));
		// if (knotOrFunction && (knotOrFunction != obj || symbolType == SymbolType.Arg)) {
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_39 = V_1;
		bool L_40;
		L_40 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_39, NULL);
		if (!L_40)
		{
			goto IL_00f9;
		}
	}
	{
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_41 = V_1;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_42 = ___obj0;
		bool L_43;
		L_43 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_41, L_42, NULL);
		if (L_43)
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t L_44 = ___symbolType2;
		if ((!(((uint32_t)L_44) == ((uint32_t)5))))
		{
			goto IL_00f9;
		}
	}

IL_00e3:
	{
		// NameConflictError (obj, identifier?.name, knotOrFunction, typeNameToPrint);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_45 = ___obj0;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_46 = ___identifier1;
		G_B19_0 = L_45;
		G_B19_1 = __this;
		if (L_46)
		{
			G_B20_0 = L_45;
			G_B20_1 = __this;
			goto IL_00eb;
		}
	}
	{
		G_B21_0 = ((String_t*)(NULL));
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		goto IL_00f1;
	}

IL_00eb:
	{
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_47 = ___identifier1;
		String_t* L_48 = L_47->___name_0;
		G_B21_0 = L_48;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
	}

IL_00f1:
	{
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_49 = V_1;
		String_t* L_50 = V_0;
		Story_NameConflictError_mC11E05EB554082B930A521510DC1F3CF6390361B(G_B21_2, G_B21_1, G_B21_0, L_49, L_50, NULL);
		// return;
		return;
	}

IL_00f9:
	{
		// if (symbolType < SymbolType.List) return;
		uint32_t L_51 = ___symbolType2;
		if ((!(((uint32_t)L_51) < ((uint32_t)1))))
		{
			goto IL_00fe;
		}
	}
	{
		// if (symbolType < SymbolType.List) return;
		return;
	}

IL_00fe:
	{
		// foreach (var namedListDef in _listDefs) {
		Dictionary_2_t5A97C79CF45D5BF10FF5B75F4D3F7F637A529398* L_52 = __this->____listDefs_22;
		Enumerator_t10FB9ADF331F8B5D52A8E1747FEA46D4B9A6B844 L_53;
		L_53 = Dictionary_2_GetEnumerator_m4B109CA28C72E6EA470C7DC36B63B66EF9204A25(L_52, Dictionary_2_GetEnumerator_m4B109CA28C72E6EA470C7DC36B63B66EF9204A25_RuntimeMethod_var);
		V_4 = L_53;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01e7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD7214F14C1BAA998274190AC37240F40A399C28F((&V_4), Enumerator_Dispose_mD7214F14C1BAA998274190AC37240F40A399C28F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01d9_1;
			}

IL_0110_1:
			{
				// foreach (var namedListDef in _listDefs) {
				KeyValuePair_2_tF6D8142A0F6DC48B7EC7A1321A329733A7B86266 L_54;
				L_54 = Enumerator_get_Current_m711969C4E360FC0725DE03CBA64788D763F715B4_inline((&V_4), Enumerator_get_Current_m711969C4E360FC0725DE03CBA64788D763F715B4_RuntimeMethod_var);
				V_5 = L_54;
				// var listDefName = namedListDef.Key;
				String_t* L_55;
				L_55 = KeyValuePair_2_get_Key_mC2DE5CEAAF0F24570A1BA7E14675B32B40526360_inline((&V_5), KeyValuePair_2_get_Key_mC2DE5CEAAF0F24570A1BA7E14675B32B40526360_RuntimeMethod_var);
				V_6 = L_55;
				// var listDef = namedListDef.Value;
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_56;
				L_56 = KeyValuePair_2_get_Value_mFD10793F7A8114D83CDAD42FA058A63DB117AB6F_inline((&V_5), KeyValuePair_2_get_Value_mFD10793F7A8114D83CDAD42FA058A63DB117AB6F_RuntimeMethod_var);
				V_7 = L_56;
				// if (identifier?.name == listDefName && obj != listDef && listDef.variableAssignment != obj) {
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_57 = ___identifier1;
				if (L_57)
				{
					goto IL_0131_1;
				}
			}
			{
				G_B29_0 = ((String_t*)(NULL));
				goto IL_0137_1;
			}

IL_0131_1:
			{
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_58 = ___identifier1;
				String_t* L_59 = L_58->___name_0;
				G_B29_0 = L_59;
			}

IL_0137_1:
			{
				String_t* L_60 = V_6;
				bool L_61;
				L_61 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(G_B29_0, L_60, NULL);
				if (!L_61)
				{
					goto IL_016f_1;
				}
			}
			{
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_62 = ___obj0;
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_63 = V_7;
				bool L_64;
				L_64 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_62, L_63, NULL);
				if (!L_64)
				{
					goto IL_016f_1;
				}
			}
			{
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_65 = V_7;
				VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_66 = L_65->___variableAssignment_8;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_67 = ___obj0;
				bool L_68;
				L_68 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_66, L_67, NULL);
				if (!L_68)
				{
					goto IL_016f_1;
				}
			}
			{
				// NameConflictError (obj, identifier?.name, listDef, typeNameToPrint);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_69 = ___obj0;
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_70 = ___identifier1;
				G_B33_0 = L_69;
				G_B33_1 = __this;
				if (L_70)
				{
					G_B34_0 = L_69;
					G_B34_1 = __this;
					goto IL_0161_1;
				}
			}
			{
				G_B35_0 = ((String_t*)(NULL));
				G_B35_1 = G_B33_0;
				G_B35_2 = G_B33_1;
				goto IL_0167_1;
			}

IL_0161_1:
			{
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_71 = ___identifier1;
				String_t* L_72 = L_71->___name_0;
				G_B35_0 = L_72;
				G_B35_1 = G_B34_0;
				G_B35_2 = G_B34_1;
			}

IL_0167_1:
			{
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_73 = V_7;
				String_t* L_74 = V_0;
				Story_NameConflictError_mC11E05EB554082B930A521510DC1F3CF6390361B(G_B35_2, G_B35_1, G_B35_0, L_73, L_74, NULL);
			}

IL_016f_1:
			{
				// if (!(obj is ListElementDefinition)) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_75 = ___obj0;
				if (((ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD*)IsInstClass((RuntimeObject*)L_75, ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD_il2cpp_TypeInfo_var)))
				{
					goto IL_01d9_1;
				}
			}
			{
				// foreach (var item in listDef.itemDefinitions) {
				ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_76 = V_7;
				List_1_t5616402C899551039E0CA5216EA28E3B5E8B4010* L_77 = L_76->___itemDefinitions_7;
				Enumerator_tD9C45AEA0CD1E79572A7164FD177676AEB7EBE53 L_78;
				L_78 = List_1_GetEnumerator_m7CD99F6C4892332B0D870EFD09FF048D3C3924BC(L_77, List_1_GetEnumerator_m7CD99F6C4892332B0D870EFD09FF048D3C3924BC_RuntimeMethod_var);
				V_8 = L_78;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01cb_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m585A6A954709BD6CC8800FB71676F68D465292EE((&V_8), Enumerator_Dispose_m585A6A954709BD6CC8800FB71676F68D465292EE_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_01c0_2;
					}

IL_0187_2:
					{
						// foreach (var item in listDef.itemDefinitions) {
						ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* L_79;
						L_79 = Enumerator_get_Current_m9630323BCC31A88964106965722CCA1FDA4DC22F_inline((&V_8), Enumerator_get_Current_m9630323BCC31A88964106965722CCA1FDA4DC22F_RuntimeMethod_var);
						V_9 = L_79;
						// if (identifier?.name == item.name) {
						Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_80 = ___identifier1;
						if (L_80)
						{
							goto IL_0196_2;
						}
					}
					{
						G_B42_0 = ((String_t*)(NULL));
						goto IL_019c_2;
					}

IL_0196_2:
					{
						Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_81 = ___identifier1;
						String_t* L_82 = L_81->___name_0;
						G_B42_0 = L_82;
					}

IL_019c_2:
					{
						ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* L_83 = V_9;
						String_t* L_84;
						L_84 = ListElementDefinition_get_name_m30CB7F2D47D10EE4754E57C4BB59BA679E44B77B(L_83, NULL);
						bool L_85;
						L_85 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(G_B42_0, L_84, NULL);
						if (!L_85)
						{
							goto IL_01c0_2;
						}
					}
					{
						// NameConflictError (obj, identifier?.name, item, typeNameToPrint);
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_86 = ___obj0;
						Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_87 = ___identifier1;
						G_B44_0 = L_86;
						G_B44_1 = __this;
						if (L_87)
						{
							G_B45_0 = L_86;
							G_B45_1 = __this;
							goto IL_01b2_2;
						}
					}
					{
						G_B46_0 = ((String_t*)(NULL));
						G_B46_1 = G_B44_0;
						G_B46_2 = G_B44_1;
						goto IL_01b8_2;
					}

IL_01b2_2:
					{
						Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_88 = ___identifier1;
						String_t* L_89 = L_88->___name_0;
						G_B46_0 = L_89;
						G_B46_1 = G_B45_0;
						G_B46_2 = G_B45_1;
					}

IL_01b8_2:
					{
						ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* L_90 = V_9;
						String_t* L_91 = V_0;
						Story_NameConflictError_mC11E05EB554082B930A521510DC1F3CF6390361B(G_B46_2, G_B46_1, G_B46_0, L_90, L_91, NULL);
					}

IL_01c0_2:
					{
						// foreach (var item in listDef.itemDefinitions) {
						bool L_92;
						L_92 = Enumerator_MoveNext_mC647D2F1D2FCB04ABCC6E2C49C34DA886A411FFB((&V_8), Enumerator_MoveNext_mC647D2F1D2FCB04ABCC6E2C49C34DA886A411FFB_RuntimeMethod_var);
						if (L_92)
						{
							goto IL_0187_2;
						}
					}
					{
						goto IL_01d9_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_01d9_1:
			{
				// foreach (var namedListDef in _listDefs) {
				bool L_93;
				L_93 = Enumerator_MoveNext_mCD8574B18EAD84CC0914D6D0C6D73F3BFC0D8E90((&V_4), Enumerator_MoveNext_mCD8574B18EAD84CC0914D6D0C6D73F3BFC0D8E90_RuntimeMethod_var);
				if (L_93)
				{
					goto IL_0110_1;
				}
			}
			{
				goto IL_01f5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01f5:
	{
		// if (symbolType <= SymbolType.Var) return;
		uint32_t L_94 = ___symbolType2;
		if ((!(((uint32_t)L_94) <= ((uint32_t)3))))
		{
			goto IL_01fa;
		}
	}
	{
		// if (symbolType <= SymbolType.Var) return;
		return;
	}

IL_01fa:
	{
		// VariableAssignment varDecl = null;
		V_2 = (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82*)NULL;
		// if (variableDeclarations.TryGetValue(identifier?.name, out varDecl) ) {
		Dictionary_2_tDF97A77A9FAB561C121F80094FE22706FC0C36B0* L_95 = ((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)__this)->___variableDeclarations_8;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_96 = ___identifier1;
		G_B56_0 = L_95;
		if (L_96)
		{
			G_B57_0 = L_95;
			goto IL_0208;
		}
	}
	{
		G_B58_0 = ((String_t*)(NULL));
		G_B58_1 = G_B56_0;
		goto IL_020e;
	}

IL_0208:
	{
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_97 = ___identifier1;
		String_t* L_98 = L_97->___name_0;
		G_B58_0 = L_98;
		G_B58_1 = G_B57_0;
	}

IL_020e:
	{
		bool L_99;
		L_99 = Dictionary_2_TryGetValue_m01BBC460329BB84348DB03F5F79D91AF34ACD25F(G_B58_1, G_B58_0, (&V_2), Dictionary_2_TryGetValue_m01BBC460329BB84348DB03F5F79D91AF34ACD25F_RuntimeMethod_var);
		if (!L_99)
		{
			goto IL_024b;
		}
	}
	{
		// if (varDecl != obj && varDecl.isGlobalDeclaration && varDecl.listDefinition == null) {
		VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_100 = V_2;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_101 = ___obj0;
		bool L_102;
		L_102 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_100, L_101, NULL);
		if (!L_102)
		{
			goto IL_024b;
		}
	}
	{
		VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_103 = V_2;
		bool L_104;
		L_104 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(L_103, NULL);
		if (!L_104)
		{
			goto IL_024b;
		}
	}
	{
		VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_105 = V_2;
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_106;
		L_106 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(L_105, NULL);
		bool L_107;
		L_107 = Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43(L_106, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_107)
		{
			goto IL_024b;
		}
	}
	{
		// NameConflictError (obj, identifier?.name, varDecl, typeNameToPrint);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_108 = ___obj0;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_109 = ___identifier1;
		G_B63_0 = L_108;
		G_B63_1 = __this;
		if (L_109)
		{
			G_B64_0 = L_108;
			G_B64_1 = __this;
			goto IL_023e;
		}
	}
	{
		G_B65_0 = ((String_t*)(NULL));
		G_B65_1 = G_B63_0;
		G_B65_2 = G_B63_1;
		goto IL_0244;
	}

IL_023e:
	{
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_110 = ___identifier1;
		String_t* L_111 = L_110->___name_0;
		G_B65_0 = L_111;
		G_B65_1 = G_B64_0;
		G_B65_2 = G_B64_1;
	}

IL_0244:
	{
		VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_112 = V_2;
		String_t* L_113 = V_0;
		Story_NameConflictError_mC11E05EB554082B930A521510DC1F3CF6390361B(G_B65_2, G_B65_1, G_B65_0, L_112, L_113, NULL);
	}

IL_024b:
	{
		// if (symbolType < SymbolType.SubFlowAndWeave) return;
		uint32_t L_114 = ___symbolType2;
		if ((!(((uint32_t)L_114) < ((uint32_t)4))))
		{
			goto IL_0250;
		}
	}
	{
		// if (symbolType < SymbolType.SubFlowAndWeave) return;
		return;
	}

IL_0250:
	{
		// var path = new Path (identifier);
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_115 = ___identifier1;
		Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* L_116 = (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC*)il2cpp_codegen_object_new(Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC_il2cpp_TypeInfo_var);
		Path__ctor_m628CF348ABC9C3AB26F4D235A5E212BB05233A47(L_116, L_115, NULL);
		// var targetContent = path.ResolveFromContext (obj);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_117 = ___obj0;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_118;
		L_118 = Path_ResolveFromContext_m2E7745228A2131E2474943DDB9BE94219BE1AF60(L_116, L_117, NULL);
		V_3 = L_118;
		// if (targetContent && targetContent != obj) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_119 = V_3;
		bool L_120;
		L_120 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_119, NULL);
		if (!L_120)
		{
			goto IL_0284;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_121 = V_3;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_122 = ___obj0;
		bool L_123;
		L_123 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_121, L_122, NULL);
		if (!L_123)
		{
			goto IL_0284;
		}
	}
	{
		// NameConflictError (obj, identifier?.name, targetContent, typeNameToPrint);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_124 = ___obj0;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_125 = ___identifier1;
		G_B71_0 = L_124;
		G_B71_1 = __this;
		if (L_125)
		{
			G_B72_0 = L_124;
			G_B72_1 = __this;
			goto IL_0276;
		}
	}
	{
		G_B73_0 = ((String_t*)(NULL));
		G_B73_1 = G_B71_0;
		G_B73_2 = G_B71_1;
		goto IL_027c;
	}

IL_0276:
	{
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_126 = ___identifier1;
		String_t* L_127 = L_126->___name_0;
		G_B73_0 = L_127;
		G_B73_1 = G_B72_0;
		G_B73_2 = G_B72_1;
	}

IL_027c:
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_128 = V_3;
		String_t* L_129 = V_0;
		Story_NameConflictError_mC11E05EB554082B930A521510DC1F3CF6390361B(G_B73_2, G_B73_1, G_B73_0, L_128, L_129, NULL);
		// return;
		return;
	}

IL_0284:
	{
		// if (symbolType < SymbolType.Arg) return;
		uint32_t L_130 = ___symbolType2;
		if ((!(((uint32_t)L_130) < ((uint32_t)5))))
		{
			goto IL_0289;
		}
	}
	{
		// if (symbolType < SymbolType.Arg) return;
		return;
	}

IL_0289:
	{
		// if (symbolType != SymbolType.Arg) {
		uint32_t L_131 = ___symbolType2;
		if ((((int32_t)L_131) == ((int32_t)5)))
		{
			goto IL_0382;
		}
	}
	{
		// FlowBase flow = obj as FlowBase;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_132 = ___obj0;
		V_10 = ((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)IsInstClass((RuntimeObject*)L_132, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var));
		// if( flow == null ) flow = obj.ClosestFlowBase ();
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_133 = V_10;
		bool L_134;
		L_134 = Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43(L_133, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_134)
		{
			goto IL_02aa;
		}
	}
	{
		// if( flow == null ) flow = obj.ClosestFlowBase ();
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_135 = ___obj0;
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_136;
		L_136 = Object_ClosestFlowBase_mFBB185F20F260315B894395561CE129F351600AC(L_135, NULL);
		V_10 = L_136;
	}

IL_02aa:
	{
		// if (flow && flow.hasParameters) {
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_137 = V_10;
		bool L_138;
		L_138 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_137, NULL);
		if (!L_138)
		{
			goto IL_0382;
		}
	}
	{
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_139 = V_10;
		bool L_140;
		L_140 = FlowBase_get_hasParameters_m027F45A42DE762AE37A79C6B41ADFE58BF73E63C(L_139, NULL);
		if (!L_140)
		{
			goto IL_0382;
		}
	}
	{
		// foreach (var arg in flow.arguments) {
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_141 = V_10;
		List_1_t5A7C284E404753F1786689E097CE59A152638444* L_142;
		L_142 = FlowBase_get_arguments_m1EF87837594B7A14507C461AE7EB4B685F61EB47_inline(L_141, NULL);
		Enumerator_t85ABE7A908BBD2336D59882D900E9D4CBD6183B1 L_143;
		L_143 = List_1_GetEnumerator_m08A65C5E03A152020EA23579AED6CCE81B6D8B75(L_142, List_1_GetEnumerator_m08A65C5E03A152020EA23579AED6CCE81B6D8B75_RuntimeMethod_var);
		V_11 = L_143;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0374:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8366584410DF9635633C8684F575FA535CDF78A1((&V_11), Enumerator_Dispose_m8366584410DF9635633C8684F575FA535CDF78A1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0366_1;
			}

IL_02d5_1:
			{
				// foreach (var arg in flow.arguments) {
				Argument_t57F624390C64DEA5183C13B31DE384F707B17021* L_144;
				L_144 = Enumerator_get_Current_m9153940C6F59F062F69715809C71D5A3D40A1D0E_inline((&V_11), Enumerator_get_Current_m9153940C6F59F062F69715809C71D5A3D40A1D0E_RuntimeMethod_var);
				// if (arg.identifier?.name == identifier?.name) {
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_145 = L_144->___identifier_0;
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_146 = L_145;
				G_B84_0 = L_146;
				if (L_146)
				{
					G_B85_0 = L_146;
					goto IL_02e8_1;
				}
			}
			{
				G_B86_0 = ((String_t*)(NULL));
				goto IL_02ed_1;
			}

IL_02e8_1:
			{
				String_t* L_147 = G_B85_0->___name_0;
				G_B86_0 = L_147;
			}

IL_02ed_1:
			{
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_148 = ___identifier1;
				G_B87_0 = G_B86_0;
				if (L_148)
				{
					G_B88_0 = G_B86_0;
					goto IL_02f3_1;
				}
			}
			{
				G_B89_0 = ((String_t*)(NULL));
				G_B89_1 = G_B87_0;
				goto IL_02f9_1;
			}

IL_02f3_1:
			{
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_149 = ___identifier1;
				String_t* L_150 = L_149->___name_0;
				G_B89_0 = L_150;
				G_B89_1 = G_B88_0;
			}

IL_02f9_1:
			{
				bool L_151;
				L_151 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(G_B89_1, G_B89_0, NULL);
				if (!L_151)
				{
					goto IL_0366_1;
				}
			}
			{
				// obj.Error (typeNameToPrint+" '" + name + "': Name has already been used for a argument to "+flow.identifier+" on " +flow.debugMetadata);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_152 = ___obj0;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_153 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_154 = L_153;
				String_t* L_155 = V_0;
				ArrayElementTypeCheck (L_154, L_155);
				(L_154)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_155);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_156 = L_154;
				ArrayElementTypeCheck (L_156, _stringLiteral47EDDD3AC0C77F7723A9A0525312D7E49A059D09);
				(L_156)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral47EDDD3AC0C77F7723A9A0525312D7E49A059D09);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_157 = L_156;
				String_t* L_158;
				L_158 = FlowBase_get_name_m7039F76999F2B76C702FA8DDE92FBD86BC58D97F(__this, NULL);
				ArrayElementTypeCheck (L_157, L_158);
				(L_157)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_158);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_159 = L_157;
				ArrayElementTypeCheck (L_159, _stringLiteral2340491507D6D7C22EC2BC0B19E42F463062EFED);
				(L_159)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2340491507D6D7C22EC2BC0B19E42F463062EFED);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_160 = L_159;
				FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_161 = V_10;
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_162;
				L_162 = FlowBase_get_identifier_m4690D9A6AAB405E233688C9261A4F0BB19BFC105_inline(L_161, NULL);
				Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_163 = L_162;
				G_B91_0 = L_163;
				G_B91_1 = 4;
				G_B91_2 = L_160;
				G_B91_3 = L_160;
				G_B91_4 = L_152;
				if (L_163)
				{
					G_B92_0 = L_163;
					G_B92_1 = 4;
					G_B92_2 = L_160;
					G_B92_3 = L_160;
					G_B92_4 = L_152;
					goto IL_0334_1;
				}
			}
			{
				G_B93_0 = ((String_t*)(NULL));
				G_B93_1 = G_B91_1;
				G_B93_2 = G_B91_2;
				G_B93_3 = G_B91_3;
				G_B93_4 = G_B91_4;
				goto IL_0339_1;
			}

IL_0334_1:
			{
				String_t* L_164;
				L_164 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B92_0);
				G_B93_0 = L_164;
				G_B93_1 = G_B92_1;
				G_B93_2 = G_B92_2;
				G_B93_3 = G_B92_3;
				G_B93_4 = G_B92_4;
			}

IL_0339_1:
			{
				ArrayElementTypeCheck (G_B93_2, G_B93_0);
				(G_B93_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B93_1), (String_t*)G_B93_0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_165 = G_B93_3;
				ArrayElementTypeCheck (L_165, _stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
				(L_165)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral0CF1C526BD3872B6F7B223B157F80669490DCBCF);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_166 = L_165;
				FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_167 = V_10;
				DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_168;
				L_168 = Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28(L_167, NULL);
				DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_169 = L_168;
				G_B94_0 = L_169;
				G_B94_1 = 6;
				G_B94_2 = L_166;
				G_B94_3 = L_166;
				G_B94_4 = G_B93_4;
				if (L_169)
				{
					G_B95_0 = L_169;
					G_B95_1 = 6;
					G_B95_2 = L_166;
					G_B95_3 = L_166;
					G_B95_4 = G_B93_4;
					goto IL_0352_1;
				}
			}
			{
				G_B96_0 = ((String_t*)(NULL));
				G_B96_1 = G_B94_1;
				G_B96_2 = G_B94_2;
				G_B96_3 = G_B94_3;
				G_B96_4 = G_B94_4;
				goto IL_0357_1;
			}

IL_0352_1:
			{
				String_t* L_170;
				L_170 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B95_0);
				G_B96_0 = L_170;
				G_B96_1 = G_B95_1;
				G_B96_2 = G_B95_2;
				G_B96_3 = G_B95_3;
				G_B96_4 = G_B95_4;
			}

IL_0357_1:
			{
				ArrayElementTypeCheck (G_B96_2, G_B96_0);
				(G_B96_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B96_1), (String_t*)G_B96_0);
				String_t* L_171;
				L_171 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(G_B96_3, NULL);
				VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, G_B96_4, L_171, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, (bool)0);
				// return;
				goto IL_0382;
			}

IL_0366_1:
			{
				// foreach (var arg in flow.arguments) {
				bool L_172;
				L_172 = Enumerator_MoveNext_m592DA1580FDC9900A7E27B34AB105B28CCAEAE37((&V_11), Enumerator_MoveNext_m592DA1580FDC9900A7E27B34AB105B28CCAEAE37_RuntimeMethod_var);
				if (L_172)
				{
					goto IL_02d5_1;
				}
			}
			{
				goto IL_0382;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0382:
	{
		// }
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
// System.Boolean Ink.Parsed.StringExpression::get_isSingleString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringExpression_get_isSingleString_m7A6128F11CA9543349BD832F63FC453C02242AF7 (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (content.Count != 1)
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_0;
		L_0 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_1;
		L_1 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_0, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// var c = content [0];
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_2;
		L_2 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3;
		L_3 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_2, 0, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		// if (!(c is Text))
		if (((Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED*)IsInstClass((RuntimeObject*)L_3, Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0025:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Ink.Parsed.StringExpression::.ctor(System.Collections.Generic.List`1<Ink.Parsed.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringExpression__ctor_mC6C0C3D15D6BDF83C370A52DE73E4C55939CF21A (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___content0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public StringExpression (List<Parsed.Object> content)
		Expression__ctor_mBA2907DB4D7FEA90D9A52A1C9820CDBC72DFB2AD(__this, NULL);
		// AddContent (content);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_0 = ___content0;
		Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280(__this, L_0, Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Ink.Parsed.StringExpression::GenerateIntoContainer(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringExpression_GenerateIntoContainer_m4601A0FF9F20609E19320C04CCF3A9343F768A57 (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_1 = NULL;
	{
		// container.AddContent (Runtime.ControlCommand.BeginString());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = ___container0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_1;
		L_1 = ControlCommand_BeginString_m5BAEFED246E194673F543F04ED89AAB6F41072AD(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_0, L_1, NULL);
		// foreach (var c in content) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_2;
		L_2 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_3;
		L_3 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_2, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_0), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0019_1:
			{
				// foreach (var c in content) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4;
				L_4 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_0), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				V_1 = L_4;
				// container.AddContent (c.runtimeObject);
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_5 = ___container0;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6 = V_1;
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_7;
				L_7 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_6, NULL);
				Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_5, L_7, NULL);
			}

IL_002d_1:
			{
				// foreach (var c in content) {
				bool L_8;
				L_8 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_0), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// container.AddContent (Runtime.ControlCommand.EndString());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_9 = ___container0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_10;
		L_10 = ControlCommand_EndString_m6789630C3741A32BE7882853CE46C620ABA6AD2E(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.String Ink.Parsed.StringExpression::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringExpression_ToString_m7CEB62354FBF1109D96152E2C728FB8A58495F7E (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_2 = NULL;
	{
		// var sb = new StringBuilder ();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// foreach (var c in content) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_1;
		L_1 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_2;
		L_2 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_1, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_1), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_0014_1:
			{
				// foreach (var c in content) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3;
				L_3 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_1), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				V_2 = L_3;
				// sb.Append (c.ToString ());
				StringBuilder_t* L_4 = V_0;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5 = V_2;
				String_t* L_6;
				L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
				StringBuilder_t* L_7;
				L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_6, NULL);
			}

IL_0029_1:
			{
				// foreach (var c in content) {
				bool L_8;
				L_8 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_1), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// return sb.ToString ();
		StringBuilder_t* L_9 = V_0;
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		return L_10;
	}
}
// System.Boolean Ink.Parsed.StringExpression::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringExpression_Equals_m7AE9C83E2B234A8F564CDC7779235B22E55F0FE8 (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var otherStr = obj as StringExpression;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678*)IsInstClass((RuntimeObject*)L_0, StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678_il2cpp_TypeInfo_var));
		// if (otherStr == null) return false;
		StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* L_1 = V_0;
		bool L_2;
		L_2 = Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43(L_1, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (otherStr == null) return false;
		return (bool)0;
	}

IL_0012:
	{
		// if (!this.isSingleString || !otherStr.isSingleString) {
		bool L_3;
		L_3 = StringExpression_get_isSingleString_m7A6128F11CA9543349BD832F63FC453C02242AF7(__this, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* L_4 = V_0;
		bool L_5;
		L_5 = StringExpression_get_isSingleString_m7A6128F11CA9543349BD832F63FC453C02242AF7(L_4, NULL);
		if (L_5)
		{
			goto IL_0024;
		}
	}

IL_0022:
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// var thisTxt = this.ToString ();
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		// var otherTxt = otherStr.ToString ();
		StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* L_7 = V_0;
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		V_1 = L_8;
		// return thisTxt.Equals (otherTxt);
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_6, L_9, NULL);
		return L_10;
	}
}
// System.Int32 Ink.Parsed.StringExpression::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringExpression_GetHashCode_m70A333635EA213059CF55EBBFA8F274A6042EDB0 (StringExpression_tE1058617CD97C053B40F01FD20B244A4595D2678* __this, const RuntimeMethod* method) 
{
	{
		// return this.ToString ().GetHashCode ();
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
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
// System.String Ink.Parsed.Text::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_get_text_m14F6F4C8E14BAD266FF794A86DCFA15E89964103 (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, const RuntimeMethod* method) 
{
	{
		// public string text { get; set; }
		String_t* L_0 = __this->___U3CtextU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ink.Parsed.Text::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_text_m174E6D93DD8C69932A47F52A61E8A97CAD231058 (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string text { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CtextU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Ink.Parsed.Text::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text__ctor_mCC47ACBD825802241319B32E0BBAB28EEABD7BE0 (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	{
		// public Text (string str)
		Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A(__this, NULL);
		// text = str;
		String_t* L_0 = ___str0;
		Text_set_text_m174E6D93DD8C69932A47F52A61E8A97CAD231058_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// Ink.Runtime.Object Ink.Parsed.Text::GenerateRuntimeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* Text_GenerateRuntimeObject_m37E96A22AD4FE182CB416A70DC5D878558861C7C (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Runtime.StringValue(this.text);
		String_t* L_0;
		L_0 = Text_get_text_m14F6F4C8E14BAD266FF794A86DCFA15E89964103_inline(__this, NULL);
		StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2* L_1 = (StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2*)il2cpp_codegen_object_new(StringValue_tFBC5F37C3A8E14475BC21BED0BACA3FD68482FD2_il2cpp_TypeInfo_var);
		StringValue__ctor_m84F62339FA8008253A9A001E433CA1D5D82CA19E(L_1, L_0, NULL);
		return L_1;
	}
}
// System.String Ink.Parsed.Text::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Text_ToString_mFF93259357C991A6C2765C6B47C06314139CFE81 (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, const RuntimeMethod* method) 
{
	{
		// return this.text;
		String_t* L_0;
		L_0 = Text_get_text_m14F6F4C8E14BAD266FF794A86DCFA15E89964103_inline(__this, NULL);
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
// Ink.Parsed.Divert Ink.Parsed.TunnelOnwards::get_divertAfter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8 (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, const RuntimeMethod* method) 
{
	{
		// return _divertAfter;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_0 = __this->____divertAfter_6;
		return L_0;
	}
}
// System.Void Ink.Parsed.TunnelOnwards::set_divertAfter(Ink.Parsed.Divert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TunnelOnwards_set_divertAfter_m01C473CFA45AFDDB1D43767B0EB0E759A3866220 (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_AddContent_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_mBC95D48BAC65CC876001759F3105E180FAC26E32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _divertAfter = value;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_0 = ___value0;
		__this->____divertAfter_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____divertAfter_6), (void*)L_0);
		// if (_divertAfter) AddContent (_divertAfter);
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_1 = __this->____divertAfter_6;
		bool L_2;
		L_2 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (_divertAfter) AddContent (_divertAfter);
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_3 = __this->____divertAfter_6;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_4;
		L_4 = Object_AddContent_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_mBC95D48BAC65CC876001759F3105E180FAC26E32(__this, L_3, Object_AddContent_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_mBC95D48BAC65CC876001759F3105E180FAC26E32_RuntimeMethod_var);
	}

IL_0021:
	{
		// }
		return;
	}
}
// Ink.Runtime.Object Ink.Parsed.TunnelOnwards::GenerateRuntimeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* TunnelOnwards_GenerateRuntimeObject_m6905BF11D1F7CE4BADD2B5856F96E355F2C4F1FC (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m28F4FD8191AC70A79F88724B9BD21145FF88B3A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2EF709723E8742028D2BF885FA5335303F0B0282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_0 = NULL;
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_1 = NULL;
	List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* V_6 = NULL;
	int32_t V_7 = 0;
	{
		// var container = new Runtime.Container ();
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = (Container_t74302BC1028974B0A346A43F334AECB681D79579*)il2cpp_codegen_object_new(Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		Container__ctor_mE49EAAD4892EDEFFDA64A7A54823A021ECBF4F84(L_0, NULL);
		V_0 = L_0;
		// container.AddContent (Runtime.ControlCommand.EvalStart ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_1 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_2;
		L_2 = ControlCommand_EvalStart_m5552F30F2BAF74C7B324DFF8E150AF206369A412(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_1, L_2, NULL);
		// if (divertAfter) {
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_3;
		L_3 = TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8_inline(__this, NULL);
		bool L_4;
		L_4 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_3, NULL);
		if (!L_4)
		{
			goto IL_0109;
		}
	}
	{
		// var returnRuntimeObj = divertAfter.GenerateRuntimeObject ();
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_5;
		L_5 = TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8_inline(__this, NULL);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_6;
		L_6 = VirtualFuncInvoker0< Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* >::Invoke(8 /* Ink.Runtime.Object Ink.Parsed.Object::GenerateRuntimeObject() */, L_5);
		// var returnRuntimeContainer = returnRuntimeObj as Runtime.Container;
		V_1 = ((Container_t74302BC1028974B0A346A43F334AECB681D79579*)IsInstClass((RuntimeObject*)L_6, Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var));
		// if (returnRuntimeContainer) {
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_7 = V_1;
		bool L_8;
		L_8 = Object_op_Implicit_m3AA10F430AAFC09D12BF9F4DB10404F2C4527CCC(L_7, NULL);
		if (!L_8)
		{
			goto IL_00f0;
		}
	}
	{
		// var args = divertAfter.arguments;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_9;
		L_9 = TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8_inline(__this, NULL);
		List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* L_10;
		L_10 = Divert_get_arguments_m835B3FA82AB94C9D96B4472519BE0C4776F6FD5B_inline(L_9, NULL);
		V_2 = L_10;
		// if (args != null && args.Count > 0) {
		List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* L_11 = V_2;
		if (!L_11)
		{
			goto IL_00f0;
		}
	}
	{
		List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* L_12 = V_2;
		int32_t L_13;
		L_13 = List_1_get_Count_m28F4FD8191AC70A79F88724B9BD21145FF88B3A8_inline(L_12, List_1_get_Count_m28F4FD8191AC70A79F88724B9BD21145FF88B3A8_RuntimeMethod_var);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_00f0;
		}
	}
	{
		// int evalStart = -1;
		V_3 = (-1);
		// int evalEnd = -1;
		V_4 = (-1);
		// for (int i = 0; i < returnRuntimeContainer.content.Count; i++) {
		V_5 = 0;
		goto IL_00a8;
	}

IL_0065:
	{
		// var cmd = returnRuntimeContainer.content [i] as Runtime.ControlCommand;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_14 = V_1;
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_15;
		L_15 = Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD_inline(L_14, NULL);
		int32_t L_16 = V_5;
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_17;
		L_17 = List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37(L_15, L_16, List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37_RuntimeMethod_var);
		V_6 = ((ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6*)IsInstClass((RuntimeObject*)L_17, ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6_il2cpp_TypeInfo_var));
		// if (cmd) {
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_18 = V_6;
		bool L_19;
		L_19 = Object_op_Implicit_m3AA10F430AAFC09D12BF9F4DB10404F2C4527CCC(L_18, NULL);
		if (!L_19)
		{
			goto IL_00a2;
		}
	}
	{
		// if (evalStart == -1 && cmd.commandType == Runtime.ControlCommand.CommandType.EvalStart)
		int32_t L_20 = V_3;
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_0094;
		}
	}
	{
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_21 = V_6;
		int32_t L_22;
		L_22 = ControlCommand_get_commandType_mF43D077F555FA63FF4A1146790A56346647DBE8A_inline(L_21, NULL);
		if (L_22)
		{
			goto IL_0094;
		}
	}
	{
		// evalStart = i;
		int32_t L_23 = V_5;
		V_3 = L_23;
		goto IL_00a2;
	}

IL_0094:
	{
		// else if (cmd.commandType == Runtime.ControlCommand.CommandType.EvalEnd)
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_24 = V_6;
		int32_t L_25;
		L_25 = ControlCommand_get_commandType_mF43D077F555FA63FF4A1146790A56346647DBE8A_inline(L_24, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_00a2;
		}
	}
	{
		// evalEnd = i;
		int32_t L_26 = V_5;
		V_4 = L_26;
	}

IL_00a2:
	{
		// for (int i = 0; i < returnRuntimeContainer.content.Count; i++) {
		int32_t L_27 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a8:
	{
		// for (int i = 0; i < returnRuntimeContainer.content.Count; i++) {
		int32_t L_28 = V_5;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_29 = V_1;
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_30;
		L_30 = Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD_inline(L_29, NULL);
		int32_t L_31;
		L_31 = List_1_get_Count_m2EF709723E8742028D2BF885FA5335303F0B0282_inline(L_30, List_1_get_Count_m2EF709723E8742028D2BF885FA5335303F0B0282_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_31)))
		{
			goto IL_0065;
		}
	}
	{
		// for (int i = evalStart + 1; i < evalEnd; i++) {
		int32_t L_32 = V_3;
		V_7 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		goto IL_00ea;
	}

IL_00be:
	{
		// var obj = returnRuntimeContainer.content [i];
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_33 = V_1;
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_34;
		L_34 = Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD_inline(L_33, NULL);
		int32_t L_35 = V_7;
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_36;
		L_36 = List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37(L_34, L_35, List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37_RuntimeMethod_var);
		// obj.parent = null; // prevent error of being moved between owners
		Object_set_parent_m313E7123FE19E7C089F5856A0B9AB83D092AF2FF_inline(L_36, (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL, NULL);
		// container.AddContent (returnRuntimeContainer.content [i]);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_37 = V_0;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_38 = V_1;
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_39;
		L_39 = Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD_inline(L_38, NULL);
		int32_t L_40 = V_7;
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_41;
		L_41 = List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37(L_39, L_40, List_1_get_Item_m3C3F22715654DE8C42400613AF9E28276BD46D37_RuntimeMethod_var);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_37, L_41, NULL);
		// for (int i = evalStart + 1; i < evalEnd; i++) {
		int32_t L_42 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00ea:
	{
		// for (int i = evalStart + 1; i < evalEnd; i++) {
		int32_t L_43 = V_7;
		int32_t L_44 = V_4;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00be;
		}
	}

IL_00f0:
	{
		// _overrideDivertTarget = new Runtime.DivertTargetValue ();
		DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* L_45 = (DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B*)il2cpp_codegen_object_new(DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B_il2cpp_TypeInfo_var);
		DivertTargetValue__ctor_m1214D460147B45F9850424DA9BF5D34306720F06(L_45, NULL);
		__this->____overrideDivertTarget_7 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____overrideDivertTarget_7), (void*)L_45);
		// container.AddContent (_overrideDivertTarget);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_46 = V_0;
		DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* L_47 = __this->____overrideDivertTarget_7;
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_46, L_47, NULL);
		goto IL_0114;
	}

IL_0109:
	{
		// container.AddContent (new Runtime.Void ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_48 = V_0;
		Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0* L_49 = (Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0*)il2cpp_codegen_object_new(Void_tCAE0FF750A1F4451C4F4184BAB9CC4F5498B2FE0_il2cpp_TypeInfo_var);
		Void__ctor_mE6655AC1CDBDF3AEAF058E98834803EFA65A8886(L_49, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_48, L_49, NULL);
	}

IL_0114:
	{
		// container.AddContent (Runtime.ControlCommand.EvalEnd ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_50 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_51;
		L_51 = ControlCommand_EvalEnd_mB619929D3EB97531D9F354283A15D3EA22CD983F(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_50, L_51, NULL);
		// container.AddContent (Runtime.ControlCommand.PopTunnel ());
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_52 = V_0;
		ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* L_53;
		L_53 = ControlCommand_PopTunnel_mF958B8E15026C2EB84256FF06B8494FB5D05C3E2(NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_52, L_53, NULL);
		// return container;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_54 = V_0;
		return L_54;
	}
}
// System.Void Ink.Parsed.TunnelOnwards::ResolveReferences(Ink.Parsed.Story)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TunnelOnwards_ResolveReferences_mB2C6394CF5BDC3F3F73F0C3C613F72ADA223DE84 (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* ___context0, const RuntimeMethod* method) 
{
	{
		// base.ResolveReferences (context);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_0 = ___context0;
		Object_ResolveReferences_m8BC5DD701019191459A9CEF84D71FFBE2FEDFF8E(__this, L_0, NULL);
		// if (divertAfter && divertAfter.targetContent)
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_1;
		L_1 = TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8_inline(__this, NULL);
		bool L_2;
		L_2 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_1, NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_3;
		L_3 = TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8_inline(__this, NULL);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4;
		L_4 = Divert_get_targetContent_m2A18F6F480779045E0B34983F78C0ADFE635D21C_inline(L_3, NULL);
		bool L_5;
		L_5 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_4, NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		// _overrideDivertTarget.targetPath = divertAfter.targetContent.runtimePath;
		DivertTargetValue_t14F5A07B60FE4AC786213C9B6457C1920EB09D7B* L_6 = __this->____overrideDivertTarget_7;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_7;
		L_7 = TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8_inline(__this, NULL);
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_8;
		L_8 = Divert_get_targetContent_m2A18F6F480779045E0B34983F78C0ADFE635D21C_inline(L_7, NULL);
		Path_tCC1F1626DB60711735401EA8FA76A191D9014600* L_9;
		L_9 = VirtualFuncInvoker0< Path_tCC1F1626DB60711735401EA8FA76A191D9014600* >::Invoke(6 /* Ink.Runtime.Path Ink.Parsed.Object::get_runtimePath() */, L_8);
		DivertTargetValue_set_targetPath_m443285EA0636089C577FCD0240756CB8F7A9FEA3(L_6, L_9, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.TunnelOnwards::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TunnelOnwards__ctor_m7750D4F7987935B853D06036AC4FDEC3BF930048 (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A(__this, NULL);
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
// System.String Ink.Parsed.VariableAssignment::get_variableName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// get { return variableIdentifier.name; }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0;
		L_0 = VariableAssignment_get_variableIdentifier_m5E36193B2BC86B48D2567C6EA389B4C5FE67CB9A_inline(__this, NULL);
		String_t* L_1 = L_0->___name_0;
		return L_1;
	}
}
// Ink.Parsed.Identifier Ink.Parsed.VariableAssignment::get_variableIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* VariableAssignment_get_variableIdentifier_m5E36193B2BC86B48D2567C6EA389B4C5FE67CB9A (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public Identifier variableIdentifier { get; protected set; }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = __this->___U3CvariableIdentifierU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableAssignment::set_variableIdentifier(Ink.Parsed.Identifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment_set_variableIdentifier_m16684EEAA53B0C8C0A31B1072977CC5C115A35E3 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___value0, const RuntimeMethod* method) 
{
	{
		// public Identifier variableIdentifier { get; protected set; }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = ___value0;
		__this->___U3CvariableIdentifierU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvariableIdentifierU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// Ink.Parsed.Expression Ink.Parsed.VariableAssignment::get_expression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public Expression expression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = __this->___U3CexpressionU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableAssignment::set_expression(Ink.Parsed.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment_set_expression_m4CE2FDFCA9A76FEF3E8C76E0B93FE7CE9705AD48 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___value0, const RuntimeMethod* method) 
{
	{
		// public Expression expression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = ___value0;
		__this->___U3CexpressionU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexpressionU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// Ink.Parsed.ListDefinition Ink.Parsed.VariableAssignment::get_listDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public ListDefinition listDefinition { get; protected set; }
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_0 = __this->___U3ClistDefinitionU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableAssignment::set_listDefinition(Ink.Parsed.ListDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment_set_listDefinition_m7675DC40AF4DAFF3918BE94FF4DD9190955AF87A (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___value0, const RuntimeMethod* method) 
{
	{
		// public ListDefinition listDefinition { get; protected set; }
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_0 = ___value0;
		__this->___U3ClistDefinitionU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClistDefinitionU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Boolean Ink.Parsed.VariableAssignment::get_isGlobalDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public bool isGlobalDeclaration { get; set; }
		bool L_0 = __this->___U3CisGlobalDeclarationU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableAssignment::set_isGlobalDeclaration(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment_set_isGlobalDeclaration_m3B705D1B9A8EC0FB9C5AB5B2B80B690ACD50D86D (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isGlobalDeclaration { get; set; }
		bool L_0 = ___value0;
		__this->___U3CisGlobalDeclarationU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Boolean Ink.Parsed.VariableAssignment::get_isNewTemporaryDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public bool isNewTemporaryDeclaration { get; set; }
		bool L_0 = __this->___U3CisNewTemporaryDeclarationU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableAssignment::set_isNewTemporaryDeclaration(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment_set_isNewTemporaryDeclaration_mC9E125F33848004DC457829CA7F325FE7036E650 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isNewTemporaryDeclaration { get; set; }
		bool L_0 = ___value0;
		__this->___U3CisNewTemporaryDeclarationU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Boolean Ink.Parsed.VariableAssignment::get_isDeclaration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VariableAssignment_get_isDeclaration_m303120F48FE6770B5B59269240F63F40631554C5 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// return isGlobalDeclaration || isNewTemporaryDeclaration;
		bool L_0;
		L_0 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline(__this, NULL);
		return L_1;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.Void Ink.Parsed.VariableAssignment::.ctor(Ink.Parsed.Identifier,Ink.Parsed.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment__ctor_m576B18F74098B06A9C0E950EEB598428DD8C4980 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___identifier0, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___assignedExpression1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VariableAssignment (Identifier identifier, Expression assignedExpression)
		Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A(__this, NULL);
		// this.variableIdentifier = identifier;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = ___identifier0;
		VariableAssignment_set_variableIdentifier_m16684EEAA53B0C8C0A31B1072977CC5C115A35E3_inline(__this, L_0, NULL);
		// if( assignedExpression )
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_1 = ___assignedExpression1;
		bool L_2;
		L_2 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// this.expression = AddContent(assignedExpression);
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_3 = ___assignedExpression1;
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_4;
		L_4 = Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F(__this, L_3, Object_AddContent_TisExpression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D_m050CFBBD924504CF14772AE2DEFF3C05A7CCA82F_RuntimeMethod_var);
		VariableAssignment_set_expression_m4CE2FDFCA9A76FEF3E8C76E0B93FE7CE9705AD48_inline(__this, L_4, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.VariableAssignment::.ctor(Ink.Parsed.Identifier,Ink.Parsed.ListDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment__ctor_m8EEA71A8AADA69439C198FFACDEDA4B781B1670A (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___identifier0, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___listDef1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_AddContent_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_m6169C2A2781ABFF41FF6C9D08702D6F37EC74523_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VariableAssignment (Identifier identifier, ListDefinition listDef)
		Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A(__this, NULL);
		// this.variableIdentifier = identifier;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = ___identifier0;
		VariableAssignment_set_variableIdentifier_m16684EEAA53B0C8C0A31B1072977CC5C115A35E3_inline(__this, L_0, NULL);
		// if (listDef) {
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_1 = ___listDef1;
		bool L_2;
		L_2 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_1, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// this.listDefinition = AddContent (listDef);
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_3 = ___listDef1;
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_4;
		L_4 = Object_AddContent_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_m6169C2A2781ABFF41FF6C9D08702D6F37EC74523(__this, L_3, Object_AddContent_TisListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65_m6169C2A2781ABFF41FF6C9D08702D6F37EC74523_RuntimeMethod_var);
		VariableAssignment_set_listDefinition_m7675DC40AF4DAFF3918BE94FF4DD9190955AF87A_inline(__this, L_4, NULL);
		// this.listDefinition.variableAssignment = this;
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_5;
		L_5 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(__this, NULL);
		L_5->___variableAssignment_8 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___variableAssignment_8), (void*)__this);
	}

IL_002e:
	{
		// isGlobalDeclaration = true;
		VariableAssignment_set_isGlobalDeclaration_m3B705D1B9A8EC0FB9C5AB5B2B80B690ACD50D86D_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// Ink.Runtime.Object Ink.Parsed.VariableAssignment::GenerateRuntimeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* VariableAssignment_GenerateRuntimeObject_m664EBA0F32D405C0D7D400536E60B272B6EDCC4A (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* V_0 = NULL;
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_1 = NULL;
	{
		// FlowBase newDeclScope = null;
		V_0 = (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)NULL;
		// if (isGlobalDeclaration) {
		bool L_0;
		L_0 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// newDeclScope = story;
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_1;
		L_1 = Object_get_story_mC48C490DCCF22AEC1CC28FEA37BDD22AA31C8B1C(__this, NULL);
		V_0 = L_1;
		goto IL_0022;
	}

IL_0013:
	{
		// } else if(isNewTemporaryDeclaration) {
		bool L_2;
		L_2 = VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// newDeclScope = ClosestFlowBase ();
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_3;
		L_3 = Object_ClosestFlowBase_mFBB185F20F260315B894395561CE129F351600AC(__this, NULL);
		V_0 = L_3;
	}

IL_0022:
	{
		// if( newDeclScope )
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_4 = V_0;
		bool L_5;
		L_5 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_4, NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// newDeclScope.TryAddNewVariableDeclaration (this);
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_6 = V_0;
		FlowBase_TryAddNewVariableDeclaration_mC160F28B3C771CE96BFF6AD1F0DA0DB41D5B2F0B(L_6, __this, NULL);
	}

IL_0031:
	{
		// if( isGlobalDeclaration )
		bool L_7;
		L_7 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(__this, NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		// return null;
		return (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL;
	}

IL_003b:
	{
		// var container = new Runtime.Container ();
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_8 = (Container_t74302BC1028974B0A346A43F334AECB681D79579*)il2cpp_codegen_object_new(Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		Container__ctor_mE49EAAD4892EDEFFDA64A7A54823A021ECBF4F84(L_8, NULL);
		V_1 = L_8;
		// if( expression != null )
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_9;
		L_9 = VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831_inline(__this, NULL);
		bool L_10;
		L_10 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_9, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		// container.AddContent (expression.runtimeObject);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_11 = V_1;
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_12;
		L_12 = VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831_inline(__this, NULL);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_13;
		L_13 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_12, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_11, L_13, NULL);
		goto IL_0081;
	}

IL_0062:
	{
		// else if( listDefinition != null )
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_14;
		L_14 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(__this, NULL);
		bool L_15;
		L_15 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_14, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0081;
		}
	}
	{
		// container.AddContent (listDefinition.runtimeObject);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_16 = V_1;
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_17;
		L_17 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(__this, NULL);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_18;
		L_18 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_17, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_16, L_18, NULL);
	}

IL_0081:
	{
		// _runtimeAssignment = new Runtime.VariableAssignment(variableName, isNewTemporaryDeclaration);
		String_t* L_19;
		L_19 = VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B(__this, NULL);
		bool L_20;
		L_20 = VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline(__this, NULL);
		VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* L_21 = (VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9*)il2cpp_codegen_object_new(VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9_il2cpp_TypeInfo_var);
		VariableAssignment__ctor_m34573492CA6DA1C98F74FD9F2F3ECCB2FCE7E1B6(L_21, L_19, L_20, NULL);
		__this->____runtimeAssignment_11 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runtimeAssignment_11), (void*)L_21);
		// container.AddContent (_runtimeAssignment);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_22 = V_1;
		VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* L_23 = __this->____runtimeAssignment_11;
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_22, L_23, NULL);
		// return container;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_24 = V_1;
		return L_24;
	}
}
// System.Void Ink.Parsed.VariableAssignment::ResolveReferences(Ink.Parsed.Story)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableAssignment_ResolveReferences_m37501252D5701FF31348F73522385B7C3485DE21 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m0F6C37D27FD2753844BDF8E50AE219156F3DD897_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral232E29D3CB1BEBAB46125A6580F94B6237639795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral552DA4F83AB1BC270CE749E47D3C68702AB45097);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral834B13F856924DCC46AB8FF86DB1C23A385C2FFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA871E06BD04BA167F0121D2D4D2A6C4C82D64CE6);
		s_Il2CppMethodInitialized = true;
	}
	VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* V_0 = NULL;
	VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B4_0 = NULL;
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* G_B4_1 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B4_2 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B3_0 = NULL;
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* G_B3_1 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B5_1 = NULL;
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* G_B5_2 = NULL;
	Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* G_B5_3 = NULL;
	{
		// base.ResolveReferences (context);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_0 = ___context0;
		Object_ResolveReferences_m8BC5DD701019191459A9CEF84D71FFBE2FEDFF8E(__this, L_0, NULL);
		// if( this.isDeclaration && listDefinition == null )
		bool L_1;
		L_1 = VariableAssignment_get_isDeclaration_m303120F48FE6770B5B59269240F63F40631554C5(__this, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_2;
		L_2 = VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline(__this, NULL);
		bool L_3;
		L_3 = Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43(L_2, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// context.CheckForNamingCollisions (this, variableIdentifier, this.isGlobalDeclaration ? Story.SymbolType.Var : Story.SymbolType.Temp);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_4 = ___context0;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_5;
		L_5 = VariableAssignment_get_variableIdentifier_m5E36193B2BC86B48D2567C6EA389B4C5FE67CB9A_inline(__this, NULL);
		bool L_6;
		L_6 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(__this, NULL);
		G_B3_0 = L_5;
		G_B3_1 = __this;
		G_B3_2 = L_4;
		if (L_6)
		{
			G_B4_0 = L_5;
			G_B4_1 = __this;
			G_B4_2 = L_4;
			goto IL_0030;
		}
	}
	{
		G_B5_0 = 6;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0031;
	}

IL_0030:
	{
		G_B5_0 = 3;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0031:
	{
		Story_CheckForNamingCollisions_m13238A42D40F53489354F276C303D64C2D2AA2F6(G_B5_3, G_B5_2, G_B5_1, G_B5_0, (String_t*)NULL, NULL);
	}

IL_0037:
	{
		// if (this.isGlobalDeclaration) {
		bool L_7;
		L_7 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(__this, NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// var variableReference = expression as VariableReference;
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_8;
		L_8 = VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831_inline(__this, NULL);
		V_0 = ((VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049*)IsInstClass((RuntimeObject*)L_8, VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049_il2cpp_TypeInfo_var));
		// if (variableReference && !variableReference.isConstantReference && !variableReference.isListItemReference) {
		VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* L_9 = V_0;
		bool L_10;
		L_10 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_9, NULL);
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* L_11 = V_0;
		bool L_12 = L_11->___isConstantReference_12;
		if (L_12)
		{
			goto IL_0070;
		}
	}
	{
		VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* L_13 = V_0;
		bool L_14 = L_13->___isListItemReference_13;
		if (L_14)
		{
			goto IL_0070;
		}
	}
	{
		// Error ("global variable assignments cannot refer to other variables, only literal values, constants and list items");
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, _stringLiteralA871E06BD04BA167F0121D2D4D2A6C4C82D64CE6, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, (bool)0);
	}

IL_0070:
	{
		// if (!this.isNewTemporaryDeclaration) {
		bool L_15;
		L_15 = VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline(__this, NULL);
		if (L_15)
		{
			goto IL_0104;
		}
	}
	{
		// var resolvedVarAssignment = context.ResolveVariableWithName(this.variableName, fromNode: this);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_16 = ___context0;
		String_t* L_17;
		L_17 = VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B(__this, NULL);
		VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 L_18;
		L_18 = FlowBase_ResolveVariableWithName_m017DF795D3DA6FF4644793B10ED8B6386171E2C0(L_16, L_17, __this, NULL);
		V_1 = L_18;
		// if (!resolvedVarAssignment.found) {
		VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 L_19 = V_1;
		bool L_20 = L_19.___found_0;
		if (L_20)
		{
			goto IL_00e5;
		}
	}
	{
		// if (story.constants.ContainsKey (variableName)) {
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_21;
		L_21 = Object_get_story_mC48C490DCCF22AEC1CC28FEA37BDD22AA31C8B1C(__this, NULL);
		Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* L_22 = L_21->___constants_15;
		String_t* L_23;
		L_23 = VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B(__this, NULL);
		bool L_24;
		L_24 = Dictionary_2_ContainsKey_m0F6C37D27FD2753844BDF8E50AE219156F3DD897(L_22, L_23, Dictionary_2_ContainsKey_m0F6C37D27FD2753844BDF8E50AE219156F3DD897_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_00c8;
		}
	}
	{
		// Error ("Can't re-assign to a constant (do you need to use VAR when declaring '" + this.variableName + "'?)", this);
		String_t* L_25;
		L_25 = VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B(__this, NULL);
		String_t* L_26;
		L_26 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral552DA4F83AB1BC270CE749E47D3C68702AB45097, L_25, _stringLiteral232E29D3CB1BEBAB46125A6580F94B6237639795, NULL);
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_26, __this, (bool)0);
		goto IL_00e5;
	}

IL_00c8:
	{
		// Error ("Variable could not be found to assign to: '" + this.variableName + "'", this);
		String_t* L_27;
		L_27 = VariableAssignment_get_variableName_m2587033C9344C676A5974DC17EE9BD060783E53B(__this, NULL);
		String_t* L_28;
		L_28 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral834B13F856924DCC46AB8FF86DB1C23A385C2FFF, L_27, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_28, __this, (bool)0);
	}

IL_00e5:
	{
		// if( _runtimeAssignment != null )
		VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* L_29 = __this->____runtimeAssignment_11;
		bool L_30;
		L_30 = Object_op_Inequality_m484EC06D033A2E53F169523E7CB9B1B2725D7BD7(L_29, (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL, NULL);
		if (!L_30)
		{
			goto IL_0104;
		}
	}
	{
		// _runtimeAssignment.isGlobal = resolvedVarAssignment.isGlobal;
		VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* L_31 = __this->____runtimeAssignment_11;
		VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 L_32 = V_1;
		bool L_33 = L_32.___isGlobal_1;
		VariableAssignment_set_isGlobal_m7E2A5FFCF8C182807B5941792682A0A1D26535DE_inline(L_31, L_33, NULL);
	}

IL_0104:
	{
		// }
		return;
	}
}
// System.String Ink.Parsed.VariableAssignment::get_typeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VariableAssignment_get_typeName_m46F99307B242EA5D12AAB2B59A01F0FA37727C41 (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24D3FA9EF9027D38088033AD06B49AC53ACB4ADB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A5EAECA242025908B1BA2BDB34B2296B923397E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isNewTemporaryDeclaration) return "temp";
		bool L_0;
		L_0 = VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (isNewTemporaryDeclaration) return "temp";
		return _stringLiteralA8C33B2C3FF3E4462FC219B3B38E8DDD1832BDE5;
	}

IL_000e:
	{
		// else if (isGlobalDeclaration) return "VAR";
		bool L_1;
		L_1 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// else if (isGlobalDeclaration) return "VAR";
		return _stringLiteral24D3FA9EF9027D38088033AD06B49AC53ACB4ADB;
	}

IL_001c:
	{
		// else return "variable assignment";
		return _stringLiteral4A5EAECA242025908B1BA2BDB34B2296B923397E;
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
// System.String Ink.Parsed.VariableReference::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VariableReference_get_name_mE6D2556C23D83C040F82E27DE755F7D6FBD90E0F (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableReference::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference_set_name_mCA878128BFBEF54B19531F832CD1FB62A617ED65 (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// Ink.Parsed.Identifier Ink.Parsed.VariableReference::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* VariableReference_get_identifier_m71B144F925B5BAED06D65235AEE694141E0824C5 (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Aggregate_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisDebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01_mD582FBD8810F5558D7B1085272C9DB034DAF0E64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m5425AF7896889A0D84459D56ACB1885279425F5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_identifierU3Eb__5_0_m3F93841E2FC7D9D434FE11EC13DC12E0706B2C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* V_1 = NULL;
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* V_2 = NULL;
	Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* G_B6_0 = NULL;
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* G_B6_1 = NULL;
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* G_B6_2 = NULL;
	Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* G_B5_0 = NULL;
	DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* G_B5_1 = NULL;
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* G_B5_2 = NULL;
	{
		// if (pathIdentifiers == null || pathIdentifiers.Count == 0) {
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_0 = __this->___pathIdentifiers_10;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_1 = __this->___pathIdentifiers_10;
		int32_t L_2;
		L_2 = List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_inline(L_1, List_1_get_Count_m71AEB8CE2E16452899D16EB5992ABB37A5F6A786_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		// return null;
		return (Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD*)NULL;
	}

IL_0017:
	{
		// if( _singleIdentifier == null ) {
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_3 = __this->____singleIdentifier_9;
		if (L_3)
		{
			goto IL_008b;
		}
	}
	{
		// var name = string.Join (".", path.ToArray());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4;
		L_4 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_4, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_6;
		L_6 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_5, NULL);
		V_0 = L_6;
		// var firstDebugMetadata = pathIdentifiers.First().debugMetadata;
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_7 = __this->___pathIdentifiers_10;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_8;
		L_8 = Enumerable_First_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m5425AF7896889A0D84459D56ACB1885279425F5A(L_7, Enumerable_First_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_m5425AF7896889A0D84459D56ACB1885279425F5A_RuntimeMethod_var);
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_9 = L_8->___debugMetadata_1;
		V_1 = L_9;
		// var debugMetadata = pathIdentifiers.Aggregate(firstDebugMetadata, (acc, id) => acc.Merge(id.debugMetadata));
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_10 = __this->___pathIdentifiers_10;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* L_12 = ((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1;
		Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* L_13 = L_12;
		G_B5_0 = L_13;
		G_B5_1 = L_11;
		G_B5_2 = L_10;
		if (L_13)
		{
			G_B6_0 = L_13;
			G_B6_1 = L_11;
			G_B6_2 = L_10;
			goto IL_006c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* L_14 = ((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* L_15 = (Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED*)il2cpp_codegen_object_new(Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED_il2cpp_TypeInfo_var);
		Func_3__ctor_mD9CB1B1FF461F43FEBEB5BE74B1C742AD72B080D(L_15, L_14, (intptr_t)((void*)U3CU3Ec_U3Cget_identifierU3Eb__5_0_m3F93841E2FC7D9D434FE11EC13DC12E0706B2C1A_RuntimeMethod_var), NULL);
		Func_3_t6F2CC2685EAA98435219D1619599F42F141427ED* L_16 = L_15;
		((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1), (void*)L_16);
		G_B6_0 = L_16;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_006c:
	{
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_17;
		L_17 = Enumerable_Aggregate_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisDebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01_mD582FBD8810F5558D7B1085272C9DB034DAF0E64(G_B6_2, G_B6_1, G_B6_0, Enumerable_Aggregate_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisDebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01_mD582FBD8810F5558D7B1085272C9DB034DAF0E64_RuntimeMethod_var);
		V_2 = L_17;
		// _singleIdentifier = new Identifier { name = name, debugMetadata = debugMetadata };
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_18 = (Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD*)il2cpp_codegen_object_new(Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD_il2cpp_TypeInfo_var);
		Identifier__ctor_m9005D97AF26A8FF60030DE8B472F085F4FABEE84(L_18, NULL);
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_19 = L_18;
		String_t* L_20 = V_0;
		L_19->___name_0 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___name_0), (void*)L_20);
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_21 = L_19;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_22 = V_2;
		L_21->___debugMetadata_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___debugMetadata_1), (void*)L_22);
		__this->____singleIdentifier_9 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____singleIdentifier_9), (void*)L_21);
	}

IL_008b:
	{
		// return _singleIdentifier;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_23 = __this->____singleIdentifier_9;
		return L_23;
	}
}
// System.Collections.Generic.List`1<System.String> Ink.Parsed.VariableReference::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74 (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> path { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CpathU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableReference::set_path(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference_set_path_m2987340812E384B0F12578542E50B0CEFABDEAB0 (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> path { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CpathU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// Ink.Runtime.VariableReference Ink.Parsed.VariableReference::get_runtimeVarRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* VariableReference_get_runtimeVarRef_m802153B4D5D754E71AE064AF13DD35E46F6D825E (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	{
		// public Runtime.VariableReference runtimeVarRef { get { return _runtimeVarRef; } }
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_0 = __this->____runtimeVarRef_14;
		return L_0;
	}
}
// System.Void Ink.Parsed.VariableReference::.ctor(System.Collections.Generic.List`1<Ink.Parsed.Identifier>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference__ctor_mCFEE6DDD4D463CD4A455E64DCFAFE3906504CB77 (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* ___pathIdentifiers0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_m8C56738EBBCF4E4D7F049FC27FC7341390A83B47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_Join_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_mBA08869463F19FC9EB5B34368BB75D9936C07DFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__16_0_m100F96F238BA9E462A570C4DD891720F6EBC3FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* G_B2_0 = NULL;
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* G_B2_1 = NULL;
	VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* G_B2_2 = NULL;
	Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* G_B1_0 = NULL;
	List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* G_B1_1 = NULL;
	VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* G_B1_2 = NULL;
	{
		// public VariableReference (List<Identifier> pathIdentifiers)
		Expression__ctor_mBA2907DB4D7FEA90D9A52A1C9820CDBC72DFB2AD(__this, NULL);
		// this.pathIdentifiers = pathIdentifiers;
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_0 = ___pathIdentifiers0;
		__this->___pathIdentifiers_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathIdentifiers_10), (void*)L_0);
		// this.path = pathIdentifiers.Select(id => id?.name).ToList();
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_1 = ___pathIdentifiers0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* L_2 = ((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2;
		Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* L_4 = ((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* L_5 = (Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875*)il2cpp_codegen_object_new(Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875_il2cpp_TypeInfo_var);
		Func_2__ctor_mB5EB3293BD72F180C6BB12565679FEF66CC283EE(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__16_0_m100F96F238BA9E462A570C4DD891720F6EBC3FC8_RuntimeMethod_var), NULL);
		Func_2_t1ACDA394BC7B56E49AF9E08FD88FE968A98C3875* L_6 = L_5;
		((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_2), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002e:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_m8C56738EBBCF4E4D7F049FC27FC7341390A83B47(G_B2_1, G_B2_0, Enumerable_Select_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_TisString_t_m8C56738EBBCF4E4D7F049FC27FC7341390A83B47_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8;
		L_8 = Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5(L_7, Enumerable_ToList_TisString_t_mA7BFFF205C0EB2F8CE0436E85FC70A2449EDD7C5_RuntimeMethod_var);
		VariableReference_set_path_m2987340812E384B0F12578542E50B0CEFABDEAB0_inline(G_B2_2, L_8, NULL);
		// this.name = string.Join (".", pathIdentifiers);
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_9 = ___pathIdentifiers0;
		String_t* L_10;
		L_10 = String_Join_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_mBA08869463F19FC9EB5B34368BB75D9936C07DFD(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_9, String_Join_TisIdentifier_t0F346C00621758823B8D81B08308C6B9C24089DD_mBA08869463F19FC9EB5B34368BB75D9936C07DFD_RuntimeMethod_var);
		VariableReference_set_name_mCA878128BFBEF54B19531F832CD1FB62A617ED65_inline(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void Ink.Parsed.VariableReference::GenerateIntoContainer(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference_GenerateIntoContainer_m126D090D46BE94232CB78DD566AEEB871910099B (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// Expression constantValue = null;
		V_0 = (Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D*)NULL;
		// if ( story.constants.TryGetValue (name, out constantValue) ) {
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_0;
		L_0 = Object_get_story_mC48C490DCCF22AEC1CC28FEA37BDD22AA31C8B1C(__this, NULL);
		Dictionary_2_tCF6A8B10B39E2394A14ABA02E2B7D601BA4C6301* L_1 = L_0->___constants_15;
		String_t* L_2;
		L_2 = VariableReference_get_name_mE6D2556C23D83C040F82E27DE755F7D6FBD90E0F_inline(__this, NULL);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_m755DA429ABB1780910FDA34B8178C252F281548F_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// constantValue.GenerateConstantIntoContainer (container);
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_4 = V_0;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_5 = ___container0;
		Expression_GenerateConstantIntoContainer_mEC1F77A0C77E93571A23830C1AFFC661A5FD1354(L_4, L_5, NULL);
		// isConstantReference = true;
		__this->___isConstantReference_12 = (bool)1;
		// return;
		return;
	}

IL_002b:
	{
		// _runtimeVarRef = new Runtime.VariableReference (name);
		String_t* L_6;
		L_6 = VariableReference_get_name_mE6D2556C23D83C040F82E27DE755F7D6FBD90E0F_inline(__this, NULL);
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_7 = (VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819*)il2cpp_codegen_object_new(VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819_il2cpp_TypeInfo_var);
		VariableReference__ctor_mEFCD8F4CFF06B6A3F076B4688E09AC5DE0786718(L_7, L_6, NULL);
		__this->____runtimeVarRef_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runtimeVarRef_14), (void*)L_7);
		// if (path.Count == 1 || path.Count == 2) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8;
		L_8 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		int32_t L_9;
		L_9 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_8, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
		L_10 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		int32_t L_11;
		L_11 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_10, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_00af;
		}
	}

IL_0058:
	{
		// string listItemName = null;
		V_1 = (String_t*)NULL;
		// string listName = null;
		V_2 = (String_t*)NULL;
		// if (path.Count == 1) listItemName = path [0];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12;
		L_12 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		int32_t L_13;
		L_13 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_12, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// if (path.Count == 1) listItemName = path [0];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
		L_14 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		String_t* L_15;
		L_15 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_14, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_1 = L_15;
		goto IL_0093;
	}

IL_0079:
	{
		// listName = path [0];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16;
		L_16 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		String_t* L_17;
		L_17 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_16, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_2 = L_17;
		// listItemName = path [1];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18;
		L_18 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		String_t* L_19;
		L_19 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_18, 1, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_1 = L_19;
	}

IL_0093:
	{
		// var listItem = story.ResolveListItem (listName, listItemName, this);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_20;
		L_20 = Object_get_story_mC48C490DCCF22AEC1CC28FEA37BDD22AA31C8B1C(__this, NULL);
		String_t* L_21 = V_2;
		String_t* L_22 = V_1;
		ListElementDefinition_t3F6CD3FE450322F15B1B639988E29B22BF99C8DD* L_23;
		L_23 = Story_ResolveListItem_m857290E9E49BEC424C7D3A54E6171F11DE081302(L_20, L_21, L_22, __this, NULL);
		// if (listItem) {
		bool L_24;
		L_24 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_23, NULL);
		if (!L_24)
		{
			goto IL_00af;
		}
	}
	{
		// isListItemReference = true;
		__this->___isListItemReference_13 = (bool)1;
	}

IL_00af:
	{
		// container.AddContent (_runtimeVarRef);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_25 = ___container0;
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_26 = __this->____runtimeVarRef_14;
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_25, L_26, NULL);
		// }
		return;
	}
}
// System.Void Ink.Parsed.VariableReference::ResolveReferences(Ink.Parsed.Story)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableReference_ResolveReferences_m7DED9D840E481E81329DE7A5FAA9F82344B934CD (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BAD6CD617D272A279F787BE0B87FA21DB8B7C02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral597A362DB8D6E186B492CF582B27E2FC8F03E2D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD28C21A745DAAD04F4A4BAA862741D9A6EBEF607);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAADEE259CA27EB2EEAEFC368E2BE391D2D0CCDA);
		s_Il2CppMethodInitialized = true;
	}
	Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* V_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_1 = NULL;
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* V_2 = NULL;
	String_t* V_3 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* G_B13_4 = NULL;
	Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* G_B12_4 = NULL;
	String_t* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* G_B14_4 = NULL;
	Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	{
		// base.ResolveReferences (context);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_0 = ___context0;
		Object_ResolveReferences_m8BC5DD701019191459A9CEF84D71FFBE2FEDFF8E(__this, L_0, NULL);
		// if (isConstantReference || isListItemReference) {
		bool L_1 = __this->___isConstantReference_12;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2 = __this->___isListItemReference_13;
		if (!L_2)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// return;
		return;
	}

IL_0018:
	{
		// var parsedPath = new Path (pathIdentifiers);
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_3 = __this->___pathIdentifiers_10;
		Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* L_4 = (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC*)il2cpp_codegen_object_new(Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC_il2cpp_TypeInfo_var);
		Path__ctor_m1FA0634AFC2CCF3487EE1E3F27F2236655C8AB25(L_4, L_3, NULL);
		V_0 = L_4;
		// Parsed.Object targetForCount = parsedPath.ResolveFromContext (this);
		Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* L_5 = V_0;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6;
		L_6 = Path_ResolveFromContext_m2E7745228A2131E2474943DDB9BE94219BE1AF60(L_5, __this, NULL);
		V_1 = L_6;
		// if (targetForCount) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7 = V_1;
		bool L_8;
		L_8 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_7, NULL);
		if (!L_8)
		{
			goto IL_00f6;
		}
	}
	{
		// targetForCount.containerForCounting.visitsShouldBeCounted = true;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_9 = V_1;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_10;
		L_10 = VirtualFuncInvoker0< Container_t74302BC1028974B0A346A43F334AECB681D79579* >::Invoke(7 /* Ink.Runtime.Container Ink.Parsed.Object::get_containerForCounting() */, L_9);
		Container_set_visitsShouldBeCounted_mCA668E9A96F2D5B8F25801AE1169786E35B2091C_inline(L_10, (bool)1, NULL);
		// if (_runtimeVarRef == null) return;
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_11 = __this->____runtimeVarRef_14;
		bool L_12;
		L_12 = Object_op_Equality_mB7B1691F79F79E2A3FECC61D568B160EC9CFAE6B(L_11, (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// if (_runtimeVarRef == null) return;
		return;
	}

IL_0052:
	{
		// _runtimeVarRef.pathForCount = targetForCount.runtimePath;
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_13 = __this->____runtimeVarRef_14;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_14 = V_1;
		Path_tCC1F1626DB60711735401EA8FA76A191D9014600* L_15;
		L_15 = VirtualFuncInvoker0< Path_tCC1F1626DB60711735401EA8FA76A191D9014600* >::Invoke(6 /* Ink.Runtime.Path Ink.Parsed.Object::get_runtimePath() */, L_14);
		VariableReference_set_pathForCount_m3488741E05F86E09B7A082704610A095EF0C7016_inline(L_13, L_15, NULL);
		// _runtimeVarRef.name = null;
		VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* L_16 = __this->____runtimeVarRef_14;
		VariableReference_set_name_mD0F82FBF6521B061476F855E565D665D03BADF29_inline(L_16, (String_t*)NULL, NULL);
		// var targetFlow = targetForCount as FlowBase;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_17 = V_1;
		V_2 = ((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)IsInstClass((RuntimeObject*)L_17, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var));
		// if (targetFlow && targetFlow.isFunction) {
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_18 = V_2;
		bool L_19;
		L_19 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_18, NULL);
		if (!L_19)
		{
			goto IL_00f5;
		}
	}
	{
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_20 = V_2;
		bool L_21;
		L_21 = FlowBase_get_isFunction_m89BD3D4FC104434B4EB5091C121C29C3E817D30F_inline(L_20, NULL);
		if (!L_21)
		{
			goto IL_00f5;
		}
	}
	{
		// if ( parent is Weave || parent is ContentList || parent is FlowBase) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_22;
		L_22 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(__this, NULL);
		if (((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_22, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var)))
		{
			goto IL_00ad;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_23;
		L_23 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(__this, NULL);
		if (((ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23*)IsInstClass((RuntimeObject*)L_23, ContentList_t588B8BAEA73B35C29EB1DA7FA0673DE7403A5C23_il2cpp_TypeInfo_var)))
		{
			goto IL_00ad;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_24;
		L_24 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(__this, NULL);
		if (!((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)IsInstClass((RuntimeObject*)L_24, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var)))
		{
			goto IL_00f5;
		}
	}

IL_00ad:
	{
		// Warning ("'" + targetFlow.identifier + "' being used as read count rather than being called as function. Perhaps you intended to write " + targetFlow.name + "()");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		ArrayElementTypeCheck (L_26, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_28 = V_2;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_29;
		L_29 = FlowBase_get_identifier_m4690D9A6AAB405E233688C9261A4F0BB19BFC105_inline(L_28, NULL);
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_30 = L_29;
		G_B12_0 = L_30;
		G_B12_1 = 1;
		G_B12_2 = L_27;
		G_B12_3 = L_27;
		G_B12_4 = __this;
		if (L_30)
		{
			G_B13_0 = L_30;
			G_B13_1 = 1;
			G_B13_2 = L_27;
			G_B13_3 = L_27;
			G_B13_4 = __this;
			goto IL_00cb;
		}
	}
	{
		G_B14_0 = ((String_t*)(NULL));
		G_B14_1 = G_B12_1;
		G_B14_2 = G_B12_2;
		G_B14_3 = G_B12_3;
		G_B14_4 = G_B12_4;
		goto IL_00d0;
	}

IL_00cb:
	{
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B13_0);
		G_B14_0 = L_31;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		G_B14_4 = G_B13_4;
	}

IL_00d0:
	{
		ArrayElementTypeCheck (G_B14_2, G_B14_0);
		(G_B14_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B14_1), (String_t*)G_B14_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = G_B14_3;
		ArrayElementTypeCheck (L_32, _stringLiteralD28C21A745DAAD04F4A4BAA862741D9A6EBEF607);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralD28C21A745DAAD04F4A4BAA862741D9A6EBEF607);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_34 = V_2;
		String_t* L_35;
		L_35 = FlowBase_get_name_m7039F76999F2B76C702FA8DDE92FBD86BC58D97F(L_34, NULL);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_33;
		ArrayElementTypeCheck (L_36, _stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral622F5FF68A93093A1D312703FF92713F8BF2C946);
		String_t* L_37;
		L_37 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_36, NULL);
		Object_Warning_m9F035739B3D45548FE13DD8787B33B931836F50A(G_B14_4, L_37, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
	}

IL_00f5:
	{
		// return;
		return;
	}

IL_00f6:
	{
		// if (path.Count > 1) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_38;
		L_38 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		int32_t L_39;
		L_39 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_38, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_39) <= ((int32_t)1)))
		{
			goto IL_0155;
		}
	}
	{
		// var errorMsg = "Could not find target for read count: " + parsedPath;
		Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* L_40 = V_0;
		Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* L_41 = L_40;
		G_B18_0 = L_41;
		G_B18_1 = _stringLiteralFAADEE259CA27EB2EEAEFC368E2BE391D2D0CCDA;
		if (L_41)
		{
			G_B19_0 = L_41;
			G_B19_1 = _stringLiteralFAADEE259CA27EB2EEAEFC368E2BE391D2D0CCDA;
			goto IL_0111;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		goto IL_0116;
	}

IL_0111:
	{
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B19_0);
		G_B20_0 = L_42;
		G_B20_1 = G_B19_1;
	}

IL_0116:
	{
		String_t* L_43;
		L_43 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B20_1, G_B20_0, NULL);
		V_3 = L_43;
		// if (path.Count <= 2)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_44;
		L_44 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		int32_t L_45;
		L_45 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_44, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_45) > ((int32_t)2)))
		{
			goto IL_014b;
		}
	}
	{
		// errorMsg += ", or couldn't find list item with the name " + string.Join (",", path.ToArray());
		String_t* L_46 = V_3;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_47;
		L_47 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48;
		L_48 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_47, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_49;
		L_49 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_48, NULL);
		String_t* L_50;
		L_50 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_46, _stringLiteral597A362DB8D6E186B492CF582B27E2FC8F03E2D3, L_49, NULL);
		V_3 = L_50;
	}

IL_014b:
	{
		// Error (errorMsg);
		String_t* L_51 = V_3;
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_51, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, (bool)0);
		// return;
		return;
	}

IL_0155:
	{
		// if (!context.ResolveVariableWithName (this.name, fromNode: this).found) {
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_52 = ___context0;
		String_t* L_53;
		L_53 = VariableReference_get_name_mE6D2556C23D83C040F82E27DE755F7D6FBD90E0F_inline(__this, NULL);
		VariableResolveResult_t99D1D81240E93D5ADA4FE994AFF5E37D5199D1B2 L_54;
		L_54 = FlowBase_ResolveVariableWithName_m017DF795D3DA6FF4644793B10ED8B6386171E2C0(L_52, L_53, __this, NULL);
		bool L_55 = L_54.___found_0;
		if (L_55)
		{
			goto IL_0181;
		}
	}
	{
		// Error("Unresolved variable: "+this.ToString(), this);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_57;
		L_57 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4BAD6CD617D272A279F787BE0B87FA21DB8B7C02, L_56, NULL);
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_57, __this, (bool)0);
	}

IL_0181:
	{
		// }
		return;
	}
}
// System.String Ink.Parsed.VariableReference::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VariableReference_ToString_m236EBA5F727CBDC3619DF24EE8FF979DD2B60948 (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Join(".", path.ToArray());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0;
		L_0 = VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_0, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_2;
		L_2 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_1, NULL);
		return L_2;
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
// System.Void Ink.Parsed.VariableReference/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4716239D24B1365F4C26BAE3D7CCB7B1940984AD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* L_0 = (U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0*)il2cpp_codegen_object_new(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m99983106CE4D2AC262F8BD9DC13B7823049F8684(L_0, NULL);
		((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Ink.Parsed.VariableReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m99983106CE4D2AC262F8BD9DC13B7823049F8684 (U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Ink.Runtime.DebugMetadata Ink.Parsed.VariableReference/<>c::<get_identifier>b__5_0(Ink.Runtime.DebugMetadata,Ink.Parsed.Identifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* U3CU3Ec_U3Cget_identifierU3Eb__5_0_m3F93841E2FC7D9D434FE11EC13DC12E0706B2C1A (U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* __this, DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ___acc0, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___id1, const RuntimeMethod* method) 
{
	{
		// var debugMetadata = pathIdentifiers.Aggregate(firstDebugMetadata, (acc, id) => acc.Merge(id.debugMetadata));
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_0 = ___acc0;
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_1 = ___id1;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_2 = L_1->___debugMetadata_1;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_3;
		L_3 = DebugMetadata_Merge_m77879AC51F0FFC3021B79DEEBB6EA37DE53923AC(L_0, L_2, NULL);
		return L_3;
	}
}
// System.String Ink.Parsed.VariableReference/<>c::<.ctor>b__16_0(Ink.Parsed.Identifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__16_0_m100F96F238BA9E462A570C4DD891720F6EBC3FC8 (U3CU3Ec_t594A25AEA7A9E3FEF1771F2037025E0FFBBD6CC0* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___id0, const RuntimeMethod* method) 
{
	{
		// this.path = pathIdentifiers.Select(id => id?.name).ToList();
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = ___id0;
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
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_1 = ___id0;
		String_t* L_2 = L_1->___name_0;
		return L_2;
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
// Ink.Runtime.Container Ink.Parsed.Weave::get_rootContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Weave_get_rootContainer_mF7051B9D57FAE9724FFA81B7760DABEE4A7330E5 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	{
		// if (_rootContainer == null) {
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = __this->____rootContainer_15;
		bool L_1;
		L_1 = Object_op_Equality_mB7B1691F79F79E2A3FECC61D568B160EC9CFAE6B(L_0, (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// GenerateRuntimeObject ();
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_2;
		L_2 = VirtualFuncInvoker0< Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* >::Invoke(8 /* Ink.Runtime.Object Ink.Parsed.Object::GenerateRuntimeObject() */, __this);
	}

IL_0015:
	{
		// return _rootContainer;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_3 = __this->____rootContainer_15;
		return L_3;
	}
}
// Ink.Runtime.Container Ink.Parsed.Weave::get_currentContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	{
		// Runtime.Container currentContainer { get; set; }
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = __this->___U3CcurrentContainerU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Ink.Parsed.Weave::set_currentContainer(Ink.Runtime.Container)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_set_currentContainer_m726341F02CE4FBBF970874A494486A48190F7C23 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___value0, const RuntimeMethod* method) 
{
	{
		// Runtime.Container currentContainer { get; set; }
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = ___value0;
		__this->___U3CcurrentContainerU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentContainerU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Int32 Ink.Parsed.Weave::get_baseIndentIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weave_get_baseIndentIndex_m98068082F6788CEF08908CCDF9E62F4C4938839D (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	{
		// public int baseIndentIndex { get; private set; }
		int32_t L_0 = __this->___U3CbaseIndentIndexU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Ink.Parsed.Weave::set_baseIndentIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_set_baseIndentIndex_m6F3D26B4F215BB48218CFE3E84BD0B26532B98B1 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int baseIndentIndex { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CbaseIndentIndexU3Ek__BackingField_7 = L_0;
		return;
	}
}
// Ink.Parsed.Object Ink.Parsed.Weave::get_lastParsedSignificantObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Weave_get_lastParsedSignificantObject_m1B04EDF689CE2860594576D416B2EBC60C55423B (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_0 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_1 = NULL;
	int32_t V_2 = 0;
	Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* V_3 = NULL;
	{
		// if (content.Count == 0) return null;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_0;
		L_0 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_1;
		L_1 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_0, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (content.Count == 0) return null;
		return (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL;
	}

IL_000f:
	{
		// Parsed.Object lastObject = null;
		V_0 = (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL;
		// for (int i = content.Count - 1; i >= 0; --i) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_2;
		L_2 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_3;
		L_3 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_2, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		goto IL_005c;
	}

IL_0021:
	{
		// lastObject = content [i];
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_4;
		L_4 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_5 = V_2;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6;
		L_6 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_4, L_5, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		V_0 = L_6;
		// var lastText = lastObject as Parsed.Text;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7 = V_0;
		V_3 = ((Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED*)IsInstClass((RuntimeObject*)L_7, Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED_il2cpp_TypeInfo_var));
		// if (lastText && lastText.text == "\n") {
		Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* L_8 = V_3;
		bool L_9;
		L_9 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_8, NULL);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* L_10 = V_3;
		String_t* L_11;
		L_11 = Text_get_text_m14F6F4C8E14BAD266FF794A86DCFA15E89964103_inline(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		if (L_12)
		{
			goto IL_0058;
		}
	}

IL_004f:
	{
		// if (IsGlobalDeclaration (lastObject))
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_13 = V_0;
		bool L_14;
		L_14 = Weave_IsGlobalDeclaration_m2F27AA5E1B93C4B938128743ECD736C5C69F43A3(__this, L_13, NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		// for (int i = content.Count - 1; i >= 0; --i) {
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_005c:
	{
		// for (int i = content.Count - 1; i >= 0; --i) {
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}

IL_0060:
	{
		// var lastWeave = lastObject as Weave;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_17 = V_0;
		V_1 = ((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_17, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var));
		// if (lastWeave)
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_18 = V_1;
		bool L_19;
		L_19 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_18, NULL);
		if (!L_19)
		{
			goto IL_0076;
		}
	}
	{
		// lastObject = lastWeave.lastParsedSignificantObject;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_20 = V_1;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_21;
		L_21 = Weave_get_lastParsedSignificantObject_m1B04EDF689CE2860594576D416B2EBC60C55423B(L_20, NULL);
		V_0 = L_21;
	}

IL_0076:
	{
		// return lastObject;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_22 = V_0;
		return L_22;
	}
}
// System.Void Ink.Parsed.Weave::.ctor(System.Collections.Generic.List`1<Ink.Parsed.Object>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave__ctor_mE804413D35CA9D86F034623450393D361FB63449 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___cont0, int32_t ___indentIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Weave(List<Parsed.Object> cont, int indentIndex=-1)
		Object__ctor_m9A312B0CEE75C9285FDABFA4EB210AE1EE959A1A(__this, NULL);
		// if (indentIndex == -1) {
		int32_t L_0 = ___indentIndex1;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		// baseIndentIndex = DetermineBaseIndentationFromContent (cont);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_1 = ___cont0;
		int32_t L_2;
		L_2 = Weave_DetermineBaseIndentationFromContent_m938BFF91272784586BFBB6F194284632D19CD604(__this, L_1, NULL);
		Weave_set_baseIndentIndex_m6F3D26B4F215BB48218CFE3E84BD0B26532B98B1_inline(__this, L_2, NULL);
		goto IL_0020;
	}

IL_0019:
	{
		// baseIndentIndex = indentIndex;
		int32_t L_3 = ___indentIndex1;
		Weave_set_baseIndentIndex_m6F3D26B4F215BB48218CFE3E84BD0B26532B98B1_inline(__this, L_3, NULL);
	}

IL_0020:
	{
		// AddContent (cont);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_4 = ___cont0;
		Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280(__this, L_4, Object_AddContent_TisObject_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_m46029874508E8FCA8592AD1521D1251361301280_RuntimeMethod_var);
		// ConstructWeaveHierarchyFromIndentation ();
		Weave_ConstructWeaveHierarchyFromIndentation_m347CCA2577E3B2907C247FAD50CB1DD71E5C259D(__this, NULL);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::ResolveWeavePointNaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ResolveWeavePointNaming_m0250E06BC9A7314A58C67D74692535A9E0032BF1 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m09D0B05560B270A9FADCF6E5D9C0736FA6CB8BAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mAA08D8B1D90E5E645461227F453508FF161AB975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindAll_TisIWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_m7F252A913726163DB529A7C7F372736A522BD2A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveWeavePointNamingU3Eb__16_0_mD2E1AE17D456275345755805605BAB67AD659C93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E496DD143AA8143CEB7E732FC7B782BF3979F24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral580238E6E0ACB59AECE7F14975A94031E75C9F37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DC9AC61476AAE77F1CE47714E462CD38340FFEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB53E3868832BD0EF55666E126B25E567528AC5AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8B61217D46DA3BC553C980F9397D47D55C737C2);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_4 = NULL;
	FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* G_B2_0 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* G_B2_1 = NULL;
	FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* G_B1_0 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* G_B1_1 = NULL;
	String_t* G_B8_0 = NULL;
	{
		// var namedWeavePoints = FindAll<IWeavePoint> (w => !string.IsNullOrEmpty (w.name));
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
		FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* L_0 = ((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1;
		FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
		U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* L_2 = ((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* L_3 = (FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40*)il2cpp_codegen_object_new(FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40_il2cpp_TypeInfo_var);
		FindQueryFunc_1__ctor_m50A841D0C50D66E3DBEFCD964A9471DCF3A8C678(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CResolveWeavePointNamingU3Eb__16_0_mD2E1AE17D456275345755805605BAB67AD659C93_RuntimeMethod_var), NULL);
		FindQueryFunc_1_t128BD661DD7120F24B2A7CB763271EDE1D5A0F40* L_4 = L_3;
		((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9__16_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_5;
		L_5 = Object_FindAll_TisIWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_m7F252A913726163DB529A7C7F372736A522BD2A6(G_B2_1, G_B2_0, Object_FindAll_TisIWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_m7F252A913726163DB529A7C7F372736A522BD2A6_RuntimeMethod_var);
		// _namedWeavePoints = new Dictionary<string, IWeavePoint> ();
		Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_6 = (Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F*)il2cpp_codegen_object_new(Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m09D0B05560B270A9FADCF6E5D9C0736FA6CB8BAC(L_6, Dictionary_2__ctor_m09D0B05560B270A9FADCF6E5D9C0736FA6CB8BAC_RuntimeMethod_var);
		__this->____namedWeavePoints_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____namedWeavePoints_16), (void*)L_6);
		// foreach (var weavePoint in namedWeavePoints) {
		Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 L_7;
		L_7 = List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87(L_5, List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A((&V_0), Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d8_1;
			}

IL_003b_1:
			{
				// foreach (var weavePoint in namedWeavePoints) {
				RuntimeObject* L_8;
				L_8 = Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_inline((&V_0), Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var);
				V_1 = L_8;
				// if (_namedWeavePoints.TryGetValue (weavePoint.name, out existingWeavePoint)) {
				Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_9 = __this->____namedWeavePoints_16;
				RuntimeObject* L_10 = V_1;
				String_t* L_11;
				L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Ink.Parsed.IWeavePoint::get_name() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_10);
				bool L_12;
				L_12 = Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826(L_9, L_11, (&V_2), Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826_RuntimeMethod_var);
				if (!L_12)
				{
					goto IL_00c6_1;
				}
			}
			{
				// var typeName = existingWeavePoint is Gather ? "gather" : "choice";
				RuntimeObject* L_13 = V_2;
				if (((Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)IsInstClass((RuntimeObject*)L_13, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var)))
				{
					goto IL_0067_1;
				}
			}
			{
				G_B8_0 = _stringLiteral6DC9AC61476AAE77F1CE47714E462CD38340FFEA;
				goto IL_006c_1;
			}

IL_0067_1:
			{
				G_B8_0 = _stringLiteral580238E6E0ACB59AECE7F14975A94031E75C9F37;
			}

IL_006c_1:
			{
				V_3 = G_B8_0;
				// var existingObj = (Parsed.Object)existingWeavePoint;
				RuntimeObject* L_14 = V_2;
				V_4 = ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_14, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var));
				// Error ("A " + typeName + " with the same label name '" + weavePoint.name + "' already exists in this context on line " + existingObj.debugMetadata.startLineNumber, (Parsed.Object)weavePoint);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
				ArrayElementTypeCheck (L_16, _stringLiteralF8B61217D46DA3BC553C980F9397D47D55C737C2);
				(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF8B61217D46DA3BC553C980F9397D47D55C737C2);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
				String_t* L_18 = V_3;
				ArrayElementTypeCheck (L_17, L_18);
				(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_18);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_17;
				ArrayElementTypeCheck (L_19, _stringLiteralB53E3868832BD0EF55666E126B25E567528AC5AD);
				(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB53E3868832BD0EF55666E126B25E567528AC5AD);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
				RuntimeObject* L_21 = V_1;
				String_t* L_22;
				L_22 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Ink.Parsed.IWeavePoint::get_name() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_21);
				ArrayElementTypeCheck (L_20, L_22);
				(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_20;
				ArrayElementTypeCheck (L_23, _stringLiteral1E496DD143AA8143CEB7E732FC7B782BF3979F24);
				(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1E496DD143AA8143CEB7E732FC7B782BF3979F24);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_25 = V_4;
				DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_26;
				L_26 = Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28(L_25, NULL);
				int32_t* L_27 = (&L_26->___startLineNumber_0);
				String_t* L_28;
				L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_27, NULL);
				ArrayElementTypeCheck (L_24, L_28);
				(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_28);
				String_t* L_29;
				L_29 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_24, NULL);
				RuntimeObject* L_30 = V_1;
				VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_29, ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_30, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var)), (bool)0);
			}

IL_00c6_1:
			{
				// _namedWeavePoints [weavePoint.name] = weavePoint;
				Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_31 = __this->____namedWeavePoints_16;
				RuntimeObject* L_32 = V_1;
				String_t* L_33;
				L_33 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Ink.Parsed.IWeavePoint::get_name() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_32);
				RuntimeObject* L_34 = V_1;
				Dictionary_2_set_Item_mAA08D8B1D90E5E645461227F453508FF161AB975(L_31, L_33, L_34, Dictionary_2_set_Item_mAA08D8B1D90E5E645461227F453508FF161AB975_RuntimeMethod_var);
			}

IL_00d8_1:
			{
				// foreach (var weavePoint in namedWeavePoints) {
				bool L_35;
				L_35 = Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39((&V_0), Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var);
				if (L_35)
				{
					goto IL_003b_1;
				}
			}
			{
				goto IL_00f4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::ConstructWeaveHierarchyFromIndentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ConstructWeaveHierarchyFromIndentation_m347CCA2577E3B2907C247FAD50CB1DD71E5C259D (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetRange_mEBA06D625B0F423AB20F3D64D0494EBB300C103D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m5CF433B308EA5F7DBC3D30C53F2536C2F47F8067_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_InsertContent_TisWeave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_m2F8400F9F5E13FE2D2EF334CA9462E8CE3F86715_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// int contentIdx = 0;
		V_0 = 0;
		goto IL_00ad;
	}

IL_0007:
	{
		// Parsed.Object obj = content [contentIdx];
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_0;
		L_0 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_1 = V_0;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_2;
		L_2 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_0, L_1, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		V_1 = L_2;
		// if (obj is IWeavePoint) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3 = V_1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var)))
		{
			goto IL_00a9;
		}
	}
	{
		// var weavePoint = (IWeavePoint)obj;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4 = V_1;
		// var weaveIndentIdx = weavePoint.indentationDepth - 1;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Ink.Parsed.IWeavePoint::get_indentationDepth() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var)));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		// if (weaveIndentIdx > baseIndentIndex) {
		int32_t L_6 = V_2;
		int32_t L_7;
		L_7 = Weave_get_baseIndentIndex_m98068082F6788CEF08908CCDF9E62F4C4938839D_inline(__this, NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_00a9;
		}
	}
	{
		// int innerWeaveStartIdx = contentIdx;
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0066;
	}

IL_003a:
	{
		// var innerWeaveObj = content [contentIdx] as IWeavePoint;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_9;
		L_9 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_10 = V_0;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_11;
		L_11 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_9, L_10, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var));
		// if (innerWeaveObj != null) {
		RuntimeObject* L_12 = V_6;
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		// var innerIndentIdx = innerWeaveObj.indentationDepth - 1;
		RuntimeObject* L_13 = V_6;
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Ink.Parsed.IWeavePoint::get_indentationDepth() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_13);
		// if (innerIndentIdx <= baseIndentIndex) {
		int32_t L_15;
		L_15 = Weave_get_baseIndentIndex_m98068082F6788CEF08908CCDF9E62F4C4938839D_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, 1))) <= ((int32_t)L_15)))
		{
			goto IL_0074;
		}
	}

IL_0062:
	{
		// contentIdx++;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0066:
	{
		// while (contentIdx < content.Count) {
		int32_t L_17 = V_0;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_18;
		L_18 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_19;
		L_19 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_18, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_003a;
		}
	}

IL_0074:
	{
		// int weaveContentCount = contentIdx - innerWeaveStartIdx;
		int32_t L_20 = V_0;
		int32_t L_21 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_20, L_21));
		// var weaveContent = content.GetRange (innerWeaveStartIdx, weaveContentCount);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_22;
		L_22 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_25;
		L_25 = List_1_GetRange_mEBA06D625B0F423AB20F3D64D0494EBB300C103D(L_22, L_23, L_24, List_1_GetRange_mEBA06D625B0F423AB20F3D64D0494EBB300C103D_RuntimeMethod_var);
		// content.RemoveRange (innerWeaveStartIdx, weaveContentCount);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_26;
		L_26 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_27 = V_3;
		int32_t L_28 = V_4;
		List_1_RemoveRange_m5CF433B308EA5F7DBC3D30C53F2536C2F47F8067(L_26, L_27, L_28, List_1_RemoveRange_m5CF433B308EA5F7DBC3D30C53F2536C2F47F8067_RuntimeMethod_var);
		// var weave = new Weave (weaveContent, weaveIndentIdx);
		int32_t L_29 = V_2;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_30 = (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)il2cpp_codegen_object_new(Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		Weave__ctor_mE804413D35CA9D86F034623450393D361FB63449(L_30, L_25, L_29, NULL);
		V_5 = L_30;
		// InsertContent (innerWeaveStartIdx, weave);
		int32_t L_31 = V_3;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_32 = V_5;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_33;
		L_33 = Object_InsertContent_TisWeave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_m2F8400F9F5E13FE2D2EF334CA9462E8CE3F86715(__this, L_31, L_32, Object_InsertContent_TisWeave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_m2F8400F9F5E13FE2D2EF334CA9462E8CE3F86715_RuntimeMethod_var);
		// contentIdx = innerWeaveStartIdx;
		int32_t L_34 = V_3;
		V_0 = L_34;
	}

IL_00a9:
	{
		// contentIdx++;
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ad:
	{
		// while (contentIdx < content.Count) {
		int32_t L_36 = V_0;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_37;
		L_37 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		int32_t L_38;
		L_38 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_37, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Ink.Parsed.Weave::DetermineBaseIndentationFromContent(System.Collections.Generic.List`1<Ink.Parsed.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weave_DetermineBaseIndentationFromContent_m938BFF91272784586BFBB6F194284632D19CD604 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* ___contentList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// foreach (var obj in contentList) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_0 = ___contentList0;
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_1;
		L_1 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_0, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_0), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_0009_1:
			{
				// foreach (var obj in contentList) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_2;
				L_2 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_0), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				V_1 = L_2;
				// if (obj is IWeavePoint) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3 = V_1;
				if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var)))
				{
					goto IL_0029_1;
				}
			}
			{
				// return ((IWeavePoint)obj).indentationDepth - 1;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4 = V_1;
				int32_t L_5;
				L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Ink.Parsed.IWeavePoint::get_indentationDepth() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var)));
				V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
				goto IL_0044;
			}

IL_0029_1:
			{
				// foreach (var obj in contentList) {
				bool L_6;
				L_6 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_0), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// return 0;
		return 0;
	}

IL_0044:
	{
		// }
		int32_t L_7 = V_2;
		return L_7;
	}
}
// Ink.Runtime.Object Ink.Parsed.Weave::GenerateRuntimeObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* Weave_GenerateRuntimeObject_mAF0E7F0D6BD39321E73075FC4CC8B7C5E78C5ACB (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF67AEA92CB96A7EB9B237EA52FC2B38AA9B16BBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m60A33E724150BD07A6081520E30BCBB4D524DFF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE857C294F1FDC1B1EB7A48BD4C4B118802AD68F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA7383995CB6636153484C17B150C3B16C85C49B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_0 = NULL;
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_2 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_3 = NULL;
	{
		// _rootContainer = currentContainer = new Runtime.Container();
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = (Container_t74302BC1028974B0A346A43F334AECB681D79579*)il2cpp_codegen_object_new(Container_t74302BC1028974B0A346A43F334AECB681D79579_il2cpp_TypeInfo_var);
		Container__ctor_mE49EAAD4892EDEFFDA64A7A54823A021ECBF4F84(L_0, NULL);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_1 = L_0;
		V_0 = L_1;
		Weave_set_currentContainer_m726341F02CE4FBBF970874A494486A48190F7C23_inline(__this, L_1, NULL);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_2 = V_0;
		__this->____rootContainer_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rootContainer_15), (void*)L_2);
		// looseEnds = new List<IWeavePoint> ();
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_3 = (List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A*)il2cpp_codegen_object_new(List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A_il2cpp_TypeInfo_var);
		List_1__ctor_m60A33E724150BD07A6081520E30BCBB4D524DFF8(L_3, List_1__ctor_m60A33E724150BD07A6081520E30BCBB4D524DFF8_RuntimeMethod_var);
		__this->___looseEnds_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___looseEnds_8), (void*)L_3);
		// gatherPointsToResolve = new List<GatherPointToResolve> ();
		List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* L_4 = (List_1_tA7383995CB6636153484C17B150C3B16C85C49B7*)il2cpp_codegen_object_new(List_1_tA7383995CB6636153484C17B150C3B16C85C49B7_il2cpp_TypeInfo_var);
		List_1__ctor_mE857C294F1FDC1B1EB7A48BD4C4B118802AD68F8(L_4, List_1__ctor_mE857C294F1FDC1B1EB7A48BD4C4B118802AD68F8_RuntimeMethod_var);
		__this->___gatherPointsToResolve_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gatherPointsToResolve_9), (void*)L_4);
		// foreach(var obj in content) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_5;
		L_5 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_6;
		L_6 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_5, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0096:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_1), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008b_1;
			}

IL_0038_1:
			{
				// foreach(var obj in content) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7;
				L_7 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_1), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				V_2 = L_7;
				// if (obj is IWeavePoint) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_8 = V_2;
				if (!((RuntimeObject*)IsInst((RuntimeObject*)L_8, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var)))
				{
					goto IL_0056_1;
				}
			}
			{
				// AddRuntimeForWeavePoint ((IWeavePoint)obj);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_9 = V_2;
				Weave_AddRuntimeForWeavePoint_m6DEEC1E96DDB0A13DBF6DB29CEAF545C28CEDB08(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var)), NULL);
				goto IL_008b_1;
			}

IL_0056_1:
			{
				// if (obj is Weave) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_10 = V_2;
				if (!((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_10, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var)))
				{
					goto IL_007f_1;
				}
			}
			{
				// var weave = (Weave)obj;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_11 = V_2;
				V_3 = ((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)CastclassClass((RuntimeObject*)L_11, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var));
				// AddRuntimeForNestedWeave (weave);
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_12 = V_3;
				Weave_AddRuntimeForNestedWeave_m92A81F04518DC007BED67ACD094084B91BCC1F06(__this, L_12, NULL);
				// gatherPointsToResolve.AddRange (weave.gatherPointsToResolve);
				List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* L_13 = __this->___gatherPointsToResolve_9;
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_14 = V_3;
				List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* L_15 = L_14->___gatherPointsToResolve_9;
				List_1_AddRange_mF67AEA92CB96A7EB9B237EA52FC2B38AA9B16BBB(L_13, L_15, List_1_AddRange_mF67AEA92CB96A7EB9B237EA52FC2B38AA9B16BBB_RuntimeMethod_var);
				goto IL_008b_1;
			}

IL_007f_1:
			{
				// AddGeneralRuntimeContent (obj.runtimeObject);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_16 = V_2;
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_17;
				L_17 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_16, NULL);
				Weave_AddGeneralRuntimeContent_mFCCE215692B86EC17515E4331F2B7ED81042BBC6(__this, L_17, NULL);
			}

IL_008b_1:
			{
				// foreach(var obj in content) {
				bool L_18;
				L_18 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_1), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_00a4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a4:
	{
		// PassLooseEndsToAncestors();
		Weave_PassLooseEndsToAncestors_m839B4E4D82628F01520F428FD2012F1F87D969AC(__this, NULL);
		// return _rootContainer;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_19 = __this->____rootContainer_15;
		return L_19;
	}
}
// System.Void Ink.Parsed.Weave::AddRuntimeForGather(Ink.Parsed.Gather)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddRuntimeForGather_m4CE16001900F51C5A06C0AE87C5284C903B0AEEF (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* ___gather0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCA442648CC7166D2F1F4C38D743E6C1E4D9D59C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB11A36DC9CB485BE0C7EA0E338F61ED2F4907E00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5EA60EDD2142984A91D0AB523AFEF5F0038056E);
		s_Il2CppMethodInitialized = true;
	}
	Container_t74302BC1028974B0A346A43F334AECB681D79579* V_0 = NULL;
	Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_2 = NULL;
	Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* V_3 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// bool autoEnter = !hasSeenChoiceInSection;
		bool L_0 = __this->___hasSeenChoiceInSection_12;
		// hasSeenChoiceInSection = false;
		__this->___hasSeenChoiceInSection_12 = (bool)0;
		// var gatherContainer = gather.runtimeContainer;
		Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* L_1 = ___gather0;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_2;
		L_2 = Gather_get_runtimeContainer_m13E079CEF8E544DF6A4B0C0B6241E5DD120FB715(L_1, NULL);
		V_0 = L_2;
		// if (gather.name == null) {
		Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* L_3 = ___gather0;
		String_t* L_4;
		L_4 = Gather_get_name_m86E8FB66407D71DEAC7AD878AA2F2EBDEDD094FA(L_3, NULL);
		G_B1_0 = ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		if (L_4)
		{
			G_B2_0 = ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
			goto IL_0048;
		}
	}
	{
		// gatherContainer.name = "g-" + _unnamedGatherCount;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_5 = V_0;
		int32_t* L_6 = (&__this->____unnamedGatherCount_13);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB5EA60EDD2142984A91D0AB523AFEF5F0038056E, L_7, NULL);
		Container_set_name_m8F5A2754D5F5B724CDB73F5754F75D179253D1B1_inline(L_5, L_8, NULL);
		// _unnamedGatherCount++;
		int32_t L_9 = __this->____unnamedGatherCount_13;
		__this->____unnamedGatherCount_13 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		G_B2_0 = G_B1_0;
	}

IL_0048:
	{
		// if (autoEnter) {
		if (!G_B2_0)
		{
			goto IL_0058;
		}
	}
	{
		// currentContainer.AddContent (gatherContainer);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_10;
		L_10 = Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2_inline(__this, NULL);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_11 = V_0;
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_10, L_11, NULL);
		goto IL_0064;
	}

IL_0058:
	{
		// _rootContainer.AddToNamedContentOnly (gatherContainer);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_12 = __this->____rootContainer_15;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_13 = V_0;
		Container_AddToNamedContentOnly_mE22F23FF9DA10C2E08C20DD7DFCF0B2A3C689461(L_12, L_13, NULL);
	}

IL_0064:
	{
		// foreach (IWeavePoint looseEndWeavePoint in looseEnds) {
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_14 = __this->___looseEnds_8;
		Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 L_15;
		L_15 = List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87(L_14, List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var);
		V_1 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A((&V_1), Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e7_1;
			}

IL_0072_1:
			{
				// foreach (IWeavePoint looseEndWeavePoint in looseEnds) {
				RuntimeObject* L_16;
				L_16 = Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_inline((&V_1), Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var);
				// var looseEnd = (Parsed.Object)looseEndWeavePoint;
				V_2 = ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_16, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var));
				// if (looseEnd is Gather) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_17 = V_2;
				if (!((Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)IsInstClass((RuntimeObject*)L_17, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var)))
				{
					goto IL_009a_1;
				}
			}
			{
				// var prevGather = (Gather)looseEnd;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_18 = V_2;
				// if (prevGather.indentationDepth == gather.indentationDepth) {
				int32_t L_19;
				L_19 = Gather_get_indentationDepth_m40F76E3F69111BE1085CFE0B79370156045C94E4_inline(((Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)CastclassClass((RuntimeObject*)L_18, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var)), NULL);
				Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* L_20 = ___gather0;
				int32_t L_21;
				L_21 = Gather_get_indentationDepth_m40F76E3F69111BE1085CFE0B79370156045C94E4_inline(L_20, NULL);
				if ((((int32_t)L_19) == ((int32_t)L_21)))
				{
					goto IL_00e7_1;
				}
			}

IL_009a_1:
			{
				// Runtime.Divert divert = null;
				V_3 = (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA*)NULL;
				// if (looseEnd is Parsed.Divert) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_22 = V_2;
				if (!((Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186*)IsInstClass((RuntimeObject*)L_22, Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_il2cpp_TypeInfo_var)))
				{
					goto IL_00b2_1;
				}
			}
			{
				// divert = (Runtime.Divert) looseEnd.runtimeObject;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_23 = V_2;
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_24;
				L_24 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_23, NULL);
				V_3 = ((Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA*)CastclassClass((RuntimeObject*)L_24, Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA_il2cpp_TypeInfo_var));
				goto IL_00c9_1;
			}

IL_00b2_1:
			{
				// divert = new Runtime.Divert ();
				Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_25 = (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA*)il2cpp_codegen_object_new(Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA_il2cpp_TypeInfo_var);
				Divert__ctor_m6EF2247FDA9554C19F47356ACDC569D214095A3A(L_25, NULL);
				V_3 = L_25;
				// var looseWeavePoint = looseEnd as IWeavePoint;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_26 = V_2;
				// looseWeavePoint.runtimeContainer.AddContent (divert);
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_27;
				L_27 = InterfaceFuncInvoker0< Container_t74302BC1028974B0A346A43F334AECB681D79579* >::Invoke(1 /* Ink.Runtime.Container Ink.Parsed.IWeavePoint::get_runtimeContainer() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_26, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var)));
				Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_28 = V_3;
				Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_27, L_28, NULL);
			}

IL_00c9_1:
			{
				// gatherPointsToResolve.Add (new GatherPointToResolve{ divert = divert, targetRuntimeObj = gatherContainer });
				List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* L_29 = __this->___gatherPointsToResolve_9;
				GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* L_30 = (GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14*)il2cpp_codegen_object_new(GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14_il2cpp_TypeInfo_var);
				GatherPointToResolve__ctor_mFFE076E7B088D6AF79E86D10264A6E2387C69ED2(L_30, NULL);
				GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* L_31 = L_30;
				Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_32 = V_3;
				L_31->___divert_0 = L_32;
				Il2CppCodeGenWriteBarrier((void**)(&L_31->___divert_0), (void*)L_32);
				GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* L_33 = L_31;
				Container_t74302BC1028974B0A346A43F334AECB681D79579* L_34 = V_0;
				L_33->___targetRuntimeObj_1 = L_34;
				Il2CppCodeGenWriteBarrier((void**)(&L_33->___targetRuntimeObj_1), (void*)L_34);
				List_1_Add_mCA442648CC7166D2F1F4C38D743E6C1E4D9D59C6_inline(L_29, L_33, List_1_Add_mCA442648CC7166D2F1F4C38D743E6C1E4D9D59C6_RuntimeMethod_var);
			}

IL_00e7_1:
			{
				// foreach (IWeavePoint looseEndWeavePoint in looseEnds) {
				bool L_35;
				L_35 = Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39((&V_1), Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var);
				if (L_35)
				{
					goto IL_0072_1;
				}
			}
			{
				goto IL_0100;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0100:
	{
		// looseEnds.Clear ();
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_36 = __this->___looseEnds_8;
		List_1_Clear_mB11A36DC9CB485BE0C7EA0E338F61ED2F4907E00_inline(L_36, List_1_Clear_mB11A36DC9CB485BE0C7EA0E338F61ED2F4907E00_RuntimeMethod_var);
		// currentContainer = gatherContainer;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_37 = V_0;
		Weave_set_currentContainer_m726341F02CE4FBBF970874A494486A48190F7C23_inline(__this, L_37, NULL);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::AddRuntimeForWeavePoint(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddRuntimeForWeavePoint_m6DEEC1E96DDB0A13DBF6DB29CEAF545C28CEDB08 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___weavePoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF42442CA83AE953CBF0C9F2D7BD30697A2BCCE58);
		s_Il2CppMethodInitialized = true;
	}
	Choice_t36174EC808231C52E43CE7768134739559499893* V_0 = NULL;
	{
		// if (weavePoint is Gather) {
		RuntimeObject* L_0 = ___weavePoint0;
		if (!((Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)IsInstClass((RuntimeObject*)L_0, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		// AddRuntimeForGather ((Gather)weavePoint);
		RuntimeObject* L_1 = ___weavePoint0;
		Weave_AddRuntimeForGather_m4CE16001900F51C5A06C0AE87C5284C903B0AEEF(__this, ((Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)CastclassClass((RuntimeObject*)L_1, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var)), NULL);
		goto IL_009e;
	}

IL_0019:
	{
		// else if (weavePoint is Choice) {
		RuntimeObject* L_2 = ___weavePoint0;
		if (!((Choice_t36174EC808231C52E43CE7768134739559499893*)IsInstClass((RuntimeObject*)L_2, Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var)))
		{
			goto IL_009e;
		}
	}
	{
		// if (previousWeavePoint is Gather) {
		RuntimeObject* L_3 = __this->___previousWeavePoint_10;
		if (!((Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B*)IsInstClass((RuntimeObject*)L_3, Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		// looseEnds.Remove (previousWeavePoint);
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_4 = __this->___looseEnds_8;
		RuntimeObject* L_5 = __this->___previousWeavePoint_10;
		bool L_6;
		L_6 = List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22(L_4, L_5, List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22_RuntimeMethod_var);
	}

IL_0040:
	{
		// var choice = (Choice)weavePoint;
		RuntimeObject* L_7 = ___weavePoint0;
		V_0 = ((Choice_t36174EC808231C52E43CE7768134739559499893*)CastclassClass((RuntimeObject*)L_7, Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var));
		// currentContainer.AddContent (choice.runtimeObject);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_8;
		L_8 = Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2_inline(__this, NULL);
		Choice_t36174EC808231C52E43CE7768134739559499893* L_9 = V_0;
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_10;
		L_10 = Object_get_runtimeObject_m9726F2EAF9D401D00BBA724D0DBD220BE4B81CC8(L_9, NULL);
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_8, L_10, NULL);
		// choice.innerContentContainer.name = "c-" + _choiceCount;
		Choice_t36174EC808231C52E43CE7768134739559499893* L_11 = V_0;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_12;
		L_12 = Choice_get_innerContentContainer_m9C30F03A0EFE2BEE3AC920D6F39B50E84127C3F3_inline(L_11, NULL);
		int32_t* L_13 = (&__this->____choiceCount_14);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF42442CA83AE953CBF0C9F2D7BD30697A2BCCE58, L_14, NULL);
		Container_set_name_m8F5A2754D5F5B724CDB73F5754F75D179253D1B1_inline(L_12, L_15, NULL);
		// currentContainer.AddToNamedContentOnly (choice.innerContentContainer);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_16;
		L_16 = Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2_inline(__this, NULL);
		Choice_t36174EC808231C52E43CE7768134739559499893* L_17 = V_0;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_18;
		L_18 = Choice_get_innerContentContainer_m9C30F03A0EFE2BEE3AC920D6F39B50E84127C3F3_inline(L_17, NULL);
		Container_AddToNamedContentOnly_mE22F23FF9DA10C2E08C20DD7DFCF0B2A3C689461(L_16, L_18, NULL);
		// _choiceCount++;
		int32_t L_19 = __this->____choiceCount_14;
		__this->____choiceCount_14 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		// hasSeenChoiceInSection = true;
		__this->___hasSeenChoiceInSection_12 = (bool)1;
	}

IL_009e:
	{
		// addContentToPreviousWeavePoint = false; // default
		__this->___addContentToPreviousWeavePoint_11 = (bool)0;
		// if (WeavePointHasLooseEnd (weavePoint)) {
		RuntimeObject* L_20 = ___weavePoint0;
		bool L_21;
		L_21 = Weave_WeavePointHasLooseEnd_m86BFC84415A3BB79B512FA7B60845FE92D80C03C(__this, L_20, NULL);
		if (!L_21)
		{
			goto IL_00ce;
		}
	}
	{
		// looseEnds.Add (weavePoint);
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_22 = __this->___looseEnds_8;
		RuntimeObject* L_23 = ___weavePoint0;
		List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_inline(L_22, L_23, List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_RuntimeMethod_var);
		// var looseChoice = weavePoint as Choice;
		RuntimeObject* L_24 = ___weavePoint0;
		// if (looseChoice) {
		bool L_25;
		L_25 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(((Choice_t36174EC808231C52E43CE7768134739559499893*)IsInstClass((RuntimeObject*)L_24, Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var)), NULL);
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		// addContentToPreviousWeavePoint = true;
		__this->___addContentToPreviousWeavePoint_11 = (bool)1;
	}

IL_00ce:
	{
		// previousWeavePoint = weavePoint;
		RuntimeObject* L_26 = ___weavePoint0;
		__this->___previousWeavePoint_10 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousWeavePoint_10), (void*)L_26);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::AddRuntimeForNestedWeave(Ink.Parsed.Weave)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddRuntimeForNestedWeave_m92A81F04518DC007BED67ACD094084B91BCC1F06 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* ___nestedResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddGeneralRuntimeContent (nestedResult.rootContainer);
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_0 = ___nestedResult0;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_1;
		L_1 = Weave_get_rootContainer_mF7051B9D57FAE9724FFA81B7760DABEE4A7330E5(L_0, NULL);
		Weave_AddGeneralRuntimeContent_mFCCE215692B86EC17515E4331F2B7ED81042BBC6(__this, L_1, NULL);
		// if (previousWeavePoint != null) {
		RuntimeObject* L_2 = __this->___previousWeavePoint_10;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// looseEnds.Remove (previousWeavePoint);
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_3 = __this->___looseEnds_8;
		RuntimeObject* L_4 = __this->___previousWeavePoint_10;
		bool L_5;
		L_5 = List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22(L_3, L_4, List_1_Remove_m73CFAF298BE8CF17918741C4C65E19E334805C22_RuntimeMethod_var);
		// addContentToPreviousWeavePoint = false;
		__this->___addContentToPreviousWeavePoint_11 = (bool)0;
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::AddGeneralRuntimeContent(Ink.Runtime.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_AddGeneralRuntimeContent_mFCCE215692B86EC17515E4331F2B7ED81042BBC6 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___content0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (content == null)
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_0 = ___content0;
		bool L_1;
		L_1 = Object_op_Equality_mB7B1691F79F79E2A3FECC61D568B160EC9CFAE6B(L_0, (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (addContentToPreviousWeavePoint) {
		bool L_2 = __this->___addContentToPreviousWeavePoint_11;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// previousWeavePoint.runtimeContainer.AddContent (content);
		RuntimeObject* L_3 = __this->___previousWeavePoint_10;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_4;
		L_4 = InterfaceFuncInvoker0< Container_t74302BC1028974B0A346A43F334AECB681D79579* >::Invoke(1 /* Ink.Runtime.Container Ink.Parsed.IWeavePoint::get_runtimeContainer() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_3);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_5 = ___content0;
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_4, L_5, NULL);
		return;
	}

IL_0024:
	{
		// currentContainer.AddContent (content);
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_6;
		L_6 = Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2_inline(__this, NULL);
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_7 = ___content0;
		Container_AddContent_m2F2BA6E71A20ABB416F17B6235345801A55FEA76(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::PassLooseEndsToAncestors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_PassLooseEndsToAncestors_m839B4E4D82628F01520F428FD2012F1F87D969AC (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mDAD0B657BF66CA49FF92D46A4F1B5DE663A1932D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD7C86426165B299E1AF57E1CC3ADF4B9B0EDB97D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_0 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_1 = NULL;
	bool V_2 = false;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_3 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_8 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* G_B26_0 = NULL;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* G_B25_0 = NULL;
	{
		// if (looseEnds.Count == 0) return;
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_0 = __this->___looseEnds_8;
		int32_t L_1;
		L_1 = List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_inline(L_0, List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (looseEnds.Count == 0) return;
		return;
	}

IL_000e:
	{
		// Weave closestInnerWeaveAncestor = null;
		V_0 = (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)NULL;
		// Weave closestOuterWeaveAncestor = null;
		V_1 = (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)NULL;
		// bool nested = false;
		V_2 = (bool)0;
		// for (var ancestor = this.parent; ancestor != null; ancestor = ancestor.parent)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_2;
		L_2 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(__this, NULL);
		V_3 = L_2;
		goto IL_0066;
	}

IL_001d:
	{
		// var weaveAncestor = ancestor as Weave;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3 = V_3;
		V_4 = ((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_3, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var));
		// if (weaveAncestor != null)
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_4 = V_4;
		bool L_5;
		L_5 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_4, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		// if (!nested && closestInnerWeaveAncestor == null)
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_7 = V_0;
		bool L_8;
		L_8 = Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43(L_7, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// closestInnerWeaveAncestor = weaveAncestor;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_9 = V_4;
		V_0 = L_9;
	}

IL_003e:
	{
		// if (nested && closestOuterWeaveAncestor == null)
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_11 = V_1;
		bool L_12;
		L_12 = Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43(L_11, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		// closestOuterWeaveAncestor = weaveAncestor;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_13 = V_4;
		V_1 = L_13;
	}

IL_004d:
	{
		// if (ancestor is Sequence || ancestor is Conditional)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_14 = V_3;
		if (((Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85*)IsInstClass((RuntimeObject*)L_14, Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var)))
		{
			goto IL_005d;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_15 = V_3;
		if (!((Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)IsInstClass((RuntimeObject*)L_15, Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var)))
		{
			goto IL_005f;
		}
	}

IL_005d:
	{
		// nested = true;
		V_2 = (bool)1;
	}

IL_005f:
	{
		// for (var ancestor = this.parent; ancestor != null; ancestor = ancestor.parent)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_16 = V_3;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_17;
		L_17 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_16, NULL);
		V_3 = L_17;
	}

IL_0066:
	{
		// for (var ancestor = this.parent; ancestor != null; ancestor = ancestor.parent)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_18 = V_3;
		bool L_19;
		L_19 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_18, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (L_19)
		{
			goto IL_001d;
		}
	}
	{
		// if (closestInnerWeaveAncestor == null && closestOuterWeaveAncestor == null)
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_20 = V_0;
		bool L_21;
		L_21 = Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43(L_20, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_21)
		{
			goto IL_0082;
		}
	}
	{
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_22 = V_1;
		bool L_23;
		L_23 = Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43(L_22, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0082;
		}
	}
	{
		// return;
		return;
	}

IL_0082:
	{
		// for (int i = looseEnds.Count - 1; i >= 0; i--) {
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_24 = __this->___looseEnds_8;
		int32_t L_25;
		L_25 = List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_inline(L_24, List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		goto IL_0112;
	}

IL_0093:
	{
		// var looseEnd = looseEnds[i];
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_26 = __this->___looseEnds_8;
		int32_t L_27 = V_5;
		RuntimeObject* L_28;
		L_28 = List_1_get_Item_mD7C86426165B299E1AF57E1CC3ADF4B9B0EDB97D(L_26, L_27, List_1_get_Item_mD7C86426165B299E1AF57E1CC3ADF4B9B0EDB97D_RuntimeMethod_var);
		V_6 = L_28;
		// bool received = false;
		V_7 = (bool)0;
		// if(nested) {
		bool L_29 = V_2;
		if (!L_29)
		{
			goto IL_00f0;
		}
	}
	{
		// if( looseEnd is Choice && closestInnerWeaveAncestor != null) {
		RuntimeObject* L_30 = V_6;
		if (!((Choice_t36174EC808231C52E43CE7768134739559499893*)IsInstClass((RuntimeObject*)L_30, Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var)))
		{
			goto IL_00c7;
		}
	}
	{
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_31 = V_0;
		bool L_32;
		L_32 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_31, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_32)
		{
			goto IL_00c7;
		}
	}
	{
		// closestInnerWeaveAncestor.ReceiveLooseEnd(looseEnd);
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_33 = V_0;
		RuntimeObject* L_34 = V_6;
		Weave_ReceiveLooseEnd_mCAAB5B4208181C3DFFA3FBC9CD8E7D11F23A3256(L_33, L_34, NULL);
		// received = true;
		V_7 = (bool)1;
		goto IL_00fb;
	}

IL_00c7:
	{
		// else if( !(looseEnd is Choice) ) {
		RuntimeObject* L_35 = V_6;
		if (((Choice_t36174EC808231C52E43CE7768134739559499893*)IsInstClass((RuntimeObject*)L_35, Choice_t36174EC808231C52E43CE7768134739559499893_il2cpp_TypeInfo_var)))
		{
			goto IL_00fb;
		}
	}
	{
		// var receivingWeave = closestInnerWeaveAncestor ?? closestOuterWeaveAncestor;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_36 = V_0;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_37 = L_36;
		G_B25_0 = L_37;
		if (L_37)
		{
			G_B26_0 = L_37;
			goto IL_00d6;
		}
	}
	{
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_38 = V_1;
		G_B26_0 = L_38;
	}

IL_00d6:
	{
		V_8 = G_B26_0;
		// if(receivingWeave != null) {
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_39 = V_8;
		bool L_40;
		L_40 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_39, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_40)
		{
			goto IL_00fb;
		}
	}
	{
		// receivingWeave.ReceiveLooseEnd(looseEnd);
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_41 = V_8;
		RuntimeObject* L_42 = V_6;
		Weave_ReceiveLooseEnd_mCAAB5B4208181C3DFFA3FBC9CD8E7D11F23A3256(L_41, L_42, NULL);
		// received = true;
		V_7 = (bool)1;
		goto IL_00fb;
	}

IL_00f0:
	{
		// closestInnerWeaveAncestor.ReceiveLooseEnd(looseEnd);
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_43 = V_0;
		RuntimeObject* L_44 = V_6;
		Weave_ReceiveLooseEnd_mCAAB5B4208181C3DFFA3FBC9CD8E7D11F23A3256(L_43, L_44, NULL);
		// received = true;
		V_7 = (bool)1;
	}

IL_00fb:
	{
		// if(received) looseEnds.RemoveAt(i);
		bool L_45 = V_7;
		if (!L_45)
		{
			goto IL_010c;
		}
	}
	{
		// if(received) looseEnds.RemoveAt(i);
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_46 = __this->___looseEnds_8;
		int32_t L_47 = V_5;
		List_1_RemoveAt_mDAD0B657BF66CA49FF92D46A4F1B5DE663A1932D(L_46, L_47, List_1_RemoveAt_mDAD0B657BF66CA49FF92D46A4F1B5DE663A1932D_RuntimeMethod_var);
	}

IL_010c:
	{
		// for (int i = looseEnds.Count - 1; i >= 0; i--) {
		int32_t L_48 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
	}

IL_0112:
	{
		// for (int i = looseEnds.Count - 1; i >= 0; i--) {
		int32_t L_49 = V_5;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::ReceiveLooseEnd(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ReceiveLooseEnd_mCAAB5B4208181C3DFFA3FBC9CD8E7D11F23A3256 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___childWeaveLooseEnd0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// looseEnds.Add(childWeaveLooseEnd);
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_0 = __this->___looseEnds_8;
		RuntimeObject* L_1 = ___childWeaveLooseEnd0;
		List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_inline(L_0, L_1, List_1_Add_mE731A800FB19135328BDEB3004A0C19FFF955AB6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::ResolveReferences(Ink.Parsed.Story)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ResolveReferences_mD1EAFE177313051E7B2EC4046ED890CFDC120D41 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCE863A998546EAD25CFF5AA7DB1FD2BDA33CFFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA226D5AC035B8AA46A1A5B0AD87D66B4747F85C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAE2D0F63AC021CDF331A873DB4D4D07C212C86FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAEED457850E75DD1B9ABC47B1937E3ECF5056AE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_BadNestedTerminationHandler_m4531FCF23C4DAE2724AC2E1483B94C4FB23F97E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_1 = NULL;
	Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* V_3 = NULL;
	{
		// base.ResolveReferences (context);
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_0 = ___context0;
		Object_ResolveReferences_m8BC5DD701019191459A9CEF84D71FFBE2FEDFF8E(__this, L_0, NULL);
		// if( looseEnds != null && looseEnds.Count > 0 ) {
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_1 = __this->___looseEnds_8;
		if (!L_1)
		{
			goto IL_0061;
		}
	}
	{
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_2 = __this->___looseEnds_8;
		int32_t L_3;
		L_3 = List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_inline(L_2, List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		// var isNestedWeave = false;
		V_0 = (bool)0;
		// for (var ancestor = this.parent; ancestor != null; ancestor = ancestor.parent)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4;
		L_4 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(__this, NULL);
		V_1 = L_4;
		goto IL_0043;
	}

IL_0028:
	{
		// if (ancestor is Sequence || ancestor is Conditional)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5 = V_1;
		if (((Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85*)IsInstClass((RuntimeObject*)L_5, Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var)))
		{
			goto IL_0038;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6 = V_1;
		if (!((Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)IsInstClass((RuntimeObject*)L_6, Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}

IL_0038:
	{
		// isNestedWeave = true;
		V_0 = (bool)1;
		// break;
		goto IL_004c;
	}

IL_003c:
	{
		// for (var ancestor = this.parent; ancestor != null; ancestor = ancestor.parent)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7 = V_1;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_8;
		L_8 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_7, NULL);
		V_1 = L_8;
	}

IL_0043:
	{
		// for (var ancestor = this.parent; ancestor != null; ancestor = ancestor.parent)
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_9 = V_1;
		bool L_10;
		L_10 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_9, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (L_10)
		{
			goto IL_0028;
		}
	}

IL_004c:
	{
		// if (isNestedWeave)
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		// ValidateTermination(BadNestedTerminationHandler);
		BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* L_12 = (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC*)il2cpp_codegen_object_new(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC_il2cpp_TypeInfo_var);
		BadTerminationHandler__ctor_mAD3499682FC2CD65E716A6714C8EBD32F3C0C1D1(L_12, __this, (intptr_t)((void*)Weave_BadNestedTerminationHandler_m4531FCF23C4DAE2724AC2E1483B94C4FB23F97E7_RuntimeMethod_var), NULL);
		Weave_ValidateTermination_mC042A95722BFF6A02755640F589BA1487AE94849(__this, L_12, NULL);
	}

IL_0061:
	{
		// foreach(var gatherPoint in gatherPointsToResolve) {
		List_1_tA7383995CB6636153484C17B150C3B16C85C49B7* L_13 = __this->___gatherPointsToResolve_9;
		Enumerator_t3181272E3D8283B1DCC73C3D6D8C3736A14BA453 L_14;
		L_14 = List_1_GetEnumerator_mAEED457850E75DD1B9ABC47B1937E3ECF5056AE0(L_13, List_1_GetEnumerator_mAEED457850E75DD1B9ABC47B1937E3ECF5056AE0_RuntimeMethod_var);
		V_2 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0098:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCE863A998546EAD25CFF5AA7DB1FD2BDA33CFFB5((&V_2), Enumerator_Dispose_mCE863A998546EAD25CFF5AA7DB1FD2BDA33CFFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008d_1;
			}

IL_006f_1:
			{
				// foreach(var gatherPoint in gatherPointsToResolve) {
				GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* L_15;
				L_15 = Enumerator_get_Current_mAE2D0F63AC021CDF331A873DB4D4D07C212C86FC_inline((&V_2), Enumerator_get_Current_mAE2D0F63AC021CDF331A873DB4D4D07C212C86FC_RuntimeMethod_var);
				V_3 = L_15;
				// gatherPoint.divert.targetPath = gatherPoint.targetRuntimeObj.path;
				GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* L_16 = V_3;
				Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* L_17 = L_16->___divert_0;
				GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* L_18 = V_3;
				Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_19 = L_18->___targetRuntimeObj_1;
				Path_tCC1F1626DB60711735401EA8FA76A191D9014600* L_20;
				L_20 = Object_get_path_m08402839773DCFE39E1D2C20D91F21D2A294A765(L_19, NULL);
				Divert_set_targetPath_m3BA5FF19D878E1BFB3A1D9D5C952FD41110E0213(L_17, L_20, NULL);
			}

IL_008d_1:
			{
				// foreach(var gatherPoint in gatherPointsToResolve) {
				bool L_21;
				L_21 = Enumerator_MoveNext_mA226D5AC035B8AA46A1A5B0AD87D66B4747F85C6((&V_2), Enumerator_MoveNext_mA226D5AC035B8AA46A1A5B0AD87D66B4747F85C6_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_006f_1;
				}
			}
			{
				goto IL_00a6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a6:
	{
		// CheckForWeavePointNamingCollisions ();
		Weave_CheckForWeavePointNamingCollisions_m3E4BA051D8AD9D9B38568439E424B6C562FA61CE(__this, NULL);
		// }
		return;
	}
}
// Ink.Parsed.IWeavePoint Ink.Parsed.Weave::WeavePointNamed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Weave_WeavePointNamed_mB6BBB582A93BE2C68059F5642F3CCCA6446648F0 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (_namedWeavePoints == null)
		Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_0 = __this->____namedWeavePoints_16;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (RuntimeObject*)NULL;
	}

IL_000a:
	{
		// IWeavePoint weavePointResult = null;
		V_0 = (RuntimeObject*)NULL;
		// if (_namedWeavePoints.TryGetValue (name, out weavePointResult))
		Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_1 = __this->____namedWeavePoints_16;
		String_t* L_2 = ___name0;
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_m613AEEAA60BE7FE1017CB90788AB1ACC38CD6826_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return weavePointResult;
		RuntimeObject* L_4 = V_0;
		return L_4;
	}

IL_001e:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Boolean Ink.Parsed.Weave::IsGlobalDeclaration(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weave_IsGlobalDeclaration_m2F27AA5E1B93C4B938128743ECD736C5C69F43A3 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* V_0 = NULL;
	{
		// var varAss = obj as VariableAssignment;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = ___obj0;
		V_0 = ((VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82*)IsInstClass((RuntimeObject*)L_0, VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82_il2cpp_TypeInfo_var));
		// if (varAss && varAss.isGlobalDeclaration && varAss.isDeclaration)
		VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_1 = V_0;
		bool L_2;
		L_2 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_3 = V_0;
		bool L_4;
		L_4 = VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* L_5 = V_0;
		bool L_6;
		L_6 = VariableAssignment_get_isDeclaration_m303120F48FE6770B5B59269240F63F40631554C5(L_5, NULL);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0021:
	{
		// var constDecl = obj as ConstantDeclaration;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7 = ___obj0;
		// if (constDecl)
		bool L_8;
		L_8 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(((ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA*)IsInstClass((RuntimeObject*)L_7, ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA_il2cpp_TypeInfo_var)), NULL);
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0030:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<Ink.Parsed.Object> Ink.Parsed.Weave::ContentThatFollowsWeavePoint(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Weave_ContentThatFollowsWeavePoint_m2CB425112D0A7BA7FC3E83215F095C70A98B9273 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___weavePoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_0 = (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C*)il2cpp_codegen_object_new(U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C_il2cpp_TypeInfo_var);
		U3CContentThatFollowsWeavePointU3Ed__29__ctor_mE1960E7B1C2FB83975604BBA11B328B6279E88F5(L_0, ((int32_t)-2), NULL);
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_1 = L_0;
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_2 = L_1;
		RuntimeObject* L_3 = ___weavePoint0;
		L_2->___U3CU3E3__weavePoint_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___U3CU3E3__weavePoint_4), (void*)L_3);
		return L_2;
	}
}
// System.Void Ink.Parsed.Weave::ValidateTermination(Ink.Parsed.Weave/BadTerminationHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ValidateTermination_mC042A95722BFF6A02755640F589BA1487AE94849 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* ___badTerminationHandler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B5_0 = 0;
	{
		// if (lastParsedSignificantObject is AuthorWarning) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0;
		L_0 = Weave_get_lastParsedSignificantObject_m1B04EDF689CE2860594576D416B2EBC60C55423B(__this, NULL);
		if (!((AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE*)IsInstClass((RuntimeObject*)L_0, AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE_il2cpp_TypeInfo_var)))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// bool hasLooseEnds = looseEnds != null && looseEnds.Count > 0;
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_1 = __this->___looseEnds_8;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_2 = __this->___looseEnds_8;
		int32_t L_3;
		L_3 = List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_inline(L_2, List_1_get_Count_m455727739D096976D3EE2476B53E62CD22FE419C_RuntimeMethod_var);
		G_B5_0 = ((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 0;
	}

IL_0027:
	{
		// if (hasLooseEnds) {
		if (!G_B5_0)
		{
			goto IL_006e;
		}
	}
	{
		// foreach (var looseEnd in looseEnds) {
		List_1_t68D1E6534966FC4E15D0908695CED890CFD8987A* L_4 = __this->___looseEnds_8;
		Enumerator_t8DB366085E0E2372928AD6C58D17472E9A63BE18 L_5;
		L_5 = List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87(L_4, List_1_GetEnumerator_mE667178EC85476B0B060B04C58AA1808DA0DBE87_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A((&V_0), Enumerator_Dispose_m55CEB802BF21BBD22D2EEB9E734FDD640B23C40A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0055_1;
			}

IL_0037_1:
			{
				// foreach (var looseEnd in looseEnds) {
				RuntimeObject* L_6;
				L_6 = Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_inline((&V_0), Enumerator_get_Current_mEC3CDE10C91DEA58B38AEF9542C069027075B43F_RuntimeMethod_var);
				V_1 = L_6;
				// var looseEndFlow = ContentThatFollowsWeavePoint (looseEnd);
				RuntimeObject* L_7 = V_1;
				RuntimeObject* L_8;
				L_8 = Weave_ContentThatFollowsWeavePoint_m2CB425112D0A7BA7FC3E83215F095C70A98B9273(__this, L_7, NULL);
				V_2 = L_8;
				// ValidateFlowOfObjectsTerminates (looseEndFlow, (Parsed.Object)looseEnd, badTerminationHandler);
				RuntimeObject* L_9 = V_2;
				RuntimeObject* L_10 = V_1;
				BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* L_11 = ___badTerminationHandler0;
				Weave_ValidateFlowOfObjectsTerminates_m7239B14D782F7304DD3D0726A3A8BDB972101757(__this, L_9, ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_10, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var)), L_11, NULL);
			}

IL_0055_1:
			{
				// foreach (var looseEnd in looseEnds) {
				bool L_12;
				L_12 = Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39((&V_0), Enumerator_MoveNext_m355D754EF36202EF15F3EBEBB40965BEED75EE39_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// foreach (var obj in content) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_13;
		L_13 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_14;
		L_14 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_13, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_3), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008c_1;
			}

IL_007c_1:
			{
				// foreach (var obj in content) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_15;
				L_15 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_3), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				// if (obj is IWeavePoint) return;
				if (!((RuntimeObject*)IsInst((RuntimeObject*)L_15, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var)))
				{
					goto IL_008c_1;
				}
			}
			{
				// if (obj is IWeavePoint) return;
				goto IL_00b3;
			}

IL_008c_1:
			{
				// foreach (var obj in content) {
				bool L_16;
				L_16 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_3), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_007c_1;
				}
			}
			{
				goto IL_00a5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a5:
	{
		// ValidateFlowOfObjectsTerminates (content, this, badTerminationHandler);
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_17;
		L_17 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(__this, NULL);
		BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* L_18 = ___badTerminationHandler0;
		Weave_ValidateFlowOfObjectsTerminates_m7239B14D782F7304DD3D0726A3A8BDB972101757(__this, L_17, __this, L_18, NULL);
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::BadNestedTerminationHandler(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_BadNestedTerminationHandler_m4531FCF23C4DAE2724AC2E1483B94C4FB23F97E7 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3729CD7808E34BFD9068F3A791D9D00B90282588_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindAll_TisChoice_t36174EC808231C52E43CE7768134739559499893_mFB83BCB5BDDDC5DF66331F766264D20DA55A29FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21F29DAD0A8FD7E88D981478E32D509D5426BBC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E01FFA5E6CD3B876C514BED83BB94FB75433EB);
		s_Il2CppMethodInitialized = true;
	}
	Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE* V_0 = NULL;
	String_t* V_1 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_2 = NULL;
	{
		// Conditional conditional = null;
		V_0 = (Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)NULL;
		// for (var ancestor = terminatingObj.parent; ancestor != null; ancestor = ancestor.parent) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = ___terminatingObj0;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_1;
		L_1 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_0, NULL);
		V_2 = L_1;
		goto IL_002b;
	}

IL_000b:
	{
		// if( ancestor is Sequence || ancestor is Conditional ) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_2 = V_2;
		if (((Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85*)IsInstClass((RuntimeObject*)L_2, Sequence_tCB97594473EC8A4A93D541931AB94EFFD0971E85_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_3 = V_2;
		if (!((Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)IsInstClass((RuntimeObject*)L_3, Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}

IL_001b:
	{
		// conditional = ancestor as Conditional;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4 = V_2;
		V_0 = ((Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE*)IsInstClass((RuntimeObject*)L_4, Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE_il2cpp_TypeInfo_var));
		// break;
		goto IL_0034;
	}

IL_0024:
	{
		// for (var ancestor = terminatingObj.parent; ancestor != null; ancestor = ancestor.parent) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_5 = V_2;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6;
		L_6 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_5, NULL);
		V_2 = L_6;
	}

IL_002b:
	{
		// for (var ancestor = terminatingObj.parent; ancestor != null; ancestor = ancestor.parent) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7 = V_2;
		bool L_8;
		L_8 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_7, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (L_8)
		{
			goto IL_000b;
		}
	}

IL_0034:
	{
		// var errorMsg = "Choices nested in conditionals or sequences need to explicitly divert afterwards.";
		V_1 = _stringLiteral21F29DAD0A8FD7E88D981478E32D509D5426BBC7;
		// if (conditional != null) {
		Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE* L_9 = V_0;
		bool L_10;
		L_10 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_9, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0063;
		}
	}
	{
		// var numChoices = conditional.FindAll<Choice>().Count;
		Conditional_tB77DD193DE5ED0630FD7364DF76675476646ADFE* L_11 = V_0;
		List_1_tA3404605665EC0FC0FFAB9752768CB531C08687C* L_12;
		L_12 = Object_FindAll_TisChoice_t36174EC808231C52E43CE7768134739559499893_mFB83BCB5BDDDC5DF66331F766264D20DA55A29FF(L_11, (FindQueryFunc_1_t336B67E9DF3943E1288CC482ACB0BBF4A96D7199*)NULL, Object_FindAll_TisChoice_t36174EC808231C52E43CE7768134739559499893_mFB83BCB5BDDDC5DF66331F766264D20DA55A29FF_RuntimeMethod_var);
		int32_t L_13;
		L_13 = List_1_get_Count_m3729CD7808E34BFD9068F3A791D9D00B90282588_inline(L_12, List_1_get_Count_m3729CD7808E34BFD9068F3A791D9D00B90282588_RuntimeMethod_var);
		// if( numChoices == 1 ) {
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0063;
		}
	}
	{
		// errorMsg = "Choices with conditions should be written: '* {condition} choice'. Otherwise, "+ errorMsg.ToLower();
		String_t* L_14 = V_1;
		String_t* L_15;
		L_15 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral91E01FFA5E6CD3B876C514BED83BB94FB75433EB, L_15, NULL);
		V_1 = L_16;
	}

IL_0063:
	{
		// Error(errorMsg, terminatingObj);
		String_t* L_17 = V_1;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_18 = ___terminatingObj0;
		VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_17, L_18, (bool)0);
		// }
		return;
	}
}
// System.Void Ink.Parsed.Weave::ValidateFlowOfObjectsTerminates(System.Collections.Generic.IEnumerable`1<Ink.Parsed.Object>,Ink.Parsed.Object,Ink.Parsed.Weave/BadTerminationHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_ValidateFlowOfObjectsTerminates_m7239B14D782F7304DD3D0726A3A8BDB972101757 (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___objFlow0, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___defaultObj1, BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* ___badTerminationHandler2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tEF23BA501451A845C4C1EB07ED0A90E7C765A30B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0D3F6B72AD03CC8C65B4782F8C2DA9E2EFAEBCD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Find_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_m745B0DEECFF6B651C7BC919A569845794345ED5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Find_TisTunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450_mBD53B00353D1047ED928ED4004D14DCAE7E8D31C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CValidateFlowOfObjectsTerminatesU3Eb__33_0_mA29EFEC2C9F28D2F9138006B50AA65EB411F911E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_3 = NULL;
	FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* G_B4_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B4_1 = NULL;
	FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* G_B3_0 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* G_B3_1 = NULL;
	{
		// bool terminated = false;
		V_0 = (bool)0;
		// Parsed.Object terminatingObj = defaultObj;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = ___defaultObj1;
		V_1 = L_0;
		// foreach (var flowObj in objFlow) {
		RuntimeObject* L_1 = ___objFlow0;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Ink.Parsed.Object>::GetEnumerator() */, IEnumerable_1_tEF23BA501451A845C4C1EB07ED0A90E7C765A30B_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_006b;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_006b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0058_1;
			}

IL_000d_1:
			{
				// foreach (var flowObj in objFlow) {
				RuntimeObject* L_5 = V_2;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6;
				L_6 = InterfaceFuncInvoker0< Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Ink.Parsed.Object>::get_Current() */, IEnumerator_1_t0D3F6B72AD03CC8C65B4782F8C2DA9E2EFAEBCD7_il2cpp_TypeInfo_var, L_5);
				V_3 = L_6;
				// var divert = flowObj.Find<Divert> (d => !d.isThread && !d.isTunnel && !d.isFunctionCall && !(d.parent is DivertTarget));
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7 = V_3;
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
				FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* L_8 = ((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_2;
				FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* L_9 = L_8;
				G_B3_0 = L_9;
				G_B3_1 = L_7;
				if (L_9)
				{
					G_B4_0 = L_9;
					G_B4_1 = L_7;
					goto IL_0034_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
				U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* L_10 = ((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* L_11 = (FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911*)il2cpp_codegen_object_new(FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911_il2cpp_TypeInfo_var);
				FindQueryFunc_1__ctor_m010478D5BA71A33518AA87D7DADB929919D9048F(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CValidateFlowOfObjectsTerminatesU3Eb__33_0_mA29EFEC2C9F28D2F9138006B50AA65EB411F911E_RuntimeMethod_var), NULL);
				FindQueryFunc_1_t5B4CFCAF8A9A138759489943408A394C5D5F1911* L_12 = L_11;
				((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_2 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_2), (void*)L_12);
				G_B4_0 = L_12;
				G_B4_1 = G_B3_1;
			}

IL_0034_1:
			{
				Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_13;
				L_13 = Object_Find_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_m745B0DEECFF6B651C7BC919A569845794345ED5B(G_B4_1, G_B4_0, Object_Find_TisDivert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_m745B0DEECFF6B651C7BC919A569845794345ED5B_RuntimeMethod_var);
				// if (divert != null) {
				bool L_14;
				L_14 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_13, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
				if (!L_14)
				{
					goto IL_0043_1;
				}
			}
			{
				// terminated = true;
				V_0 = (bool)1;
			}

IL_0043_1:
			{
				// if (flowObj.Find<TunnelOnwards> () != null) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_15 = V_3;
				TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* L_16;
				L_16 = Object_Find_TisTunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450_mBD53B00353D1047ED928ED4004D14DCAE7E8D31C(L_15, (FindQueryFunc_1_tD49158339C9E80306F093B9B3FFDC0266098B984*)NULL, Object_Find_TisTunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450_mBD53B00353D1047ED928ED4004D14DCAE7E8D31C_RuntimeMethod_var);
				bool L_17;
				L_17 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_16, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
				if (!L_17)
				{
					goto IL_0056_1;
				}
			}
			{
				// terminated = true;
				V_0 = (bool)1;
				// break;
				goto IL_006c;
			}

IL_0056_1:
			{
				// terminatingObj = flowObj;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_18 = V_3;
				V_1 = L_18;
			}

IL_0058_1:
			{
				// foreach (var flowObj in objFlow) {
				RuntimeObject* L_19 = V_2;
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_006c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		// if (!terminated) {
		bool L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		// if (terminatingObj is AuthorWarning) {
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_22 = V_1;
		if (!((AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE*)IsInstClass((RuntimeObject*)L_22, AuthorWarning_t69F75016EA0D0EF598ED62AA7FB57104F63B3DAE_il2cpp_TypeInfo_var)))
		{
			goto IL_0078;
		}
	}
	{
		// return;
		return;
	}

IL_0078:
	{
		// badTerminationHandler (terminatingObj);
		BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* L_23 = ___badTerminationHandler2;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_24 = V_1;
		BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_inline(L_23, L_24, NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Boolean Ink.Parsed.Weave::WeavePointHasLooseEnd(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Weave_WeavePointHasLooseEnd_m86BFC84415A3BB79B512FA7B60845FE92D80C03C (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, RuntimeObject* ___weavePoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* V_1 = NULL;
	int32_t G_B8_0 = 0;
	{
		// if (weavePoint.content == null) return true;
		RuntimeObject* L_0 = ___weavePoint0;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* >::Invoke(2 /* System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.IWeavePoint::get_content() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (weavePoint.content == null) return true;
		return (bool)1;
	}

IL_000a:
	{
		// for (int i = weavePoint.content.Count - 1; i >= 0; --i) {
		RuntimeObject* L_2 = ___weavePoint0;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_3;
		L_3 = InterfaceFuncInvoker0< List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* >::Invoke(2 /* System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.IWeavePoint::get_content() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_2);
		int32_t L_4;
		L_4 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_3, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		goto IL_0055;
	}

IL_001a:
	{
		// var innerDivert = weavePoint.content [i] as Divert;
		RuntimeObject* L_5 = ___weavePoint0;
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_6;
		L_6 = InterfaceFuncInvoker0< List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* >::Invoke(2 /* System.Collections.Generic.List`1<Ink.Parsed.Object> Ink.Parsed.IWeavePoint::get_content() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = V_0;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_8;
		L_8 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_6, L_7, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		V_1 = ((Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186*)IsInstClass((RuntimeObject*)L_8, Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186_il2cpp_TypeInfo_var));
		// if (innerDivert) {
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_9 = V_1;
		bool L_10;
		L_10 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_9, NULL);
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		// bool willReturn = innerDivert.isThread || innerDivert.isTunnel || innerDivert.isFunctionCall;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_11 = V_1;
		bool L_12;
		L_12 = Divert_get_isThread_m5AF57D150FA6189A096F00149ED4BB4ADC1D3F73_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_004c;
		}
	}
	{
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_13 = V_1;
		bool L_14;
		L_14 = Divert_get_isTunnel_m5F0B18A5D8A9CF7F751CCAE63840442D64E78EF0_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_004c;
		}
	}
	{
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_15 = V_1;
		bool L_16;
		L_16 = Divert_get_isFunctionCall_m795B07F1FA11C85E330D67D0C5E93157BEC3BB13_inline(L_15, NULL);
		G_B8_0 = ((int32_t)(L_16));
		goto IL_004d;
	}

IL_004c:
	{
		G_B8_0 = 1;
	}

IL_004d:
	{
		// if (!willReturn) return false;
		if (G_B8_0)
		{
			goto IL_0051;
		}
	}
	{
		// if (!willReturn) return false;
		return (bool)0;
	}

IL_0051:
	{
		// for (int i = weavePoint.content.Count - 1; i >= 0; --i) {
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_0055:
	{
		// for (int i = weavePoint.content.Count - 1; i >= 0; --i) {
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Ink.Parsed.Weave::CheckForWeavePointNamingCollisions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weave_CheckForWeavePointNamingCollisions_m3E4BA051D8AD9D9B38568439E424B6C562FA61CE (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m58606EF7E646E6EC6F77966DDCC3DFEE5425C416_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3D695EEE7F8DBADB4E29925482335EFD8D5FF76C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7BF2E33709CCA1C3182CB0B0823B5CC036376CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0E266551F3F19E392882EA2ADC18A12F7F76FE4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3E6779FD1F45D3506C88709EDFA61A7FBABF497A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1FB39938CFD6138E1234BE2B1290025DF3D47AD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m987ADC83E21F27DE3A5E98DA01634843FCA83551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mD222AD5CAEECD12BE8311BAC449090BBC57EF1DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7919590FC8730088240AC8626E9A64EA1F12CC6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB0447A1912B57CEC4309668380290C854E249335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55CFC3484E2E301297CB8C75443E10F75CBF9517);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* V_0 = NULL;
	Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* V_2 = NULL;
	Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349 V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_6 = NULL;
	Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA V_7;
	memset((&V_7), 0, sizeof(V_7));
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_8 = NULL;
	Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC V_9;
	memset((&V_9), 0, sizeof(V_9));
	String_t* V_10 = NULL;
	{
		// if (_namedWeavePoints == null)
		Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_0 = __this->____namedWeavePoints_16;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var ancestorFlows = new List<FlowBase> ();
		List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* L_1 = (List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB*)il2cpp_codegen_object_new(List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB_il2cpp_TypeInfo_var);
		List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889(L_1, List_1__ctor_m96371535AE5960B20ADE8BDF8EF32073D976B889_RuntimeMethod_var);
		V_0 = L_1;
		// foreach (var obj in this.ancestry) {
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_2;
		L_2 = Object_get_ancestry_m8C64142AFC7746A69D598AE036ADB55C1CC560D4(__this, NULL);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_3;
		L_3 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_2, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273((&V_1), Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0039_1;
			}

IL_001d_1:
			{
				// foreach (var obj in this.ancestry) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4;
				L_4 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline((&V_1), Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				// var flow = obj as FlowBase;
				V_2 = ((FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822*)IsInstClass((RuntimeObject*)L_4, FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822_il2cpp_TypeInfo_var));
				// if (flow)
				FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_5 = V_2;
				bool L_6;
				L_6 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_5, NULL);
				if (!L_6)
				{
					goto IL_0042_1;
				}
			}
			{
				// ancestorFlows.Add (flow);
				List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* L_7 = V_0;
				FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_8 = V_2;
				List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_inline(L_7, L_8, List_1_Add_m5C5951DF2DE7FC933602760D598697EB4B8D0A27_RuntimeMethod_var);
			}

IL_0039_1:
			{
				// foreach (var obj in this.ancestry) {
				bool L_9;
				L_9 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89((&V_1), Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_001d_1;
				}
			}

IL_0042_1:
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		// foreach (var namedWeavePointPair in _namedWeavePoints) {
		Dictionary_2_t5D65C7CF98A47724B51D341E32C367B484A4286F* L_10 = __this->____namedWeavePoints_16;
		Enumerator_tA8CEB7C241AFFE254617EF8542A78DB94C9FD4E1 L_11;
		L_11 = Dictionary_2_GetEnumerator_m58606EF7E646E6EC6F77966DDCC3DFEE5425C416(L_10, Dictionary_2_GetEnumerator_m58606EF7E646E6EC6F77966DDCC3DFEE5425C416_RuntimeMethod_var);
		V_3 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0130:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3D695EEE7F8DBADB4E29925482335EFD8D5FF76C((&V_3), Enumerator_Dispose_m3D695EEE7F8DBADB4E29925482335EFD8D5FF76C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0122_1;
			}

IL_0063_1:
			{
				// foreach (var namedWeavePointPair in _namedWeavePoints) {
				KeyValuePair_2_tFCD0B203000F32813ECA77E85C59E0F768A2C349 L_12;
				L_12 = Enumerator_get_Current_m987ADC83E21F27DE3A5E98DA01634843FCA83551_inline((&V_3), Enumerator_get_Current_m987ADC83E21F27DE3A5E98DA01634843FCA83551_RuntimeMethod_var);
				V_4 = L_12;
				// var weavePointName = namedWeavePointPair.Key;
				String_t* L_13;
				L_13 = KeyValuePair_2_get_Key_mD222AD5CAEECD12BE8311BAC449090BBC57EF1DA_inline((&V_4), KeyValuePair_2_get_Key_mD222AD5CAEECD12BE8311BAC449090BBC57EF1DA_RuntimeMethod_var);
				V_5 = L_13;
				// var weavePoint = (Parsed.Object) namedWeavePointPair.Value;
				RuntimeObject* L_14;
				L_14 = KeyValuePair_2_get_Value_m7919590FC8730088240AC8626E9A64EA1F12CC6B_inline((&V_4), KeyValuePair_2_get_Value_m7919590FC8730088240AC8626E9A64EA1F12CC6B_RuntimeMethod_var);
				V_6 = ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_14, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var));
				// foreach(var flow in ancestorFlows) {
				List_1_t8C592A35CEEA02FADE2642ADE3251FEC2C4819DB* L_15 = V_0;
				Enumerator_tB1D0AD9114A8E6C731DF0D3A0C6122E4CDE7A1CA L_16;
				L_16 = List_1_GetEnumerator_mB0447A1912B57CEC4309668380290C854E249335(L_15, List_1_GetEnumerator_mB0447A1912B57CEC4309668380290C854E249335_RuntimeMethod_var);
				V_7 = L_16;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0114_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m7BF2E33709CCA1C3182CB0B0823B5CC036376CD6((&V_7), Enumerator_Dispose_m7BF2E33709CCA1C3182CB0B0823B5CC036376CD6_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0106_2;
					}

IL_008d_2:
					{
						// foreach(var flow in ancestorFlows) {
						FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* L_17;
						L_17 = Enumerator_get_Current_m1FB39938CFD6138E1234BE2B1290025DF3D47AD5_inline((&V_7), Enumerator_get_Current_m1FB39938CFD6138E1234BE2B1290025DF3D47AD5_RuntimeMethod_var);
						// var otherContentWithName = flow.ContentWithNameAtLevel (weavePointName);
						String_t* L_18 = V_5;
						il2cpp_codegen_initobj((&V_9), sizeof(Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC));
						Nullable_1_tF3A63852D98AB80CE81E0997F1EB4A764E6B9BCC L_19 = V_9;
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_20;
						L_20 = FlowBase_ContentWithNameAtLevel_mBEA01AF67EC82BAF3485DEB39E7C5F6EB95DCE42(L_17, L_18, L_19, (bool)0, NULL);
						V_8 = L_20;
						// if (otherContentWithName && otherContentWithName != weavePoint) {
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_21 = V_8;
						bool L_22;
						L_22 = Object_op_Implicit_m8603F4B22E6F83EE86DD092B753DACA72AFFD02B(L_21, NULL);
						if (!L_22)
						{
							goto IL_0106_2;
						}
					}
					{
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_23 = V_8;
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_24 = V_6;
						bool L_25;
						L_25 = Object_op_Inequality_mD1BEE8E3F94B9DD092A1FB9BC7757996C160D3C7(L_23, L_24, NULL);
						if (!L_25)
						{
							goto IL_0106_2;
						}
					}
					{
						// var errorMsg = string.Format ("{0} '{1}' has the same label name as a {2} (on {3})",
						//     weavePoint.GetType().Name,
						//     weavePointName,
						//     otherContentWithName.GetType().Name,
						//     otherContentWithName.debugMetadata);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_26;
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_28 = V_6;
						Type_t* L_29;
						L_29 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_28, NULL);
						String_t* L_30;
						L_30 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
						ArrayElementTypeCheck (L_27, L_30);
						(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_30);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_27;
						String_t* L_32 = V_5;
						ArrayElementTypeCheck (L_31, L_32);
						(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_32);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_31;
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_34 = V_8;
						Type_t* L_35;
						L_35 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_34, NULL);
						String_t* L_36;
						L_36 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_35);
						ArrayElementTypeCheck (L_33, L_36);
						(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_36);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_33;
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_38 = V_8;
						DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_39;
						L_39 = Object_get_debugMetadata_mBCFD956584960A24A0DDB7C60E5EA7696A260C28(L_38, NULL);
						ArrayElementTypeCheck (L_37, L_39);
						(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_39);
						String_t* L_40;
						L_40 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral55CFC3484E2E301297CB8C75443E10F75CBF9517, L_37, NULL);
						V_10 = L_40;
						// Error(errorMsg, (Parsed.Object) weavePoint);
						String_t* L_41 = V_10;
						Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_42 = V_6;
						VirtualActionInvoker3< String_t*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, bool >::Invoke(10 /* System.Void Ink.Parsed.Object::Error(System.String,Ink.Parsed.Object,System.Boolean) */, __this, L_41, L_42, (bool)0);
					}

IL_0106_2:
					{
						// foreach(var flow in ancestorFlows) {
						bool L_43;
						L_43 = Enumerator_MoveNext_m3E6779FD1F45D3506C88709EDFA61A7FBABF497A((&V_7), Enumerator_MoveNext_m3E6779FD1F45D3506C88709EDFA61A7FBABF497A_RuntimeMethod_var);
						if (L_43)
						{
							goto IL_008d_2;
						}
					}
					{
						goto IL_0122_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0122_1:
			{
				// foreach (var namedWeavePointPair in _namedWeavePoints) {
				bool L_44;
				L_44 = Enumerator_MoveNext_m0E266551F3F19E392882EA2ADC18A12F7F76FE4F((&V_3), Enumerator_MoveNext_m0E266551F3F19E392882EA2ADC18A12F7F76FE4F_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_0063_1;
				}
			}
			{
				goto IL_013e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013e:
	{
		// }
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
// System.Void Ink.Parsed.Weave/GatherPointToResolve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GatherPointToResolve__ctor_mFFE076E7B088D6AF79E86D10264A6E2387C69ED2 (GatherPointToResolve_t5BCA4AD8A1FFAD15432026F412C3551D4794AD14* __this, const RuntimeMethod* method) 
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
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_Multicast(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* currentDelegate = reinterpret_cast<BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___terminatingObj0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenInst(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___terminatingObj0, method);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenStatic(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___terminatingObj0, method);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenStaticInvoker(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* >::Invoke(__this->___method_ptr_0, method, NULL, ___terminatingObj0);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_ClosedStaticInvoker(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___terminatingObj0);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenVirtual(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___terminatingObj0);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenInterface(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___terminatingObj0);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenGenericVirtual(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___terminatingObj0);
}
void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenGenericInterface(BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___terminatingObj0);
}
// System.Void Ink.Parsed.Weave/BadTerminationHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadTerminationHandler__ctor_mAD3499682FC2CD65E716A6714C8EBD32F3C0C1D1 (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_Multicast;
}
// System.Void Ink.Parsed.Weave/BadTerminationHandler::Invoke(Ink.Parsed.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6 (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___terminatingObj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Ink.Parsed.Weave/BadTerminationHandler::BeginInvoke(Ink.Parsed.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BadTerminationHandler_BeginInvoke_m4C2F80139C761C895EABB9E15BBD9B7AAB5E05B9 (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___terminatingObj0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Ink.Parsed.Weave/BadTerminationHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadTerminationHandler_EndInvoke_m8557352A7C826A5335957B9054AB284B02C46B13 (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ink.Parsed.Weave/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFFD1392C7C183EE3B188F34E1B82F524A4460925 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* L_0 = (U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807*)il2cpp_codegen_object_new(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m73A5A4115E280FF369CFFC6C27BEDD0B00B1E75D(L_0, NULL);
		((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Ink.Parsed.Weave/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m73A5A4115E280FF369CFFC6C27BEDD0B00B1E75D (U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Ink.Parsed.Weave/<>c::<ResolveWeavePointNaming>b__16_0(Ink.Parsed.IWeavePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CResolveWeavePointNamingU3Eb__16_0_mD2E1AE17D456275345755805605BAB67AD659C93 (U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* __this, RuntimeObject* ___w0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var namedWeavePoints = FindAll<IWeavePoint> (w => !string.IsNullOrEmpty (w.name));
		RuntimeObject* L_0 = ___w0;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Ink.Parsed.IWeavePoint::get_name() */, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Ink.Parsed.Weave/<>c::<ValidateFlowOfObjectsTerminates>b__33_0(Ink.Parsed.Divert)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CValidateFlowOfObjectsTerminatesU3Eb__33_0_mA29EFEC2C9F28D2F9138006B50AA65EB411F911E (U3CU3Ec_tDD44F57D526100A3920F06EE0EFBC0DA9D3C6807* __this, Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivertTarget_t72F939797266E1087B339BC7F70A4A43A8E91F2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var divert = flowObj.Find<Divert> (d => !d.isThread && !d.isTunnel && !d.isFunctionCall && !(d.parent is DivertTarget));
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_0 = ___d0;
		bool L_1;
		L_1 = Divert_get_isThread_m5AF57D150FA6189A096F00149ED4BB4ADC1D3F73_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_2 = ___d0;
		bool L_3;
		L_3 = Divert_get_isTunnel_m5F0B18A5D8A9CF7F751CCAE63840442D64E78EF0_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_4 = ___d0;
		bool L_5;
		L_5 = Divert_get_isFunctionCall_m795B07F1FA11C85E330D67D0C5E93157BEC3BB13_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_6 = ___d0;
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_7;
		L_7 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_6, NULL);
		return (bool)((((int32_t)((!(((RuntimeObject*)(DivertTarget_t72F939797266E1087B339BC7F70A4A43A8E91F2D*)((DivertTarget_t72F939797266E1087B339BC7F70A4A43A8E91F2D*)IsInstClass((RuntimeObject*)L_7, DivertTarget_t72F939797266E1087B339BC7F70A4A43A8E91F2D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002a:
	{
		return (bool)0;
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
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29__ctor_mE1960E7B1C2FB83975604BBA11B328B6279E88F5 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29_System_IDisposable_Dispose_mBD65DB5199FA7CE6895F65C4F1AE28DEDF669AAF (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
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
				U3CContentThatFollowsWeavePointU3Ed__29_U3CU3Em__Finally1_m64AF3C259A537D1E769580D6CBEB4C8C78B15B93(__this, NULL);
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
// System.Boolean Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CContentThatFollowsWeavePointU3Ed__29_MoveNext_mFA2F28A62D5039FC397153C696FFBCE1D580918A (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m549CA9389C0FF54CE448A6557816E0F0E7B58CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* V_2 = NULL;
	int32_t V_3 = 0;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_4 = NULL;
	Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* V_5 = NULL;
	int32_t V_6 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_018d:
			{// begin fault (depth: 1)
				U3CContentThatFollowsWeavePointU3Ed__29_System_IDisposable_Dispose_mBD65DB5199FA7CE6895F65C4F1AE28DEDF669AAF(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_1 = __this->___U3CU3E4__this_5;
				V_2 = L_1;
				int32_t L_2 = V_1;
				switch (L_2)
				{
					case 0:
					{
						goto IL_0027_1;
					}
					case 1:
					{
						goto IL_0099_1;
					}
					case 2:
					{
						goto IL_0158_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0194;
			}

IL_0027_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// var obj = (Parsed.Object)weavePoint;
				RuntimeObject* L_3 = __this->___weavePoint_3;
				__this->___U3CobjU3E5__2_6 = ((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_3, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CobjU3E5__2_6), (void*)((Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)CastclassClass((RuntimeObject*)L_3, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7_il2cpp_TypeInfo_var)));
				// if (obj.content != null) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_4 = __this->___U3CobjU3E5__2_6;
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_5;
				L_5 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_4, NULL);
				if (!L_5)
				{
					goto IL_00c0_1;
				}
			}
			{
				// foreach (var contentObj in obj.content) {
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_6 = __this->___U3CobjU3E5__2_6;
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_7;
				L_7 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_6, NULL);
				Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C L_8;
				L_8 = List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73(L_7, List_1_GetEnumerator_m4CDB4E98E9FF04ABFD2EFE294B6C4A75E54C6B73_RuntimeMethod_var);
				__this->___U3CU3E7__wrap3_8 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap3_8))->____list_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap3_8))->____current_3), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_00a1_1;
			}

IL_006c_1:
			{
				// foreach (var contentObj in obj.content) {
				Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* L_9 = (&__this->___U3CU3E7__wrap3_8);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_10;
				L_10 = Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_inline(L_9, Enumerator_get_Current_m1E21C02C0D7FEAFFD451F033D2E616D633A251D7_RuntimeMethod_var);
				V_4 = L_10;
				// if (IsGlobalDeclaration (contentObj)) continue;
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_11 = V_2;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_12 = V_4;
				bool L_13;
				L_13 = Weave_IsGlobalDeclaration_m2F27AA5E1B93C4B938128743ECD736C5C69F43A3(L_11, L_12, NULL);
				if (L_13)
				{
					goto IL_00a1_1;
				}
			}
			{
				// yield return contentObj;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_14 = V_4;
				__this->___U3CU3E2__current_1 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0194;
			}

IL_0099_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_00a1_1:
			{
				// foreach (var contentObj in obj.content) {
				Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* L_15 = (&__this->___U3CU3E7__wrap3_8);
				bool L_16;
				L_16 = Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89(L_15, Enumerator_MoveNext_mDAC08A52E00D45D4C8BB563D4A6462DA8C10CD89_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_006c_1;
				}
			}
			{
				U3CContentThatFollowsWeavePointU3Ed__29_U3CU3Em__Finally1_m64AF3C259A537D1E769580D6CBEB4C8C78B15B93(__this, NULL);
				Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* L_17 = (&__this->___U3CU3E7__wrap3_8);
				il2cpp_codegen_initobj(L_17, sizeof(Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C));
			}

IL_00c0_1:
			{
				// var parentWeave = obj.parent as Weave;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_18 = __this->___U3CobjU3E5__2_6;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_19;
				L_19 = Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline(L_18, NULL);
				__this->___U3CparentWeaveU3E5__3_7 = ((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_19, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentWeaveU3E5__3_7), (void*)((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_19, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var)));
				// if (parentWeave == null) {
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_20 = __this->___U3CparentWeaveU3E5__3_7;
				bool L_21;
				L_21 = Object_op_Equality_m0C7462D67CD3C0054DC583B2C89B654256768C43(L_20, (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*)NULL, NULL);
				if (!L_21)
				{
					goto IL_00ef_1;
				}
			}
			{
				// throw new System.Exception ("Expected weave point parent to be weave?");
				Exception_t* L_22 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDCE5AC3929E9CA18E1A0EDD397BC9C4E7B2382C)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CContentThatFollowsWeavePointU3Ed__29_MoveNext_mFA2F28A62D5039FC397153C696FFBCE1D580918A_RuntimeMethod_var)));
			}

IL_00ef_1:
			{
				// var weavePointIdx = parentWeave.content.IndexOf (obj);
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_23 = __this->___U3CparentWeaveU3E5__3_7;
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_24;
				L_24 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_23, NULL);
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_25 = __this->___U3CobjU3E5__2_6;
				int32_t L_26;
				L_26 = List_1_IndexOf_m549CA9389C0FF54CE448A6557816E0F0E7B58CE2(L_24, L_25, List_1_IndexOf_m549CA9389C0FF54CE448A6557816E0F0E7B58CE2_RuntimeMethod_var);
				V_3 = L_26;
				// for (int i = weavePointIdx+1; i < parentWeave.content.Count; i++) {
				int32_t L_27 = V_3;
				__this->___U3CiU3E5__5_9 = ((int32_t)il2cpp_codegen_add(L_27, 1));
				goto IL_0171_1;
			}

IL_0111_1:
			{
				// var laterObj = parentWeave.content [i];
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_28 = __this->___U3CparentWeaveU3E5__3_7;
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_29;
				L_29 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_28, NULL);
				int32_t L_30 = __this->___U3CiU3E5__5_9;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_31;
				L_31 = List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11(L_29, L_30, List_1_get_Item_mDF943B341CF138195ACC8377D45C1F3C700D9F11_RuntimeMethod_var);
				V_5 = L_31;
				// if (IsGlobalDeclaration (laterObj)) continue;
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_32 = V_2;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_33 = V_5;
				bool L_34;
				L_34 = Weave_IsGlobalDeclaration_m2F27AA5E1B93C4B938128743ECD736C5C69F43A3(L_32, L_33, NULL);
				if (L_34)
				{
					goto IL_015f_1;
				}
			}
			{
				// if (laterObj is IWeavePoint)
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_35 = V_5;
				if (((RuntimeObject*)IsInst((RuntimeObject*)L_35, IWeavePoint_t990C67A4ECD21D8B8079B5C926273F012EA3F5DE_il2cpp_TypeInfo_var)))
				{
					goto IL_0189_1;
				}
			}
			{
				// if (laterObj is Weave)
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_36 = V_5;
				if (((Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37*)IsInstClass((RuntimeObject*)L_36, Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37_il2cpp_TypeInfo_var)))
				{
					goto IL_0189_1;
				}
			}
			{
				// yield return laterObj;
				Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_37 = V_5;
				__this->___U3CU3E2__current_1 = L_37;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_37);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_0194;
			}

IL_0158_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
			}

IL_015f_1:
			{
				// for (int i = weavePointIdx+1; i < parentWeave.content.Count; i++) {
				int32_t L_38 = __this->___U3CiU3E5__5_9;
				V_6 = L_38;
				int32_t L_39 = V_6;
				__this->___U3CiU3E5__5_9 = ((int32_t)il2cpp_codegen_add(L_39, 1));
			}

IL_0171_1:
			{
				// for (int i = weavePointIdx+1; i < parentWeave.content.Count; i++) {
				int32_t L_40 = __this->___U3CiU3E5__5_9;
				Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_41 = __this->___U3CparentWeaveU3E5__3_7;
				List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_42;
				L_42 = Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline(L_41, NULL);
				int32_t L_43;
				L_43 = List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_inline(L_42, List_1_get_Count_mC26CECECE98B9AF63D211033A4D1DCAC59B79E8D_RuntimeMethod_var);
				if ((((int32_t)L_40) < ((int32_t)L_43)))
				{
					goto IL_0111_1;
				}
			}

IL_0189_1:
			{
				// }
				V_0 = (bool)0;
				goto IL_0194;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0194:
	{
		bool L_44 = V_0;
		return L_44;
	}
}
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29_U3CU3Em__Finally1_m64AF3C259A537D1E769580D6CBEB4C8C78B15B93 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t24762F0E4493651E6A987495FA0DAF1B929C7D2C* L_0 = (&__this->___U3CU3E7__wrap3_8);
		Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273(L_0, Enumerator_Dispose_m6DD5AE0A1BC4132AA20DD8606C246C88B7CD4273_RuntimeMethod_var);
		return;
	}
}
// Ink.Parsed.Object Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.Collections.Generic.IEnumerator<Ink.Parsed.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_Generic_IEnumeratorU3CInk_Parsed_ObjectU3E_get_Current_mCC8D4D3C12B7C4F90BB464C648C91629F0480C68 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_IEnumerator_Reset_m115B11CD324347AE797625EACD51442CA8267AE7 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_IEnumerator_Reset_m115B11CD324347AE797625EACD51442CA8267AE7_RuntimeMethod_var)));
	}
}
// System.Object Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_IEnumerator_get_Current_m9B1DAE861970D55F8EECB85EBD14D77A1F1B2465 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	{
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Ink.Parsed.Object> Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.Collections.Generic.IEnumerable<Ink.Parsed.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_Generic_IEnumerableU3CInk_Parsed_ObjectU3E_GetEnumerator_m8C4B5A788E923234DA9A3E586E88D149165EA3AD (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* V_0 = NULL;
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
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_3 = (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C*)il2cpp_codegen_object_new(U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C_il2cpp_TypeInfo_var);
		U3CContentThatFollowsWeavePointU3Ed__29__ctor_mE1960E7B1C2FB83975604BBA11B328B6279E88F5(L_3, 0, NULL);
		V_0 = L_3;
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_4 = V_0;
		Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* L_5 = __this->___U3CU3E4__this_5;
		L_4->___U3CU3E4__this_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_5), (void*)L_5);
	}

IL_0035:
	{
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_6 = V_0;
		RuntimeObject* L_7 = __this->___U3CU3E3__weavePoint_4;
		L_6->___weavePoint_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___weavePoint_3), (void*)L_7);
		U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Ink.Parsed.Weave/<ContentThatFollowsWeavePoint>d__29::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_IEnumerable_GetEnumerator_mBB795C8F494960D4FC07D09C799A6B4B1E449E51 (U3CContentThatFollowsWeavePointU3Ed__29_t9AA3310C9C2DFB7E274B80472DA5E288A8ED8E9C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CContentThatFollowsWeavePointU3Ed__29_System_Collections_Generic_IEnumerableU3CInk_Parsed_ObjectU3E_GetEnumerator_m8C4B5A788E923234DA9A3E586E88D149165EA3AD(__this, NULL);
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
// System.Void Ink.Parsed.Glue::.ctor(Ink.Runtime.Glue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glue__ctor_mBF07823C75D752905A0243DD511F00F917A8D220 (Glue_t1B0423D93951017DCD923A001EEEE15092EF1D2A* __this, Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D* ___glue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wrap_1__ctor_m55E3265081F6A8406F0C3A7A7D3B2ABBC0311B0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Glue (Runtime.Glue glue) : base(glue) {}
		Glue_t1ABC4440B857DC58A1B713DCC64EDB38F087F70D* L_0 = ___glue0;
		Wrap_1__ctor_m55E3265081F6A8406F0C3A7A7D3B2ABBC0311B0E(__this, L_0, Wrap_1__ctor_m55E3265081F6A8406F0C3A7A7D3B2ABBC0311B0E_RuntimeMethod_var);
		// public Glue (Runtime.Glue glue) : base(glue) {}
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
// System.Void Ink.Parsed.Tag::.ctor(Ink.Runtime.Tag)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tag__ctor_m6E074F440ED8A57470A889B9DFC947FCB05C999E (Tag_tAB0A2B0822AC49777B0EF88C69DFC2D2A203DFF9* __this, Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29* ___tag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wrap_1__ctor_mC7A871A14C44F022C311E215DA575CE02DBA3A62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Tag (Runtime.Tag tag) : base (tag) { }
		Tag_tB2EA975EE48B1D6D2E411751AC61B5737F43FA29* L_0 = ___tag0;
		Wrap_1__ctor_mC7A871A14C44F022C311E215DA575CE02DBA3A62(__this, L_0, Wrap_1__ctor_mC7A871A14C44F022C311E215DA575CE02DBA3A62_RuntimeMethod_var);
		// public Tag (Runtime.Tag tag) : base (tag) { }
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mE2C82785F81B842321200CA571789E2BA8972976 (String_t* ___s0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* Path_get_components_m2175B7004024210CFF9479814652E73144748420_inline (Path_t45F133F0FD37FBD473A956AF05F18E1EB5BD54CC* __this, const RuntimeMethod* method) 
{
	{
		// public List<Identifier> components { get; }
		List_1_tE7E36179A9D3C4E72F64C06CD94D5C27DC690F08* L_0 = __this->___U3CcomponentsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Object_get_parent_mD76D8371EC8C6B3B64B43B1FCECFEB2F8F4FD31A_inline (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) 
{
	{
		// public Parsed.Object parent { get; set; }
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = __this->___U3CparentU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Return_set_returnedExpression_mCA02FC2F1D627F8DA28FB6A16D5F4BFE582BA17D_inline (Return_tF820135B4E13C7AA4FB7A0BAB1EB362B26B6FC14* __this, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___value0, const RuntimeMethod* method) 
{
	{
		// public Expression returnedExpression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = ___value0;
		__this->___U3CreturnedExpressionU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreturnedExpressionU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* Return_get_returnedExpression_m0F3B090A66709E032F417E8046A3B5AA3990F4E6_inline (Return_tF820135B4E13C7AA4FB7A0BAB1EB362B26B6FC14* __this, const RuntimeMethod* method) 
{
	{
		// public Expression returnedExpression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = __this->___U3CreturnedExpressionU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* Object_get_content_m88C0834BB81829EF344181750AB1DCEE3EF5924F_inline (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, const RuntimeMethod* method) 
{
	{
		// public List<Parsed.Object> content { get; protected set; }
		List_1_tF6FEED1606F8C2033F3CE018B0A571CC30419F55* L_0 = __this->___U3CcontentU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Container_set_visitsShouldBeCounted_mCA668E9A96F2D5B8F25801AE1169786E35B2091C_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool visitsShouldBeCounted { get; set; }
		bool L_0 = ___value0;
		__this->___U3CvisitsShouldBeCountedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Container_set_countingAtStartOnly_m97E94EA0207E814538744AB785E0A71821257C2D_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool countingAtStartOnly { get; set; }
		bool L_0 = ___value0;
		__this->___U3CcountingAtStartOnlyU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Divert_set_isConditional_mDB631828EAA0091F708E2DA06B743FA3BD7BF33A_inline (Divert_t74B807563B5BEDFB81EA404CC61CDC797ECD04CA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isConditional { get; set; }
		bool L_0 = ___value0;
		__this->___U3CisConditionalU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Container_set_name_m8F5A2754D5F5B724CDB73F5754F75D179253D1B1_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* IncludedFile_get_includedStory_m0264E5FA6B7C163059E8BE7C769E55061D6E4C1D_inline (IncludedFile_t07EBB7E7D0D110AD4DC162A7D7FD45F2F80036B0* __this, const RuntimeMethod* method) 
{
	{
		// public Parsed.Story includedStory { get; private set; }
		Story_tEBE39AA9D821413F842FC1EA2FC7A087466078F7* L_0 = __this->___U3CincludedStoryU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ConstantDeclaration_get_expression_mDD0F91B64454035715A6CC71941060766DB4BCDD_inline (ConstantDeclaration_t166A3FE1F4854C2AF889D4A1A8F5674CF88DB1EA* __this, const RuntimeMethod* method) 
{
	{
		// public Expression expression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = __this->___U3CexpressionU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VariableAssignment_get_isGlobalDeclaration_mE9B8A59B6DD76E3618AC70239902234592DE4E3E_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public bool isGlobalDeclaration { get; set; }
		bool L_0 = __this->___U3CisGlobalDeclarationU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* VariableAssignment_get_listDefinition_m17FBBD9E9268937E32AEBDF0723017B2660A213A_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public ListDefinition listDefinition { get; protected set; }
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_0 = __this->___U3ClistDefinitionU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* VariableAssignment_get_expression_m13D8156A0B8D39005C6DACD9D998E15FB3F1B831_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public Expression expression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = __this->___U3CexpressionU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_isGlobal_m7E2A5FFCF8C182807B5941792682A0A1D26535DE_inline (VariableAssignment_t058919DAC79735A64C2F25B12A2A509D653022B9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isGlobal { get; set; }
		bool L_0 = ___value0;
		__this->___U3CisGlobalU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_set_runtimeObject_m57463274E68C0F3DC1CB6788CD8DD795801B7FE8_inline (Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___value0, const RuntimeMethod* method) 
{
	{
		// _runtimeObject = value;
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_0 = ___value0;
		__this->____runtimeObject_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runtimeObject_3), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* Container_get_content_m09433BA345697554D8FFCBBAA43B35F60AF2F3DD_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, const RuntimeMethod* method) 
{
	{
		// return _content;
		List_1_t2BC6A197CD71513743E4BF7350A3873D6C7B0F63* L_0 = __this->____content_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49* Container_get_namedContent_m887ECF350132F5C92388DCC11BDD9BF07267C86A_inline (Container_t74302BC1028974B0A346A43F334AECB681D79579* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, INamedContent> namedContent { get; set; }
		Dictionary_2_t309FEDB822137B5A16AE94FF32C698C7E8B3CF49* L_0 = __this->___U3CnamedContentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* Object_get_parent_m9AF0B36330B6034B93000874D98617B032E6183D_inline (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* __this, const RuntimeMethod* method) 
{
	{
		// public Runtime.Object parent { get; set; }
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_0 = __this->___U3CparentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* Object_get_ownDebugMetadata_m5C84AE212A83FD7AE37E573867BF6360281467EE_inline (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* __this, const RuntimeMethod* method) 
{
	{
		// return _debugMetadata;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_0 = __this->____debugMetadata_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_set_parent_m313E7123FE19E7C089F5856A0B9AB83D092AF2FF_inline (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* __this, Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* ___value0, const RuntimeMethod* method) 
{
	{
		// public Runtime.Object parent { get; set; }
		Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* L_0 = ___value0;
		__this->___U3CparentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Object_set_debugMetadata_mEF4D1395140C148FF2206F19E4A2AB9DB0A6F825_inline (Object_t42A2989484E361AF6C41D21FD84B2F8EFD905CCB* __this, DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* ___value0, const RuntimeMethod* method) 
{
	{
		// _debugMetadata = value;
		DebugMetadata_t5435CB4374070B99B60193A2E4B468E94CE00C01* L_0 = ___value0;
		__this->____debugMetadata_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____debugMetadata_1), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorHandler_Invoke_m79D2EBC45964D545F88193253C28EB1C67FEB2E2_inline (ErrorHandler_tCD8B3F7247DF706204285C48B7801A7B60325728* __this, String_t* ___message0, int32_t ___type1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, ___type1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5A7C284E404753F1786689E097CE59A152638444* FlowBase_get_arguments_m1EF87837594B7A14507C461AE7EB4B685F61EB47_inline (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) 
{
	{
		// public List<Argument> arguments { get; protected set; }
		List_1_t5A7C284E404753F1786689E097CE59A152638444* L_0 = __this->___U3CargumentsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* FlowBase_get_identifier_m4690D9A6AAB405E233688C9261A4F0BB19BFC105_inline (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) 
{
	{
		// public Identifier identifier { get; set; }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = __this->___U3CidentifierU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Text_set_text_m174E6D93DD8C69932A47F52A61E8A97CAD231058_inline (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string text { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CtextU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Text_get_text_m14F6F4C8E14BAD266FF794A86DCFA15E89964103_inline (Text_t2561CF2D715008D9C31C9382C40FE22ACA2010ED* __this, const RuntimeMethod* method) 
{
	{
		// public string text { get; set; }
		String_t* L_0 = __this->___U3CtextU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* TunnelOnwards_get_divertAfter_mB10E1405320A4D7DA07ED66C82387FC658F9CBB8_inline (TunnelOnwards_tCF30E723E7791A1C048BC095DAC9278CFFD1D450* __this, const RuntimeMethod* method) 
{
	{
		// return _divertAfter;
		Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* L_0 = __this->____divertAfter_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* Divert_get_arguments_m835B3FA82AB94C9D96B4472519BE0C4776F6FD5B_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) 
{
	{
		// public List<Expression> arguments { get; protected set; }
		List_1_tD3E001C32948A6DD125E6901AC81E86BE69FBE9F* L_0 = __this->___U3CargumentsU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControlCommand_get_commandType_mF43D077F555FA63FF4A1146790A56346647DBE8A_inline (ControlCommand_tECC2BE832A73AD5873667DCA691A43EF694E04C6* __this, const RuntimeMethod* method) 
{
	{
		// public CommandType commandType { get; protected set; }
		int32_t L_0 = __this->___U3CcommandTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* Divert_get_targetContent_m2A18F6F480779045E0B34983F78C0ADFE635D21C_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) 
{
	{
		// public Parsed.Object targetContent { get; protected set; }
		Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* L_0 = __this->___U3CtargetContentU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* VariableAssignment_get_variableIdentifier_m5E36193B2BC86B48D2567C6EA389B4C5FE67CB9A_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public Identifier variableIdentifier { get; protected set; }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = __this->___U3CvariableIdentifierU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VariableAssignment_get_isNewTemporaryDeclaration_mACF69876ACD56361BDC05A612795D2616FF6DF46_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, const RuntimeMethod* method) 
{
	{
		// public bool isNewTemporaryDeclaration { get; set; }
		bool L_0 = __this->___U3CisNewTemporaryDeclarationU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_variableIdentifier_m16684EEAA53B0C8C0A31B1072977CC5C115A35E3_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* ___value0, const RuntimeMethod* method) 
{
	{
		// public Identifier variableIdentifier { get; protected set; }
		Identifier_t0F346C00621758823B8D81B08308C6B9C24089DD* L_0 = ___value0;
		__this->___U3CvariableIdentifierU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvariableIdentifierU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_expression_m4CE2FDFCA9A76FEF3E8C76E0B93FE7CE9705AD48_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* ___value0, const RuntimeMethod* method) 
{
	{
		// public Expression expression { get; protected set; }
		Expression_tA6C9FD368D7951E1A1470D0F749E376D800BAB0D* L_0 = ___value0;
		__this->___U3CexpressionU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexpressionU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_listDefinition_m7675DC40AF4DAFF3918BE94FF4DD9190955AF87A_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* ___value0, const RuntimeMethod* method) 
{
	{
		// public ListDefinition listDefinition { get; protected set; }
		ListDefinition_t79B40483F197DBBBADE985496F0220CEB1E99B65* L_0 = ___value0;
		__this->___U3ClistDefinitionU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClistDefinitionU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableAssignment_set_isGlobalDeclaration_m3B705D1B9A8EC0FB9C5AB5B2B80B690ACD50D86D_inline (VariableAssignment_tD4DE7C66FEC35C64555CA2CB117AF682C9A48C82* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool isGlobalDeclaration { get; set; }
		bool L_0 = ___value0;
		__this->___U3CisGlobalDeclarationU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VariableReference_get_path_m4D5B8D343718045E48C7BE308F7C45E2384CCF74_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	{
		// public List<string> path { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CpathU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_path_m2987340812E384B0F12578542E50B0CEFABDEAB0_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<string> path { get; private set; }
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CpathU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_name_mCA878128BFBEF54B19531F832CD1FB62A617ED65_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VariableReference_get_name_mE6D2556C23D83C040F82E27DE755F7D6FBD90E0F_inline (VariableReference_tB87C62204639CBB2363DC6DC4A5974869787F049* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_pathForCount_m3488741E05F86E09B7A082704610A095EF0C7016_inline (VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* __this, Path_tCC1F1626DB60711735401EA8FA76A191D9014600* ___value0, const RuntimeMethod* method) 
{
	{
		// public Path pathForCount { get; set; }
		Path_tCC1F1626DB60711735401EA8FA76A191D9014600* L_0 = ___value0;
		__this->___U3CpathForCountU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpathForCountU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VariableReference_set_name_mD0F82FBF6521B061476F855E565D665D03BADF29_inline (VariableReference_t6DBE40073F3B791D54C0BB2443D9049B65836819* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FlowBase_get_isFunction_m89BD3D4FC104434B4EB5091C121C29C3E817D30F_inline (FlowBase_tC404CD82693644CCF6B95E73D16916F34439E822* __this, const RuntimeMethod* method) 
{
	{
		// public bool isFunction { get; protected set; }
		bool L_0 = __this->___U3CisFunctionU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weave_set_baseIndentIndex_m6F3D26B4F215BB48218CFE3E84BD0B26532B98B1_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int baseIndentIndex { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CbaseIndentIndexU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Weave_get_baseIndentIndex_m98068082F6788CEF08908CCDF9E62F4C4938839D_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	{
		// public int baseIndentIndex { get; private set; }
		int32_t L_0 = __this->___U3CbaseIndentIndexU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Weave_set_currentContainer_m726341F02CE4FBBF970874A494486A48190F7C23_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, Container_t74302BC1028974B0A346A43F334AECB681D79579* ___value0, const RuntimeMethod* method) 
{
	{
		// Runtime.Container currentContainer { get; set; }
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = ___value0;
		__this->___U3CcurrentContainerU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentContainerU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Weave_get_currentContainer_mB0B00A3DCFD6945E5EFF414D3D64D13D856820F2_inline (Weave_t1E56124304AA6519E5BDDCD8792ABB26A7066E37* __this, const RuntimeMethod* method) 
{
	{
		// Runtime.Container currentContainer { get; set; }
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = __this->___U3CcurrentContainerU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Gather_get_indentationDepth_m40F76E3F69111BE1085CFE0B79370156045C94E4_inline (Gather_t4D4449D7F4F457FE8C02998391783920F1D2459B* __this, const RuntimeMethod* method) 
{
	{
		// public int indentationDepth { get; protected set; }
		int32_t L_0 = __this->___U3CindentationDepthU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Container_t74302BC1028974B0A346A43F334AECB681D79579* Choice_get_innerContentContainer_m9C30F03A0EFE2BEE3AC920D6F39B50E84127C3F3_inline (Choice_t36174EC808231C52E43CE7768134739559499893* __this, const RuntimeMethod* method) 
{
	{
		// return _innerContentContainer;
		Container_t74302BC1028974B0A346A43F334AECB681D79579* L_0 = __this->____innerContentContainer_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BadTerminationHandler_Invoke_m514669E211AB86F6F77667C526E42DE881D3AAD6_inline (BadTerminationHandler_t38227A0D50C73B21589BBEF3F43731475F7566EC* __this, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7* ___terminatingObj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Object_tDB66D25C07C7A36ED0B21A5AE91F1DBA64B98EB7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___terminatingObj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Divert_get_isThread_m5AF57D150FA6189A096F00149ED4BB4ADC1D3F73_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) 
{
	{
		// public bool isThread { get; set; }
		bool L_0 = __this->___U3CisThreadU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Divert_get_isTunnel_m5F0B18A5D8A9CF7F751CCAE63840442D64E78EF0_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) 
{
	{
		// public bool isTunnel { get; set; }
		bool L_0 = __this->___U3CisTunnelU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Divert_get_isFunctionCall_m795B07F1FA11C85E330D67D0C5E93157BEC3BB13_inline (Divert_tE272DF3F0AABF09ED4E25477B45C8185D59C5186* __this, const RuntimeMethod* method) 
{
	{
		// public bool isFunctionCall { get; set; }
		bool L_0 = __this->___U3CisFunctionCallU3Ek__BackingField_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
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
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m26287DBB36429B2E2FBCB3F96F439248F8CAA8BB_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
