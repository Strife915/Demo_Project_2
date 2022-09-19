#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// UnityEngine.CreateAssetMenuAttribute
struct CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.CreateAssetMenuAttribute
struct CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.CreateAssetMenuAttribute::<menuName>k__BackingField
	String_t* ___U3CmenuNameU3Ek__BackingField_0;
	// System.String UnityEngine.CreateAssetMenuAttribute::<fileName>k__BackingField
	String_t* ___U3CfileNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmenuNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C, ___U3CmenuNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CmenuNameU3Ek__BackingField_0() const { return ___U3CmenuNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CmenuNameU3Ek__BackingField_0() { return &___U3CmenuNameU3Ek__BackingField_0; }
	inline void set_U3CmenuNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CmenuNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmenuNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfileNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C, ___U3CfileNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CfileNameU3Ek__BackingField_1() const { return ___U3CfileNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CfileNameU3Ek__BackingField_1() { return &___U3CfileNameU3Ek__BackingField_1; }
	inline void set_U3CfileNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CfileNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfileNameU3Ek__BackingField_1), (void*)value);
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

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// System.Diagnostics.DebuggerBrowsableState
struct DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5 (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CreateAssetMenuAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateAssetMenuAttribute__ctor_mF4754D0F74BACF7BB7DAC67F46690A69256D2D65 (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CreateAssetMenuAttribute::set_menuName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAssetMenuAttribute_set_menuName_m27C32BCE71E6A5ED185212F083DFB23201B514F1_inline (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CreateAssetMenuAttribute::set_fileName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAssetMenuAttribute_set_fileName_m14EBC66F19AEC15751EC9822478CDDBA9DE8D2F6_inline (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * __this, String_t* ___value0, const RuntimeMethod* method);
static void DemoProject2_Scripts_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[0];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[1];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[2];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
}
static void CinemachinePan_t95858888539198F9DEF5BCFD0EEBFE5359F16A3B_CustomAttributesCacheGenerator__panSpeed(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void MouseClicks_t9B33A9D54BB2A8044122B2BB6E87719D4F5FA837_CustomAttributesCacheGenerator_U3CassetU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void MouseClicks_t9B33A9D54BB2A8044122B2BB6E87719D4F5FA837_CustomAttributesCacheGenerator_MouseClicks_get_asset_m8F6C3CCB08C8B58C24630D4BF3835C791A190E72(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void InfiniteScroll_tACAFA313A12E03E9F27ADF59095AD4BC5187B562_CustomAttributesCacheGenerator__scrollContent(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void InfiniteScroll_tACAFA313A12E03E9F27ADF59095AD4BC5187B562_CustomAttributesCacheGenerator__outOfBoundsThreshold(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ScrollContent_t8921F772EC9AB8FC9530561AA2A4317B4F3C167E_CustomAttributesCacheGenerator__itemSpacing(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ScrollContent_t8921F772EC9AB8FC9530561AA2A4317B4F3C167E_CustomAttributesCacheGenerator__horizontalMargin(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ScrollContent_t8921F772EC9AB8FC9530561AA2A4317B4F3C167E_CustomAttributesCacheGenerator__verticalMargin(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ScrollContent_t8921F772EC9AB8FC9530561AA2A4317B4F3C167E_CustomAttributesCacheGenerator__horizontal(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ScrollContent_t8921F772EC9AB8FC9530561AA2A4317B4F3C167E_CustomAttributesCacheGenerator__vertical(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ProduceSoldierButton_t81AB82E6C34824556943A06C5B219696D99769E3_CustomAttributesCacheGenerator__productionPrefab(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ProduceSoldierButton_t81AB82E6C34824556943A06C5B219696D99769E3_CustomAttributesCacheGenerator__button(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ProduceSoldierButton_t81AB82E6C34824556943A06C5B219696D99769E3_CustomAttributesCacheGenerator__initialSpawnPos(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ProduceSoldierButton_t81AB82E6C34824556943A06C5B219696D99769E3_CustomAttributesCacheGenerator__initialMovePos(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void InformationPanelFiller_t7B9D0611A52C0ABF30DABBACAF3784867CE5E65A_CustomAttributesCacheGenerator__informationAction(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void InformationPanelFiller_t7B9D0611A52C0ABF30DABBACAF3784867CE5E65A_CustomAttributesCacheGenerator__mainImage(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void InformationPanelFiller_t7B9D0611A52C0ABF30DABBACAF3784867CE5E65A_CustomAttributesCacheGenerator__subImage(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void InformationPanelFiller_t7B9D0611A52C0ABF30DABBACAF3784867CE5E65A_CustomAttributesCacheGenerator__mainName(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void InformationPanelFiller_t7B9D0611A52C0ABF30DABBACAF3784867CE5E65A_CustomAttributesCacheGenerator__subName(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void NewInputReader_t6A44AD3C03C26B907F734271C7529CA11638BE88_CustomAttributesCacheGenerator_U3CClickPosU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void NewInputReader_t6A44AD3C03C26B907F734271C7529CA11638BE88_CustomAttributesCacheGenerator_NewInputReader_get_ClickPos_m2CBA02ABBEC5290AA65D38C6AB5DD10562885262(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void NewInputReader_t6A44AD3C03C26B907F734271C7529CA11638BE88_CustomAttributesCacheGenerator_NewInputReader_set_ClickPos_m118A4FF59A7691937EBA27551129BB2DDB828A85(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CursorController_t74F24CC3C8E1280CF5D05F13ABB34459E9410A7D_CustomAttributesCacheGenerator_U3CInputReaderU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void CursorController_t74F24CC3C8E1280CF5D05F13ABB34459E9410A7D_CustomAttributesCacheGenerator_CursorController_get_InputReader_m8B77E5D6003811228593B8F8C52F3C27A08E8E60(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CursorController_t74F24CC3C8E1280CF5D05F13ABB34459E9410A7D_CustomAttributesCacheGenerator_CursorController_set_InputReader_m7007316FEDF934BE2CCDCBC2DBD34FF08FF2A718(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator__mainTileMap(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator__productionMenu(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator__layerMask(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_U3CCursorControllerU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_U3CStateMachineU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_U3CPlayerIdleStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_U3CPlayerBuildStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_U3CPlayerCommandStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_get_CursorController_m78F10F223F8D94CB80D12657FB318353BFA825E0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_set_CursorController_m1F26F782D723FF68F8DA2E64FADD6B89272DE8BC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_get_StateMachine_m78F1CCCECE30E999E0B5A437200004A2FC9E1EFB(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_set_StateMachine_m81FBBD3DD72BA3C9A631963AC1FAD810F3988067(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_get_PlayerIdleState_m93DD0EAFD5B407BDA815EC0A0E7B17484805AB70(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_set_PlayerIdleState_mF0374C5CAAC944EF2A2B0CC3620EEA4502EBA936(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_get_PlayerBuildState_mEC7241736254E076619DEB999DAD1077B15EA57D(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_set_PlayerBuildState_m5CE4DE52FBBEF183FCFA20A2CBFCF9B02CF7B4A5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_get_PlayerCommandState_m992E2E676074B4F4BE3A9C80F07C1ABA445603F7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_set_PlayerCommandState_m9C747F4CA7400DE7DFDB55B6F32C6F41E46C6417(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator__stats(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator__target(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator__sprite(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_U3C_moverU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_U3CSoldierStateMachineU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_U3CSoldierIdleStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_U3CSoldierMoveStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_get__mover_m6863ECB63F1CCC6A966F99CCE81D6199C425BB94(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_set__mover_m7EEE0EE48DE0F3C9C4D26BCE4616F859E29E52A4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_get_SoldierStateMachine_mFB0F7E682A4DA0C8E09FAD42659D37133944839C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_set_SoldierStateMachine_mA9A39640A4468B758A5FACDC9057A54EA8CD47C8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_get_SoldierIdleState_m5598E55F8BCF621912183C771F622E79B04897C7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_set_SoldierIdleState_m3C4807B7433EB3EE78506A9DEC229C1C5B0F4551(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_get_SoldierMoveState_m091074457DB9438D1A88B05A0EDB005729861A78(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_set_SoldierMoveState_m1460A7EA1F979E24F9FE88EDCF6F49A6D8D79FE3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AstarObjectAnimationController_tD8A34AAFA7EFE73478E701B3781FD677E9FBC3D9_CustomAttributesCacheGenerator_U3CAnimatorU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AstarObjectAnimationController_tD8A34AAFA7EFE73478E701B3781FD677E9FBC3D9_CustomAttributesCacheGenerator_AstarObjectAnimationController_get_Animator_m881A5BB3B1DF5006A36643F1253A6ECBB42F38F7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Building_tCA86457EBFE3452D6EF57393D1ABDF82F78E14D9_CustomAttributesCacheGenerator__spriteRenderer(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void Building_tCA86457EBFE3452D6EF57393D1ABDF82F78E14D9_CustomAttributesCacheGenerator_U3CPlacedU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Building_tCA86457EBFE3452D6EF57393D1ABDF82F78E14D9_CustomAttributesCacheGenerator_Building_get_Placed_m8AFFA1728D4F8A3F02ACA35CB30371CBC79485E7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Building_tCA86457EBFE3452D6EF57393D1ABDF82F78E14D9_CustomAttributesCacheGenerator_Building_set_Placed_m4A87BC7D865441598D0E60DD9F0DB1D736C7D250(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GridBuildingSystem_tCFAF172332E0F93C010DD29D83BAF9AD2678A48E_CustomAttributesCacheGenerator__gridLayout(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GridBuildingSystem_tCFAF172332E0F93C010DD29D83BAF9AD2678A48E_CustomAttributesCacheGenerator__mainTilemap(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GridBuildingSystem_tCFAF172332E0F93C010DD29D83BAF9AD2678A48E_CustomAttributesCacheGenerator__tempTilemap(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void GridBuildingSystem_tCFAF172332E0F93C010DD29D83BAF9AD2678A48E_CustomAttributesCacheGenerator__player(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ProductionBuild_t5FBABDD059C5AB3832E254213F91B2F92FFFC15B_CustomAttributesCacheGenerator__canvas(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ProductionBuild_t5FBABDD059C5AB3832E254213F91B2F92FFFC15B_CustomAttributesCacheGenerator__initialSpawnPos(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ProductionBuild_t5FBABDD059C5AB3832E254213F91B2F92FFFC15B_CustomAttributesCacheGenerator__buildingData(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ProductionBuild_t5FBABDD059C5AB3832E254213F91B2F92FFFC15B_CustomAttributesCacheGenerator__infoAction(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ProduceBuildingDataContainerSO_t20917595AAD239A5417B3B60138EBF88B63FBF35_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * tmp = (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C *)cache->attributes[0];
		CreateAssetMenuAttribute__ctor_mF4754D0F74BACF7BB7DAC67F46690A69256D2D65(tmp, NULL);
		CreateAssetMenuAttribute_set_menuName_m27C32BCE71E6A5ED185212F083DFB23201B514F1_inline(tmp, il2cpp_codegen_string_new_wrapper("\x50\x61\x6E\x74\x65\x6F\x6E\x2F\x44\x61\x74\x61\x20\x43\x6F\x6E\x74\x61\x69\x6E\x65\x72\x2F\x42\x75\x69\x6C\x64\x69\x6E\x67\x20\x44\x61\x74\x61"), NULL);
		CreateAssetMenuAttribute_set_fileName_m14EBC66F19AEC15751EC9822478CDDBA9DE8D2F6_inline(tmp, il2cpp_codegen_string_new_wrapper("\x42\x75\x69\x6C\x64\x69\x6E\x67\x20\x44\x61\x74\x61\x20\x43\x6F\x6E\x74\x61\x69\x6E\x65\x72"), NULL);
	}
}
static void ProduceBuildingDataContainerSO_t20917595AAD239A5417B3B60138EBF88B63FBF35_CustomAttributesCacheGenerator__mainName(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ProduceBuildingDataContainerSO_t20917595AAD239A5417B3B60138EBF88B63FBF35_CustomAttributesCacheGenerator__subName(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ProduceBuildingDataContainerSO_t20917595AAD239A5417B3B60138EBF88B63FBF35_CustomAttributesCacheGenerator__mainImage(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ProduceBuildingDataContainerSO_t20917595AAD239A5417B3B60138EBF88B63FBF35_CustomAttributesCacheGenerator__subImage(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void SoldierDataContainerSO_t8DE187BCB878312F9C6ED15296863CBA4C83F5D7_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * tmp = (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C *)cache->attributes[0];
		CreateAssetMenuAttribute__ctor_mF4754D0F74BACF7BB7DAC67F46690A69256D2D65(tmp, NULL);
		CreateAssetMenuAttribute_set_menuName_m27C32BCE71E6A5ED185212F083DFB23201B514F1_inline(tmp, il2cpp_codegen_string_new_wrapper("\x50\x61\x6E\x74\x65\x6F\x6E\x2F\x44\x61\x74\x61\x20\x43\x6F\x6E\x74\x61\x69\x6E\x65\x72\x2F\x53\x6F\x6C\x64\x69\x65\x72\x20\x44\x61\x74\x61"), NULL);
		CreateAssetMenuAttribute_set_fileName_m14EBC66F19AEC15751EC9822478CDDBA9DE8D2F6_inline(tmp, il2cpp_codegen_string_new_wrapper("\x53\x6F\x6C\x64\x69\x65\x72\x20\x44\x61\x74\x61\x20\x43\x6F\x6E\x74\x61\x69\x6E\x65\x72"), NULL);
	}
}
static void SoldierDataContainerSO_t8DE187BCB878312F9C6ED15296863CBA4C83F5D7_CustomAttributesCacheGenerator__moveSpeed(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void InformationActionSO_tBED56D576BE914C7BAD3EB7753AF07D67EA01632_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * tmp = (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C *)cache->attributes[0];
		CreateAssetMenuAttribute__ctor_mF4754D0F74BACF7BB7DAC67F46690A69256D2D65(tmp, NULL);
		CreateAssetMenuAttribute_set_menuName_m27C32BCE71E6A5ED185212F083DFB23201B514F1_inline(tmp, il2cpp_codegen_string_new_wrapper("\x50\x61\x6E\x74\x65\x6F\x6E\x2F\x41\x63\x74\x69\x6F\x6E\x73\x2F\x49\x6E\x66\x6F\x72\x6D\x61\x74\x69\x6F\x6E\x20\x50\x61\x6E\x65\x6C\x20\x41\x63\x74\x69\x6F\x6E"), NULL);
		CreateAssetMenuAttribute_set_fileName_m14EBC66F19AEC15751EC9822478CDDBA9DE8D2F6_inline(tmp, il2cpp_codegen_string_new_wrapper("\x49\x6E\x66\x6F\x72\x6D\x61\x74\x69\x6F\x6E\x20\x50\x61\x6E\x65\x6C\x20\x41\x63\x74\x69\x6F\x6E"), NULL);
	}
}
static void StateMachine_tEF416E0929E989163FB7B6E9093E4CE798B43ADC_CustomAttributesCacheGenerator_U3CCurrentStateU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StateMachine_tEF416E0929E989163FB7B6E9093E4CE798B43ADC_CustomAttributesCacheGenerator_StateMachine_get_CurrentState_m8648EF22237BCDF665086988591241276728B472(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void StateMachine_tEF416E0929E989163FB7B6E9093E4CE798B43ADC_CustomAttributesCacheGenerator_StateMachine_set_CurrentState_m31D95406B2AC63F78751A0235BCDC86CFC9CD314(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SingletonMonoObject_1_t3DBBFBA236EF7CA13F6E5CA9D045FD0C0A382647_CustomAttributesCacheGenerator_U3CInstanceU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void SingletonMonoObject_1_t3DBBFBA236EF7CA13F6E5CA9D045FD0C0A382647_CustomAttributesCacheGenerator_SingletonMonoObject_1_get_Instance_m6AA9CF40E1C685B2D3CD6522F20C5E7039244E5B(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SingletonMonoObject_1_t3DBBFBA236EF7CA13F6E5CA9D045FD0C0A382647_CustomAttributesCacheGenerator_SingletonMonoObject_1_set_Instance_m1F71319D52600F634EA0D50943C0370C8261429A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_DemoProject2_Scripts_AttributeGenerators[];
const CustomAttributesCacheGenerator g_DemoProject2_Scripts_AttributeGenerators[87] = 
{
	ProduceBuildingDataContainerSO_t20917595AAD239A5417B3B60138EBF88B63FBF35_CustomAttributesCacheGenerator,
	SoldierDataContainerSO_t8DE187BCB878312F9C6ED15296863CBA4C83F5D7_CustomAttributesCacheGenerator,
	InformationActionSO_tBED56D576BE914C7BAD3EB7753AF07D67EA01632_CustomAttributesCacheGenerator,
	CinemachinePan_t95858888539198F9DEF5BCFD0EEBFE5359F16A3B_CustomAttributesCacheGenerator__panSpeed,
	MouseClicks_t9B33A9D54BB2A8044122B2BB6E87719D4F5FA837_CustomAttributesCacheGenerator_U3CassetU3Ek__BackingField,
	InfiniteScroll_tACAFA313A12E03E9F27ADF59095AD4BC5187B562_CustomAttributesCacheGenerator__scrollContent,
	InfiniteScroll_tACAFA313A12E03E9F27ADF59095AD4BC5187B562_CustomAttributesCacheGenerator__outOfBoundsThreshold,
	ScrollContent_t8921F772EC9AB8FC9530561AA2A4317B4F3C167E_CustomAttributesCacheGenerator__itemSpacing,
	ScrollContent_t8921F772EC9AB8FC9530561AA2A4317B4F3C167E_CustomAttributesCacheGenerator__horizontalMargin,
	ScrollContent_t8921F772EC9AB8FC9530561AA2A4317B4F3C167E_CustomAttributesCacheGenerator__verticalMargin,
	ScrollContent_t8921F772EC9AB8FC9530561AA2A4317B4F3C167E_CustomAttributesCacheGenerator__horizontal,
	ScrollContent_t8921F772EC9AB8FC9530561AA2A4317B4F3C167E_CustomAttributesCacheGenerator__vertical,
	ProduceSoldierButton_t81AB82E6C34824556943A06C5B219696D99769E3_CustomAttributesCacheGenerator__productionPrefab,
	ProduceSoldierButton_t81AB82E6C34824556943A06C5B219696D99769E3_CustomAttributesCacheGenerator__button,
	ProduceSoldierButton_t81AB82E6C34824556943A06C5B219696D99769E3_CustomAttributesCacheGenerator__initialSpawnPos,
	ProduceSoldierButton_t81AB82E6C34824556943A06C5B219696D99769E3_CustomAttributesCacheGenerator__initialMovePos,
	InformationPanelFiller_t7B9D0611A52C0ABF30DABBACAF3784867CE5E65A_CustomAttributesCacheGenerator__informationAction,
	InformationPanelFiller_t7B9D0611A52C0ABF30DABBACAF3784867CE5E65A_CustomAttributesCacheGenerator__mainImage,
	InformationPanelFiller_t7B9D0611A52C0ABF30DABBACAF3784867CE5E65A_CustomAttributesCacheGenerator__subImage,
	InformationPanelFiller_t7B9D0611A52C0ABF30DABBACAF3784867CE5E65A_CustomAttributesCacheGenerator__mainName,
	InformationPanelFiller_t7B9D0611A52C0ABF30DABBACAF3784867CE5E65A_CustomAttributesCacheGenerator__subName,
	NewInputReader_t6A44AD3C03C26B907F734271C7529CA11638BE88_CustomAttributesCacheGenerator_U3CClickPosU3Ek__BackingField,
	CursorController_t74F24CC3C8E1280CF5D05F13ABB34459E9410A7D_CustomAttributesCacheGenerator_U3CInputReaderU3Ek__BackingField,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator__mainTileMap,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator__productionMenu,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator__layerMask,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_U3CCursorControllerU3Ek__BackingField,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_U3CStateMachineU3Ek__BackingField,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_U3CPlayerIdleStateU3Ek__BackingField,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_U3CPlayerBuildStateU3Ek__BackingField,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_U3CPlayerCommandStateU3Ek__BackingField,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator__stats,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator__target,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator__sprite,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_U3C_moverU3Ek__BackingField,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_U3CSoldierStateMachineU3Ek__BackingField,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_U3CSoldierIdleStateU3Ek__BackingField,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_U3CSoldierMoveStateU3Ek__BackingField,
	AstarObjectAnimationController_tD8A34AAFA7EFE73478E701B3781FD677E9FBC3D9_CustomAttributesCacheGenerator_U3CAnimatorU3Ek__BackingField,
	Building_tCA86457EBFE3452D6EF57393D1ABDF82F78E14D9_CustomAttributesCacheGenerator__spriteRenderer,
	Building_tCA86457EBFE3452D6EF57393D1ABDF82F78E14D9_CustomAttributesCacheGenerator_U3CPlacedU3Ek__BackingField,
	GridBuildingSystem_tCFAF172332E0F93C010DD29D83BAF9AD2678A48E_CustomAttributesCacheGenerator__gridLayout,
	GridBuildingSystem_tCFAF172332E0F93C010DD29D83BAF9AD2678A48E_CustomAttributesCacheGenerator__mainTilemap,
	GridBuildingSystem_tCFAF172332E0F93C010DD29D83BAF9AD2678A48E_CustomAttributesCacheGenerator__tempTilemap,
	GridBuildingSystem_tCFAF172332E0F93C010DD29D83BAF9AD2678A48E_CustomAttributesCacheGenerator__player,
	ProductionBuild_t5FBABDD059C5AB3832E254213F91B2F92FFFC15B_CustomAttributesCacheGenerator__canvas,
	ProductionBuild_t5FBABDD059C5AB3832E254213F91B2F92FFFC15B_CustomAttributesCacheGenerator__initialSpawnPos,
	ProductionBuild_t5FBABDD059C5AB3832E254213F91B2F92FFFC15B_CustomAttributesCacheGenerator__buildingData,
	ProductionBuild_t5FBABDD059C5AB3832E254213F91B2F92FFFC15B_CustomAttributesCacheGenerator__infoAction,
	ProduceBuildingDataContainerSO_t20917595AAD239A5417B3B60138EBF88B63FBF35_CustomAttributesCacheGenerator__mainName,
	ProduceBuildingDataContainerSO_t20917595AAD239A5417B3B60138EBF88B63FBF35_CustomAttributesCacheGenerator__subName,
	ProduceBuildingDataContainerSO_t20917595AAD239A5417B3B60138EBF88B63FBF35_CustomAttributesCacheGenerator__mainImage,
	ProduceBuildingDataContainerSO_t20917595AAD239A5417B3B60138EBF88B63FBF35_CustomAttributesCacheGenerator__subImage,
	SoldierDataContainerSO_t8DE187BCB878312F9C6ED15296863CBA4C83F5D7_CustomAttributesCacheGenerator__moveSpeed,
	StateMachine_tEF416E0929E989163FB7B6E9093E4CE798B43ADC_CustomAttributesCacheGenerator_U3CCurrentStateU3Ek__BackingField,
	SingletonMonoObject_1_t3DBBFBA236EF7CA13F6E5CA9D045FD0C0A382647_CustomAttributesCacheGenerator_U3CInstanceU3Ek__BackingField,
	MouseClicks_t9B33A9D54BB2A8044122B2BB6E87719D4F5FA837_CustomAttributesCacheGenerator_MouseClicks_get_asset_m8F6C3CCB08C8B58C24630D4BF3835C791A190E72,
	NewInputReader_t6A44AD3C03C26B907F734271C7529CA11638BE88_CustomAttributesCacheGenerator_NewInputReader_get_ClickPos_m2CBA02ABBEC5290AA65D38C6AB5DD10562885262,
	NewInputReader_t6A44AD3C03C26B907F734271C7529CA11638BE88_CustomAttributesCacheGenerator_NewInputReader_set_ClickPos_m118A4FF59A7691937EBA27551129BB2DDB828A85,
	CursorController_t74F24CC3C8E1280CF5D05F13ABB34459E9410A7D_CustomAttributesCacheGenerator_CursorController_get_InputReader_m8B77E5D6003811228593B8F8C52F3C27A08E8E60,
	CursorController_t74F24CC3C8E1280CF5D05F13ABB34459E9410A7D_CustomAttributesCacheGenerator_CursorController_set_InputReader_m7007316FEDF934BE2CCDCBC2DBD34FF08FF2A718,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_get_CursorController_m78F10F223F8D94CB80D12657FB318353BFA825E0,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_set_CursorController_m1F26F782D723FF68F8DA2E64FADD6B89272DE8BC,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_get_StateMachine_m78F1CCCECE30E999E0B5A437200004A2FC9E1EFB,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_set_StateMachine_m81FBBD3DD72BA3C9A631963AC1FAD810F3988067,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_get_PlayerIdleState_m93DD0EAFD5B407BDA815EC0A0E7B17484805AB70,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_set_PlayerIdleState_mF0374C5CAAC944EF2A2B0CC3620EEA4502EBA936,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_get_PlayerBuildState_mEC7241736254E076619DEB999DAD1077B15EA57D,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_set_PlayerBuildState_m5CE4DE52FBBEF183FCFA20A2CBFCF9B02CF7B4A5,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_get_PlayerCommandState_m992E2E676074B4F4BE3A9C80F07C1ABA445603F7,
	PlayerController_t45E0B639AC81E78806D65A6A8C65181747898453_CustomAttributesCacheGenerator_PlayerController_set_PlayerCommandState_m9C747F4CA7400DE7DFDB55B6F32C6F41E46C6417,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_get__mover_m6863ECB63F1CCC6A966F99CCE81D6199C425BB94,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_set__mover_m7EEE0EE48DE0F3C9C4D26BCE4616F859E29E52A4,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_get_SoldierStateMachine_mFB0F7E682A4DA0C8E09FAD42659D37133944839C,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_set_SoldierStateMachine_mA9A39640A4468B758A5FACDC9057A54EA8CD47C8,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_get_SoldierIdleState_m5598E55F8BCF621912183C771F622E79B04897C7,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_set_SoldierIdleState_m3C4807B7433EB3EE78506A9DEC229C1C5B0F4551,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_get_SoldierMoveState_m091074457DB9438D1A88B05A0EDB005729861A78,
	SoldierController_t6DF0B0A12B9647F9070A6D66E3D497030DBA5148_CustomAttributesCacheGenerator_SoldierController_set_SoldierMoveState_m1460A7EA1F979E24F9FE88EDCF6F49A6D8D79FE3,
	AstarObjectAnimationController_tD8A34AAFA7EFE73478E701B3781FD677E9FBC3D9_CustomAttributesCacheGenerator_AstarObjectAnimationController_get_Animator_m881A5BB3B1DF5006A36643F1253A6ECBB42F38F7,
	Building_tCA86457EBFE3452D6EF57393D1ABDF82F78E14D9_CustomAttributesCacheGenerator_Building_get_Placed_m8AFFA1728D4F8A3F02ACA35CB30371CBC79485E7,
	Building_tCA86457EBFE3452D6EF57393D1ABDF82F78E14D9_CustomAttributesCacheGenerator_Building_set_Placed_m4A87BC7D865441598D0E60DD9F0DB1D736C7D250,
	StateMachine_tEF416E0929E989163FB7B6E9093E4CE798B43ADC_CustomAttributesCacheGenerator_StateMachine_get_CurrentState_m8648EF22237BCDF665086988591241276728B472,
	StateMachine_tEF416E0929E989163FB7B6E9093E4CE798B43ADC_CustomAttributesCacheGenerator_StateMachine_set_CurrentState_m31D95406B2AC63F78751A0235BCDC86CFC9CD314,
	SingletonMonoObject_1_t3DBBFBA236EF7CA13F6E5CA9D045FD0C0A382647_CustomAttributesCacheGenerator_SingletonMonoObject_1_get_Instance_m6AA9CF40E1C685B2D3CD6522F20C5E7039244E5B,
	SingletonMonoObject_1_t3DBBFBA236EF7CA13F6E5CA9D045FD0C0A382647_CustomAttributesCacheGenerator_SingletonMonoObject_1_set_Instance_m1F71319D52600F634EA0D50943C0370C8261429A,
	DemoProject2_Scripts_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAssetMenuAttribute_set_menuName_m27C32BCE71E6A5ED185212F083DFB23201B514F1_inline (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CmenuNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAssetMenuAttribute_set_fileName_m14EBC66F19AEC15751EC9822478CDDBA9DE8D2F6_inline (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CfileNameU3Ek__BackingField_1(L_0);
		return;
	}
}
