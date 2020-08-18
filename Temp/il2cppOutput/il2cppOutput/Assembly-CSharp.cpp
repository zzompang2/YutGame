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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// BlockScript
struct BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41;
// GameManager
struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89;
// MouseManager
struct MouseManager_t44AAE39961C8EA4CE180241818F7D60D1BB5F207;
// PieceScript
struct PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t3D4152882C54B77C712688E910390D5C8E030463;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// YutCheckZone
struct YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A;
// YutScript
struct YutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3D4152882C54B77C712688E910390D5C8E030463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____5C1905CCC97DE06AA28E0F7866885E4677174BE0_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00A472DAFFB10C0636057712ED51C4AF76BE5AF4;
IL2CPP_EXTERN_C String_t* _stringLiteral0250D6F84A9461901B070CA8AF864FD6BE0E7781;
IL2CPP_EXTERN_C String_t* _stringLiteral0F2CF250DFB21DEBB55A4527DE3212FEB1C5313F;
IL2CPP_EXTERN_C String_t* _stringLiteral11600C9ADA779D9DCDCBEE5033065DB7C0589943;
IL2CPP_EXTERN_C String_t* _stringLiteral1D7ED6A806E6B1808D4A14637642982276D428DA;
IL2CPP_EXTERN_C String_t* _stringLiteral332C372FE86DDB00620E59E6CBC9FB36C3E8BDCA;
IL2CPP_EXTERN_C String_t* _stringLiteral34966FF0868D91662EB705289B2A2EAF601C2E29;
IL2CPP_EXTERN_C String_t* _stringLiteral3F4CEF8A8F8F0C7444F5F51F0D839BC46DCAEA64;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF51EDF6F8D27A95E4D7CAD2E901C222942E5C1;
IL2CPP_EXTERN_C String_t* _stringLiteral63B5B8992CBBF3CFCA8E99C172A1B43146FA4F17;
IL2CPP_EXTERN_C String_t* _stringLiteral72FC4BA3FDA11FB834DED9CDCCA065BDE60B5A85;
IL2CPP_EXTERN_C String_t* _stringLiteral8F4DC1B65B470BE360A4216491FD75DA2789AE59;
IL2CPP_EXTERN_C String_t* _stringLiteral9C457561AD474392F44268ECB0F404BB6E10F514;
IL2CPP_EXTERN_C String_t* _stringLiteral9D214CA9EAB4F267C1F6574F929540F8B02842F4;
IL2CPP_EXTERN_C String_t* _stringLiteralB3D24A0F2F7DDECC6094B79C71460A740EDC1E08;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC89E68CE3BE454804F0DDB343C0B28E41A389B;
IL2CPP_EXTERN_C String_t* _stringLiteralC36DB92E2BC184325C7B79A9D24DBD536FBA0FAA;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DF3BBE10F4D3C046158A5818A923018629FC3A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE8B6C7871EABD106B00EA788CDAC1CE9FA11024;
IL2CPP_EXTERN_C String_t* _stringLiteralE6822ADE2F29C5057D5B114469027652E5A71EA1;
IL2CPP_EXTERN_C String_t* _stringLiteralE7560FC61C5EE163CF0A3102DCD1FFD7476A937C;
IL2CPP_EXTERN_C String_t* _stringLiteralFB1134ADBE10071C1827E8EE1BD4E3BD3D4C70A9;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF998290EE501F2F7CA8A67995AAE77B29547C3C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2423588CAA3D28740E46D88133E7B22998378380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisYutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A_m7838330C22D7698D451A1B361DA02EDFFBD369E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF3F7C6A691B033A8369791D6DDBFE927804CDAB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t GameManager_ClearBlockColor_m62C1772A9CBB32634811C3435C384216A57C79CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_MovePiece_m8A0E2B54E5E4CC2017FFB451CB6E991BAAC1E482_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_NextTurn_mD7727F5FA52F8A71DC4F6414D1377E0C489C6AA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_SetResultText_m2C292EDFC8DD61AD1B711AF6550129BB819B5729_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Start_mD77CCDBF1DA8EC5C3AE7ED955DE4E7F54B79C88E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Update_m07DC32583BF09EB71183725B7B95FA7B4716988A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager__cctor_m050E3CF18ED59B480951819A6C68DEA9C0EB1D45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager__ctor_mF7F1107D38DE91EB8A57C1C3BB1A932C50CD9693_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseManager_SelectObject_m0F35E459257F2A3BC115B06E702A4469DC8D58BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PieceScript_CleanColor_mCE083A41B0AC3B7A24117DFCA0A5173A61E62485_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PieceScript_Coloring_m50378529DE48E057EED099AD006FBC3458384674_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PieceScript_GetChild_m7329F566535A77D003DBFE88CFE9A54D8DD038C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PieceScript_InitPosition_m8C6D60AFD50F48BB8EDB15B98FEBD552D99C0A63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PieceScript_Move_m78662BC777E873F712858D87E2F3E9422AEA19A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PieceScript_Move_mF755AE77DB6C287FBCF5438794105C2301A01A79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PieceScript__ctor_m6D820FD467E21A2B64AF12E7D4BBEF5F830E5B59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YutCheckZone_OnTriggerEnter_m1D395C211B5D3CFC28AF9039771801C722358FDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YutCheckZone_OnTriggerStay_m36CC3694FA7ADE793FE2BFD19C4F155AED353C43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YutCheckZone_ResetYut_m15613D8AF8F16CBA6ABE47E62927B29418688F67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YutCheckZone_Update_m9ABF09A73CC5681A074F897962AE6459DD2F0D86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YutCheckZone__cctor_mAC7FCD014F5624F2D0EF12B068C704855DFD341A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YutCheckZone__ctor_m89CA1D8895E3F4B0F73305433199491B532E8B22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YutScript_Start_m6669F0F62D93C02AA0E4CC2E9AE488FD202F2707_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t YutScript_throwYut_mD58D5761D7B78AB9DB7F042BDC59FB39157E68F9_MetadataUsageId;

struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t3D4152882C54B77C712688E910390D5C8E030463  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463, ____items_1)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3D4152882C54B77C712688E910390D5C8E030463_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3D4152882C54B77C712688E910390D5C8E030463_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
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

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D16
struct  __StaticArrayInitTypeSizeU3D16_t6EB025C40E80FDD74132718092D59E92446BD13D 
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
		uint8_t __StaticArrayInitTypeSizeU3D16_t6EB025C40E80FDD74132718092D59E92446BD13D__padding[16];
	};

public:
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


// System.Collections.Generic.List`1_Enumerator<System.Int32>
struct  Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___list_0)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_list_0() const { return ___list_0; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
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


// System.Collections.Generic.List`1_Enumerator<UnityEngine.GameObject>
struct  Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3D4152882C54B77C712688E910390D5C8E030463 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60, ___list_0)); }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 * get_list_0() const { return ___list_0; }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3D4152882C54B77C712688E910390D5C8E030463 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60, ___current_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_current_3() const { return ___current_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D16 <PrivateImplementationDetails>::5C1905CCC97DE06AA28E0F7866885E4677174BE0
	__StaticArrayInitTypeSizeU3D16_t6EB025C40E80FDD74132718092D59E92446BD13D  ___5C1905CCC97DE06AA28E0F7866885E4677174BE0_0;

public:
	inline static int32_t get_offset_of_U35C1905CCC97DE06AA28E0F7866885E4677174BE0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A_StaticFields, ___5C1905CCC97DE06AA28E0F7866885E4677174BE0_0)); }
	inline __StaticArrayInitTypeSizeU3D16_t6EB025C40E80FDD74132718092D59E92446BD13D  get_U35C1905CCC97DE06AA28E0F7866885E4677174BE0_0() const { return ___5C1905CCC97DE06AA28E0F7866885E4677174BE0_0; }
	inline __StaticArrayInitTypeSizeU3D16_t6EB025C40E80FDD74132718092D59E92446BD13D * get_address_of_U35C1905CCC97DE06AA28E0F7866885E4677174BE0_0() { return &___5C1905CCC97DE06AA28E0F7866885E4677174BE0_0; }
	inline void set_U35C1905CCC97DE06AA28E0F7866885E4677174BE0_0(__StaticArrayInitTypeSizeU3D16_t6EB025C40E80FDD74132718092D59E92446BD13D  value)
	{
		___5C1905CCC97DE06AA28E0F7866885E4677174BE0_0 = value;
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

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// BlockScript
struct  BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean BlockScript::isMovable
	bool ___isMovable_4;
	// System.Int32 BlockScript::yutResult
	int32_t ___yutResult_5;
	// PieceScript BlockScript::whosOn
	PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * ___whosOn_6;

public:
	inline static int32_t get_offset_of_isMovable_4() { return static_cast<int32_t>(offsetof(BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41, ___isMovable_4)); }
	inline bool get_isMovable_4() const { return ___isMovable_4; }
	inline bool* get_address_of_isMovable_4() { return &___isMovable_4; }
	inline void set_isMovable_4(bool value)
	{
		___isMovable_4 = value;
	}

	inline static int32_t get_offset_of_yutResult_5() { return static_cast<int32_t>(offsetof(BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41, ___yutResult_5)); }
	inline int32_t get_yutResult_5() const { return ___yutResult_5; }
	inline int32_t* get_address_of_yutResult_5() { return &___yutResult_5; }
	inline void set_yutResult_5(int32_t value)
	{
		___yutResult_5 = value;
	}

	inline static int32_t get_offset_of_whosOn_6() { return static_cast<int32_t>(offsetof(BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41, ___whosOn_6)); }
	inline PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * get_whosOn_6() const { return ___whosOn_6; }
	inline PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 ** get_address_of_whosOn_6() { return &___whosOn_6; }
	inline void set_whosOn_6(PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * value)
	{
		___whosOn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___whosOn_6), (void*)value);
	}
};


// GameManager
struct  GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject[] GameManager::wayBlocks
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___wayBlocks_4;
	// UnityEngine.UI.Text GameManager::resultText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___resultText_5;
	// System.Boolean GameManager::isMoving2
	bool ___isMoving2_11;
	// System.String[] GameManager::yutResultText
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___yutResultText_12;
	// UnityEngine.GameObject GameManager::selectedPiece
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___selectedPiece_14;
	// UnityEngine.GameObject GameManager::selectedBlock
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___selectedBlock_15;

public:
	inline static int32_t get_offset_of_wayBlocks_4() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___wayBlocks_4)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_wayBlocks_4() const { return ___wayBlocks_4; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_wayBlocks_4() { return &___wayBlocks_4; }
	inline void set_wayBlocks_4(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___wayBlocks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wayBlocks_4), (void*)value);
	}

	inline static int32_t get_offset_of_resultText_5() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___resultText_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_resultText_5() const { return ___resultText_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_resultText_5() { return &___resultText_5; }
	inline void set_resultText_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___resultText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultText_5), (void*)value);
	}

	inline static int32_t get_offset_of_isMoving2_11() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___isMoving2_11)); }
	inline bool get_isMoving2_11() const { return ___isMoving2_11; }
	inline bool* get_address_of_isMoving2_11() { return &___isMoving2_11; }
	inline void set_isMoving2_11(bool value)
	{
		___isMoving2_11 = value;
	}

	inline static int32_t get_offset_of_yutResultText_12() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___yutResultText_12)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_yutResultText_12() const { return ___yutResultText_12; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_yutResultText_12() { return &___yutResultText_12; }
	inline void set_yutResultText_12(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___yutResultText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yutResultText_12), (void*)value);
	}

	inline static int32_t get_offset_of_selectedPiece_14() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___selectedPiece_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_selectedPiece_14() const { return ___selectedPiece_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_selectedPiece_14() { return &___selectedPiece_14; }
	inline void set_selectedPiece_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___selectedPiece_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedPiece_14), (void*)value);
	}

	inline static int32_t get_offset_of_selectedBlock_15() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___selectedBlock_15)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_selectedBlock_15() const { return ___selectedBlock_15; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_selectedBlock_15() { return &___selectedBlock_15; }
	inline void set_selectedBlock_15(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___selectedBlock_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedBlock_15), (void*)value);
	}
};

struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields
{
public:
	// UnityEngine.UI.Text GameManager::whosTurnText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___whosTurnText_6;
	// UnityEngine.GameObject GameManager::throwBtn
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___throwBtn_7;
	// System.Collections.Generic.List`1<System.Int32> GameManager::yutResultList
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___yutResultList_8;
	// System.Boolean GameManager::gameOver
	bool ___gameOver_9;
	// System.Boolean GameManager::isMoving
	bool ___isMoving_10;
	// System.Int32 GameManager::whichTeamTurn
	int32_t ___whichTeamTurn_13;

public:
	inline static int32_t get_offset_of_whosTurnText_6() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___whosTurnText_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_whosTurnText_6() const { return ___whosTurnText_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_whosTurnText_6() { return &___whosTurnText_6; }
	inline void set_whosTurnText_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___whosTurnText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___whosTurnText_6), (void*)value);
	}

	inline static int32_t get_offset_of_throwBtn_7() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___throwBtn_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_throwBtn_7() const { return ___throwBtn_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_throwBtn_7() { return &___throwBtn_7; }
	inline void set_throwBtn_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___throwBtn_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___throwBtn_7), (void*)value);
	}

	inline static int32_t get_offset_of_yutResultList_8() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___yutResultList_8)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_yutResultList_8() const { return ___yutResultList_8; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_yutResultList_8() { return &___yutResultList_8; }
	inline void set_yutResultList_8(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___yutResultList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yutResultList_8), (void*)value);
	}

	inline static int32_t get_offset_of_gameOver_9() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___gameOver_9)); }
	inline bool get_gameOver_9() const { return ___gameOver_9; }
	inline bool* get_address_of_gameOver_9() { return &___gameOver_9; }
	inline void set_gameOver_9(bool value)
	{
		___gameOver_9 = value;
	}

	inline static int32_t get_offset_of_isMoving_10() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___isMoving_10)); }
	inline bool get_isMoving_10() const { return ___isMoving_10; }
	inline bool* get_address_of_isMoving_10() { return &___isMoving_10; }
	inline void set_isMoving_10(bool value)
	{
		___isMoving_10 = value;
	}

	inline static int32_t get_offset_of_whichTeamTurn_13() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___whichTeamTurn_13)); }
	inline int32_t get_whichTeamTurn_13() const { return ___whichTeamTurn_13; }
	inline int32_t* get_address_of_whichTeamTurn_13() { return &___whichTeamTurn_13; }
	inline void set_whichTeamTurn_13(int32_t value)
	{
		___whichTeamTurn_13 = value;
	}
};


// MouseManager
struct  MouseManager_t44AAE39961C8EA4CE180241818F7D60D1BB5F207  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject MouseManager::selectedObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___selectedObject_4;

public:
	inline static int32_t get_offset_of_selectedObject_4() { return static_cast<int32_t>(offsetof(MouseManager_t44AAE39961C8EA4CE180241818F7D60D1BB5F207, ___selectedObject_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_selectedObject_4() const { return ___selectedObject_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_selectedObject_4() { return &___selectedObject_4; }
	inline void set_selectedObject_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___selectedObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedObject_4), (void*)value);
	}
};


// PieceScript
struct  PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform[] PieceScript::waypoints
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ___waypoints_4;
	// System.Int32 PieceScript::curWaypoint
	int32_t ___curWaypoint_5;
	// System.Int32 PieceScript::moveCount
	int32_t ___moveCount_6;
	// System.Int32 PieceScript::teamNumber
	int32_t ___teamNumber_7;
	// System.Single PieceScript::moveSpeed
	float ___moveSpeed_8;
	// UnityEngine.Vector3 PieceScript::originPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___originPosition_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PieceScript::childPieces
	List_1_t3D4152882C54B77C712688E910390D5C8E030463 * ___childPieces_10;

public:
	inline static int32_t get_offset_of_waypoints_4() { return static_cast<int32_t>(offsetof(PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6, ___waypoints_4)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get_waypoints_4() const { return ___waypoints_4; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of_waypoints_4() { return &___waypoints_4; }
	inline void set_waypoints_4(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		___waypoints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waypoints_4), (void*)value);
	}

	inline static int32_t get_offset_of_curWaypoint_5() { return static_cast<int32_t>(offsetof(PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6, ___curWaypoint_5)); }
	inline int32_t get_curWaypoint_5() const { return ___curWaypoint_5; }
	inline int32_t* get_address_of_curWaypoint_5() { return &___curWaypoint_5; }
	inline void set_curWaypoint_5(int32_t value)
	{
		___curWaypoint_5 = value;
	}

	inline static int32_t get_offset_of_moveCount_6() { return static_cast<int32_t>(offsetof(PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6, ___moveCount_6)); }
	inline int32_t get_moveCount_6() const { return ___moveCount_6; }
	inline int32_t* get_address_of_moveCount_6() { return &___moveCount_6; }
	inline void set_moveCount_6(int32_t value)
	{
		___moveCount_6 = value;
	}

	inline static int32_t get_offset_of_teamNumber_7() { return static_cast<int32_t>(offsetof(PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6, ___teamNumber_7)); }
	inline int32_t get_teamNumber_7() const { return ___teamNumber_7; }
	inline int32_t* get_address_of_teamNumber_7() { return &___teamNumber_7; }
	inline void set_teamNumber_7(int32_t value)
	{
		___teamNumber_7 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_8() { return static_cast<int32_t>(offsetof(PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6, ___moveSpeed_8)); }
	inline float get_moveSpeed_8() const { return ___moveSpeed_8; }
	inline float* get_address_of_moveSpeed_8() { return &___moveSpeed_8; }
	inline void set_moveSpeed_8(float value)
	{
		___moveSpeed_8 = value;
	}

	inline static int32_t get_offset_of_originPosition_9() { return static_cast<int32_t>(offsetof(PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6, ___originPosition_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_originPosition_9() const { return ___originPosition_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_originPosition_9() { return &___originPosition_9; }
	inline void set_originPosition_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___originPosition_9 = value;
	}

	inline static int32_t get_offset_of_childPieces_10() { return static_cast<int32_t>(offsetof(PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6, ___childPieces_10)); }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 * get_childPieces_10() const { return ___childPieces_10; }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 ** get_address_of_childPieces_10() { return &___childPieces_10; }
	inline void set_childPieces_10(List_1_t3D4152882C54B77C712688E910390D5C8E030463 * value)
	{
		___childPieces_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childPieces_10), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// YutCheckZone
struct  YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean YutCheckZone::isThrowing
	bool ___isThrowing_5;
	// System.Int32[] YutCheckZone::yutResult
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___yutResult_6;
	// System.Diagnostics.Stopwatch YutCheckZone::stopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___stopwatch_7;

public:
	inline static int32_t get_offset_of_isThrowing_5() { return static_cast<int32_t>(offsetof(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A, ___isThrowing_5)); }
	inline bool get_isThrowing_5() const { return ___isThrowing_5; }
	inline bool* get_address_of_isThrowing_5() { return &___isThrowing_5; }
	inline void set_isThrowing_5(bool value)
	{
		___isThrowing_5 = value;
	}

	inline static int32_t get_offset_of_yutResult_6() { return static_cast<int32_t>(offsetof(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A, ___yutResult_6)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_yutResult_6() const { return ___yutResult_6; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_yutResult_6() { return &___yutResult_6; }
	inline void set_yutResult_6(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___yutResult_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yutResult_6), (void*)value);
	}

	inline static int32_t get_offset_of_stopwatch_7() { return static_cast<int32_t>(offsetof(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A, ___stopwatch_7)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_stopwatch_7() const { return ___stopwatch_7; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_stopwatch_7() { return &___stopwatch_7; }
	inline void set_stopwatch_7(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___stopwatch_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stopwatch_7), (void*)value);
	}
};

struct YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_StaticFields
{
public:
	// System.Int32 YutCheckZone::remainedThrow
	int32_t ___remainedThrow_4;

public:
	inline static int32_t get_offset_of_remainedThrow_4() { return static_cast<int32_t>(offsetof(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_StaticFields, ___remainedThrow_4)); }
	inline int32_t get_remainedThrow_4() const { return ___remainedThrow_4; }
	inline int32_t* get_address_of_remainedThrow_4() { return &___remainedThrow_4; }
	inline void set_remainedThrow_4(int32_t value)
	{
		___remainedThrow_4 = value;
	}
};


// YutScript
struct  YutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Rigidbody YutScript::rigid
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rigid_4;
	// System.Int32 YutScript::yutId
	int32_t ___yutId_5;
	// System.Boolean YutScript::throwable
	bool ___throwable_6;

public:
	inline static int32_t get_offset_of_rigid_4() { return static_cast<int32_t>(offsetof(YutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A, ___rigid_4)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rigid_4() const { return ___rigid_4; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rigid_4() { return &___rigid_4; }
	inline void set_rigid_4(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rigid_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigid_4), (void*)value);
	}

	inline static int32_t get_offset_of_yutId_5() { return static_cast<int32_t>(offsetof(YutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A, ___yutId_5)); }
	inline int32_t get_yutId_5() const { return ___yutId_5; }
	inline int32_t* get_address_of_yutId_5() { return &___yutId_5; }
	inline void set_yutId_5(int32_t value)
	{
		___yutId_5 = value;
	}

	inline static int32_t get_offset_of_throwable_6() { return static_cast<int32_t>(offsetof(YutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A, ___throwable_6)); }
	inline bool get_throwable_6() const { return ___throwable_6; }
	inline bool* get_address_of_throwable_6() { return &___throwable_6; }
	inline void set_throwable_6(bool value)
	{
		___throwable_6 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
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
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * m_Items[1];

public:
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_gshared_inline (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_gshared (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_gshared (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInParent_TisRuntimeObject_mC642781007FB6F6A631C2190F9BFA21FD4CDC905_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC (int32_t ___button0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_gshared_inline)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53 (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m000FC36D038952F8AC5E3E562E7D39BAA8D1E287 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___hitInfo2, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PieceScript>()
inline PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void GameManager::ClearBlockColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ClearBlockColor_m62C1772A9CBB32634811C3435C384216A57C79CF (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void PieceScript::CleanColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_CleanColor_mCE083A41B0AC3B7A24117DFCA0A5173A61E62485 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<BlockScript>()
inline BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41 * GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.Void GameManager::MovePiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_MovePiece_m8A0E2B54E5E4CC2017FFB451CB6E991BAAC1E482 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void GameManager::NextTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NextTurn_mD7727F5FA52F8A71DC4F6414D1377E0C489C6AA1 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_inline (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *, const RuntimeMethod*))Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_gshared_inline)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7 (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *, const RuntimeMethod*))Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892 (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *, const RuntimeMethod*))Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_gshared)(__this, method);
}
// System.Void GameManager::SetResultText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetResultText_m2C292EDFC8DD61AD1B711AF6550129BB819B5729 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_gray_m11EEED9092A8D949D3326611C7137334B746DF09 (const RuntimeMethod* method);
// System.Void PieceScript::Move(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_Move_mF755AE77DB6C287FBCF5438794105C2301A01A79 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, int32_t ___yutResult0, const RuntimeMethod* method);
// System.Void PieceScript::InitPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_InitPosition_m8C6D60AFD50F48BB8EDB15B98FEBD552D99C0A63 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, const RuntimeMethod* method);
// System.Void PieceScript::GetChild(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_GetChild_m7329F566535A77D003DBFE88CFE9A54D8DD038C0 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___child0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
inline bool List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCE618579F667A62D15CB74CEF76147136EB2D495 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray0, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void MouseManager::SelectObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseManager_SelectObject_m0F35E459257F2A3BC115B06E702A4469DC8D58BD (MouseManager_t44AAE39961C8EA4CE180241818F7D60D1BB5F207 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, const RuntimeMethod* method);
// System.Void MouseManager::ClearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseManager_ClearSelection_m176574FA6D0D95378A9DF6E6171750543273205E (MouseManager_t44AAE39961C8EA4CE180241818F7D60D1BB5F207 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void PieceScript::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_Move_m78662BC777E873F712858D87E2F3E9422AEA19A3 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_MoveTowards_mA288BB5AA73DDA9CA76EDC11F339BAFDA1E4FF45 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___current0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60  List_1_GetEnumerator_mF3F7C6A691B033A8369791D6DDBFE927804CDAB6 (List_1_t3D4152882C54B77C712688E910390D5C8E030463 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60  (*) (List_1_t3D4152882C54B77C712688E910390D5C8E030463 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Enumerator_get_Current_m2423588CAA3D28740E46D88133E7B22998378380_inline (Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF998290EE501F2F7CA8A67995AAE77B29547C3C8 (Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812 (Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6 (List_1_t3D4152882C54B77C712688E910390D5C8E030463 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D4152882C54B77C712688E910390D5C8E030463 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA (List_1_t3D4152882C54B77C712688E910390D5C8E030463 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3D4152882C54B77C712688E910390D5C8E030463 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void YutCheckZone::ResetYut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YutCheckZone_ResetYut_m15613D8AF8F16CBA6ABE47E62927B29418688F67 (YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF (float ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_m8AE20980FC1C80DFAC27FA7E2BAFC88E94B839B3 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<YutScript>()
inline YutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A * GameObject_GetComponentInParent_TisYutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A_m7838330C22D7698D451A1B361DA02EDFFBD369E6 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  YutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mC642781007FB6F6A631C2190F9BFA21FD4CDC905_gshared)(__this, method);
}
// System.Int32 YutCheckZone::SumYutResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YutCheckZone_SumYutResult_mC66AFB3A566E84E18FC7201388774FB524185117 (YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, ___item0, method);
}
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___eulers0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m1839DCBC87B01EFD0B4936E84E503E38774B962C (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mC8140D90B806634A733624F671C45AD7CDBEDB38 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___force0, const RuntimeMethod* method);
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
// System.Void BlockScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockScript__ctor_m45FF298DA218C7878E53EB2480BA9B81B9065A6F (BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_mD77CCDBF1DA8EC5C3AE7ED955DE4E7F54B79C88E (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Start_mD77CCDBF1DA8EC5C3AE7ED955DE4E7F54B79C88E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throwBtn = GameObject.Find("ThrowBtn");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral332C372FE86DDB00620E59E6CBC9FB36C3E8BDCA, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_throwBtn_7(L_0);
		// whosTurnText = GameObject.Find("whosTurnText").GetComponent<Text>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralE6822ADE2F29C5057D5B114469027652E5A71EA1, /*hidden argument*/NULL);
		NullCheck(L_1);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_1, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_whosTurnText_6(L_2);
		// whichTeamTurn = 1;
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_whichTeamTurn_13(1);
		// whosTurnText.text = "RED?";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_whosTurnText_6();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral9C457561AD474392F44268ECB0F404BB6E10F514);
		// isMoving = false;
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_isMoving_10((bool)0);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m07DC32583BF09EB71183725B7B95FA7B4716988A (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Update_m07DC32583BF09EB71183725B7B95FA7B4716988A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// isMoving2 = isMoving;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		bool L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_isMoving_10();
		__this->set_isMoving2_11(L_0);
		// if (Input.GetMouseButtonUp(0) && yutResultList.Count != 0)
		bool L_1 = Input_GetMouseButtonUp_m4899272EB31D43EC4A3A1A115843CD3D9AA2C4EC(0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_02d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_yutResultList_8();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_inline(L_2, /*hidden argument*/List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_02d8;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		NullCheck(L_4);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_6 = Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (Physics.Raycast(ray.origin, ray.direction * 10, out raycast))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_1), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_8, (10.0f), /*hidden argument*/NULL);
		bool L_10 = Physics_Raycast_m000FC36D038952F8AC5E3E562E7D39BAA8D1E287(L_7, L_9, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_021c;
		}
	}
	{
		// if (raycast.collider.gameObject.tag == "Piece" && raycast.collider.gameObject.GetComponent<PieceScript>().teamNumber == whichTeamTurn)
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_11 = RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_12, /*hidden argument*/NULL);
		bool L_14 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_13, _stringLiteralBDC89E68CE3BE454804F0DDB343C0B28E41A389B, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0115;
		}
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_15 = RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_17 = GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC(L_16, /*hidden argument*/GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_18 = L_17->get_teamNumber_7();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		int32_t L_19 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_whichTeamTurn_13();
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0115;
		}
	}
	{
		// ClearBlockColor();
		GameManager_ClearBlockColor_m62C1772A9CBB32634811C3435C384216A57C79CF(__this, /*hidden argument*/NULL);
		// if (selectedPiece != null) selectedPiece.GetComponent<PieceScript>().CleanColor();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = __this->get_selectedPiece_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_20, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ba;
		}
	}
	{
		// if (selectedPiece != null) selectedPiece.GetComponent<PieceScript>().CleanColor();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = __this->get_selectedPiece_14();
		NullCheck(L_22);
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_23 = GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC(L_22, /*hidden argument*/GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC_RuntimeMethod_var);
		NullCheck(L_23);
		PieceScript_CleanColor_mCE083A41B0AC3B7A24117DFCA0A5173A61E62485(L_23, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		// if (selectedPiece == raycast.collider.gameObject)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_selectedPiece_14();
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_25 = RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_27 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_24, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00df;
		}
	}
	{
		// selectedPiece = null;
		__this->set_selectedPiece_14((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// }
		goto IL_021c;
	}

IL_00df:
	{
		// selectedPiece = raycast.collider.gameObject;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_28 = RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_28);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_28, /*hidden argument*/NULL);
		__this->set_selectedPiece_14(L_29);
		// Debug.Log("target piece: " + selectedPiece.gameObject.name);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_selectedPiece_14();
		NullCheck(L_30);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		String_t* L_32 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_31, /*hidden argument*/NULL);
		String_t* L_33 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralB3D24A0F2F7DDECC6094B79C71460A740EDC1E08, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_33, /*hidden argument*/NULL);
		// }
		goto IL_021c;
	}

IL_0115:
	{
		// else if(raycast.collider.gameObject.tag == "WayBlock")
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_34 = RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_34);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_36 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_35, /*hidden argument*/NULL);
		bool L_37 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_36, _stringLiteral0250D6F84A9461901B070CA8AF864FD6BE0E7781, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_01f1;
		}
	}
	{
		// selectedBlock = raycast.collider.gameObject;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_38 = RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_38);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_38, /*hidden argument*/NULL);
		__this->set_selectedBlock_15(L_39);
		// if (selectedBlock.GetComponent<BlockScript>().isMovable)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_40 = __this->get_selectedBlock_15();
		NullCheck(L_40);
		BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41 * L_41 = GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF(L_40, /*hidden argument*/GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF_RuntimeMethod_var);
		NullCheck(L_41);
		bool L_42 = L_41->get_isMovable_4();
		if (!L_42)
		{
			goto IL_01e5;
		}
	}
	{
		// Debug.Log("?? ??? ??? ??????.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral5DF51EDF6F8D27A95E4D7CAD2E901C222942E5C1, /*hidden argument*/NULL);
		// MovePiece();
		GameManager_MovePiece_m8A0E2B54E5E4CC2017FFB451CB6E991BAAC1E482(__this, /*hidden argument*/NULL);
		// ClearBlockColor();
		GameManager_ClearBlockColor_m62C1772A9CBB32634811C3435C384216A57C79CF(__this, /*hidden argument*/NULL);
		// selectedPiece.GetComponent<PieceScript>().CleanColor();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = __this->get_selectedPiece_14();
		NullCheck(L_43);
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_44 = GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC(L_43, /*hidden argument*/GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC_RuntimeMethod_var);
		NullCheck(L_44);
		PieceScript_CleanColor_mCE083A41B0AC3B7A24117DFCA0A5173A61E62485(L_44, /*hidden argument*/NULL);
		// selectedPiece = null;
		__this->set_selectedPiece_14((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// if (yutResultList.Count == 0 && YutCheckZone.remainedThrow == 0)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_45 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_yutResultList_8();
		NullCheck(L_45);
		int32_t L_46 = List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_inline(L_45, /*hidden argument*/List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_RuntimeMethod_var);
		if (L_46)
		{
			goto IL_021c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var);
		int32_t L_47 = ((YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_StaticFields*)il2cpp_codegen_static_fields_for(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var))->get_remainedThrow_4();
		if (L_47)
		{
			goto IL_021c;
		}
	}
	{
		// Debug.Log("?? ?? ?: " + yutResultList.Count + ", " + YutCheckZone.remainedThrow);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_48 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_49 = L_48;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral9D214CA9EAB4F267C1F6574F929540F8B02842F4);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral9D214CA9EAB4F267C1F6574F929540F8B02842F4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_50 = L_49;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_51 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_yutResultList_8();
		NullCheck(L_51);
		int32_t L_52 = List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_inline(L_51, /*hidden argument*/List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_RuntimeMethod_var);
		int32_t L_53 = L_52;
		RuntimeObject * L_54 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_54);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_54);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_55 = L_50;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_56 = L_55;
		IL2CPP_RUNTIME_CLASS_INIT(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var);
		int32_t L_57 = ((YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_StaticFields*)il2cpp_codegen_static_fields_for(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var))->get_remainedThrow_4();
		int32_t L_58 = L_57;
		RuntimeObject * L_59 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_59);
		String_t* L_60 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_60, /*hidden argument*/NULL);
		// NextTurn();
		GameManager_NextTurn_mD7727F5FA52F8A71DC4F6414D1377E0C489C6AA1(/*hidden argument*/NULL);
		// }
		goto IL_021c;
	}

IL_01e5:
	{
		// else Debug.Log("?? ???? ?????.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralD6DF3BBE10F4D3C046158A5818A923018629FC3A, /*hidden argument*/NULL);
		// }
		goto IL_021c;
	}

IL_01f1:
	{
		// ClearBlockColor();
		GameManager_ClearBlockColor_m62C1772A9CBB32634811C3435C384216A57C79CF(__this, /*hidden argument*/NULL);
		// if (selectedPiece != null) selectedPiece.GetComponent<PieceScript>().CleanColor();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_61 = __this->get_selectedPiece_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_62 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_61, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_0215;
		}
	}
	{
		// if (selectedPiece != null) selectedPiece.GetComponent<PieceScript>().CleanColor();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_63 = __this->get_selectedPiece_14();
		NullCheck(L_63);
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_64 = GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC(L_63, /*hidden argument*/GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC_RuntimeMethod_var);
		NullCheck(L_64);
		PieceScript_CleanColor_mCE083A41B0AC3B7A24117DFCA0A5173A61E62485(L_64, /*hidden argument*/NULL);
	}

IL_0215:
	{
		// selectedPiece = null;
		__this->set_selectedPiece_14((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_021c:
	{
		// if (selectedPiece != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_65 = __this->get_selectedPiece_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_66 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_65, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_02d8;
		}
	}
	{
		// selectedPiece.GetComponent<Renderer>().material.color = Color.cyan;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_67 = __this->get_selectedPiece_14();
		NullCheck(L_67);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_68 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_67, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		NullCheck(L_68);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_69 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_68, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_70 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		NullCheck(L_69);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_69, L_70, /*hidden argument*/NULL);
		// int curWaypoint = selectedPiece.gameObject.GetComponent<PieceScript>().curWaypoint;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_71 = __this->get_selectedPiece_14();
		NullCheck(L_71);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_72 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_71, /*hidden argument*/NULL);
		NullCheck(L_72);
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_73 = GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC(L_72, /*hidden argument*/GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC_RuntimeMethod_var);
		NullCheck(L_73);
		int32_t L_74 = L_73->get_curWaypoint_5();
		V_2 = L_74;
		// foreach (int result in yutResultList)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_75 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_yutResultList_8();
		NullCheck(L_75);
		Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  L_76 = List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC(L_75, /*hidden argument*/List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_RuntimeMethod_var);
		V_3 = L_76;
	}

IL_0268:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02bf;
		}

IL_026a:
		{
			// foreach (int result in yutResultList)
			int32_t L_77 = Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_inline((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_3), /*hidden argument*/Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_RuntimeMethod_var);
			V_4 = L_77;
			// wayBlocks[curWaypoint + result].GetComponent<Renderer>().material.color = Color.green;
			GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_78 = __this->get_wayBlocks_4();
			int32_t L_79 = V_2;
			int32_t L_80 = V_4;
			NullCheck(L_78);
			int32_t L_81 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)L_80));
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_82 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
			NullCheck(L_82);
			Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_83 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_82, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
			NullCheck(L_83);
			Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_84 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_83, /*hidden argument*/NULL);
			Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_85 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
			NullCheck(L_84);
			Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_84, L_85, /*hidden argument*/NULL);
			// wayBlocks[curWaypoint + result].GetComponent<BlockScript>().isMovable = true;
			GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_86 = __this->get_wayBlocks_4();
			int32_t L_87 = V_2;
			int32_t L_88 = V_4;
			NullCheck(L_86);
			int32_t L_89 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_88));
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_90 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
			NullCheck(L_90);
			BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41 * L_91 = GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF(L_90, /*hidden argument*/GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF_RuntimeMethod_var);
			NullCheck(L_91);
			L_91->set_isMovable_4((bool)1);
			// wayBlocks[curWaypoint + result].GetComponent<BlockScript>().yutResult = result;
			GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_92 = __this->get_wayBlocks_4();
			int32_t L_93 = V_2;
			int32_t L_94 = V_4;
			NullCheck(L_92);
			int32_t L_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)L_94));
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
			NullCheck(L_96);
			BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41 * L_97 = GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF(L_96, /*hidden argument*/GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF_RuntimeMethod_var);
			int32_t L_98 = V_4;
			NullCheck(L_97);
			L_97->set_yutResult_5(L_98);
		}

IL_02bf:
		{
			// foreach (int result in yutResultList)
			bool L_99 = Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_RuntimeMethod_var);
			if (L_99)
			{
				goto IL_026a;
			}
		}

IL_02c8:
		{
			IL2CPP_LEAVE(0x2D8, FINALLY_02ca);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02ca;
	}

FINALLY_02ca:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_3), /*hidden argument*/Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_RuntimeMethod_var);
		IL2CPP_END_FINALLY(714)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(714)
	{
		IL2CPP_JUMP_TBL(0x2D8, IL_02d8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02d8:
	{
		// SetResultText();
		GameManager_SetResultText_m2C292EDFC8DD61AD1B711AF6550129BB819B5729(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::SetResultText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetResultText_m2C292EDFC8DD61AD1B711AF6550129BB819B5729 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_SetResultText_m2C292EDFC8DD61AD1B711AF6550129BB819B5729_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// resultText.text = "";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_resultText_5();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// foreach (int result in yutResultList)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_yutResultList_8();
		NullCheck(L_1);
		Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  L_2 = List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC(L_1, /*hidden argument*/List_1_GetEnumerator_m83178F038A7D4A7E9B0731B7D3078EDCF6FFD0EC_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_001d:
		{
			// foreach (int result in yutResultList)
			int32_t L_3 = Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_inline((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_0), /*hidden argument*/Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_RuntimeMethod_var);
			V_1 = L_3;
			// resultText.text += yutResultText[result - 1] + " "; // ?? ??? ???
			Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_4 = __this->get_resultText_5();
			Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_5 = L_4;
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = __this->get_yutResultText_12();
			int32_t L_8 = V_1;
			NullCheck(L_7);
			int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
			String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			String_t* L_11 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_6, L_10, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
			NullCheck(L_5);
			VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_11);
		}

IL_004a:
		{
			// foreach (int result in yutResultList)
			bool L_12 = Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m113E33A615748C69D63D1245F5FD820B4B3D43F7_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_001d;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892((Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C *)(&V_0), /*hidden argument*/Enumerator_Dispose_mBA3B0129DABD8274AF3497CC93E6A2DEA0A23892_RuntimeMethod_var);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void GameManager::ClearBlockColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ClearBlockColor_m62C1772A9CBB32634811C3435C384216A57C79CF (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_ClearBlockColor_m62C1772A9CBB32634811C3435C384216A57C79CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject block in wayBlocks)
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = __this->get_wayBlocks_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0032;
	}

IL_000b:
	{
		// foreach (GameObject block in wayBlocks)
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// block.GetComponent<Renderer>().material.color = Color.gray;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = L_4;
		NullCheck(L_5);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_5, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		NullCheck(L_6);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_6, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_8 = Color_get_gray_m11EEED9092A8D949D3326611C7137334B746DF09(/*hidden argument*/NULL);
		NullCheck(L_7);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_7, L_8, /*hidden argument*/NULL);
		// block.GetComponent<BlockScript>().isMovable = false;
		NullCheck(L_5);
		BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41 * L_9 = GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF(L_5, /*hidden argument*/GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_isMovable_4((bool)0);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		// foreach (GameObject block in wayBlocks)
		int32_t L_11 = V_1;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::MovePiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_MovePiece_m8A0E2B54E5E4CC2017FFB451CB6E991BAAC1E482 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_MovePiece_m8A0E2B54E5E4CC2017FFB451CB6E991BAAC1E482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * V_1 = NULL;
	{
		// int yutResult = selectedBlock.GetComponent<BlockScript>().yutResult;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_selectedBlock_15();
		NullCheck(L_0);
		BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41 * L_1 = GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF(L_0, /*hidden argument*/GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_yutResult_5();
		V_0 = L_2;
		// wayBlocks[selectedPiece.GetComponent<PieceScript>().curWaypoint].GetComponent<BlockScript>().whosOn = null;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_3 = __this->get_wayBlocks_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_selectedPiece_14();
		NullCheck(L_4);
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_5 = GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC(L_4, /*hidden argument*/GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6 = L_5->get_curWaypoint_5();
		NullCheck(L_3);
		int32_t L_7 = L_6;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41 * L_9 = GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF(L_8, /*hidden argument*/GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_whosOn_6((PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 *)NULL);
		// selectedPiece.GetComponent<PieceScript>().Move(yutResult);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_selectedPiece_14();
		NullCheck(L_10);
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_11 = GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC(L_10, /*hidden argument*/GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC_RuntimeMethod_var);
		int32_t L_12 = V_0;
		NullCheck(L_11);
		PieceScript_Move_mF755AE77DB6C287FBCF5438794105C2301A01A79(L_11, L_12, /*hidden argument*/NULL);
		// PieceScript whosOn = selectedBlock.GetComponent<BlockScript>().whosOn;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_selectedBlock_15();
		NullCheck(L_13);
		BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41 * L_14 = GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF(L_13, /*hidden argument*/GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF_RuntimeMethod_var);
		NullCheck(L_14);
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_15 = L_14->get_whosOn_6();
		V_1 = L_15;
		// if (whosOn == null)
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_16, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_007b;
		}
	}
	{
		// selectedBlock.GetComponent<BlockScript>().whosOn = selectedPiece.GetComponent<PieceScript>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_selectedBlock_15();
		NullCheck(L_18);
		BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41 * L_19 = GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF(L_18, /*hidden argument*/GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = __this->get_selectedPiece_14();
		NullCheck(L_20);
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_21 = GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC(L_20, /*hidden argument*/GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC_RuntimeMethod_var);
		NullCheck(L_19);
		L_19->set_whosOn_6(L_21);
		goto IL_00d7;
	}

IL_007b:
	{
		// else if (whosOn.teamNumber != whichTeamTurn)
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_teamNumber_7();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		int32_t L_24 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_whichTeamTurn_13();
		if ((((int32_t)L_23) == ((int32_t)L_24)))
		{
			goto IL_00c1;
		}
	}
	{
		// Debug.Log("??? ? ??!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralC36DB92E2BC184325C7B79A9D24DBD536FBA0FAA, /*hidden argument*/NULL);
		// whosOn.InitPosition();
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_25 = V_1;
		NullCheck(L_25);
		PieceScript_InitPosition_m8C6D60AFD50F48BB8EDB15B98FEBD552D99C0A63(L_25, /*hidden argument*/NULL);
		// selectedBlock.GetComponent<BlockScript>().whosOn = selectedPiece.GetComponent<PieceScript>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = __this->get_selectedBlock_15();
		NullCheck(L_26);
		BlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41 * L_27 = GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF(L_26, /*hidden argument*/GameObject_GetComponent_TisBlockScript_tB6E1707CCE5DBE1B70AF7CF3B398D1EB8D81CE41_m0C2C2E083AFB4E10E8619CF12502AAE507F98CDF_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_selectedPiece_14();
		NullCheck(L_28);
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_29 = GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC(L_28, /*hidden argument*/GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC_RuntimeMethod_var);
		NullCheck(L_27);
		L_27->set_whosOn_6(L_29);
		// YutCheckZone.remainedThrow++; // ?? +1
		IL2CPP_RUNTIME_CLASS_INIT(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var);
		int32_t L_30 = ((YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_StaticFields*)il2cpp_codegen_static_fields_for(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var))->get_remainedThrow_4();
		((YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_StaticFields*)il2cpp_codegen_static_fields_for(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var))->set_remainedThrow_4(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
		// }
		goto IL_00d7;
	}

IL_00c1:
	{
		// Debug.Log("?? ? ? ?? ??!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral3F4CEF8A8F8F0C7444F5F51F0D839BC46DCAEA64, /*hidden argument*/NULL);
		// whosOn.GetChild(selectedPiece);
		PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_31 = V_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = __this->get_selectedPiece_14();
		NullCheck(L_31);
		PieceScript_GetChild_m7329F566535A77D003DBFE88CFE9A54D8DD038C0(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		// yutResultList.Remove(yutResult); // Remove(): List<T>?? ?? ???? ?? ??? ?????.
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_33 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_yutResultList_8();
		int32_t L_34 = V_0;
		NullCheck(L_33);
		List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889(L_33, L_34, /*hidden argument*/List_1_Remove_m369DBFFEBB963F77D8DDA5D86E524581A20B0889_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameManager::NextTurn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_NextTurn_mD7727F5FA52F8A71DC4F6414D1377E0C489C6AA1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_NextTurn_mD7727F5FA52F8A71DC4F6414D1377E0C489C6AA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * G_B2_0 = NULL;
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * G_B3_1 = NULL;
	{
		// yutResultList = new List<int>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_0, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_yutResultList_8(L_0);
		// whichTeamTurn *= -1;
		int32_t L_1 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_whichTeamTurn_13();
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_whichTeamTurn_13(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)(-1))));
		// YutCheckZone.remainedThrow = 1;
		IL2CPP_RUNTIME_CLASS_INIT(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var);
		((YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_StaticFields*)il2cpp_codegen_static_fields_for(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var))->set_remainedThrow_4(1);
		// whosTurnText.text = (whichTeamTurn == 1 ? "RED?" : "BLUE?");
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_whosTurnText_6();
		int32_t L_3 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_whichTeamTurn_13();
		G_B1_0 = L_2;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			G_B2_0 = L_2;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = _stringLiteral0F2CF250DFB21DEBB55A4527DE3212FEB1C5313F;
		G_B3_1 = G_B1_0;
		goto IL_0035;
	}

IL_0030:
	{
		G_B3_0 = _stringLiteral9C457561AD474392F44268ECB0F404BB6E10F514;
		G_B3_1 = G_B2_0;
	}

IL_0035:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF7F1107D38DE91EB8A57C1C3BB1A932C50CD9693 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager__ctor_mF7F1107D38DE91EB8A57C1C3BB1A932C50CD9693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string[] yutResultText = new string[] { "?", "?", "?", "?", "?" };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralDE8B6C7871EABD106B00EA788CDAC1CE9FA11024);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDE8B6C7871EABD106B00EA788CDAC1CE9FA11024);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral11600C9ADA779D9DCDCBEE5033065DB7C0589943);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral11600C9ADA779D9DCDCBEE5033065DB7C0589943);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralE7560FC61C5EE163CF0A3102DCD1FFD7476A937C);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE7560FC61C5EE163CF0A3102DCD1FFD7476A937C);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral72FC4BA3FDA11FB834DED9CDCCA065BDE60B5A85);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral72FC4BA3FDA11FB834DED9CDCCA065BDE60B5A85);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral8F4DC1B65B470BE360A4216491FD75DA2789AE59);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8F4DC1B65B470BE360A4216491FD75DA2789AE59);
		__this->set_yutResultText_12(L_5);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m050E3CF18ED59B480951819A6C68DEA9C0EB1D45 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager__cctor_m050E3CF18ED59B480951819A6C68DEA9C0EB1D45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<int> yutResultList = new List<int>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_0, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_yutResultList_8(L_0);
		// public static bool gameOver = false;
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_gameOver_9((bool)0);
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
// System.Void MouseManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseManager_Update_mC805E1B232929212F3D081158642ED8D071A5BA6 (MouseManager_t44AAE39961C8EA4CE180241818F7D60D1BB5F207 * __this, const RuntimeMethod* method)
{
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_2 = Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3(L_0, L_1, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out raycast))
		bool L_3 = Physics_Raycast_mCE618579F667A62D15CB74CEF76147136EB2D495(L_2, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// GameObject hitObject = raycast.transform.root.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// SelectObject(hitObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_1;
		MouseManager_SelectObject_m0F35E459257F2A3BC115B06E702A4469DC8D58BD(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0032:
	{
		// ClearSelection();
		MouseManager_ClearSelection_m176574FA6D0D95378A9DF6E6171750543273205E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MouseManager::SelectObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseManager_SelectObject_m0F35E459257F2A3BC115B06E702A4469DC8D58BD (MouseManager_t44AAE39961C8EA4CE180241818F7D60D1BB5F207 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseManager_SelectObject_m0F35E459257F2A3BC115B06E702A4469DC8D58BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(selectedObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_selectedObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// if (gameObject == selectedObject) return;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___gameObject0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_selectedObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// if (gameObject == selectedObject) return;
		return;
	}

IL_001d:
	{
		// ClearSelection();
		MouseManager_ClearSelection_m176574FA6D0D95378A9DF6E6171750543273205E(__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// selectedObject = gameObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = ___gameObject0;
		__this->set_selectedObject_4(L_5);
		// }
		return;
	}
}
// System.Void MouseManager::ClearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseManager_ClearSelection_m176574FA6D0D95378A9DF6E6171750543273205E (MouseManager_t44AAE39961C8EA4CE180241818F7D60D1BB5F207 * __this, const RuntimeMethod* method)
{
	{
		// { selectedObject = null; }
		__this->set_selectedObject_4((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// { selectedObject = null; }
		return;
	}
}
// System.Void MouseManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseManager__ctor_mFC23DA24F83A5A0C21D532109D6D8C1AAFF40D16 (MouseManager_t44AAE39961C8EA4CE180241818F7D60D1BB5F207 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PieceScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_Start_m05570D7DDE40977619EA440D58F597B4A27FF84C (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, const RuntimeMethod* method)
{
	{
		// originPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		__this->set_originPosition_9(L_1);
		// }
		return;
	}
}
// System.Void PieceScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_Update_m34D9412A8856890E0A6F5FD7D9D268C08CB8D2E9 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, const RuntimeMethod* method)
{
	{
		// if (moveCount >= 0)
		int32_t L_0 = __this->get_moveCount_6();
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		// Move();
		PieceScript_Move_m78662BC777E873F712858D87E2F3E9422AEA19A3(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void PieceScript::Move(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_Move_mF755AE77DB6C287FBCF5438794105C2301A01A79 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, int32_t ___yutResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceScript_Move_mF755AE77DB6C287FBCF5438794105C2301A01A79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.isMoving = true;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_isMoving_10((bool)1);
		// if (curWaypoint == 0)
		int32_t L_0 = __this->get_curWaypoint_5();
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		// transform.position = waypoints[0].transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_2 = __this->get_waypoints_4();
		NullCheck(L_2);
		int32_t L_3 = 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_1, L_6, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// moveCount = yutResult;
		int32_t L_7 = ___yutResult0;
		__this->set_moveCount_6(L_7);
		// }
		return;
	}
}
// System.Void PieceScript::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_Move_m78662BC777E873F712858D87E2F3E9422AEA19A3 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceScript_Move_m78662BC777E873F712858D87E2F3E9422AEA19A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// transform.position = Vector3.MoveTowards(transform.position,
		//     waypoints[curWaypoint].transform.position,
		//     moveSpeed * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_3 = __this->get_waypoints_4();
		int32_t L_4 = __this->get_curWaypoint_5();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_moveSpeed_8();
		float L_10 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_MoveTowards_mA288BB5AA73DDA9CA76EDC11F339BAFDA1E4FF45(L_2, L_8, ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_11, /*hidden argument*/NULL);
		// if (transform.position == waypoints[curWaypoint].transform.position)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_14 = __this->get_waypoints_4();
		int32_t L_15 = __this->get_curWaypoint_5();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		bool L_20 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_13, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0090;
		}
	}
	{
		// if (--moveCount >= 0)
		int32_t L_21 = __this->get_moveCount_6();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1));
		int32_t L_22 = V_0;
		__this->set_moveCount_6(L_22);
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_008a;
		}
	}
	{
		// curWaypoint++;
		int32_t L_24 = __this->get_curWaypoint_5();
		__this->set_curWaypoint_5(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		return;
	}

IL_008a:
	{
		// GameManager.isMoving = false;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_isMoving_10((bool)0);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void PieceScript::InitPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_InitPosition_m8C6D60AFD50F48BB8EDB15B98FEBD552D99C0A63 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceScript_InitPosition_m8C6D60AFD50F48BB8EDB15B98FEBD552D99C0A63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// transform.position = originPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_originPosition_9();
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
		// curWaypoint = 0;
		__this->set_curWaypoint_5(0);
		// foreach (GameObject child in childPieces)
		List_1_t3D4152882C54B77C712688E910390D5C8E030463 * L_2 = __this->get_childPieces_10();
		NullCheck(L_2);
		Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60  L_3 = List_1_GetEnumerator_mF3F7C6A691B033A8369791D6DDBFE927804CDAB6(L_2, /*hidden argument*/List_1_GetEnumerator_mF3F7C6A691B033A8369791D6DDBFE927804CDAB6_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0068;
		}

IL_0026:
		{
			// foreach (GameObject child in childPieces)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Enumerator_get_Current_m2423588CAA3D28740E46D88133E7B22998378380_inline((Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2423588CAA3D28740E46D88133E7B22998378380_RuntimeMethod_var);
			// child.SetActive(true);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = L_4;
			NullCheck(L_5);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
			// child.GetComponent<PieceScript>().InitPosition(); // ??? ?? ???
			NullCheck(L_5);
			PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * L_6 = GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC(L_5, /*hidden argument*/GameObject_GetComponent_TisPieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6_m71E3872FC5AAF6056FF66AAD1D9E243B7325CBCC_RuntimeMethod_var);
			NullCheck(L_6);
			PieceScript_InitPosition_m8C6D60AFD50F48BB8EDB15B98FEBD552D99C0A63(L_6, /*hidden argument*/NULL);
			// transform.localScale -= new Vector3(0.5f, 0.0f, 0.0f);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = L_7;
			NullCheck(L_8);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_8, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
			memset((&L_10), 0, sizeof(L_10));
			Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_9, L_10, /*hidden argument*/NULL);
			NullCheck(L_8);
			Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_8, L_11, /*hidden argument*/NULL);
		}

IL_0068:
		{
			// foreach (GameObject child in childPieces)
			bool L_12 = Enumerator_MoveNext_mF998290EE501F2F7CA8A67995AAE77B29547C3C8((Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF998290EE501F2F7CA8A67995AAE77B29547C3C8_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0026;
			}
		}

IL_0071:
		{
			IL2CPP_LEAVE(0x81, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812((Enumerator_t42BA0767BDB9793DC2A37E46371E9DDE2BBAEB60 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var);
		IL2CPP_END_FINALLY(115)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void PieceScript::Coloring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_Coloring_m50378529DE48E057EED099AD006FBC3458384674 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceScript_Coloring_m50378529DE48E057EED099AD006FBC3458384674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Renderer>().material.color = Color.cyan;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_0, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PieceScript::CleanColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_CleanColor_mCE083A41B0AC3B7A24117DFCA0A5173A61E62485 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceScript_CleanColor_mCE083A41B0AC3B7A24117DFCA0A5173A61E62485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * G_B2_0 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * G_B1_0 = NULL;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * G_B3_1 = NULL;
	{
		// GetComponent<Renderer>().material.color = (teamNumber == 1 ? Color.red : Color.blue);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m3E0C8F08ADF98436AEF5AE9F4C56A51FF7D0A892_RuntimeMethod_var);
		NullCheck(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_teamNumber_7();
		G_B1_0 = L_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			G_B2_0 = L_1;
			goto IL_001b;
		}
	}
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_001b:
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		NullCheck(G_B3_1);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PieceScript::GetChild(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript_GetChild_m7329F566535A77D003DBFE88CFE9A54D8DD038C0 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___child0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceScript_GetChild_m7329F566535A77D003DBFE88CFE9A54D8DD038C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// childPieces.Add(child);
		List_1_t3D4152882C54B77C712688E910390D5C8E030463 * L_0 = __this->get_childPieces_10();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ___child0;
		NullCheck(L_0);
		List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6(L_0, L_1, /*hidden argument*/List_1_Add_mB466FEDA88AB72CA7331450A36E50D916A6C3BB6_RuntimeMethod_var);
		// child.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___child0;
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
		// transform.localScale += new Vector3(0.5f, 0.0f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = L_3;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_6), (0.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_4, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PieceScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieceScript__ctor_m6D820FD467E21A2B64AF12E7D4BBEF5F830E5B59 (PieceScript_t3F0A4BCBEE8A57A55D5C5AABAADA5263B8E57DB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PieceScript__ctor_m6D820FD467E21A2B64AF12E7D4BBEF5F830E5B59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int moveCount = -1;
		__this->set_moveCount_6((-1));
		// private float moveSpeed = 3f;
		__this->set_moveSpeed_8((3.0f));
		// public List<GameObject> childPieces = new List<GameObject>();
		List_1_t3D4152882C54B77C712688E910390D5C8E030463 * L_0 = (List_1_t3D4152882C54B77C712688E910390D5C8E030463 *)il2cpp_codegen_object_new(List_1_t3D4152882C54B77C712688E910390D5C8E030463_il2cpp_TypeInfo_var);
		List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA(L_0, /*hidden argument*/List_1__ctor_mE0CF797BC1662A4FDFF8009E76AC0A5CD1BB1FCA_RuntimeMethod_var);
		__this->set_childPieces_10(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void YutCheckZone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YutCheckZone_Start_mD3E87EBDB8A01BB5952676328F172982947D1C75 (YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A * __this, const RuntimeMethod* method)
{
	{
		// ResetYut();
		YutCheckZone_ResetYut_m15613D8AF8F16CBA6ABE47E62927B29418688F67(__this, /*hidden argument*/NULL);
		// Time.timeScale = 3; // ? ??? ?? 3??
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((3.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 YutCheckZone::SumYutResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YutCheckZone_SumYutResult_mC66AFB3A566E84E18FC7201388774FB524185117 (YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int result = yutResult[0] + yutResult[1] + yutResult[2] + yutResult[3];
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = __this->get_yutResult_6();
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = __this->get_yutResult_6();
		NullCheck(L_3);
		int32_t L_4 = 1;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_6 = __this->get_yutResult_6();
		NullCheck(L_6);
		int32_t L_7 = 2;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = __this->get_yutResult_6();
		NullCheck(L_9);
		int32_t L_10 = 3;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_5)), (int32_t)L_8)), (int32_t)L_11));
		// return (result == 0 ? 5 : result);
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0029:
	{
		return 5;
	}
}
// System.Void YutCheckZone::ResetYut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YutCheckZone_ResetYut_m15613D8AF8F16CBA6ABE47E62927B29418688F67 (YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YutCheckZone_ResetYut_m15613D8AF8F16CBA6ABE47E62927B29418688F67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// { yutResult = new int[] { -3, -3, -3, -3 }; }
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4846F3E0DC61BBD6AE249FF1EAAC4CB64097DE4A____5C1905CCC97DE06AA28E0F7866885E4677174BE0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		__this->set_yutResult_6(L_1);
		// { yutResult = new int[] { -3, -3, -3, -3 }; }
		return;
	}
}
// System.Void YutCheckZone::OnThrowYuts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YutCheckZone_OnThrowYuts_m19A59AE5AE7688F77FDF1B96CE940FD14F901732 (YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A * __this, const RuntimeMethod* method)
{
	{
		// ResetYut();
		YutCheckZone_ResetYut_m15613D8AF8F16CBA6ABE47E62927B29418688F67(__this, /*hidden argument*/NULL);
		// stopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = __this->get_stopwatch_7();
		NullCheck(L_0);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_0, /*hidden argument*/NULL);
		// isThrowing = true;
		__this->set_isThrowing_5((bool)1);
		// }
		return;
	}
}
// System.Void YutCheckZone::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YutCheckZone_OnTriggerStay_m36CC3694FA7ADE793FE2BFD19C4F155AED353C43 (YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YutCheckZone_OnTriggerStay_m36CC3694FA7ADE793FE2BFD19C4F155AED353C43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (stopwatch.ElapsedMilliseconds > 2000)
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = __this->get_stopwatch_7();
		NullCheck(L_0);
		int64_t L_1 = Stopwatch_get_ElapsedMilliseconds_mE39424FB61C885BCFCC4B583C58A8630C3AD8177(L_0, /*hidden argument*/NULL);
		if ((((int64_t)L_1) <= ((int64_t)(((int64_t)((int64_t)((int32_t)2000)))))))
		{
			goto IL_0076;
		}
	}
	{
		// stopwatch.Stop();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_2 = __this->get_stopwatch_7();
		NullCheck(L_2);
		Stopwatch_Stop_m8AE20980FC1C80DFAC27FA7E2BAFC88E94B839B3(L_2, /*hidden argument*/NULL);
		// switch (collider.gameObject.name)
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_3 = ___collider0;
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, _stringLiteral34966FF0868D91662EB705289B2A2EAF601C2E29, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, _stringLiteral1D7ED6A806E6B1808D4A14637642982276D428DA, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		return;
	}

IL_0045:
	{
		// yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_10 = __this->get_yutResult_6();
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_11 = ___collider0;
		NullCheck(L_11);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		YutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A * L_13 = GameObject_GetComponentInParent_TisYutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A_m7838330C22D7698D451A1B361DA02EDFFBD369E6(L_12, /*hidden argument*/GameObject_GetComponentInParent_TisYutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A_m7838330C22D7698D451A1B361DA02EDFFBD369E6_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_14 = L_13->get_yutId_5();
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (int32_t)1);
		// break;
		return;
	}

IL_005e:
	{
		// yutResult[collider.gameObject.GetComponentInParent<YutScript>().yutId] = 0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_15 = __this->get_yutResult_6();
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_16 = ___collider0;
		NullCheck(L_16);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		YutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A * L_18 = GameObject_GetComponentInParent_TisYutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A_m7838330C22D7698D451A1B361DA02EDFFBD369E6(L_17, /*hidden argument*/GameObject_GetComponentInParent_TisYutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A_m7838330C22D7698D451A1B361DA02EDFFBD369E6_RuntimeMethod_var);
		NullCheck(L_18);
		int32_t L_19 = L_18->get_yutId_5();
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)0);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void YutCheckZone::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YutCheckZone_OnTriggerEnter_m1D395C211B5D3CFC28AF9039771801C722358FDF (YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YutCheckZone_OnTriggerEnter_m1D395C211B5D3CFC28AF9039771801C722358FDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collider.gameObject.tag == "Yut")
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___collider0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteral00A472DAFFB10C0636057712ED51C4AF76BE5AF4, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.Log("?!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral63B5B8992CBBF3CFCA8E99C172A1B43146FA4F17, /*hidden argument*/NULL);
		// GameManager.NextTurn();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameManager_NextTurn_mD7727F5FA52F8A71DC4F6414D1377E0C489C6AA1(/*hidden argument*/NULL);
		// isThrowing = false;
		__this->set_isThrowing_5((bool)0);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void YutCheckZone::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YutCheckZone_Update_m9ABF09A73CC5681A074F897962AE6459DD2F0D86 (YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YutCheckZone_Update_m9ABF09A73CC5681A074F897962AE6459DD2F0D86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(!isThrowing && remainedThrow != 0 && !GameManager.isMoving)
		bool L_0 = __this->get_isThrowing_5();
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var);
		int32_t L_1 = ((YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_StaticFields*)il2cpp_codegen_static_fields_for(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var))->get_remainedThrow_4();
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		bool L_2 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_isMoving_10();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		// GameManager.throwBtn.gameObject.SetActive(true);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_throwBtn_7();
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0038;
	}

IL_0028:
	{
		// GameManager.throwBtn.gameObject.SetActive(false);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_throwBtn_7();
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// if (SumYutResult() > 0)
		int32_t L_7 = YutCheckZone_SumYutResult_mC66AFB3A566E84E18FC7201388774FB524185117(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		// isThrowing = false;
		__this->set_isThrowing_5((bool)0);
		// int sumYutResult = SumYutResult();
		int32_t L_8 = YutCheckZone_SumYutResult_mC66AFB3A566E84E18FC7201388774FB524185117(__this, /*hidden argument*/NULL);
		V_0 = L_8;
		// GameManager.yutResultList.Add(sumYutResult);  // ?? ???? ??
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_9 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_yutResultList_8();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_9, L_10, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// Debug.Log("Add: " + sumYutResult);
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralFB1134ADBE10071C1827E8EE1BD4E3BD3D4C70A9, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_14, /*hidden argument*/NULL);
		// if (sumYutResult > 3)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)3)))
		{
			goto IL_0085;
		}
	}
	{
		// stopwatch.Reset();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_16 = __this->get_stopwatch_7();
		NullCheck(L_16);
		Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765(L_16, /*hidden argument*/NULL);
		// ResetYut();
		YutCheckZone_ResetYut_m15613D8AF8F16CBA6ABE47E62927B29418688F67(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0085:
	{
		// remainedThrow--;
		IL2CPP_RUNTIME_CLASS_INIT(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var);
		int32_t L_17 = ((YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_StaticFields*)il2cpp_codegen_static_fields_for(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var))->get_remainedThrow_4();
		((YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_StaticFields*)il2cpp_codegen_static_fields_for(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var))->set_remainedThrow_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)));
		// stopwatch.Reset();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_18 = __this->get_stopwatch_7();
		NullCheck(L_18);
		Stopwatch_Reset_mB73BF189F4BF781A8587C2CAAD00B2B0EBA79765(L_18, /*hidden argument*/NULL);
		// ResetYut();
		YutCheckZone_ResetYut_m15613D8AF8F16CBA6ABE47E62927B29418688F67(__this, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Void YutCheckZone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YutCheckZone__ctor_m89CA1D8895E3F4B0F73305433199491B532E8B22 (YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YutCheckZone__ctor_m89CA1D8895E3F4B0F73305433199491B532E8B22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int[]     yutResult = new int[4];           // ? ?? ?? ??
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_yutResult_6(L_0);
		// Stopwatch stopwatch = new Stopwatch();  // ?? ??
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_1 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_1, /*hidden argument*/NULL);
		__this->set_stopwatch_7(L_1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void YutCheckZone::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YutCheckZone__cctor_mAC7FCD014F5624F2D0EF12B068C704855DFD341A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YutCheckZone__cctor_mAC7FCD014F5624F2D0EF12B068C704855DFD341A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int remainedThrow = 1;    // ??? ?? ??
		((YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_StaticFields*)il2cpp_codegen_static_fields_for(YutCheckZone_t4E2A1837498B64D2E7FB8F85B65295FDF47D536A_il2cpp_TypeInfo_var))->set_remainedThrow_4(1);
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
// System.Void YutScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YutScript_Start_m6669F0F62D93C02AA0E4CC2E9AE488FD202F2707 (YutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YutScript_Start_m6669F0F62D93C02AA0E4CC2E9AE488FD202F2707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		__this->set_rigid_4(L_0);
		// transform.rotation = Quaternion.identity; // ?? ??(??? ????? ??)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_1, L_2, /*hidden argument*/NULL);
		// transform.Rotate(new Vector3(0, 90, 90)); // ?? ?? ??
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), (0.0f), (90.0f), (90.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A(L_3, L_4, /*hidden argument*/NULL);
		// throwable = true;
		__this->set_throwable_6((bool)1);
		// }
		return;
	}
}
// System.Void YutScript::throwYut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YutScript_throwYut_mD58D5761D7B78AB9DB7F042BDC59FB39157E68F9 (YutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (YutScript_throwYut_mD58D5761D7B78AB9DB7F042BDC59FB39157E68F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// rigid.velocity = Vector3.zero;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = __this->get_rigid_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_0, L_1, /*hidden argument*/NULL);
		// rigid.angularVelocity = Vector3.zero;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_2 = __this->get_rigid_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_set_angularVelocity_m1839DCBC87B01EFD0B4936E84E503E38774B962C(L_2, L_3, /*hidden argument*/NULL);
		// float posX = Random.Range(-2, 2);
		int32_t L_4 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(((int32_t)-2), 2, /*hidden argument*/NULL);
		V_0 = (((float)((float)L_4)));
		// float posZ = Random.Range(-2, 2);
		int32_t L_5 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(((int32_t)-2), 2, /*hidden argument*/NULL);
		V_1 = (((float)((float)L_5)));
		// float posY = Random.Range(3, 5);
		int32_t L_6 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(3, 5, /*hidden argument*/NULL);
		V_2 = (((float)((float)L_6)));
		// transform.position = new Vector3(posX, posY, posZ);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_8 = V_0;
		float L_9 = V_2;
		float L_10 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_7, L_11, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.identity;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_12, L_13, /*hidden argument*/NULL);
		// float angY = Random.Range(70, 110);
		int32_t L_14 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(((int32_t)70), ((int32_t)110), /*hidden argument*/NULL);
		V_3 = (((float)((float)L_14)));
		// float angX = Random.Range(0, 360);
		int32_t L_15 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, ((int32_t)360), /*hidden argument*/NULL);
		V_4 = (((float)((float)L_15)));
		// transform.Rotate(new Vector3(angX, angY, 90));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_17 = V_4;
		float L_18 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_19), L_17, L_18, (90.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A(L_16, L_19, /*hidden argument*/NULL);
		// float forceY = Random.Range(200, 500);
		int32_t L_20 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(((int32_t)200), ((int32_t)500), /*hidden argument*/NULL);
		V_5 = (((float)((float)L_20)));
		// rigid.AddForce(new Vector3(0, forceY, 0));
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_21 = __this->get_rigid_4();
		float L_22 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_23), (0.0f), L_22, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		Rigidbody_AddForce_mC8140D90B806634A733624F671C45AD7CDBEDB38(L_21, L_23, /*hidden argument*/NULL);
		// float dirX = Random.Range(5, 50);
		int32_t L_24 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(5, ((int32_t)50), /*hidden argument*/NULL);
		V_6 = (((float)((float)L_24)));
		// float dirZ = Random.Range(-10, 10);
		int32_t L_25 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		V_7 = (((float)((float)L_25)));
		// rigid.angularVelocity = new Vector3(dirX, 0, dirZ);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_26 = __this->get_rigid_4();
		float L_27 = V_6;
		float L_28 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_29), L_27, (0.0f), L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		Rigidbody_set_angularVelocity_m1839DCBC87B01EFD0B4936E84E503E38774B962C(L_26, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void YutScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YutScript__ctor_m841D78B833A53CA477D45FC6178997ECB9F12D64 (YutScript_t9924F686880B8A3000A383DD7B410CA49F4CDF6A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m52793036D5E41E8E25DCC5C033380C44D7596903_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m88A0089A1A4EEBC3017E2DA569A01C7919B10945_gshared_inline (Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
