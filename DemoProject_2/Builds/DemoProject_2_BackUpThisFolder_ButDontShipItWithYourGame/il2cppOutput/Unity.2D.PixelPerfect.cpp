#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.U2D.IPixelPerfectCamera
struct IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.U2D.PixelPerfectCamera
struct PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8;
// UnityEngine.U2D.PixelPerfectCameraInternal
struct PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral69D2BC13326043EFBE8498680B311F3B34E06698;
IL2CPP_EXTERN_C String_t* _stringLiteral6E3C394542AFDC0953291817DE5BAA9A9329CF27;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5C67F4C00BFAA16443168F922286EEE56F2F70DB 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.FilterMode
struct FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_tE90A08FD96A142C761463D65E524BCDBFEEE3D19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.U2D.PixelPerfectCameraInternal
struct PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB  : public RuntimeObject
{
public:
	// UnityEngine.U2D.IPixelPerfectCamera UnityEngine.U2D.PixelPerfectCameraInternal::m_Component
	RuntimeObject* ___m_Component_0;
	// UnityEngine.U2D.PixelPerfectCamera UnityEngine.U2D.PixelPerfectCameraInternal::m_SerializableComponent
	PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * ___m_SerializableComponent_1;
	// System.Single UnityEngine.U2D.PixelPerfectCameraInternal::originalOrthoSize
	float ___originalOrthoSize_2;
	// System.Boolean UnityEngine.U2D.PixelPerfectCameraInternal::hasPostProcessLayer
	bool ___hasPostProcessLayer_3;
	// System.Boolean UnityEngine.U2D.PixelPerfectCameraInternal::cropFrameXAndY
	bool ___cropFrameXAndY_4;
	// System.Boolean UnityEngine.U2D.PixelPerfectCameraInternal::cropFrameXOrY
	bool ___cropFrameXOrY_5;
	// System.Boolean UnityEngine.U2D.PixelPerfectCameraInternal::useStretchFill
	bool ___useStretchFill_6;
	// System.Int32 UnityEngine.U2D.PixelPerfectCameraInternal::zoom
	int32_t ___zoom_7;
	// System.Boolean UnityEngine.U2D.PixelPerfectCameraInternal::useOffscreenRT
	bool ___useOffscreenRT_8;
	// System.Int32 UnityEngine.U2D.PixelPerfectCameraInternal::offscreenRTWidth
	int32_t ___offscreenRTWidth_9;
	// System.Int32 UnityEngine.U2D.PixelPerfectCameraInternal::offscreenRTHeight
	int32_t ___offscreenRTHeight_10;
	// UnityEngine.Rect UnityEngine.U2D.PixelPerfectCameraInternal::pixelRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___pixelRect_11;
	// System.Single UnityEngine.U2D.PixelPerfectCameraInternal::orthoSize
	float ___orthoSize_12;
	// System.Single UnityEngine.U2D.PixelPerfectCameraInternal::unitsPerPixel
	float ___unitsPerPixel_13;
	// System.Int32 UnityEngine.U2D.PixelPerfectCameraInternal::cinemachineVCamZoom
	int32_t ___cinemachineVCamZoom_14;

public:
	inline static int32_t get_offset_of_m_Component_0() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___m_Component_0)); }
	inline RuntimeObject* get_m_Component_0() const { return ___m_Component_0; }
	inline RuntimeObject** get_address_of_m_Component_0() { return &___m_Component_0; }
	inline void set_m_Component_0(RuntimeObject* value)
	{
		___m_Component_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Component_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SerializableComponent_1() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___m_SerializableComponent_1)); }
	inline PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * get_m_SerializableComponent_1() const { return ___m_SerializableComponent_1; }
	inline PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 ** get_address_of_m_SerializableComponent_1() { return &___m_SerializableComponent_1; }
	inline void set_m_SerializableComponent_1(PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * value)
	{
		___m_SerializableComponent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SerializableComponent_1), (void*)value);
	}

	inline static int32_t get_offset_of_originalOrthoSize_2() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___originalOrthoSize_2)); }
	inline float get_originalOrthoSize_2() const { return ___originalOrthoSize_2; }
	inline float* get_address_of_originalOrthoSize_2() { return &___originalOrthoSize_2; }
	inline void set_originalOrthoSize_2(float value)
	{
		___originalOrthoSize_2 = value;
	}

	inline static int32_t get_offset_of_hasPostProcessLayer_3() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___hasPostProcessLayer_3)); }
	inline bool get_hasPostProcessLayer_3() const { return ___hasPostProcessLayer_3; }
	inline bool* get_address_of_hasPostProcessLayer_3() { return &___hasPostProcessLayer_3; }
	inline void set_hasPostProcessLayer_3(bool value)
	{
		___hasPostProcessLayer_3 = value;
	}

	inline static int32_t get_offset_of_cropFrameXAndY_4() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___cropFrameXAndY_4)); }
	inline bool get_cropFrameXAndY_4() const { return ___cropFrameXAndY_4; }
	inline bool* get_address_of_cropFrameXAndY_4() { return &___cropFrameXAndY_4; }
	inline void set_cropFrameXAndY_4(bool value)
	{
		___cropFrameXAndY_4 = value;
	}

	inline static int32_t get_offset_of_cropFrameXOrY_5() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___cropFrameXOrY_5)); }
	inline bool get_cropFrameXOrY_5() const { return ___cropFrameXOrY_5; }
	inline bool* get_address_of_cropFrameXOrY_5() { return &___cropFrameXOrY_5; }
	inline void set_cropFrameXOrY_5(bool value)
	{
		___cropFrameXOrY_5 = value;
	}

	inline static int32_t get_offset_of_useStretchFill_6() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___useStretchFill_6)); }
	inline bool get_useStretchFill_6() const { return ___useStretchFill_6; }
	inline bool* get_address_of_useStretchFill_6() { return &___useStretchFill_6; }
	inline void set_useStretchFill_6(bool value)
	{
		___useStretchFill_6 = value;
	}

	inline static int32_t get_offset_of_zoom_7() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___zoom_7)); }
	inline int32_t get_zoom_7() const { return ___zoom_7; }
	inline int32_t* get_address_of_zoom_7() { return &___zoom_7; }
	inline void set_zoom_7(int32_t value)
	{
		___zoom_7 = value;
	}

	inline static int32_t get_offset_of_useOffscreenRT_8() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___useOffscreenRT_8)); }
	inline bool get_useOffscreenRT_8() const { return ___useOffscreenRT_8; }
	inline bool* get_address_of_useOffscreenRT_8() { return &___useOffscreenRT_8; }
	inline void set_useOffscreenRT_8(bool value)
	{
		___useOffscreenRT_8 = value;
	}

	inline static int32_t get_offset_of_offscreenRTWidth_9() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___offscreenRTWidth_9)); }
	inline int32_t get_offscreenRTWidth_9() const { return ___offscreenRTWidth_9; }
	inline int32_t* get_address_of_offscreenRTWidth_9() { return &___offscreenRTWidth_9; }
	inline void set_offscreenRTWidth_9(int32_t value)
	{
		___offscreenRTWidth_9 = value;
	}

	inline static int32_t get_offset_of_offscreenRTHeight_10() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___offscreenRTHeight_10)); }
	inline int32_t get_offscreenRTHeight_10() const { return ___offscreenRTHeight_10; }
	inline int32_t* get_address_of_offscreenRTHeight_10() { return &___offscreenRTHeight_10; }
	inline void set_offscreenRTHeight_10(int32_t value)
	{
		___offscreenRTHeight_10 = value;
	}

	inline static int32_t get_offset_of_pixelRect_11() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___pixelRect_11)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_pixelRect_11() const { return ___pixelRect_11; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_pixelRect_11() { return &___pixelRect_11; }
	inline void set_pixelRect_11(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___pixelRect_11 = value;
	}

	inline static int32_t get_offset_of_orthoSize_12() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___orthoSize_12)); }
	inline float get_orthoSize_12() const { return ___orthoSize_12; }
	inline float* get_address_of_orthoSize_12() { return &___orthoSize_12; }
	inline void set_orthoSize_12(float value)
	{
		___orthoSize_12 = value;
	}

	inline static int32_t get_offset_of_unitsPerPixel_13() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___unitsPerPixel_13)); }
	inline float get_unitsPerPixel_13() const { return ___unitsPerPixel_13; }
	inline float* get_address_of_unitsPerPixel_13() { return &___unitsPerPixel_13; }
	inline void set_unitsPerPixel_13(float value)
	{
		___unitsPerPixel_13 = value;
	}

	inline static int32_t get_offset_of_cinemachineVCamZoom_14() { return static_cast<int32_t>(offsetof(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB, ___cinemachineVCamZoom_14)); }
	inline int32_t get_cinemachineVCamZoom_14() const { return ___cinemachineVCamZoom_14; }
	inline int32_t* get_address_of_cinemachineVCamZoom_14() { return &___cinemachineVCamZoom_14; }
	inline void set_cinemachineVCamZoom_14(int32_t value)
	{
		___cinemachineVCamZoom_14 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.U2D.PixelPerfectCamera
struct PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 UnityEngine.U2D.PixelPerfectCamera::m_AssetsPPU
	int32_t ___m_AssetsPPU_4;
	// System.Int32 UnityEngine.U2D.PixelPerfectCamera::m_RefResolutionX
	int32_t ___m_RefResolutionX_5;
	// System.Int32 UnityEngine.U2D.PixelPerfectCamera::m_RefResolutionY
	int32_t ___m_RefResolutionY_6;
	// System.Boolean UnityEngine.U2D.PixelPerfectCamera::m_UpscaleRT
	bool ___m_UpscaleRT_7;
	// System.Boolean UnityEngine.U2D.PixelPerfectCamera::m_PixelSnapping
	bool ___m_PixelSnapping_8;
	// System.Boolean UnityEngine.U2D.PixelPerfectCamera::m_CropFrameX
	bool ___m_CropFrameX_9;
	// System.Boolean UnityEngine.U2D.PixelPerfectCamera::m_CropFrameY
	bool ___m_CropFrameY_10;
	// System.Boolean UnityEngine.U2D.PixelPerfectCamera::m_StretchFill
	bool ___m_StretchFill_11;
	// UnityEngine.Camera UnityEngine.U2D.PixelPerfectCamera::m_Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___m_Camera_12;
	// UnityEngine.U2D.PixelPerfectCameraInternal UnityEngine.U2D.PixelPerfectCamera::m_Internal
	PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * ___m_Internal_13;
	// System.Boolean UnityEngine.U2D.PixelPerfectCamera::m_CinemachineCompatibilityMode
	bool ___m_CinemachineCompatibilityMode_14;

public:
	inline static int32_t get_offset_of_m_AssetsPPU_4() { return static_cast<int32_t>(offsetof(PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8, ___m_AssetsPPU_4)); }
	inline int32_t get_m_AssetsPPU_4() const { return ___m_AssetsPPU_4; }
	inline int32_t* get_address_of_m_AssetsPPU_4() { return &___m_AssetsPPU_4; }
	inline void set_m_AssetsPPU_4(int32_t value)
	{
		___m_AssetsPPU_4 = value;
	}

	inline static int32_t get_offset_of_m_RefResolutionX_5() { return static_cast<int32_t>(offsetof(PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8, ___m_RefResolutionX_5)); }
	inline int32_t get_m_RefResolutionX_5() const { return ___m_RefResolutionX_5; }
	inline int32_t* get_address_of_m_RefResolutionX_5() { return &___m_RefResolutionX_5; }
	inline void set_m_RefResolutionX_5(int32_t value)
	{
		___m_RefResolutionX_5 = value;
	}

	inline static int32_t get_offset_of_m_RefResolutionY_6() { return static_cast<int32_t>(offsetof(PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8, ___m_RefResolutionY_6)); }
	inline int32_t get_m_RefResolutionY_6() const { return ___m_RefResolutionY_6; }
	inline int32_t* get_address_of_m_RefResolutionY_6() { return &___m_RefResolutionY_6; }
	inline void set_m_RefResolutionY_6(int32_t value)
	{
		___m_RefResolutionY_6 = value;
	}

	inline static int32_t get_offset_of_m_UpscaleRT_7() { return static_cast<int32_t>(offsetof(PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8, ___m_UpscaleRT_7)); }
	inline bool get_m_UpscaleRT_7() const { return ___m_UpscaleRT_7; }
	inline bool* get_address_of_m_UpscaleRT_7() { return &___m_UpscaleRT_7; }
	inline void set_m_UpscaleRT_7(bool value)
	{
		___m_UpscaleRT_7 = value;
	}

	inline static int32_t get_offset_of_m_PixelSnapping_8() { return static_cast<int32_t>(offsetof(PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8, ___m_PixelSnapping_8)); }
	inline bool get_m_PixelSnapping_8() const { return ___m_PixelSnapping_8; }
	inline bool* get_address_of_m_PixelSnapping_8() { return &___m_PixelSnapping_8; }
	inline void set_m_PixelSnapping_8(bool value)
	{
		___m_PixelSnapping_8 = value;
	}

	inline static int32_t get_offset_of_m_CropFrameX_9() { return static_cast<int32_t>(offsetof(PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8, ___m_CropFrameX_9)); }
	inline bool get_m_CropFrameX_9() const { return ___m_CropFrameX_9; }
	inline bool* get_address_of_m_CropFrameX_9() { return &___m_CropFrameX_9; }
	inline void set_m_CropFrameX_9(bool value)
	{
		___m_CropFrameX_9 = value;
	}

	inline static int32_t get_offset_of_m_CropFrameY_10() { return static_cast<int32_t>(offsetof(PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8, ___m_CropFrameY_10)); }
	inline bool get_m_CropFrameY_10() const { return ___m_CropFrameY_10; }
	inline bool* get_address_of_m_CropFrameY_10() { return &___m_CropFrameY_10; }
	inline void set_m_CropFrameY_10(bool value)
	{
		___m_CropFrameY_10 = value;
	}

	inline static int32_t get_offset_of_m_StretchFill_11() { return static_cast<int32_t>(offsetof(PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8, ___m_StretchFill_11)); }
	inline bool get_m_StretchFill_11() const { return ___m_StretchFill_11; }
	inline bool* get_address_of_m_StretchFill_11() { return &___m_StretchFill_11; }
	inline void set_m_StretchFill_11(bool value)
	{
		___m_StretchFill_11 = value;
	}

	inline static int32_t get_offset_of_m_Camera_12() { return static_cast<int32_t>(offsetof(PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8, ___m_Camera_12)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_m_Camera_12() const { return ___m_Camera_12; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_m_Camera_12() { return &___m_Camera_12; }
	inline void set_m_Camera_12(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___m_Camera_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Camera_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Internal_13() { return static_cast<int32_t>(offsetof(PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8, ___m_Internal_13)); }
	inline PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * get_m_Internal_13() const { return ___m_Internal_13; }
	inline PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB ** get_address_of_m_Internal_13() { return &___m_Internal_13; }
	inline void set_m_Internal_13(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * value)
	{
		___m_Internal_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Internal_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CinemachineCompatibilityMode_14() { return static_cast<int32_t>(offsetof(PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8, ___m_CinemachineCompatibilityMode_14)); }
	inline bool get_m_CinemachineCompatibilityMode_14() const { return ___m_CinemachineCompatibilityMode_14; }
	inline bool* get_address_of_m_CinemachineCompatibilityMode_14() { return &___m_CinemachineCompatibilityMode_14; }
	inline void set_m_CinemachineCompatibilityMode_14(bool value)
	{
		___m_CinemachineCompatibilityMode_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Single UnityEngine.U2D.PixelPerfectCameraInternal::CorrectCinemachineOrthoSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PixelPerfectCameraInternal_CorrectCinemachineOrthoSize_mCE913421BC4294451DC3869F2EB052D3B3802ED1 (PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * __this, float ___targetOrthoSize0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.U2D.PixelPerfectCamera::RoundToPixel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PixelPerfectCamera_RoundToPixel_m53B7AE007CD7E21B1B7DFD76A1F330364369C2D8 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m5ABDD540D55BC20D1FD3804DDF005A867FC3D220 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mB760A95995CDC5E31F18D76CE8806DF2C160DD4B (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_worldToCameraMatrix_mD9E982CC4F356AC310C5B3145FC59FD73C420BE3 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.U2D.PixelPerfectCameraInternal::.ctor(UnityEngine.U2D.IPixelPerfectCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCameraInternal__ctor_m8BED9192421CD4B18053B0FEAEF480CE303ABA5C (PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * __this, RuntimeObject* ___component0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.Component::GetComponent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * Component_GetComponent_m23318D7E006D459CA053018DE416E6E1D71B4EB2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m44AD823DE1C2962E3B9CE69F680C6602034DC778 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A (const RuntimeMethod* method);
// System.Void UnityEngine.U2D.PixelPerfectCameraInternal::CalculateCameraProperties(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCameraInternal_CalculateCameraProperties_mD30D52BC7D19045E2AD048A85CED88C50F3C97A9 (PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * __this, int32_t ___screenWidth0, int32_t ___screenHeight1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_forceIntoRenderTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_forceIntoRenderTexture_m44C397F4C0E630B9AE3D153768FC771D759AB348 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.PixelPerfectCamera::PixelSnap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_PixelSnap_m91DD09A7F8EC7047E95D2853591589120C632549 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Rect::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Rect_get_zero_m6FEB805768121953D08DC6A84A4DA3DBD3580B6E (const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Inequality_m0CD934CD097E25176702634A23F0B1AB50FF4C15 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lhs0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_pixelRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_pixelRect_mB1BFC3EE5DB87F9A66ED0EBFC10B9F80DF1CC61B (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_m556222CD5D4975EF672DC33D979611405A173F79 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_forceIntoRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_forceIntoRenderTexture_mEB70D7C2721A8AB9FA61439DEC708A7A357EED12 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_allowMSAA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_allowMSAA_m67C4EA3BF9AC0B742B4C34ED395D946502BCE10C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_mD8CAAC9E4B8C5C92A21D176E4AB2C521CFA0EF7F (const RuntimeMethod* method);
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_m012A79FD9FE6D463ACFF5B852E4399B00D4B365D (bool ___clearDepth0, bool ___clearColor1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColor2, const RuntimeMethod* method);
// System.Void UnityEngine.U2D.PixelPerfectRendering::set_pixelSnapSpacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectRendering_set_pixelSnapSpacing_m452576A064958F45BDFF00A38520BDCCB937173C (float ___value0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Camera::get_activeTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * Camera_get_activeTexture_mD7F968C4D92DF00DB6568A3D7B56DF9C5FEFF15A (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_mB988DBAF1161427E8F4FB0AB46B5B035467201F2 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___rt0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Viewport(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Viewport_m8686A90C60315F1C5DE648B2D8BB250DF643272F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___pixelRect0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.U2D.PixelPerfectCameraInternal::CalculatePostRenderPixelRect(System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  PixelPerfectCameraInternal_CalculatePostRenderPixelRect_mB3065A3B8D92AA9C1C21D38B0B4301C7E814C45E (PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * __this, float ___cameraAspect0, int32_t ___screenWidth1, int32_t ___screenHeight2, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::ResetAspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetAspect_mC80AD4BC18EA0E1E05F9295B58B6E7A8DB9072C0 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::ResetWorldToCameraMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetWorldToCameraMatrix_mE1FBF18A65E9B66FA0609D8D3A8A13052772C9B7 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m709673BDF5D9264E61FEBBC4CE1038752523838D (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_m4314500293279390A96F5121F17501A969554C32 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lhs0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rhs1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m95CE4916FFD8D1F8D87CF21A3C9EC257EBD8F578 (float ___f0, const RuntimeMethod* method);
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
// System.Int32 UnityEngine.U2D.PixelPerfectCamera::get_assetsPPU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PixelPerfectCamera_get_assetsPPU_mF294CEA88ED86AF12C3B288A32454145E655081D (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int assetsPPU { get { return m_AssetsPPU; } set { m_AssetsPPU = value > 0 ? value : 1; } }
		int32_t L_0 = __this->get_m_AssetsPPU_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int assetsPPU { get { return m_AssetsPPU; } set { m_AssetsPPU = value > 0 ? value : 1; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::set_assetsPPU(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_set_assetsPPU_mAF321B9D68BFEEB5F460E85C99EDF3D7165DF270 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * G_B2_0 = NULL;
	PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * G_B3_1 = NULL;
	{
		// public int assetsPPU { get { return m_AssetsPPU; } set { m_AssetsPPU = value > 0 ? value : 1; } }
		int32_t L_0 = ___value0;
		G_B1_0 = __this;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000a;
	}

IL_0009:
	{
		int32_t L_1 = ___value0;
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_000a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_AssetsPPU_4(G_B3_0);
		// public int assetsPPU { get { return m_AssetsPPU; } set { m_AssetsPPU = value > 0 ? value : 1; } }
		return;
	}
}
// System.Int32 UnityEngine.U2D.PixelPerfectCamera::get_refResolutionX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PixelPerfectCamera_get_refResolutionX_mD8E1DCEE1434AAC6761DEE8B73D4D163B858FE58 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int refResolutionX { get { return m_RefResolutionX; } set { m_RefResolutionX = value > 0 ? value : 1; } }
		int32_t L_0 = __this->get_m_RefResolutionX_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int refResolutionX { get { return m_RefResolutionX; } set { m_RefResolutionX = value > 0 ? value : 1; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::set_refResolutionX(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_set_refResolutionX_mDA8E4201FF94E6B565DA3BFACC5A8B80F26C20C1 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * G_B2_0 = NULL;
	PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * G_B3_1 = NULL;
	{
		// public int refResolutionX { get { return m_RefResolutionX; } set { m_RefResolutionX = value > 0 ? value : 1; } }
		int32_t L_0 = ___value0;
		G_B1_0 = __this;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000a;
	}

IL_0009:
	{
		int32_t L_1 = ___value0;
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_000a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_RefResolutionX_5(G_B3_0);
		// public int refResolutionX { get { return m_RefResolutionX; } set { m_RefResolutionX = value > 0 ? value : 1; } }
		return;
	}
}
// System.Int32 UnityEngine.U2D.PixelPerfectCamera::get_refResolutionY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PixelPerfectCamera_get_refResolutionY_m8C37A3DBC9014F034A78F9E921A11BAA113CB24F (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int refResolutionY { get { return m_RefResolutionY; } set { m_RefResolutionY = value > 0 ? value : 1; } }
		int32_t L_0 = __this->get_m_RefResolutionY_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public int refResolutionY { get { return m_RefResolutionY; } set { m_RefResolutionY = value > 0 ? value : 1; } }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::set_refResolutionY(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_set_refResolutionY_mD0998785CF628E2E1841B232EDB53AAFDD60D86D (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * G_B2_0 = NULL;
	PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * G_B3_1 = NULL;
	{
		// public int refResolutionY { get { return m_RefResolutionY; } set { m_RefResolutionY = value > 0 ? value : 1; } }
		int32_t L_0 = ___value0;
		G_B1_0 = __this;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000a;
	}

IL_0009:
	{
		int32_t L_1 = ___value0;
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_000a:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_m_RefResolutionY_6(G_B3_0);
		// public int refResolutionY { get { return m_RefResolutionY; } set { m_RefResolutionY = value > 0 ? value : 1; } }
		return;
	}
}
// System.Boolean UnityEngine.U2D.PixelPerfectCamera::get_upscaleRT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PixelPerfectCamera_get_upscaleRT_m36326F6B11D8D2CC33971B805344F2C6458E54C0 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool upscaleRT { get { return m_UpscaleRT; } set { m_UpscaleRT = value; } }
		bool L_0 = __this->get_m_UpscaleRT_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool upscaleRT { get { return m_UpscaleRT; } set { m_UpscaleRT = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::set_upscaleRT(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_set_upscaleRT_m870AC116618CC6358EB9403A59D7E54F0D56F0A9 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool upscaleRT { get { return m_UpscaleRT; } set { m_UpscaleRT = value; } }
		bool L_0 = ___value0;
		__this->set_m_UpscaleRT_7(L_0);
		// public bool upscaleRT { get { return m_UpscaleRT; } set { m_UpscaleRT = value; } }
		return;
	}
}
// System.Boolean UnityEngine.U2D.PixelPerfectCamera::get_pixelSnapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PixelPerfectCamera_get_pixelSnapping_mF550795A64EA5FF77DECD748CA5FB21C00D9A121 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool pixelSnapping { get { return m_PixelSnapping; } set { m_PixelSnapping = value; } }
		bool L_0 = __this->get_m_PixelSnapping_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool pixelSnapping { get { return m_PixelSnapping; } set { m_PixelSnapping = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::set_pixelSnapping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_set_pixelSnapping_m9B77AA59CDF18E388D4E033FB5BDC8F950F36226 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool pixelSnapping { get { return m_PixelSnapping; } set { m_PixelSnapping = value; } }
		bool L_0 = ___value0;
		__this->set_m_PixelSnapping_8(L_0);
		// public bool pixelSnapping { get { return m_PixelSnapping; } set { m_PixelSnapping = value; } }
		return;
	}
}
// System.Boolean UnityEngine.U2D.PixelPerfectCamera::get_cropFrameX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PixelPerfectCamera_get_cropFrameX_mB81332B181CC77B077B48EC5B7B96CBA73912FA6 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool cropFrameX { get { return m_CropFrameX; } set { m_CropFrameX = value; } }
		bool L_0 = __this->get_m_CropFrameX_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool cropFrameX { get { return m_CropFrameX; } set { m_CropFrameX = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::set_cropFrameX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_set_cropFrameX_m2E647446C63C83F20E38413E85698C49988E699C (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool cropFrameX { get { return m_CropFrameX; } set { m_CropFrameX = value; } }
		bool L_0 = ___value0;
		__this->set_m_CropFrameX_9(L_0);
		// public bool cropFrameX { get { return m_CropFrameX; } set { m_CropFrameX = value; } }
		return;
	}
}
// System.Boolean UnityEngine.U2D.PixelPerfectCamera::get_cropFrameY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PixelPerfectCamera_get_cropFrameY_m4DBB6A286AC29B2213E61B6397754C38E799A5D1 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool cropFrameY { get { return m_CropFrameY; } set { m_CropFrameY = value; } }
		bool L_0 = __this->get_m_CropFrameY_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool cropFrameY { get { return m_CropFrameY; } set { m_CropFrameY = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::set_cropFrameY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_set_cropFrameY_m3EAE38E3B33718D14E290E711F73406B0DC5FC59 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool cropFrameY { get { return m_CropFrameY; } set { m_CropFrameY = value; } }
		bool L_0 = ___value0;
		__this->set_m_CropFrameY_10(L_0);
		// public bool cropFrameY { get { return m_CropFrameY; } set { m_CropFrameY = value; } }
		return;
	}
}
// System.Boolean UnityEngine.U2D.PixelPerfectCamera::get_stretchFill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PixelPerfectCamera_get_stretchFill_m959164B6C59CB30C7EDDFFE93808C2CEEDFC3847 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool stretchFill { get { return m_StretchFill; } set { m_StretchFill = value; } }
		bool L_0 = __this->get_m_StretchFill_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool stretchFill { get { return m_StretchFill; } set { m_StretchFill = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::set_stretchFill(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_set_stretchFill_m82F148F1225AB1B5E5C86043632CF6C3B07FA269 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool stretchFill { get { return m_StretchFill; } set { m_StretchFill = value; } }
		bool L_0 = ___value0;
		__this->set_m_StretchFill_11(L_0);
		// public bool stretchFill { get { return m_StretchFill; } set { m_StretchFill = value; } }
		return;
	}
}
// System.Int32 UnityEngine.U2D.PixelPerfectCamera::get_pixelRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PixelPerfectCamera_get_pixelRatio_m8E1DC329C0C7551837F4AE0E1B70B9730042C96F (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (m_CinemachineCompatibilityMode)
		bool L_0 = __this->get_m_CinemachineCompatibilityMode_14();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// if (m_UpscaleRT)
		bool L_2 = __this->get_m_UpscaleRT_7();
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// return m_Internal.zoom * m_Internal.cinemachineVCamZoom;
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_4 = __this->get_m_Internal_13();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_zoom_7();
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_6 = __this->get_m_Internal_13();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_cinemachineVCamZoom_14();
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_7));
		goto IL_004d;
	}

IL_0030:
	{
		// return m_Internal.cinemachineVCamZoom;
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_8 = __this->get_m_Internal_13();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_cinemachineVCamZoom_14();
		V_2 = L_9;
		goto IL_004d;
	}

IL_003e:
	{
		// return m_Internal.zoom;
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_10 = __this->get_m_Internal_13();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_zoom_7();
		V_2 = L_11;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		int32_t L_12 = V_2;
		return L_12;
	}
}
// UnityEngine.Vector3 UnityEngine.U2D.PixelPerfectCamera::RoundToPixel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PixelPerfectCamera_RoundToPixel_m53B7AE007CD7E21B1B7DFD76A1F330364369C2D8 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float unitsPerPixel = m_Internal.unitsPerPixel;
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_0 = __this->get_m_Internal_13();
		NullCheck(L_0);
		float L_1 = L_0->get_unitsPerPixel_13();
		V_0 = L_1;
		// if (unitsPerPixel == 0.0f)
		float L_2 = V_0;
		V_2 = (bool)((((float)L_2) == ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___position0;
		V_3 = L_4;
		goto IL_0063;
	}

IL_001d:
	{
		// result.x = Mathf.Round(position.x / unitsPerPixel) * unitsPerPixel;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___position0;
		float L_6 = L_5.get_x_2();
		float L_7 = V_0;
		float L_8;
		L_8 = bankers_roundf(((float)((float)L_6/(float)L_7)));
		float L_9 = V_0;
		(&V_1)->set_x_2(((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)));
		// result.y = Mathf.Round(position.y / unitsPerPixel) * unitsPerPixel;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___position0;
		float L_11 = L_10.get_y_3();
		float L_12 = V_0;
		float L_13;
		L_13 = bankers_roundf(((float)((float)L_11/(float)L_12)));
		float L_14 = V_0;
		(&V_1)->set_y_3(((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)));
		// result.z = Mathf.Round(position.z / unitsPerPixel) * unitsPerPixel;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___position0;
		float L_16 = L_15.get_z_4();
		float L_17 = V_0;
		float L_18;
		L_18 = bankers_roundf(((float)((float)L_16/(float)L_17)));
		float L_19 = V_0;
		(&V_1)->set_z_4(((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)));
		// return result;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
		V_3 = L_20;
		goto IL_0063;
	}

IL_0063:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_3;
		return L_21;
	}
}
// System.Single UnityEngine.U2D.PixelPerfectCamera::CorrectCinemachineOrthoSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PixelPerfectCamera_CorrectCinemachineOrthoSize_m7187509929924F1A1DFEEAD8178161D7036A5CA3 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, float ___targetOrthoSize0, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// m_CinemachineCompatibilityMode = true;
		__this->set_m_CinemachineCompatibilityMode_14((bool)1);
		// if (m_Internal == null)
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_0 = __this->get_m_Internal_13();
		V_0 = (bool)((((RuntimeObject*)(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return targetOrthoSize;
		float L_2 = ___targetOrthoSize0;
		V_1 = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		// return m_Internal.CorrectCinemachineOrthoSize(targetOrthoSize);
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_3 = __this->get_m_Internal_13();
		float L_4 = ___targetOrthoSize0;
		NullCheck(L_3);
		float L_5;
		L_5 = PixelPerfectCameraInternal_CorrectCinemachineOrthoSize_mCE913421BC4294451DC3869F2EB052D3B3802ED1(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		float L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::PixelSnap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_PixelSnap_m91DD09A7F8EC7047E95D2853591589120C632549 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 cameraPosition = m_Camera.transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_Camera_12();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 roundedCameraPosition = RoundToPixel(cameraPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = PixelPerfectCamera_RoundToPixel_m53B7AE007CD7E21B1B7DFD76A1F330364369C2D8(__this, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// Vector3 offset = roundedCameraPosition - cameraPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// offset.z = -offset.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_2;
		float L_9 = L_8.get_z_4();
		(&V_2)->set_z_4(((-L_9)));
		// Matrix4x4 offsetMatrix = Matrix4x4.TRS(-offset, Quaternion.identity, new Vector3(1.0f, 1.0f, -1.0f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline(L_10, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (1.0f), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14;
		L_14 = Matrix4x4_TRS_m5ABDD540D55BC20D1FD3804DDF005A867FC3D220(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// m_Camera.worldToCameraMatrix = offsetMatrix * m_Camera.transform.worldToLocalMatrix;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = __this->get_m_Camera_12();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_16 = V_3;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17 = __this->get_m_Camera_12();
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_19;
		L_19 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D(L_18, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_20;
		L_20 = Matrix4x4_op_Multiply_mB760A95995CDC5E31F18D76CE8806DF2C160DD4B(L_16, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		Camera_set_worldToCameraMatrix_mD9E982CC4F356AC310C5B3145FC59FD73C420BE3(L_15, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_Awake_m0EEA0D8C24DDBF0417409FC1ED92D46771038AF6 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69D2BC13326043EFBE8498680B311F3B34E06698);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E3C394542AFDC0953291817DE5BAA9A9329CF27);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_Camera = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_m_Camera_12(L_0);
		// m_Internal = new PixelPerfectCameraInternal(this);
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_1 = (PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB *)il2cpp_codegen_object_new(PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB_il2cpp_TypeInfo_var);
		PixelPerfectCameraInternal__ctor_m8BED9192421CD4B18053B0FEAEF480CE303ABA5C(L_1, __this, /*hidden argument*/NULL);
		__this->set_m_Internal_13(L_1);
		// m_Internal.originalOrthoSize = m_Camera.orthographicSize;
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_2 = __this->get_m_Internal_13();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_m_Camera_12();
		NullCheck(L_3);
		float L_4;
		L_4 = Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_originalOrthoSize_2(L_4);
		// m_Internal.hasPostProcessLayer = GetComponent("PostProcessLayer") != null;   // query the component by name to avoid hard dependency
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_5 = __this->get_m_Internal_13();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_6;
		L_6 = Component_GetComponent_m23318D7E006D459CA053018DE416E6E1D71B4EB2(__this, _stringLiteral69D2BC13326043EFBE8498680B311F3B34E06698, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_hasPostProcessLayer_3(L_7);
		// if (m_Camera.targetTexture != null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = __this->get_m_Camera_12();
		NullCheck(L_8);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_9;
		L_9 = Camera_get_targetTexture_m1DF637F05FF945625231DED8F3071795755DD4BF(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_10;
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		// Debug.LogWarning("Render to texture is not supported by Pixel Perfect Camera.", m_Camera);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = __this->get_m_Camera_12();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_mFCC4F73CACBC055EBB4CE9891F564B80B81B5F0E(_stringLiteral6E3C394542AFDC0953291817DE5BAA9A9329CF27, L_12, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_LateUpdate_m38D630FA419C6D0D2208872ED381B96ECAEC69D8 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * G_B2_0 = NULL;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * G_B3_1 = NULL;
	{
		// m_Internal.CalculateCameraProperties(Screen.width, Screen.height);
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_0 = __this->get_m_Internal_13();
		int32_t L_1;
		L_1 = Screen_get_width_m44AD823DE1C2962E3B9CE69F680C6602034DC778(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A(/*hidden argument*/NULL);
		NullCheck(L_0);
		PixelPerfectCameraInternal_CalculateCameraProperties_mD30D52BC7D19045E2AD048A85CED88C50F3C97A9(L_0, L_1, L_2, /*hidden argument*/NULL);
		// m_Camera.forceIntoRenderTexture = m_Internal.hasPostProcessLayer || m_Internal.useOffscreenRT;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_m_Camera_12();
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_4 = __this->get_m_Internal_13();
		NullCheck(L_4);
		bool L_5 = L_4->get_hasPostProcessLayer_3();
		G_B1_0 = L_3;
		if (L_5)
		{
			G_B2_0 = L_3;
			goto IL_0037;
		}
	}
	{
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_6 = __this->get_m_Internal_13();
		NullCheck(L_6);
		bool L_7 = L_6->get_useOffscreenRT_8();
		G_B3_0 = ((int32_t)(L_7));
		G_B3_1 = G_B1_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0038:
	{
		NullCheck(G_B3_1);
		Camera_set_forceIntoRenderTexture_m44C397F4C0E630B9AE3D153768FC771D759AB348(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::OnPreCull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_OnPreCull_m6E8A8435E206B526BFF26828025289409A981AB6 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// PixelSnap();
		PixelPerfectCamera_PixelSnap_m91DD09A7F8EC7047E95D2853591589120C632549(__this, /*hidden argument*/NULL);
		// if (m_Internal.pixelRect != Rect.zero)
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_0 = __this->get_m_Internal_13();
		NullCheck(L_0);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1 = L_0->get_pixelRect_11();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		L_2 = Rect_get_zero_m6FEB805768121953D08DC6A84A4DA3DBD3580B6E(/*hidden argument*/NULL);
		bool L_3;
		L_3 = Rect_op_Inequality_m0CD934CD097E25176702634A23F0B1AB50FF4C15(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// m_Camera.pixelRect = m_Internal.pixelRect;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = __this->get_m_Camera_12();
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_6 = __this->get_m_Internal_13();
		NullCheck(L_6);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7 = L_6->get_pixelRect_11();
		NullCheck(L_5);
		Camera_set_pixelRect_mB1BFC3EE5DB87F9A66ED0EBFC10B9F80DF1CC61B(L_5, L_7, /*hidden argument*/NULL);
		goto IL_005f;
	}

IL_003a:
	{
		// m_Camera.rect = new Rect(0.0f, 0.0f, 1.0f, 1.0f);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = __this->get_m_Camera_12();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_9), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_rect_m556222CD5D4975EF672DC33D979611405A173F79(L_8, L_9, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// if (!m_CinemachineCompatibilityMode)
		bool L_10 = __this->get_m_CinemachineCompatibilityMode_14();
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		// m_Camera.orthographicSize = m_Internal.orthoSize;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = __this->get_m_Camera_12();
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_13 = __this->get_m_Internal_13();
		NullCheck(L_13);
		float L_14 = L_13->get_orthoSize_12();
		NullCheck(L_12);
		Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F(L_12, L_14, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::OnPreRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_OnPreRender_mF532865494E97AE563AEBE9B4496C9C1B55E87F4 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// if (m_Internal.cropFrameXOrY && !m_Camera.forceIntoRenderTexture && !m_Camera.allowMSAA)
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_0 = __this->get_m_Internal_13();
		NullCheck(L_0);
		bool L_1 = L_0->get_cropFrameXOrY_5();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_m_Camera_12();
		NullCheck(L_2);
		bool L_3;
		L_3 = Camera_get_forceIntoRenderTexture_mEB70D7C2721A8AB9FA61439DEC708A7A357EED12(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_m_Camera_12();
		NullCheck(L_4);
		bool L_5;
		L_5 = Camera_get_allowMSAA_m67C4EA3BF9AC0B742B4C34ED395D946502BCE10C(L_4, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// GL.Clear(false, true, Color.black);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_get_black_mD8CAAC9E4B8C5C92A21D176E4AB2C521CFA0EF7F(/*hidden argument*/NULL);
		GL_Clear_m012A79FD9FE6D463ACFF5B852E4399B00D4B365D((bool)0, (bool)1, L_7, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// PixelPerfectRendering.pixelSnapSpacing = m_Internal.unitsPerPixel;
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_8 = __this->get_m_Internal_13();
		NullCheck(L_8);
		float L_9 = L_8->get_unitsPerPixel_13();
		PixelPerfectRendering_set_pixelSnapSpacing_m452576A064958F45BDFF00A38520BDCCB937173C(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::OnPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_OnPostRender_m38D6AE9701187DACFC115503F17C6275AA176D43 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B7_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * G_B8_1 = NULL;
	{
		// PixelPerfectRendering.pixelSnapSpacing = 0.0f;
		PixelPerfectRendering_set_pixelSnapSpacing_m452576A064958F45BDFF00A38520BDCCB937173C((0.0f), /*hidden argument*/NULL);
		// if (m_Camera.activeTexture != null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_Camera_12();
		NullCheck(L_0);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_1;
		L_1 = Camera_get_activeTexture_mD7F968C4D92DF00DB6568A3D7B56DF9C5FEFF15A(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		// Graphics.SetRenderTarget(null as RenderTexture);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_mB988DBAF1161427E8F4FB0AB46B5B035467201F2((RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL, /*hidden argument*/NULL);
		// GL.Viewport(new Rect(0.0f, 0.0f, Screen.width, Screen.height));
		int32_t L_4;
		L_4 = Screen_get_width_m44AD823DE1C2962E3B9CE69F680C6602034DC778(/*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_6), (0.0f), (0.0f), ((float)((float)L_4)), ((float)((float)L_5)), /*hidden argument*/NULL);
		GL_Viewport_m8686A90C60315F1C5DE648B2D8BB250DF643272F(L_6, /*hidden argument*/NULL);
		// GL.Clear(false, true, Color.black);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_get_black_mD8CAAC9E4B8C5C92A21D176E4AB2C521CFA0EF7F(/*hidden argument*/NULL);
		GL_Clear_m012A79FD9FE6D463ACFF5B852E4399B00D4B365D((bool)0, (bool)1, L_7, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// if (!m_Internal.useOffscreenRT)
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_8 = __this->get_m_Internal_13();
		NullCheck(L_8);
		bool L_9 = L_8->get_useOffscreenRT_8();
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		// return;
		goto IL_00c7;
	}

IL_006c:
	{
		// RenderTexture activeRT = m_Camera.activeTexture;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = __this->get_m_Camera_12();
		NullCheck(L_11);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_12;
		L_12 = Camera_get_activeTexture_mD7F968C4D92DF00DB6568A3D7B56DF9C5FEFF15A(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// if (activeRT != null)
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_009b;
		}
	}
	{
		// activeRT.filterMode = m_Internal.useStretchFill ? FilterMode.Bilinear : FilterMode.Point;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16 = V_0;
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_17 = __this->get_m_Internal_13();
		NullCheck(L_17);
		bool L_18 = L_17->get_useStretchFill_6();
		G_B6_0 = L_16;
		if (L_18)
		{
			G_B7_0 = L_16;
			goto IL_0094;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		goto IL_0095;
	}

IL_0094:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_0095:
	{
		NullCheck(G_B8_1);
		Texture_set_filterMode_m045141DB0FEFE496885D45F5F23B15BC0E77C8D0(G_B8_1, G_B8_0, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// m_Camera.pixelRect = m_Internal.CalculatePostRenderPixelRect(m_Camera.aspect, Screen.width, Screen.height);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19 = __this->get_m_Camera_12();
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_20 = __this->get_m_Internal_13();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_21 = __this->get_m_Camera_12();
		NullCheck(L_21);
		float L_22;
		L_22 = Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987(L_21, /*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Screen_get_width_m44AD823DE1C2962E3B9CE69F680C6602034DC778(/*hidden argument*/NULL);
		int32_t L_24;
		L_24 = Screen_get_height_m71F7E12C4F33639042D80425D3169E288368C67A(/*hidden argument*/NULL);
		NullCheck(L_20);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_25;
		L_25 = PixelPerfectCameraInternal_CalculatePostRenderPixelRect_mB3065A3B8D92AA9C1C21D38B0B4301C7E814C45E(L_20, L_22, L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_19);
		Camera_set_pixelRect_mB1BFC3EE5DB87F9A66ED0EBFC10B9F80DF1CC61B(L_19, L_25, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_OnEnable_m901D29B12074BAB16C429BAF4B768DE837B6D5F0 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	{
		// m_CinemachineCompatibilityMode = false;
		__this->set_m_CinemachineCompatibilityMode_14((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera_OnDisable_m1ED518FBFC9C85DDC263ADD3BE56571EF7726D96 (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	{
		// m_Camera.rect = new Rect(0.0f, 0.0f, 1.0f, 1.0f);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_m_Camera_12();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_1), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Camera_set_rect_m556222CD5D4975EF672DC33D979611405A173F79(L_0, L_1, /*hidden argument*/NULL);
		// m_Camera.orthographicSize = m_Internal.originalOrthoSize;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_m_Camera_12();
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_3 = __this->get_m_Internal_13();
		NullCheck(L_3);
		float L_4 = L_3->get_originalOrthoSize_2();
		NullCheck(L_2);
		Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F(L_2, L_4, /*hidden argument*/NULL);
		// m_Camera.forceIntoRenderTexture = m_Internal.hasPostProcessLayer;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = __this->get_m_Camera_12();
		PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * L_6 = __this->get_m_Internal_13();
		NullCheck(L_6);
		bool L_7 = L_6->get_hasPostProcessLayer_3();
		NullCheck(L_5);
		Camera_set_forceIntoRenderTexture_m44C397F4C0E630B9AE3D153768FC771D759AB348(L_5, L_7, /*hidden argument*/NULL);
		// m_Camera.ResetAspect();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = __this->get_m_Camera_12();
		NullCheck(L_8);
		Camera_ResetAspect_mC80AD4BC18EA0E1E05F9295B58B6E7A8DB9072C0(L_8, /*hidden argument*/NULL);
		// m_Camera.ResetWorldToCameraMatrix();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = __this->get_m_Camera_12();
		NullCheck(L_9);
		Camera_ResetWorldToCameraMatrix_mE1FBF18A65E9B66FA0609D8D3A8A13052772C9B7(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCamera__ctor_mFBF09FC28EF3435A09273EF69AE9D085698F36DF (PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * __this, const RuntimeMethod* method)
{
	{
		// int m_AssetsPPU = 100;
		__this->set_m_AssetsPPU_4(((int32_t)100));
		// int m_RefResolutionX = 320;
		__this->set_m_RefResolutionX_5(((int32_t)320));
		// int m_RefResolutionY = 180;
		__this->set_m_RefResolutionY_6(((int32_t)180));
		// bool m_UpscaleRT = false;
		__this->set_m_UpscaleRT_7((bool)0);
		// bool m_PixelSnapping = false;
		__this->set_m_PixelSnapping_8((bool)0);
		// bool m_CropFrameX = false;
		__this->set_m_CropFrameX_9((bool)0);
		// bool m_CropFrameY = false;
		__this->set_m_CropFrameY_10((bool)0);
		// bool m_StretchFill = false;
		__this->set_m_StretchFill_11((bool)0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.U2D.PixelPerfectCameraInternal::.ctor(UnityEngine.U2D.IPixelPerfectCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCameraInternal__ctor_m8BED9192421CD4B18053B0FEAEF480CE303ABA5C (PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * __this, RuntimeObject* ___component0, const RuntimeMethod* method)
{
	{
		// internal bool cropFrameXAndY = false;
		__this->set_cropFrameXAndY_4((bool)0);
		// internal bool cropFrameXOrY = false;
		__this->set_cropFrameXOrY_5((bool)0);
		// internal bool useStretchFill = false;
		__this->set_useStretchFill_6((bool)0);
		// internal int zoom = 1;
		__this->set_zoom_7(1);
		// internal bool useOffscreenRT = false;
		__this->set_useOffscreenRT_8((bool)0);
		// internal int offscreenRTWidth = 0;
		__this->set_offscreenRTWidth_9(0);
		// internal int offscreenRTHeight = 0;
		__this->set_offscreenRTHeight_10(0);
		// internal Rect pixelRect = Rect.zero;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0;
		L_0 = Rect_get_zero_m6FEB805768121953D08DC6A84A4DA3DBD3580B6E(/*hidden argument*/NULL);
		__this->set_pixelRect_11(L_0);
		// internal float orthoSize = 1.0f;
		__this->set_orthoSize_12((1.0f));
		// internal float unitsPerPixel = 0.0f;
		__this->set_unitsPerPixel_13((0.0f));
		// internal int cinemachineVCamZoom = 1;
		__this->set_cinemachineVCamZoom_14(1);
		// internal PixelPerfectCameraInternal(IPixelPerfectCamera component)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Component = component;
		RuntimeObject* L_1 = ___component0;
		__this->set_m_Component_0(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCameraInternal::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCameraInternal_OnBeforeSerialize_m103DED2AF898C493C950A670BF7148F465D5AE23 (PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SerializableComponent = m_Component as PixelPerfectCamera;
		RuntimeObject* L_0 = __this->get_m_Component_0();
		__this->set_m_SerializableComponent_1(((PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 *)IsInstClass((RuntimeObject*)L_0, PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCameraInternal::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCameraInternal_OnAfterDeserialize_m8FC18117BF7136FDB3D949F29554D45121F90187 (PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_SerializableComponent != null)
		PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * L_0 = __this->get_m_SerializableComponent_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_Component = m_SerializableComponent;
		PixelPerfectCamera_tAEEA2988EBDE91F2C7D260CDA6B65FB24261CFE8 * L_3 = __this->get_m_SerializableComponent_1();
		__this->set_m_Component_0(L_3);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.U2D.PixelPerfectCameraInternal::CalculateCameraProperties(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PixelPerfectCameraInternal_CalculateCameraProperties_mD30D52BC7D19045E2AD048A85CED88C50F3C97A9 (PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * __this, int32_t ___screenWidth0, int32_t ___screenHeight1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	float V_22 = 0.0f;
	bool V_23 = false;
	float V_24 = 0.0f;
	bool V_25 = false;
	int32_t G_B15_0 = 0;
	int32_t G_B21_0 = 0;
	float G_B36_0 = 0.0f;
	int32_t G_B40_0 = 0;
	float G_B45_0 = 0.0f;
	int32_t G_B49_0 = 0;
	{
		// int assetsPPU = m_Component.assetsPPU;
		RuntimeObject* L_0 = __this->get_m_Component_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 UnityEngine.U2D.IPixelPerfectCamera::get_assetsPPU() */, IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// int refResolutionX = m_Component.refResolutionX;
		RuntimeObject* L_2 = __this->get_m_Component_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.U2D.IPixelPerfectCamera::get_refResolutionX() */, IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		// int refResolutionY = m_Component.refResolutionY;
		RuntimeObject* L_4 = __this->get_m_Component_0();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 UnityEngine.U2D.IPixelPerfectCamera::get_refResolutionY() */, IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var, L_4);
		V_2 = L_5;
		// bool upscaleRT = m_Component.upscaleRT;
		RuntimeObject* L_6 = __this->get_m_Component_0();
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean UnityEngine.U2D.IPixelPerfectCamera::get_upscaleRT() */, IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
		// bool pixelSnapping = m_Component.pixelSnapping;
		RuntimeObject* L_8 = __this->get_m_Component_0();
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.U2D.IPixelPerfectCamera::get_pixelSnapping() */, IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var, L_8);
		V_4 = L_9;
		// bool cropFrameX = m_Component.cropFrameX;
		RuntimeObject* L_10 = __this->get_m_Component_0();
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.U2D.IPixelPerfectCamera::get_cropFrameX() */, IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var, L_10);
		V_5 = L_11;
		// bool cropFrameY = m_Component.cropFrameY;
		RuntimeObject* L_12 = __this->get_m_Component_0();
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.U2D.IPixelPerfectCamera::get_cropFrameY() */, IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var, L_12);
		V_6 = L_13;
		// bool stretchFill = m_Component.stretchFill;
		RuntimeObject* L_14 = __this->get_m_Component_0();
		NullCheck(L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.U2D.IPixelPerfectCamera::get_stretchFill() */, IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var, L_14);
		V_7 = L_15;
		// cropFrameXAndY = cropFrameY && cropFrameX;
		bool L_16 = V_6;
		bool L_17 = V_5;
		__this->set_cropFrameXAndY_4((bool)((int32_t)((int32_t)L_16&(int32_t)L_17)));
		// cropFrameXOrY = cropFrameY || cropFrameX;
		bool L_18 = V_6;
		bool L_19 = V_5;
		__this->set_cropFrameXOrY_5((bool)((int32_t)((int32_t)L_18|(int32_t)L_19)));
		// useStretchFill = cropFrameXAndY && stretchFill;
		bool L_20 = __this->get_cropFrameXAndY_4();
		bool L_21 = V_7;
		__this->set_useStretchFill_6((bool)((int32_t)((int32_t)L_20&(int32_t)L_21)));
		// int verticalZoom = screenHeight / refResolutionY;
		int32_t L_22 = ___screenHeight1;
		int32_t L_23 = V_2;
		V_8 = ((int32_t)((int32_t)L_22/(int32_t)L_23));
		// int horizontalZoom = screenWidth / refResolutionX;
		int32_t L_24 = ___screenWidth0;
		int32_t L_25 = V_1;
		V_9 = ((int32_t)((int32_t)L_24/(int32_t)L_25));
		// zoom = Math.Max(1, Math.Min(verticalZoom, horizontalZoom));
		int32_t L_26 = V_8;
		int32_t L_27 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B(L_26, L_27, /*hidden argument*/NULL);
		int32_t L_29;
		L_29 = Math_Max_m709673BDF5D9264E61FEBBC4CE1038752523838D(1, L_28, /*hidden argument*/NULL);
		__this->set_zoom_7(L_29);
		// useOffscreenRT = false;
		__this->set_useOffscreenRT_8((bool)0);
		// offscreenRTWidth = 0;
		__this->set_offscreenRTWidth_9(0);
		// offscreenRTHeight = 0;
		__this->set_offscreenRTHeight_10(0);
		// if (cropFrameXOrY)
		bool L_30 = __this->get_cropFrameXOrY_5();
		V_10 = L_30;
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_0177;
		}
	}
	{
		// if (!upscaleRT)
		bool L_32 = V_3;
		V_11 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_010d;
		}
	}
	{
		// if (useStretchFill)
		bool L_34 = __this->get_useStretchFill_6();
		V_12 = L_34;
		bool L_35 = V_12;
		if (!L_35)
		{
			goto IL_010a;
		}
	}
	{
		// useOffscreenRT = true;
		__this->set_useOffscreenRT_8((bool)1);
		// offscreenRTWidth = zoom * refResolutionX;
		int32_t L_36 = __this->get_zoom_7();
		int32_t L_37 = V_1;
		__this->set_offscreenRTWidth_9(((int32_t)il2cpp_codegen_multiply((int32_t)L_36, (int32_t)L_37)));
		// offscreenRTHeight = zoom * refResolutionY;
		int32_t L_38 = __this->get_zoom_7();
		int32_t L_39 = V_2;
		__this->set_offscreenRTHeight_10(((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)L_39)));
	}

IL_010a:
	{
		goto IL_0174;
	}

IL_010d:
	{
		// useOffscreenRT = true;
		__this->set_useOffscreenRT_8((bool)1);
		// if (cropFrameXAndY)
		bool L_40 = __this->get_cropFrameXAndY_4();
		V_13 = L_40;
		bool L_41 = V_13;
		if (!L_41)
		{
			goto IL_0133;
		}
	}
	{
		// offscreenRTWidth = refResolutionX;
		int32_t L_42 = V_1;
		__this->set_offscreenRTWidth_9(L_42);
		// offscreenRTHeight = refResolutionY;
		int32_t L_43 = V_2;
		__this->set_offscreenRTHeight_10(L_43);
		goto IL_0173;
	}

IL_0133:
	{
		// else if (cropFrameY)
		bool L_44 = V_6;
		V_14 = L_44;
		bool L_45 = V_14;
		if (!L_45)
		{
			goto IL_0158;
		}
	}
	{
		// offscreenRTWidth = screenWidth / zoom / 2 * 2;   // Make sure it's an even number by / 2 * 2.
		int32_t L_46 = ___screenWidth0;
		int32_t L_47 = __this->get_zoom_7();
		__this->set_offscreenRTWidth_9(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_46/(int32_t)L_47))/(int32_t)2)), (int32_t)2)));
		// offscreenRTHeight = refResolutionY;
		int32_t L_48 = V_2;
		__this->set_offscreenRTHeight_10(L_48);
		goto IL_0173;
	}

IL_0158:
	{
		// offscreenRTWidth = refResolutionX;
		int32_t L_49 = V_1;
		__this->set_offscreenRTWidth_9(L_49);
		// offscreenRTHeight = screenHeight / zoom / 2 * 2;   // Make sure it's an even number by / 2 * 2.
		int32_t L_50 = ___screenHeight1;
		int32_t L_51 = __this->get_zoom_7();
		__this->set_offscreenRTHeight_10(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_50/(int32_t)L_51))/(int32_t)2)), (int32_t)2)));
	}

IL_0173:
	{
	}

IL_0174:
	{
		goto IL_01b9;
	}

IL_0177:
	{
		// else if (upscaleRT && zoom > 1)
		bool L_52 = V_3;
		if (!L_52)
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_53 = __this->get_zoom_7();
		G_B15_0 = ((((int32_t)L_53) > ((int32_t)1))? 1 : 0);
		goto IL_0186;
	}

IL_0185:
	{
		G_B15_0 = 0;
	}

IL_0186:
	{
		V_15 = (bool)G_B15_0;
		bool L_54 = V_15;
		if (!L_54)
		{
			goto IL_01b9;
		}
	}
	{
		// useOffscreenRT = true;
		__this->set_useOffscreenRT_8((bool)1);
		// offscreenRTWidth = screenWidth / zoom / 2 * 2;        // Make sure it's an even number by / 2 * 2.
		int32_t L_55 = ___screenWidth0;
		int32_t L_56 = __this->get_zoom_7();
		__this->set_offscreenRTWidth_9(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_55/(int32_t)L_56))/(int32_t)2)), (int32_t)2)));
		// offscreenRTHeight = screenHeight / zoom / 2 * 2;
		int32_t L_57 = ___screenHeight1;
		int32_t L_58 = __this->get_zoom_7();
		__this->set_offscreenRTHeight_10(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_57/(int32_t)L_58))/(int32_t)2)), (int32_t)2)));
	}

IL_01b9:
	{
		// pixelRect = Rect.zero;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_59;
		L_59 = Rect_get_zero_m6FEB805768121953D08DC6A84A4DA3DBD3580B6E(/*hidden argument*/NULL);
		__this->set_pixelRect_11(L_59);
		// if (cropFrameXOrY && !upscaleRT && !useStretchFill)
		bool L_60 = __this->get_cropFrameXOrY_5();
		if (!L_60)
		{
			goto IL_01da;
		}
	}
	{
		bool L_61 = V_3;
		if (L_61)
		{
			goto IL_01da;
		}
	}
	{
		bool L_62 = __this->get_useStretchFill_6();
		G_B21_0 = ((((int32_t)L_62) == ((int32_t)0))? 1 : 0);
		goto IL_01db;
	}

IL_01da:
	{
		G_B21_0 = 0;
	}

IL_01db:
	{
		V_16 = (bool)G_B21_0;
		bool L_63 = V_16;
		if (!L_63)
		{
			goto IL_02b0;
		}
	}
	{
		// if (cropFrameXAndY)
		bool L_64 = __this->get_cropFrameXAndY_4();
		V_17 = L_64;
		bool L_65 = V_17;
		if (!L_65)
		{
			goto IL_021f;
		}
	}
	{
		// pixelRect.width = zoom * refResolutionX;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_66 = __this->get_address_of_pixelRect_11();
		int32_t L_67 = __this->get_zoom_7();
		int32_t L_68 = V_1;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_66, ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_67, (int32_t)L_68)))), /*hidden argument*/NULL);
		// pixelRect.height = zoom * refResolutionY;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_69 = __this->get_address_of_pixelRect_11();
		int32_t L_70 = __this->get_zoom_7();
		int32_t L_71 = V_2;
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_69, ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_70, (int32_t)L_71)))), /*hidden argument*/NULL);
		goto IL_0273;
	}

IL_021f:
	{
		// else if (cropFrameY)
		bool L_72 = V_6;
		V_18 = L_72;
		bool L_73 = V_18;
		if (!L_73)
		{
			goto IL_024e;
		}
	}
	{
		// pixelRect.width = screenWidth;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_74 = __this->get_address_of_pixelRect_11();
		int32_t L_75 = ___screenWidth0;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_74, ((float)((float)L_75)), /*hidden argument*/NULL);
		// pixelRect.height = zoom * refResolutionY;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_76 = __this->get_address_of_pixelRect_11();
		int32_t L_77 = __this->get_zoom_7();
		int32_t L_78 = V_2;
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_76, ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_77, (int32_t)L_78)))), /*hidden argument*/NULL);
		goto IL_0273;
	}

IL_024e:
	{
		// pixelRect.width = zoom * refResolutionX;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_79 = __this->get_address_of_pixelRect_11();
		int32_t L_80 = __this->get_zoom_7();
		int32_t L_81 = V_1;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_79, ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_80, (int32_t)L_81)))), /*hidden argument*/NULL);
		// pixelRect.height = screenHeight;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_82 = __this->get_address_of_pixelRect_11();
		int32_t L_83 = ___screenHeight1;
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_82, ((float)((float)L_83)), /*hidden argument*/NULL);
	}

IL_0273:
	{
		// pixelRect.x = (screenWidth - (int)pixelRect.width) / 2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_84 = __this->get_address_of_pixelRect_11();
		int32_t L_85 = ___screenWidth0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_86 = __this->get_address_of_pixelRect_11();
		float L_87;
		L_87 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_86, /*hidden argument*/NULL);
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_84, ((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_87)))/(int32_t)2)))), /*hidden argument*/NULL);
		// pixelRect.y = (screenHeight - (int)pixelRect.height) / 2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_88 = __this->get_address_of_pixelRect_11();
		int32_t L_89 = ___screenHeight1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_90 = __this->get_address_of_pixelRect_11();
		float L_91;
		L_91 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_90, /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_88, ((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_91)))/(int32_t)2)))), /*hidden argument*/NULL);
		goto IL_02e1;
	}

IL_02b0:
	{
		// else if (useOffscreenRT)
		bool L_92 = __this->get_useOffscreenRT_8();
		V_19 = L_92;
		bool L_93 = V_19;
		if (!L_93)
		{
			goto IL_02e1;
		}
	}
	{
		// pixelRect = new Rect(0.0f, 0.0f, offscreenRTWidth, offscreenRTHeight);
		int32_t L_94 = __this->get_offscreenRTWidth_9();
		int32_t L_95 = __this->get_offscreenRTHeight_10();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_96;
		memset((&L_96), 0, sizeof(L_96));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_96), (0.0f), (0.0f), ((float)((float)L_94)), ((float)((float)L_95)), /*hidden argument*/NULL);
		__this->set_pixelRect_11(L_96);
	}

IL_02e1:
	{
		// if (cropFrameY)
		bool L_97 = V_6;
		V_20 = L_97;
		bool L_98 = V_20;
		if (!L_98)
		{
			goto IL_02ff;
		}
	}
	{
		// orthoSize = (refResolutionY * 0.5f) / assetsPPU;
		int32_t L_99 = V_2;
		int32_t L_100 = V_0;
		__this->set_orthoSize_12(((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_99)), (float)(0.5f)))/(float)((float)((float)L_100)))));
		goto IL_03bb;
	}

IL_02ff:
	{
		// else if (cropFrameX)
		bool L_101 = V_5;
		V_21 = L_101;
		bool L_102 = V_21;
		if (!L_102)
		{
			goto IL_0351;
		}
	}
	{
		// float aspect = (pixelRect == Rect.zero) ? (float)screenWidth / screenHeight : pixelRect.width / pixelRect.height;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_103 = __this->get_pixelRect_11();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_104;
		L_104 = Rect_get_zero_m6FEB805768121953D08DC6A84A4DA3DBD3580B6E(/*hidden argument*/NULL);
		bool L_105;
		L_105 = Rect_op_Equality_m4314500293279390A96F5121F17501A969554C32(L_103, L_104, /*hidden argument*/NULL);
		if (L_105)
		{
			goto IL_0333;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_106 = __this->get_address_of_pixelRect_11();
		float L_107;
		L_107 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_106, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_108 = __this->get_address_of_pixelRect_11();
		float L_109;
		L_109 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_108, /*hidden argument*/NULL);
		G_B36_0 = ((float)((float)L_107/(float)L_109));
		goto IL_0338;
	}

IL_0333:
	{
		int32_t L_110 = ___screenWidth0;
		int32_t L_111 = ___screenHeight1;
		G_B36_0 = ((float)((float)((float)((float)L_110))/(float)((float)((float)L_111))));
	}

IL_0338:
	{
		V_22 = G_B36_0;
		// orthoSize = ((refResolutionX / aspect) * 0.5f) / assetsPPU;
		int32_t L_112 = V_1;
		float L_113 = V_22;
		int32_t L_114 = V_0;
		__this->set_orthoSize_12(((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)((float)L_112))/(float)L_113)), (float)(0.5f)))/(float)((float)((float)L_114)))));
		goto IL_03bb;
	}

IL_0351:
	{
		// else if (upscaleRT && zoom > 1)
		bool L_115 = V_3;
		if (!L_115)
		{
			goto IL_035f;
		}
	}
	{
		int32_t L_116 = __this->get_zoom_7();
		G_B40_0 = ((((int32_t)L_116) > ((int32_t)1))? 1 : 0);
		goto IL_0360;
	}

IL_035f:
	{
		G_B40_0 = 0;
	}

IL_0360:
	{
		V_23 = (bool)G_B40_0;
		bool L_117 = V_23;
		if (!L_117)
		{
			goto IL_037e;
		}
	}
	{
		// orthoSize = (offscreenRTHeight * 0.5f) / assetsPPU;
		int32_t L_118 = __this->get_offscreenRTHeight_10();
		int32_t L_119 = V_0;
		__this->set_orthoSize_12(((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_118)), (float)(0.5f)))/(float)((float)((float)L_119)))));
		goto IL_03bb;
	}

IL_037e:
	{
		// float pixelHeight = (pixelRect == Rect.zero) ? screenHeight : pixelRect.height;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_120 = __this->get_pixelRect_11();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_121;
		L_121 = Rect_get_zero_m6FEB805768121953D08DC6A84A4DA3DBD3580B6E(/*hidden argument*/NULL);
		bool L_122;
		L_122 = Rect_op_Equality_m4314500293279390A96F5121F17501A969554C32(L_120, L_121, /*hidden argument*/NULL);
		if (L_122)
		{
			goto IL_039e;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_123 = __this->get_address_of_pixelRect_11();
		float L_124;
		L_124 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_123, /*hidden argument*/NULL);
		G_B45_0 = L_124;
		goto IL_03a0;
	}

IL_039e:
	{
		int32_t L_125 = ___screenHeight1;
		G_B45_0 = ((float)((float)L_125));
	}

IL_03a0:
	{
		V_24 = G_B45_0;
		// orthoSize = (pixelHeight * 0.5f) / (zoom * assetsPPU);
		float L_126 = V_24;
		int32_t L_127 = __this->get_zoom_7();
		int32_t L_128 = V_0;
		__this->set_orthoSize_12(((float)((float)((float)il2cpp_codegen_multiply((float)L_126, (float)(0.5f)))/(float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_127, (int32_t)L_128)))))));
	}

IL_03bb:
	{
		// if (upscaleRT || (!upscaleRT && pixelSnapping))
		bool L_129 = V_3;
		if (L_129)
		{
			goto IL_03c7;
		}
	}
	{
		bool L_130 = V_3;
		bool L_131 = V_4;
		G_B49_0 = ((int32_t)((int32_t)((((int32_t)L_130) == ((int32_t)0))? 1 : 0)&(int32_t)L_131));
		goto IL_03c8;
	}

IL_03c7:
	{
		G_B49_0 = 1;
	}

IL_03c8:
	{
		V_25 = (bool)G_B49_0;
		bool L_132 = V_25;
		if (!L_132)
		{
			goto IL_03de;
		}
	}
	{
		// unitsPerPixel = 1.0f / assetsPPU;
		int32_t L_133 = V_0;
		__this->set_unitsPerPixel_13(((float)((float)(1.0f)/(float)((float)((float)L_133)))));
		goto IL_03f3;
	}

IL_03de:
	{
		// unitsPerPixel = 1.0f / (zoom * assetsPPU);
		int32_t L_134 = __this->get_zoom_7();
		int32_t L_135 = V_0;
		__this->set_unitsPerPixel_13(((float)((float)(1.0f)/(float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_134, (int32_t)L_135)))))));
	}

IL_03f3:
	{
		// }
		return;
	}
}
// UnityEngine.Rect UnityEngine.U2D.PixelPerfectCameraInternal::CalculatePostRenderPixelRect(System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  PixelPerfectCameraInternal_CalculatePostRenderPixelRect_mB3065A3B8D92AA9C1C21D38B0B4301C7E814C45E (PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * __this, float ___cameraAspect0, int32_t ___screenWidth1, int32_t ___screenHeight2, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float V_2 = 0.0f;
	bool V_3 = false;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Rect pixelRect = new Rect();
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 ));
		// if (useStretchFill)
		bool L_0 = __this->get_useStretchFill_6();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_009e;
		}
	}
	{
		// float screenAspect = (float)screenWidth / screenHeight;
		int32_t L_2 = ___screenWidth1;
		int32_t L_3 = ___screenHeight2;
		V_2 = ((float)((float)((float)((float)L_2))/(float)((float)((float)L_3))));
		// if (screenAspect > cameraAspect)
		float L_4 = V_2;
		float L_5 = ___cameraAspect0;
		V_3 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0061;
		}
	}
	{
		// pixelRect.height = screenHeight;
		int32_t L_7 = ___screenHeight2;
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)L_7)), /*hidden argument*/NULL);
		// pixelRect.width = screenHeight * cameraAspect;
		int32_t L_8 = ___screenHeight2;
		float L_9 = ___cameraAspect0;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)il2cpp_codegen_multiply((float)((float)((float)L_8)), (float)L_9)), /*hidden argument*/NULL);
		// pixelRect.x = (screenWidth - (int)pixelRect.width) / 2;
		int32_t L_10 = ___screenWidth1;
		float L_11;
		L_11 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_11)))/(int32_t)2)))), /*hidden argument*/NULL);
		// pixelRect.y = 0;
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), (0.0f), /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_0061:
	{
		// pixelRect.width = screenWidth;
		int32_t L_12 = ___screenWidth1;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)L_12)), /*hidden argument*/NULL);
		// pixelRect.height = screenWidth / cameraAspect;
		int32_t L_13 = ___screenWidth1;
		float L_14 = ___cameraAspect0;
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)((float)((float)L_13))/(float)L_14)), /*hidden argument*/NULL);
		// pixelRect.y = (screenHeight - (int)pixelRect.height) / 2;
		int32_t L_15 = ___screenHeight2;
		float L_16;
		L_16 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_16)))/(int32_t)2)))), /*hidden argument*/NULL);
		// pixelRect.x = 0;
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), (0.0f), /*hidden argument*/NULL);
	}

IL_009b:
	{
		goto IL_00f6;
	}

IL_009e:
	{
		// pixelRect.height = zoom * offscreenRTHeight;
		int32_t L_17 = __this->get_zoom_7();
		int32_t L_18 = __this->get_offscreenRTHeight_10();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)L_18)))), /*hidden argument*/NULL);
		// pixelRect.width = zoom * offscreenRTWidth;
		int32_t L_19 = __this->get_zoom_7();
		int32_t L_20 = __this->get_offscreenRTWidth_9();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20)))), /*hidden argument*/NULL);
		// pixelRect.x = (screenWidth - (int)pixelRect.width) / 2;
		int32_t L_21 = ___screenWidth1;
		float L_22;
		L_22 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_22)))/(int32_t)2)))), /*hidden argument*/NULL);
		// pixelRect.y = (screenHeight - (int)pixelRect.height) / 2;
		int32_t L_23 = ___screenHeight2;
		float L_24;
		L_24 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), ((float)((float)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_24)))/(int32_t)2)))), /*hidden argument*/NULL);
	}

IL_00f6:
	{
		// return pixelRect;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_25 = V_0;
		V_4 = L_25;
		goto IL_00fb;
	}

IL_00fb:
	{
		// }
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_26 = V_4;
		return L_26;
	}
}
// System.Single UnityEngine.U2D.PixelPerfectCameraInternal::CorrectCinemachineOrthoSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PixelPerfectCameraInternal_CorrectCinemachineOrthoSize_mCE913421BC4294451DC3869F2EB052D3B3802ED1 (PixelPerfectCameraInternal_t95E6E3E3BDA1D90E9F4489ED6B43D1673E0818AB * __this, float ___targetOrthoSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t G_B6_0 = 0;
	{
		// if (m_Component.upscaleRT)
		RuntimeObject* L_0 = __this->get_m_Component_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean UnityEngine.U2D.IPixelPerfectCamera::get_upscaleRT() */, IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// cinemachineVCamZoom = Math.Max(1, Mathf.RoundToInt(orthoSize / targetOrthoSize));
		float L_3 = __this->get_orthoSize_12();
		float L_4 = ___targetOrthoSize0;
		int32_t L_5;
		L_5 = Mathf_RoundToInt_m95CE4916FFD8D1F8D87CF21A3C9EC257EBD8F578(((float)((float)L_3/(float)L_4)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Max_m709673BDF5D9264E61FEBBC4CE1038752523838D(1, L_5, /*hidden argument*/NULL);
		__this->set_cinemachineVCamZoom_14(L_6);
		// correctedOrthoSize = orthoSize / cinemachineVCamZoom;
		float L_7 = __this->get_orthoSize_12();
		int32_t L_8 = __this->get_cinemachineVCamZoom_14();
		V_0 = ((float)((float)L_7/(float)((float)((float)L_8))));
		goto IL_0076;
	}

IL_003c:
	{
		// cinemachineVCamZoom = Math.Max(1, Mathf.RoundToInt(zoom * orthoSize / targetOrthoSize));
		int32_t L_9 = __this->get_zoom_7();
		float L_10 = __this->get_orthoSize_12();
		float L_11 = ___targetOrthoSize0;
		int32_t L_12;
		L_12 = Mathf_RoundToInt_m95CE4916FFD8D1F8D87CF21A3C9EC257EBD8F578(((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_9)), (float)L_10))/(float)L_11)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Math_Max_m709673BDF5D9264E61FEBBC4CE1038752523838D(1, L_12, /*hidden argument*/NULL);
		__this->set_cinemachineVCamZoom_14(L_13);
		// correctedOrthoSize = zoom * orthoSize / cinemachineVCamZoom;
		int32_t L_14 = __this->get_zoom_7();
		float L_15 = __this->get_orthoSize_12();
		int32_t L_16 = __this->get_cinemachineVCamZoom_14();
		V_0 = ((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_14)), (float)L_15))/(float)((float)((float)L_16))));
	}

IL_0076:
	{
		// if (!m_Component.upscaleRT && !m_Component.pixelSnapping)
		RuntimeObject* L_17 = __this->get_m_Component_0();
		NullCheck(L_17);
		bool L_18;
		L_18 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean UnityEngine.U2D.IPixelPerfectCamera::get_upscaleRT() */, IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var, L_17);
		if (L_18)
		{
			goto IL_0093;
		}
	}
	{
		RuntimeObject* L_19 = __this->get_m_Component_0();
		NullCheck(L_19);
		bool L_20;
		L_20 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.U2D.IPixelPerfectCamera::get_pixelSnapping() */, IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var, L_19);
		G_B6_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		goto IL_0094;
	}

IL_0093:
	{
		G_B6_0 = 0;
	}

IL_0094:
	{
		V_2 = (bool)G_B6_0;
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_00b7;
		}
	}
	{
		// unitsPerPixel = 1.0f / (cinemachineVCamZoom * m_Component.assetsPPU);
		int32_t L_22 = __this->get_cinemachineVCamZoom_14();
		RuntimeObject* L_23 = __this->get_m_Component_0();
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 UnityEngine.U2D.IPixelPerfectCamera::get_assetsPPU() */, IPixelPerfectCamera_t9F0A1326B7A342C5BDF45EB98760E0E380CEEAB7_il2cpp_TypeInfo_var, L_23);
		__this->set_unitsPerPixel_13(((float)((float)(1.0f)/(float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)L_24)))))));
	}

IL_00b7:
	{
		// return correctedOrthoSize;
		float L_25 = V_0;
		V_3 = L_25;
		goto IL_00bb;
	}

IL_00bb:
	{
		// }
		float L_26 = V_3;
		return L_26;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m56EB454031EABB53BA35FECF3F61A7E2332A2521_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
