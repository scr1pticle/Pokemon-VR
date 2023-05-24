#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2, T3, T4, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, &p2, &p3, &p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, params[5]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2, T3*, T4, T5, T6, T7>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		R ret;
		void* params[7] = { p1, &p2, p3, &p4, &p5, &p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Comparer`1<System.Byte>
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
// System.Collections.Generic.Comparer`1<System.Int16>
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
// System.Collections.Generic.Comparer`1<System.SByte>
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B;
// System.Collections.Generic.Comparer`1<System.UInt16>
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98;
// System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB;
// UnityEngine.Rendering.DynamicArray`1<System.Object>
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
// System.Collections.Generic.EqualityComparer`1<System.Int16>
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B;
// System.Collections.Generic.EqualityComparer`1<System.SByte>
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B;
// System.Collections.Generic.EqualityComparer`1<System.UInt16>
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70;
// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32>
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource[]
struct IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback
struct ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;

IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D;
IL2CPP_EXTERN_C String_t* _stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Comparer`1<System.Byte>
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};

struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.Int16>
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};

struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.SByte>
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B  : public RuntimeObject
{
};

struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.UInt16>
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98  : public RuntimeObject
{
};

struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};

struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer_0;
};

// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB  : public RuntimeObject
{
	// T[] UnityEngine.Rendering.DynamicArray`1::m_Array
	IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3* ___m_Array_0;
	// System.Int32 UnityEngine.Rendering.DynamicArray`1::<size>k__BackingField
	int32_t ___U3CsizeU3Ek__BackingField_1;
};

// UnityEngine.Rendering.DynamicArray`1<System.Object>
struct DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA  : public RuntimeObject
{
	// T[] UnityEngine.Rendering.DynamicArray`1::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.Rendering.DynamicArray`1::<size>k__BackingField
	int32_t ___U3CsizeU3Ek__BackingField_1;
};

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};

struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int16>
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B  : public RuntimeObject
{
};

struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.SByte>
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B  : public RuntimeObject
{
};

struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.UInt16>
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70  : public RuntimeObject
{
};

struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};

struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer_0;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D  : public RuntimeObject
{
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::imported
	bool ___imported_0;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::shared
	bool ___shared_1;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::sharedExplicitRelease
	bool ___sharedExplicitRelease_2;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::requestFallBack
	bool ___requestFallBack_3;
	// System.UInt32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::writeCount
	uint32_t ___writeCount_4;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::cachedHash
	int32_t ___cachedHash_5;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::transientPassIndex
	int32_t ___transientPassIndex_6;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::sharedResourceLastFrameUsed
	int32_t ___sharedResourceLastFrameUsed_7;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::m_Pool
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___m_Pool_8;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8  : public RuntimeObject
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

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
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

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE  : public RuntimeObject
{
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::resourceArray
	DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* ___resourceArray_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::sharedResourcesCount
	int32_t ___sharedResourcesCount_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::pool
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___pool_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::createResourceCallback
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___createResourceCallback_3;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::releaseResourceCallback
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___releaseResourceCallback_4;
};

// Unity.Burst.Intrinsics.X86/Avx2
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.X86/Sse4_2
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};

struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	// System.UInt32[] Unity.Burst.Intrinsics.X86/Sse4_2::crctab
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab_0;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB  : public RuntimeObject
{
};

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<UnityEngine.Vector4>
struct U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1::data
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data_0;
};

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1::data
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data_0;
};

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>
struct U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1::data
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data_0;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// Unity.Burst.Intrinsics.v64
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v64::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v64::SByte0
			int8_t ___SByte0_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_9_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte1
			int8_t ___SByte1_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_9_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_10_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte2
			int8_t ___SByte2_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_10_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_11_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte3
			int8_t ___SByte3_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_11_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_12_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte4
			int8_t ___SByte4_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_12_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_13_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte5
			int8_t ___SByte5_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_13_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_14_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte6
			int8_t ___SByte6_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_14_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_15_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte7
			int8_t ___SByte7_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_15_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort0
			uint16_t ___UShort0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_17_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort1
			uint16_t ___UShort1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_17_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_18_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort2
			uint16_t ___UShort2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_18_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_19_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort3
			uint16_t ___UShort3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_19_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort0
			int16_t ___SShort0_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_21_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort1
			int16_t ___SShort1_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_21_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_22_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort2
			int16_t ___SShort2_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_22_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_23_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort3
			int16_t ___SShort3_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_23_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt0
			uint32_t ___UInt0_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_25_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt1
			uint32_t ___UInt1_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_25_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt0
			int32_t ___SInt0_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_27_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt1
			int32_t ___SInt1_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_27_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v64::ULong0
			uint64_t ___ULong0_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v64::SLong0
			int64_t ___SLong0_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v64::Float0
			float ___Float0_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_31_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v64::Float1
			float ___Float1_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_31_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v64::Double0
			double ___Double0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_32_forAlignmentOnly;
		};
	};
};

// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::visibleLightIndex
	uint16_t ___visibleLightIndex_0;
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::lightBufferIndex
	uint16_t ___lightBufferIndex_1;
	// UnityEngine.Light UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::light
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByCookieSize
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize_3;
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByBufferIndex
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

// UnityEngine.Rendering.Universal.LightCookieManager/Sorting
struct Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994 
{
	union
	{
		struct
		{
		};
		uint8_t Sorting_t85E1835DC268F696F8A2F1E889C951F4C48DC994__padding[1];
	};
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
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

// Unity.Burst.Intrinsics.v128
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v128::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v128::SByte0
			int8_t ___SByte0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_17_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte1
			int8_t ___SByte1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_18_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte2
			int8_t ___SByte2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_19_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte3
			int8_t ___SByte3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_20_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte4
			int8_t ___SByte4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_21_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte5
			int8_t ___SByte5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_22_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte6
			int8_t ___SByte6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_23_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte7
			int8_t ___SByte7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_24_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte8
			int8_t ___SByte8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_25_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte9
			int8_t ___SByte9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_26_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte10
			int8_t ___SByte10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_27_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte11
			int8_t ___SByte11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_28_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte12
			int8_t ___SByte12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_29_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte13
			int8_t ___SByte13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_30_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte14
			int8_t ___SByte14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_31_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte15
			int8_t ___SByte15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort0
			uint16_t ___UShort0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_33_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort1
			uint16_t ___UShort1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_34_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort2
			uint16_t ___UShort2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_35_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort3
			uint16_t ___UShort3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_36_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort4
			uint16_t ___UShort4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_37_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort5
			uint16_t ___UShort5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_38_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort6
			uint16_t ___UShort6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_39_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort7
			uint16_t ___UShort7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort0
			int16_t ___SShort0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_41_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort1
			int16_t ___SShort1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_42_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort2
			int16_t ___SShort2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_43_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort3
			int16_t ___SShort3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_44_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort4
			int16_t ___SShort4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_45_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort5
			int16_t ___SShort5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_46_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort6
			int16_t ___SShort6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_47_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort7
			int16_t ___SShort7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt0
			uint32_t ___UInt0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_49_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt1
			uint32_t ___UInt1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_50_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt2
			uint32_t ___UInt2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_51_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt3
			uint32_t ___UInt3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt0
			int32_t ___SInt0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_53_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt1
			int32_t ___SInt1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_54_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt2
			int32_t ___SInt2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_55_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt3
			int32_t ___SInt3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong0
			uint64_t ___ULong0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_57_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong1
			uint64_t ___ULong1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong0
			int64_t ___SLong0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_59_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong1
			int64_t ___SLong1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v128::Float0
			float ___Float0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_61_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v128::Float1
			float ___Float1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_61_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_62_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v128::Float2
			float ___Float2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_62_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_63_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v128::Float3
			float ___Float3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_63_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v128::Double0
			double ___Double0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_65_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v128::Double1
			double ___Double1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_65_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Lo64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_67_OffsetPadding[8];
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Hi64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_67_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67_forAlignmentOnly;
		};
	};
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::Bits
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits_0;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2 
{
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::m_Api
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::m_RequestId
	int32_t ___m_RequestId_1;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::<conversionParams>k__BackingField
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_pinvoke
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_com
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};

// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32>
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// TResult System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___arg10, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___arg21, const RuntimeMethod* method) ;
// TResult System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___arg10, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___arg21, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::<Median3Pivot>g__Swap|2_0<UnityEngine.Vector4>(System.Int32,System.Int32,UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* p2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::<Median3Pivot>g__Swap|2_0<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(System.Int32,System.Int32,UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* p2, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare4, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::InsertionSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::InsertionSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.DynamicArray`1<System.Object>::get_size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.DynamicArray`1<System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___newSize0, bool ___keepContent1, const RuntimeMethod* method) ;
// T& UnityEngine.Rendering.DynamicArray`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Activator::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Byte>::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Byte>::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int16>::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Int16>::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.SByte>::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.SByte>::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.UInt16>::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.UInt16>::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared (const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Byte>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___len0, int32_t ___imm81, uint8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Int16>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___len0, int32_t ___imm81, int16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.SByte>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___len0, int32_t ___imm81, int8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) ;
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.UInt16>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___len0, int32_t ___imm81, uint16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Byte>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Int16>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.SByte>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.UInt16>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Byte>::CreateComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int16>::CreateComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.SByte>::CreateComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.UInt16>::CreateComparer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared (const RuntimeMethod* method) ;

// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___condition0, const RuntimeMethod* method) ;
// TResult System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>::Invoke(T1,T2)
inline int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___arg10, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___arg21, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// TResult System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>::Invoke(T1,T2)
inline int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___arg10, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___arg21, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::<Median3Pivot>g__Swap|2_0<UnityEngine.Vector4>(System.Int32,System.Int32,UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<T>&)
inline void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795 (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2* p2, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2*, const RuntimeMethod*))Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795_gshared)(___a0, ___b1, p2, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::<Median3Pivot>g__Swap|2_0<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(System.Int32,System.Int32,UnityEngine.Rendering.Universal.LightCookieManager/Sorting/<>c__DisplayClass2_0`1<T>&)
inline void Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051 (int32_t ___a0, int32_t ___b1, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597* p2, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597*, const RuntimeMethod*))Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051_gshared)(___a0, ___b1, p2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare4, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared)(___data0, ___start1, ___pivot2, ___end3, ___compare4, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare4, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared)(___data0, ___start1, ___pivot2, ___end3, ___compare4, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::InsertionSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
inline void Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
inline int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
inline void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method)
{
	((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::InsertionSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
inline void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
inline int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
inline void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method)
{
	((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared)(___data0, ___start1, ___end2, ___compare3, method);
}
// System.Int32 UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::get_size()
inline int32_t DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, const RuntimeMethod*))DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::Resize(System.Int32,System.Boolean)
inline void DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1 (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___newSize0, bool ___keepContent1, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m3E24EB8A4A036B423BA304E8C3C94EBD0222822E_gshared)(__this, ___newSize0, ___keepContent1, method);
}
// T& UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::get_Item(System.Int32)
inline IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** (*) (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_m7DDF1E462D1484149A4D812CAD717F816205FD44_gshared)(__this, ___index0, method);
}
// T System.Activator::CreateInstance<System.Object>()
inline RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared)(method);
}
// System.Int32 System.Int64::CompareTo(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Byte>::get_Default()
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline)(method);
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Byte>::get_Default()
inline Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB (const RuntimeMethod* method)
{
	return ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB_gshared)(method);
}
// System.Void Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::SetBit(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, bool ___val2, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::GetBit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, const RuntimeMethod* method) ;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int16>::get_Default()
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline)(method);
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Int16>::get_Default()
inline Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407_gshared)(method);
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.SByte>::get_Default()
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline)(method);
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.SByte>::get_Default()
inline Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F (const RuntimeMethod* method)
{
	return ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F_gshared)(method);
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.UInt16>::get_Default()
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline)(method);
}
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.UInt16>::get_Default()
inline Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36_gshared)(method);
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared)(___a0, ___alen1, ___b2, ___blen3, ___len4, ___imm85, ___allOnes6, method);
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStriOutput(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___len0, int32_t ___imm81, int32_t ___intRes22, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960 (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared)(___a0, ___alen1, ___b2, ___blen3, ___len4, ___imm85, ___allOnes6, method);
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared)(___a0, ___alen1, ___b2, ___blen3, ___len4, ___imm85, ___allOnes6, method);
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared)(___a0, ___alen1, ___b2, ___blen3, ___len4, ___imm85, ___allOnes6, method);
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Byte>(System.Int32,System.Int32,T,System.Int32)
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235 (int32_t ___len0, int32_t ___imm81, uint8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared)(___len0, ___imm81, ___allOnesT2, ___intRes23, method);
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Int16>(System.Int32,System.Int32,T,System.Int32)
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8 (int32_t ___len0, int32_t ___imm81, int16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared)(___len0, ___imm81, ___allOnesT2, ___intRes23, method);
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.SByte>(System.Int32,System.Int32,T,System.Int32)
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455 (int32_t ___len0, int32_t ___imm81, int8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared)(___len0, ___imm81, ___allOnesT2, ___intRes23, method);
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.UInt16>(System.Int32,System.Int32,T,System.Int32)
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1 (int32_t ___len0, int32_t ___imm81, uint16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared)(___len0, ___imm81, ___allOnesT2, ___intRes23, method);
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Byte>(T*,System.Int32)
inline int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A (uint8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared)(___ptr0, ___max1, method);
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Int16>(T*,System.Int32)
inline int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3 (int16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared)(___ptr0, ___max1, method);
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.SByte>(T*,System.Int32)
inline int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171 (int8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared)(___ptr0, ___max1, method);
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.UInt16>(T*,System.Int32)
inline int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D (uint16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared)(___ptr0, ___max1, method);
}
// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___value0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*, const RuntimeMethod*))AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared)((AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*)__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
inline void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___length0, ___allocator1, ___options2, method);
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Byte>::CreateComparer()
inline EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377_gshared)(method);
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Int16>::CreateComparer()
inline EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B_gshared)(method);
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.SByte>::CreateComparer()
inline EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D_gshared)(method);
}
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.UInt16>::CreateComparer()
inline EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8_gshared)(method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::InsertionSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		// Assertions.Assert.IsTrue((uint)start < data.Length);
		int32_t L_0 = ___start1;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = ___data0;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_0))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))? 1 : 0), NULL);
		// Assertions.Assert.IsTrue((uint)end < data.Length);
		int32_t L_2 = ___end2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_3 = ___data0;
		NullCheck(L_3);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_2))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))? 1 : 0), NULL);
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_4 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0073;
	}

IL_0023:
	{
		// var iData = data[i];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_5 = ___data0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		// int j = i - 1;
		int32_t L_9 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_0048;
	}

IL_0032:
	{
		// data[j + 1] = data[j];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_10 = ___data0;
		int32_t L_11 = V_2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_12 = ___data0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_15);
		// j--;
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0048:
	{
		// while (j >= 0 && compare(iData, data[j]) < 0)
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_18 = ___compare3;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_19 = V_1;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_20 = ___data0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_18);
		int32_t L_24;
		L_24 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_18, L_19, L_23, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B6_0 = ((((int32_t)L_24) < ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B6_0 = 0;
	}

IL_0060:
	{
		V_3 = (bool)G_B6_0;
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0032;
		}
	}
	{
		// data[j + 1] = iData;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_26 = ___data0;
		int32_t L_27 = V_2;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_28 = V_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 1))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_28);
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0073:
	{
		// for (int i = start + 1; i < end + 1; i++)
		int32_t L_30 = V_0;
		int32_t L_31 = ___end2;
		V_4 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add(L_31, 1))))? 1 : 0);
		bool L_32 = V_4;
		if (L_32)
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___data0;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_0), (void*)L_0);
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_1 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_2 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_2.___data_0;
		int32_t L_4 = ___end3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_7 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_7.___data_0;
		int32_t L_9 = ___start1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		int32_t L_14 = ___start1;
		int32_t L_15 = ___end3;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795(L_14, L_15, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_003a:
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_16 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_17 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_18 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_17.___data_0;
		int32_t L_19 = ___pivot2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_22 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_23 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_22.___data_0;
		int32_t L_24 = ___start1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_16);
		int32_t L_27;
		L_27 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_16, L_21, L_26, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_006a;
		}
	}
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		int32_t L_29 = ___start1;
		int32_t L_30 = ___pivot2;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795(L_29, L_30, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_006a:
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_31 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_32 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_33 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_32.___data_0;
		int32_t L_34 = ___end3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_37 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_38 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_37.___data_0;
		int32_t L_39 = ___pivot2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_31);
		int32_t L_42;
		L_42 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_31, L_36, L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_009a;
		}
	}
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		int32_t L_44 = ___pivot2;
		int32_t L_45 = ___end3;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2B2B04012DE1B591C8E7AD4765ECB8EF3790F795(L_44, L_45, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_009a:
	{
		// return data[pivot];
		U3CU3Ec__DisplayClass2_0_1_t41073816D00B5468033D7AA727FBFFB73E7C9BA2 L_46 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_47 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)L_46.___data_0;
		int32_t L_48 = ___pivot2;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		goto IL_00aa;
	}

IL_00aa:
	{
		// }
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_51 = V_4;
		return L_51;
	}
}
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_Median3Pivot_TisIl2CppFullySharedGenericAny_mA6E8814C46DAB9D561A5440B447E24E67159A5A1_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare4, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	const Il2CppFullySharedGenericAny L_21 = L_6;
	const Il2CppFullySharedGenericAny L_36 = L_6;
	const Il2CppFullySharedGenericAny L_50 = L_6;
	const Il2CppFullySharedGenericAny L_51 = L_6;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	const Il2CppFullySharedGenericAny L_26 = L_11;
	const Il2CppFullySharedGenericAny L_41 = L_11;
	U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	memset(V_4, 0, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___data0;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_0), (void*)L_0);
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_1 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_2.___data_0;
		int32_t L_4 = ___end3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_7 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_7.___data_0;
		int32_t L_9 = ___start1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		NullCheck(L_1);
		int32_t L_12;
		L_12 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_11: *(void**)L_11));
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		int32_t L_14 = ___start1;
		int32_t L_15 = ___end3;
		InvokerActionInvoker3< int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_14, L_15, (&V_0));
	}

IL_003a:
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_16 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_17 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_17.___data_0;
		int32_t L_19 = ___pivot2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_22 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_22.___data_0;
		int32_t L_24 = ___start1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		il2cpp_codegen_memcpy(L_26, (L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		NullCheck(L_16);
		int32_t L_27;
		L_27 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_26: *(void**)L_26));
		V_2 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_006a;
		}
	}
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		int32_t L_29 = ___start1;
		int32_t L_30 = ___pivot2;
		InvokerActionInvoker3< int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_29, L_30, (&V_0));
	}

IL_006a:
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_31 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_32 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_32.___data_0;
		int32_t L_34 = ___end3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		il2cpp_codegen_memcpy(L_36, (L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_37 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_37.___data_0;
		int32_t L_39 = ___pivot2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		il2cpp_codegen_memcpy(L_41, (L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		NullCheck(L_31);
		int32_t L_42;
		L_42 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_36: *(void**)L_36), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_41: *(void**)L_41));
		V_3 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_009a;
		}
	}
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		int32_t L_44 = ___pivot2;
		int32_t L_45 = ___end3;
		InvokerActionInvoker3< int32_t, int32_t, U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL, L_44, L_45, (&V_0));
	}

IL_009a:
	{
		// return data[pivot];
		U3CU3Ec__DisplayClass2_0_1_t95D21073081C2AD9435E6E2ED2FD63B720ABF032 L_46 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_47 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_46.___data_0;
		int32_t L_48 = ___pivot2;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		il2cpp_codegen_memcpy(L_50, (L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)), SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		il2cpp_codegen_memcpy(V_4, L_50, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		goto IL_00aa;
	}

IL_00aa:
	{
		// }
		il2cpp_codegen_memcpy(L_51, V_4, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_51, SizeOf_T_t7DAA074A5FED821310D99584547BB9B1AEB7FBB5);
		return;
	}
}
// T UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Median3Pivot<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___pivot2, int32_t ___end3, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___data0;
		(&V_0)->___data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_0), (void*)L_0);
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_1 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_2 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_3 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_2.___data_0;
		int32_t L_4 = ___end3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_7 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_8 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_7.___data_0;
		int32_t L_9 = ___start1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_1);
		int32_t L_12;
		L_12 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_1, L_6, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		// if (compare(data[end], data[start]) < 0) Swap(start, end);
		int32_t L_14 = ___start1;
		int32_t L_15 = ___end3;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_14, L_15, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_003a:
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_16 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_17 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_18 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_17.___data_0;
		int32_t L_19 = ___pivot2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_22 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_23 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_22.___data_0;
		int32_t L_24 = ___start1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_16);
		int32_t L_27;
		L_27 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_16, L_21, L_26, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = (bool)((((int32_t)L_27) < ((int32_t)0))? 1 : 0);
		bool L_28 = V_2;
		if (!L_28)
		{
			goto IL_006a;
		}
	}
	{
		// if (compare(data[pivot], data[start]) < 0) Swap(start, pivot);
		int32_t L_29 = ___start1;
		int32_t L_30 = ___pivot2;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_29, L_30, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_006a:
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_31 = ___compare4;
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_32 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_33 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_32.___data_0;
		int32_t L_34 = ___end3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_37 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_38 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_37.___data_0;
		int32_t L_39 = ___pivot2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_31);
		int32_t L_42;
		L_42 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_31, L_36, L_41, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = (bool)((((int32_t)L_42) < ((int32_t)0))? 1 : 0);
		bool L_43 = V_3;
		if (!L_43)
		{
			goto IL_009a;
		}
	}
	{
		// if (compare(data[end], data[pivot]) < 0) Swap(pivot, end);
		int32_t L_44 = ___pivot2;
		int32_t L_45 = ___end3;
		Sorting_U3CMedian3PivotU3Eg__SwapU7C2_0_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m06FED96568508A808BFC2F0CB6D49F45194E6051(L_44, L_45, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_009a:
	{
		// return data[pivot];
		U3CU3Ec__DisplayClass2_0_1_tC4E3D65CA470C2F2DB85D9B32B717BE3200D4597 L_46 = V_0;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_47 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)L_46.___data_0;
		int32_t L_48 = ___pivot2;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		goto IL_00aa;
	}

IL_00aa:
	{
		// }
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_51 = V_4;
		return L_51;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		// int diff = end - start;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// int pivot = start + diff / 2;
		int32_t L_2 = ___start1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		// var pivotValue = Median3Pivot(data, start, pivot, end, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = V_1;
		int32_t L_7 = ___end2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_8 = ___compare3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Sorting_Median3Pivot_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m61A04EAD49649BB481C390575840F890DC1AD6D9(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_0091;
	}

IL_0018:
	{
		goto IL_0020;
	}

IL_001b:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		int32_t L_10 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_11 = ___compare3;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_12 = ___data0;
		int32_t L_13 = ___start1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		int32_t L_19 = ___end2;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_20 = ___compare3;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_21 = ___data0;
		int32_t L_22 = ___end2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = V_2;
		NullCheck(L_20);
		int32_t L_26;
		L_26 = Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_inline(L_20, L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_5 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0039;
		}
	}
	{
		// if (start >= end)
		int32_t L_28 = ___start1;
		int32_t L_29 = ___end2;
		V_6 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0068;
		}
	}
	{
		// return end;
		int32_t L_31 = ___end2;
		V_7 = L_31;
		goto IL_0096;
	}

IL_0068:
	{
		// var tmp = data[start];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_32 = ___data0;
		int32_t L_33 = ___start1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = L_35;
		// data[start++] = data[end];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_36 = ___data0;
		int32_t L_37 = ___start1;
		int32_t L_38 = L_37;
		___start1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_39 = ___data0;
		int32_t L_40 = ___end2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_42);
		// data[end--] = tmp;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_43 = ___data0;
		int32_t L_44 = ___end2;
		int32_t L_45 = L_44;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_46 = V_3;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_46);
	}

IL_0091:
	{
		// while (true)
		V_8 = (bool)1;
		goto IL_0018;
	}

IL_0096:
	{
		// }
		int32_t L_47 = V_7;
		return L_47;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisIl2CppFullySharedGenericAny_m712B611DAC06FA9738A8F85CAA404B955BB47029_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	const Il2CppFullySharedGenericAny L_15 = L_9;
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_35 = L_9;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	const Il2CppFullySharedGenericAny L_25 = L_16;
	const Il2CppFullySharedGenericAny L_42 = L_16;
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	memset(V_2, 0, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	memset(V_3, 0, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		// int diff = end - start;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// int pivot = start + diff / 2;
		int32_t L_2 = ___start1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		// var pivotValue = Median3Pivot(data, start, pivot, end, compare);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = V_1;
		int32_t L_7 = ___end2;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_8 = ___compare3;
		InvokerActionInvoker6< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_4, L_5, L_6, L_7, L_8, (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		goto IL_0091;
	}

IL_0018:
	{
		goto IL_0020;
	}

IL_001b:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		int32_t L_10 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_11 = ___compare3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___data0;
		int32_t L_13 = ___start1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(L_16, V_2, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_11);
		int32_t L_17;
		L_17 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_16: *(void**)L_16));
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		int32_t L_19 = ___end2;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_20 = ___compare3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___data0;
		int32_t L_22 = ___end2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		il2cpp_codegen_memcpy(L_24, (L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(L_25, V_2, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_20);
		int32_t L_26;
		L_26 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_24: *(void**)L_24), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_25: *(void**)L_25));
		V_5 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0039;
		}
	}
	{
		// if (start >= end)
		int32_t L_28 = ___start1;
		int32_t L_29 = ___end2;
		V_6 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0068;
		}
	}
	{
		// return end;
		int32_t L_31 = ___end2;
		V_7 = L_31;
		goto IL_0096;
	}

IL_0068:
	{
		// var tmp = data[start];
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = ___data0;
		int32_t L_33 = ___start1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		il2cpp_codegen_memcpy(L_35, (L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		il2cpp_codegen_memcpy(V_3, L_35, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		// data[start++] = data[end];
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = ___data0;
		int32_t L_37 = ___start1;
		int32_t L_38 = L_37;
		___start1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = ___data0;
		int32_t L_40 = ___end2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		il2cpp_codegen_memcpy(L_42, (L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)), SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_36);
		il2cpp_codegen_memcpy((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), L_42, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38)), (void*)L_42);
		// data[end--] = tmp;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_43 = ___data0;
		int32_t L_44 = ___end2;
		int32_t L_45 = L_44;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		il2cpp_codegen_memcpy(L_46, V_3, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		NullCheck(L_43);
		il2cpp_codegen_memcpy((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)), L_46, SizeOf_T_tC40FDC7B5C85862D1DEB60A6C3716599A9ECA6BE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)), (void*)L_46);
	}

IL_0091:
	{
		// while (true)
		V_8 = (bool)1;
		goto IL_0018;
	}

IL_0096:
	{
		// }
		int32_t L_47 = V_7;
		return L_47;
	}
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/Sorting::Partition<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		// int diff = end - start;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// int pivot = start + diff / 2;
		int32_t L_2 = ___start1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)(L_3/2))));
		// var pivotValue = Median3Pivot(data, start, pivot, end, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___data0;
		int32_t L_5 = ___start1;
		int32_t L_6 = V_1;
		int32_t L_7 = ___end2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_8 = ___compare3;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_9;
		L_9 = Sorting_Median3Pivot_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m3AE419868146FAEE6A59E9FA4E33484BFA9930B1(L_4, L_5, L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_9;
		goto IL_0091;
	}

IL_0018:
	{
		goto IL_0020;
	}

IL_001b:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		int32_t L_10 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0020:
	{
		// while (compare(data[start], pivotValue) < 0) ++start;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_11 = ___compare3;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_12 = ___data0;
		int32_t L_13 = ___start1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_16 = V_2;
		NullCheck(L_11);
		int32_t L_17;
		L_17 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_11, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_001b;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		int32_t L_19 = ___end2;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_003e:
	{
		// while (compare(data[end], pivotValue) > 0) --end;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_20 = ___compare3;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_21 = ___data0;
		int32_t L_22 = ___end2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_25 = V_2;
		NullCheck(L_20);
		int32_t L_26;
		L_26 = Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_inline(L_20, L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_5 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0039;
		}
	}
	{
		// if (start >= end)
		int32_t L_28 = ___start1;
		int32_t L_29 = ___end2;
		V_6 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0068;
		}
	}
	{
		// return end;
		int32_t L_31 = ___end2;
		V_7 = L_31;
		goto IL_0096;
	}

IL_0068:
	{
		// var tmp = data[start];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_32 = ___data0;
		int32_t L_33 = ___start1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = L_35;
		// data[start++] = data[end];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_36 = ___data0;
		int32_t L_37 = ___start1;
		int32_t L_38 = L_37;
		___start1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_39 = ___data0;
		int32_t L_40 = ___end2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_42);
		// data[end--] = tmp;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_43 = ___data0;
		int32_t L_44 = ___end2;
		int32_t L_45 = L_44;
		___end2 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_46 = V_3;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_46);
	}

IL_0091:
	{
		// while (true)
		V_8 = (bool)1;
		goto IL_0018;
	}

IL_0096:
	{
		// }
		int32_t L_47 = V_7;
		return L_47;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_mEC21DF5A7D470F44BB30B97EB39D03491BD65D1F_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data0, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// QuickSort<T>(data, 0, data.Length - 1, compare);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___data0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___data0;
		NullCheck(L_1);
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_2 = ___compare1;
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Vector4>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570_gshared (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		// int diff = end - start;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if (diff < 1)
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		goto IL_0088;
	}

IL_000f:
	{
		// if (diff < 8)
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)8))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// InsertionSort(data, start, end, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___data0;
		int32_t L_7 = ___start1;
		int32_t L_8 = ___end2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_9 = ___compare3;
		Sorting_InsertionSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6B06894C5FA146D1CCE7ECBC21F553F16F2E96F5(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return;
		goto IL_0088;
	}

IL_0024:
	{
		// Assertions.Assert.IsTrue((uint)start < data.Length);
		int32_t L_10 = ___start1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_11 = ___data0;
		NullCheck(L_11);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_10))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0), NULL);
		// Assertions.Assert.IsTrue((uint)end < data.Length); // end == inclusive
		int32_t L_12 = ___end2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_13 = ___data0;
		NullCheck(L_13);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_12))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0), NULL);
		// if (start < end)
		int32_t L_14 = ___start1;
		int32_t L_15 = ___end2;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		// int pivot = Partition<T>(data, start, end, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_17 = ___data0;
		int32_t L_18 = ___start1;
		int32_t L_19 = ___end2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_20 = ___compare3;
		int32_t L_21;
		L_21 = Sorting_Partition_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5B1882A69C494B64F1EA761E21D0018C1D6AB6E8(L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_21;
		// if (pivot >= 1)
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		// QuickSort<T>(data, start, pivot, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_24 = ___data0;
		int32_t L_25 = ___start1;
		int32_t L_26 = V_4;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_27 = ___compare3;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_006d:
	{
		// if (pivot + 1 < end)
		int32_t L_28 = V_4;
		int32_t L_29 = ___end2;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_28, 1))) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		// QuickSort<T>(data, pivot + 1, end, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_31 = ___data0;
		int32_t L_32 = V_4;
		int32_t L_33 = ___end2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_34 = ___compare3;
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAA6CA24576E19917524BFD6BE7AC3ACF4A18B570(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0087:
	{
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisIl2CppFullySharedGenericAny_m64F66E9A59079142461E29BCD21FE90D0C81BB59_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___data0, int32_t ___start1, int32_t ___end2, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___compare3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		// int diff = end - start;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if (diff < 1)
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		goto IL_0088;
	}

IL_000f:
	{
		// if (diff < 8)
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)8))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// InsertionSort(data, start, end, compare);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___data0;
		int32_t L_7 = ___start1;
		int32_t L_8 = ___end2;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_9 = ___compare3;
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_6, L_7, L_8, L_9);
		// return;
		goto IL_0088;
	}

IL_0024:
	{
		// Assertions.Assert.IsTrue((uint)start < data.Length);
		int32_t L_10 = ___start1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___data0;
		NullCheck(L_11);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_10))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0), NULL);
		// Assertions.Assert.IsTrue((uint)end < data.Length); // end == inclusive
		int32_t L_12 = ___end2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___data0;
		NullCheck(L_13);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_12))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0), NULL);
		// if (start < end)
		int32_t L_14 = ___start1;
		int32_t L_15 = ___end2;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		// int pivot = Partition<T>(data, start, end, compare);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___data0;
		int32_t L_18 = ___start1;
		int32_t L_19 = ___end2;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_20 = ___compare3;
		int32_t L_21;
		L_21 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_17, L_18, L_19, L_20);
		V_4 = L_21;
		// if (pivot >= 1)
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		// QuickSort<T>(data, start, pivot, compare);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = ___data0;
		int32_t L_25 = ___start1;
		int32_t L_26 = V_4;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_27 = ___compare3;
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_24, L_25, L_26, L_27);
	}

IL_006d:
	{
		// if (pivot + 1 < end)
		int32_t L_28 = V_4;
		int32_t L_29 = ___end2;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_28, 1))) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		// QuickSort<T>(data, pivot + 1, end, compare);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = ___data0;
		int32_t L_32 = V_4;
		int32_t L_33 = ___end2;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_34 = ___compare3;
		InvokerActionInvoker4< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, L_34);
	}

IL_0087:
	{
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/Sorting::QuickSort<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>(T[],System.Int32,System.Int32,System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C_gshared (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___data0, int32_t ___start1, int32_t ___end2, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		// int diff = end - start;
		int32_t L_0 = ___end2;
		int32_t L_1 = ___start1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if (diff < 1)
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		goto IL_0088;
	}

IL_000f:
	{
		// if (diff < 8)
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)8))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// InsertionSort(data, start, end, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___data0;
		int32_t L_7 = ___start1;
		int32_t L_8 = ___end2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_9 = ___compare3;
		Sorting_InsertionSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m50C92303E813A7BFD084FB309E5FB9937C8F2065(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return;
		goto IL_0088;
	}

IL_0024:
	{
		// Assertions.Assert.IsTrue((uint)start < data.Length);
		int32_t L_10 = ___start1;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_11 = ___data0;
		NullCheck(L_11);
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_10))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0), NULL);
		// Assertions.Assert.IsTrue((uint)end < data.Length); // end == inclusive
		int32_t L_12 = ___end2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_13 = ___data0;
		NullCheck(L_13);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((int64_t)((int64_t)(uint64_t)((uint32_t)L_12))) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0), NULL);
		// if (start < end)
		int32_t L_14 = ___start1;
		int32_t L_15 = ___end2;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		// int pivot = Partition<T>(data, start, end, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_17 = ___data0;
		int32_t L_18 = ___start1;
		int32_t L_19 = ___end2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_20 = ___compare3;
		int32_t L_21;
		L_21 = Sorting_Partition_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_m0E79CA1E375645FFDF3E1506F789825A9A6D3D95(L_17, L_18, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_4 = L_21;
		// if (pivot >= 1)
		int32_t L_22 = V_4;
		V_5 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_006d;
		}
	}
	{
		// QuickSort<T>(data, start, pivot, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_24 = ___data0;
		int32_t L_25 = ___start1;
		int32_t L_26 = V_4;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_27 = ___compare3;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_006d:
	{
		// if (pivot + 1 < end)
		int32_t L_28 = V_4;
		int32_t L_29 = ___end2;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_28, 1))) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0087;
		}
	}
	{
		// QuickSort<T>(data, pivot + 1, end, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_31 = ___data0;
		int32_t L_32 = V_4;
		int32_t L_33 = ___end2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_34 = ___compare3;
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mADD51465439832E9BCC31668A2DE42CFCCA07F9C(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), L_33, L_34, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0087:
	{
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::AddNewRenderGraphResource<System.Object>(ResType&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisRuntimeObject_mB9040DF97633813729CADB454AAEAF31E23C7E91_gshared (RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE* __this, RuntimeObject** ___outRes0, bool ___pooledResource1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject** G_B4_0 = NULL;
	RuntimeObject** G_B3_0 = NULL;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* G_B5_0 = NULL;
	RuntimeObject** G_B5_1 = NULL;
	{
		// int result = resourceArray.size;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_0 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_0, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		V_0 = L_1;
		// resourceArray.Resize(resourceArray.size + 1, true);
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_2 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_3 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_3, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		NullCheck(L_2);
		DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1(L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), (bool)1, DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		// if (resourceArray[result] == null)
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_5 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_7;
		L_7 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_5, L_6, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_8 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_7);
		V_1 = (bool)((((RuntimeObject*)(IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// resourceArray[result] = new ResType();
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_10 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_12;
		L_12 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_10, L_11, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		RuntimeObject* L_13;
		L_13 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 0));
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_13);
	}

IL_0052:
	{
		// outRes = resourceArray[result] as ResType;
		RuntimeObject** L_14 = ___outRes0;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_15 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_17;
		L_17 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_15, L_16, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_18 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_17);
		*(RuntimeObject**)L_14 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1))));
		// outRes.Reset(pooledResource ? pool : null);
		RuntimeObject** L_19 = ___outRes0;
		bool L_20 = ___pooledResource1;
		G_B3_0 = L_19;
		if (L_20)
		{
			G_B4_0 = L_19;
			goto IL_0076;
		}
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_007c;
	}

IL_0076:
	{
		IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* L_21 = (IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)__this->___pool_2;
		G_B5_0 = L_21;
		G_B5_1 = G_B4_0;
	}

IL_007c:
	{
		NullCheck((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1));
		VirtualActionInvoker1< IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* >::Invoke(4 /* System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::Reset(UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool) */, (IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1), G_B5_0);
		// return result;
		int32_t L_22 = V_0;
		V_2 = L_22;
		goto IL_008c;
	}

IL_008c:
	{
		// }
		int32_t L_23 = V_2;
		return L_23;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Double,System.Int64>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m916056C6D56ED56A8C621B65387940440621885B_gshared (double* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	double* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		V_2 = ((int64_t)L_2);
		// long offset = baseIndex * scale;
		int64_t L_3 = V_2;
		int32_t L_4 = ___scale3;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_5 = ___base_addr1;
		int64_t L_6 = V_3;
		V_4 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_7 = ___mask5;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		int64_t* L_8 = ___mask5;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int64_t);
		int64_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		// dptr[i] = *mem_addr;
		double* L_14 = ___dptr0;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(double);
		double* L_17 = V_4;
		double L_18 = (*(double*)L_17);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0065:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_20 = V_1;
		int32_t L_21 = ___n4;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Double,System.Int64>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9A1DADAD9E0F3273D16A73D963070B45A72D049C_gshared (double* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	double* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		V_2 = L_2;
		// long offset = baseIndex * scale;
		int64_t L_3 = V_2;
		int32_t L_4 = ___scale3;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_5 = ___base_addr1;
		int64_t L_6 = V_3;
		V_4 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_7 = ___mask5;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		int64_t* L_8 = ___mask5;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int64_t);
		int64_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		// dptr[i] = *mem_addr;
		double* L_14 = ___dptr0;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(double);
		double* L_17 = V_4;
		double L_18 = (*(double*)L_17);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0064:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_20 = V_1;
		int32_t L_21 = ___n4;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int32,System.Int32>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94F8FFCEA63E0174FFF11E533C79D165E357A272_gshared (int32_t* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		V_2 = ((int64_t)L_2);
		// long offset = baseIndex * scale;
		int64_t L_3 = V_2;
		int32_t L_4 = ___scale3;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_5 = ___base_addr1;
		int64_t L_6 = V_3;
		V_4 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_7 = ___mask5;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t* L_8 = ___mask5;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int32_t);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		// dptr[i] = *mem_addr;
		int32_t* L_14 = ___dptr0;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(int32_t);
		int32_t* L_17 = V_4;
		int32_t L_18 = (*(int32_t*)L_17);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0065:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_20 = V_1;
		int32_t L_21 = ___n4;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int32,System.Int32>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m75E4DC1575D64C468E29623C2A27062E59A006BB_gshared (int32_t* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		V_2 = L_2;
		// long offset = baseIndex * scale;
		int64_t L_3 = V_2;
		int32_t L_4 = ___scale3;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_5 = ___base_addr1;
		int64_t L_6 = V_3;
		V_4 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_7 = ___mask5;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t* L_8 = ___mask5;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int32_t);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		// dptr[i] = *mem_addr;
		int32_t* L_14 = ___dptr0;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(int32_t);
		int32_t* L_17 = V_4;
		int32_t L_18 = (*(int32_t*)L_17);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0064:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_20 = V_1;
		int32_t L_21 = ___n4;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int64,System.Int64>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8F3DA1C7D0D9C656F6FB3CCC2747A02B6BDF9E8E_gshared (int64_t* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		V_2 = ((int64_t)L_2);
		// long offset = baseIndex * scale;
		int64_t L_3 = V_2;
		int32_t L_4 = ___scale3;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_5 = ___base_addr1;
		int64_t L_6 = V_3;
		V_4 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_7 = ___mask5;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		int64_t* L_8 = ___mask5;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int64_t);
		int64_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		// dptr[i] = *mem_addr;
		int64_t* L_14 = ___dptr0;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(int64_t);
		int64_t* L_17 = V_4;
		int64_t L_18 = (*(int64_t*)L_17);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0065:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_20 = V_1;
		int32_t L_21 = ___n4;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int64,System.Int64>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16B5D468730F5B7AFE121394A46B16F4E3F663CB_gshared (int64_t* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		V_2 = L_2;
		// long offset = baseIndex * scale;
		int64_t L_3 = V_2;
		int32_t L_4 = ___scale3;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_5 = ___base_addr1;
		int64_t L_6 = V_3;
		V_4 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_7 = ___mask5;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		int64_t* L_8 = ___mask5;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int64_t);
		int64_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		// dptr[i] = *mem_addr;
		int64_t* L_14 = ___dptr0;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(int64_t);
		int64_t* L_17 = V_4;
		int64_t L_18 = (*(int64_t*)L_17);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0064:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_20 = V_1;
		int32_t L_21 = ___n4;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Single,System.Int32>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD6B0D9436820A5A075E4DEDAC5F272776C647AD_gshared (float* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	float* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		V_2 = ((int64_t)L_2);
		// long offset = baseIndex * scale;
		int64_t L_3 = V_2;
		int32_t L_4 = ___scale3;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_5 = ___base_addr1;
		int64_t L_6 = V_3;
		V_4 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_7 = ___mask5;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		int32_t* L_8 = ___mask5;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int32_t);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		// dptr[i] = *mem_addr;
		float* L_14 = ___dptr0;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(float);
		float* L_17 = V_4;
		float L_18 = (*(float*)L_17);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0065:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_20 = V_1;
		int32_t L_21 = ___n4;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Single,System.Int32>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m089FE6B150D3770B7C1109D4010EFBE72C0E985B_gshared (float* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	float* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		V_2 = L_2;
		// long offset = baseIndex * scale;
		int64_t L_3 = V_2;
		int32_t L_4 = ___scale3;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_5 = ___base_addr1;
		int64_t L_6 = V_3;
		V_4 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_7 = ___mask5;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t* L_8 = ___mask5;
		int32_t L_9 = V_1;
		uint32_t L_10 = sizeof(int32_t);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = ((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0064;
		}
	}
	{
		// dptr[i] = *mem_addr;
		float* L_14 = ___dptr0;
		int32_t L_15 = V_1;
		uint32_t L_16 = sizeof(float);
		float* L_17 = V_4;
		float L_18 = (*(float*)L_17);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))) = L_18;
	}

IL_0064:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0069:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_20 = V_1;
		int32_t L_21 = ___n4;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m78BBC4DBE234DA027814A059C7A569C168B14265_gshared (Il2CppFullySharedGenericStruct* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, Il2CppFullySharedGenericStruct* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(U)
	const uint32_t SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	// sizeof(T)
	const uint32_t SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// T
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
	// U
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	memset(V_0, 0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		V_2 = ((int64_t)L_2);
		// long offset = baseIndex * scale;
		int64_t L_3 = V_2;
		int32_t L_4 = ___scale3;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_5 = ___base_addr1;
		int64_t L_6 = V_3;
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		Il2CppFullySharedGenericStruct* L_7 = ___mask5;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = ___mask5;
		int32_t L_9 = V_1;
		uint32_t L_10 = SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11);
		G_B4_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		// dptr[i] = *mem_addr;
		Il2CppFullySharedGenericStruct* L_15 = ___dptr0;
		int32_t L_16 = V_1;
		uint32_t L_17 = SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314;
		Il2CppFullySharedGenericStruct* L_18 = V_4;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), L_19, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (void*)L_19);
	}

IL_0065:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_21 = V_1;
		int32_t L_22 = ___n4;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m93179BB5AA8A484650210DDAA1EB8D4319DE5686_gshared (Il2CppFullySharedGenericStruct* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, Il2CppFullySharedGenericStruct* ___mask5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(U)
	const uint32_t SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	// sizeof(T)
	const uint32_t SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// T
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
	// U
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	memset(V_0, 0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		V_2 = L_2;
		// long offset = baseIndex * scale;
		int64_t L_3 = V_2;
		int32_t L_4 = ___scale3;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_5 = ___base_addr1;
		int64_t L_6 = V_3;
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		Il2CppFullySharedGenericStruct* L_7 = ___mask5;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = ___mask5;
		int32_t L_9 = V_1;
		uint32_t L_10 = SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11);
		G_B4_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		// dptr[i] = *mem_addr;
		Il2CppFullySharedGenericStruct* L_15 = ___dptr0;
		int32_t L_16 = V_1;
		uint32_t L_17 = SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8;
		Il2CppFullySharedGenericStruct* L_18 = V_4;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), L_19, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (void*)L_19);
	}

IL_0064:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0069:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_21 = V_1;
		int32_t L_22 = ___n4;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	bool V_8 = false;
	uint8_t V_9 = 0x0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	uint8_t V_43 = 0x0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		// T aCh = a[i];
		uint8_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_0033:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		// T bCh = b[j];
		uint8_t* L_7 = ___b2;
		int32_t L_8 = V_4;
		uint32_t L_9 = sizeof(uint8_t);
		uint8_t L_10 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))));
		V_9 = L_10;
		// if (j == blen)
		int32_t L_11 = V_4;
		int32_t L_12 = ___blen3;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_005e:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_14 = ___imm85;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_17;
		L_17 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_18 = V_7;
		uint8_t L_19 = V_9;
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_17, L_18, L_19);
		V_10 = L_20;
		// if (!aInvalid && bInvalid)
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		// else if (aInvalid && !bInvalid)
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		// else if (aInvalid && bInvalid)
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
	}

IL_00c4:
	{
		// break;
		goto IL_01c2;
	}

IL_00c9:
	{
		// if (0 == (i & 1))
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_32;
		L_32 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint8_t L_33 = V_9;
		uint8_t L_34 = V_7;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Byte>::Compare(T,T) */, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_36;
		L_36 = Comparer_1_get_Default_m84FF70BAB6A30BC2A0EABE8B0E58FCBD8F40C8FB(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint8_t L_37 = V_9;
		uint8_t L_38 = V_7;
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Byte>::Compare(T,T) */, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		// if (!aInvalid && bInvalid)
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		// else if (aInvalid && !bInvalid)
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		// else if (aInvalid && bInvalid)
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
	}

IL_0135:
	{
		// break;
		goto IL_01c2;
	}

IL_013a:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_49;
		L_49 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_50 = V_7;
		uint8_t L_51 = V_9;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_49, L_50, L_51);
		V_10 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		// else if (aInvalid && !bInvalid)
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		// else if (aInvalid && bInvalid)
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
	}

IL_017c:
	{
		// break;
		goto IL_01c2;
	}

IL_017e:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_62;
		L_62 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t L_63 = V_7;
		uint8_t L_64 = V_9;
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_62, L_63, L_64);
		V_10 = L_65;
		// if (!aInvalid && bInvalid)
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		// else if (aInvalid && bInvalid)
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
	}

IL_01c0:
	{
		// break;
		goto IL_01c2;
	}

IL_01c2:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_79 = V_4;
		int32_t L_80 = ___len4;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_83 = V_3;
		int32_t L_84 = ___len4;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_86 = ___imm85;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		G_B60_0 = L_89;
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_95 = V_4;
		int32_t L_96 = ___len4;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_99 = V_3;
		int32_t L_100 = ___len4;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_0270:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		G_B70_0 = L_102;
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		G_B71_0 = G_B70_0;
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_111 = V_4;
		int32_t L_112 = ___len4;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		int32_t L_116 = ___len4;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_02cb:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		G_B80_0 = L_118;
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_124 = V_3;
		int32_t L_125 = ___len4;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_02fb:
	{
		// intRes1 = allOnes;
		int32_t L_127 = ___allOnes6;
		V_6 = L_127;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		// int k = i;
		int32_t L_128 = V_3;
		V_36 = L_128;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		// k += 1;
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_137 = V_4;
		int32_t L_138 = ___len4;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_142 = V_3;
		int32_t L_143 = ___len4;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_035a:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_145 = ___imm85;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_147 = ___imm85;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_149;
		L_149 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_150 = ___b2;
		int32_t L_151 = V_3;
		uint32_t L_152 = sizeof(uint8_t);
		uint8_t L_153 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))));
		il2cpp_codegen_initobj((&V_43), sizeof(uint8_t));
		uint8_t L_154 = V_43;
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_03b3:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_172 = V_3;
		int32_t L_173 = ___len4;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		// return intRes2;
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		// }
		int32_t L_176 = V_46;
		return L_176;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	bool V_8 = false;
	int16_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	int16_t V_43 = 0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		// T aCh = a[i];
		int16_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int16_t);
		int16_t L_3 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_0033:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		// T bCh = b[j];
		int16_t* L_7 = ___b2;
		int32_t L_8 = V_4;
		uint32_t L_9 = sizeof(int16_t);
		int16_t L_10 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))));
		V_9 = L_10;
		// if (j == blen)
		int32_t L_11 = V_4;
		int32_t L_12 = ___blen3;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_005e:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_14 = ___imm85;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_17;
		L_17 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_18 = V_7;
		int16_t L_19 = V_9;
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_17, L_18, L_19);
		V_10 = L_20;
		// if (!aInvalid && bInvalid)
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		// else if (aInvalid && !bInvalid)
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		// else if (aInvalid && bInvalid)
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
	}

IL_00c4:
	{
		// break;
		goto IL_01c2;
	}

IL_00c9:
	{
		// if (0 == (i & 1))
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_32;
		L_32 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		int16_t L_33 = V_9;
		int16_t L_34 = V_7;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int16>::Compare(T,T) */, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_36;
		L_36 = Comparer_1_get_Default_mE45154132033749FD101CB1689E0375B42C4B407(il2cpp_rgctx_method(method->rgctx_data, 6));
		int16_t L_37 = V_9;
		int16_t L_38 = V_7;
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int16>::Compare(T,T) */, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		// if (!aInvalid && bInvalid)
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		// else if (aInvalid && !bInvalid)
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		// else if (aInvalid && bInvalid)
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
	}

IL_0135:
	{
		// break;
		goto IL_01c2;
	}

IL_013a:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_49;
		L_49 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_50 = V_7;
		int16_t L_51 = V_9;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_49, L_50, L_51);
		V_10 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		// else if (aInvalid && !bInvalid)
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		// else if (aInvalid && bInvalid)
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
	}

IL_017c:
	{
		// break;
		goto IL_01c2;
	}

IL_017e:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_62;
		L_62 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t L_63 = V_7;
		int16_t L_64 = V_9;
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_62, L_63, L_64);
		V_10 = L_65;
		// if (!aInvalid && bInvalid)
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		// else if (aInvalid && bInvalid)
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
	}

IL_01c0:
	{
		// break;
		goto IL_01c2;
	}

IL_01c2:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_79 = V_4;
		int32_t L_80 = ___len4;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_83 = V_3;
		int32_t L_84 = ___len4;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_86 = ___imm85;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		G_B60_0 = L_89;
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_95 = V_4;
		int32_t L_96 = ___len4;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_99 = V_3;
		int32_t L_100 = ___len4;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_0270:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		G_B70_0 = L_102;
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		G_B71_0 = G_B70_0;
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_111 = V_4;
		int32_t L_112 = ___len4;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		int32_t L_116 = ___len4;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_02cb:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		G_B80_0 = L_118;
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_124 = V_3;
		int32_t L_125 = ___len4;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_02fb:
	{
		// intRes1 = allOnes;
		int32_t L_127 = ___allOnes6;
		V_6 = L_127;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		// int k = i;
		int32_t L_128 = V_3;
		V_36 = L_128;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		// k += 1;
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_137 = V_4;
		int32_t L_138 = ___len4;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_142 = V_3;
		int32_t L_143 = ___len4;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_035a:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_145 = ___imm85;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_147 = ___imm85;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_149;
		L_149 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int16_t* L_150 = ___b2;
		int32_t L_151 = V_3;
		uint32_t L_152 = sizeof(int16_t);
		int16_t L_153 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))));
		il2cpp_codegen_initobj((&V_43), sizeof(int16_t));
		int16_t L_154 = V_43;
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_03b3:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_172 = V_3;
		int32_t L_173 = ___len4;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		// return intRes2;
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		// }
		int32_t L_176 = V_46;
		return L_176;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int8_t V_7 = 0x0;
	bool V_8 = false;
	int8_t V_9 = 0x0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	int8_t V_43 = 0x0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		// T aCh = a[i];
		int8_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int8_t);
		int8_t L_3 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_0033:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		// T bCh = b[j];
		int8_t* L_7 = ___b2;
		int32_t L_8 = V_4;
		uint32_t L_9 = sizeof(int8_t);
		int8_t L_10 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))));
		V_9 = L_10;
		// if (j == blen)
		int32_t L_11 = V_4;
		int32_t L_12 = ___blen3;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_005e:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_14 = ___imm85;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_17;
		L_17 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_18 = V_7;
		int8_t L_19 = V_9;
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_17, L_18, L_19);
		V_10 = L_20;
		// if (!aInvalid && bInvalid)
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		// else if (aInvalid && !bInvalid)
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		// else if (aInvalid && bInvalid)
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
	}

IL_00c4:
	{
		// break;
		goto IL_01c2;
	}

IL_00c9:
	{
		// if (0 == (i & 1))
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_32;
		L_32 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		int8_t L_33 = V_9;
		int8_t L_34 = V_7;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.SByte>::Compare(T,T) */, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_36;
		L_36 = Comparer_1_get_Default_m84816461184ACF98D5F66D45F43652587DA47B4F(il2cpp_rgctx_method(method->rgctx_data, 6));
		int8_t L_37 = V_9;
		int8_t L_38 = V_7;
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.SByte>::Compare(T,T) */, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		// if (!aInvalid && bInvalid)
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		// else if (aInvalid && !bInvalid)
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		// else if (aInvalid && bInvalid)
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
	}

IL_0135:
	{
		// break;
		goto IL_01c2;
	}

IL_013a:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_49;
		L_49 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_50 = V_7;
		int8_t L_51 = V_9;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_49, L_50, L_51);
		V_10 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		// else if (aInvalid && !bInvalid)
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		// else if (aInvalid && bInvalid)
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
	}

IL_017c:
	{
		// break;
		goto IL_01c2;
	}

IL_017e:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_62;
		L_62 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t L_63 = V_7;
		int8_t L_64 = V_9;
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_62, L_63, L_64);
		V_10 = L_65;
		// if (!aInvalid && bInvalid)
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		// else if (aInvalid && bInvalid)
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
	}

IL_01c0:
	{
		// break;
		goto IL_01c2;
	}

IL_01c2:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_79 = V_4;
		int32_t L_80 = ___len4;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_83 = V_3;
		int32_t L_84 = ___len4;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_86 = ___imm85;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		G_B60_0 = L_89;
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_95 = V_4;
		int32_t L_96 = ___len4;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_99 = V_3;
		int32_t L_100 = ___len4;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_0270:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		G_B70_0 = L_102;
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		G_B71_0 = G_B70_0;
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_111 = V_4;
		int32_t L_112 = ___len4;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		int32_t L_116 = ___len4;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_02cb:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		G_B80_0 = L_118;
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_124 = V_3;
		int32_t L_125 = ___len4;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_02fb:
	{
		// intRes1 = allOnes;
		int32_t L_127 = ___allOnes6;
		V_6 = L_127;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		// int k = i;
		int32_t L_128 = V_3;
		V_36 = L_128;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		// k += 1;
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_137 = V_4;
		int32_t L_138 = ___len4;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_142 = V_3;
		int32_t L_143 = ___len4;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_035a:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_145 = ___imm85;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_147 = ___imm85;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_149;
		L_149 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int8_t* L_150 = ___b2;
		int32_t L_151 = V_3;
		uint32_t L_152 = sizeof(int8_t);
		int8_t L_153 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))));
		il2cpp_codegen_initobj((&V_43), sizeof(int8_t));
		int8_t L_154 = V_43;
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_03b3:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_172 = V_3;
		int32_t L_173 = ___len4;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		// return intRes2;
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		// }
		int32_t L_176 = V_46;
		return L_176;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	bool V_8 = false;
	uint16_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	uint16_t V_43 = 0;
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		// T aCh = a[i];
		uint16_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_0033:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		// T bCh = b[j];
		uint16_t* L_7 = ___b2;
		int32_t L_8 = V_4;
		uint32_t L_9 = sizeof(uint16_t);
		uint16_t L_10 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))));
		V_9 = L_10;
		// if (j == blen)
		int32_t L_11 = V_4;
		int32_t L_12 = ___blen3;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_005e:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_14 = ___imm85;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_17;
		L_17 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_18 = V_7;
		uint16_t L_19 = V_9;
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_17, L_18, L_19);
		V_10 = L_20;
		// if (!aInvalid && bInvalid)
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		// else if (aInvalid && !bInvalid)
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		// else if (aInvalid && bInvalid)
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
	}

IL_00c4:
	{
		// break;
		goto IL_01c2;
	}

IL_00c9:
	{
		// if (0 == (i & 1))
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_32;
		L_32 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_33 = V_9;
		uint16_t L_34 = V_7;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.UInt16>::Compare(T,T) */, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_36;
		L_36 = Comparer_1_get_Default_m5B4E9A09E85C87692450A9D2BC5C99C3E5DC1E36(il2cpp_rgctx_method(method->rgctx_data, 6));
		uint16_t L_37 = V_9;
		uint16_t L_38 = V_7;
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.UInt16>::Compare(T,T) */, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		// if (!aInvalid && bInvalid)
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		// else if (aInvalid && !bInvalid)
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		// else if (aInvalid && bInvalid)
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
	}

IL_0135:
	{
		// break;
		goto IL_01c2;
	}

IL_013a:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_49;
		L_49 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_50 = V_7;
		uint16_t L_51 = V_9;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_49, L_50, L_51);
		V_10 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		// else if (aInvalid && !bInvalid)
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		// else if (aInvalid && bInvalid)
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
	}

IL_017c:
	{
		// break;
		goto IL_01c2;
	}

IL_017e:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_62;
		L_62 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t L_63 = V_7;
		uint16_t L_64 = V_9;
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_62, L_63, L_64);
		V_10 = L_65;
		// if (!aInvalid && bInvalid)
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		// else if (aInvalid && bInvalid)
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
	}

IL_01c0:
	{
		// break;
		goto IL_01c2;
	}

IL_01c2:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_79 = V_4;
		int32_t L_80 = ___len4;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_83 = V_3;
		int32_t L_84 = ___len4;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_86 = ___imm85;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		G_B60_0 = L_89;
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_95 = V_4;
		int32_t L_96 = ___len4;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_99 = V_3;
		int32_t L_100 = ___len4;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_0270:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		G_B70_0 = L_102;
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		G_B71_0 = G_B70_0;
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_111 = V_4;
		int32_t L_112 = ___len4;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		int32_t L_116 = ___len4;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_02cb:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		G_B80_0 = L_118;
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_124 = V_3;
		int32_t L_125 = ___len4;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_02fb:
	{
		// intRes1 = allOnes;
		int32_t L_127 = ___allOnes6;
		V_6 = L_127;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		// int k = i;
		int32_t L_128 = V_3;
		V_36 = L_128;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		// k += 1;
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_137 = V_4;
		int32_t L_138 = ___len4;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_142 = V_3;
		int32_t L_143 = ___len4;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_035a:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_145 = ___imm85;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_147 = ___imm85;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_149;
		L_149 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		uint16_t* L_150 = ___b2;
		int32_t L_151 = V_3;
		uint32_t L_152 = sizeof(uint16_t);
		uint16_t L_153 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))));
		il2cpp_codegen_initobj((&V_43), sizeof(uint16_t));
		uint16_t L_154 = V_43;
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_03b3:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_172 = V_3;
		int32_t L_173 = ___len4;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		// return intRes2;
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		// }
		int32_t L_176 = V_46;
		return L_176;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___a0, int32_t ___alen1, Il2CppFullySharedGenericStruct* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_10 = L_3;
	const Il2CppFullySharedGenericStruct L_18 = L_3;
	const Il2CppFullySharedGenericStruct L_33 = L_3;
	const Il2CppFullySharedGenericStruct L_37 = L_3;
	const Il2CppFullySharedGenericStruct L_50 = L_3;
	const Il2CppFullySharedGenericStruct L_63 = L_3;
	const Il2CppFullySharedGenericStruct L_153 = L_3;
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_34 = L_19;
	const Il2CppFullySharedGenericStruct L_38 = L_19;
	const Il2CppFullySharedGenericStruct L_51 = L_19;
	const Il2CppFullySharedGenericStruct L_64 = L_19;
	const Il2CppFullySharedGenericStruct L_154 = L_19;
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_7, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_8 = false;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_9, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	Il2CppFullySharedGenericStruct V_43 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_43, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		// T aCh = a[i];
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_3, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_7, L_3, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_0033:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		// T bCh = b[j];
		Il2CppFullySharedGenericStruct* L_7 = ___b2;
		int32_t L_8 = V_4;
		uint32_t L_9 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_10, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_9, L_10, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		// if (j == blen)
		int32_t L_11 = V_4;
		int32_t L_12 = ___blen3;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_005e:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_14 = ___imm85;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_17;
		L_17 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		il2cpp_codegen_memcpy(L_18, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_19, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_17, L_18, L_19);
		V_10 = L_20;
		// if (!aInvalid && bInvalid)
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		// else if (aInvalid && !bInvalid)
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		// else if (aInvalid && bInvalid)
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
	}

IL_00c4:
	{
		// break;
		goto IL_01c2;
	}

IL_00c9:
	{
		// if (0 == (i & 1))
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_32;
		L_32 = InvokerFuncInvoker0< Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL);
		il2cpp_codegen_memcpy(L_33, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_34, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Compare(T,T) */, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_36;
		L_36 = InvokerFuncInvoker0< Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL);
		il2cpp_codegen_memcpy(L_37, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_38, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Compare(T,T) */, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		// if (!aInvalid && bInvalid)
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		// else if (aInvalid && !bInvalid)
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		// else if (aInvalid && bInvalid)
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
	}

IL_0135:
	{
		// break;
		goto IL_01c2;
	}

IL_013a:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_49;
		L_49 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		il2cpp_codegen_memcpy(L_50, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_51, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_49, L_50, L_51);
		V_10 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		// else if (aInvalid && !bInvalid)
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		// else if (aInvalid && bInvalid)
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
	}

IL_017c:
	{
		// break;
		goto IL_01c2;
	}

IL_017e:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_62;
		L_62 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		il2cpp_codegen_memcpy(L_63, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_64, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_62, L_63, L_64);
		V_10 = L_65;
		// if (!aInvalid && bInvalid)
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		// else if (aInvalid && bInvalid)
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
	}

IL_01c0:
	{
		// break;
		goto IL_01c2;
	}

IL_01c2:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_79 = V_4;
		int32_t L_80 = ___len4;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_83 = V_3;
		int32_t L_84 = ___len4;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_86 = ___imm85;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		G_B60_0 = L_89;
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_95 = V_4;
		int32_t L_96 = ___len4;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_99 = V_3;
		int32_t L_100 = ___len4;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_0270:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		G_B70_0 = L_102;
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		G_B71_0 = G_B70_0;
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_111 = V_4;
		int32_t L_112 = ___len4;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		int32_t L_116 = ___len4;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_02cb:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		G_B80_0 = L_118;
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_124 = V_3;
		int32_t L_125 = ___len4;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_02fb:
	{
		// intRes1 = allOnes;
		int32_t L_127 = ___allOnes6;
		V_6 = L_127;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		// int k = i;
		int32_t L_128 = V_3;
		V_36 = L_128;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		// k += 1;
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_137 = V_4;
		int32_t L_138 = ___len4;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_142 = V_3;
		int32_t L_143 = ___len4;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_035a:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_145 = ___imm85;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_147 = ___imm85;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_149;
		L_149 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		Il2CppFullySharedGenericStruct* L_150 = ___b2;
		int32_t L_151 = V_3;
		uint32_t L_152 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_153, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_154, V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_03b3:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_172 = V_3;
		int32_t L_173 = ___len4;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		// return intRes2;
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		// }
		int32_t L_176 = V_46;
		return L_176;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Byte>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0;
		L_0 = EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint8_t);
		uint8_t L_4 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_2), sizeof(uint8_t));
		uint8_t L_5 = V_2;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// return i;
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_10 = V_0;
		int32_t L_11 = ___max1;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// return max;
		int32_t L_13 = ___max1;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		int32_t L_14 = V_3;
		return L_14;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Int16>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	int16_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int16_t);
		int16_t L_4 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_2), sizeof(int16_t));
		int16_t L_5 = V_2;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// return i;
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_10 = V_0;
		int32_t L_11 = ___max1;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// return max;
		int32_t L_13 = ___max1;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		int32_t L_14 = V_3;
		return L_14;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.SByte>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	int8_t V_2 = 0x0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0;
		L_0 = EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int8_t);
		int8_t L_4 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_2), sizeof(int8_t));
		int8_t L_5 = V_2;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// return i;
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_10 = V_0;
		int32_t L_11 = ___max1;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// return max;
		int32_t L_13 = ___max1;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		int32_t L_14 = V_3;
		return L_14;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.UInt16>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	bool V_1 = false;
	uint16_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0;
		L_0 = EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint16_t);
		uint16_t L_4 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_2), sizeof(uint16_t));
		uint16_t L_5 = V_2;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// return i;
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_10 = V_0;
		int32_t L_11 = ___max1;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// return max;
		int32_t L_13 = ___max1;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		int32_t L_14 = V_3;
		return L_14;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// T
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	memset(V_2, 0, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		Il2CppFullySharedGenericStruct* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_memcpy(L_5, V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// return i;
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_10 = V_0;
		int32_t L_11 = ___max1;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// return max;
		int32_t L_13 = ___max1;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		int32_t L_14 = V_3;
		return L_14;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Byte>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___len0, int32_t ___imm81, uint8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_2 = (uint8_t*)((uintptr_t)L_2);
		// for (int i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_3 = ___intRes23;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// maskDst[i] = allOnesT;
		uint8_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(uint8_t);
		uint8_t L_9 = ___allOnesT2;
		*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))) = L_9;
		goto IL_005c;
	}

IL_0049:
	{
		// maskDst[i] = default(T);
		uint8_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = sizeof(uint8_t);
		il2cpp_codegen_initobj(((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), sizeof(uint8_t));
	}

IL_005c:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_14 = V_3;
		int32_t L_15 = ___len0;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		// result.SInt0 = intRes2;
		int32_t L_17 = ___intRes23;
		(&V_0)->___SInt0_52 = L_17;
	}

IL_0078:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Int16>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___len0, int32_t ___imm81, int16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int16_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_2 = (int16_t*)((uintptr_t)L_2);
		// for (int i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_3 = ___intRes23;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// maskDst[i] = allOnesT;
		int16_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(int16_t);
		int16_t L_9 = ___allOnesT2;
		*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))) = L_9;
		goto IL_005c;
	}

IL_0049:
	{
		// maskDst[i] = default(T);
		int16_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = sizeof(int16_t);
		il2cpp_codegen_initobj(((int16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), sizeof(int16_t));
	}

IL_005c:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_14 = V_3;
		int32_t L_15 = ___len0;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		// result.SInt0 = intRes2;
		int32_t L_17 = ___intRes23;
		(&V_0)->___SInt0_52 = L_17;
	}

IL_0078:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.SByte>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___len0, int32_t ___imm81, int8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_2 = (int8_t*)((uintptr_t)L_2);
		// for (int i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_3 = ___intRes23;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// maskDst[i] = allOnesT;
		int8_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(int8_t);
		int8_t L_9 = ___allOnesT2;
		*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))) = L_9;
		goto IL_005c;
	}

IL_0049:
	{
		// maskDst[i] = default(T);
		int8_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = sizeof(int8_t);
		il2cpp_codegen_initobj(((int8_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), sizeof(int8_t));
	}

IL_005c:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_14 = V_3;
		int32_t L_15 = ___len0;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		// result.SInt0 = intRes2;
		int32_t L_17 = ___intRes23;
		(&V_0)->___SInt0_52 = L_17;
	}

IL_0078:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.UInt16>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___len0, int32_t ___imm81, uint16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	uint16_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_2 = (uint16_t*)((uintptr_t)L_2);
		// for (int i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_3 = ___intRes23;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// maskDst[i] = allOnesT;
		uint16_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(uint16_t);
		uint16_t L_9 = ___allOnesT2;
		*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))) = L_9;
		goto IL_005c;
	}

IL_0049:
	{
		// maskDst[i] = default(T);
		uint16_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = sizeof(uint16_t);
		il2cpp_codegen_initobj(((uint16_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), sizeof(uint16_t));
	}

IL_005c:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_14 = V_3;
		int32_t L_15 = ___len0;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		// result.SInt0 = intRes2;
		int32_t L_17 = ___intRes23;
		(&V_0)->___SInt0_52 = L_17;
	}

IL_0078:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___len0, int32_t ___imm81, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_2 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_2);
		// for (int i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_3 = ___intRes23;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// maskDst[i] = allOnesT;
		Il2CppFullySharedGenericStruct* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_memcpy(L_9, ___allOnesT2, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), L_9, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), (void*)L_9);
		goto IL_005c;
	}

IL_0049:
	{
		// maskDst[i] = default(T);
		Il2CppFullySharedGenericStruct* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_initobj(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	}

IL_005c:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_14 = V_3;
		int32_t L_15 = ___len0;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		// result.SInt0 = intRes2;
		int32_t L_17 = ___intRes23;
		(&V_0)->___SInt0_52 = L_17;
	}

IL_0078:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4107C2F2DB7508841779CE414BD21B61FA3183F_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint8_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m797C4B561EC2527267C18CF422EBBD9FCDD306EF_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int16_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8934296ABE51C76314606C484F93554C529BD77A_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int8_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6A20624B95FD608D46A450719A26FC173F4C0780_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint16_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisIl2CppFullySharedGenericStruct_m92A1CC07F00E8D1EFF164A7AAA2CEF3A90BC8071_gshared (Il2CppFullySharedGenericStruct* ___a0, int32_t ___alen1, Il2CppFullySharedGenericStruct* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		Il2CppFullySharedGenericStruct* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = InvokerFuncInvoker7< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m179C750FBD381FF2897A9140CF7C2661939C7E71_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint8_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		uint8_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m9F860C6A223CB8744EB0C859B49E573C300C9F7B_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int16_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int16_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEC9DD6EE9C8D66BCFFABD5A19993FDA06444F20C_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int8_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int8_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8784D19FC1B4BAC48D00E8623FE1872EFEFD3496_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint16_t ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		uint16_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisIl2CppFullySharedGenericStruct_m81548202F0BF107992042F154D34BCB0C7366524_gshared (Il2CppFullySharedGenericStruct* ___a0, int32_t ___alen1, Il2CppFullySharedGenericStruct* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___allOnesT7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		Il2CppFullySharedGenericStruct* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = InvokerFuncInvoker7< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		il2cpp_codegen_memcpy(L_10, ___allOnesT7, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_8, L_9, L_10, L_11);
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.Byte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2E6D2FDB31E3BFDFC30BDD2389A5A50C0F3286BB_gshared (uint8_t* ___a0, uint8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint8_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		uint8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4 = ___b1;
		uint8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.Int16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4786E128EACDF39A8B13B696D31429E7C8D6EBF6_gshared (int16_t* ___a0, int16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int16_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_4 = ___b1;
		int16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.SByte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m12535D1A7206DB4C56C55B642E9F5F0B072810A3_gshared (int8_t* ___a0, int8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int8_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_4 = ___b1;
		int8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.UInt16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m875686166B80F44B2A7B5837256932C7A6560E7D_gshared (uint16_t* ___a0, uint16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint16_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		uint16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_4 = ___b1;
		uint16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisIl2CppFullySharedGenericStruct_m0723D40FF7E3DA850D8AF6948CB6C949F855583D_gshared (Il2CppFullySharedGenericStruct* ___a0, Il2CppFullySharedGenericStruct* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		Il2CppFullySharedGenericStruct* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, L_2);
		Il2CppFullySharedGenericStruct* L_4 = ___b1;
		Il2CppFullySharedGenericStruct* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6);
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = InvokerFuncInvoker7< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_3, L_4, L_7, L_8, L_9, L_10);
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		int32_t L_16 = V_1;
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.Byte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1E1CCF579BEBAD09719E3B27BCAB1A607CED8C89_gshared (uint8_t* ___a0, uint8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint8_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		uint8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4 = ___b1;
		uint8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		uint8_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.Int16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m31A82E20D7EB7CDFCDF7EEA3E75BA4F38F8501D4_gshared (int16_t* ___a0, int16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int16_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_4 = ___b1;
		int16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int16_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.SByte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEA9E446133608807E4CF1C806055621BECFD93CF_gshared (int8_t* ___a0, int8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int8_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_4 = ___b1;
		int8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int8_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.UInt16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m084B5A607615E44BC1926F6FF9CF11754A074B06_gshared (uint16_t* ___a0, uint16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint16_t ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		uint16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_4 = ___b1;
		uint16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		uint16_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisIl2CppFullySharedGenericStruct_m16F77547DC1C2BE0F6959A4B639E1210EF674C66_gshared (Il2CppFullySharedGenericStruct* ___a0, Il2CppFullySharedGenericStruct* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___allOnesT5, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		Il2CppFullySharedGenericStruct* L_0 = ___a0;
		Il2CppFullySharedGenericStruct* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, L_2);
		Il2CppFullySharedGenericStruct* L_4 = ___b1;
		Il2CppFullySharedGenericStruct* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6);
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = InvokerFuncInvoker7< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_3, L_4, L_7, L_8, L_9, L_10);
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		il2cpp_codegen_memcpy(L_14, ___allOnesT5, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_12, L_13, L_14, L_15);
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (status != AsyncConversionStatus.Ready)
		int32_t L_0;
		L_0 = AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A(__this, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// throw new InvalidOperationException("Async request is not ready.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if (m_Api.TryGetAsyncRequestData(m_RequestId, out dataPtr, out dataLength))
		Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* L_3 = (Api_tAE210A8378E537AFD1FA4B99562229CE842377FB*)__this->___m_Api_0;
		int32_t L_4 = (int32_t)__this->___m_RequestId_1;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker3< bool, int32_t, intptr_t*, int32_t* >::Invoke(9 /* System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Api::TryGetAsyncRequestData(System.Int32,System.IntPtr&,System.Int32&) */, L_3, L_4, (&V_0), (&V_1));
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// int stride = UnsafeUtility.SizeOf<T>();
		int32_t L_7;
		L_7 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_4 = L_7;
		// var array = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<T>(
		//     (void*)dataPtr, dataLength / stride, Allocator.None);
		intptr_t L_8 = V_0;
		void* L_9;
		L_9 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_8, NULL);
		int32_t L_10 = V_1;
		int32_t L_11 = V_4;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12;
		L_12 = InvokerFuncInvoker3< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, void*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_9, ((int32_t)(L_10/L_11)), (int32_t)1);
		V_5 = L_12;
		// return array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13 = V_5;
		V_6 = L_13;
		goto IL_0060;
	}

IL_0055:
	{
		// throw new InvalidOperationException("The XRAsyncCameraImageConversion is not valid.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_RuntimeMethod_var)));
	}

IL_0060:
	{
		// }
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_15 = V_6;
		return L_15;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3FF6126D31B18EF8F02A921B6EF41A436C07AB3E_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___array2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (array.IsCreated)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_0 = ___array2;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_7 = ___array2;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_8 = ___array2;
		int32_t L_9 = ___length0;
		int32_t L_10 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_11), L_9, L_10, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 5));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_8 = L_11;
	}

IL_0033:
	{
		goto IL_0046;
	}

IL_0036:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_12 = ___array2;
		int32_t L_13 = ___length0;
		int32_t L_14 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_15;
		memset((&L_15), 0, sizeof(L_15));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_15), L_13, L_14, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 5));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_12 = L_15;
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisIl2CppFullySharedGenericStruct_mA59758011A49ED37FE547FB2E7C71E29DA35A08E_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___array2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (array.IsCreated)
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___array2;
		bool L_1;
		L_1 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___array2;
		int32_t L_4;
		L_4 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_3);
		int32_t L_5 = ___length0;
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___array2;
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_7);
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = ___array2;
		int32_t L_9 = ___length0;
		int32_t L_10 = ___allocator1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11;
		memset((&L_11), 0, sizeof(L_11));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_11), L_9, L_10, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 5));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_8 = L_11;
	}

IL_0033:
	{
		goto IL_0046;
	}

IL_0036:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_12 = ___array2;
		int32_t L_13 = ___length0;
		int32_t L_14 = ___allocator1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_15;
		memset((&L_15), 0, sizeof(L_15));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_15), L_13, L_14, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 5));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_12 = L_15;
	}

IL_0046:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m2AED59BE1B0645C0DB5DAE117842A1C0AD4BDEBB_gshared_inline (Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* __this, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___arg10, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___arg21, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mE6CD106F59B0ADD2DF9C211DC4CF4088F5A1A4BB_gshared_inline (Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___arg10, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___arg21, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m1B00C20A8CC4D62269585D16A58425D3F258836F_gshared_inline (DynamicArray_1_t7C64F5A74B7BA6F6B3589A766CADE3F59C6C7BCA* __this, const RuntimeMethod* method) 
{
	{
		// public int size { get; private set; }
		int32_t L_0 = (int32_t)__this->___U3CsizeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* EqualityComparer_1_get_Default_m41DB4C0E0A508A8326E903331DC63D410B7AB9C4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* V_0 = NULL;
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0 = ((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mEBC7BD29A8FD796A4DAA1DF4428B95D1BA4FB377(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* EqualityComparer_1_get_Default_m7D273CC532DC2164C9C86D28C639FDEA38173C88_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* V_0 = NULL;
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0 = ((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m22AF3135664449980749E1EC32EB92DB49219F9B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* EqualityComparer_1_get_Default_m7F71AAC0046A3CB8C4CEB06A5A52A1269AF7023D_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* V_0 = NULL;
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0 = ((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD5EE323D1C48F0C09CBB944FA81707B8FEE2DB6D(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* EqualityComparer_1_get_Default_m80EE5C179E01BB38904781592AC72F8137541D7E_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* V_0 = NULL;
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0 = ((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m5F906E9B13BCCCDF51EF0852BD9E5E0065D185F8(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer_0), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_4 = V_0;
		return L_4;
	}
}
