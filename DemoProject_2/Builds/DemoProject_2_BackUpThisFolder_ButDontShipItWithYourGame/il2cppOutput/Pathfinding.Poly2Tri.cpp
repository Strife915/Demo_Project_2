#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t20C0141C3FEEDAA44BFE8521FEEDDF47289CB40B;
// System.Collections.Generic.IComparer`1<Pathfinding.Poly2Tri.TriangulationPoint>
struct IComparer_1_t55BDE71A507AACBA48F00C5A73A7A4E2F8080060;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t90AD96F2C518D6F04343C83B67B02220C715C642;
// System.Collections.Generic.IEnumerable`1<Pathfinding.Poly2Tri.DelaunayTriangle>
struct IEnumerable_1_tC4A3C5C4E491676353B0113F1658513106DE249B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Pathfinding.Poly2Tri.PolygonPoint>
struct IEnumerable_1_t7F2E22DCD903875ECF1285A0FEF20705CE9E2471;
// System.Collections.Generic.IEnumerable`1<Pathfinding.Poly2Tri.TriangulationPoint>
struct IEnumerable_1_tCA703E9111B179B7BEDE4938403E67D371F299EC;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_tD64DA1873BBF65E545905171348E0241A3B706C0;
// System.Collections.Generic.IList`1<Pathfinding.Poly2Tri.DelaunayTriangle>
struct IList_1_tE56968CC9E659930C48C149006FDF309868CB484;
// System.Collections.Generic.IList`1<Pathfinding.Poly2Tri.Polygon>
struct IList_1_t6B4E514E5C0ACCE1DA028103769A51109F2B057F;
// System.Collections.Generic.IList`1<Pathfinding.Poly2Tri.PolygonPoint>
struct IList_1_t701BE483E50C69553BDD64BED749C2993940446D;
// System.Collections.Generic.IList`1<Pathfinding.Poly2Tri.TriangulationPoint>
struct IList_1_t650C00A7D68BC4283B9298E5E94C539DDE29BF18;
// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DTSweepConstraint>
struct List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7;
// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DelaunayTriangle>
struct List_1_t199B3B317EF17B94136539CBDCD21434236A1094;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.Polygon>
struct List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7;
// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>
struct List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Pathfinding.Poly2Tri.DTSweepConstraint[]
struct DTSweepConstraintU5BU5D_tFFAF48E14F0661D8E071B357D8496909B58CEF48;
// Pathfinding.Poly2Tri.DelaunayTriangle[]
struct DelaunayTriangleU5BU5D_t1FC276C2BB40BF1D26D1978539B19623E3C00D20;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Pathfinding.Poly2Tri.Polygon[]
struct PolygonU5BU5D_t52698B3801874882D7777FC21D9B7CEFDCB88213;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Pathfinding.Poly2Tri.TriangulationPoint[]
struct TriangulationPointU5BU5D_t53FCA1CF03FB09AF3CAE95B7D60CDF1EFB4297A3;
// Pathfinding.Poly2Tri.AdvancingFront
struct AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2;
// Pathfinding.Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// Pathfinding.Poly2Tri.DTSweepBasin
struct DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B;
// Pathfinding.Poly2Tri.DTSweepConstraint
struct DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC;
// Pathfinding.Poly2Tri.DTSweepContext
struct DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41;
// Pathfinding.Poly2Tri.DTSweepDebugContext
struct DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB;
// Pathfinding.Poly2Tri.DTSweepEdgeEvent
struct DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1;
// Pathfinding.Poly2Tri.DTSweepPointComparator
struct DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850;
// Pathfinding.Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Pathfinding.Poly2Tri.PointOnEdgeException
struct PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075;
// Pathfinding.Poly2Tri.Polygon
struct Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF;
// Pathfinding.Poly2Tri.PolygonPoint
struct PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Pathfinding.Poly2Tri.Triangulatable
struct Triangulatable_tCAD4C0A85B8E64A934A74DC195F4CEB0C4F4656F;
// Pathfinding.Poly2Tri.TriangulationConstraint
struct TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C;
// Pathfinding.Poly2Tri.TriangulationContext
struct TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015;
// Pathfinding.Poly2Tri.TriangulationDebugContext
struct TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077;
// Pathfinding.Poly2Tri.TriangulationPoint
struct TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1
struct U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6;

IL2CPP_EXTERN_C RuntimeClass* AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t13B4F4722E3A4FE2057ED6B99D08007D0CCF4914_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7F2E22DCD903875ECF1285A0FEF20705CE9E2471_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t90AD96F2C518D6F04343C83B67B02220C715C642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF4B80E7BE3F7839871573A778D50C564B96AE7CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t701BE483E50C69553BDD64BED749C2993940446D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t199B3B317EF17B94136539CBDCD21434236A1094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* P2T_t8C6881577ADB1CD32D863DC9D31AEC6EA130ED16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangulatable_tCAD4C0A85B8E64A934A74DC195F4CEB0C4F4656F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral07AC1B1D6E5B09CAD55868C0EBA7C2B6EB0B16DF;
IL2CPP_EXTERN_C String_t* _stringLiteral0A6129D3AF4D923F94C2DF172F5DA64D92B3C03C;
IL2CPP_EXTERN_C String_t* _stringLiteral17A7BA088490CA1D9307C4F7F07BDC92703EDF51;
IL2CPP_EXTERN_C String_t* _stringLiteral237443D40E51BEB792E3255884B17F5F2A070555;
IL2CPP_EXTERN_C String_t* _stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876;
IL2CPP_EXTERN_C String_t* _stringLiteral56FEC330311BE1770446499D7CC29C5DBA8485E8;
IL2CPP_EXTERN_C String_t* _stringLiteral656D304F364B477202FBF443F2948662EBAB895C;
IL2CPP_EXTERN_C String_t* _stringLiteral88EB854C80D13C1F40F616EE53A1381BFF41639B;
IL2CPP_EXTERN_C String_t* _stringLiteral9B56FA96FE55F4A5B70E48AF16D59739F6389D3C;
IL2CPP_EXTERN_C String_t* _stringLiteralA29C437354A4DAC3895D74F1428508364E47293F;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B67A1E3362EA84160157011F823BD6607D1E57;
IL2CPP_EXTERN_C String_t* _stringLiteralB80316C404349B7962BAC3B6CE7C7E7107C36CA1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0C9DBCA15AA768A26AA34FE93E331BE119D035;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2C785F436B8C0C146A0CADB55F5E0E73F71B11D;
IL2CPP_EXTERN_C String_t* _stringLiteralC5389BB78303E5DA7DBFA5E26F2ACCD912979149;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralF4ED7D3F8F9EE650CA476597BCB717839ACBA38B;
IL2CPP_EXTERN_C const RuntimeMethod* AdvancingFront_LocatePoint_m588840872AD054E89732A07CBC9B4333D97A8928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_EdgeEvent_m7069CC946D75354A186AFBE5968400BC8EFD19EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_EdgeEvent_mB846249772A1156CF89D26F8B1B3B1477DDE5699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_FlipEdgeEvent_m35DE6A69E95B30B81716A27A1D7705210216AE02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_FlipScanEdgeEvent_mAD268B132C138C407F0D0474503E3B2A41F74A2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_NextFlipPoint_mF4FB6324AEFDB82700CEB30B1A60CECA6A6F5134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelaunayTriangle_MarkNeighbor_m0A004DE59C61D91141C432A753AC71A4F396A2D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelaunayTriangle_MarkNeighbor_m513A0664DF96C4C67A1AE7E175841FF1DEC08290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m82B90CC755BA55DB57BE296391255BFB175B288D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m938318032FFA27F2A3F125F38D9E6775A0F5C644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE226B7422F771D2A2930B46662F7614CE8B6AD71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7FE2CA0E22076BBA9F0B9354F67749A21E2358C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDDBD63AE8436AE7618367FF71913AD366E8E5CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE59C87000C4F0BF60A8930BFD0B3C4D2AFC36F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1EC377D47602F54DEA8A5AA7C33737A46C9586C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m24B8B83E42F3D05EBC0B0561BC6C968D950807CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4798328201C01BAE7F76D59C514EA1C04A867524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_Clear_m33E5D058EE7F88DC82D19508C4D1D7F87EB02B08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_Contains_mEA68E8461B53162499ADC267BE82BF15F9593D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_set_Item_mB572DF8606AEB0D5AC6433567DF66233D246ADD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m66E153B03D3E2092A55098105D82CE16BE987789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mB87053F9146A58EAFD2CAF93BEC785DBF35E8B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2BD6ACF4590B98D64639A63BF48DB452D70744C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m63FD2777F6CFF5EF8E7680A8F34AE9EC54601C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6A37693AE4F0CB4723292608BF7E972591875BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m67D6E7643A16DD9DF83400B8D4CBCE0C59906379_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m395E99A9DD5BFAED7715F9DC41E5C1DFED2F2A33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m41D15BF47655570DAC6EB2652BCCB85AFAF3DC57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFBF597A0FC5291FDA97464F4C0D2842F62496570_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m9223A0102E161FB8A9F8F067E44C49F2934386EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m900ABA8F1D6E4E659827AA45A01C9948AB2F1B94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m84C86B06820C1146C9418A25D0CFBA78677D34F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m53277584AB6E7BB7792C86258D4901E64BEE3386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5B3972F7A030AFF126EFAC0B626C89BCC95F55D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC4A45C26EB5820CB76A1780258B7477CA2475865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCF6506941C856F3F2895AF16DB17A904F4954499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD75C7E307065084EED132174CE706924E684EF81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEDDF124FAECA750FE2CDD60C31541FCC5A60DFC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_mB1C5721383B7E1ADA084C578228CEEFE0627C62A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mFAC526ED1D6E99D14D2A8479F7AB98E301296875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Polygon__ctor_m835B906710C6E93E29C9C4065C378B03EBC9F577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateU3Ec__Iterator1_Reset_m887EE3EBA6A3515A8361E49D19F8A3142D27062E_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t107C0AD7AFA3139C49D10D9B9B4ED065C2286086 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DTSweepConstraint>
struct List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DTSweepConstraintU5BU5D_tFFAF48E14F0661D8E071B357D8496909B58CEF48* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7, ____items_1)); }
	inline DTSweepConstraintU5BU5D_tFFAF48E14F0661D8E071B357D8496909B58CEF48* get__items_1() const { return ____items_1; }
	inline DTSweepConstraintU5BU5D_tFFAF48E14F0661D8E071B357D8496909B58CEF48** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DTSweepConstraintU5BU5D_tFFAF48E14F0661D8E071B357D8496909B58CEF48* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DTSweepConstraintU5BU5D_tFFAF48E14F0661D8E071B357D8496909B58CEF48* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7_StaticFields, ____emptyArray_5)); }
	inline DTSweepConstraintU5BU5D_tFFAF48E14F0661D8E071B357D8496909B58CEF48* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DTSweepConstraintU5BU5D_tFFAF48E14F0661D8E071B357D8496909B58CEF48** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DTSweepConstraintU5BU5D_tFFAF48E14F0661D8E071B357D8496909B58CEF48* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DelaunayTriangle>
struct List_1_t199B3B317EF17B94136539CBDCD21434236A1094  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DelaunayTriangleU5BU5D_t1FC276C2BB40BF1D26D1978539B19623E3C00D20* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t199B3B317EF17B94136539CBDCD21434236A1094, ____items_1)); }
	inline DelaunayTriangleU5BU5D_t1FC276C2BB40BF1D26D1978539B19623E3C00D20* get__items_1() const { return ____items_1; }
	inline DelaunayTriangleU5BU5D_t1FC276C2BB40BF1D26D1978539B19623E3C00D20** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DelaunayTriangleU5BU5D_t1FC276C2BB40BF1D26D1978539B19623E3C00D20* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t199B3B317EF17B94136539CBDCD21434236A1094, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t199B3B317EF17B94136539CBDCD21434236A1094, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t199B3B317EF17B94136539CBDCD21434236A1094, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t199B3B317EF17B94136539CBDCD21434236A1094_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DelaunayTriangleU5BU5D_t1FC276C2BB40BF1D26D1978539B19623E3C00D20* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t199B3B317EF17B94136539CBDCD21434236A1094_StaticFields, ____emptyArray_5)); }
	inline DelaunayTriangleU5BU5D_t1FC276C2BB40BF1D26D1978539B19623E3C00D20* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DelaunayTriangleU5BU5D_t1FC276C2BB40BF1D26D1978539B19623E3C00D20** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DelaunayTriangleU5BU5D_t1FC276C2BB40BF1D26D1978539B19623E3C00D20* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.Polygon>
struct List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PolygonU5BU5D_t52698B3801874882D7777FC21D9B7CEFDCB88213* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7, ____items_1)); }
	inline PolygonU5BU5D_t52698B3801874882D7777FC21D9B7CEFDCB88213* get__items_1() const { return ____items_1; }
	inline PolygonU5BU5D_t52698B3801874882D7777FC21D9B7CEFDCB88213** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PolygonU5BU5D_t52698B3801874882D7777FC21D9B7CEFDCB88213* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PolygonU5BU5D_t52698B3801874882D7777FC21D9B7CEFDCB88213* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7_StaticFields, ____emptyArray_5)); }
	inline PolygonU5BU5D_t52698B3801874882D7777FC21D9B7CEFDCB88213* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PolygonU5BU5D_t52698B3801874882D7777FC21D9B7CEFDCB88213** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PolygonU5BU5D_t52698B3801874882D7777FC21D9B7CEFDCB88213* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>
struct List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TriangulationPointU5BU5D_t53FCA1CF03FB09AF3CAE95B7D60CDF1EFB4297A3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D, ____items_1)); }
	inline TriangulationPointU5BU5D_t53FCA1CF03FB09AF3CAE95B7D60CDF1EFB4297A3* get__items_1() const { return ____items_1; }
	inline TriangulationPointU5BU5D_t53FCA1CF03FB09AF3CAE95B7D60CDF1EFB4297A3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TriangulationPointU5BU5D_t53FCA1CF03FB09AF3CAE95B7D60CDF1EFB4297A3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TriangulationPointU5BU5D_t53FCA1CF03FB09AF3CAE95B7D60CDF1EFB4297A3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D_StaticFields, ____emptyArray_5)); }
	inline TriangulationPointU5BU5D_t53FCA1CF03FB09AF3CAE95B7D60CDF1EFB4297A3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TriangulationPointU5BU5D_t53FCA1CF03FB09AF3CAE95B7D60CDF1EFB4297A3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TriangulationPointU5BU5D_t53FCA1CF03FB09AF3CAE95B7D60CDF1EFB4297A3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Pathfinding.Poly2Tri.AdvancingFront
struct AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2  : public RuntimeObject
{
public:
	// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFront::Head
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___Head_0;
	// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFront::Tail
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___Tail_1;
	// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFront::Search
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___Search_2;

public:
	inline static int32_t get_offset_of_Head_0() { return static_cast<int32_t>(offsetof(AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2, ___Head_0)); }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * get_Head_0() const { return ___Head_0; }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 ** get_address_of_Head_0() { return &___Head_0; }
	inline void set_Head_0(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * value)
	{
		___Head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Head_0), (void*)value);
	}

	inline static int32_t get_offset_of_Tail_1() { return static_cast<int32_t>(offsetof(AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2, ___Tail_1)); }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * get_Tail_1() const { return ___Tail_1; }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 ** get_address_of_Tail_1() { return &___Tail_1; }
	inline void set_Tail_1(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * value)
	{
		___Tail_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tail_1), (void*)value);
	}

	inline static int32_t get_offset_of_Search_2() { return static_cast<int32_t>(offsetof(AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2, ___Search_2)); }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * get_Search_2() const { return ___Search_2; }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 ** get_address_of_Search_2() { return &___Search_2; }
	inline void set_Search_2(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * value)
	{
		___Search_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Search_2), (void*)value);
	}
};


// Pathfinding.Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764  : public RuntimeObject
{
public:
	// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFrontNode::Next
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___Next_0;
	// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFrontNode::Prev
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___Prev_1;
	// System.Double Pathfinding.Poly2Tri.AdvancingFrontNode::Value
	double ___Value_2;
	// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.AdvancingFrontNode::Point
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___Point_3;
	// Pathfinding.Poly2Tri.DelaunayTriangle Pathfinding.Poly2Tri.AdvancingFrontNode::Triangle
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___Triangle_4;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764, ___Next_0)); }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * get_Next_0() const { return ___Next_0; }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 ** get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * value)
	{
		___Next_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_0), (void*)value);
	}

	inline static int32_t get_offset_of_Prev_1() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764, ___Prev_1)); }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * get_Prev_1() const { return ___Prev_1; }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 ** get_address_of_Prev_1() { return &___Prev_1; }
	inline void set_Prev_1(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * value)
	{
		___Prev_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prev_1), (void*)value);
	}

	inline static int32_t get_offset_of_Value_2() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764, ___Value_2)); }
	inline double get_Value_2() const { return ___Value_2; }
	inline double* get_address_of_Value_2() { return &___Value_2; }
	inline void set_Value_2(double value)
	{
		___Value_2 = value;
	}

	inline static int32_t get_offset_of_Point_3() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764, ___Point_3)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get_Point_3() const { return ___Point_3; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of_Point_3() { return &___Point_3; }
	inline void set_Point_3(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		___Point_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Point_3), (void*)value);
	}

	inline static int32_t get_offset_of_Triangle_4() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764, ___Triangle_4)); }
	inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * get_Triangle_4() const { return ___Triangle_4; }
	inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 ** get_address_of_Triangle_4() { return &___Triangle_4; }
	inline void set_Triangle_4(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * value)
	{
		___Triangle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Triangle_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Pathfinding.Poly2Tri.DTSweep
struct DTSweep_tF0F617F8352014D64D52CEDC8F564B4CA4EEAF86  : public RuntimeObject
{
public:

public:
};


// Pathfinding.Poly2Tri.DTSweepBasin
struct DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B  : public RuntimeObject
{
public:
	// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.DTSweepBasin::leftNode
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___leftNode_0;
	// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.DTSweepBasin::bottomNode
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___bottomNode_1;
	// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.DTSweepBasin::rightNode
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___rightNode_2;
	// System.Double Pathfinding.Poly2Tri.DTSweepBasin::width
	double ___width_3;
	// System.Boolean Pathfinding.Poly2Tri.DTSweepBasin::leftHighest
	bool ___leftHighest_4;

public:
	inline static int32_t get_offset_of_leftNode_0() { return static_cast<int32_t>(offsetof(DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B, ___leftNode_0)); }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * get_leftNode_0() const { return ___leftNode_0; }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 ** get_address_of_leftNode_0() { return &___leftNode_0; }
	inline void set_leftNode_0(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * value)
	{
		___leftNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftNode_0), (void*)value);
	}

	inline static int32_t get_offset_of_bottomNode_1() { return static_cast<int32_t>(offsetof(DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B, ___bottomNode_1)); }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * get_bottomNode_1() const { return ___bottomNode_1; }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 ** get_address_of_bottomNode_1() { return &___bottomNode_1; }
	inline void set_bottomNode_1(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * value)
	{
		___bottomNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bottomNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_rightNode_2() { return static_cast<int32_t>(offsetof(DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B, ___rightNode_2)); }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * get_rightNode_2() const { return ___rightNode_2; }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 ** get_address_of_rightNode_2() { return &___rightNode_2; }
	inline void set_rightNode_2(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * value)
	{
		___rightNode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightNode_2), (void*)value);
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B, ___width_3)); }
	inline double get_width_3() const { return ___width_3; }
	inline double* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(double value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_leftHighest_4() { return static_cast<int32_t>(offsetof(DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B, ___leftHighest_4)); }
	inline bool get_leftHighest_4() const { return ___leftHighest_4; }
	inline bool* get_address_of_leftHighest_4() { return &___leftHighest_4; }
	inline void set_leftHighest_4(bool value)
	{
		___leftHighest_4 = value;
	}
};


// Pathfinding.Poly2Tri.DTSweepEdgeEvent
struct DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1  : public RuntimeObject
{
public:
	// Pathfinding.Poly2Tri.DTSweepConstraint Pathfinding.Poly2Tri.DTSweepEdgeEvent::ConstrainedEdge
	DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___ConstrainedEdge_0;
	// System.Boolean Pathfinding.Poly2Tri.DTSweepEdgeEvent::Right
	bool ___Right_1;

public:
	inline static int32_t get_offset_of_ConstrainedEdge_0() { return static_cast<int32_t>(offsetof(DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1, ___ConstrainedEdge_0)); }
	inline DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * get_ConstrainedEdge_0() const { return ___ConstrainedEdge_0; }
	inline DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC ** get_address_of_ConstrainedEdge_0() { return &___ConstrainedEdge_0; }
	inline void set_ConstrainedEdge_0(DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * value)
	{
		___ConstrainedEdge_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstrainedEdge_0), (void*)value);
	}

	inline static int32_t get_offset_of_Right_1() { return static_cast<int32_t>(offsetof(DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1, ___Right_1)); }
	inline bool get_Right_1() const { return ___Right_1; }
	inline bool* get_address_of_Right_1() { return &___Right_1; }
	inline void set_Right_1(bool value)
	{
		___Right_1 = value;
	}
};


// Pathfinding.Poly2Tri.DTSweepPointComparator
struct DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850  : public RuntimeObject
{
public:

public:
};


// Pathfinding.Poly2Tri.Polygon
struct Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint> Pathfinding.Poly2Tri.Polygon::_points
	List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * ____points_0;
	// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint> Pathfinding.Poly2Tri.Polygon::_steinerPoints
	List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * ____steinerPoints_1;
	// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.Polygon> Pathfinding.Poly2Tri.Polygon::_holes
	List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * ____holes_2;
	// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DelaunayTriangle> Pathfinding.Poly2Tri.Polygon::_triangles
	List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * ____triangles_3;
	// Pathfinding.Poly2Tri.PolygonPoint Pathfinding.Poly2Tri.Polygon::_last
	PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * ____last_4;

public:
	inline static int32_t get_offset_of__points_0() { return static_cast<int32_t>(offsetof(Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF, ____points_0)); }
	inline List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * get__points_0() const { return ____points_0; }
	inline List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D ** get_address_of__points_0() { return &____points_0; }
	inline void set__points_0(List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * value)
	{
		____points_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____points_0), (void*)value);
	}

	inline static int32_t get_offset_of__steinerPoints_1() { return static_cast<int32_t>(offsetof(Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF, ____steinerPoints_1)); }
	inline List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * get__steinerPoints_1() const { return ____steinerPoints_1; }
	inline List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D ** get_address_of__steinerPoints_1() { return &____steinerPoints_1; }
	inline void set__steinerPoints_1(List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * value)
	{
		____steinerPoints_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____steinerPoints_1), (void*)value);
	}

	inline static int32_t get_offset_of__holes_2() { return static_cast<int32_t>(offsetof(Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF, ____holes_2)); }
	inline List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * get__holes_2() const { return ____holes_2; }
	inline List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 ** get_address_of__holes_2() { return &____holes_2; }
	inline void set__holes_2(List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * value)
	{
		____holes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____holes_2), (void*)value);
	}

	inline static int32_t get_offset_of__triangles_3() { return static_cast<int32_t>(offsetof(Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF, ____triangles_3)); }
	inline List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * get__triangles_3() const { return ____triangles_3; }
	inline List_1_t199B3B317EF17B94136539CBDCD21434236A1094 ** get_address_of__triangles_3() { return &____triangles_3; }
	inline void set__triangles_3(List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * value)
	{
		____triangles_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____triangles_3), (void*)value);
	}

	inline static int32_t get_offset_of__last_4() { return static_cast<int32_t>(offsetof(Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF, ____last_4)); }
	inline PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * get__last_4() const { return ____last_4; }
	inline PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D ** get_address_of__last_4() { return &____last_4; }
	inline void set__last_4(PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * value)
	{
		____last_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____last_4), (void*)value);
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
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
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
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


// Pathfinding.Poly2Tri.TriangulationConstraint
struct TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C  : public RuntimeObject
{
public:
	// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.TriangulationConstraint::P
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___P_0;
	// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.TriangulationConstraint::Q
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___Q_1;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C, ___P_0)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get_P_0() const { return ___P_0; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_0), (void*)value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C, ___Q_1)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get_Q_1() const { return ___Q_1; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Q_1), (void*)value);
	}
};


// Pathfinding.Poly2Tri.TriangulationDebugContext
struct TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077  : public RuntimeObject
{
public:
	// Pathfinding.Poly2Tri.TriangulationContext Pathfinding.Poly2Tri.TriangulationDebugContext::_tcx
	TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * ____tcx_0;

public:
	inline static int32_t get_offset_of__tcx_0() { return static_cast<int32_t>(offsetof(TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077, ____tcx_0)); }
	inline TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * get__tcx_0() const { return ____tcx_0; }
	inline TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 ** get_address_of__tcx_0() { return &____tcx_0; }
	inline void set__tcx_0(TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * value)
	{
		____tcx_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tcx_0), (void*)value);
	}
};


// Pathfinding.Poly2Tri.TriangulationPoint
struct TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52  : public RuntimeObject
{
public:
	// System.Double Pathfinding.Poly2Tri.TriangulationPoint::X
	double ___X_0;
	// System.Double Pathfinding.Poly2Tri.TriangulationPoint::Y
	double ___Y_1;
	// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DTSweepConstraint> Pathfinding.Poly2Tri.TriangulationPoint::<Edges>k__BackingField
	List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * ___U3CEdgesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52, ___X_0)); }
	inline double get_X_0() const { return ___X_0; }
	inline double* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(double value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52, ___Y_1)); }
	inline double get_Y_1() const { return ___Y_1; }
	inline double* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(double value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_U3CEdgesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52, ___U3CEdgesU3Ek__BackingField_2)); }
	inline List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * get_U3CEdgesU3Ek__BackingField_2() const { return ___U3CEdgesU3Ek__BackingField_2; }
	inline List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 ** get_address_of_U3CEdgesU3Ek__BackingField_2() { return &___U3CEdgesU3Ek__BackingField_2; }
	inline void set_U3CEdgesU3Ek__BackingField_2(List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * value)
	{
		___U3CEdgesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEdgesU3Ek__BackingField_2), (void*)value);
	}
};


// Pathfinding.Poly2Tri.TriangulationUtil
struct TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9  : public RuntimeObject
{
public:

public:
};

struct TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_StaticFields
{
public:
	// System.Double Pathfinding.Poly2Tri.TriangulationUtil::EPSILON
	double ___EPSILON_0;

public:
	inline static int32_t get_offset_of_EPSILON_0() { return static_cast<int32_t>(offsetof(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_StaticFields, ___EPSILON_0)); }
	inline double get_EPSILON_0() const { return ___EPSILON_0; }
	inline double* get_address_of_EPSILON_0() { return &___EPSILON_0; }
	inline void set_EPSILON_0(double value)
	{
		___EPSILON_0 = value;
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

// System.Collections.Generic.List`1/Enumerator<Pathfinding.Poly2Tri.DTSweepConstraint>
struct Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63, ___list_0)); }
	inline List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * get_list_0() const { return ___list_0; }
	inline List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63, ___current_3)); }
	inline DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * get_current_3() const { return ___current_3; }
	inline DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Pathfinding.Poly2Tri.Polygon>
struct Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3, ___list_0)); }
	inline List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * get_list_0() const { return ___list_0; }
	inline List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3, ___current_3)); }
	inline Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * get_current_3() const { return ___current_3; }
	inline Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Pathfinding.Poly2Tri.TriangulationPoint>
struct Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79, ___list_0)); }
	inline List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * get_list_0() const { return ___list_0; }
	inline List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79, ___current_3)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get_current_3() const { return ___current_3; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.DelaunayTriangle>
struct FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D 
{
public:
	// T Pathfinding.Poly2Tri.FixedArray3`1::_0
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ____0_0;
	// T Pathfinding.Poly2Tri.FixedArray3`1::_1
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ____1_1;
	// T Pathfinding.Poly2Tri.FixedArray3`1::_2
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ____2_2;

public:
	inline static int32_t get_offset_of__0_0() { return static_cast<int32_t>(offsetof(FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D, ____0_0)); }
	inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * get__0_0() const { return ____0_0; }
	inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 ** get_address_of__0_0() { return &____0_0; }
	inline void set__0_0(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * value)
	{
		____0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____0_0), (void*)value);
	}

	inline static int32_t get_offset_of__1_1() { return static_cast<int32_t>(offsetof(FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D, ____1_1)); }
	inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * get__1_1() const { return ____1_1; }
	inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 ** get_address_of__1_1() { return &____1_1; }
	inline void set__1_1(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * value)
	{
		____1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____1_1), (void*)value);
	}

	inline static int32_t get_offset_of__2_2() { return static_cast<int32_t>(offsetof(FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D, ____2_2)); }
	inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * get__2_2() const { return ____2_2; }
	inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 ** get_address_of__2_2() { return &____2_2; }
	inline void set__2_2(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * value)
	{
		____2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____2_2), (void*)value);
	}
};


// Pathfinding.Poly2Tri.FixedArray3`1<System.Object>
struct FixedArray3_1_tFBDC0D92AB6ACB4E285191B4B8D1CF688BDDE19C 
{
public:
	// T Pathfinding.Poly2Tri.FixedArray3`1::_0
	RuntimeObject * ____0_0;
	// T Pathfinding.Poly2Tri.FixedArray3`1::_1
	RuntimeObject * ____1_1;
	// T Pathfinding.Poly2Tri.FixedArray3`1::_2
	RuntimeObject * ____2_2;

public:
	inline static int32_t get_offset_of__0_0() { return static_cast<int32_t>(offsetof(FixedArray3_1_tFBDC0D92AB6ACB4E285191B4B8D1CF688BDDE19C, ____0_0)); }
	inline RuntimeObject * get__0_0() const { return ____0_0; }
	inline RuntimeObject ** get_address_of__0_0() { return &____0_0; }
	inline void set__0_0(RuntimeObject * value)
	{
		____0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____0_0), (void*)value);
	}

	inline static int32_t get_offset_of__1_1() { return static_cast<int32_t>(offsetof(FixedArray3_1_tFBDC0D92AB6ACB4E285191B4B8D1CF688BDDE19C, ____1_1)); }
	inline RuntimeObject * get__1_1() const { return ____1_1; }
	inline RuntimeObject ** get_address_of__1_1() { return &____1_1; }
	inline void set__1_1(RuntimeObject * value)
	{
		____1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____1_1), (void*)value);
	}

	inline static int32_t get_offset_of__2_2() { return static_cast<int32_t>(offsetof(FixedArray3_1_tFBDC0D92AB6ACB4E285191B4B8D1CF688BDDE19C, ____2_2)); }
	inline RuntimeObject * get__2_2() const { return ____2_2; }
	inline RuntimeObject ** get_address_of__2_2() { return &____2_2; }
	inline void set__2_2(RuntimeObject * value)
	{
		____2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____2_2), (void*)value);
	}
};


// Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.TriangulationPoint>
struct FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A 
{
public:
	// T Pathfinding.Poly2Tri.FixedArray3`1::_0
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ____0_0;
	// T Pathfinding.Poly2Tri.FixedArray3`1::_1
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ____1_1;
	// T Pathfinding.Poly2Tri.FixedArray3`1::_2
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ____2_2;

public:
	inline static int32_t get_offset_of__0_0() { return static_cast<int32_t>(offsetof(FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A, ____0_0)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get__0_0() const { return ____0_0; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of__0_0() { return &____0_0; }
	inline void set__0_0(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		____0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____0_0), (void*)value);
	}

	inline static int32_t get_offset_of__1_1() { return static_cast<int32_t>(offsetof(FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A, ____1_1)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get__1_1() const { return ____1_1; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of__1_1() { return &____1_1; }
	inline void set__1_1(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		____1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____1_1), (void*)value);
	}

	inline static int32_t get_offset_of__2_2() { return static_cast<int32_t>(offsetof(FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A, ____2_2)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get__2_2() const { return ____2_2; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of__2_2() { return &____2_2; }
	inline void set__2_2(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		____2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____2_2), (void*)value);
	}
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


// Pathfinding.Poly2Tri.DTSweepConstraint
struct DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC  : public TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C
{
public:

public:
};


// Pathfinding.Poly2Tri.DTSweepDebugContext
struct DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB  : public TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077
{
public:
	// Pathfinding.Poly2Tri.DelaunayTriangle Pathfinding.Poly2Tri.DTSweepDebugContext::_primaryTriangle
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ____primaryTriangle_1;
	// Pathfinding.Poly2Tri.DelaunayTriangle Pathfinding.Poly2Tri.DTSweepDebugContext::_secondaryTriangle
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ____secondaryTriangle_2;
	// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DTSweepDebugContext::_activePoint
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ____activePoint_3;
	// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.DTSweepDebugContext::_activeNode
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ____activeNode_4;
	// Pathfinding.Poly2Tri.DTSweepConstraint Pathfinding.Poly2Tri.DTSweepDebugContext::_activeConstraint
	DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ____activeConstraint_5;

public:
	inline static int32_t get_offset_of__primaryTriangle_1() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB, ____primaryTriangle_1)); }
	inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * get__primaryTriangle_1() const { return ____primaryTriangle_1; }
	inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 ** get_address_of__primaryTriangle_1() { return &____primaryTriangle_1; }
	inline void set__primaryTriangle_1(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * value)
	{
		____primaryTriangle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryTriangle_1), (void*)value);
	}

	inline static int32_t get_offset_of__secondaryTriangle_2() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB, ____secondaryTriangle_2)); }
	inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * get__secondaryTriangle_2() const { return ____secondaryTriangle_2; }
	inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 ** get_address_of__secondaryTriangle_2() { return &____secondaryTriangle_2; }
	inline void set__secondaryTriangle_2(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * value)
	{
		____secondaryTriangle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____secondaryTriangle_2), (void*)value);
	}

	inline static int32_t get_offset_of__activePoint_3() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB, ____activePoint_3)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get__activePoint_3() const { return ____activePoint_3; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of__activePoint_3() { return &____activePoint_3; }
	inline void set__activePoint_3(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		____activePoint_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activePoint_3), (void*)value);
	}

	inline static int32_t get_offset_of__activeNode_4() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB, ____activeNode_4)); }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * get__activeNode_4() const { return ____activeNode_4; }
	inline AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 ** get_address_of__activeNode_4() { return &____activeNode_4; }
	inline void set__activeNode_4(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * value)
	{
		____activeNode_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeNode_4), (void*)value);
	}

	inline static int32_t get_offset_of__activeConstraint_5() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB, ____activeConstraint_5)); }
	inline DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * get__activeConstraint_5() const { return ____activeConstraint_5; }
	inline DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC ** get_address_of__activeConstraint_5() { return &____activeConstraint_5; }
	inline void set__activeConstraint_5(DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * value)
	{
		____activeConstraint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeConstraint_5), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// Pathfinding.Poly2Tri.FixedBitArray3
struct FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D 
{
public:
	// System.Boolean Pathfinding.Poly2Tri.FixedBitArray3::_0
	bool ____0_0;
	// System.Boolean Pathfinding.Poly2Tri.FixedBitArray3::_1
	bool ____1_1;
	// System.Boolean Pathfinding.Poly2Tri.FixedBitArray3::_2
	bool ____2_2;

public:
	inline static int32_t get_offset_of__0_0() { return static_cast<int32_t>(offsetof(FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D, ____0_0)); }
	inline bool get__0_0() const { return ____0_0; }
	inline bool* get_address_of__0_0() { return &____0_0; }
	inline void set__0_0(bool value)
	{
		____0_0 = value;
	}

	inline static int32_t get_offset_of__1_1() { return static_cast<int32_t>(offsetof(FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D, ____1_1)); }
	inline bool get__1_1() const { return ____1_1; }
	inline bool* get_address_of__1_1() { return &____1_1; }
	inline void set__1_1(bool value)
	{
		____1_1 = value;
	}

	inline static int32_t get_offset_of__2_2() { return static_cast<int32_t>(offsetof(FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D, ____2_2)); }
	inline bool get__2_2() const { return ____2_2; }
	inline bool* get_address_of__2_2() { return &____2_2; }
	inline void set__2_2(bool value)
	{
		____2_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Pathfinding.Poly2Tri.FixedBitArray3
struct FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshaled_pinvoke
{
	int32_t ____0_0;
	int32_t ____1_1;
	int32_t ____2_2;
};
// Native definition for COM marshalling of Pathfinding.Poly2Tri.FixedBitArray3
struct FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshaled_com
{
	int32_t ____0_0;
	int32_t ____1_1;
	int32_t ____2_2;
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


// Pathfinding.Poly2Tri.PolygonPoint
struct PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D  : public TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52
{
public:
	// Pathfinding.Poly2Tri.PolygonPoint Pathfinding.Poly2Tri.PolygonPoint::<Next>k__BackingField
	PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * ___U3CNextU3Ek__BackingField_3;
	// Pathfinding.Poly2Tri.PolygonPoint Pathfinding.Poly2Tri.PolygonPoint::<Previous>k__BackingField
	PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * ___U3CPreviousU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CNextU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D, ___U3CNextU3Ek__BackingField_3)); }
	inline PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * get_U3CNextU3Ek__BackingField_3() const { return ___U3CNextU3Ek__BackingField_3; }
	inline PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D ** get_address_of_U3CNextU3Ek__BackingField_3() { return &___U3CNextU3Ek__BackingField_3; }
	inline void set_U3CNextU3Ek__BackingField_3(PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * value)
	{
		___U3CNextU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNextU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D, ___U3CPreviousU3Ek__BackingField_4)); }
	inline PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * get_U3CPreviousU3Ek__BackingField_4() const { return ___U3CPreviousU3Ek__BackingField_4; }
	inline PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D ** get_address_of_U3CPreviousU3Ek__BackingField_4() { return &___U3CPreviousU3Ek__BackingField_4; }
	inline void set_U3CPreviousU3Ek__BackingField_4(PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * value)
	{
		___U3CPreviousU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreviousU3Ek__BackingField_4), (void*)value);
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
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


// Pathfinding.Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5  : public RuntimeObject
{
public:
	// Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.TriangulationPoint> Pathfinding.Poly2Tri.DelaunayTriangle::Points
	FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A  ___Points_0;
	// Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.DelaunayTriangle> Pathfinding.Poly2Tri.DelaunayTriangle::Neighbors
	FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D  ___Neighbors_1;
	// Pathfinding.Poly2Tri.FixedBitArray3 Pathfinding.Poly2Tri.DelaunayTriangle::EdgeIsConstrained
	FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D  ___EdgeIsConstrained_2;
	// Pathfinding.Poly2Tri.FixedBitArray3 Pathfinding.Poly2Tri.DelaunayTriangle::EdgeIsDelaunay
	FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D  ___EdgeIsDelaunay_3;
	// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::<IsInterior>k__BackingField
	bool ___U3CIsInteriorU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_Points_0() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5, ___Points_0)); }
	inline FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A  get_Points_0() const { return ___Points_0; }
	inline FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * get_address_of_Points_0() { return &___Points_0; }
	inline void set_Points_0(FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A  value)
	{
		___Points_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Points_0))->____0_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Points_0))->____1_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Points_0))->____2_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Neighbors_1() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5, ___Neighbors_1)); }
	inline FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D  get_Neighbors_1() const { return ___Neighbors_1; }
	inline FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * get_address_of_Neighbors_1() { return &___Neighbors_1; }
	inline void set_Neighbors_1(FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D  value)
	{
		___Neighbors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Neighbors_1))->____0_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Neighbors_1))->____1_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Neighbors_1))->____2_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_EdgeIsConstrained_2() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5, ___EdgeIsConstrained_2)); }
	inline FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D  get_EdgeIsConstrained_2() const { return ___EdgeIsConstrained_2; }
	inline FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * get_address_of_EdgeIsConstrained_2() { return &___EdgeIsConstrained_2; }
	inline void set_EdgeIsConstrained_2(FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D  value)
	{
		___EdgeIsConstrained_2 = value;
	}

	inline static int32_t get_offset_of_EdgeIsDelaunay_3() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5, ___EdgeIsDelaunay_3)); }
	inline FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D  get_EdgeIsDelaunay_3() const { return ___EdgeIsDelaunay_3; }
	inline FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * get_address_of_EdgeIsDelaunay_3() { return &___EdgeIsDelaunay_3; }
	inline void set_EdgeIsDelaunay_3(FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D  value)
	{
		___EdgeIsDelaunay_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsInteriorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5, ___U3CIsInteriorU3Ek__BackingField_4)); }
	inline bool get_U3CIsInteriorU3Ek__BackingField_4() const { return ___U3CIsInteriorU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsInteriorU3Ek__BackingField_4() { return &___U3CIsInteriorU3Ek__BackingField_4; }
	inline void set_U3CIsInteriorU3Ek__BackingField_4(bool value)
	{
		___U3CIsInteriorU3Ek__BackingField_4 = value;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Pathfinding.Poly2Tri.Orientation
struct Orientation_t4386BA54EEF9DC44EBD6C71674065445D11F9A85 
{
public:
	// System.Int32 Pathfinding.Poly2Tri.Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_t4386BA54EEF9DC44EBD6C71674065445D11F9A85, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Poly2Tri.TriangulationAlgorithm
struct TriangulationAlgorithm_t2E179A36DEE77F40FE2D5F5CA10B9518EEA05324 
{
public:
	// System.Int32 Pathfinding.Poly2Tri.TriangulationAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriangulationAlgorithm_t2E179A36DEE77F40FE2D5F5CA10B9518EEA05324, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Poly2Tri.TriangulationMode
struct TriangulationMode_t911D07452895E9F52DF7371F06919EE4A7B02694 
{
public:
	// System.Int32 Pathfinding.Poly2Tri.TriangulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriangulationMode_t911D07452895E9F52DF7371F06919EE4A7B02694, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1
struct U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6  : public RuntimeObject
{
public:
	// System.Int32 Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::<i>__0
	int32_t ___U3CiU3E__0_0;
	// System.Int32 Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::$PC
	int32_t ___U24PC_1;
	// System.Boolean Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::$current
	bool ___U24current_2;
	// Pathfinding.Poly2Tri.FixedBitArray3 Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::<>f__this
	FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D  ___U3CU3Ef__this_3;

public:
	inline static int32_t get_offset_of_U3CiU3E__0_0() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6, ___U3CiU3E__0_0)); }
	inline int32_t get_U3CiU3E__0_0() const { return ___U3CiU3E__0_0; }
	inline int32_t* get_address_of_U3CiU3E__0_0() { return &___U3CiU3E__0_0; }
	inline void set_U3CiU3E__0_0(int32_t value)
	{
		___U3CiU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24PC_1() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6, ___U24PC_1)); }
	inline int32_t get_U24PC_1() const { return ___U24PC_1; }
	inline int32_t* get_address_of_U24PC_1() { return &___U24PC_1; }
	inline void set_U24PC_1(int32_t value)
	{
		___U24PC_1 = value;
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6, ___U24current_2)); }
	inline bool get_U24current_2() const { return ___U24current_2; }
	inline bool* get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(bool value)
	{
		___U24current_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_3() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6, ___U3CU3Ef__this_3)); }
	inline FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D  get_U3CU3Ef__this_3() const { return ___U3CU3Ef__this_3; }
	inline FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * get_address_of_U3CU3Ef__this_3() { return &___U3CU3Ef__this_3; }
	inline void set_U3CU3Ef__this_3(FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D  value)
	{
		___U3CU3Ef__this_3 = value;
	}
};


// Pathfinding.Poly2Tri.P2T
struct P2T_t8C6881577ADB1CD32D863DC9D31AEC6EA130ED16  : public RuntimeObject
{
public:

public:
};

struct P2T_t8C6881577ADB1CD32D863DC9D31AEC6EA130ED16_StaticFields
{
public:
	// Pathfinding.Poly2Tri.TriangulationAlgorithm Pathfinding.Poly2Tri.P2T::_defaultAlgorithm
	int32_t ____defaultAlgorithm_0;

public:
	inline static int32_t get_offset_of__defaultAlgorithm_0() { return static_cast<int32_t>(offsetof(P2T_t8C6881577ADB1CD32D863DC9D31AEC6EA130ED16_StaticFields, ____defaultAlgorithm_0)); }
	inline int32_t get__defaultAlgorithm_0() const { return ____defaultAlgorithm_0; }
	inline int32_t* get_address_of__defaultAlgorithm_0() { return &____defaultAlgorithm_0; }
	inline void set__defaultAlgorithm_0(int32_t value)
	{
		____defaultAlgorithm_0 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Pathfinding.Poly2Tri.TriangulationContext
struct TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DelaunayTriangle> Pathfinding.Poly2Tri.TriangulationContext::Triangles
	List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * ___Triangles_0;
	// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint> Pathfinding.Poly2Tri.TriangulationContext::Points
	List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * ___Points_1;
	// Pathfinding.Poly2Tri.TriangulationDebugContext Pathfinding.Poly2Tri.TriangulationContext::<DebugContext>k__BackingField
	TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 * ___U3CDebugContextU3Ek__BackingField_2;
	// Pathfinding.Poly2Tri.TriangulationMode Pathfinding.Poly2Tri.TriangulationContext::<TriangulationMode>k__BackingField
	int32_t ___U3CTriangulationModeU3Ek__BackingField_3;
	// Pathfinding.Poly2Tri.Triangulatable Pathfinding.Poly2Tri.TriangulationContext::<Triangulatable>k__BackingField
	RuntimeObject* ___U3CTriangulatableU3Ek__BackingField_4;
	// System.Int32 Pathfinding.Poly2Tri.TriangulationContext::<StepCount>k__BackingField
	int32_t ___U3CStepCountU3Ek__BackingField_5;
	// System.Boolean Pathfinding.Poly2Tri.TriangulationContext::<IsDebugEnabled>k__BackingField
	bool ___U3CIsDebugEnabledU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_Triangles_0() { return static_cast<int32_t>(offsetof(TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015, ___Triangles_0)); }
	inline List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * get_Triangles_0() const { return ___Triangles_0; }
	inline List_1_t199B3B317EF17B94136539CBDCD21434236A1094 ** get_address_of_Triangles_0() { return &___Triangles_0; }
	inline void set_Triangles_0(List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * value)
	{
		___Triangles_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Triangles_0), (void*)value);
	}

	inline static int32_t get_offset_of_Points_1() { return static_cast<int32_t>(offsetof(TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015, ___Points_1)); }
	inline List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * get_Points_1() const { return ___Points_1; }
	inline List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D ** get_address_of_Points_1() { return &___Points_1; }
	inline void set_Points_1(List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * value)
	{
		___Points_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Points_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDebugContextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015, ___U3CDebugContextU3Ek__BackingField_2)); }
	inline TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 * get_U3CDebugContextU3Ek__BackingField_2() const { return ___U3CDebugContextU3Ek__BackingField_2; }
	inline TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 ** get_address_of_U3CDebugContextU3Ek__BackingField_2() { return &___U3CDebugContextU3Ek__BackingField_2; }
	inline void set_U3CDebugContextU3Ek__BackingField_2(TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 * value)
	{
		___U3CDebugContextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDebugContextU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriangulationModeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015, ___U3CTriangulationModeU3Ek__BackingField_3)); }
	inline int32_t get_U3CTriangulationModeU3Ek__BackingField_3() const { return ___U3CTriangulationModeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CTriangulationModeU3Ek__BackingField_3() { return &___U3CTriangulationModeU3Ek__BackingField_3; }
	inline void set_U3CTriangulationModeU3Ek__BackingField_3(int32_t value)
	{
		___U3CTriangulationModeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTriangulatableU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015, ___U3CTriangulatableU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CTriangulatableU3Ek__BackingField_4() const { return ___U3CTriangulatableU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CTriangulatableU3Ek__BackingField_4() { return &___U3CTriangulatableU3Ek__BackingField_4; }
	inline void set_U3CTriangulatableU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CTriangulatableU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriangulatableU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStepCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015, ___U3CStepCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CStepCountU3Ek__BackingField_5() const { return ___U3CStepCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CStepCountU3Ek__BackingField_5() { return &___U3CStepCountU3Ek__BackingField_5; }
	inline void set_U3CStepCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CStepCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsDebugEnabledU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015, ___U3CIsDebugEnabledU3Ek__BackingField_6)); }
	inline bool get_U3CIsDebugEnabledU3Ek__BackingField_6() const { return ___U3CIsDebugEnabledU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsDebugEnabledU3Ek__BackingField_6() { return &___U3CIsDebugEnabledU3Ek__BackingField_6; }
	inline void set_U3CIsDebugEnabledU3Ek__BackingField_6(bool value)
	{
		___U3CIsDebugEnabledU3Ek__BackingField_6 = value;
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// Pathfinding.Poly2Tri.DTSweepContext
struct DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41  : public TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015
{
public:
	// System.Single Pathfinding.Poly2Tri.DTSweepContext::ALPHA
	float ___ALPHA_7;
	// Pathfinding.Poly2Tri.AdvancingFront Pathfinding.Poly2Tri.DTSweepContext::Front
	AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * ___Front_8;
	// Pathfinding.Poly2Tri.DTSweepBasin Pathfinding.Poly2Tri.DTSweepContext::Basin
	DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * ___Basin_9;
	// Pathfinding.Poly2Tri.DTSweepEdgeEvent Pathfinding.Poly2Tri.DTSweepContext::EdgeEvent
	DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 * ___EdgeEvent_10;
	// Pathfinding.Poly2Tri.DTSweepPointComparator Pathfinding.Poly2Tri.DTSweepContext::_comparator
	DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850 * ____comparator_11;
	// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DTSweepContext::<Head>k__BackingField
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___U3CHeadU3Ek__BackingField_12;
	// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DTSweepContext::<Tail>k__BackingField
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___U3CTailU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_ALPHA_7() { return static_cast<int32_t>(offsetof(DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41, ___ALPHA_7)); }
	inline float get_ALPHA_7() const { return ___ALPHA_7; }
	inline float* get_address_of_ALPHA_7() { return &___ALPHA_7; }
	inline void set_ALPHA_7(float value)
	{
		___ALPHA_7 = value;
	}

	inline static int32_t get_offset_of_Front_8() { return static_cast<int32_t>(offsetof(DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41, ___Front_8)); }
	inline AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * get_Front_8() const { return ___Front_8; }
	inline AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 ** get_address_of_Front_8() { return &___Front_8; }
	inline void set_Front_8(AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * value)
	{
		___Front_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Front_8), (void*)value);
	}

	inline static int32_t get_offset_of_Basin_9() { return static_cast<int32_t>(offsetof(DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41, ___Basin_9)); }
	inline DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * get_Basin_9() const { return ___Basin_9; }
	inline DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B ** get_address_of_Basin_9() { return &___Basin_9; }
	inline void set_Basin_9(DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * value)
	{
		___Basin_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Basin_9), (void*)value);
	}

	inline static int32_t get_offset_of_EdgeEvent_10() { return static_cast<int32_t>(offsetof(DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41, ___EdgeEvent_10)); }
	inline DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 * get_EdgeEvent_10() const { return ___EdgeEvent_10; }
	inline DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 ** get_address_of_EdgeEvent_10() { return &___EdgeEvent_10; }
	inline void set_EdgeEvent_10(DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 * value)
	{
		___EdgeEvent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EdgeEvent_10), (void*)value);
	}

	inline static int32_t get_offset_of__comparator_11() { return static_cast<int32_t>(offsetof(DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41, ____comparator_11)); }
	inline DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850 * get__comparator_11() const { return ____comparator_11; }
	inline DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850 ** get_address_of__comparator_11() { return &____comparator_11; }
	inline void set__comparator_11(DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850 * value)
	{
		____comparator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparator_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHeadU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41, ___U3CHeadU3Ek__BackingField_12)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get_U3CHeadU3Ek__BackingField_12() const { return ___U3CHeadU3Ek__BackingField_12; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of_U3CHeadU3Ek__BackingField_12() { return &___U3CHeadU3Ek__BackingField_12; }
	inline void set_U3CHeadU3Ek__BackingField_12(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		___U3CHeadU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTailU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41, ___U3CTailU3Ek__BackingField_13)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get_U3CTailU3Ek__BackingField_13() const { return ___U3CTailU3Ek__BackingField_13; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of_U3CTailU3Ek__BackingField_13() { return &___U3CTailU3Ek__BackingField_13; }
	inline void set_U3CTailU3Ek__BackingField_13(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		___U3CTailU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTailU3Ek__BackingField_13), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Pathfinding.Poly2Tri.PointOnEdgeException
struct PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075  : public NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6
{
public:
	// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.PointOnEdgeException::A
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___A_17;
	// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.PointOnEdgeException::B
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___B_18;
	// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.PointOnEdgeException::C
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___C_19;

public:
	inline static int32_t get_offset_of_A_17() { return static_cast<int32_t>(offsetof(PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075, ___A_17)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get_A_17() const { return ___A_17; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of_A_17() { return &___A_17; }
	inline void set_A_17(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		___A_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___A_17), (void*)value);
	}

	inline static int32_t get_offset_of_B_18() { return static_cast<int32_t>(offsetof(PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075, ___B_18)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get_B_18() const { return ___B_18; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of_B_18() { return &___B_18; }
	inline void set_B_18(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		___B_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___B_18), (void*)value);
	}

	inline static int32_t get_offset_of_C_19() { return static_cast<int32_t>(offsetof(PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075, ___C_19)); }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * get_C_19() const { return ___C_19; }
	inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 ** get_address_of_C_19() { return &___C_19; }
	inline void set_C_19(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * value)
	{
		___C_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___C_19), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// T Pathfinding.Poly2Tri.FixedArray3`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FixedArray3_1_get_Item_mE05A6833A6F5636956C1C1BBC9752C82F721BBFB_gshared (FixedArray3_1_tFBDC0D92AB6ACB4E285191B4B8D1CF688BDDE19C * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.FixedArray3`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedArray3_1_Clear_m6BAE1374871F5CB0730541CD7055B02B34BFF501_gshared (FixedArray3_1_tFBDC0D92AB6ACB4E285191B4B8D1CF688BDDE19C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mE77C107ECF54AE2B83D6CA1BEFE9D5B45F69D332_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.FixedArray3`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedArray3_1_set_Item_m486E2E15B4329736061F9AF323522CBF8FEFE747_gshared (FixedArray3_1_tFBDC0D92AB6ACB4E285191B4B8D1CF688BDDE19C * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 Pathfinding.Poly2Tri.FixedArray3`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedArray3_1_IndexOf_m05EEFF8051FD3BC78E9EBBCB7AD035A49D6C77AA_gshared (FixedArray3_1_tFBDC0D92AB6ACB4E285191B4B8D1CF688BDDE19C * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.FixedArray3`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedArray3_1_Contains_m31D45697F219175E71EEF0A1934AD116974B5479_gshared (FixedArray3_1_tFBDC0D92AB6ACB4E285191B4B8D1CF688BDDE19C * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.AdvancingFront::AddNode(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_AddNode_m5ACCEC29A8BBB6D7B5FA101274F4154E7D91711C (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m7AB8F81608D77A17FF201F39EE04A2E417C86995 (StringBuilder_t * __this, double ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFront::LocateNode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * AdvancingFront_LocateNode_m4D3198C869FDAED042B8F6B25D3797C03B9E0C96 (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, double ___x0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFront::FindSearchNode(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * AdvancingFront_FindSearchNode_mA0268716FB031157D0B712B0BC691586B556DBFE_inline (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, double ___x0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepContext::CreateAdvancingFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_CreateAdvancingFront_mF27104727FC85BCAC3F933E18D0D05F7B8718396 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::Sweep(Pathfinding.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Sweep_m38455340393B80C558C29A7E3FBEDB76458C9110 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.TriangulationMode Pathfinding.Poly2Tri.TriangulationContext::get_TriangulationMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_TriangulationMode_m3E972EEFFBCB7A200DB68ADA0EC181656FA57270_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FinalizationPolygon(Pathfinding.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationPolygon_mB25ED0784980BED115619965226F519AB116068A (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FinalizationConvexHull(Pathfinding.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationConvexHull_mE534C2049F9B4CA97697B0B686F4D6F051980809 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.TriangulationContext::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Done_m2CB8E1517B6374B21A809D8598CB6D3F68BB2C86 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>::get_Item(System.Int32)
inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * (*) (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.DTSweep::PointEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * DTSweep_PointEvent_m427F4BBBB98F00D3492A3CECCC5E2269A7BE04F5 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point1, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.TriangulationPoint::get_HasEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationPoint_get_HasEdges_mFCC2F3BF650791861D016AB7C8F44DD841E82052 (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DTSweepConstraint> Pathfinding.Poly2Tri.TriangulationPoint::get_Edges()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * TriangulationPoint_get_Edges_mDB541E87B6BDF7A7AA814C98C381952ED2F34127_inline (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DTSweepConstraint>::GetEnumerator()
inline Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63  List_1_GetEnumerator_m41D15BF47655570DAC6EB2652BCCB85AFAF3DC57 (List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63  (*) (List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Pathfinding.Poly2Tri.DTSweepConstraint>::get_Current()
inline DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * Enumerator_get_Current_m1EC377D47602F54DEA8A5AA7C33737A46C9586C9_inline (Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63 * __this, const RuntimeMethod* method)
{
	return ((  DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * (*) (Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// Pathfinding.Poly2Tri.DTSweepDebugContext Pathfinding.Poly2Tri.TriangulationContext::get_DTDebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepDebugContext::set_ActiveConstraint(Pathfinding.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveConstraint_m5C4201BA669BA58B14A073FB1BC116BE142FF97E (DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * __this, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::EdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_m7069CC946D75354A186AFBE5968400BC8EFD19EA (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Pathfinding.Poly2Tri.DTSweepConstraint>::MoveNext()
inline bool Enumerator_MoveNext_m7FE2CA0E22076BBA9F0B9354F67749A21E2358C1 (Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Pathfinding.Poly2Tri.DTSweepConstraint>::Dispose()
inline void Enumerator_Dispose_m82B90CC755BA55DB57BE296391255BFB175B288D (Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Pathfinding.Poly2Tri.TriangulationContext::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Update_m562887E560870E858AEAB2BFBB12929C11E2A538 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>::get_Count()
inline int32_t List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_inline (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Pathfinding.Poly2Tri.DTSweep::TurnAdvancingFrontConvex(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.AdvancingFrontNode,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_TurnAdvancingFrontConvex_m52ED7D82F95F028549F7CBFFBF911999F7FC8417 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___b1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___c2, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::Contains(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_Contains_mD7B3B2BD860C022AD7EE4FF16EB2631BFD08CA45 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.DelaunayTriangle Pathfinding.Poly2Tri.DelaunayTriangle::NeighborAcrossFrom(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * DelaunayTriangle_NeighborAcrossFrom_mB0C3FB6DFF9BBB76152AACEBB23AE46E47780187 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DelaunayTriangle::OppositePoint(Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DelaunayTriangle_OppositePoint_m043329713CBA0A263FD870227E7EE23038A0E3E9 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::RotateTrianglePair(Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_RotateTrianglePair_m22E9BF622CAEE8F2438B39492EBD95F3BEA70F3C (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p1, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___ot2, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___op3, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepContext::MapTriangleToNodes(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MapTriangleToNodes_mE829C4699361BD4343CAF32227CBBD36815661B5 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepContext::RemoveFromList(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveFromList_m166805D76FE0C262824372315A88C9BFE1075FF2 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___triangle0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DelaunayTriangle::PointCCWFrom(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DelaunayTriangle_PointCCWFrom_mD4A9B1F3FF1EE9ACAF89109E533D6555FEB0812E (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.DelaunayTriangle Pathfinding.Poly2Tri.DelaunayTriangle::NeighborCCWFrom(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * DelaunayTriangle_NeighborCCWFrom_mE3B49CD2FA11476F2840D7E1CAD0FE1EFE807856 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DelaunayTriangle::PointCWFrom(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DelaunayTriangle_PointCWFrom_m03C8942EA962B41D0526074CC3A62DCC2E3DA812 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.DelaunayTriangle Pathfinding.Poly2Tri.DelaunayTriangle::NeighborCWFrom(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * DelaunayTriangle_NeighborCWFrom_mBEA1F32675D9FBAA7D276388D9658DC6FB29BA76 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepContext::FinalizeTriangulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_FinalizeTriangulation_mEF92BE51B4E23B55685993598CD6762A085431F1 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepDebugContext::set_ActiveNode(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveNode_mED77963E5472F3D8FCC920E9CF4991DF7DA8176D (DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * __this, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___value0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.Orientation Pathfinding.Poly2Tri.TriangulationUtil::Orient2d(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pa0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pb1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pc2, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::Fill(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Fill_mDA5CB3222C951C63D98F20B88614CD71AD0E7E43 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node1, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCW(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCW_m565B4CB9FD0AE54F929D4ACD1B525A6D51C8C27D (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepContext::MeshClean(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshClean_m1C8B164D07F119478F7D1FA412B2B9310A6681B6 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___triangle0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.DTSweepContext::LocateNode(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * DTSweepContext_LocateNode_m2D394CB716AEF3560A872557BF56D7A0BBE2A503 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.DTSweep::NewFrontTriangle(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * DTSweep_NewFrontTriangle_m37D767634E2A2BF65E41187F8AEC8AF56BA295A9 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepContext::AddNode(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_AddNode_mB026D7CCBE768A93A3FCD65962E8BCDAC6962C8C (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FillAdvancingFront(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillAdvancingFront_mE63F4C7B22B315004009DED1AF2FBB0EAD40DA39 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___n1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::.ctor(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle__ctor_m8889D692510997CE9D51FACD9358FA27F91DD078 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p10, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p21, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p32, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::MarkNeighbor(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_m513A0664DF96C4C67A1AE7E175841FF1DEC08290 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DelaunayTriangle>::Add(!0)
inline void List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69 (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 *, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Pathfinding.Poly2Tri.AdvancingFrontNode::.ctor(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFrontNode__ctor_m3371C0E61496A577A3A536FC02591558D837EE7B (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.DTSweep::Legalize(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_Legalize_mC506C715996AE6BBC249EBAA75FE224A510817D2 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepDebugContext::set_PrimaryTriangle(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_PrimaryTriangle_m51D93F311C1C67971DA3EFC27A384D5B743F9ABC (DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___value0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.DTSweep::IsEdgeSideOfTriangle(Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsEdgeSideOfTriangle_mEC5B396B4C7ACF05160F365CE1138E31FA4D8113 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___triangle0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___ep1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___eq2, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FillEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillEdgeEvent_mA4569D01EFF59293CF86025445521A44D550ECE1 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::EdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_mB846249772A1156CF89D26F8B1B3B1477DDE5699 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___ep1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___eq2, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___triangle3, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point4, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FillRightAboveEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightAboveEdgeEvent_m2705D1E8D86DEFDA831534A9D66379FCBDBA43A2 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FillLeftAboveEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftAboveEdgeEvent_mF151E4C380B065C4A4354E856C375F871C70F14D (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FillRightConcaveEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConcaveEdgeEvent_mC4BE020D7643E8DE734DD17B6BAC7B50AE1F70C8 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FillRightConvexEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConvexEdgeEvent_m7DECB0E3C4A2B26653696E68F6A2BC101B3B4716 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FillRightBelowEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightBelowEdgeEvent_m16AA522886CF3F369EBAF5E197EF088F2EE06EE7 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FillLeftConcaveEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConcaveEdgeEvent_mED5399C9A846FBF230E0944D8F00099F54BFB121 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FillLeftConvexEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConvexEdgeEvent_m168BB862797B69EBB1C43A60FA1953FCD751F2C5 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FillLeftBelowEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftBelowEdgeEvent_mD8465A9E524320C5CBCC36070BC6B3A4C985A95C (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method);
// System.Int32 Pathfinding.Poly2Tri.DelaunayTriangle::EdgeIndex(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_EdgeIndex_m8340DD1269975C56C54A1447998F6743CCA00074 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p10, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p21, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_m0219297FA75D0644CFADD73E7C07BF9152E7B07C (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, int32_t ___index0, const RuntimeMethod* method);
// T Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.DelaunayTriangle>::get_Item(System.Int32)
inline DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F (FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * (*) (FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *, int32_t, const RuntimeMethod*))FixedArray3_1_get_Item_mE05A6833A6F5636956C1C1BBC9752C82F721BBFB_gshared)(__this, ___index0, method);
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_mFF8FAFD873D37E05EC4F905277C12654DC6BBCA1 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___q1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.PointOnEdgeException::.ctor(System.String,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointOnEdgeException__ctor_m07E7487D1ECDE53CF088BDF6C817366E2C37A28C (PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075 * __this, String_t* ___message0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___a1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___b2, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___c3, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FlipEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipEdgeEvent_m35DE6A69E95B30B81716A27A1D7705210216AE02 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___ep1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___eq2, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t3, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p4, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepDebugContext::set_SecondaryTriangle(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_SecondaryTriangle_mBC2649DEB0BF5AF699BECA1451E0AF828C4466A1 (DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___value0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.TriangulationUtil::InScanArea(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_InScanArea_m1DFA0B0CE104E4DDD8F3F3CD9CE295A4B71B7A23 (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pa0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pb1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pc2, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pd3, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.DelaunayTriangle Pathfinding.Poly2Tri.DTSweep::NextFlipTriangle(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.Orientation,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * DTSweep_NextFlipTriangle_mB1EF09F1C202648E8B5A1CCB35409F3EF621DA74 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, int32_t ___o1, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t2, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___ot3, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p4, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___op5, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DTSweep::NextFlipPoint(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DTSweep_NextFlipPoint_mF4FB6324AEFDB82700CEB30B1A60CECA6A6F5134 (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___ep0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___eq1, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___ot2, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___op3, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FlipScanEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipScanEdgeEvent_mAD268B132C138C407F0D0474503E3B2A41F74A2B (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___ep1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___eq2, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___flipTriangle3, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t4, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p5, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.FixedBitArray3::set_Item(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846 (FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.FixedBitArray3::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_Clear_mB15C1018D11FCA7B646A13CAB8E4C0F3174F9022 (FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * __this, const RuntimeMethod* method);
// System.Double Pathfinding.Poly2Tri.DTSweep::HoleAngle(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_HoleAngle_m71510BA2CABA57BAF94C6359758AFBC8CA093213 (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.AdvancingFrontNode::get_HasNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasNext_m3B4C7FE296BA4921646F2F734483621A5B12B015 (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * __this, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.AdvancingFrontNode::get_HasPrev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasPrev_m3195EA162420C076EC1072D6AE3E164CC9204AB3 (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * __this, const RuntimeMethod* method);
// System.Double Pathfinding.Poly2Tri.DTSweep::BasinAngle(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_BasinAngle_m759295DE0F7B5A3B281D47BCC87583BDE74BCB18 (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FillBasin(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasin_mCD2145660102B48024DA988604F914936B3DB48F (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::FillBasinReq(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasinReq_mAA104E4942452196EDF771565885D5FFB09AF3B6 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node1, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.DTSweep::IsShallow(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsShallow_m6DE040F200510C03978F44EFBC26C3067273944C (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepContext::RemoveNode(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveNode_m12327D8AD44A12081C31EAB99638F9DDFB288D6F (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.FixedBitArray3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2 (FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * __this, int32_t ___index0, const RuntimeMethod* method);
// T Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.TriangulationPoint>::get_Item(System.Int32)
inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D (FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * (*) (FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *, int32_t, const RuntimeMethod*))FixedArray3_1_get_Item_mE05A6833A6F5636956C1C1BBC9752C82F721BBFB_gshared)(__this, ___index0, method);
}
// System.Int32 Pathfinding.Poly2Tri.DelaunayTriangle::IndexOf(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.TriangulationUtil::SmartIncircle(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_SmartIncircle_m314FED9CC95D70544EC3B3F09EC9CA8F2D49563D (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pa0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pb1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pc2, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pd3, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCCW(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCCW_mC3007D3B2AE0EE9698C0616E4F520D2F21D95CF2 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCCW(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCCW_mB5060E20A425AFA823A64AC8AB30E5D5B11D3F3B (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCW(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCW_m0549E8E4DDF25305DDB9A54F854EF596DB02BA3F (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::Legalize(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_Legalize_m55DA7D544ABC8AD13546C67DB8A19A76441AE352 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___oPoint0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___nPoint1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCCW(Pathfinding.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCCW_m8C010B3DDE7BA2E1C3F27E7CDB0D62B3B5A9ABC8 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, bool ___ce1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCW(Pathfinding.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCW_mAB4AD1CCA1C4580184B9B1A59F8CC046DF203B65 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, bool ___ce1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCCW(Pathfinding.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCCW_m7443A15B1D37F3EC5625FFE93B6D4DD052450A21 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, bool ___ce1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCW(Pathfinding.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCW_m0E3F1D24C1032AC93F9E4EA3C298E39833D355DA (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, bool ___ce1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.DelaunayTriangle>::Clear()
inline void FixedArray3_1_Clear_m33E5D058EE7F88DC82D19508C4D1D7F87EB02B08 (FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * __this, const RuntimeMethod* method)
{
	((  void (*) (FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *, const RuntimeMethod*))FixedArray3_1_Clear_m6BAE1374871F5CB0730541CD7055B02B34BFF501_gshared)(__this, method);
}
// System.Void Pathfinding.Poly2Tri.TriangulationConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationConstraint__ctor_m51B97E70CC120BB45B82AB2C17C0D343206D1F1B (TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.TriangulationPoint::AddEdge(Pathfinding.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_AddEdge_m0C4479D6CA27AF066683B041886131097FEBFD6F (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___e0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepBasin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepBasin__ctor_m62505975944D9CCEB4262A44ADD196C2216088DD (DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepEdgeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepEdgeEvent__ctor_m6B45BA2A4943D926D916573689EAB95B8838D317 (DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepPointComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepPointComparator__ctor_mD075FF75CA8B4CAD70F973DA671B2B4A3E283671 (DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.TriangulationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext__ctor_m8C13B5218D9A9DF88CA4D9FCBF3E4521AE1D68D8 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TriangulationContext_get_IsDebugEnabled_m261AB3285C2C43D6E664F688B220200699C000B2_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DelaunayTriangle>::Remove(!0)
inline bool List_1_Remove_m900ABA8F1D6E4E659827AA45A01C9948AB2F1B94 (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 *, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::MeshCleanReq(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshCleanReq_m38165B44F9CFE802B235832C727792964EF7AFCD (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___triangle0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::get_IsInterior()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DelaunayTriangle_get_IsInterior_m344265E702D66D413E43BBAC3BD8D8F54C05F009_inline (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::set_IsInterior(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DelaunayTriangle_set_IsInterior_mC5ADB92E779C6CA4640DEE778FED5A0E7DA17963_inline (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, bool ___value0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.Triangulatable Pathfinding.Poly2Tri.TriangulationContext::get_Triangulatable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TriangulationContext_get_Triangulatable_m7CCE82D33D014B4F405D396C380BB145CBD61B96_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.TriangulationContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Clear_m561100BDAEB32CA53F7AD294212F1A090F6160ED (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DelaunayTriangle>::Clear()
inline void List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void Pathfinding.Poly2Tri.AdvancingFront::RemoveNode(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_RemoveNode_m8758B21CEAA38E882BBBA26AC0BCD2574474CDAF (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFront::LocateNode(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * AdvancingFront_LocateNode_m8C551357BBDFD144665E82FD3763BBDA09012DF3 (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DTSweepContext::get_Tail()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DTSweepContext_get_Tail_mA688B0DD53BA5E6A3D785B38FB2F2E207465ACBC_inline (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DTSweepContext::get_Head()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DTSweepContext_get_Head_m6DB92BA766D2984CC17EDDFFE0450FF2FAEFF295_inline (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.AdvancingFront::.ctor(Pathfinding.Poly2Tri.AdvancingFrontNode,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront__ctor_m08F80F992650228015A6C8FC819B41D335EB5EDC (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___head0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___tail1, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFront::LocatePoint(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * AdvancingFront_LocatePoint_m588840872AD054E89732A07CBC9B4333D97A8928 (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.TriangulationContext::PrepareTriangulation(Pathfinding.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_PrepareTriangulation_mFC6FDD4D6FA6017C3173029A969A29B105D4F327 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, RuntimeObject* ___t0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>::GetEnumerator()
inline Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79  List_1_GetEnumerator_mFBF597A0FC5291FDA97464F4C0D2842F62496570 (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79  (*) (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Pathfinding.Poly2Tri.TriangulationPoint>::get_Current()
inline TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * Enumerator_get_Current_m4798328201C01BAE7F76D59C514EA1C04A867524_inline (Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79 * __this, const RuntimeMethod* method)
{
	return ((  TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * (*) (Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Pathfinding.Poly2Tri.TriangulationPoint>::MoveNext()
inline bool Enumerator_MoveNext_mDDBD63AE8436AE7618367FF71913AD366E8E5CF6 (Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Pathfinding.Poly2Tri.TriangulationPoint>::Dispose()
inline void Enumerator_Dispose_mE226B7422F771D2A2930B46662F7614CE8B6AD71 (Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Pathfinding.Poly2Tri.TriangulationPoint::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint__ctor_m52688943525DDBB891D8DF38CAF4FED2F546B143 (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, double ___x0, double ___y1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepContext::set_Head(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DTSweepContext_set_Head_mA7E0C871A78F70D806D5F964EBE0630F207E1E0E_inline (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepContext::set_Tail(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DTSweepContext_set_Tail_m50F6518217B69B24720174F570A0BFDA6D588AE5_inline (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>::Sort(System.Collections.Generic.IComparer`1<!0>)
inline void List_1_Sort_m84C86B06820C1146C9418A25D0CFBA78677D34F4 (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mE77C107ECF54AE2B83D6CA1BEFE9D5B45F69D332_gshared)(__this, ___comparer0, method);
}
// System.Void Pathfinding.Poly2Tri.DTSweepConstraint::.ctor(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepConstraint__ctor_m226DC2C6B72DB30C09807B0CDE90B2E281ACFB2B (DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p10, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p21, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepDebugContext::set_ActivePoint(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActivePoint_m0B91DD79CC82A3C89122A0A1F99B5CAF6D8EC835 (DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.TriangulationPoint>::set_Item(System.Int32,T)
inline void FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531 (FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * __this, int32_t ___index0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *, int32_t, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *, const RuntimeMethod*))FixedArray3_1_set_Item_m486E2E15B4329736061F9AF323522CBF8FEFE747_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.TriangulationPoint>::IndexOf(T)
inline int32_t FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3 (FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *, const RuntimeMethod*))FixedArray3_1_IndexOf_m05EEFF8051FD3BC78E9EBBCB7AD035A49D6C77AA_gshared)(__this, ___value0, method);
}
// System.Boolean Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.TriangulationPoint>::Contains(T)
inline bool FixedArray3_1_Contains_mEA68E8461B53162499ADC267BE82BF15F9593D06 (FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *, const RuntimeMethod*))FixedArray3_1_Contains_m31D45697F219175E71EEF0A1934AD116974B5479_gshared)(__this, ___value0, method);
}
// System.Void Pathfinding.Poly2Tri.FixedArray3`1<Pathfinding.Poly2Tri.DelaunayTriangle>::set_Item(System.Int32,T)
inline void FixedArray3_1_set_Item_mB572DF8606AEB0D5AC6433567DF66233D246ADD1 (FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * __this, int32_t ___index0, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *, int32_t, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 *, const RuntimeMethod*))FixedArray3_1_set_Item_m486E2E15B4329736061F9AF323522CBF8FEFE747_gshared)(__this, ___index0, ___value1, method);
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::MarkNeighbor(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_m0A004DE59C61D91141C432A753AC71A4F396A2D8 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p10, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p21, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t2, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::RotateCW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_RotateCW_m8EFCD7566B278216D7982B52F669D36FCDE73ED4 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, const RuntimeMethod* method);
// System.Int32 Pathfinding.Poly2Tri.DelaunayTriangle::IndexCCWFrom(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexCCWFrom_m64B629123696314E2C16EB88BCDBF65002529F42 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Boolean> Pathfinding.Poly2Tri.FixedBitArray3::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_GetEnumerator_mC8DF2011FDF4656A3F539F3BA99A6475A8FF2973 (FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Pathfinding.Poly2Tri.FixedBitArray3::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_mEE50F60626B966AAC0F2247C87C608D4F1379BA1 (FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * __this, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523 (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ec__Iterator1__ctor_m085670587EF6DA4377155D9AD5DC24B181831801 (U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Boolean> Pathfinding.Poly2Tri.FixedBitArray3::Enumerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_Enumerate_m22877F01C8C7138EAD2C2B4E712962158394E1DA (FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.P2T::Triangulate(Pathfinding.Poly2Tri.TriangulationAlgorithm,Pathfinding.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_m96F226C8906832E710E40F2556B1BE6B1D905640 (int32_t ___algorithm0, RuntimeObject* ___t1, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweepContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext__ctor_m8DCA9579D2886B8723181CD24A5ADBF4C01183F1 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.TriangulationContext Pathfinding.Poly2Tri.P2T::CreateContext(Pathfinding.Poly2Tri.TriangulationAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * P2T_CreateContext_m504344268CF260BD4283FE210D18332049F2AEE0 (int32_t ___algorithm0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.P2T::Triangulate(Pathfinding.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_m6AEDDB08B4908F7F2545495823682C4D67A2BBCD (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * ___tcx0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.DTSweep::Triangulate(Pathfinding.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Triangulate_mF72DAE4AAB09297830C3D4F2272A14EADC6544EA (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>::.ctor()
inline void List_1__ctor_m53277584AB6E7BB7792C86258D4901E64BEE3386 (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>::get_Capacity()
inline int32_t List_1_get_Capacity_mB1C5721383B7E1ADA084C578228CEEFE0627C62A (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *, const RuntimeMethod*))List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared)(__this, method);
}
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m709673BDF5D9264E61FEBBC4CE1038752523838D (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mFAC526ED1D6E99D14D2A8479F7AB98E301296875 (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>::Add(!0)
inline void List_1_Add_m6A37693AE4F0CB4723292608BF7E972591875BDF (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m9223A0102E161FB8A9F8F067E44C49F2934386EB (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.Polygon>::.ctor()
inline void List_1__ctor_mEDDF124FAECA750FE2CDD60C31541FCC5A60DFC0 (List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.Polygon>::Add(!0)
inline void List_1_Add_m2BD6ACF4590B98D64639A63BF48DB452D70744C6 (List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * __this, Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 *, Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Pathfinding.Poly2Tri.PolygonPoint::set_Previous(Pathfinding.Poly2Tri.PolygonPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PolygonPoint_set_Previous_m83DF7038EE04D3532C751D429EBAFA1B7D61EF96_inline (PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * __this, PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * ___value0, const RuntimeMethod* method);
// Pathfinding.Poly2Tri.PolygonPoint Pathfinding.Poly2Tri.PolygonPoint::get_Next()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * PolygonPoint_get_Next_mC7583EE6E74863FA0A5EB1542F4C43C06618CF08_inline (PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.PolygonPoint::set_Next(Pathfinding.Poly2Tri.PolygonPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PolygonPoint_set_Next_mC1D0741734FF8B7C6A4DD812D08DCA50222FD94B_inline (PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * __this, PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DelaunayTriangle>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mB87053F9146A58EAFD2CAF93BEC785DBF35E8B58 (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DelaunayTriangle>::.ctor(System.Int32)
inline void List_1__ctor_mCF6506941C856F3F2895AF16DB17A904F4954499 (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m66E153B03D3E2092A55098105D82CE16BE987789 (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Pathfinding.Poly2Tri.Polygon>::GetEnumerator()
inline Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3  List_1_GetEnumerator_m395E99A9DD5BFAED7715F9DC41E5C1DFED2F2A33 (List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3  (*) (List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Pathfinding.Poly2Tri.Polygon>::get_Current()
inline Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * Enumerator_get_Current_m24B8B83E42F3D05EBC0B0561BC6C968D950807CB_inline (Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3 * __this, const RuntimeMethod* method)
{
	return ((  Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * (*) (Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Pathfinding.Poly2Tri.Polygon>::MoveNext()
inline bool Enumerator_MoveNext_mE59C87000C4F0BF60A8930BFD0B3C4D2AFC36F39 (Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Pathfinding.Poly2Tri.Polygon>::Dispose()
inline void Enumerator_Dispose_m938318032FFA27F2A3F125F38D9E6775A0F5C644 (Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DelaunayTriangle>::.ctor()
inline void List_1__ctor_m5B3972F7A030AFF126EFAC0B626C89BCC95F55D9 (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>::.ctor(System.Int32)
inline void List_1__ctor_mC4A45C26EB5820CB76A1780258B7477CA2475865 (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Int32 Pathfinding.Poly2Tri.TriangulationContext::get_StepCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_StepCount_m1E788D27205D1420262FB0DFE8A304F4C6A62AC9_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.TriangulationContext::set_StepCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_StepCount_m357A09212D677B83382E32BD8DF867A3B46F5ED1_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.TriangulationContext::set_Triangulatable(Pathfinding.Poly2Tri.Triangulatable)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_Triangulatable_mE5732FE7DAE2E2AC575D496F4378A3A3C39576BD_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Pathfinding.Poly2Tri.TriangulationContext::set_TriangulationMode(Pathfinding.Poly2Tri.TriangulationMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_TriangulationMode_m476AC12A724496AE0516C187E08ED5784C208C78_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.TriangulationPoint>::Clear()
inline void List_1_Clear_m67D6E7643A16DD9DF83400B8D4CBCE0C59906379 (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// Pathfinding.Poly2Tri.TriangulationDebugContext Pathfinding.Poly2Tri.TriangulationContext::get_DebugContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 * TriangulationContext_get_DebugContext_m83F45DBC68DFA610C0058FC311E04B11169D1BAF_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DTSweepConstraint>::.ctor()
inline void List_1__ctor_mD75C7E307065084EED132174CE706924E684EF81 (List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Pathfinding.Poly2Tri.TriangulationPoint::set_Edges(System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DTSweepConstraint>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationPoint_set_Edges_mED60257E3A07FC8BF1A2DC1098105CBB83004A5E_inline (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DTSweepConstraint>::Add(!0)
inline void List_1_Add_m63FD2777F6CFF5EF8E7680A8F34AE9EC54601C91 (List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * __this, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 *, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.IEnumerator`1<System.Boolean> Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::System.Collections.Generic.IEnumerable<bool>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CboolU3E_GetEnumerator_mB0C6E9457B6BD2DF89E183E6A09589B9F3A6A438 (U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m7EBFB07A7B97F6413261B302A509C280E5E11400 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070 (const RuntimeMethod* method);
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
// System.Void Pathfinding.Poly2Tri.AdvancingFront::.ctor(Pathfinding.Poly2Tri.AdvancingFrontNode,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront__ctor_m08F80F992650228015A6C8FC819B41D335EB5EDC (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___head0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___tail1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = ___head0;
		__this->set_Head_0(L_0);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1 = ___tail1;
		__this->set_Tail_1(L_1);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_2 = ___head0;
		__this->set_Search_2(L_2);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = ___head0;
		AdvancingFront_AddNode_m5ACCEC29A8BBB6D7B5FA101274F4154E7D91711C(__this, L_3, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = ___tail1;
		AdvancingFront_AddNode_m5ACCEC29A8BBB6D7B5FA101274F4154E7D91711C(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.AdvancingFront::AddNode(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_AddNode_m5ACCEC29A8BBB6D7B5FA101274F4154E7D91711C (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.AdvancingFront::RemoveNode(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_RemoveNode_m8758B21CEAA38E882BBBA26AC0BCD2574474CDAF (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Pathfinding.Poly2Tri.AdvancingFront::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvancingFront_ToString_m8B2EBFC1A7ED39C349EFAFA9781EF3916E65F1D1 (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_1 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1 = __this->get_Head_0();
		V_1 = L_1;
		goto IL_0035;
	}

IL_0012:
	{
		StringBuilder_t * L_2 = V_0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = V_1;
		NullCheck(L_3);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4 = L_3->get_Point_3();
		NullCheck(L_4);
		double L_5 = L_4->get_X_0();
		NullCheck(L_2);
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_m7AB8F81608D77A17FF201F39EE04A2E417C86995(L_2, L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_6, _stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = V_1;
		NullCheck(L_8);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_9 = L_8->get_Next_0();
		V_1 = L_9;
	}

IL_0035:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = V_1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = __this->get_Tail_1();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_10) == ((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_11))))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t * L_12 = V_0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_13 = __this->get_Tail_1();
		NullCheck(L_13);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_14 = L_13->get_Point_3();
		NullCheck(L_14);
		double L_15 = L_14->get_X_0();
		NullCheck(L_12);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m7AB8F81608D77A17FF201F39EE04A2E417C86995(L_12, L_15, /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		return L_18;
	}
}
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFront::FindSearchNode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * AdvancingFront_FindSearchNode_mA0268716FB031157D0B712B0BC691586B556DBFE (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, double ___x0, const RuntimeMethod* method)
{
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = __this->get_Search_2();
		return L_0;
	}
}
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFront::LocateNode(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * AdvancingFront_LocateNode_m8C551357BBDFD144665E82FD3763BBDA09012DF3 (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method)
{
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___point0;
		NullCheck(L_0);
		double L_1 = L_0->get_X_0();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_2;
		L_2 = AdvancingFront_LocateNode_m4D3198C869FDAED042B8F6B25D3797C03B9E0C96(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFront::LocateNode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * AdvancingFront_LocateNode_m4D3198C869FDAED042B8F6B25D3797C03B9E0C96 (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, double ___x0, const RuntimeMethod* method)
{
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_0 = NULL;
	{
		double L_0 = ___x0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1;
		L_1 = AdvancingFront_FindSearchNode_mA0268716FB031157D0B712B0BC691586B556DBFE_inline(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		double L_2 = ___x0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = V_0;
		NullCheck(L_3);
		double L_4 = L_3->get_Value_2();
		if ((!(((double)L_2) < ((double)L_4))))
		{
			goto IL_0040;
		}
	}
	{
		goto IL_002e;
	}

IL_0019:
	{
		double L_5 = ___x0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_6 = V_0;
		NullCheck(L_6);
		double L_7 = L_6->get_Value_2();
		if ((!(((double)L_5) >= ((double)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = V_0;
		__this->set_Search_2(L_8);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_9 = V_0;
		return L_9;
	}

IL_002e:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = V_0;
		NullCheck(L_10);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = L_10->get_Prev_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_12 = L_11;
		V_0 = L_12;
		if (L_12)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0071;
	}

IL_0040:
	{
		goto IL_0064;
	}

IL_0045:
	{
		double L_13 = ___x0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_14 = V_0;
		NullCheck(L_14);
		double L_15 = L_14->get_Value_2();
		if ((!(((double)L_13) < ((double)L_15))))
		{
			goto IL_0064;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = V_0;
		NullCheck(L_16);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_17 = L_16->get_Prev_1();
		__this->set_Search_2(L_17);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_18 = V_0;
		NullCheck(L_18);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = L_18->get_Prev_1();
		return L_19;
	}

IL_0064:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_20 = V_0;
		NullCheck(L_20);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = L_20->get_Next_0();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_22 = L_21;
		V_0 = L_22;
		if (L_22)
		{
			goto IL_0045;
		}
	}

IL_0071:
	{
		return (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)NULL;
	}
}
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.AdvancingFront::LocatePoint(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * AdvancingFront_LocatePoint_m588840872AD054E89732A07CBC9B4333D97A8928 (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_1 = NULL;
	double V_2 = 0.0;
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___point0;
		NullCheck(L_0);
		double L_1 = L_0->get_X_0();
		V_0 = L_1;
		double L_2 = V_0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3;
		L_3 = AdvancingFront_FindSearchNode_mA0268716FB031157D0B712B0BC691586B556DBFE_inline(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = V_1;
		NullCheck(L_4);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_5 = L_4->get_Point_3();
		NullCheck(L_5);
		double L_6 = L_5->get_X_0();
		V_2 = L_6;
		double L_7 = V_0;
		double L_8 = V_2;
		if ((!(((double)L_7) == ((double)L_8))))
		{
			goto IL_0078;
		}
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = ___point0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = V_1;
		NullCheck(L_10);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_11 = L_10->get_Point_3();
		if ((((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_9) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_11)))
		{
			goto IL_0073;
		}
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = ___point0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_13 = V_1;
		NullCheck(L_13);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_14 = L_13->get_Prev_1();
		NullCheck(L_14);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_15 = L_14->get_Point_3();
		if ((!(((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_12) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_15))))
		{
			goto IL_004b;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = V_1;
		NullCheck(L_16);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_17 = L_16->get_Prev_1();
		V_1 = L_17;
		goto IL_0073;
	}

IL_004b:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_18 = ___point0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = V_1;
		NullCheck(L_19);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_20 = L_19->get_Next_0();
		NullCheck(L_20);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_21 = L_20->get_Point_3();
		if ((!(((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_18) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_21))))
		{
			goto IL_0068;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_22 = V_1;
		NullCheck(L_22);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_23 = L_22->get_Next_0();
		V_1 = L_23;
		goto IL_0073;
	}

IL_0068:
	{
		Exception_t * L_24 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A6129D3AF4D923F94C2DF172F5DA64D92B3C03C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdvancingFront_LocatePoint_m588840872AD054E89732A07CBC9B4333D97A8928_RuntimeMethod_var)));
	}

IL_0073:
	{
		goto IL_00ca;
	}

IL_0078:
	{
		double L_25 = V_0;
		double L_26 = V_2;
		if ((!(((double)L_25) < ((double)L_26))))
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_0095;
	}

IL_0084:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_27 = ___point0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_28 = V_1;
		NullCheck(L_28);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_29 = L_28->get_Point_3();
		if ((!(((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_27) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_29))))
		{
			goto IL_0095;
		}
	}
	{
		goto IL_00a2;
	}

IL_0095:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_30 = V_1;
		NullCheck(L_30);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_31 = L_30->get_Prev_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_32 = L_31;
		V_1 = L_32;
		if (L_32)
		{
			goto IL_0084;
		}
	}

IL_00a2:
	{
		goto IL_00ca;
	}

IL_00a7:
	{
		goto IL_00bd;
	}

IL_00ac:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_33 = ___point0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_34 = V_1;
		NullCheck(L_34);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_35 = L_34->get_Point_3();
		if ((!(((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_33) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_35))))
		{
			goto IL_00bd;
		}
	}
	{
		goto IL_00ca;
	}

IL_00bd:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_36 = V_1;
		NullCheck(L_36);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_37 = L_36->get_Next_0();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_38 = L_37;
		V_1 = L_38;
		if (L_38)
		{
			goto IL_00ac;
		}
	}

IL_00ca:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_39 = V_1;
		__this->set_Search_2(L_39);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_40 = V_1;
		return L_40;
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
// System.Void Pathfinding.Poly2Tri.AdvancingFrontNode::.ctor(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFrontNode__ctor_m3371C0E61496A577A3A536FC02591558D837EE7B (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___point0;
		__this->set_Point_3(L_0);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___point0;
		NullCheck(L_1);
		double L_2 = L_1->get_X_0();
		__this->set_Value_2(L_2);
		return;
	}
}
// System.Boolean Pathfinding.Poly2Tri.AdvancingFrontNode::get_HasNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasNext_m3B4C7FE296BA4921646F2F734483621A5B12B015 (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * __this, const RuntimeMethod* method)
{
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = __this->get_Next_0();
		return (bool)((((int32_t)((((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Pathfinding.Poly2Tri.AdvancingFrontNode::get_HasPrev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasPrev_m3195EA162420C076EC1072D6AE3E164CC9204AB3 (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * __this, const RuntimeMethod* method)
{
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = __this->get_Prev_1();
		return (bool)((((int32_t)((((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Pathfinding.Poly2Tri.DTSweep::Triangulate(Pathfinding.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Triangulate_mF72DAE4AAB09297830C3D4F2272A14EADC6544EA (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, const RuntimeMethod* method)
{
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		NullCheck(L_0);
		DTSweepContext_CreateAdvancingFront_mF27104727FC85BCAC3F933E18D0D05F7B8718396(L_0, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_1 = ___tcx0;
		DTSweep_Sweep_m38455340393B80C558C29A7E3FBEDB76458C9110(L_1, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_2 = ___tcx0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TriangulationContext_get_TriangulationMode_m3E972EEFFBCB7A200DB68ADA0EC181656FA57270_inline(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_4 = ___tcx0;
		DTSweep_FinalizationPolygon_mB25ED0784980BED115619965226F519AB116068A(L_4, /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_0023:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_5 = ___tcx0;
		DTSweep_FinalizationConvexHull_mE534C2049F9B4CA97697B0B686F4D6F051980809(L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_6 = ___tcx0;
		NullCheck(L_6);
		TriangulationContext_Done_m2CB8E1517B6374B21A809D8598CB6D3F68BB2C86(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::Sweep(Pathfinding.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Sweep_m38455340393B80C558C29A7E3FBEDB76458C9110 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m82B90CC755BA55DB57BE296391255BFB175B288D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7FE2CA0E22076BBA9F0B9354F67749A21E2358C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1EC377D47602F54DEA8A5AA7C33737A46C9586C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m41D15BF47655570DAC6EB2652BCCB85AFAF3DC57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * V_0 = NULL;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_1 = NULL;
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63  V_4;
	memset((&V_4), 0, sizeof(V_4));
	DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		NullCheck(L_0);
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_1 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)L_0)->get_Points_1();
		V_0 = L_1;
		V_3 = 1;
		goto IL_008f;
	}

IL_000e:
	{
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_2 = V_0;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4;
		L_4 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		V_1 = L_4;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_5 = ___tcx0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = V_1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_7;
		L_7 = DTSweep_PointEvent_m427F4BBBB98F00D3492A3CECCC5E2269A7BE04F5(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = TriangulationPoint_get_HasEdges_mFCC2F3BF650791861D016AB7C8F44DD841E82052(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_10 = V_1;
		NullCheck(L_10);
		List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * L_11;
		L_11 = TriangulationPoint_get_Edges_mDB541E87B6BDF7A7AA814C98C381952ED2F34127_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63  L_12;
		L_12 = List_1_GetEnumerator_m41D15BF47655570DAC6EB2652BCCB85AFAF3DC57(L_11, /*hidden argument*/List_1_GetEnumerator_m41D15BF47655570DAC6EB2652BCCB85AFAF3DC57_RuntimeMethod_var);
		V_4 = L_12;
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_003b:
		{
			DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_13;
			L_13 = Enumerator_get_Current_m1EC377D47602F54DEA8A5AA7C33737A46C9586C9_inline((Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m1EC377D47602F54DEA8A5AA7C33737A46C9586C9_RuntimeMethod_var);
			V_5 = L_13;
			DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_14 = ___tcx0;
			NullCheck(L_14);
			bool L_15;
			L_15 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_14);
			if (!L_15)
			{
				goto IL_005c;
			}
		}

IL_004f:
		{
			DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_16 = ___tcx0;
			NullCheck(L_16);
			DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_17;
			L_17 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_16, /*hidden argument*/NULL);
			DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_18 = V_5;
			NullCheck(L_17);
			DTSweepDebugContext_set_ActiveConstraint_m5C4201BA669BA58B14A073FB1BC116BE142FF97E(L_17, L_18, /*hidden argument*/NULL);
		}

IL_005c:
		{
			DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_19 = ___tcx0;
			DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_20 = V_5;
			AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = V_2;
			DTSweep_EdgeEvent_m7069CC946D75354A186AFBE5968400BC8EFD19EA(L_19, L_20, L_21, /*hidden argument*/NULL);
		}

IL_0065:
		{
			bool L_22;
			L_22 = Enumerator_MoveNext_m7FE2CA0E22076BBA9F0B9354F67749A21E2358C1((Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m7FE2CA0E22076BBA9F0B9354F67749A21E2358C1_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_003b;
			}
		}

IL_0071:
		{
			IL2CPP_LEAVE(0x84, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m82B90CC755BA55DB57BE296391255BFB175B288D((Enumerator_t912CCE7F149B264244DF2E8EF95E83884A694E63 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m82B90CC755BA55DB57BE296391255BFB175B288D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x84, IL_0084)
	}

IL_0084:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_23 = ___tcx0;
		NullCheck(L_23);
		TriangulationContext_Update_m562887E560870E858AEAB2BFBB12929C11E2A538(L_23, (String_t*)NULL, /*hidden argument*/NULL);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_008f:
	{
		int32_t L_25 = V_3;
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_inline(L_26, /*hidden argument*/List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FinalizationConvexHull(Pathfinding.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationConvexHull_mE534C2049F9B4CA97697B0B686F4D6F051980809 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, const RuntimeMethod* method)
{
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_0 = NULL;
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_1 = NULL;
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_2 = NULL;
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * V_3 = NULL;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_4 = NULL;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_5 = NULL;
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		NullCheck(L_0);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_1 = L_0->get_Front_8();
		NullCheck(L_1);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_2 = L_1->get_Head_0();
		NullCheck(L_2);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = L_2->get_Next_0();
		V_0 = L_3;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = V_0;
		NullCheck(L_4);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_5 = L_4->get_Next_0();
		V_1 = L_5;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_6 = V_1;
		NullCheck(L_6);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_7 = L_6->get_Next_0();
		V_2 = L_7;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = V_0;
		NullCheck(L_8);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = L_8->get_Point_3();
		V_4 = L_9;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_10 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = V_0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_12 = V_1;
		DTSweep_TurnAdvancingFrontConvex_m52ED7D82F95F028549F7CBFFBF911999F7FC8417(L_10, L_11, L_12, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_13 = ___tcx0;
		NullCheck(L_13);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_14 = L_13->get_Front_8();
		NullCheck(L_14);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_15 = L_14->get_Tail_1();
		NullCheck(L_15);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = L_15->get_Prev_1();
		V_0 = L_16;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_17 = V_0;
		NullCheck(L_17);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_18 = L_17->get_Triangle_4();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = V_0;
		NullCheck(L_19);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_20 = L_19->get_Next_0();
		NullCheck(L_20);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_21 = L_20->get_Point_3();
		NullCheck(L_18);
		bool L_22;
		L_22 = DelaunayTriangle_Contains_mD7B3B2BD860C022AD7EE4FF16EB2631BFD08CA45(L_18, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_23 = V_0;
		NullCheck(L_23);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_24 = L_23->get_Triangle_4();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_25 = V_0;
		NullCheck(L_25);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_26 = L_25->get_Prev_1();
		NullCheck(L_26);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_27 = L_26->get_Point_3();
		NullCheck(L_24);
		bool L_28;
		L_28 = DelaunayTriangle_Contains_mD7B3B2BD860C022AD7EE4FF16EB2631BFD08CA45(L_24, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00bf;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_29 = V_0;
		NullCheck(L_29);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_30 = L_29->get_Triangle_4();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_31 = V_0;
		NullCheck(L_31);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_32 = L_31->get_Point_3();
		NullCheck(L_30);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_33;
		L_33 = DelaunayTriangle_NeighborAcrossFrom_mB0C3FB6DFF9BBB76152AACEBB23AE46E47780187(L_30, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_34 = V_0;
		NullCheck(L_34);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_35 = L_34->get_Triangle_4();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_36 = V_0;
		NullCheck(L_36);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_37 = L_36->get_Point_3();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_38 = V_3;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_39 = V_3;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_40 = V_0;
		NullCheck(L_40);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_41 = L_40->get_Triangle_4();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_42 = V_0;
		NullCheck(L_42);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_43 = L_42->get_Point_3();
		NullCheck(L_39);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_44;
		L_44 = DelaunayTriangle_OppositePoint_m043329713CBA0A263FD870227E7EE23038A0E3E9(L_39, L_41, L_43, /*hidden argument*/NULL);
		DTSweep_RotateTrianglePair_m22E9BF622CAEE8F2438B39492EBD95F3BEA70F3C(L_35, L_37, L_38, L_44, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_45 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_46 = V_0;
		NullCheck(L_46);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_47 = L_46->get_Triangle_4();
		NullCheck(L_45);
		DTSweepContext_MapTriangleToNodes_mE829C4699361BD4343CAF32227CBBD36815661B5(L_45, L_47, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_48 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_49 = V_3;
		NullCheck(L_48);
		DTSweepContext_MapTriangleToNodes_mE829C4699361BD4343CAF32227CBBD36815661B5(L_48, L_49, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_50 = ___tcx0;
		NullCheck(L_50);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_51 = L_50->get_Front_8();
		NullCheck(L_51);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_52 = L_51->get_Head_0();
		NullCheck(L_52);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_53 = L_52->get_Next_0();
		V_0 = L_53;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_54 = V_0;
		NullCheck(L_54);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_55 = L_54->get_Triangle_4();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_56 = V_0;
		NullCheck(L_56);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_57 = L_56->get_Prev_1();
		NullCheck(L_57);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_58 = L_57->get_Point_3();
		NullCheck(L_55);
		bool L_59;
		L_59 = DelaunayTriangle_Contains_mD7B3B2BD860C022AD7EE4FF16EB2631BFD08CA45(L_55, L_58, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_014f;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_60 = V_0;
		NullCheck(L_60);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_61 = L_60->get_Triangle_4();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_62 = V_0;
		NullCheck(L_62);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_63 = L_62->get_Next_0();
		NullCheck(L_63);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_64 = L_63->get_Point_3();
		NullCheck(L_61);
		bool L_65;
		L_65 = DelaunayTriangle_Contains_mD7B3B2BD860C022AD7EE4FF16EB2631BFD08CA45(L_61, L_64, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_014f;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_66 = V_0;
		NullCheck(L_66);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_67 = L_66->get_Triangle_4();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_68 = V_0;
		NullCheck(L_68);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_69 = L_68->get_Point_3();
		NullCheck(L_67);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_70;
		L_70 = DelaunayTriangle_NeighborAcrossFrom_mB0C3FB6DFF9BBB76152AACEBB23AE46E47780187(L_67, L_69, /*hidden argument*/NULL);
		V_3 = L_70;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_71 = V_0;
		NullCheck(L_71);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_72 = L_71->get_Triangle_4();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_73 = V_0;
		NullCheck(L_73);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_74 = L_73->get_Point_3();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_75 = V_3;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_76 = V_3;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_77 = V_0;
		NullCheck(L_77);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_78 = L_77->get_Triangle_4();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_79 = V_0;
		NullCheck(L_79);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_80 = L_79->get_Point_3();
		NullCheck(L_76);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_81;
		L_81 = DelaunayTriangle_OppositePoint_m043329713CBA0A263FD870227E7EE23038A0E3E9(L_76, L_78, L_80, /*hidden argument*/NULL);
		DTSweep_RotateTrianglePair_m22E9BF622CAEE8F2438B39492EBD95F3BEA70F3C(L_72, L_74, L_75, L_81, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_82 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_83 = V_0;
		NullCheck(L_83);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_84 = L_83->get_Triangle_4();
		NullCheck(L_82);
		DTSweepContext_MapTriangleToNodes_mE829C4699361BD4343CAF32227CBBD36815661B5(L_82, L_84, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_85 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_86 = V_3;
		NullCheck(L_85);
		DTSweepContext_MapTriangleToNodes_mE829C4699361BD4343CAF32227CBBD36815661B5(L_85, L_86, /*hidden argument*/NULL);
	}

IL_014f:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_87 = ___tcx0;
		NullCheck(L_87);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_88 = L_87->get_Front_8();
		NullCheck(L_88);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_89 = L_88->get_Head_0();
		NullCheck(L_89);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_90 = L_89->get_Point_3();
		V_4 = L_90;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_91 = ___tcx0;
		NullCheck(L_91);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_92 = L_91->get_Front_8();
		NullCheck(L_92);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_93 = L_92->get_Tail_1();
		NullCheck(L_93);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_94 = L_93->get_Prev_1();
		V_1 = L_94;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_95 = V_1;
		NullCheck(L_95);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_96 = L_95->get_Triangle_4();
		V_3 = L_96;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_97 = V_1;
		NullCheck(L_97);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_98 = L_97->get_Point_3();
		V_5 = L_98;
	}

IL_0181:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_99 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_100 = V_3;
		NullCheck(L_99);
		DTSweepContext_RemoveFromList_m166805D76FE0C262824372315A88C9BFE1075FF2(L_99, L_100, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_101 = V_3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_102 = V_5;
		NullCheck(L_101);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_103;
		L_103 = DelaunayTriangle_PointCCWFrom_mD4A9B1F3FF1EE9ACAF89109E533D6555FEB0812E(L_101, L_102, /*hidden argument*/NULL);
		V_5 = L_103;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_104 = V_5;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_105 = V_4;
		if ((!(((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_104) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_105))))
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_01ae;
	}

IL_01a0:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_106 = V_3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_107 = V_5;
		NullCheck(L_106);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_108;
		L_108 = DelaunayTriangle_NeighborCCWFrom_mE3B49CD2FA11476F2840D7E1CAD0FE1EFE807856(L_106, L_107, /*hidden argument*/NULL);
		V_3 = L_108;
		goto IL_0181;
	}

IL_01ae:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_109 = ___tcx0;
		NullCheck(L_109);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_110 = L_109->get_Front_8();
		NullCheck(L_110);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_111 = L_110->get_Head_0();
		NullCheck(L_111);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_112 = L_111->get_Next_0();
		NullCheck(L_112);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_113 = L_112->get_Point_3();
		V_4 = L_113;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_114 = V_3;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_115 = ___tcx0;
		NullCheck(L_115);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_116 = L_115->get_Front_8();
		NullCheck(L_116);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_117 = L_116->get_Head_0();
		NullCheck(L_117);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_118 = L_117->get_Point_3();
		NullCheck(L_114);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_119;
		L_119 = DelaunayTriangle_PointCWFrom_m03C8942EA962B41D0526074CC3A62DCC2E3DA812(L_114, L_118, /*hidden argument*/NULL);
		V_5 = L_119;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_120 = V_3;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_121 = ___tcx0;
		NullCheck(L_121);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_122 = L_121->get_Front_8();
		NullCheck(L_122);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_123 = L_122->get_Head_0();
		NullCheck(L_123);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_124 = L_123->get_Point_3();
		NullCheck(L_120);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_125;
		L_125 = DelaunayTriangle_NeighborCWFrom_mBEA1F32675D9FBAA7D276388D9658DC6FB29BA76(L_120, L_124, /*hidden argument*/NULL);
		V_3 = L_125;
	}

IL_01f4:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_126 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_127 = V_3;
		NullCheck(L_126);
		DTSweepContext_RemoveFromList_m166805D76FE0C262824372315A88C9BFE1075FF2(L_126, L_127, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_128 = V_3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_129 = V_5;
		NullCheck(L_128);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_130;
		L_130 = DelaunayTriangle_PointCCWFrom_mD4A9B1F3FF1EE9ACAF89109E533D6555FEB0812E(L_128, L_129, /*hidden argument*/NULL);
		V_5 = L_130;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_131 = V_3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_132 = V_5;
		NullCheck(L_131);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_133;
		L_133 = DelaunayTriangle_NeighborCCWFrom_mE3B49CD2FA11476F2840D7E1CAD0FE1EFE807856(L_131, L_132, /*hidden argument*/NULL);
		V_3 = L_133;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_134 = V_5;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_135 = V_4;
		if ((!(((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_134) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_135))))
		{
			goto IL_01f4;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_136 = ___tcx0;
		NullCheck(L_136);
		DTSweepContext_FinalizeTriangulation_mEF92BE51B4E23B55685993598CD6762A085431F1(L_136, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::TurnAdvancingFrontConvex(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.AdvancingFrontNode,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_TurnAdvancingFrontConvex_m52ED7D82F95F028549F7CBFFBF911999F7FC8417 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___b1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___c2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_0 = NULL;
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = ___b1;
		V_0 = L_0;
		goto IL_009c;
	}

IL_0007:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_1 = ___tcx0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_1);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_3 = ___tcx0;
		NullCheck(L_3);
		DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_4;
		L_4 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_3, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_5 = ___c2;
		NullCheck(L_4);
		DTSweepDebugContext_set_ActiveNode_mED77963E5472F3D8FCC920E9CF4991DF7DA8176D(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001e:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_6 = ___b1;
		NullCheck(L_6);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_7 = L_6->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = ___c2;
		NullCheck(L_8);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = L_8->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = ___c2;
		NullCheck(L_10);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = L_10->get_Next_0();
		NullCheck(L_11);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = L_11->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_7, L_9, L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0054;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_14 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_15 = ___c2;
		DTSweep_Fill_mDA5CB3222C951C63D98F20B88614CD71AD0E7E43(L_14, L_15, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = ___c2;
		NullCheck(L_16);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_17 = L_16->get_Next_0();
		___c2 = L_17;
		goto IL_009c;
	}

IL_0054:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_18 = ___b1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = V_0;
		if ((((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_18) == ((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_19)))
		{
			goto IL_0091;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_20 = ___b1;
		NullCheck(L_20);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = L_20->get_Prev_1();
		NullCheck(L_21);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_22 = L_21->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_23 = ___b1;
		NullCheck(L_23);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_24 = L_23->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_25 = ___c2;
		NullCheck(L_25);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_26 = L_25->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_22, L_24, L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_0091;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_28 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_29 = ___b1;
		DTSweep_Fill_mDA5CB3222C951C63D98F20B88614CD71AD0E7E43(L_28, L_29, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_30 = ___b1;
		NullCheck(L_30);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_31 = L_30->get_Prev_1();
		___b1 = L_31;
		goto IL_009c;
	}

IL_0091:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_32 = ___c2;
		___b1 = L_32;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_33 = ___c2;
		NullCheck(L_33);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_34 = L_33->get_Next_0();
		___c2 = L_34;
	}

IL_009c:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_35 = ___c2;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_36 = ___tcx0;
		NullCheck(L_36);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_37 = L_36->get_Front_8();
		NullCheck(L_37);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_38 = L_37->get_Tail_1();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_35) == ((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_38))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FinalizationPolygon(Pathfinding.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationPolygon_mB25ED0784980BED115619965226F519AB116068A (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, const RuntimeMethod* method)
{
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * V_0 = NULL;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_1 = NULL;
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		NullCheck(L_0);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_1 = L_0->get_Front_8();
		NullCheck(L_1);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_2 = L_1->get_Head_0();
		NullCheck(L_2);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = L_2->get_Next_0();
		NullCheck(L_3);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_4 = L_3->get_Triangle_4();
		V_0 = L_4;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_5 = ___tcx0;
		NullCheck(L_5);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_6 = L_5->get_Front_8();
		NullCheck(L_6);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_7 = L_6->get_Head_0();
		NullCheck(L_7);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = L_7->get_Next_0();
		NullCheck(L_8);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = L_8->get_Point_3();
		V_1 = L_9;
		goto IL_0039;
	}

IL_0031:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_10 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_11 = V_1;
		NullCheck(L_10);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_12;
		L_12 = DelaunayTriangle_NeighborCCWFrom_mE3B49CD2FA11476F2840D7E1CAD0FE1EFE807856(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0039:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_13 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_14 = V_1;
		NullCheck(L_13);
		bool L_15;
		L_15 = DelaunayTriangle_GetConstrainedEdgeCW_m565B4CB9FD0AE54F929D4ACD1B525A6D51C8C27D(L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0031;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_16 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_17 = V_0;
		NullCheck(L_16);
		DTSweepContext_MeshClean_m1C8B164D07F119478F7D1FA412B2B9310A6681B6(L_16, L_17, /*hidden argument*/NULL);
		return;
	}
}
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.DTSweep::PointEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * DTSweep_PointEvent_m427F4BBBB98F00D3492A3CECCC5E2269A7BE04F5 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_0 = NULL;
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_1 = NULL;
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___point1;
		NullCheck(L_0);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_2;
		L_2 = DTSweepContext_LocateNode_m2D394CB716AEF3560A872557BF56D7A0BBE2A503(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_3 = ___tcx0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_3);
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_5 = ___tcx0;
		NullCheck(L_5);
		DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_6;
		L_6 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_5, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_7 = V_0;
		NullCheck(L_6);
		DTSweepDebugContext_set_ActiveNode_mED77963E5472F3D8FCC920E9CF4991DF7DA8176D(L_6, L_7, /*hidden argument*/NULL);
	}

IL_001f:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_8 = ___tcx0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = ___point1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = V_0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11;
		L_11 = DTSweep_NewFrontTriangle_m37D767634E2A2BF65E41187F8AEC8AF56BA295A9(L_8, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = ___point1;
		NullCheck(L_12);
		double L_13 = L_12->get_X_0();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_14 = V_0;
		NullCheck(L_14);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_15 = L_14->get_Point_3();
		NullCheck(L_15);
		double L_16 = L_15->get_X_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		double L_17 = ((TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var))->get_EPSILON_0();
		if ((!(((double)L_13) <= ((double)((double)il2cpp_codegen_add((double)L_16, (double)L_17))))))
		{
			goto IL_004b;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_18 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = V_0;
		DTSweep_Fill_mDA5CB3222C951C63D98F20B88614CD71AD0E7E43(L_18, L_19, /*hidden argument*/NULL);
	}

IL_004b:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_20 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = V_1;
		NullCheck(L_20);
		DTSweepContext_AddNode_mB026D7CCBE768A93A3FCD65962E8BCDAC6962C8C(L_20, L_21, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_22 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_23 = V_1;
		DTSweep_FillAdvancingFront_mE63F4C7B22B315004009DED1AF2FBB0EAD40DA39(L_22, L_23, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_24 = V_1;
		return L_24;
	}
}
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.DTSweep::NewFrontTriangle(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * DTSweep_NewFrontTriangle_m37D767634E2A2BF65E41187F8AEC8AF56BA295A9 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_0 = NULL;
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * V_1 = NULL;
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___point1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1 = ___node2;
		NullCheck(L_1);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = L_1->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = L_3->get_Next_0();
		NullCheck(L_4);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_5 = L_4->get_Point_3();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_6 = (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 *)il2cpp_codegen_object_new(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5_il2cpp_TypeInfo_var);
		DelaunayTriangle__ctor_m8889D692510997CE9D51FACD9358FA27F91DD078(L_6, L_0, L_2, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_7 = V_1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = ___node2;
		NullCheck(L_8);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_9 = L_8->get_Triangle_4();
		NullCheck(L_7);
		DelaunayTriangle_MarkNeighbor_m513A0664DF96C4C67A1AE7E175841FF1DEC08290(L_7, L_9, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_10 = ___tcx0;
		NullCheck(L_10);
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_11 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)L_10)->get_Triangles_0();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_12 = V_1;
		NullCheck(L_11);
		List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69(L_11, L_12, /*hidden argument*/List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69_RuntimeMethod_var);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_13 = ___point1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_14 = (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)il2cpp_codegen_object_new(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_m3371C0E61496A577A3A536FC02591558D837EE7B(L_14, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_15 = V_0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_17 = L_16->get_Next_0();
		NullCheck(L_15);
		L_15->set_Next_0(L_17);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_18 = V_0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = ___node2;
		NullCheck(L_18);
		L_18->set_Prev_1(L_19);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_20 = ___node2;
		NullCheck(L_20);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = L_20->get_Next_0();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_22 = V_0;
		NullCheck(L_21);
		L_21->set_Prev_1(L_22);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_23 = ___node2;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_24 = V_0;
		NullCheck(L_23);
		L_23->set_Next_0(L_24);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_25 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_26 = V_0;
		NullCheck(L_25);
		DTSweepContext_AddNode_mB026D7CCBE768A93A3FCD65962E8BCDAC6962C8C(L_25, L_26, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_27 = ___tcx0;
		NullCheck(L_27);
		bool L_28;
		L_28 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_27);
		if (!L_28)
		{
			goto IL_007b;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_29 = ___tcx0;
		NullCheck(L_29);
		DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_30;
		L_30 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_29, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_31 = V_0;
		NullCheck(L_30);
		DTSweepDebugContext_set_ActiveNode_mED77963E5472F3D8FCC920E9CF4991DF7DA8176D(L_30, L_31, /*hidden argument*/NULL);
	}

IL_007b:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_32 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_33 = V_1;
		bool L_34;
		L_34 = DTSweep_Legalize_mC506C715996AE6BBC249EBAA75FE224A510817D2(L_32, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_008e;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_35 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_36 = V_1;
		NullCheck(L_35);
		DTSweepContext_MapTriangleToNodes_mE829C4699361BD4343CAF32227CBBD36815661B5(L_35, L_36, /*hidden argument*/NULL);
	}

IL_008e:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_37 = V_0;
		return L_37;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::EdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_m7069CC946D75354A186AFBE5968400BC8EFD19EA (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method)
{
	PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075 * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
			NullCheck(L_0);
			DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 * L_1 = L_0->get_EdgeEvent_10();
			DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_2 = ___edge1;
			NullCheck(L_1);
			L_1->set_ConstrainedEdge_0(L_2);
			DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_3 = ___tcx0;
			NullCheck(L_3);
			DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 * L_4 = L_3->get_EdgeEvent_10();
			DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_5 = ___edge1;
			NullCheck(L_5);
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_5)->get_P_0();
			NullCheck(L_6);
			double L_7 = L_6->get_X_0();
			DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_8 = ___edge1;
			NullCheck(L_8);
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_8)->get_Q_1();
			NullCheck(L_9);
			double L_10 = L_9->get_X_0();
			NullCheck(L_4);
			L_4->set_Right_1((bool)((((double)L_7) > ((double)L_10))? 1 : 0));
			DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_11 = ___tcx0;
			NullCheck(L_11);
			bool L_12;
			L_12 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_11);
			if (!L_12)
			{
				goto IL_004b;
			}
		}

IL_003a:
		{
			DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_13 = ___tcx0;
			NullCheck(L_13);
			DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_14;
			L_14 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_13, /*hidden argument*/NULL);
			AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_15 = ___node2;
			NullCheck(L_15);
			DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_16 = L_15->get_Triangle_4();
			NullCheck(L_14);
			DTSweepDebugContext_set_PrimaryTriangle_m51D93F311C1C67971DA3EFC27A384D5B743F9ABC(L_14, L_16, /*hidden argument*/NULL);
		}

IL_004b:
		{
			AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_17 = ___node2;
			NullCheck(L_17);
			DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_18 = L_17->get_Triangle_4();
			DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_19 = ___edge1;
			NullCheck(L_19);
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_20 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_19)->get_P_0();
			DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_21 = ___edge1;
			NullCheck(L_21);
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_22 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_21)->get_Q_1();
			bool L_23;
			L_23 = DTSweep_IsEdgeSideOfTriangle_mEC5B396B4C7ACF05160F365CE1138E31FA4D8113(L_18, L_20, L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_006c;
			}
		}

IL_0067:
		{
			goto IL_009f;
		}

IL_006c:
		{
			DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_24 = ___tcx0;
			DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_25 = ___edge1;
			AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_26 = ___node2;
			DTSweep_FillEdgeEvent_mA4569D01EFF59293CF86025445521A44D550ECE1(L_24, L_25, L_26, /*hidden argument*/NULL);
			DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_27 = ___tcx0;
			DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_28 = ___edge1;
			NullCheck(L_28);
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_29 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_28)->get_P_0();
			DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_30 = ___edge1;
			NullCheck(L_30);
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_31 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_30)->get_Q_1();
			AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_32 = ___node2;
			NullCheck(L_32);
			DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_33 = L_32->get_Triangle_4();
			DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_34 = ___edge1;
			NullCheck(L_34);
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_35 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_34)->get_Q_1();
			DTSweep_EdgeEvent_mB846249772A1156CF89D26F8B1B3B1477DDE5699(L_27, L_29, L_31, L_33, L_35, /*hidden argument*/NULL);
			goto IL_009f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0097;
		}
		throw e;
	}

CATCH_0097:
	{ // begin catch(Pathfinding.Poly2Tri.PointOnEdgeException)
		{
			V_0 = ((PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075 *)IL2CPP_GET_ACTIVE_EXCEPTION(PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075 *));
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_EdgeEvent_m7069CC946D75354A186AFBE5968400BC8EFD19EA_RuntimeMethod_var)));
		}

IL_009a:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_009f;
		}
	} // end catch (depth: 1)

IL_009f:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FillEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillEdgeEvent_mA4569D01EFF59293CF86025445521A44D550ECE1 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method)
{
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		NullCheck(L_0);
		DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 * L_1 = L_0->get_EdgeEvent_10();
		NullCheck(L_1);
		bool L_2 = L_1->get_Right_1();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_3 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_4 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_5 = ___node2;
		DTSweep_FillRightAboveEdgeEvent_m2705D1E8D86DEFDA831534A9D66379FCBDBA43A2(L_3, L_4, L_5, /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_001d:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_6 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_7 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = ___node2;
		DTSweep_FillLeftAboveEdgeEvent_mF151E4C380B065C4A4354E856C375F871C70F14D(L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FillRightConcaveEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConcaveEdgeEvent_mC4BE020D7643E8DE734DD17B6BAC7B50AE1F70C8 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1 = ___node2;
		NullCheck(L_1);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_2 = L_1->get_Next_0();
		DTSweep_Fill_mDA5CB3222C951C63D98F20B88614CD71AD0E7E43(L_0, L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = L_3->get_Next_0();
		NullCheck(L_4);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_5 = L_4->get_Point_3();
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_6 = ___edge1;
		NullCheck(L_6);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_7 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_6)->get_P_0();
		if ((((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_5) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_7)))
		{
			goto IL_007d;
		}
	}
	{
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_8 = ___edge1;
		NullCheck(L_8);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_8)->get_Q_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = ___node2;
		NullCheck(L_10);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = L_10->get_Next_0();
		NullCheck(L_11);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = L_11->get_Point_3();
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_13 = ___edge1;
		NullCheck(L_13);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_14 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_13)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_9, L_12, L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_007d;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = ___node2;
		NullCheck(L_16);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_17 = L_16->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_18 = ___node2;
		NullCheck(L_18);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = L_18->get_Next_0();
		NullCheck(L_19);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_20 = L_19->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = ___node2;
		NullCheck(L_21);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_22 = L_21->get_Next_0();
		NullCheck(L_22);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_23 = L_22->get_Next_0();
		NullCheck(L_23);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_24 = L_23->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_17, L_20, L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_007d;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_26 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_27 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_28 = ___node2;
		DTSweep_FillRightConcaveEdgeEvent_mC4BE020D7643E8DE734DD17B6BAC7B50AE1F70C8(L_26, L_27, L_28, /*hidden argument*/NULL);
		goto IL_007d;
	}

IL_007d:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FillRightConvexEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConvexEdgeEvent_m7DECB0E3C4A2B26653696E68F6A2BC101B3B4716 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = ___node2;
		NullCheck(L_0);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1 = L_0->get_Next_0();
		NullCheck(L_1);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = L_1->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = L_3->get_Next_0();
		NullCheck(L_4);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_5 = L_4->get_Next_0();
		NullCheck(L_5);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = L_5->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_7 = ___node2;
		NullCheck(L_7);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = L_7->get_Next_0();
		NullCheck(L_8);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_9 = L_8->get_Next_0();
		NullCheck(L_9);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = L_9->get_Next_0();
		NullCheck(L_10);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_11 = L_10->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_2, L_6, L_11, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_13 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_14 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_15 = ___node2;
		NullCheck(L_15);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = L_15->get_Next_0();
		DTSweep_FillRightConcaveEdgeEvent_mC4BE020D7643E8DE734DD17B6BAC7B50AE1F70C8(L_13, L_14, L_16, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_004d:
	{
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_17 = ___edge1;
		NullCheck(L_17);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_18 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_17)->get_Q_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = ___node2;
		NullCheck(L_19);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_20 = L_19->get_Next_0();
		NullCheck(L_20);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = L_20->get_Next_0();
		NullCheck(L_21);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_22 = L_21->get_Point_3();
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_23 = ___edge1;
		NullCheck(L_23);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_24 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_23)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_18, L_22, L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0086;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_26 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_27 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_28 = ___node2;
		NullCheck(L_28);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_29 = L_28->get_Next_0();
		DTSweep_FillRightConvexEdgeEvent_m7DECB0E3C4A2B26653696E68F6A2BC101B3B4716(L_26, L_27, L_29, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_0086:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FillRightBelowEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightBelowEdgeEvent_m16AA522886CF3F369EBAF5E197EF088F2EE06EE7 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = ___node2;
		NullCheck(L_3);
		DTSweepDebugContext_set_ActiveNode_mED77963E5472F3D8FCC920E9CF4991DF7DA8176D(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0017:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_5 = ___node2;
		NullCheck(L_5);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = L_5->get_Point_3();
		NullCheck(L_6);
		double L_7 = L_6->get_X_0();
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_8 = ___edge1;
		NullCheck(L_8);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_8)->get_P_0();
		NullCheck(L_9);
		double L_10 = L_9->get_X_0();
		if ((!(((double)L_7) < ((double)L_10))))
		{
			goto IL_007b;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = ___node2;
		NullCheck(L_11);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = L_11->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_13 = ___node2;
		NullCheck(L_13);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_14 = L_13->get_Next_0();
		NullCheck(L_14);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_15 = L_14->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_17 = L_16->get_Next_0();
		NullCheck(L_17);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_18 = L_17->get_Next_0();
		NullCheck(L_18);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_19 = L_18->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_12, L_15, L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_21 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_22 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_23 = ___node2;
		DTSweep_FillRightConcaveEdgeEvent_mC4BE020D7643E8DE734DD17B6BAC7B50AE1F70C8(L_21, L_22, L_23, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_006b:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_24 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_25 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_26 = ___node2;
		DTSweep_FillRightConvexEdgeEvent_m7DECB0E3C4A2B26653696E68F6A2BC101B3B4716(L_24, L_25, L_26, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_27 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_28 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_29 = ___node2;
		DTSweep_FillRightBelowEdgeEvent_m16AA522886CF3F369EBAF5E197EF088F2EE06EE7(L_27, L_28, L_29, /*hidden argument*/NULL);
	}

IL_007b:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FillRightAboveEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightAboveEdgeEvent_m2705D1E8D86DEFDA831534A9D66379FCBDBA43A2 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		goto IL_0055;
	}

IL_0005:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = ___node2;
		NullCheck(L_3);
		DTSweepDebugContext_set_ActiveNode_mED77963E5472F3D8FCC920E9CF4991DF7DA8176D(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_5 = ___edge1;
		NullCheck(L_5);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_5)->get_Q_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_7 = ___node2;
		NullCheck(L_7);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = L_7->get_Next_0();
		NullCheck(L_8);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = L_8->get_Point_3();
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_10 = ___edge1;
		NullCheck(L_10);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_11 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_10)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_6, L_9, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_14 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_15 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = ___node2;
		DTSweep_FillRightBelowEdgeEvent_m16AA522886CF3F369EBAF5E197EF088F2EE06EE7(L_14, L_15, L_16, /*hidden argument*/NULL);
		goto IL_0055;
	}

IL_004d:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_17 = ___node2;
		NullCheck(L_17);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_18 = L_17->get_Next_0();
		___node2 = L_18;
	}

IL_0055:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = ___node2;
		NullCheck(L_19);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_20 = L_19->get_Next_0();
		NullCheck(L_20);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_21 = L_20->get_Point_3();
		NullCheck(L_21);
		double L_22 = L_21->get_X_0();
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_23 = ___edge1;
		NullCheck(L_23);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_24 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_23)->get_P_0();
		NullCheck(L_24);
		double L_25 = L_24->get_X_0();
		if ((((double)L_22) < ((double)L_25)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FillLeftConvexEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConvexEdgeEvent_m168BB862797B69EBB1C43A60FA1953FCD751F2C5 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = ___node2;
		NullCheck(L_0);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1 = L_0->get_Prev_1();
		NullCheck(L_1);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = L_1->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = L_3->get_Prev_1();
		NullCheck(L_4);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_5 = L_4->get_Prev_1();
		NullCheck(L_5);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = L_5->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_7 = ___node2;
		NullCheck(L_7);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = L_7->get_Prev_1();
		NullCheck(L_8);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_9 = L_8->get_Prev_1();
		NullCheck(L_9);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = L_9->get_Prev_1();
		NullCheck(L_10);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_11 = L_10->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_2, L_6, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_004c;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_13 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_14 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_15 = ___node2;
		NullCheck(L_15);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = L_15->get_Prev_1();
		DTSweep_FillLeftConcaveEdgeEvent_mED5399C9A846FBF230E0944D8F00099F54BFB121(L_13, L_14, L_16, /*hidden argument*/NULL);
		goto IL_0084;
	}

IL_004c:
	{
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_17 = ___edge1;
		NullCheck(L_17);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_18 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_17)->get_Q_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = ___node2;
		NullCheck(L_19);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_20 = L_19->get_Prev_1();
		NullCheck(L_20);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = L_20->get_Prev_1();
		NullCheck(L_21);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_22 = L_21->get_Point_3();
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_23 = ___edge1;
		NullCheck(L_23);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_24 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_23)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_18, L_22, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0084;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_26 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_27 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_28 = ___node2;
		NullCheck(L_28);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_29 = L_28->get_Prev_1();
		DTSweep_FillLeftConvexEdgeEvent_m168BB862797B69EBB1C43A60FA1953FCD751F2C5(L_26, L_27, L_29, /*hidden argument*/NULL);
		goto IL_0084;
	}

IL_0084:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FillLeftConcaveEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConcaveEdgeEvent_mED5399C9A846FBF230E0944D8F00099F54BFB121 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1 = ___node2;
		NullCheck(L_1);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_2 = L_1->get_Prev_1();
		DTSweep_Fill_mDA5CB3222C951C63D98F20B88614CD71AD0E7E43(L_0, L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = L_3->get_Prev_1();
		NullCheck(L_4);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_5 = L_4->get_Point_3();
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_6 = ___edge1;
		NullCheck(L_6);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_7 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_6)->get_P_0();
		if ((((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_5) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_7)))
		{
			goto IL_007b;
		}
	}
	{
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_8 = ___edge1;
		NullCheck(L_8);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_8)->get_Q_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = ___node2;
		NullCheck(L_10);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = L_10->get_Prev_1();
		NullCheck(L_11);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = L_11->get_Point_3();
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_13 = ___edge1;
		NullCheck(L_13);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_14 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_13)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_9, L_12, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007b;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = ___node2;
		NullCheck(L_16);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_17 = L_16->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_18 = ___node2;
		NullCheck(L_18);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = L_18->get_Prev_1();
		NullCheck(L_19);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_20 = L_19->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = ___node2;
		NullCheck(L_21);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_22 = L_21->get_Prev_1();
		NullCheck(L_22);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_23 = L_22->get_Prev_1();
		NullCheck(L_23);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_24 = L_23->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_17, L_20, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_007b;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_26 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_27 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_28 = ___node2;
		DTSweep_FillLeftConcaveEdgeEvent_mED5399C9A846FBF230E0944D8F00099F54BFB121(L_26, L_27, L_28, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_007b:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FillLeftBelowEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftBelowEdgeEvent_mD8465A9E524320C5CBCC36070BC6B3A4C985A95C (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = ___node2;
		NullCheck(L_3);
		DTSweepDebugContext_set_ActiveNode_mED77963E5472F3D8FCC920E9CF4991DF7DA8176D(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0017:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_5 = ___node2;
		NullCheck(L_5);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = L_5->get_Point_3();
		NullCheck(L_6);
		double L_7 = L_6->get_X_0();
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_8 = ___edge1;
		NullCheck(L_8);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_8)->get_P_0();
		NullCheck(L_9);
		double L_10 = L_9->get_X_0();
		if ((!(((double)L_7) > ((double)L_10))))
		{
			goto IL_007a;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = ___node2;
		NullCheck(L_11);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = L_11->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_13 = ___node2;
		NullCheck(L_13);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_14 = L_13->get_Prev_1();
		NullCheck(L_14);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_15 = L_14->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_17 = L_16->get_Prev_1();
		NullCheck(L_17);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_18 = L_17->get_Prev_1();
		NullCheck(L_18);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_19 = L_18->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_12, L_15, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_006a;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_21 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_22 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_23 = ___node2;
		DTSweep_FillLeftConcaveEdgeEvent_mED5399C9A846FBF230E0944D8F00099F54BFB121(L_21, L_22, L_23, /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_006a:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_24 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_25 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_26 = ___node2;
		DTSweep_FillLeftConvexEdgeEvent_m168BB862797B69EBB1C43A60FA1953FCD751F2C5(L_24, L_25, L_26, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_27 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_28 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_29 = ___node2;
		DTSweep_FillLeftBelowEdgeEvent_mD8465A9E524320C5CBCC36070BC6B3A4C985A95C(L_27, L_28, L_29, /*hidden argument*/NULL);
	}

IL_007a:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FillLeftAboveEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DTSweepConstraint,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftAboveEdgeEvent_mF151E4C380B065C4A4354E856C375F871C70F14D (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___edge1, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		goto IL_0054;
	}

IL_0005:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = ___node2;
		NullCheck(L_3);
		DTSweepDebugContext_set_ActiveNode_mED77963E5472F3D8FCC920E9CF4991DF7DA8176D(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_5 = ___edge1;
		NullCheck(L_5);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_5)->get_Q_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_7 = ___node2;
		NullCheck(L_7);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = L_7->get_Prev_1();
		NullCheck(L_8);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = L_8->get_Point_3();
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_10 = ___edge1;
		NullCheck(L_10);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_11 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_10)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_6, L_9, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		if (L_13)
		{
			goto IL_004c;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_14 = ___tcx0;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_15 = ___edge1;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = ___node2;
		DTSweep_FillLeftBelowEdgeEvent_mD8465A9E524320C5CBCC36070BC6B3A4C985A95C(L_14, L_15, L_16, /*hidden argument*/NULL);
		goto IL_0054;
	}

IL_004c:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_17 = ___node2;
		NullCheck(L_17);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_18 = L_17->get_Prev_1();
		___node2 = L_18;
	}

IL_0054:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = ___node2;
		NullCheck(L_19);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_20 = L_19->get_Prev_1();
		NullCheck(L_20);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_21 = L_20->get_Point_3();
		NullCheck(L_21);
		double L_22 = L_21->get_X_0();
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_23 = ___edge1;
		NullCheck(L_23);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_24 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_23)->get_P_0();
		NullCheck(L_24);
		double L_25 = L_24->get_X_0();
		if ((((double)L_22) > ((double)L_25)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Boolean Pathfinding.Poly2Tri.DTSweep::IsEdgeSideOfTriangle(Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsEdgeSideOfTriangle_mEC5B396B4C7ACF05160F365CE1138E31FA4D8113 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___triangle0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___ep1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___eq2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_0 = ___triangle0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = ___eq2;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = DelaunayTriangle_EdgeIndex_m8340DD1269975C56C54A1447998F6743CCA00074(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_5 = ___triangle0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		DelaunayTriangle_MarkConstrainedEdge_m0219297FA75D0644CFADD73E7C07BF9152E7B07C(L_5, L_6, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_7 = ___triangle0;
		NullCheck(L_7);
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_8 = L_7->get_address_of_Neighbors_1();
		int32_t L_9 = V_0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_10;
		L_10 = FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_8, L_9, /*hidden argument*/FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		___triangle0 = L_10;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_11 = ___triangle0;
		if (!L_11)
		{
			goto IL_0035;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_12 = ___triangle0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_13 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_14 = ___eq2;
		NullCheck(L_12);
		DelaunayTriangle_MarkConstrainedEdge_mFF8FAFD873D37E05EC4F905277C12654DC6BBCA1(L_12, L_13, L_14, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return (bool)1;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::EdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_mB846249772A1156CF89D26F8B1B3B1477DDE5699 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___ep1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___eq2, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___triangle3, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_0 = NULL;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_2, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_4 = ___triangle3;
		NullCheck(L_3);
		DTSweepDebugContext_set_PrimaryTriangle_m51D93F311C1C67971DA3EFC27A384D5B743F9ABC(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0017:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_5 = ___triangle3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_7 = ___eq2;
		bool L_8;
		L_8 = DTSweep_IsEdgeSideOfTriangle_mEC5B396B4C7ACF05160F365CE1138E31FA4D8113(L_5, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0025:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_9 = ___triangle3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_10 = ___point4;
		NullCheck(L_9);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_11;
		L_11 = DelaunayTriangle_PointCCWFrom_mD4A9B1F3FF1EE9ACAF89109E533D6555FEB0812E(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = ___eq2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_13 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_14 = ___ep1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_12, L_13, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_17 = ___eq2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_18 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_19 = ___ep1;
		PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075 * L_20 = (PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075_il2cpp_TypeInfo_var)));
		PointOnEdgeException__ctor_m07E7487D1ECDE53CF088BDF6C817366E2C37A28C(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56FEC330311BE1770446499D7CC29C5DBA8485E8)), L_17, L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_EdgeEvent_mB846249772A1156CF89D26F8B1B3B1477DDE5699_RuntimeMethod_var)));
	}

IL_004c:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_21 = ___triangle3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_22 = ___point4;
		NullCheck(L_21);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_23;
		L_23 = DelaunayTriangle_PointCWFrom_m03C8942EA962B41D0526074CC3A62DCC2E3DA812(L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_24 = ___eq2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_25 = V_1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_26 = ___ep1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_24, L_25, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_29 = ___eq2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_30 = V_1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_31 = ___ep1;
		PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075 * L_32 = (PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075_il2cpp_TypeInfo_var)));
		PointOnEdgeException__ctor_m07E7487D1ECDE53CF088BDF6C817366E2C37A28C(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56FEC330311BE1770446499D7CC29C5DBA8485E8)), L_29, L_30, L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_EdgeEvent_mB846249772A1156CF89D26F8B1B3B1477DDE5699_RuntimeMethod_var)));
	}

IL_0073:
	{
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_35 = V_2;
		if (L_35)
		{
			goto IL_008f;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_36 = ___triangle3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_37 = ___point4;
		NullCheck(L_36);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_38;
		L_38 = DelaunayTriangle_NeighborCCWFrom_mE3B49CD2FA11476F2840D7E1CAD0FE1EFE807856(L_36, L_37, /*hidden argument*/NULL);
		___triangle3 = L_38;
		goto IL_0099;
	}

IL_008f:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_39 = ___triangle3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_40 = ___point4;
		NullCheck(L_39);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_41;
		L_41 = DelaunayTriangle_NeighborCWFrom_mBEA1F32675D9FBAA7D276388D9658DC6FB29BA76(L_39, L_40, /*hidden argument*/NULL);
		___triangle3 = L_41;
	}

IL_0099:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_42 = ___tcx0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_43 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_44 = ___eq2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_45 = ___triangle3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_46 = ___point4;
		DTSweep_EdgeEvent_mB846249772A1156CF89D26F8B1B3B1477DDE5699(L_42, L_43, L_44, L_45, L_46, /*hidden argument*/NULL);
		goto IL_00b4;
	}

IL_00a9:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_47 = ___tcx0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_48 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_49 = ___eq2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_50 = ___triangle3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_51 = ___point4;
		DTSweep_FlipEdgeEvent_m35DE6A69E95B30B81716A27A1D7705210216AE02(L_47, L_48, L_49, L_50, L_51, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FlipEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipEdgeEvent_m35DE6A69E95B30B81716A27A1D7705210216AE02 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___ep1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___eq2, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t3, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * V_0 = NULL;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_4 = NULL;
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_0 = ___t3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p4;
		NullCheck(L_0);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_2;
		L_2 = DelaunayTriangle_NeighborAcrossFrom_mB0C3FB6DFF9BBB76152AACEBB23AE46E47780187(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_3 = V_0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_4 = ___t3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_5 = ___p4;
		NullCheck(L_3);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6;
		L_6 = DelaunayTriangle_OppositePoint_m043329713CBA0A263FD870227E7EE23038A0E3E9(L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_7 = V_0;
		if (L_7)
		{
			goto IL_0024;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_8 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07AC1B1D6E5B09CAD55868C0EBA7C2B6EB0B16DF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_FlipEdgeEvent_m35DE6A69E95B30B81716A27A1D7705210216AE02_RuntimeMethod_var)));
	}

IL_0024:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_9 = ___tcx0;
		NullCheck(L_9);
		bool L_10;
		L_10 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_9);
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_11 = ___tcx0;
		NullCheck(L_11);
		DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_12;
		L_12 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_11, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_13 = ___t3;
		NullCheck(L_12);
		DTSweepDebugContext_set_PrimaryTriangle_m51D93F311C1C67971DA3EFC27A384D5B743F9ABC(L_12, L_13, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_14 = ___tcx0;
		NullCheck(L_14);
		DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_15;
		L_15 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_14, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_16 = V_0;
		NullCheck(L_15);
		DTSweepDebugContext_set_SecondaryTriangle_mBC2649DEB0BF5AF699BECA1451E0AF828C4466A1(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0047:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_17 = ___p4;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_18 = ___t3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_19 = ___p4;
		NullCheck(L_18);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_20;
		L_20 = DelaunayTriangle_PointCCWFrom_mD4A9B1F3FF1EE9ACAF89109E533D6555FEB0812E(L_18, L_19, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_21 = ___t3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_22 = ___p4;
		NullCheck(L_21);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_23;
		L_23 = DelaunayTriangle_PointCWFrom_m03C8942EA962B41D0526074CC3A62DCC2E3DA812(L_21, L_22, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = TriangulationUtil_InScanArea_m1DFA0B0CE104E4DDD8F3F3CD9CE295A4B71B7A23(L_17, L_20, L_23, L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_010a;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_27 = ___t3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_28 = ___p4;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_29 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_30 = V_1;
		DTSweep_RotateTrianglePair_m22E9BF622CAEE8F2438B39492EBD95F3BEA70F3C(L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_31 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_32 = ___t3;
		NullCheck(L_31);
		DTSweepContext_MapTriangleToNodes_mE829C4699361BD4343CAF32227CBBD36815661B5(L_31, L_32, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_33 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_34 = V_0;
		NullCheck(L_33);
		DTSweepContext_MapTriangleToNodes_mE829C4699361BD4343CAF32227CBBD36815661B5(L_33, L_34, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_35 = ___p4;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_36 = ___eq2;
		if ((!(((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_35) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_36))))
		{
			goto IL_00e3;
		}
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_37 = V_1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_38 = ___ep1;
		if ((!(((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_37) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_38))))
		{
			goto IL_00e3;
		}
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_39 = ___eq2;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_40 = ___tcx0;
		NullCheck(L_40);
		DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 * L_41 = L_40->get_EdgeEvent_10();
		NullCheck(L_41);
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_42 = L_41->get_ConstrainedEdge_0();
		NullCheck(L_42);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_43 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_42)->get_Q_1();
		if ((!(((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_39) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_43))))
		{
			goto IL_00de;
		}
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_44 = ___ep1;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_45 = ___tcx0;
		NullCheck(L_45);
		DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 * L_46 = L_45->get_EdgeEvent_10();
		NullCheck(L_46);
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_47 = L_46->get_ConstrainedEdge_0();
		NullCheck(L_47);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_48 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)L_47)->get_P_0();
		if ((!(((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_44) == ((RuntimeObject*)(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)L_48))))
		{
			goto IL_00de;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_49 = ___t3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_50 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_51 = ___eq2;
		NullCheck(L_49);
		DelaunayTriangle_MarkConstrainedEdge_mFF8FAFD873D37E05EC4F905277C12654DC6BBCA1(L_49, L_50, L_51, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_52 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_53 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_54 = ___eq2;
		NullCheck(L_52);
		DelaunayTriangle_MarkConstrainedEdge_mFF8FAFD873D37E05EC4F905277C12654DC6BBCA1(L_52, L_53, L_54, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_55 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_56 = ___t3;
		bool L_57;
		L_57 = DTSweep_Legalize_mC506C715996AE6BBC249EBAA75FE224A510817D2(L_55, L_56, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_58 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_59 = V_0;
		bool L_60;
		L_60 = DTSweep_Legalize_mC506C715996AE6BBC249EBAA75FE224A510817D2(L_58, L_59, /*hidden argument*/NULL);
		goto IL_00de;
	}

IL_00de:
	{
		goto IL_0105;
	}

IL_00e3:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_61 = ___eq2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_62 = V_1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_63 = ___ep1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_64;
		L_64 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_61, L_62, L_63, /*hidden argument*/NULL);
		V_3 = L_64;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_65 = ___tcx0;
		int32_t L_66 = V_3;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_67 = ___t3;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_68 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_69 = ___p4;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_70 = V_1;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_71;
		L_71 = DTSweep_NextFlipTriangle_mB1EF09F1C202648E8B5A1CCB35409F3EF621DA74(L_65, L_66, L_67, L_68, L_69, L_70, /*hidden argument*/NULL);
		___t3 = L_71;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_72 = ___tcx0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_73 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_74 = ___eq2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_75 = ___t3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_76 = ___p4;
		DTSweep_FlipEdgeEvent_m35DE6A69E95B30B81716A27A1D7705210216AE02(L_72, L_73, L_74, L_75, L_76, /*hidden argument*/NULL);
	}

IL_0105:
	{
		goto IL_012c;
	}

IL_010a:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_77 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_78 = ___eq2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_79 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_80 = V_1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_81;
		L_81 = DTSweep_NextFlipPoint_mF4FB6324AEFDB82700CEB30B1A60CECA6A6F5134(L_77, L_78, L_79, L_80, /*hidden argument*/NULL);
		V_4 = L_81;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_82 = ___tcx0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_83 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_84 = ___eq2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_85 = ___t3;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_86 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_87 = V_4;
		DTSweep_FlipScanEdgeEvent_mAD268B132C138C407F0D0474503E3B2A41F74A2B(L_82, L_83, L_84, L_85, L_86, L_87, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_88 = ___tcx0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_89 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_90 = ___eq2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_91 = ___t3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_92 = ___p4;
		DTSweep_EdgeEvent_mB846249772A1156CF89D26F8B1B3B1477DDE5699(L_88, L_89, L_90, L_91, L_92, /*hidden argument*/NULL);
	}

IL_012c:
	{
		return;
	}
}
// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DTSweep::NextFlipPoint(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DTSweep_NextFlipPoint_mF4FB6324AEFDB82700CEB30B1A60CECA6A6F5134 (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___ep0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___eq1, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___ot2, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___op3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___eq1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___op3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = ___ep0;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		V_1 = L_4;
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_0040;
	}

IL_0022:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_6 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_7 = ___op3;
		NullCheck(L_6);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_8;
		L_8 = DelaunayTriangle_PointCCWFrom_mD4A9B1F3FF1EE9ACAF89109E533D6555FEB0812E(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002a:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_9 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_10 = ___op3;
		NullCheck(L_9);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_11;
		L_11 = DelaunayTriangle_PointCWFrom_m03C8942EA962B41D0526074CC3A62DCC2E3DA812(L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0032:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = ___eq1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_13 = ___op3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_14 = ___ep0;
		PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075 * L_15 = (PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075_il2cpp_TypeInfo_var)));
		PointOnEdgeException__ctor_m07E7487D1ECDE53CF088BDF6C817366E2C37A28C(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0C9DBCA15AA768A26AA34FE93E331BE119D035)), L_12, L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_NextFlipPoint_mF4FB6324AEFDB82700CEB30B1A60CECA6A6F5134_RuntimeMethod_var)));
	}

IL_0040:
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_16 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2C785F436B8C0C146A0CADB55F5E0E73F71B11D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_NextFlipPoint_mF4FB6324AEFDB82700CEB30B1A60CECA6A6F5134_RuntimeMethod_var)));
	}
}
// Pathfinding.Poly2Tri.DelaunayTriangle Pathfinding.Poly2Tri.DTSweep::NextFlipTriangle(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.Orientation,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * DTSweep_NextFlipTriangle_mB1EF09F1C202648E8B5A1CCB35409F3EF621DA74 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, int32_t ___o1, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t2, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___ot3, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p4, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___op5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___o1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_1 = ___ot3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = ___p4;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_3 = ___op5;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = DelaunayTriangle_EdgeIndex_m8340DD1269975C56C54A1447998F6743CCA00074(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_5 = ___ot3;
		NullCheck(L_5);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_6 = L_5->get_address_of_EdgeIsDelaunay_3();
		int32_t L_7 = V_0;
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_6, L_7, (bool)1, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_8 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_9 = ___ot3;
		bool L_10;
		L_10 = DTSweep_Legalize_mC506C715996AE6BBC249EBAA75FE224A510817D2(L_8, L_9, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_11 = ___ot3;
		NullCheck(L_11);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_12 = L_11->get_address_of_EdgeIsDelaunay_3();
		FixedBitArray3_Clear_mB15C1018D11FCA7B646A13CAB8E4C0F3174F9022((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_12, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_13 = ___t2;
		return L_13;
	}

IL_0034:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_14 = ___t2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_15 = ___p4;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_16 = ___op5;
		NullCheck(L_14);
		int32_t L_17;
		L_17 = DelaunayTriangle_EdgeIndex_m8340DD1269975C56C54A1447998F6743CCA00074(L_14, L_15, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_18 = ___t2;
		NullCheck(L_18);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_19 = L_18->get_address_of_EdgeIsDelaunay_3();
		int32_t L_20 = V_0;
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_19, L_20, (bool)1, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_21 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_22 = ___t2;
		bool L_23;
		L_23 = DTSweep_Legalize_mC506C715996AE6BBC249EBAA75FE224A510817D2(L_21, L_22, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_24 = ___t2;
		NullCheck(L_24);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_25 = L_24->get_address_of_EdgeIsDelaunay_3();
		FixedBitArray3_Clear_mB15C1018D11FCA7B646A13CAB8E4C0F3174F9022((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_25, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_26 = ___ot3;
		return L_26;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FlipScanEdgeEvent(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipScanEdgeEvent_mAD268B132C138C407F0D0474503E3B2A41F74A2B (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___ep1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___eq2, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___flipTriangle3, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t4, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * V_0 = NULL;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_1 = NULL;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_2 = NULL;
	bool V_3 = false;
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_0 = ___t4;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p5;
		NullCheck(L_0);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_2;
		L_2 = DelaunayTriangle_NeighborAcrossFrom_mB0C3FB6DFF9BBB76152AACEBB23AE46E47780187(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_3 = V_0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_4 = ___t4;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_5 = ___p5;
		NullCheck(L_3);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6;
		L_6 = DelaunayTriangle_OppositePoint_m043329713CBA0A263FD870227E7EE23038A0E3E9(L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_7 = V_0;
		if (L_7)
		{
			goto IL_0026;
		}
	}
	{
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07AC1B1D6E5B09CAD55868C0EBA7C2B6EB0B16DF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_FlipScanEdgeEvent_mAD268B132C138C407F0D0474503E3B2A41F74A2B_RuntimeMethod_var)));
	}

IL_0026:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_9 = ___tcx0;
		NullCheck(L_9);
		bool L_10;
		L_10 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_9);
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_11 = ___tcx0;
		NullCheck(L_11);
		DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_12;
		L_12 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_11, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_13 = ___t4;
		NullCheck(L_12);
		DTSweepDebugContext_set_PrimaryTriangle_m51D93F311C1C67971DA3EFC27A384D5B743F9ABC(L_12, L_13, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_14 = ___tcx0;
		NullCheck(L_14);
		DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * L_15;
		L_15 = TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66(L_14, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_16 = V_0;
		NullCheck(L_15);
		DTSweepDebugContext_set_SecondaryTriangle_mBC2649DEB0BF5AF699BECA1451E0AF828C4466A1(L_15, L_16, /*hidden argument*/NULL);
	}

IL_004a:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_17 = ___eq2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_18 = ___flipTriangle3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_19 = ___eq2;
		NullCheck(L_18);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_20;
		L_20 = DelaunayTriangle_PointCCWFrom_mD4A9B1F3FF1EE9ACAF89109E533D6555FEB0812E(L_18, L_19, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_21 = ___flipTriangle3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_22 = ___eq2;
		NullCheck(L_21);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_23;
		L_23 = DelaunayTriangle_PointCWFrom_m03C8942EA962B41D0526074CC3A62DCC2E3DA812(L_21, L_22, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = TriangulationUtil_InScanArea_m1DFA0B0CE104E4DDD8F3F3CD9CE295A4B71B7A23(L_17, L_20, L_23, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		bool L_26 = V_3;
		if (!L_26)
		{
			goto IL_0075;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_27 = ___tcx0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_28 = ___eq2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_29 = V_1;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_30 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_31 = V_1;
		DTSweep_FlipEdgeEvent_m35DE6A69E95B30B81716A27A1D7705210216AE02(L_27, L_28, L_29, L_30, L_31, /*hidden argument*/NULL);
		goto IL_008a;
	}

IL_0075:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_32 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_33 = ___eq2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_34 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_35 = V_1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_36;
		L_36 = DTSweep_NextFlipPoint_mF4FB6324AEFDB82700CEB30B1A60CECA6A6F5134(L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		V_2 = L_36;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_37 = ___tcx0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_38 = ___ep1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_39 = ___eq2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_40 = ___flipTriangle3;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_41 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_42 = V_2;
		DTSweep_FlipScanEdgeEvent_mAD268B132C138C407F0D0474503E3B2A41F74A2B(L_37, L_38, L_39, L_40, L_41, L_42, /*hidden argument*/NULL);
	}

IL_008a:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FillAdvancingFront(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillAdvancingFront_mE63F4C7B22B315004009DED1AF2FBB0EAD40DA39 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___n1, const RuntimeMethod* method)
{
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_0 = NULL;
	double V_1 = 0.0;
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = ___n1;
		NullCheck(L_0);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1 = L_0->get_Next_0();
		V_0 = L_1;
		goto IL_0044;
	}

IL_000c:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_2 = V_0;
		double L_3;
		L_3 = DTSweep_HoleAngle_m71510BA2CABA57BAF94C6359758AFBC8CA093213(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		double L_4 = V_1;
		if ((((double)L_4) > ((double)(1.5707963267948966))))
		{
			goto IL_0031;
		}
	}
	{
		double L_5 = V_1;
		if ((!(((double)L_5) < ((double)(-1.5707963267948966)))))
		{
			goto IL_0036;
		}
	}

IL_0031:
	{
		goto IL_004f;
	}

IL_0036:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_6 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_7 = V_0;
		DTSweep_Fill_mDA5CB3222C951C63D98F20B88614CD71AD0E7E43(L_6, L_7, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = V_0;
		NullCheck(L_8);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_9 = L_8->get_Next_0();
		V_0 = L_9;
	}

IL_0044:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = AdvancingFrontNode_get_HasNext_m3B4C7FE296BA4921646F2F734483621A5B12B015(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_000c;
		}
	}

IL_004f:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_12 = ___n1;
		NullCheck(L_12);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_13 = L_12->get_Prev_1();
		V_0 = L_13;
		goto IL_0093;
	}

IL_005b:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_14 = V_0;
		double L_15;
		L_15 = DTSweep_HoleAngle_m71510BA2CABA57BAF94C6359758AFBC8CA093213(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		double L_16 = V_1;
		if ((((double)L_16) > ((double)(1.5707963267948966))))
		{
			goto IL_0080;
		}
	}
	{
		double L_17 = V_1;
		if ((!(((double)L_17) < ((double)(-1.5707963267948966)))))
		{
			goto IL_0085;
		}
	}

IL_0080:
	{
		goto IL_009e;
	}

IL_0085:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_18 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = V_0;
		DTSweep_Fill_mDA5CB3222C951C63D98F20B88614CD71AD0E7E43(L_18, L_19, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_20 = V_0;
		NullCheck(L_20);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = L_20->get_Prev_1();
		V_0 = L_21;
	}

IL_0093:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_22 = V_0;
		NullCheck(L_22);
		bool L_23;
		L_23 = AdvancingFrontNode_get_HasPrev_m3195EA162420C076EC1072D6AE3E164CC9204AB3(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_005b;
		}
	}

IL_009e:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_24 = ___n1;
		NullCheck(L_24);
		bool L_25;
		L_25 = AdvancingFrontNode_get_HasNext_m3B4C7FE296BA4921646F2F734483621A5B12B015(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00d6;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_26 = ___n1;
		NullCheck(L_26);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_27 = L_26->get_Next_0();
		NullCheck(L_27);
		bool L_28;
		L_28 = AdvancingFrontNode_get_HasNext_m3B4C7FE296BA4921646F2F734483621A5B12B015(L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00d6;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_29 = ___n1;
		double L_30;
		L_30 = DTSweep_BasinAngle_m759295DE0F7B5A3B281D47BCC87583BDE74BCB18(L_29, /*hidden argument*/NULL);
		V_1 = L_30;
		double L_31 = V_1;
		if ((!(((double)L_31) < ((double)(2.3561944901923448)))))
		{
			goto IL_00d6;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_32 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_33 = ___n1;
		DTSweep_FillBasin_mCD2145660102B48024DA988604F914936B3DB48F(L_32, L_33, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FillBasin(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasin_mCD2145660102B48024DA988604F914936B3DB48F (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = ___node1;
		NullCheck(L_0);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = L_0->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_2 = ___node1;
		NullCheck(L_2);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = L_2->get_Next_0();
		NullCheck(L_3);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4 = L_3->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_5 = ___node1;
		NullCheck(L_5);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_6 = L_5->get_Next_0();
		NullCheck(L_6);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_7 = L_6->get_Next_0();
		NullCheck(L_7);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_8 = L_7->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_1, L_4, L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_10 = ___tcx0;
		NullCheck(L_10);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_11 = L_10->get_Basin_9();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_12 = ___node1;
		NullCheck(L_11);
		L_11->set_leftNode_0(L_12);
		goto IL_004e;
	}

IL_003d:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_13 = ___tcx0;
		NullCheck(L_13);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_14 = L_13->get_Basin_9();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_15 = ___node1;
		NullCheck(L_15);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = L_15->get_Next_0();
		NullCheck(L_14);
		L_14->set_leftNode_0(L_16);
	}

IL_004e:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_17 = ___tcx0;
		NullCheck(L_17);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_18 = L_17->get_Basin_9();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_19 = ___tcx0;
		NullCheck(L_19);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_20 = L_19->get_Basin_9();
		NullCheck(L_20);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = L_20->get_leftNode_0();
		NullCheck(L_18);
		L_18->set_bottomNode_1(L_21);
		goto IL_0084;
	}

IL_0069:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_22 = ___tcx0;
		NullCheck(L_22);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_23 = L_22->get_Basin_9();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_24 = ___tcx0;
		NullCheck(L_24);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_25 = L_24->get_Basin_9();
		NullCheck(L_25);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_26 = L_25->get_bottomNode_1();
		NullCheck(L_26);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_27 = L_26->get_Next_0();
		NullCheck(L_23);
		L_23->set_bottomNode_1(L_27);
	}

IL_0084:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_28 = ___tcx0;
		NullCheck(L_28);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_29 = L_28->get_Basin_9();
		NullCheck(L_29);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_30 = L_29->get_bottomNode_1();
		NullCheck(L_30);
		bool L_31;
		L_31 = AdvancingFrontNode_get_HasNext_m3B4C7FE296BA4921646F2F734483621A5B12B015(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00cd;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_32 = ___tcx0;
		NullCheck(L_32);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_33 = L_32->get_Basin_9();
		NullCheck(L_33);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_34 = L_33->get_bottomNode_1();
		NullCheck(L_34);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_35 = L_34->get_Point_3();
		NullCheck(L_35);
		double L_36 = L_35->get_Y_1();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_37 = ___tcx0;
		NullCheck(L_37);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_38 = L_37->get_Basin_9();
		NullCheck(L_38);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_39 = L_38->get_bottomNode_1();
		NullCheck(L_39);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_40 = L_39->get_Next_0();
		NullCheck(L_40);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_41 = L_40->get_Point_3();
		NullCheck(L_41);
		double L_42 = L_41->get_Y_1();
		if ((((double)L_36) >= ((double)L_42)))
		{
			goto IL_0069;
		}
	}

IL_00cd:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_43 = ___tcx0;
		NullCheck(L_43);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_44 = L_43->get_Basin_9();
		NullCheck(L_44);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_45 = L_44->get_bottomNode_1();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_46 = ___tcx0;
		NullCheck(L_46);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_47 = L_46->get_Basin_9();
		NullCheck(L_47);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_48 = L_47->get_leftNode_0();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_45) == ((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_48))))
		{
			goto IL_00e9;
		}
	}
	{
		return;
	}

IL_00e9:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_49 = ___tcx0;
		NullCheck(L_49);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_50 = L_49->get_Basin_9();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_51 = ___tcx0;
		NullCheck(L_51);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_52 = L_51->get_Basin_9();
		NullCheck(L_52);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_53 = L_52->get_bottomNode_1();
		NullCheck(L_50);
		L_50->set_rightNode_2(L_53);
		goto IL_011f;
	}

IL_0104:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_54 = ___tcx0;
		NullCheck(L_54);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_55 = L_54->get_Basin_9();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_56 = ___tcx0;
		NullCheck(L_56);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_57 = L_56->get_Basin_9();
		NullCheck(L_57);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_58 = L_57->get_rightNode_2();
		NullCheck(L_58);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_59 = L_58->get_Next_0();
		NullCheck(L_55);
		L_55->set_rightNode_2(L_59);
	}

IL_011f:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_60 = ___tcx0;
		NullCheck(L_60);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_61 = L_60->get_Basin_9();
		NullCheck(L_61);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_62 = L_61->get_rightNode_2();
		NullCheck(L_62);
		bool L_63;
		L_63 = AdvancingFrontNode_get_HasNext_m3B4C7FE296BA4921646F2F734483621A5B12B015(L_62, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_0168;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_64 = ___tcx0;
		NullCheck(L_64);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_65 = L_64->get_Basin_9();
		NullCheck(L_65);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_66 = L_65->get_rightNode_2();
		NullCheck(L_66);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_67 = L_66->get_Point_3();
		NullCheck(L_67);
		double L_68 = L_67->get_Y_1();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_69 = ___tcx0;
		NullCheck(L_69);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_70 = L_69->get_Basin_9();
		NullCheck(L_70);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_71 = L_70->get_rightNode_2();
		NullCheck(L_71);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_72 = L_71->get_Next_0();
		NullCheck(L_72);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_73 = L_72->get_Point_3();
		NullCheck(L_73);
		double L_74 = L_73->get_Y_1();
		if ((((double)L_68) < ((double)L_74)))
		{
			goto IL_0104;
		}
	}

IL_0168:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_75 = ___tcx0;
		NullCheck(L_75);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_76 = L_75->get_Basin_9();
		NullCheck(L_76);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_77 = L_76->get_rightNode_2();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_78 = ___tcx0;
		NullCheck(L_78);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_79 = L_78->get_Basin_9();
		NullCheck(L_79);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_80 = L_79->get_bottomNode_1();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_77) == ((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_80))))
		{
			goto IL_0184;
		}
	}
	{
		return;
	}

IL_0184:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_81 = ___tcx0;
		NullCheck(L_81);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_82 = L_81->get_Basin_9();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_83 = ___tcx0;
		NullCheck(L_83);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_84 = L_83->get_Basin_9();
		NullCheck(L_84);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_85 = L_84->get_rightNode_2();
		NullCheck(L_85);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_86 = L_85->get_Point_3();
		NullCheck(L_86);
		double L_87 = L_86->get_X_0();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_88 = ___tcx0;
		NullCheck(L_88);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_89 = L_88->get_Basin_9();
		NullCheck(L_89);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_90 = L_89->get_leftNode_0();
		NullCheck(L_90);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_91 = L_90->get_Point_3();
		NullCheck(L_91);
		double L_92 = L_91->get_X_0();
		NullCheck(L_82);
		L_82->set_width_3(((double)il2cpp_codegen_subtract((double)L_87, (double)L_92)));
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_93 = ___tcx0;
		NullCheck(L_93);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_94 = L_93->get_Basin_9();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_95 = ___tcx0;
		NullCheck(L_95);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_96 = L_95->get_Basin_9();
		NullCheck(L_96);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_97 = L_96->get_leftNode_0();
		NullCheck(L_97);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_98 = L_97->get_Point_3();
		NullCheck(L_98);
		double L_99 = L_98->get_Y_1();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_100 = ___tcx0;
		NullCheck(L_100);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_101 = L_100->get_Basin_9();
		NullCheck(L_101);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_102 = L_101->get_rightNode_2();
		NullCheck(L_102);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_103 = L_102->get_Point_3();
		NullCheck(L_103);
		double L_104 = L_103->get_Y_1();
		NullCheck(L_94);
		L_94->set_leftHighest_4((bool)((((double)L_99) > ((double)L_104))? 1 : 0));
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_105 = ___tcx0;
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_106 = ___tcx0;
		NullCheck(L_106);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_107 = L_106->get_Basin_9();
		NullCheck(L_107);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_108 = L_107->get_bottomNode_1();
		DTSweep_FillBasinReq_mAA104E4942452196EDF771565885D5FFB09AF3B6(L_105, L_108, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::FillBasinReq(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasinReq_mAA104E4942452196EDF771565885D5FFB09AF3B6 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1 = ___node1;
		bool L_2;
		L_2 = DTSweep_IsShallow_m6DE040F200510C03978F44EFBC26C3067273944C(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_3 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = ___node1;
		DTSweep_Fill_mDA5CB3222C951C63D98F20B88614CD71AD0E7E43(L_3, L_4, /*hidden argument*/NULL);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_5 = ___node1;
		NullCheck(L_5);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_6 = L_5->get_Prev_1();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_7 = ___tcx0;
		NullCheck(L_7);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_8 = L_7->get_Basin_9();
		NullCheck(L_8);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_9 = L_8->get_leftNode_0();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_6) == ((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_9))))
		{
			goto IL_0041;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = ___node1;
		NullCheck(L_10);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = L_10->get_Next_0();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_12 = ___tcx0;
		NullCheck(L_12);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_13 = L_12->get_Basin_9();
		NullCheck(L_13);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_14 = L_13->get_rightNode_2();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_11) == ((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_14))))
		{
			goto IL_0041;
		}
	}
	{
		return;
	}

IL_0041:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_15 = ___node1;
		NullCheck(L_15);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = L_15->get_Prev_1();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_17 = ___tcx0;
		NullCheck(L_17);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_18 = L_17->get_Basin_9();
		NullCheck(L_18);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = L_18->get_leftNode_0();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_16) == ((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_19))))
		{
			goto IL_0092;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_20 = ___node1;
		NullCheck(L_20);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_21 = L_20->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_22 = ___node1;
		NullCheck(L_22);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_23 = L_22->get_Next_0();
		NullCheck(L_23);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_24 = L_23->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_25 = ___node1;
		NullCheck(L_25);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_26 = L_25->get_Next_0();
		NullCheck(L_26);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_27 = L_26->get_Next_0();
		NullCheck(L_27);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_28 = L_27->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_21, L_24, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		int32_t L_30 = V_0;
		if (L_30)
		{
			goto IL_0085;
		}
	}
	{
		return;
	}

IL_0085:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_31 = ___node1;
		NullCheck(L_31);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_32 = L_31->get_Next_0();
		___node1 = L_32;
		goto IL_011e;
	}

IL_0092:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_33 = ___node1;
		NullCheck(L_33);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_34 = L_33->get_Next_0();
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_35 = ___tcx0;
		NullCheck(L_35);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_36 = L_35->get_Basin_9();
		NullCheck(L_36);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_37 = L_36->get_rightNode_2();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_34) == ((RuntimeObject*)(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)L_37))))
		{
			goto IL_00e4;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_38 = ___node1;
		NullCheck(L_38);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_39 = L_38->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_40 = ___node1;
		NullCheck(L_40);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_41 = L_40->get_Prev_1();
		NullCheck(L_41);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_42 = L_41->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_43 = ___node1;
		NullCheck(L_43);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_44 = L_43->get_Prev_1();
		NullCheck(L_44);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_45 = L_44->get_Prev_1();
		NullCheck(L_45);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_46 = L_45->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		int32_t L_47;
		L_47 = TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB(L_39, L_42, L_46, /*hidden argument*/NULL);
		V_1 = L_47;
		int32_t L_48 = V_1;
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_00d7;
		}
	}
	{
		return;
	}

IL_00d7:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_49 = ___node1;
		NullCheck(L_49);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_50 = L_49->get_Prev_1();
		___node1 = L_50;
		goto IL_011e;
	}

IL_00e4:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_51 = ___node1;
		NullCheck(L_51);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_52 = L_51->get_Prev_1();
		NullCheck(L_52);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_53 = L_52->get_Point_3();
		NullCheck(L_53);
		double L_54 = L_53->get_Y_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_55 = ___node1;
		NullCheck(L_55);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_56 = L_55->get_Next_0();
		NullCheck(L_56);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_57 = L_56->get_Point_3();
		NullCheck(L_57);
		double L_58 = L_57->get_Y_1();
		if ((!(((double)L_54) < ((double)L_58))))
		{
			goto IL_0116;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_59 = ___node1;
		NullCheck(L_59);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_60 = L_59->get_Prev_1();
		___node1 = L_60;
		goto IL_011e;
	}

IL_0116:
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_61 = ___node1;
		NullCheck(L_61);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_62 = L_61->get_Next_0();
		___node1 = L_62;
	}

IL_011e:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_63 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_64 = ___node1;
		DTSweep_FillBasinReq_mAA104E4942452196EDF771565885D5FFB09AF3B6(L_63, L_64, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pathfinding.Poly2Tri.DTSweep::IsShallow(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsShallow_m6DE040F200510C03978F44EFBC26C3067273944C (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node1, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_0 = ___tcx0;
		NullCheck(L_0);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_1 = L_0->get_Basin_9();
		NullCheck(L_1);
		bool L_2 = L_1->get_leftHighest_4();
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_3 = ___tcx0;
		NullCheck(L_3);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_4 = L_3->get_Basin_9();
		NullCheck(L_4);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_5 = L_4->get_leftNode_0();
		NullCheck(L_5);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = L_5->get_Point_3();
		NullCheck(L_6);
		double L_7 = L_6->get_Y_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = ___node1;
		NullCheck(L_8);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = L_8->get_Point_3();
		NullCheck(L_9);
		double L_10 = L_9->get_Y_1();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_7, (double)L_10));
		goto IL_0059;
	}

IL_0037:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_11 = ___tcx0;
		NullCheck(L_11);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_12 = L_11->get_Basin_9();
		NullCheck(L_12);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_13 = L_12->get_rightNode_2();
		NullCheck(L_13);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_14 = L_13->get_Point_3();
		NullCheck(L_14);
		double L_15 = L_14->get_Y_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = ___node1;
		NullCheck(L_16);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_17 = L_16->get_Point_3();
		NullCheck(L_17);
		double L_18 = L_17->get_Y_1();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_15, (double)L_18));
	}

IL_0059:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_19 = ___tcx0;
		NullCheck(L_19);
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_20 = L_19->get_Basin_9();
		NullCheck(L_20);
		double L_21 = L_20->get_width_3();
		double L_22 = V_0;
		if ((!(((double)L_21) > ((double)L_22))))
		{
			goto IL_006c;
		}
	}
	{
		return (bool)1;
	}

IL_006c:
	{
		return (bool)0;
	}
}
// System.Double Pathfinding.Poly2Tri.DTSweep::HoleAngle(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_HoleAngle_m71510BA2CABA57BAF94C6359758AFBC8CA093213 (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = ___node0;
		NullCheck(L_0);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = L_0->get_Point_3();
		NullCheck(L_1);
		double L_2 = L_1->get_X_0();
		V_0 = L_2;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = ___node0;
		NullCheck(L_3);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4 = L_3->get_Point_3();
		NullCheck(L_4);
		double L_5 = L_4->get_Y_1();
		V_1 = L_5;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_6 = ___node0;
		NullCheck(L_6);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_7 = L_6->get_Next_0();
		NullCheck(L_7);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_8 = L_7->get_Point_3();
		NullCheck(L_8);
		double L_9 = L_8->get_X_0();
		double L_10 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_9, (double)L_10));
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = ___node0;
		NullCheck(L_11);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_12 = L_11->get_Next_0();
		NullCheck(L_12);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_13 = L_12->get_Point_3();
		NullCheck(L_13);
		double L_14 = L_13->get_Y_1();
		double L_15 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract((double)L_14, (double)L_15));
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = ___node0;
		NullCheck(L_16);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_17 = L_16->get_Prev_1();
		NullCheck(L_17);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_18 = L_17->get_Point_3();
		NullCheck(L_18);
		double L_19 = L_18->get_X_0();
		double L_20 = V_0;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_19, (double)L_20));
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = ___node0;
		NullCheck(L_21);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_22 = L_21->get_Prev_1();
		NullCheck(L_22);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_23 = L_22->get_Point_3();
		NullCheck(L_23);
		double L_24 = L_23->get_Y_1();
		double L_25 = V_1;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_24, (double)L_25));
		double L_26 = V_2;
		double L_27 = V_5;
		double L_28 = V_3;
		double L_29 = V_4;
		double L_30 = V_2;
		double L_31 = V_4;
		double L_32 = V_3;
		double L_33 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_34;
		L_34 = atan2(((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_26, (double)L_27)), (double)((double)il2cpp_codegen_multiply((double)L_28, (double)L_29)))), ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_30, (double)L_31)), (double)((double)il2cpp_codegen_multiply((double)L_32, (double)L_33)))));
		return L_34;
	}
}
// System.Double Pathfinding.Poly2Tri.DTSweep::BasinAngle(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_BasinAngle_m759295DE0F7B5A3B281D47BCC87583BDE74BCB18 (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = ___node0;
		NullCheck(L_0);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = L_0->get_Point_3();
		NullCheck(L_1);
		double L_2 = L_1->get_X_0();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = ___node0;
		NullCheck(L_3);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_4 = L_3->get_Next_0();
		NullCheck(L_4);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_5 = L_4->get_Next_0();
		NullCheck(L_5);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = L_5->get_Point_3();
		NullCheck(L_6);
		double L_7 = L_6->get_X_0();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_2, (double)L_7));
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_8 = ___node0;
		NullCheck(L_8);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = L_8->get_Point_3();
		NullCheck(L_9);
		double L_10 = L_9->get_Y_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = ___node0;
		NullCheck(L_11);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_12 = L_11->get_Next_0();
		NullCheck(L_12);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_13 = L_12->get_Next_0();
		NullCheck(L_13);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_14 = L_13->get_Point_3();
		NullCheck(L_14);
		double L_15 = L_14->get_Y_1();
		V_1 = ((double)il2cpp_codegen_subtract((double)L_10, (double)L_15));
		double L_16 = V_1;
		double L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = atan2(L_16, L_17);
		return L_18;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::Fill(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Fill_mDA5CB3222C951C63D98F20B88614CD71AD0E7E43 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * V_0 = NULL;
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = ___node1;
		NullCheck(L_0);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1 = L_0->get_Prev_1();
		NullCheck(L_1);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = L_1->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_3 = ___node1;
		NullCheck(L_3);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4 = L_3->get_Point_3();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_5 = ___node1;
		NullCheck(L_5);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_6 = L_5->get_Next_0();
		NullCheck(L_6);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_7 = L_6->get_Point_3();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_8 = (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 *)il2cpp_codegen_object_new(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5_il2cpp_TypeInfo_var);
		DelaunayTriangle__ctor_m8889D692510997CE9D51FACD9358FA27F91DD078(L_8, L_2, L_4, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_9 = V_0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = ___node1;
		NullCheck(L_10);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = L_10->get_Prev_1();
		NullCheck(L_11);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_12 = L_11->get_Triangle_4();
		NullCheck(L_9);
		DelaunayTriangle_MarkNeighbor_m513A0664DF96C4C67A1AE7E175841FF1DEC08290(L_9, L_12, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_13 = V_0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_14 = ___node1;
		NullCheck(L_14);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_15 = L_14->get_Triangle_4();
		NullCheck(L_13);
		DelaunayTriangle_MarkNeighbor_m513A0664DF96C4C67A1AE7E175841FF1DEC08290(L_13, L_15, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_16 = ___tcx0;
		NullCheck(L_16);
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_17 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)L_16)->get_Triangles_0();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_18 = V_0;
		NullCheck(L_17);
		List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69(L_17, L_18, /*hidden argument*/List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69_RuntimeMethod_var);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_19 = ___node1;
		NullCheck(L_19);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_20 = L_19->get_Prev_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_21 = ___node1;
		NullCheck(L_21);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_22 = L_21->get_Next_0();
		NullCheck(L_20);
		L_20->set_Next_0(L_22);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_23 = ___node1;
		NullCheck(L_23);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_24 = L_23->get_Next_0();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_25 = ___node1;
		NullCheck(L_25);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_26 = L_25->get_Prev_1();
		NullCheck(L_24);
		L_24->set_Prev_1(L_26);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_27 = ___tcx0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_28 = ___node1;
		NullCheck(L_27);
		DTSweepContext_RemoveNode_m12327D8AD44A12081C31EAB99638F9DDFB288D6F(L_27, L_28, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_29 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_30 = V_0;
		bool L_31;
		L_31 = DTSweep_Legalize_mC506C715996AE6BBC249EBAA75FE224A510817D2(L_29, L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0087;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_32 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_33 = V_0;
		NullCheck(L_32);
		DTSweepContext_MapTriangleToNodes_mE829C4699361BD4343CAF32227CBBD36815661B5(L_32, L_33, /*hidden argument*/NULL);
	}

IL_0087:
	{
		return;
	}
}
// System.Boolean Pathfinding.Poly2Tri.DTSweep::Legalize(Pathfinding.Poly2Tri.DTSweepContext,Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_Legalize_mC506C715996AE6BBC249EBAA75FE224A510817D2 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * ___tcx0, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * V_1 = NULL;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_2 = NULL;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		goto IL_0120;
	}

IL_0007:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_0 = ___t1;
		NullCheck(L_0);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_1 = L_0->get_address_of_EdgeIsDelaunay_3();
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		goto IL_011c;
	}

IL_001d:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_4 = ___t1;
		NullCheck(L_4);
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_5 = L_4->get_address_of_Neighbors_1();
		int32_t L_6 = V_0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_7;
		L_7 = FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_5, L_6, /*hidden argument*/FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		V_1 = L_7;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_8 = V_1;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_011c;
	}

IL_0035:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_9 = ___t1;
		NullCheck(L_9);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_10 = L_9->get_address_of_Points_0();
		int32_t L_11 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12;
		L_12 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_10, L_11, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		V_2 = L_12;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_13 = V_1;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_14 = ___t1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_15 = V_2;
		NullCheck(L_13);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_16;
		L_16 = DelaunayTriangle_OppositePoint_m043329713CBA0A263FD870227E7EE23038A0E3E9(L_13, L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_17 = V_1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5(L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_20 = V_1;
		NullCheck(L_20);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_21 = L_20->get_address_of_EdgeIsConstrained_2();
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_21, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0078;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_24 = V_1;
		NullCheck(L_24);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_25 = L_24->get_address_of_EdgeIsDelaunay_3();
		int32_t L_26 = V_4;
		bool L_27;
		L_27 = FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0096;
		}
	}

IL_0078:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_28 = ___t1;
		NullCheck(L_28);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_29 = L_28->get_address_of_EdgeIsConstrained_2();
		int32_t L_30 = V_0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_31 = V_1;
		NullCheck(L_31);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_32 = L_31->get_address_of_EdgeIsConstrained_2();
		int32_t L_33 = V_4;
		bool L_34;
		L_34 = FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_32, L_33, /*hidden argument*/NULL);
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_29, L_30, L_34, /*hidden argument*/NULL);
		goto IL_011c;
	}

IL_0096:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_35 = V_2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_36 = ___t1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_37 = V_2;
		NullCheck(L_36);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_38;
		L_38 = DelaunayTriangle_PointCCWFrom_mD4A9B1F3FF1EE9ACAF89109E533D6555FEB0812E(L_36, L_37, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_39 = ___t1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_40 = V_2;
		NullCheck(L_39);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_41;
		L_41 = DelaunayTriangle_PointCWFrom_m03C8942EA962B41D0526074CC3A62DCC2E3DA812(L_39, L_40, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_42 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = TriangulationUtil_SmartIncircle_m314FED9CC95D70544EC3B3F09EC9CA8F2D49563D(L_35, L_38, L_41, L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_011c;
	}

IL_00b5:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_44 = ___t1;
		NullCheck(L_44);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_45 = L_44->get_address_of_EdgeIsDelaunay_3();
		int32_t L_46 = V_0;
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_45, L_46, (bool)1, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_47 = V_1;
		NullCheck(L_47);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_48 = L_47->get_address_of_EdgeIsDelaunay_3();
		int32_t L_49 = V_4;
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_48, L_49, (bool)1, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_50 = ___t1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_51 = V_2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_52 = V_1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_53 = V_3;
		DTSweep_RotateTrianglePair_m22E9BF622CAEE8F2438B39492EBD95F3BEA70F3C(L_50, L_51, L_52, L_53, /*hidden argument*/NULL);
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_54 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_55 = ___t1;
		bool L_56;
		L_56 = DTSweep_Legalize_mC506C715996AE6BBC249EBAA75FE224A510817D2(L_54, L_55, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_00ec;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_57 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_58 = ___t1;
		NullCheck(L_57);
		DTSweepContext_MapTriangleToNodes_mE829C4699361BD4343CAF32227CBBD36815661B5(L_57, L_58, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_59 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_60 = V_1;
		bool L_61;
		L_61 = DTSweep_Legalize_mC506C715996AE6BBC249EBAA75FE224A510817D2(L_59, L_60, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_00ff;
		}
	}
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_62 = ___tcx0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_63 = V_1;
		NullCheck(L_62);
		DTSweepContext_MapTriangleToNodes_mE829C4699361BD4343CAF32227CBBD36815661B5(L_62, L_63, /*hidden argument*/NULL);
	}

IL_00ff:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_64 = ___t1;
		NullCheck(L_64);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_65 = L_64->get_address_of_EdgeIsDelaunay_3();
		int32_t L_66 = V_0;
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_65, L_66, (bool)0, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_67 = V_1;
		NullCheck(L_67);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_68 = L_67->get_address_of_EdgeIsDelaunay_3();
		int32_t L_69 = V_4;
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_68, L_69, (bool)0, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_011c:
	{
		int32_t L_70 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0120:
	{
		int32_t L_71 = V_0;
		if ((((int32_t)L_71) < ((int32_t)3)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweep::RotateTrianglePair(Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_RotateTrianglePair_m22E9BF622CAEE8F2438B39492EBD95F3BEA70F3C (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p1, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___ot2, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___op3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_Clear_m33E5D058EE7F88DC82D19508C4D1D7F87EB02B08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * V_0 = NULL;
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * V_1 = NULL;
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * V_2 = NULL;
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_0 = ___t0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p1;
		NullCheck(L_0);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_2;
		L_2 = DelaunayTriangle_NeighborCCWFrom_mE3B49CD2FA11476F2840D7E1CAD0FE1EFE807856(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_3 = ___t0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4 = ___p1;
		NullCheck(L_3);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_5;
		L_5 = DelaunayTriangle_NeighborCWFrom_mBEA1F32675D9FBAA7D276388D9658DC6FB29BA76(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_6 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_7 = ___op3;
		NullCheck(L_6);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_8;
		L_8 = DelaunayTriangle_NeighborCCWFrom_mE3B49CD2FA11476F2840D7E1CAD0FE1EFE807856(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_9 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_10 = ___op3;
		NullCheck(L_9);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_11;
		L_11 = DelaunayTriangle_NeighborCWFrom_mBEA1F32675D9FBAA7D276388D9658DC6FB29BA76(L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_12 = ___t0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_13 = ___p1;
		NullCheck(L_12);
		bool L_14;
		L_14 = DelaunayTriangle_GetConstrainedEdgeCCW_mC3007D3B2AE0EE9698C0616E4F520D2F21D95CF2(L_12, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_15 = ___t0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_16 = ___p1;
		NullCheck(L_15);
		bool L_17;
		L_17 = DelaunayTriangle_GetConstrainedEdgeCW_m565B4CB9FD0AE54F929D4ACD1B525A6D51C8C27D(L_15, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_18 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_19 = ___op3;
		NullCheck(L_18);
		bool L_20;
		L_20 = DelaunayTriangle_GetConstrainedEdgeCCW_mC3007D3B2AE0EE9698C0616E4F520D2F21D95CF2(L_18, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_21 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_22 = ___op3;
		NullCheck(L_21);
		bool L_23;
		L_23 = DelaunayTriangle_GetConstrainedEdgeCW_m565B4CB9FD0AE54F929D4ACD1B525A6D51C8C27D(L_21, L_22, /*hidden argument*/NULL);
		V_7 = L_23;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_24 = ___t0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_25 = ___p1;
		NullCheck(L_24);
		bool L_26;
		L_26 = DelaunayTriangle_GetDelaunayEdgeCCW_mB5060E20A425AFA823A64AC8AB30E5D5B11D3F3B(L_24, L_25, /*hidden argument*/NULL);
		V_8 = L_26;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_27 = ___t0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_28 = ___p1;
		NullCheck(L_27);
		bool L_29;
		L_29 = DelaunayTriangle_GetDelaunayEdgeCW_m0549E8E4DDF25305DDB9A54F854EF596DB02BA3F(L_27, L_28, /*hidden argument*/NULL);
		V_9 = L_29;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_30 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_31 = ___op3;
		NullCheck(L_30);
		bool L_32;
		L_32 = DelaunayTriangle_GetDelaunayEdgeCCW_mB5060E20A425AFA823A64AC8AB30E5D5B11D3F3B(L_30, L_31, /*hidden argument*/NULL);
		V_10 = L_32;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_33 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_34 = ___op3;
		NullCheck(L_33);
		bool L_35;
		L_35 = DelaunayTriangle_GetDelaunayEdgeCW_m0549E8E4DDF25305DDB9A54F854EF596DB02BA3F(L_33, L_34, /*hidden argument*/NULL);
		V_11 = L_35;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_36 = ___t0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_37 = ___p1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_38 = ___op3;
		NullCheck(L_36);
		DelaunayTriangle_Legalize_m55DA7D544ABC8AD13546C67DB8A19A76441AE352(L_36, L_37, L_38, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_39 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_40 = ___op3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_41 = ___p1;
		NullCheck(L_39);
		DelaunayTriangle_Legalize_m55DA7D544ABC8AD13546C67DB8A19A76441AE352(L_39, L_40, L_41, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_42 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_43 = ___p1;
		bool L_44 = V_8;
		NullCheck(L_42);
		DelaunayTriangle_SetDelaunayEdgeCCW_m8C010B3DDE7BA2E1C3F27E7CDB0D62B3B5A9ABC8(L_42, L_43, L_44, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_45 = ___t0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_46 = ___p1;
		bool L_47 = V_9;
		NullCheck(L_45);
		DelaunayTriangle_SetDelaunayEdgeCW_mAB4AD1CCA1C4580184B9B1A59F8CC046DF203B65(L_45, L_46, L_47, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_48 = ___t0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_49 = ___op3;
		bool L_50 = V_10;
		NullCheck(L_48);
		DelaunayTriangle_SetDelaunayEdgeCCW_m8C010B3DDE7BA2E1C3F27E7CDB0D62B3B5A9ABC8(L_48, L_49, L_50, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_51 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_52 = ___op3;
		bool L_53 = V_11;
		NullCheck(L_51);
		DelaunayTriangle_SetDelaunayEdgeCW_mAB4AD1CCA1C4580184B9B1A59F8CC046DF203B65(L_51, L_52, L_53, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_54 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_55 = ___p1;
		bool L_56 = V_4;
		NullCheck(L_54);
		DelaunayTriangle_SetConstrainedEdgeCCW_m7443A15B1D37F3EC5625FFE93B6D4DD052450A21(L_54, L_55, L_56, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_57 = ___t0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_58 = ___p1;
		bool L_59 = V_5;
		NullCheck(L_57);
		DelaunayTriangle_SetConstrainedEdgeCW_m0E3F1D24C1032AC93F9E4EA3C298E39833D355DA(L_57, L_58, L_59, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_60 = ___t0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_61 = ___op3;
		bool L_62 = V_6;
		NullCheck(L_60);
		DelaunayTriangle_SetConstrainedEdgeCCW_m7443A15B1D37F3EC5625FFE93B6D4DD052450A21(L_60, L_61, L_62, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_63 = ___ot2;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_64 = ___op3;
		bool L_65 = V_7;
		NullCheck(L_63);
		DelaunayTriangle_SetConstrainedEdgeCW_m0E3F1D24C1032AC93F9E4EA3C298E39833D355DA(L_63, L_64, L_65, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_66 = ___t0;
		NullCheck(L_66);
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_67 = L_66->get_address_of_Neighbors_1();
		FixedArray3_1_Clear_m33E5D058EE7F88DC82D19508C4D1D7F87EB02B08((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_67, /*hidden argument*/FixedArray3_1_Clear_m33E5D058EE7F88DC82D19508C4D1D7F87EB02B08_RuntimeMethod_var);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_68 = ___ot2;
		NullCheck(L_68);
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_69 = L_68->get_address_of_Neighbors_1();
		FixedArray3_1_Clear_m33E5D058EE7F88DC82D19508C4D1D7F87EB02B08((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_69, /*hidden argument*/FixedArray3_1_Clear_m33E5D058EE7F88DC82D19508C4D1D7F87EB02B08_RuntimeMethod_var);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_70 = V_0;
		if (!L_70)
		{
			goto IL_00e3;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_71 = ___ot2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_72 = V_0;
		NullCheck(L_71);
		DelaunayTriangle_MarkNeighbor_m513A0664DF96C4C67A1AE7E175841FF1DEC08290(L_71, L_72, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_73 = V_1;
		if (!L_73)
		{
			goto IL_00f0;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_74 = ___t0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_75 = V_1;
		NullCheck(L_74);
		DelaunayTriangle_MarkNeighbor_m513A0664DF96C4C67A1AE7E175841FF1DEC08290(L_74, L_75, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_76 = V_2;
		if (!L_76)
		{
			goto IL_00fd;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_77 = ___t0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_78 = V_2;
		NullCheck(L_77);
		DelaunayTriangle_MarkNeighbor_m513A0664DF96C4C67A1AE7E175841FF1DEC08290(L_77, L_78, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_79 = V_3;
		if (!L_79)
		{
			goto IL_010a;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_80 = ___ot2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_81 = V_3;
		NullCheck(L_80);
		DelaunayTriangle_MarkNeighbor_m513A0664DF96C4C67A1AE7E175841FF1DEC08290(L_80, L_81, /*hidden argument*/NULL);
	}

IL_010a:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_82 = ___t0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_83 = ___ot2;
		NullCheck(L_82);
		DelaunayTriangle_MarkNeighbor_m513A0664DF96C4C67A1AE7E175841FF1DEC08290(L_82, L_83, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Poly2Tri.DTSweepBasin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepBasin__ctor_m62505975944D9CCEB4262A44ADD196C2216088DD (DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Poly2Tri.DTSweepConstraint::.ctor(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepConstraint__ctor_m226DC2C6B72DB30C09807B0CDE90B2E281ACFB2B (DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p10, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p21, const RuntimeMethod* method)
{
	{
		TriangulationConstraint__ctor_m51B97E70CC120BB45B82AB2C17C0D343206D1F1B(__this, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___p10;
		((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)__this)->set_P_0(L_0);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p21;
		((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)__this)->set_Q_1(L_1);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = ___p10;
		NullCheck(L_2);
		double L_3 = L_2->get_Y_1();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4 = ___p21;
		NullCheck(L_4);
		double L_5 = L_4->get_Y_1();
		if ((!(((double)L_3) > ((double)L_5))))
		{
			goto IL_0038;
		}
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = ___p10;
		((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)__this)->set_Q_1(L_6);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_7 = ___p21;
		((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)__this)->set_P_0(L_7);
		goto IL_007e;
	}

IL_0038:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_8 = ___p10;
		NullCheck(L_8);
		double L_9 = L_8->get_Y_1();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_10 = ___p21;
		NullCheck(L_10);
		double L_11 = L_10->get_Y_1();
		if ((!(((double)L_9) == ((double)L_11))))
		{
			goto IL_007e;
		}
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = ___p10;
		NullCheck(L_12);
		double L_13 = L_12->get_X_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_14 = ___p21;
		NullCheck(L_14);
		double L_15 = L_14->get_X_0();
		if ((!(((double)L_13) > ((double)L_15))))
		{
			goto IL_006d;
		}
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_16 = ___p10;
		((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)__this)->set_Q_1(L_16);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_17 = ___p21;
		((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)__this)->set_P_0(L_17);
		goto IL_007e;
	}

IL_006d:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_18 = ___p10;
		NullCheck(L_18);
		double L_19 = L_18->get_X_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_20 = ___p21;
		NullCheck(L_20);
		double L_21 = L_20->get_X_0();
		if ((!(((double)L_19) == ((double)L_21))))
		{
			goto IL_007e;
		}
	}

IL_007e:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_22 = ((TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *)__this)->get_Q_1();
		NullCheck(L_22);
		TriangulationPoint_AddEdge_m0C4479D6CA27AF066683B041886131097FEBFD6F(L_22, __this, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Poly2Tri.DTSweepContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext__ctor_m8DCA9579D2886B8723181CD24A5ADBF4C01183F1 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_ALPHA_7((0.300000012f));
		DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B * L_0 = (DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B *)il2cpp_codegen_object_new(DTSweepBasin_t28B921D7A865F69966C581F86AC1F2014635C21B_il2cpp_TypeInfo_var);
		DTSweepBasin__ctor_m62505975944D9CCEB4262A44ADD196C2216088DD(L_0, /*hidden argument*/NULL);
		__this->set_Basin_9(L_0);
		DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 * L_1 = (DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 *)il2cpp_codegen_object_new(DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1_il2cpp_TypeInfo_var);
		DTSweepEdgeEvent__ctor_m6B45BA2A4943D926D916573689EAB95B8838D317(L_1, /*hidden argument*/NULL);
		__this->set_EdgeEvent_10(L_1);
		DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850 * L_2 = (DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850 *)il2cpp_codegen_object_new(DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850_il2cpp_TypeInfo_var);
		DTSweepPointComparator__ctor_mD075FF75CA8B4CAD70F973DA671B2B4A3E283671(L_2, /*hidden argument*/NULL);
		__this->set__comparator_11(L_2);
		TriangulationContext__ctor_m8C13B5218D9A9DF88CA4D9FCBF3E4521AE1D68D8(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(7 /* System.Void Pathfinding.Poly2Tri.TriangulationContext::Clear() */, __this);
		return;
	}
}
// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DTSweepContext::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DTSweepContext_get_Head_m6DB92BA766D2984CC17EDDFFE0450FF2FAEFF295 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method)
{
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = __this->get_U3CHeadU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::set_Head(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_set_Head_mA7E0C871A78F70D806D5F964EBE0630F207E1E0E (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___value0, const RuntimeMethod* method)
{
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___value0;
		__this->set_U3CHeadU3Ek__BackingField_12(L_0);
		return;
	}
}
// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DTSweepContext::get_Tail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DTSweepContext_get_Tail_mA688B0DD53BA5E6A3D785B38FB2F2E207465ACBC (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method)
{
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = __this->get_U3CTailU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::set_Tail(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_set_Tail_m50F6518217B69B24720174F570A0BFDA6D588AE5 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___value0, const RuntimeMethod* method)
{
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___value0;
		__this->set_U3CTailU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Boolean Pathfinding.Poly2Tri.DTSweepContext::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweepContext_get_IsDebugEnabled_m585452314573684CC717BC752941FA79248C2549 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = TriangulationContext_get_IsDebugEnabled_m261AB3285C2C43D6E664F688B220200699C000B2_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::RemoveFromList(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveFromList_m166805D76FE0C262824372315A88C9BFE1075FF2 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___triangle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m900ABA8F1D6E4E659827AA45A01C9948AB2F1B94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_0 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)__this)->get_Triangles_0();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_1 = ___triangle0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m900ABA8F1D6E4E659827AA45A01C9948AB2F1B94(L_0, L_1, /*hidden argument*/List_1_Remove_m900ABA8F1D6E4E659827AA45A01C9948AB2F1B94_RuntimeMethod_var);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::MeshClean(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshClean_m1C8B164D07F119478F7D1FA412B2B9310A6681B6 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___triangle0, const RuntimeMethod* method)
{
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_0 = ___triangle0;
		DTSweepContext_MeshCleanReq_m38165B44F9CFE802B235832C727792964EF7AFCD(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::MeshCleanReq(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshCleanReq_m38165B44F9CFE802B235832C727792964EF7AFCD (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___triangle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangulatable_tCAD4C0A85B8E64A934A74DC195F4CEB0C4F4656F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_0 = ___triangle0;
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_1 = ___triangle0;
		NullCheck(L_1);
		bool L_2;
		L_2 = DelaunayTriangle_get_IsInterior_m344265E702D66D413E43BBAC3BD8D8F54C05F009_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0059;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_3 = ___triangle0;
		NullCheck(L_3);
		DelaunayTriangle_set_IsInterior_mC5ADB92E779C6CA4640DEE778FED5A0E7DA17963_inline(L_3, (bool)1, /*hidden argument*/NULL);
		RuntimeObject* L_4;
		L_4 = TriangulationContext_get_Triangulatable_m7CCE82D33D014B4F405D396C380BB145CBD61B96_inline(__this, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_5 = ___triangle0;
		NullCheck(L_4);
		InterfaceActionInvoker1< DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * >::Invoke(1 /* System.Void Pathfinding.Poly2Tri.Triangulatable::AddTriangle(Pathfinding.Poly2Tri.DelaunayTriangle) */, Triangulatable_tCAD4C0A85B8E64A934A74DC195F4CEB0C4F4656F_il2cpp_TypeInfo_var, L_4, L_5);
		V_0 = 0;
		goto IL_0052;
	}

IL_002b:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_6 = ___triangle0;
		NullCheck(L_6);
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_7 = L_6->get_address_of_EdgeIsConstrained_2();
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_7, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004e;
		}
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_10 = ___triangle0;
		NullCheck(L_10);
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_11 = L_10->get_address_of_Neighbors_1();
		int32_t L_12 = V_0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_13;
		L_13 = FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_11, L_12, /*hidden argument*/FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		DTSweepContext_MeshCleanReq_m38165B44F9CFE802B235832C727792964EF7AFCD(__this, L_13, /*hidden argument*/NULL);
	}

IL_004e:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)3)))
		{
			goto IL_002b;
		}
	}

IL_0059:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_Clear_m8D0003AEC3BE78EB9CF06E324272B6FA52D3B9EB (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TriangulationContext_Clear_m561100BDAEB32CA53F7AD294212F1A090F6160ED(__this, /*hidden argument*/NULL);
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_0 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)__this)->get_Triangles_0();
		NullCheck(L_0);
		List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A(L_0, /*hidden argument*/List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A_RuntimeMethod_var);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::AddNode(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_AddNode_mB026D7CCBE768A93A3FCD65962E8BCDAC6962C8C (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node0, const RuntimeMethod* method)
{
	{
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_0 = __this->get_Front_8();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1 = ___node0;
		NullCheck(L_0);
		AdvancingFront_AddNode_m5ACCEC29A8BBB6D7B5FA101274F4154E7D91711C(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::RemoveNode(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveNode_m12327D8AD44A12081C31EAB99638F9DDFB288D6F (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___node0, const RuntimeMethod* method)
{
	{
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_0 = __this->get_Front_8();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_1 = ___node0;
		NullCheck(L_0);
		AdvancingFront_RemoveNode_m8758B21CEAA38E882BBBA26AC0BCD2574474CDAF(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Pathfinding.Poly2Tri.AdvancingFrontNode Pathfinding.Poly2Tri.DTSweepContext::LocateNode(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * DTSweepContext_LocateNode_m2D394CB716AEF3560A872557BF56D7A0BBE2A503 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method)
{
	{
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_0 = __this->get_Front_8();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___point0;
		NullCheck(L_0);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_2;
		L_2 = AdvancingFront_LocateNode_m8C551357BBDFD144665E82FD3763BBDA09012DF3(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::CreateAdvancingFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_CreateAdvancingFront_mF27104727FC85BCAC3F933E18D0D05F7B8718396 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_0 = NULL;
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_1 = NULL;
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_2 = NULL;
	DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * V_3 = NULL;
	{
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_0 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)__this)->get_Points_1();
		NullCheck(L_0);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1;
		L_1 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_0, 0, /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2;
		L_2 = DTSweepContext_get_Tail_mA688B0DD53BA5E6A3D785B38FB2F2E207465ACBC_inline(__this, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_3;
		L_3 = DTSweepContext_get_Head_m6DB92BA766D2984CC17EDDFFE0450FF2FAEFF295_inline(__this, /*hidden argument*/NULL);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_4 = (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 *)il2cpp_codegen_object_new(DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5_il2cpp_TypeInfo_var);
		DelaunayTriangle__ctor_m8889D692510997CE9D51FACD9358FA27F91DD078(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_5 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)__this)->get_Triangles_0();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_6 = V_3;
		NullCheck(L_5);
		List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69(L_5, L_6, /*hidden argument*/List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69_RuntimeMethod_var);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_7 = V_3;
		NullCheck(L_7);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_8 = L_7->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9;
		L_9 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_8, 1, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_10 = (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)il2cpp_codegen_object_new(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_m3371C0E61496A577A3A536FC02591558D837EE7B(L_10, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11 = V_0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_12 = V_3;
		NullCheck(L_11);
		L_11->set_Triangle_4(L_12);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_13 = V_3;
		NullCheck(L_13);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_14 = L_13->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_15;
		L_15 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_14, 0, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_16 = (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)il2cpp_codegen_object_new(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_m3371C0E61496A577A3A536FC02591558D837EE7B(L_16, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_17 = V_2;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_18 = V_3;
		NullCheck(L_17);
		L_17->set_Triangle_4(L_18);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_19 = V_3;
		NullCheck(L_19);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_20 = L_19->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_21;
		L_21 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_20, 2, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_22 = (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)il2cpp_codegen_object_new(AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_m3371C0E61496A577A3A536FC02591558D837EE7B(L_22, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_23 = V_0;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_24 = V_1;
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_25 = (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 *)il2cpp_codegen_object_new(AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2_il2cpp_TypeInfo_var);
		AdvancingFront__ctor_m08F80F992650228015A6C8FC819B41D335EB5EDC(L_25, L_23, L_24, /*hidden argument*/NULL);
		__this->set_Front_8(L_25);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_26 = __this->get_Front_8();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_27 = V_2;
		NullCheck(L_26);
		AdvancingFront_AddNode_m5ACCEC29A8BBB6D7B5FA101274F4154E7D91711C(L_26, L_27, /*hidden argument*/NULL);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_28 = __this->get_Front_8();
		NullCheck(L_28);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_29 = L_28->get_Head_0();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_30 = V_2;
		NullCheck(L_29);
		L_29->set_Next_0(L_30);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_31 = V_2;
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_32 = __this->get_Front_8();
		NullCheck(L_32);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_33 = L_32->get_Tail_1();
		NullCheck(L_31);
		L_31->set_Next_0(L_33);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_34 = V_2;
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_35 = __this->get_Front_8();
		NullCheck(L_35);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_36 = L_35->get_Head_0();
		NullCheck(L_34);
		L_34->set_Prev_1(L_36);
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_37 = __this->get_Front_8();
		NullCheck(L_37);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_38 = L_37->get_Tail_1();
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_39 = V_2;
		NullCheck(L_38);
		L_38->set_Prev_1(L_39);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::MapTriangleToNodes(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MapTriangleToNodes_mE829C4699361BD4343CAF32227CBBD36815661B5 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0007:
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_0 = ___t0;
		NullCheck(L_0);
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_1 = L_0->get_address_of_Neighbors_1();
		int32_t L_2 = V_0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_3;
		L_3 = FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_1, L_2, /*hidden argument*/FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * L_4 = __this->get_Front_8();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_5 = ___t0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_6 = ___t0;
		NullCheck(L_6);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_7 = L_6->get_address_of_Points_0();
		int32_t L_8 = V_0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9;
		L_9 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_7, L_8, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		NullCheck(L_5);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_10;
		L_10 = DelaunayTriangle_PointCWFrom_m03C8942EA962B41D0526074CC3A62DCC2E3DA812(L_5, L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_11;
		L_11 = AdvancingFront_LocatePoint_m588840872AD054E89732A07CBC9B4333D97A8928(L_4, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_12 = V_1;
		if (!L_12)
		{
			goto IL_0043;
		}
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_13 = V_1;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_14 = ___t0;
		NullCheck(L_13);
		L_13->set_Triangle_4(L_14);
	}

IL_0043:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)3)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::PrepareTriangulation(Pathfinding.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_PrepareTriangulation_m04336BA613F2C48EF989B2F5BD4EF29D70C81049 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, RuntimeObject* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE226B7422F771D2A2930B46662F7614CE8B6AD71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDDBD63AE8436AE7618367FF71913AD366E8E5CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4798328201C01BAE7F76D59C514EA1C04A867524_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFBF597A0FC5291FDA97464F4C0D2842F62496570_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m84C86B06820C1146C9418A25D0CFBA78677D34F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79  V_4;
	memset((&V_4), 0, sizeof(V_4));
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_5 = NULL;
	double V_6 = 0.0;
	double V_7 = 0.0;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_8 = NULL;
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___t0;
		TriangulationContext_PrepareTriangulation_mFC6FDD4D6FA6017C3173029A969A29B105D4F327(__this, L_0, /*hidden argument*/NULL);
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_1 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)__this)->get_Points_1();
		NullCheck(L_1);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2;
		L_2 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_1, 0, /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		NullCheck(L_2);
		double L_3 = L_2->get_X_0();
		double L_4 = L_3;
		V_1 = L_4;
		V_0 = L_4;
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_5 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)__this)->get_Points_1();
		NullCheck(L_5);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6;
		L_6 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_5, 0, /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		NullCheck(L_6);
		double L_7 = L_6->get_Y_1();
		double L_8 = L_7;
		V_3 = L_8;
		V_2 = L_8;
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_9 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)__this)->get_Points_1();
		NullCheck(L_9);
		Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79  L_10;
		L_10 = List_1_GetEnumerator_mFBF597A0FC5291FDA97464F4C0D2842F62496570(L_9, /*hidden argument*/List_1_GetEnumerator_mFBF597A0FC5291FDA97464F4C0D2842F62496570_RuntimeMethod_var);
		V_4 = L_10;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009e;
		}

IL_0041:
		{
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_11;
			L_11 = Enumerator_get_Current_m4798328201C01BAE7F76D59C514EA1C04A867524_inline((Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m4798328201C01BAE7F76D59C514EA1C04A867524_RuntimeMethod_var);
			V_5 = L_11;
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = V_5;
			NullCheck(L_12);
			double L_13 = L_12->get_X_0();
			double L_14 = V_0;
			if ((!(((double)L_13) > ((double)L_14))))
			{
				goto IL_005f;
			}
		}

IL_0057:
		{
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_15 = V_5;
			NullCheck(L_15);
			double L_16 = L_15->get_X_0();
			V_0 = L_16;
		}

IL_005f:
		{
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_17 = V_5;
			NullCheck(L_17);
			double L_18 = L_17->get_X_0();
			double L_19 = V_1;
			if ((!(((double)L_18) < ((double)L_19))))
			{
				goto IL_0074;
			}
		}

IL_006c:
		{
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_20 = V_5;
			NullCheck(L_20);
			double L_21 = L_20->get_X_0();
			V_1 = L_21;
		}

IL_0074:
		{
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_22 = V_5;
			NullCheck(L_22);
			double L_23 = L_22->get_Y_1();
			double L_24 = V_2;
			if ((!(((double)L_23) > ((double)L_24))))
			{
				goto IL_0089;
			}
		}

IL_0081:
		{
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_25 = V_5;
			NullCheck(L_25);
			double L_26 = L_25->get_Y_1();
			V_2 = L_26;
		}

IL_0089:
		{
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_27 = V_5;
			NullCheck(L_27);
			double L_28 = L_27->get_Y_1();
			double L_29 = V_3;
			if ((!(((double)L_28) < ((double)L_29))))
			{
				goto IL_009e;
			}
		}

IL_0096:
		{
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_30 = V_5;
			NullCheck(L_30);
			double L_31 = L_30->get_Y_1();
			V_3 = L_31;
		}

IL_009e:
		{
			bool L_32;
			L_32 = Enumerator_MoveNext_mDDBD63AE8436AE7618367FF71913AD366E8E5CF6((Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mDDBD63AE8436AE7618367FF71913AD366E8E5CF6_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_0041;
			}
		}

IL_00aa:
		{
			IL2CPP_LEAVE(0xBD, FINALLY_00af);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00af;
	}

FINALLY_00af:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE226B7422F771D2A2930B46662F7614CE8B6AD71((Enumerator_tA49431C80D36298EBB71C70A1F61C44084BA4D79 *)(&V_4), /*hidden argument*/Enumerator_Dispose_mE226B7422F771D2A2930B46662F7614CE8B6AD71_RuntimeMethod_var);
		IL2CPP_END_FINALLY(175)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(175)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
	}

IL_00bd:
	{
		float L_33 = __this->get_ALPHA_7();
		double L_34 = V_0;
		double L_35 = V_1;
		V_6 = ((double)il2cpp_codegen_multiply((double)((double)((double)L_33)), (double)((double)il2cpp_codegen_subtract((double)L_34, (double)L_35))));
		float L_36 = __this->get_ALPHA_7();
		double L_37 = V_2;
		double L_38 = V_3;
		V_7 = ((double)il2cpp_codegen_multiply((double)((double)((double)L_36)), (double)((double)il2cpp_codegen_subtract((double)L_37, (double)L_38))));
		double L_39 = V_0;
		double L_40 = V_6;
		double L_41 = V_3;
		double L_42 = V_7;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_43 = (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)il2cpp_codegen_object_new(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52_il2cpp_TypeInfo_var);
		TriangulationPoint__ctor_m52688943525DDBB891D8DF38CAF4FED2F546B143(L_43, ((double)il2cpp_codegen_add((double)L_39, (double)L_40)), ((double)il2cpp_codegen_subtract((double)L_41, (double)L_42)), /*hidden argument*/NULL);
		V_8 = L_43;
		double L_44 = V_1;
		double L_45 = V_6;
		double L_46 = V_3;
		double L_47 = V_7;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_48 = (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)il2cpp_codegen_object_new(TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52_il2cpp_TypeInfo_var);
		TriangulationPoint__ctor_m52688943525DDBB891D8DF38CAF4FED2F546B143(L_48, ((double)il2cpp_codegen_subtract((double)L_44, (double)L_45)), ((double)il2cpp_codegen_subtract((double)L_46, (double)L_47)), /*hidden argument*/NULL);
		V_9 = L_48;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_49 = V_8;
		DTSweepContext_set_Head_mA7E0C871A78F70D806D5F964EBE0630F207E1E0E_inline(__this, L_49, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_50 = V_9;
		DTSweepContext_set_Tail_m50F6518217B69B24720174F570A0BFDA6D588AE5_inline(__this, L_50, /*hidden argument*/NULL);
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_51 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)__this)->get_Points_1();
		DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850 * L_52 = __this->get__comparator_11();
		NullCheck(L_51);
		List_1_Sort_m84C86B06820C1146C9418A25D0CFBA78677D34F4(L_51, L_52, /*hidden argument*/List_1_Sort_m84C86B06820C1146C9418A25D0CFBA78677D34F4_RuntimeMethod_var);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepContext::FinalizeTriangulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_FinalizeTriangulation_mEF92BE51B4E23B55685993598CD6762A085431F1 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangulatable_tCAD4C0A85B8E64A934A74DC195F4CEB0C4F4656F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = TriangulationContext_get_Triangulatable_m7CCE82D33D014B4F405D396C380BB145CBD61B96_inline(__this, /*hidden argument*/NULL);
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_1 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)__this)->get_Triangles_0();
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void Pathfinding.Poly2Tri.Triangulatable::AddTriangles(System.Collections.Generic.IEnumerable`1<Pathfinding.Poly2Tri.DelaunayTriangle>) */, Triangulatable_tCAD4C0A85B8E64A934A74DC195F4CEB0C4F4656F_il2cpp_TypeInfo_var, L_0, L_1);
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_2 = ((TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 *)__this)->get_Triangles_0();
		NullCheck(L_2);
		List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A(L_2, /*hidden argument*/List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A_RuntimeMethod_var);
		return;
	}
}
// Pathfinding.Poly2Tri.TriangulationConstraint Pathfinding.Poly2Tri.DTSweepContext::NewConstraint(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C * DTSweepContext_NewConstraint_m3D7E548928345A2504D1665C3F14E143A0BABD39 (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___a0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___a0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___b1;
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_2 = (DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC *)il2cpp_codegen_object_new(DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC_il2cpp_TypeInfo_var);
		DTSweepConstraint__ctor_m226DC2C6B72DB30C09807B0CDE90B2E281ACFB2B(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Pathfinding.Poly2Tri.TriangulationAlgorithm Pathfinding.Poly2Tri.DTSweepContext::get_Algorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DTSweepContext_get_Algorithm_mDAEFD5645D6C6043547117A74AF1356A782BC1EF (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
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
// System.Void Pathfinding.Poly2Tri.DTSweepDebugContext::set_PrimaryTriangle(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_PrimaryTriangle_m51D93F311C1C67971DA3EFC27A384D5B743F9ABC (DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B56FA96FE55F4A5B70E48AF16D59739F6389D3C);
		s_Il2CppMethodInitialized = true;
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_0 = ___value0;
		__this->set__primaryTriangle_1(L_0);
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_1 = ((TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_m562887E560870E858AEAB2BFBB12929C11E2A538(L_1, _stringLiteral9B56FA96FE55F4A5B70E48AF16D59739F6389D3C, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepDebugContext::set_SecondaryTriangle(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_SecondaryTriangle_mBC2649DEB0BF5AF699BECA1451E0AF828C4466A1 (DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B67A1E3362EA84160157011F823BD6607D1E57);
		s_Il2CppMethodInitialized = true;
	}
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_0 = ___value0;
		__this->set__secondaryTriangle_2(L_0);
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_1 = ((TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_m562887E560870E858AEAB2BFBB12929C11E2A538(L_1, _stringLiteralB4B67A1E3362EA84160157011F823BD6607D1E57, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepDebugContext::set_ActivePoint(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActivePoint_m0B91DD79CC82A3C89122A0A1F99B5CAF6D8EC835 (DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral237443D40E51BEB792E3255884B17F5F2A070555);
		s_Il2CppMethodInitialized = true;
	}
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___value0;
		__this->set__activePoint_3(L_0);
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_1 = ((TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_m562887E560870E858AEAB2BFBB12929C11E2A538(L_1, _stringLiteral237443D40E51BEB792E3255884B17F5F2A070555, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepDebugContext::set_ActiveNode(Pathfinding.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveNode_mED77963E5472F3D8FCC920E9CF4991DF7DA8176D (DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * __this, AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88EB854C80D13C1F40F616EE53A1381BFF41639B);
		s_Il2CppMethodInitialized = true;
	}
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = ___value0;
		__this->set__activeNode_4(L_0);
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_1 = ((TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_m562887E560870E858AEAB2BFBB12929C11E2A538(L_1, _stringLiteral88EB854C80D13C1F40F616EE53A1381BFF41639B, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepDebugContext::set_ActiveConstraint(Pathfinding.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveConstraint_m5C4201BA669BA58B14A073FB1BC116BE142FF97E (DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * __this, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB80316C404349B7962BAC3B6CE7C7E7107C36CA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_0 = ___value0;
		__this->set__activeConstraint_5(L_0);
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_1 = ((TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_m562887E560870E858AEAB2BFBB12929C11E2A538(L_1, _stringLiteralB80316C404349B7962BAC3B6CE7C7E7107C36CA1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DTSweepDebugContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_Clear_m5615A565B299708374833D0E33FC23E8361BBC7A (DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * __this, const RuntimeMethod* method)
{
	{
		DTSweepDebugContext_set_PrimaryTriangle_m51D93F311C1C67971DA3EFC27A384D5B743F9ABC(__this, (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 *)NULL, /*hidden argument*/NULL);
		DTSweepDebugContext_set_SecondaryTriangle_mBC2649DEB0BF5AF699BECA1451E0AF828C4466A1(__this, (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 *)NULL, /*hidden argument*/NULL);
		DTSweepDebugContext_set_ActivePoint_m0B91DD79CC82A3C89122A0A1F99B5CAF6D8EC835(__this, (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *)NULL, /*hidden argument*/NULL);
		DTSweepDebugContext_set_ActiveNode_mED77963E5472F3D8FCC920E9CF4991DF7DA8176D(__this, (AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 *)NULL, /*hidden argument*/NULL);
		DTSweepDebugContext_set_ActiveConstraint_m5C4201BA669BA58B14A073FB1BC116BE142FF97E(__this, (DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC *)NULL, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Poly2Tri.DTSweepEdgeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepEdgeEvent__ctor_m6B45BA2A4943D926D916573689EAB95B8838D317 (DTSweepEdgeEvent_tA4DD6C0C5A5ABD5301D96410B600AD58B5C1D0C1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Poly2Tri.DTSweepPointComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepPointComparator__ctor_mD075FF75CA8B4CAD70F973DA671B2B4A3E283671 (DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Pathfinding.Poly2Tri.DTSweepPointComparator::Compare(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DTSweepPointComparator_Compare_m1709D38324B79D64875063AF3BECFCBCBAC9697D (DTSweepPointComparator_tCF4D20B29069E958E0F623011349DCA344437850 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p10, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p21, const RuntimeMethod* method)
{
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___p10;
		NullCheck(L_0);
		double L_1 = L_0->get_Y_1();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = ___p21;
		NullCheck(L_2);
		double L_3 = L_2->get_Y_1();
		if ((!(((double)L_1) < ((double)L_3))))
		{
			goto IL_0013;
		}
	}
	{
		return (-1);
	}

IL_0013:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4 = ___p10;
		NullCheck(L_4);
		double L_5 = L_4->get_Y_1();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = ___p21;
		NullCheck(L_6);
		double L_7 = L_6->get_Y_1();
		if ((!(((double)L_5) > ((double)L_7))))
		{
			goto IL_0026;
		}
	}
	{
		return 1;
	}

IL_0026:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_8 = ___p10;
		NullCheck(L_8);
		double L_9 = L_8->get_X_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_10 = ___p21;
		NullCheck(L_10);
		double L_11 = L_10->get_X_0();
		if ((!(((double)L_9) < ((double)L_11))))
		{
			goto IL_0039;
		}
	}
	{
		return (-1);
	}

IL_0039:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = ___p10;
		NullCheck(L_12);
		double L_13 = L_12->get_X_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_14 = ___p21;
		NullCheck(L_14);
		double L_15 = L_14->get_X_0();
		if ((!(((double)L_13) > ((double)L_15))))
		{
			goto IL_004c;
		}
	}
	{
		return 1;
	}

IL_004c:
	{
		return 0;
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
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::.ctor(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle__ctor_m8889D692510997CE9D51FACD9358FA27F91DD078 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p10, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p21, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p32, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p10;
		FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_0, 0, L_1, /*hidden argument*/FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531_RuntimeMethod_var);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_2 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_3 = ___p21;
		FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_2, 1, L_3, /*hidden argument*/FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531_RuntimeMethod_var);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_4 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_5 = ___p32;
		FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_4, 2, L_5, /*hidden argument*/FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::get_IsInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_get_IsInterior_m344265E702D66D413E43BBAC3BD8D8F54C05F009 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsInteriorU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::set_IsInterior(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_set_IsInterior_mC5ADB92E779C6CA4640DEE778FED5A0E7DA17963 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsInteriorU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Pathfinding.Poly2Tri.DelaunayTriangle::IndexOf(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p0;
		int32_t L_2;
		L_2 = FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_0, L_1, /*hidden argument*/FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3_RuntimeMethod_var);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4ED7D3F8F9EE650CA476597BCB717839ACBA38B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5_RuntimeMethod_var)));
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 Pathfinding.Poly2Tri.DelaunayTriangle::IndexCCWFrom(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexCCWFrom_m64B629123696314E2C16EB88BCDBF65002529F42 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method)
{
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___p0;
		int32_t L_1;
		L_1 = DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5(__this, L_0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))%(int32_t)3));
	}
}
// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::Contains(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_Contains_mD7B3B2BD860C022AD7EE4FF16EB2631BFD08CA45 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_Contains_mEA68E8461B53162499ADC267BE82BF15F9593D06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p0;
		bool L_2;
		L_2 = FixedArray3_1_Contains_mEA68E8461B53162499ADC267BE82BF15F9593D06((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_0, L_1, /*hidden argument*/FixedArray3_1_Contains_mEA68E8461B53162499ADC267BE82BF15F9593D06_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::MarkNeighbor(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_m0A004DE59C61D91141C432A753AC71A4F396A2D8 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p10, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p21, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_mB572DF8606AEB0D5AC6433567DF66233D246ADD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___p10;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p21;
		int32_t L_2;
		L_2 = DelaunayTriangle_EdgeIndex_m8340DD1269975C56C54A1447998F6743CCA00074(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA29C437354A4DAC3895D74F1428508364E47293F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DelaunayTriangle_MarkNeighbor_m0A004DE59C61D91141C432A753AC71A4F396A2D8_RuntimeMethod_var)));
	}

IL_001b:
	{
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_5 = __this->get_address_of_Neighbors_1();
		int32_t L_6 = V_0;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_7 = ___t2;
		FixedArray3_1_set_Item_mB572DF8606AEB0D5AC6433567DF66233D246ADD1((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_5, L_6, L_7, /*hidden argument*/FixedArray3_1_set_Item_mB572DF8606AEB0D5AC6433567DF66233D246ADD1_RuntimeMethod_var);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::MarkNeighbor(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_m513A0664DF96C4C67A1AE7E175841FF1DEC08290 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_mB572DF8606AEB0D5AC6433567DF66233D246ADD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_0 = ___t0;
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_1 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2;
		L_2 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_1, 0, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_3;
		L_3 = DelaunayTriangle_Contains_mD7B3B2BD860C022AD7EE4FF16EB2631BFD08CA45(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_4 = ___t0;
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_5 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6;
		L_6 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_5, 1, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = DelaunayTriangle_Contains_mD7B3B2BD860C022AD7EE4FF16EB2631BFD08CA45(L_4, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_8 = ___t0;
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_9 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_10;
		L_10 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_9, 2, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_11;
		L_11 = DelaunayTriangle_Contains_mD7B3B2BD860C022AD7EE4FF16EB2631BFD08CA45(L_8, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0076;
		}
	}
	{
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_14 = __this->get_address_of_Neighbors_1();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_15 = ___t0;
		FixedArray3_1_set_Item_mB572DF8606AEB0D5AC6433567DF66233D246ADD1((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_14, 0, L_15, /*hidden argument*/FixedArray3_1_set_Item_mB572DF8606AEB0D5AC6433567DF66233D246ADD1_RuntimeMethod_var);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_16 = ___t0;
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_17 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_18;
		L_18 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_17, 1, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_19 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_20;
		L_20 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_19, 2, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		NullCheck(L_16);
		DelaunayTriangle_MarkNeighbor_m0A004DE59C61D91141C432A753AC71A4F396A2D8(L_16, L_18, L_20, __this, /*hidden argument*/NULL);
		goto IL_00fb;
	}

IL_0076:
	{
		bool L_21 = V_0;
		if (!L_21)
		{
			goto IL_00b3;
		}
	}
	{
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00b3;
		}
	}
	{
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_23 = __this->get_address_of_Neighbors_1();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_24 = ___t0;
		FixedArray3_1_set_Item_mB572DF8606AEB0D5AC6433567DF66233D246ADD1((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_23, 1, L_24, /*hidden argument*/FixedArray3_1_set_Item_mB572DF8606AEB0D5AC6433567DF66233D246ADD1_RuntimeMethod_var);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_25 = ___t0;
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_26 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_27;
		L_27 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_26, 0, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_28 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_29;
		L_29 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_28, 2, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		NullCheck(L_25);
		DelaunayTriangle_MarkNeighbor_m0A004DE59C61D91141C432A753AC71A4F396A2D8(L_25, L_27, L_29, __this, /*hidden argument*/NULL);
		goto IL_00fb;
	}

IL_00b3:
	{
		bool L_30 = V_0;
		if (!L_30)
		{
			goto IL_00f0;
		}
	}
	{
		bool L_31 = V_1;
		if (!L_31)
		{
			goto IL_00f0;
		}
	}
	{
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_32 = __this->get_address_of_Neighbors_1();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_33 = ___t0;
		FixedArray3_1_set_Item_mB572DF8606AEB0D5AC6433567DF66233D246ADD1((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_32, 2, L_33, /*hidden argument*/FixedArray3_1_set_Item_mB572DF8606AEB0D5AC6433567DF66233D246ADD1_RuntimeMethod_var);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_34 = ___t0;
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_35 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_36;
		L_36 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_35, 0, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_37 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_38;
		L_38 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_37, 1, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		NullCheck(L_34);
		DelaunayTriangle_MarkNeighbor_m0A004DE59C61D91141C432A753AC71A4F396A2D8(L_34, L_36, L_38, __this, /*hidden argument*/NULL);
		goto IL_00fb;
	}

IL_00f0:
	{
		Exception_t * L_39 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral656D304F364B477202FBF443F2948662EBAB895C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DelaunayTriangle_MarkNeighbor_m513A0664DF96C4C67A1AE7E175841FF1DEC08290_RuntimeMethod_var)));
	}

IL_00fb:
	{
		return;
	}
}
// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DelaunayTriangle::OppositePoint(Pathfinding.Poly2Tri.DelaunayTriangle,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DelaunayTriangle_OppositePoint_m043329713CBA0A263FD870227E7EE23038A0E3E9 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p1, const RuntimeMethod* method)
{
	{
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_0 = ___t0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p1;
		NullCheck(L_0);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2;
		L_2 = DelaunayTriangle_PointCWFrom_m03C8942EA962B41D0526074CC3A62DCC2E3DA812(L_0, L_1, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_3;
		L_3 = DelaunayTriangle_PointCWFrom_m03C8942EA962B41D0526074CC3A62DCC2E3DA812(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Pathfinding.Poly2Tri.DelaunayTriangle Pathfinding.Poly2Tri.DelaunayTriangle::NeighborCWFrom(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * DelaunayTriangle_NeighborCWFrom_mBEA1F32675D9FBAA7D276388D9658DC6FB29BA76 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_0 = __this->get_address_of_Neighbors_1();
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_1 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = ___point0;
		int32_t L_3;
		L_3 = FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_1, L_2, /*hidden argument*/FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3_RuntimeMethod_var);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_4;
		L_4 = FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1))%(int32_t)3)), /*hidden argument*/FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		return L_4;
	}
}
// Pathfinding.Poly2Tri.DelaunayTriangle Pathfinding.Poly2Tri.DelaunayTriangle::NeighborCCWFrom(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * DelaunayTriangle_NeighborCCWFrom_mE3B49CD2FA11476F2840D7E1CAD0FE1EFE807856 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_0 = __this->get_address_of_Neighbors_1();
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_1 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = ___point0;
		int32_t L_3;
		L_3 = FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_1, L_2, /*hidden argument*/FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3_RuntimeMethod_var);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_4;
		L_4 = FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2))%(int32_t)3)), /*hidden argument*/FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		return L_4;
	}
}
// Pathfinding.Poly2Tri.DelaunayTriangle Pathfinding.Poly2Tri.DelaunayTriangle::NeighborAcrossFrom(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * DelaunayTriangle_NeighborAcrossFrom_mB0C3FB6DFF9BBB76152AACEBB23AE46E47780187 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D * L_0 = __this->get_address_of_Neighbors_1();
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_1 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = ___point0;
		int32_t L_3;
		L_3 = FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_1, L_2, /*hidden argument*/FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3_RuntimeMethod_var);
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_4;
		L_4 = FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F((FixedArray3_1_t9809C6392C44F05556F8672881039EFC892BC51D *)L_0, L_3, /*hidden argument*/FixedArray3_1_get_Item_mD4E60DBC08B15C314B1E161CEA60AB9581994F4F_RuntimeMethod_var);
		return L_4;
	}
}
// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DelaunayTriangle::PointCCWFrom(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DelaunayTriangle_PointCCWFrom_mD4A9B1F3FF1EE9ACAF89109E533D6555FEB0812E (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___point0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5(__this, L_1, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_3;
		L_3 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		return L_3;
	}
}
// Pathfinding.Poly2Tri.TriangulationPoint Pathfinding.Poly2Tri.DelaunayTriangle::PointCWFrom(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DelaunayTriangle_PointCWFrom_m03C8942EA962B41D0526074CC3A62DCC2E3DA812 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___point0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5(__this, L_1, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_3;
		L_3 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::RotateCW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_RotateCW_m8EFCD7566B278216D7982B52F669D36FCDE73ED4 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * V_0 = NULL;
	{
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1;
		L_1 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_0, 2, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		V_0 = L_1;
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_2 = __this->get_address_of_Points_0();
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_3 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4;
		L_4 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_3, 1, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_2, 2, L_4, /*hidden argument*/FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531_RuntimeMethod_var);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_5 = __this->get_address_of_Points_0();
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_6 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_7;
		L_7 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_6, 0, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_5, 1, L_7, /*hidden argument*/FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531_RuntimeMethod_var);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_8 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = V_0;
		FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_8, 0, L_9, /*hidden argument*/FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531_RuntimeMethod_var);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::Legalize(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_Legalize_m55DA7D544ABC8AD13546C67DB8A19A76441AE352 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___oPoint0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___nPoint1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DelaunayTriangle_RotateCW_m8EFCD7566B278216D7982B52F669D36FCDE73ED4(__this, /*hidden argument*/NULL);
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___oPoint0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexCCWFrom_m64B629123696314E2C16EB88BCDBF65002529F42(__this, L_1, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_3 = ___nPoint1;
		FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_0, L_2, L_3, /*hidden argument*/FixedArray3_1_set_Item_mF00609F3D9C4687E71B8D4DC83D586B79E37F531_RuntimeMethod_var);
		return;
	}
}
// System.String Pathfinding.Poly2Tri.DelaunayTriangle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DelaunayTriangle_ToString_m0973EEC15BEA6CEEAB9391E885DBC5F3DF6BD7DD (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_2 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_3;
		L_3 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_2, 0, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_4;
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_6 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_7;
		L_7 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_6, 1, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_10 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_11;
		L_11 = FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_10, 2, /*hidden argument*/FixedArray3_1_get_Item_mBF7B1532959529A7EFA3BBEE74911A8070B1C56D_RuntimeMethod_var);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_11);
		String_t* L_12;
		L_12 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_9, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_m0219297FA75D0644CFADD73E7C07BF9152E7B07C (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		int32_t L_1 = ___index0;
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_0, L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_mFF8FAFD873D37E05EC4F905277C12654DC6BBCA1 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___q1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___p0;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___q1;
		int32_t L_2;
		L_2 = DelaunayTriangle_EdgeIndex_m8340DD1269975C56C54A1447998F6743CCA00074(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_001d;
		}
	}
	{
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_4 = __this->get_address_of_EdgeIsConstrained_2();
		int32_t L_5 = V_0;
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_4, L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Int32 Pathfinding.Poly2Tri.DelaunayTriangle::EdgeIndex(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_EdgeIndex_m8340DD1269975C56C54A1447998F6743CCA00074 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p10, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	{
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p10;
		int32_t L_2;
		L_2 = FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_0, L_1, /*hidden argument*/FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3_RuntimeMethod_var);
		V_0 = L_2;
		FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A * L_3 = __this->get_address_of_Points_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4 = ___p21;
		int32_t L_5;
		L_5 = FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3((FixedArray3_1_t77A8026AD9ABCB155161A1F7B229A59D101E4F2A *)L_3, L_4, /*hidden argument*/FixedArray3_1_IndexOf_m0AC944B97C640EC2021E295A425F3EB44D7C5BC3_RuntimeMethod_var);
		V_1 = L_5;
		int32_t L_6 = V_0;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_7 = V_1;
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
	}

IL_0027:
	{
		V_2 = (bool)G_B3_0;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_9 = V_1;
		G_B6_0 = ((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 1;
	}

IL_0036:
	{
		V_3 = (bool)G_B6_0;
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_11 = V_1;
		G_B9_0 = ((((int32_t)L_11) == ((int32_t)2))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B9_0 = 1;
	}

IL_0045:
	{
		V_4 = (bool)G_B9_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		return 1;
	}

IL_0065:
	{
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0073;
		}
	}
	{
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		return 2;
	}

IL_0073:
	{
		return (-1);
	}
}
// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCCW(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCCW_mC3007D3B2AE0EE9698C0616E4F520D2F21D95CF2 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method)
{
	{
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5(__this, L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCW(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCW_m565B4CB9FD0AE54F929D4ACD1B525A6D51C8C27D (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method)
{
	{
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5(__this, L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCCW(Pathfinding.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCCW_m7443A15B1D37F3EC5625FFE93B6D4DD052450A21 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, bool ___ce1, const RuntimeMethod* method)
{
	{
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCW(Pathfinding.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCW_m0E3F1D24C1032AC93F9E4EA3C298E39833D355DA (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, bool ___ce1, const RuntimeMethod* method)
{
	{
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCCW(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCCW_mB5060E20A425AFA823A64AC8AB30E5D5B11D3F3B (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method)
{
	{
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_0 = __this->get_address_of_EdgeIsDelaunay_3();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5(__this, L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Pathfinding.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCW(Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCW_m0549E8E4DDF25305DDB9A54F854EF596DB02BA3F (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, const RuntimeMethod* method)
{
	{
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_0 = __this->get_address_of_EdgeIsDelaunay_3();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5(__this, L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCCW(Pathfinding.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCCW_m8C010B3DDE7BA2E1C3F27E7CDB0D62B3B5A9ABC8 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, bool ___ce1, const RuntimeMethod* method)
{
	{
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_0 = __this->get_address_of_EdgeIsDelaunay_3();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCW(Pathfinding.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCW_mAB4AD1CCA1C4580184B9B1A59F8CC046DF203B65 (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___p0, bool ___ce1, const RuntimeMethod* method)
{
	{
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_0 = __this->get_address_of_EdgeIsDelaunay_3();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_mD4642DCB1FAA8B3365BA1FDA817EA9431C255AA5(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), L_3, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Pathfinding.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshal_pinvoke(const FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D& unmarshaled, FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshaled_pinvoke& marshaled)
{
	marshaled.____0_0 = static_cast<int32_t>(unmarshaled.get__0_0());
	marshaled.____1_1 = static_cast<int32_t>(unmarshaled.get__1_1());
	marshaled.____2_2 = static_cast<int32_t>(unmarshaled.get__2_2());
}
IL2CPP_EXTERN_C void FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshal_pinvoke_back(const FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshaled_pinvoke& marshaled, FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D& unmarshaled)
{
	bool unmarshaled__0_temp_0 = false;
	unmarshaled__0_temp_0 = static_cast<bool>(marshaled.____0_0);
	unmarshaled.set__0_0(unmarshaled__0_temp_0);
	bool unmarshaled__1_temp_1 = false;
	unmarshaled__1_temp_1 = static_cast<bool>(marshaled.____1_1);
	unmarshaled.set__1_1(unmarshaled__1_temp_1);
	bool unmarshaled__2_temp_2 = false;
	unmarshaled__2_temp_2 = static_cast<bool>(marshaled.____2_2);
	unmarshaled.set__2_2(unmarshaled__2_temp_2);
}
// Conversion method for clean up from marshalling of: Pathfinding.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshal_pinvoke_cleanup(FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Pathfinding.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshal_com(const FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D& unmarshaled, FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshaled_com& marshaled)
{
	marshaled.____0_0 = static_cast<int32_t>(unmarshaled.get__0_0());
	marshaled.____1_1 = static_cast<int32_t>(unmarshaled.get__1_1());
	marshaled.____2_2 = static_cast<int32_t>(unmarshaled.get__2_2());
}
IL2CPP_EXTERN_C void FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshal_com_back(const FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshaled_com& marshaled, FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D& unmarshaled)
{
	bool unmarshaled__0_temp_0 = false;
	unmarshaled__0_temp_0 = static_cast<bool>(marshaled.____0_0);
	unmarshaled.set__0_0(unmarshaled__0_temp_0);
	bool unmarshaled__1_temp_1 = false;
	unmarshaled__1_temp_1 = static_cast<bool>(marshaled.____1_1);
	unmarshaled.set__1_1(unmarshaled__1_temp_1);
	bool unmarshaled__2_temp_2 = false;
	unmarshaled__2_temp_2 = static_cast<bool>(marshaled.____2_2);
	unmarshaled.set__2_2(unmarshaled__2_temp_2);
}
// Conversion method for clean up from marshalling of: Pathfinding.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshal_com_cleanup(FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D_marshaled_com& marshaled)
{
}
// System.Collections.IEnumerator Pathfinding.Poly2Tri.FixedBitArray3::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_mEE50F60626B966AAC0F2247C87C608D4F1379BA1 (FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = FixedBitArray3_GetEnumerator_mC8DF2011FDF4656A3F539F3BA99A6475A8FF2973((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_mEE50F60626B966AAC0F2247C87C608D4F1379BA1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * _thisAdjusted = reinterpret_cast<FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_mEE50F60626B966AAC0F2247C87C608D4F1379BA1(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Pathfinding.Poly2Tri.FixedBitArray3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2 (FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_002e;
	}

IL_0019:
	{
		bool L_2 = __this->get__0_0();
		return L_2;
	}

IL_0020:
	{
		bool L_3 = __this->get__1_1();
		return L_3;
	}

IL_0027:
	{
		bool L_4 = __this->get__2_2();
		return L_4;
	}

IL_002e:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_5 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  bool FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * _thisAdjusted = reinterpret_cast<FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *>(__this + _offset);
	bool _returnValue;
	_returnValue = FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void Pathfinding.Poly2Tri.FixedBitArray3::set_Item(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846 (FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_003d;
	}

IL_0019:
	{
		bool L_2 = ___value1;
		__this->set__0_0(L_2);
		goto IL_0043;
	}

IL_0025:
	{
		bool L_3 = ___value1;
		__this->set__1_1(L_3);
		goto IL_0043;
	}

IL_0031:
	{
		bool L_4 = ___value1;
		__this->set__2_2(L_4);
		goto IL_0043;
	}

IL_003d:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_5 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846_RuntimeMethod_var)));
	}

IL_0043:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * _thisAdjusted = reinterpret_cast<FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *>(__this + _offset);
	FixedBitArray3_set_Item_m8B7902E9FF388EF12CBBCA936DF0C1B8A04E9846(_thisAdjusted, ___index0, ___value1, method);
}
// System.Void Pathfinding.Poly2Tri.FixedBitArray3::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_Clear_mB15C1018D11FCA7B646A13CAB8E4C0F3174F9022 (FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = 0;
		V_0 = (bool)L_0;
		__this->set__2_2((bool)L_0);
		bool L_1 = V_0;
		bool L_2 = L_1;
		V_0 = L_2;
		__this->set__1_1(L_2);
		bool L_3 = V_0;
		__this->set__0_0(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void FixedBitArray3_Clear_mB15C1018D11FCA7B646A13CAB8E4C0F3174F9022_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * _thisAdjusted = reinterpret_cast<FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *>(__this + _offset);
	FixedBitArray3_Clear_mB15C1018D11FCA7B646A13CAB8E4C0F3174F9022(_thisAdjusted, method);
}
// System.Collections.Generic.IEnumerable`1<System.Boolean> Pathfinding.Poly2Tri.FixedBitArray3::Enumerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_Enumerate_m22877F01C8C7138EAD2C2B4E712962158394E1DA (FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * V_0 = NULL;
	{
		U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * L_0 = (U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 *)il2cpp_codegen_object_new(U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6_il2cpp_TypeInfo_var);
		U3CEnumerateU3Ec__Iterator1__ctor_m085670587EF6DA4377155D9AD5DC24B181831801(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * L_1 = V_0;
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D  L_2 = (*(FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)__this);
		NullCheck(L_1);
		L_1->set_U3CU3Ef__this_3(L_2);
		U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * L_3 = V_0;
		U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * L_4 = L_3;
		NullCheck(L_4);
		L_4->set_U24PC_1(((int32_t)-2));
		return L_4;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FixedBitArray3_Enumerate_m22877F01C8C7138EAD2C2B4E712962158394E1DA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * _thisAdjusted = reinterpret_cast<FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FixedBitArray3_Enumerate_m22877F01C8C7138EAD2C2B4E712962158394E1DA(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.Boolean> Pathfinding.Poly2Tri.FixedBitArray3::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_GetEnumerator_mC8DF2011FDF4656A3F539F3BA99A6475A8FF2973 (FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t90AD96F2C518D6F04343C83B67B02220C715C642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = FixedBitArray3_Enumerate_m22877F01C8C7138EAD2C2B4E712962158394E1DA((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IEnumerable_1_t90AD96F2C518D6F04343C83B67B02220C715C642_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FixedBitArray3_GetEnumerator_mC8DF2011FDF4656A3F539F3BA99A6475A8FF2973_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * _thisAdjusted = reinterpret_cast<FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FixedBitArray3_GetEnumerator_mC8DF2011FDF4656A3F539F3BA99A6475A8FF2973(_thisAdjusted, method);
	return _returnValue;
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
// System.Void Pathfinding.Poly2Tri.P2T::Triangulate(Pathfinding.Poly2Tri.Polygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_mCE7F56D88197A5E3DAF8779F12A3F2B600B98730 (Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&P2T_t8C6881577ADB1CD32D863DC9D31AEC6EA130ED16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((P2T_t8C6881577ADB1CD32D863DC9D31AEC6EA130ED16_StaticFields*)il2cpp_codegen_static_fields_for(P2T_t8C6881577ADB1CD32D863DC9D31AEC6EA130ED16_il2cpp_TypeInfo_var))->get__defaultAlgorithm_0();
		Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * L_1 = ___p0;
		P2T_Triangulate_m96F226C8906832E710E40F2556B1BE6B1D905640(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Pathfinding.Poly2Tri.TriangulationContext Pathfinding.Poly2Tri.P2T::CreateContext(Pathfinding.Poly2Tri.TriangulationAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * P2T_CreateContext_m504344268CF260BD4283FE210D18332049F2AEE0 (int32_t ___algorithm0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___algorithm0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_000d;
	}

IL_000d:
	{
		DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * L_2 = (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 *)il2cpp_codegen_object_new(DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41_il2cpp_TypeInfo_var);
		DTSweepContext__ctor_m8DCA9579D2886B8723181CD24A5ADBF4C01183F1(L_2, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Pathfinding.Poly2Tri.P2T::Triangulate(Pathfinding.Poly2Tri.TriangulationAlgorithm,Pathfinding.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_m96F226C8906832E710E40F2556B1BE6B1D905640 (int32_t ___algorithm0, RuntimeObject* ___t1, const RuntimeMethod* method)
{
	TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * V_0 = NULL;
	{
		int32_t L_0 = ___algorithm0;
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_1;
		L_1 = P2T_CreateContext_m504344268CF260BD4283FE210D18332049F2AEE0(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_2 = V_0;
		RuntimeObject* L_3 = ___t1;
		NullCheck(L_2);
		VirtActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Pathfinding.Poly2Tri.TriangulationContext::PrepareTriangulation(Pathfinding.Poly2Tri.Triangulatable) */, L_2, L_3);
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_4 = V_0;
		P2T_Triangulate_m6AEDDB08B4908F7F2545495823682C4D67A2BBCD(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.P2T::Triangulate(Pathfinding.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void P2T_Triangulate_m6AEDDB08B4908F7F2545495823682C4D67A2BBCD (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * ___tcx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_0 = ___tcx0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* Pathfinding.Poly2Tri.TriangulationAlgorithm Pathfinding.Poly2Tri.TriangulationContext::get_Algorithm() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0012;
	}

IL_0012:
	{
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_3 = ___tcx0;
		DTSweep_Triangulate_mF72DAE4AAB09297830C3D4F2272A14EADC6544EA(((DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 *)CastclassClass((RuntimeObject*)L_3, DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_0022:
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
// System.Void Pathfinding.Poly2Tri.PointOnEdgeException::.ctor(System.String,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointOnEdgeException__ctor_m07E7487D1ECDE53CF088BDF6C817366E2C37A28C (PointOnEdgeException_t2502A42C1ACB91642C07DBE2A887746F4A9EE075 * __this, String_t* ___message0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___a1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___b2, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___c3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_5 = ___a1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_9 = ___b2;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_13 = ___c3;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_14);
		String_t* L_15;
		L_15 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_12, /*hidden argument*/NULL);
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(__this, L_15, /*hidden argument*/NULL);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_16 = ___a1;
		__this->set_A_17(L_16);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_17 = ___b2;
		__this->set_B_18(L_17);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_18 = ___c3;
		__this->set_C_19(L_18);
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
// System.Void Pathfinding.Poly2Tri.Polygon::.ctor(System.Collections.Generic.IList`1<Pathfinding.Poly2Tri.PolygonPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_m835B906710C6E93E29C9C4065C378B03EBC9F577 (Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * __this, RuntimeObject* ___points0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t13B4F4722E3A4FE2057ED6B99D08007D0CCF4914_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t701BE483E50C69553BDD64BED749C2993940446D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A37693AE4F0CB4723292608BF7E972591875BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m9223A0102E161FB8A9F8F067E44C49F2934386EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m53277584AB6E7BB7792C86258D4901E64BEE3386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_mB1C5721383B7E1ADA084C578228CEEFE0627C62A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mFAC526ED1D6E99D14D2A8479F7AB98E301296875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_0 = (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *)il2cpp_codegen_object_new(List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D_il2cpp_TypeInfo_var);
		List_1__ctor_m53277584AB6E7BB7792C86258D4901E64BEE3386(L_0, /*hidden argument*/List_1__ctor_m53277584AB6E7BB7792C86258D4901E64BEE3386_RuntimeMethod_var);
		__this->set__points_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___points0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Pathfinding.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_t13B4F4722E3A4FE2057ED6B99D08007D0CCF4914_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_002d;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5389BB78303E5DA7DBFA5E26F2ACCD912979149)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17A7BA088490CA1D9307C4F7F07BDC92703EDF51)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Polygon__ctor_m835B906710C6E93E29C9C4065C378B03EBC9F577_RuntimeMethod_var)));
	}

IL_002d:
	{
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_4 = __this->get__points_0();
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_5 = __this->get__points_0();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Capacity_mB1C5721383B7E1ADA084C578228CEEFE0627C62A(L_5, /*hidden argument*/List_1_get_Capacity_mB1C5721383B7E1ADA084C578228CEEFE0627C62A_RuntimeMethod_var);
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_7 = __this->get__points_0();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_inline(L_7, /*hidden argument*/List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_RuntimeMethod_var);
		RuntimeObject* L_9 = ___points0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Pathfinding.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_t13B4F4722E3A4FE2057ED6B99D08007D0CCF4914_il2cpp_TypeInfo_var, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Max_m709673BDF5D9264E61FEBBC4CE1038752523838D(L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_10)), /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_set_Capacity_mFAC526ED1D6E99D14D2A8479F7AB98E301296875(L_4, L_11, /*hidden argument*/List_1_set_Capacity_mFAC526ED1D6E99D14D2A8479F7AB98E301296875_RuntimeMethod_var);
		V_0 = 0;
		goto IL_0077;
	}

IL_0061:
	{
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_12 = __this->get__points_0();
		RuntimeObject* L_13 = ___points0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_15;
		L_15 = InterfaceFuncInvoker1< PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Pathfinding.Poly2Tri.PolygonPoint>::get_Item(System.Int32) */, IList_1_t701BE483E50C69553BDD64BED749C2993940446D_il2cpp_TypeInfo_var, L_13, L_14);
		NullCheck(L_12);
		List_1_Add_m6A37693AE4F0CB4723292608BF7E972591875BDF(L_12, L_15, /*hidden argument*/List_1_Add_m6A37693AE4F0CB4723292608BF7E972591875BDF_RuntimeMethod_var);
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0077:
	{
		int32_t L_17 = V_0;
		RuntimeObject* L_18 = ___points0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Pathfinding.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_t13B4F4722E3A4FE2057ED6B99D08007D0CCF4914_il2cpp_TypeInfo_var, L_18);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject* L_20 = ___points0;
		NullCheck(L_20);
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_21;
		L_21 = InterfaceFuncInvoker1< PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Pathfinding.Poly2Tri.PolygonPoint>::get_Item(System.Int32) */, IList_1_t701BE483E50C69553BDD64BED749C2993940446D_il2cpp_TypeInfo_var, L_20, 0);
		RuntimeObject* L_22 = ___points0;
		RuntimeObject* L_23 = ___points0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Pathfinding.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_t13B4F4722E3A4FE2057ED6B99D08007D0CCF4914_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_22);
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_25;
		L_25 = InterfaceFuncInvoker1< PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Pathfinding.Poly2Tri.PolygonPoint>::get_Item(System.Int32) */, IList_1_t701BE483E50C69553BDD64BED749C2993940446D_il2cpp_TypeInfo_var, L_22, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)));
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_21, L_25);
		if (!L_26)
		{
			goto IL_00ba;
		}
	}
	{
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_27 = __this->get__points_0();
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_28 = __this->get__points_0();
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_inline(L_28, /*hidden argument*/List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_RuntimeMethod_var);
		NullCheck(L_27);
		List_1_RemoveAt_m9223A0102E161FB8A9F8F067E44C49F2934386EB(L_27, ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_m9223A0102E161FB8A9F8F067E44C49F2934386EB_RuntimeMethod_var);
	}

IL_00ba:
	{
		return;
	}
}
// Pathfinding.Poly2Tri.TriangulationMode Pathfinding.Poly2Tri.Polygon::get_TriangulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Polygon_get_TriangulationMode_mC7FD7C10267611B8A343A095C485AA7259435F37 (Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Void Pathfinding.Poly2Tri.Polygon::AddHole(Pathfinding.Poly2Tri.Polygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddHole_mA9473211D730A4F2601C86F731DA6967C4C51C89 (Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * __this, Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * ___poly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2BD6ACF4590B98D64639A63BF48DB452D70744C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEDDF124FAECA750FE2CDD60C31541FCC5A60DFC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * L_0 = __this->get__holes_2();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * L_1 = (List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 *)il2cpp_codegen_object_new(List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7_il2cpp_TypeInfo_var);
		List_1__ctor_mEDDF124FAECA750FE2CDD60C31541FCC5A60DFC0(L_1, /*hidden argument*/List_1__ctor_mEDDF124FAECA750FE2CDD60C31541FCC5A60DFC0_RuntimeMethod_var);
		__this->set__holes_2(L_1);
	}

IL_0016:
	{
		List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * L_2 = __this->get__holes_2();
		Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * L_3 = ___poly0;
		NullCheck(L_2);
		List_1_Add_m2BD6ACF4590B98D64639A63BF48DB452D70744C6(L_2, L_3, /*hidden argument*/List_1_Add_m2BD6ACF4590B98D64639A63BF48DB452D70744C6_RuntimeMethod_var);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.Polygon::AddPoints(System.Collections.Generic.IEnumerable`1<Pathfinding.Poly2Tri.PolygonPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddPoints_mDFE0C4E306F9D822CB55CAA45C1F78B59B4B88C7 (Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7F2E22DCD903875ECF1285A0FEF20705CE9E2471_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF4B80E7BE3F7839871573A778D50C564B96AE7CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A37693AE4F0CB4723292608BF7E972591875BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___list0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Pathfinding.Poly2Tri.PolygonPoint>::GetEnumerator() */, IEnumerable_1_t7F2E22DCD903875ECF1285A0FEF20705CE9E2471_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005a;
		}

IL_000c:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_3;
			L_3 = InterfaceFuncInvoker0< PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Pathfinding.Poly2Tri.PolygonPoint>::get_Current() */, IEnumerator_1_tF4B80E7BE3F7839871573A778D50C564B96AE7CF_il2cpp_TypeInfo_var, L_2);
			V_2 = L_3;
			PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_4 = V_2;
			PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_5 = __this->get__last_4();
			NullCheck(L_4);
			PolygonPoint_set_Previous_m83DF7038EE04D3532C751D429EBAFA1B7D61EF96_inline(L_4, L_5, /*hidden argument*/NULL);
			PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_6 = __this->get__last_4();
			if (!L_6)
			{
				goto IL_0047;
			}
		}

IL_002a:
		{
			PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_7 = V_2;
			PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_8 = __this->get__last_4();
			NullCheck(L_8);
			PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_9;
			L_9 = PolygonPoint_get_Next_mC7583EE6E74863FA0A5EB1542F4C43C06618CF08_inline(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			PolygonPoint_set_Next_mC1D0741734FF8B7C6A4DD812D08DCA50222FD94B_inline(L_7, L_9, /*hidden argument*/NULL);
			PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_10 = __this->get__last_4();
			PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_11 = V_2;
			NullCheck(L_10);
			PolygonPoint_set_Next_mC1D0741734FF8B7C6A4DD812D08DCA50222FD94B_inline(L_10, L_11, /*hidden argument*/NULL);
		}

IL_0047:
		{
			PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_12 = V_2;
			__this->set__last_4(L_12);
			List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_13 = __this->get__points_0();
			PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_14 = V_2;
			NullCheck(L_13);
			List_1_Add_m6A37693AE4F0CB4723292608BF7E972591875BDF(L_13, L_14, /*hidden argument*/List_1_Add_m6A37693AE4F0CB4723292608BF7E972591875BDF_RuntimeMethod_var);
		}

IL_005a:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_000c;
			}
		}

IL_0065:
		{
			IL2CPP_LEAVE(0x77, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_1;
			if (!L_17)
			{
				goto IL_0076;
			}
		}

IL_0070:
		{
			RuntimeObject* L_18 = V_1;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(106)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x77, IL_0077)
	}

IL_0077:
	{
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_19 = __this->get__points_0();
		NullCheck(L_19);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_20;
		L_20 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_19, 0, /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		V_0 = ((PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D *)CastclassClass((RuntimeObject*)L_20, PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D_il2cpp_TypeInfo_var));
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_21 = __this->get__last_4();
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_22 = V_0;
		NullCheck(L_21);
		PolygonPoint_set_Next_mC1D0741734FF8B7C6A4DD812D08DCA50222FD94B_inline(L_21, L_22, /*hidden argument*/NULL);
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_23 = V_0;
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_24 = __this->get__last_4();
		NullCheck(L_23);
		PolygonPoint_set_Previous_m83DF7038EE04D3532C751D429EBAFA1B7D61EF96_inline(L_23, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IList`1<Pathfinding.Poly2Tri.TriangulationPoint> Pathfinding.Poly2Tri.Polygon::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Polygon_get_Points_mE27FD854FC398836A47E3FCBA4F6E7E4AF04D539 (Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * __this, const RuntimeMethod* method)
{
	{
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_0 = __this->get__points_0();
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Pathfinding.Poly2Tri.DelaunayTriangle> Pathfinding.Poly2Tri.Polygon::get_Triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Polygon_get_Triangles_mA5E86CA574809DA1C34B34C1A17C8E57C2F763DE (Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * __this, const RuntimeMethod* method)
{
	{
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_0 = __this->get__triangles_3();
		return L_0;
	}
}
// System.Collections.Generic.IList`1<Pathfinding.Poly2Tri.Polygon> Pathfinding.Poly2Tri.Polygon::get_Holes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Polygon_get_Holes_m41DA3074DD6A701CFB5A9917F30206CD33823C10 (Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * __this, const RuntimeMethod* method)
{
	{
		List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * L_0 = __this->get__holes_2();
		return L_0;
	}
}
// System.Void Pathfinding.Poly2Tri.Polygon::AddTriangle(Pathfinding.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddTriangle_mF67505F7205B2EB55B67F1B05A2A6A6C9575779F (Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * __this, DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_0 = __this->get__triangles_3();
		DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * L_1 = ___t0;
		NullCheck(L_0);
		List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69(L_0, L_1, /*hidden argument*/List_1_Add_mAD9185CFDDE5F359A370A0F322DEAEFD75524F69_RuntimeMethod_var);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.Polygon::AddTriangles(System.Collections.Generic.IEnumerable`1<Pathfinding.Poly2Tri.DelaunayTriangle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddTriangles_mBE75602F8D650FC9B62F5647EE86473B2E538727 (Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mB87053F9146A58EAFD2CAF93BEC785DBF35E8B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_0 = __this->get__triangles_3();
		RuntimeObject* L_1 = ___list0;
		NullCheck(L_0);
		List_1_AddRange_mB87053F9146A58EAFD2CAF93BEC785DBF35E8B58(L_0, L_1, /*hidden argument*/List_1_AddRange_mB87053F9146A58EAFD2CAF93BEC785DBF35E8B58_RuntimeMethod_var);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.Polygon::ClearTriangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_ClearTriangles_mB1E8D6CB470E75A4FDEE36287E187BB2C8B904D7 (Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_0 = __this->get__triangles_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_1 = __this->get__triangles_3();
		NullCheck(L_1);
		List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A(L_1, /*hidden argument*/List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.Polygon::Prepare(Pathfinding.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_Prepare_m40F401DDE6DB931F61588A7EC2671034824EFCB9 (Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * __this, TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * ___tcx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m938318032FFA27F2A3F125F38D9E6775A0F5C644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE59C87000C4F0BF60A8930BFD0B3C4D2AFC36F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m24B8B83E42F3D05EBC0B0561BC6C968D950807CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m66E153B03D3E2092A55098105D82CE16BE987789_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m395E99A9DD5BFAED7715F9DC41E5C1DFED2F2A33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCF6506941C856F3F2895AF16DB17A904F4954499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t199B3B317EF17B94136539CBDCD21434236A1094_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_0 = __this->get__triangles_3();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_1 = __this->get__points_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_inline(L_1, /*hidden argument*/List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_RuntimeMethod_var);
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_3 = (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 *)il2cpp_codegen_object_new(List_1_t199B3B317EF17B94136539CBDCD21434236A1094_il2cpp_TypeInfo_var);
		List_1__ctor_mCF6506941C856F3F2895AF16DB17A904F4954499(L_3, L_2, /*hidden argument*/List_1__ctor_mCF6506941C856F3F2895AF16DB17A904F4954499_RuntimeMethod_var);
		__this->set__triangles_3(L_3);
		goto IL_0031;
	}

IL_0026:
	{
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_4 = __this->get__triangles_3();
		NullCheck(L_4);
		List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A(L_4, /*hidden argument*/List_1_Clear_mF1400B1DA35D7AA04BAF2E80A89E7CE73E4CED5A_RuntimeMethod_var);
	}

IL_0031:
	{
		V_0 = 0;
		goto IL_005d;
	}

IL_0038:
	{
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_5 = ___tcx0;
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_6 = __this->get__points_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_8;
		L_8 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_9 = __this->get__points_0();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_11;
		L_11 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		NullCheck(L_5);
		TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C * L_12;
		L_12 = VirtFuncInvoker2< TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * >::Invoke(6 /* Pathfinding.Poly2Tri.TriangulationConstraint Pathfinding.Poly2Tri.TriangulationContext::NewConstraint(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint) */, L_5, L_8, L_11);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_14 = V_0;
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_15 = __this->get__points_0();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_inline(L_15, /*hidden argument*/List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))))
		{
			goto IL_0038;
		}
	}
	{
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_17 = ___tcx0;
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_18 = __this->get__points_0();
		NullCheck(L_18);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_19;
		L_19 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_18, 0, /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_20 = __this->get__points_0();
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_21 = __this->get__points_0();
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_inline(L_21, /*hidden argument*/List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_RuntimeMethod_var);
		NullCheck(L_20);
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_23;
		L_23 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)), /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
		NullCheck(L_17);
		TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C * L_24;
		L_24 = VirtFuncInvoker2< TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * >::Invoke(6 /* Pathfinding.Poly2Tri.TriangulationConstraint Pathfinding.Poly2Tri.TriangulationContext::NewConstraint(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint) */, L_17, L_19, L_23);
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_25 = ___tcx0;
		NullCheck(L_25);
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_26 = L_25->get_Points_1();
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_27 = __this->get__points_0();
		NullCheck(L_26);
		List_1_AddRange_m66E153B03D3E2092A55098105D82CE16BE987789(L_26, L_27, /*hidden argument*/List_1_AddRange_m66E153B03D3E2092A55098105D82CE16BE987789_RuntimeMethod_var);
		List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * L_28 = __this->get__holes_2();
		if (!L_28)
		{
			goto IL_016a;
		}
	}
	{
		List_1_t77ACB9E259C88EB416FE0B679B0D05B441F7A1A7 * L_29 = __this->get__holes_2();
		NullCheck(L_29);
		Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3  L_30;
		L_30 = List_1_GetEnumerator_m395E99A9DD5BFAED7715F9DC41E5C1DFED2F2A33(L_29, /*hidden argument*/List_1_GetEnumerator_m395E99A9DD5BFAED7715F9DC41E5C1DFED2F2A33_RuntimeMethod_var);
		V_1 = L_30;
	}

IL_00c3:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014b;
		}

IL_00c8:
		{
			Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * L_31;
			L_31 = Enumerator_get_Current_m24B8B83E42F3D05EBC0B0561BC6C968D950807CB_inline((Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m24B8B83E42F3D05EBC0B0561BC6C968D950807CB_RuntimeMethod_var);
			V_2 = L_31;
			V_3 = 0;
			goto IL_00fc;
		}

IL_00d7:
		{
			TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_32 = ___tcx0;
			Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * L_33 = V_2;
			NullCheck(L_33);
			List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_34 = L_33->get__points_0();
			int32_t L_35 = V_3;
			NullCheck(L_34);
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_36;
			L_36 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_34, L_35, /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
			Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * L_37 = V_2;
			NullCheck(L_37);
			List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_38 = L_37->get__points_0();
			int32_t L_39 = V_3;
			NullCheck(L_38);
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_40;
			L_40 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_38, ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)), /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
			NullCheck(L_32);
			TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C * L_41;
			L_41 = VirtFuncInvoker2< TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * >::Invoke(6 /* Pathfinding.Poly2Tri.TriangulationConstraint Pathfinding.Poly2Tri.TriangulationContext::NewConstraint(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint) */, L_32, L_36, L_40);
			int32_t L_42 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00fc:
		{
			int32_t L_43 = V_3;
			Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * L_44 = V_2;
			NullCheck(L_44);
			List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_45 = L_44->get__points_0();
			NullCheck(L_45);
			int32_t L_46;
			L_46 = List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_inline(L_45, /*hidden argument*/List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_RuntimeMethod_var);
			if ((((int32_t)L_43) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)1)))))
			{
				goto IL_00d7;
			}
		}

IL_010f:
		{
			TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_47 = ___tcx0;
			Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * L_48 = V_2;
			NullCheck(L_48);
			List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_49 = L_48->get__points_0();
			NullCheck(L_49);
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_50;
			L_50 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_49, 0, /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
			Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * L_51 = V_2;
			NullCheck(L_51);
			List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_52 = L_51->get__points_0();
			Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * L_53 = V_2;
			NullCheck(L_53);
			List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_54 = L_53->get__points_0();
			NullCheck(L_54);
			int32_t L_55;
			L_55 = List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_inline(L_54, /*hidden argument*/List_1_get_Count_m4451B889FFBA2991BA3D5BCE58A88BFE04D25B19_RuntimeMethod_var);
			NullCheck(L_52);
			TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_56;
			L_56 = List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_inline(L_52, ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1)), /*hidden argument*/List_1_get_Item_mF2C1F255F4A6F394BF365E67F74CEDBC5DC114CA_RuntimeMethod_var);
			NullCheck(L_47);
			TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C * L_57;
			L_57 = VirtFuncInvoker2< TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C *, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 *, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * >::Invoke(6 /* Pathfinding.Poly2Tri.TriangulationConstraint Pathfinding.Poly2Tri.TriangulationContext::NewConstraint(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint) */, L_47, L_50, L_56);
			TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_58 = ___tcx0;
			NullCheck(L_58);
			List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_59 = L_58->get_Points_1();
			Polygon_t6E55BBEF5D8C8AE26B09ED4D68B878E9724EF9FF * L_60 = V_2;
			NullCheck(L_60);
			List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_61 = L_60->get__points_0();
			NullCheck(L_59);
			List_1_AddRange_m66E153B03D3E2092A55098105D82CE16BE987789(L_59, L_61, /*hidden argument*/List_1_AddRange_m66E153B03D3E2092A55098105D82CE16BE987789_RuntimeMethod_var);
		}

IL_014b:
		{
			bool L_62;
			L_62 = Enumerator_MoveNext_mE59C87000C4F0BF60A8930BFD0B3C4D2AFC36F39((Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mE59C87000C4F0BF60A8930BFD0B3C4D2AFC36F39_RuntimeMethod_var);
			if (L_62)
			{
				goto IL_00c8;
			}
		}

IL_0157:
		{
			IL2CPP_LEAVE(0x16A, FINALLY_015c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_015c;
	}

FINALLY_015c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m938318032FFA27F2A3F125F38D9E6775A0F5C644((Enumerator_tB35776CB1501AE9B412E0989E7B72EE2741559B3 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m938318032FFA27F2A3F125F38D9E6775A0F5C644_RuntimeMethod_var);
		IL2CPP_END_FINALLY(348)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(348)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16A, IL_016a)
	}

IL_016a:
	{
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_63 = __this->get__steinerPoints_1();
		if (!L_63)
		{
			goto IL_0186;
		}
	}
	{
		TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * L_64 = ___tcx0;
		NullCheck(L_64);
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_65 = L_64->get_Points_1();
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_66 = __this->get__steinerPoints_1();
		NullCheck(L_65);
		List_1_AddRange_m66E153B03D3E2092A55098105D82CE16BE987789(L_65, L_66, /*hidden argument*/List_1_AddRange_m66E153B03D3E2092A55098105D82CE16BE987789_RuntimeMethod_var);
	}

IL_0186:
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
// System.Void Pathfinding.Poly2Tri.PolygonPoint::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonPoint__ctor_m8BFA1F0A729EBCCA4F5E44384A2062A26B6B883A (PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * __this, double ___x0, double ___y1, const RuntimeMethod* method)
{
	{
		double L_0 = ___x0;
		double L_1 = ___y1;
		TriangulationPoint__ctor_m52688943525DDBB891D8DF38CAF4FED2F546B143(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Pathfinding.Poly2Tri.PolygonPoint Pathfinding.Poly2Tri.PolygonPoint::get_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * PolygonPoint_get_Next_mC7583EE6E74863FA0A5EB1542F4C43C06618CF08 (PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * __this, const RuntimeMethod* method)
{
	{
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_0 = __this->get_U3CNextU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Pathfinding.Poly2Tri.PolygonPoint::set_Next(Pathfinding.Poly2Tri.PolygonPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonPoint_set_Next_mC1D0741734FF8B7C6A4DD812D08DCA50222FD94B (PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * __this, PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * ___value0, const RuntimeMethod* method)
{
	{
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_0 = ___value0;
		__this->set_U3CNextU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.PolygonPoint::set_Previous(Pathfinding.Poly2Tri.PolygonPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonPoint_set_Previous_m83DF7038EE04D3532C751D429EBAFA1B7D61EF96 (PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * __this, PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * ___value0, const RuntimeMethod* method)
{
	{
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_0 = ___value0;
		__this->set_U3CPreviousU3Ek__BackingField_4(L_0);
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
// System.Void Pathfinding.Poly2Tri.TriangulationConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationConstraint__ctor_m51B97E70CC120BB45B82AB2C17C0D343206D1F1B (TriangulationConstraint_t82C9CB4672A46905F064CF01463D2794F0D8DA9C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Poly2Tri.TriangulationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext__ctor_m8C13B5218D9A9DF88CA4D9FCBF3E4521AE1D68D8 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5B3972F7A030AFF126EFAC0B626C89BCC95F55D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC4A45C26EB5820CB76A1780258B7477CA2475865_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t199B3B317EF17B94136539CBDCD21434236A1094_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t199B3B317EF17B94136539CBDCD21434236A1094 * L_0 = (List_1_t199B3B317EF17B94136539CBDCD21434236A1094 *)il2cpp_codegen_object_new(List_1_t199B3B317EF17B94136539CBDCD21434236A1094_il2cpp_TypeInfo_var);
		List_1__ctor_m5B3972F7A030AFF126EFAC0B626C89BCC95F55D9(L_0, /*hidden argument*/List_1__ctor_m5B3972F7A030AFF126EFAC0B626C89BCC95F55D9_RuntimeMethod_var);
		__this->set_Triangles_0(L_0);
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_1 = (List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D *)il2cpp_codegen_object_new(List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D_il2cpp_TypeInfo_var);
		List_1__ctor_mC4A45C26EB5820CB76A1780258B7477CA2475865(L_1, ((int32_t)200), /*hidden argument*/List_1__ctor_mC4A45C26EB5820CB76A1780258B7477CA2475865_RuntimeMethod_var);
		__this->set_Points_1(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Pathfinding.Poly2Tri.TriangulationDebugContext Pathfinding.Poly2Tri.TriangulationContext::get_DebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 * TriangulationContext_get_DebugContext_m83F45DBC68DFA610C0058FC311E04B11169D1BAF (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	{
		TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 * L_0 = __this->get_U3CDebugContextU3Ek__BackingField_2();
		return L_0;
	}
}
// Pathfinding.Poly2Tri.TriangulationMode Pathfinding.Poly2Tri.TriangulationContext::get_TriangulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_TriangulationMode_m3E972EEFFBCB7A200DB68ADA0EC181656FA57270 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTriangulationModeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Pathfinding.Poly2Tri.TriangulationContext::set_TriangulationMode(Pathfinding.Poly2Tri.TriangulationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_TriangulationMode_m476AC12A724496AE0516C187E08ED5784C208C78 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTriangulationModeU3Ek__BackingField_3(L_0);
		return;
	}
}
// Pathfinding.Poly2Tri.Triangulatable Pathfinding.Poly2Tri.TriangulationContext::get_Triangulatable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangulationContext_get_Triangulatable_m7CCE82D33D014B4F405D396C380BB145CBD61B96 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CTriangulatableU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Pathfinding.Poly2Tri.TriangulationContext::set_Triangulatable(Pathfinding.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_Triangulatable_mE5732FE7DAE2E2AC575D496F4378A3A3C39576BD (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTriangulatableU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Pathfinding.Poly2Tri.TriangulationContext::get_StepCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_StepCount_m1E788D27205D1420262FB0DFE8A304F4C6A62AC9 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStepCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Pathfinding.Poly2Tri.TriangulationContext::set_StepCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_StepCount_m357A09212D677B83382E32BD8DF867A3B46F5ED1 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStepCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.TriangulationContext::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Done_m2CB8E1517B6374B21A809D8598CB6D3F68BB2C86 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = TriangulationContext_get_StepCount_m1E788D27205D1420262FB0DFE8A304F4C6A62AC9_inline(__this, /*hidden argument*/NULL);
		TriangulationContext_set_StepCount_m357A09212D677B83382E32BD8DF867A3B46F5ED1_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.TriangulationContext::PrepareTriangulation(Pathfinding.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_PrepareTriangulation_mFC6FDD4D6FA6017C3173029A969A29B105D4F327 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, RuntimeObject* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangulatable_tCAD4C0A85B8E64A934A74DC195F4CEB0C4F4656F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___t0;
		TriangulationContext_set_Triangulatable_mE5732FE7DAE2E2AC575D496F4378A3A3C39576BD_inline(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* Pathfinding.Poly2Tri.TriangulationMode Pathfinding.Poly2Tri.Triangulatable::get_TriangulationMode() */, Triangulatable_tCAD4C0A85B8E64A934A74DC195F4CEB0C4F4656F_il2cpp_TypeInfo_var, L_1);
		TriangulationContext_set_TriangulationMode_m476AC12A724496AE0516C187E08ED5784C208C78_inline(__this, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_3 = ___t0;
		NullCheck(L_3);
		InterfaceActionInvoker1< TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * >::Invoke(0 /* System.Void Pathfinding.Poly2Tri.Triangulatable::Prepare(Pathfinding.Poly2Tri.TriangulationContext) */, Triangulatable_tCAD4C0A85B8E64A934A74DC195F4CEB0C4F4656F_il2cpp_TypeInfo_var, L_3, __this);
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.TriangulationContext::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Update_m562887E560870E858AEAB2BFBB12929C11E2A538 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.TriangulationContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Clear_m561100BDAEB32CA53F7AD294212F1A090F6160ED (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m67D6E7643A16DD9DF83400B8D4CBCE0C59906379_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7C98413AEFB72ECF9B463CBA4DE7C2E24C98567D * L_0 = __this->get_Points_1();
		NullCheck(L_0);
		List_1_Clear_m67D6E7643A16DD9DF83400B8D4CBCE0C59906379(L_0, /*hidden argument*/List_1_Clear_m67D6E7643A16DD9DF83400B8D4CBCE0C59906379_RuntimeMethod_var);
		TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 * L_1;
		L_1 = TriangulationContext_get_DebugContext_m83F45DBC68DFA610C0058FC311E04B11169D1BAF_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 * L_2;
		L_2 = TriangulationContext_get_DebugContext_m83F45DBC68DFA610C0058FC311E04B11169D1BAF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(4 /* System.Void Pathfinding.Poly2Tri.TriangulationDebugContext::Clear() */, L_2);
	}

IL_0021:
	{
		TriangulationContext_set_StepCount_m357A09212D677B83382E32BD8DF867A3B46F5ED1_inline(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pathfinding.Poly2Tri.TriangulationContext::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationContext_get_IsDebugEnabled_m261AB3285C2C43D6E664F688B220200699C000B2 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsDebugEnabledU3Ek__BackingField_6();
		return L_0;
	}
}
// Pathfinding.Poly2Tri.DTSweepDebugContext Pathfinding.Poly2Tri.TriangulationContext::get_DTDebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB * TriangulationContext_get_DTDebugContext_mB22C9B1FBED84F7CFB0AD34A8F3A3FD555907E66 (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 * L_0;
		L_0 = TriangulationContext_get_DebugContext_m83F45DBC68DFA610C0058FC311E04B11169D1BAF_inline(__this, /*hidden argument*/NULL);
		return ((DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB *)IsInstClass((RuntimeObject*)L_0, DTSweepDebugContext_t2DA2862E6542E1368EBB8B008A7302EE97AB38FB_il2cpp_TypeInfo_var));
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
// System.Void Pathfinding.Poly2Tri.TriangulationPoint::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint__ctor_m52688943525DDBB891D8DF38CAF4FED2F546B143 (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, double ___x0, double ___y1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		double L_0 = ___x0;
		__this->set_X_0(L_0);
		double L_1 = ___y1;
		__this->set_Y_1(L_1);
		return;
	}
}
// System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DTSweepConstraint> Pathfinding.Poly2Tri.TriangulationPoint::get_Edges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * TriangulationPoint_get_Edges_mDB541E87B6BDF7A7AA814C98C381952ED2F34127 (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, const RuntimeMethod* method)
{
	{
		List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * L_0 = __this->get_U3CEdgesU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Pathfinding.Poly2Tri.TriangulationPoint::set_Edges(System.Collections.Generic.List`1<Pathfinding.Poly2Tri.DTSweepConstraint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_set_Edges_mED60257E3A07FC8BF1A2DC1098105CBB83004A5E (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * L_0 = ___value0;
		__this->set_U3CEdgesU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Pathfinding.Poly2Tri.TriangulationPoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TriangulationPoint_ToString_mE586D40A192639B32511F23297704AECB55CA377 (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		double L_3 = __this->get_X_0();
		double L_4 = L_3;
		RuntimeObject * L_5 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		double L_8 = __this->get_Y_1();
		double L_9 = L_8;
		RuntimeObject * L_10 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_12;
		L_12 = String_Concat_mCA053C6F9F80091150799BA7B4EDE7E4A3262E77(L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void Pathfinding.Poly2Tri.TriangulationPoint::AddEdge(Pathfinding.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_AddEdge_m0C4479D6CA27AF066683B041886131097FEBFD6F (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m63FD2777F6CFF5EF8E7680A8F34AE9EC54601C91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD75C7E307065084EED132174CE706924E684EF81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * L_0;
		L_0 = TriangulationPoint_get_Edges_mDB541E87B6BDF7A7AA814C98C381952ED2F34127_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * L_1 = (List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 *)il2cpp_codegen_object_new(List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7_il2cpp_TypeInfo_var);
		List_1__ctor_mD75C7E307065084EED132174CE706924E684EF81(L_1, /*hidden argument*/List_1__ctor_mD75C7E307065084EED132174CE706924E684EF81_RuntimeMethod_var);
		TriangulationPoint_set_Edges_mED60257E3A07FC8BF1A2DC1098105CBB83004A5E_inline(__this, L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * L_2;
		L_2 = TriangulationPoint_get_Edges_mDB541E87B6BDF7A7AA814C98C381952ED2F34127_inline(__this, /*hidden argument*/NULL);
		DTSweepConstraint_t2452D5E8E10014ADA0D3760B9FDC47CBEDDEE5CC * L_3 = ___e0;
		NullCheck(L_2);
		List_1_Add_m63FD2777F6CFF5EF8E7680A8F34AE9EC54601C91(L_2, L_3, /*hidden argument*/List_1_Add_m63FD2777F6CFF5EF8E7680A8F34AE9EC54601C91_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Pathfinding.Poly2Tri.TriangulationPoint::get_HasEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationPoint_get_HasEdges_mFCC2F3BF650791861D016AB7C8F44DD841E82052 (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, const RuntimeMethod* method)
{
	{
		List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * L_0;
		L_0 = TriangulationPoint_get_Edges_mDB541E87B6BDF7A7AA814C98C381952ED2F34127_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((RuntimeObject*)(List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Pathfinding.Poly2Tri.TriangulationUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationUtil__cctor_mD8B632C18AEF36D5E1AE7FE7B333B3583A7DDD62 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var))->set_EPSILON_0((9.9999999999999998E-13));
		return;
	}
}
// System.Boolean Pathfinding.Poly2Tri.TriangulationUtil::SmartIncircle(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_SmartIncircle_m314FED9CC95D70544EC3B3F09EC9CA8F2D49563D (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pa0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pb1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pc2, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pd3, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	double V_18 = 0.0;
	double V_19 = 0.0;
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___pd3;
		NullCheck(L_0);
		double L_1 = L_0->get_X_0();
		V_0 = L_1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = ___pd3;
		NullCheck(L_2);
		double L_3 = L_2->get_Y_1();
		V_1 = L_3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4 = ___pa0;
		NullCheck(L_4);
		double L_5 = L_4->get_X_0();
		double L_6 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_5, (double)L_6));
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_7 = ___pa0;
		NullCheck(L_7);
		double L_8 = L_7->get_Y_1();
		double L_9 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract((double)L_8, (double)L_9));
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_10 = ___pb1;
		NullCheck(L_10);
		double L_11 = L_10->get_X_0();
		double L_12 = V_0;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_11, (double)L_12));
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_13 = ___pb1;
		NullCheck(L_13);
		double L_14 = L_13->get_Y_1();
		double L_15 = V_1;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_14, (double)L_15));
		double L_16 = V_2;
		double L_17 = V_5;
		V_6 = ((double)il2cpp_codegen_multiply((double)L_16, (double)L_17));
		double L_18 = V_4;
		double L_19 = V_3;
		V_7 = ((double)il2cpp_codegen_multiply((double)L_18, (double)L_19));
		double L_20 = V_6;
		double L_21 = V_7;
		V_8 = ((double)il2cpp_codegen_subtract((double)L_20, (double)L_21));
		double L_22 = V_8;
		if ((!(((double)L_22) <= ((double)(0.0)))))
		{
			goto IL_0059;
		}
	}
	{
		return (bool)0;
	}

IL_0059:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_23 = ___pc2;
		NullCheck(L_23);
		double L_24 = L_23->get_X_0();
		double L_25 = V_0;
		V_9 = ((double)il2cpp_codegen_subtract((double)L_24, (double)L_25));
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_26 = ___pc2;
		NullCheck(L_26);
		double L_27 = L_26->get_Y_1();
		double L_28 = V_1;
		V_10 = ((double)il2cpp_codegen_subtract((double)L_27, (double)L_28));
		double L_29 = V_9;
		double L_30 = V_3;
		V_11 = ((double)il2cpp_codegen_multiply((double)L_29, (double)L_30));
		double L_31 = V_2;
		double L_32 = V_10;
		V_12 = ((double)il2cpp_codegen_multiply((double)L_31, (double)L_32));
		double L_33 = V_11;
		double L_34 = V_12;
		V_13 = ((double)il2cpp_codegen_subtract((double)L_33, (double)L_34));
		double L_35 = V_13;
		if ((!(((double)L_35) <= ((double)(0.0)))))
		{
			goto IL_0092;
		}
	}
	{
		return (bool)0;
	}

IL_0092:
	{
		double L_36 = V_4;
		double L_37 = V_10;
		V_14 = ((double)il2cpp_codegen_multiply((double)L_36, (double)L_37));
		double L_38 = V_9;
		double L_39 = V_5;
		V_15 = ((double)il2cpp_codegen_multiply((double)L_38, (double)L_39));
		double L_40 = V_2;
		double L_41 = V_2;
		double L_42 = V_3;
		double L_43 = V_3;
		V_16 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_40, (double)L_41)), (double)((double)il2cpp_codegen_multiply((double)L_42, (double)L_43))));
		double L_44 = V_4;
		double L_45 = V_4;
		double L_46 = V_5;
		double L_47 = V_5;
		V_17 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_44, (double)L_45)), (double)((double)il2cpp_codegen_multiply((double)L_46, (double)L_47))));
		double L_48 = V_9;
		double L_49 = V_9;
		double L_50 = V_10;
		double L_51 = V_10;
		V_18 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_48, (double)L_49)), (double)((double)il2cpp_codegen_multiply((double)L_50, (double)L_51))));
		double L_52 = V_16;
		double L_53 = V_14;
		double L_54 = V_15;
		double L_55 = V_17;
		double L_56 = V_13;
		double L_57 = V_18;
		double L_58 = V_8;
		V_19 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_52, (double)((double)il2cpp_codegen_subtract((double)L_53, (double)L_54)))), (double)((double)il2cpp_codegen_multiply((double)L_55, (double)L_56)))), (double)((double)il2cpp_codegen_multiply((double)L_57, (double)L_58))));
		double L_59 = V_19;
		return (bool)((((double)L_59) > ((double)(0.0)))? 1 : 0);
	}
}
// System.Boolean Pathfinding.Poly2Tri.TriangulationUtil::InScanArea(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_InScanArea_m1DFA0B0CE104E4DDD8F3F3CD9CE295A4B71B7A23 (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pa0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pb1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pc2, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pd3, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___pd3;
		NullCheck(L_0);
		double L_1 = L_0->get_X_0();
		V_0 = L_1;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = ___pd3;
		NullCheck(L_2);
		double L_3 = L_2->get_Y_1();
		V_1 = L_3;
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4 = ___pa0;
		NullCheck(L_4);
		double L_5 = L_4->get_X_0();
		double L_6 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_5, (double)L_6));
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_7 = ___pa0;
		NullCheck(L_7);
		double L_8 = L_7->get_Y_1();
		double L_9 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract((double)L_8, (double)L_9));
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_10 = ___pb1;
		NullCheck(L_10);
		double L_11 = L_10->get_X_0();
		double L_12 = V_0;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_11, (double)L_12));
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_13 = ___pb1;
		NullCheck(L_13);
		double L_14 = L_13->get_Y_1();
		double L_15 = V_1;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_14, (double)L_15));
		double L_16 = V_2;
		double L_17 = V_5;
		V_6 = ((double)il2cpp_codegen_multiply((double)L_16, (double)L_17));
		double L_18 = V_4;
		double L_19 = V_3;
		V_7 = ((double)il2cpp_codegen_multiply((double)L_18, (double)L_19));
		double L_20 = V_6;
		double L_21 = V_7;
		V_8 = ((double)il2cpp_codegen_subtract((double)L_20, (double)L_21));
		double L_22 = V_8;
		if ((!(((double)L_22) <= ((double)(0.0)))))
		{
			goto IL_0059;
		}
	}
	{
		return (bool)0;
	}

IL_0059:
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_23 = ___pc2;
		NullCheck(L_23);
		double L_24 = L_23->get_X_0();
		double L_25 = V_0;
		V_9 = ((double)il2cpp_codegen_subtract((double)L_24, (double)L_25));
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_26 = ___pc2;
		NullCheck(L_26);
		double L_27 = L_26->get_Y_1();
		double L_28 = V_1;
		V_10 = ((double)il2cpp_codegen_subtract((double)L_27, (double)L_28));
		double L_29 = V_9;
		double L_30 = V_3;
		V_11 = ((double)il2cpp_codegen_multiply((double)L_29, (double)L_30));
		double L_31 = V_2;
		double L_32 = V_10;
		V_12 = ((double)il2cpp_codegen_multiply((double)L_31, (double)L_32));
		double L_33 = V_11;
		double L_34 = V_12;
		V_13 = ((double)il2cpp_codegen_subtract((double)L_33, (double)L_34));
		double L_35 = V_13;
		if ((!(((double)L_35) <= ((double)(0.0)))))
		{
			goto IL_0092;
		}
	}
	{
		return (bool)0;
	}

IL_0092:
	{
		return (bool)1;
	}
}
// Pathfinding.Poly2Tri.Orientation Pathfinding.Poly2Tri.TriangulationUtil::Orient2d(Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint,Pathfinding.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationUtil_Orient2d_m74197DCF51AE02C76253EAA7BD501A5523FD9ABB (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pa0, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pb1, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___pc2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___pa0;
		NullCheck(L_0);
		double L_1 = L_0->get_X_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_2 = ___pc2;
		NullCheck(L_2);
		double L_3 = L_2->get_X_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_4 = ___pb1;
		NullCheck(L_4);
		double L_5 = L_4->get_Y_1();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_6 = ___pc2;
		NullCheck(L_6);
		double L_7 = L_6->get_Y_1();
		V_0 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_1, (double)L_3)), (double)((double)il2cpp_codegen_subtract((double)L_5, (double)L_7))));
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_8 = ___pa0;
		NullCheck(L_8);
		double L_9 = L_8->get_Y_1();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_10 = ___pc2;
		NullCheck(L_10);
		double L_11 = L_10->get_Y_1();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_12 = ___pb1;
		NullCheck(L_12);
		double L_13 = L_12->get_X_0();
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_14 = ___pc2;
		NullCheck(L_14);
		double L_15 = L_14->get_X_0();
		V_1 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_9, (double)L_11)), (double)((double)il2cpp_codegen_subtract((double)L_13, (double)L_15))));
		double L_16 = V_0;
		double L_17 = V_1;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_16, (double)L_17));
		double L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		double L_19 = ((TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var))->get_EPSILON_0();
		if ((!(((double)L_18) > ((double)((-L_19))))))
		{
			goto IL_0055;
		}
	}
	{
		double L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var);
		double L_21 = ((TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_tB24F541752FD7F79B763DF3A6C8F431FFA3452C9_il2cpp_TypeInfo_var))->get_EPSILON_0();
		if ((!(((double)L_20) < ((double)L_21))))
		{
			goto IL_0055;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0055:
	{
		double L_22 = V_2;
		if ((!(((double)L_22) > ((double)(0.0)))))
		{
			goto IL_0066;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0066:
	{
		return (int32_t)(0);
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
// System.Void Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ec__Iterator1__ctor_m085670587EF6DA4377155D9AD5DC24B181831801 (U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::System.Collections.Generic.IEnumerator<bool>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CboolU3E_get_Current_m22AA688FD9711947F83DECFFFE9C466F5C2B0680 (U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnumerateU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m8FDA9BB926E6F312888D659D6507FB12ED9490D8 (U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_U24current_2();
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.IEnumerator Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ec__Iterator1_System_Collections_IEnumerable_GetEnumerator_mE46418B20A74A10B4E92421C93846498B496E67A (U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CboolU3E_GetEnumerator_mB0C6E9457B6BD2DF89E183E6A09589B9F3A6A438(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Boolean> Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::System.Collections.Generic.IEnumerable<bool>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ec__Iterator1_System_Collections_Generic_IEnumerableU3CboolU3E_GetEnumerator_mB0C6E9457B6BD2DF89E183E6A09589B9F3A6A438 (U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_1();
		int32_t L_1;
		L_1 = Interlocked_CompareExchange_m7EBFB07A7B97F6413261B302A509C280E5E11400((int32_t*)L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * L_2 = (U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 *)il2cpp_codegen_object_new(U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6_il2cpp_TypeInfo_var);
		U3CEnumerateU3Ec__Iterator1__ctor_m085670587EF6DA4377155D9AD5DC24B181831801(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * L_3 = V_0;
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D  L_4 = __this->get_U3CU3Ef__this_3();
		NullCheck(L_3);
		L_3->set_U3CU3Ef__this_3(L_4);
		U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ec__Iterator1_MoveNext_mAD6FCE8DF1A1CBA6D4A2A0301BFE5120147811A1 (U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_1();
		V_0 = L_0;
		__this->set_U24PC_1((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0050;
			}
		}
	}
	{
		goto IL_0071;
	}

IL_0021:
	{
		__this->set_U3CiU3E__0_0(0);
		goto IL_005e;
	}

IL_002d:
	{
		FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D * L_2 = __this->get_address_of_U3CU3Ef__this_3();
		int32_t L_3 = __this->get_U3CiU3E__0_0();
		bool L_4;
		L_4 = FixedBitArray3_get_Item_m7681671CD7252D87A844399EEEEE930093ACF1C2((FixedBitArray3_t9E8A6525B3EC4CF09E0B5A1EB9D4DBD4633C5E7D *)L_2, L_3, /*hidden argument*/NULL);
		__this->set_U24current_2(L_4);
		__this->set_U24PC_1(1);
		goto IL_0073;
	}

IL_0050:
	{
		int32_t L_5 = __this->get_U3CiU3E__0_0();
		__this->set_U3CiU3E__0_0(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
	}

IL_005e:
	{
		int32_t L_6 = __this->get_U3CiU3E__0_0();
		if ((((int32_t)L_6) < ((int32_t)3)))
		{
			goto IL_002d;
		}
	}
	{
		__this->set_U24PC_1((-1));
	}

IL_0071:
	{
		return (bool)0;
	}

IL_0073:
	{
		return (bool)1;
	}
}
// System.Void Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ec__Iterator1_Dispose_m11E1A365A0C53D56310677A7BF81291AE50B6E92 (U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24PC_1((-1));
		return;
	}
}
// System.Void Pathfinding.Poly2Tri.FixedBitArray3/<Enumerate>c__Iterator1::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ec__Iterator1_Reset_m887EE3EBA6A3515A8361E49D19F8A3142D27062E (U3CEnumerateU3Ec__Iterator1_t24F8B242E34B8105BF460B765BA0E81BF3D5F9A6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnumerateU3Ec__Iterator1_Reset_m887EE3EBA6A3515A8361E49D19F8A3142D27062E_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * AdvancingFront_FindSearchNode_mA0268716FB031157D0B712B0BC691586B556DBFE_inline (AdvancingFront_tA85195145C4C610A930253B5A7BAF760C50467E2 * __this, double ___x0, const RuntimeMethod* method)
{
	{
		AdvancingFrontNode_t48C175FF67CAC8A81EE44CB88DA8D209BEBC5764 * L_0 = __this->get_Search_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_TriangulationMode_m3E972EEFFBCB7A200DB68ADA0EC181656FA57270_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTriangulationModeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * TriangulationPoint_get_Edges_mDB541E87B6BDF7A7AA814C98C381952ED2F34127_inline (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, const RuntimeMethod* method)
{
	{
		List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * L_0 = __this->get_U3CEdgesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TriangulationContext_get_IsDebugEnabled_m261AB3285C2C43D6E664F688B220200699C000B2_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsDebugEnabledU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DelaunayTriangle_get_IsInterior_m344265E702D66D413E43BBAC3BD8D8F54C05F009_inline (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsInteriorU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DelaunayTriangle_set_IsInterior_mC5ADB92E779C6CA4640DEE778FED5A0E7DA17963_inline (DelaunayTriangle_t03385ACFA0832AD2CAEAC71119B37625C525E8D5 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsInteriorU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TriangulationContext_get_Triangulatable_m7CCE82D33D014B4F405D396C380BB145CBD61B96_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CTriangulatableU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DTSweepContext_get_Tail_mA688B0DD53BA5E6A3D785B38FB2F2E207465ACBC_inline (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method)
{
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = __this->get_U3CTailU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * DTSweepContext_get_Head_m6DB92BA766D2984CC17EDDFFE0450FF2FAEFF295_inline (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, const RuntimeMethod* method)
{
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = __this->get_U3CHeadU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DTSweepContext_set_Head_mA7E0C871A78F70D806D5F964EBE0630F207E1E0E_inline (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___value0, const RuntimeMethod* method)
{
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___value0;
		__this->set_U3CHeadU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DTSweepContext_set_Tail_m50F6518217B69B24720174F570A0BFDA6D588AE5_inline (DTSweepContext_tA1D504E23BAB3362908C440126DC0FE2A4A52B41 * __this, TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * ___value0, const RuntimeMethod* method)
{
	{
		TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * L_0 = ___value0;
		__this->set_U3CTailU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PolygonPoint_set_Previous_m83DF7038EE04D3532C751D429EBAFA1B7D61EF96_inline (PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * __this, PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * ___value0, const RuntimeMethod* method)
{
	{
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_0 = ___value0;
		__this->set_U3CPreviousU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * PolygonPoint_get_Next_mC7583EE6E74863FA0A5EB1542F4C43C06618CF08_inline (PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * __this, const RuntimeMethod* method)
{
	{
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_0 = __this->get_U3CNextU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PolygonPoint_set_Next_mC1D0741734FF8B7C6A4DD812D08DCA50222FD94B_inline (PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * __this, PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * ___value0, const RuntimeMethod* method)
{
	{
		PolygonPoint_tAD192545DBDE9517754F09E423A34838499BCD4D * L_0 = ___value0;
		__this->set_U3CNextU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_StepCount_m1E788D27205D1420262FB0DFE8A304F4C6A62AC9_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStepCountU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_StepCount_m357A09212D677B83382E32BD8DF867A3B46F5ED1_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStepCountU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_Triangulatable_mE5732FE7DAE2E2AC575D496F4378A3A3C39576BD_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTriangulatableU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_TriangulationMode_m476AC12A724496AE0516C187E08ED5784C208C78_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTriangulationModeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 * TriangulationContext_get_DebugContext_m83F45DBC68DFA610C0058FC311E04B11169D1BAF_inline (TriangulationContext_t30787048FC8238138F974D08B8A5E31C55676015 * __this, const RuntimeMethod* method)
{
	{
		TriangulationDebugContext_t8CFF0E0F60D69E82832B4DB14F0F9D5CDED71077 * L_0 = __this->get_U3CDebugContextU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationPoint_set_Edges_mED60257E3A07FC8BF1A2DC1098105CBB83004A5E_inline (TriangulationPoint_t80DA90A2FADB4729AF91F1BA3451CEBEA732FB52 * __this, List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t13B7EE38D6A75583A4C781C433F038145AA44FF7 * L_0 = ___value0;
		__this->set_U3CEdgesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
