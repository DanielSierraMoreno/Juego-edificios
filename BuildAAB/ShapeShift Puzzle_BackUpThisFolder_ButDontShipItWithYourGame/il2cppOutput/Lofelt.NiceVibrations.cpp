#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ElapsedEventArgs_t74C1E2D692A82825805E5EC84EE73F5B053027C1;
struct ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
struct Exception_t;
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
struct HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98;
struct HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B;
struct HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
struct ISynchronizeInvoke_t94542FC52B3B1FCA7BC4D8CC518FC2EF9870861F;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct String_t;
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
struct Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B;
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4;
struct U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA;
struct U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____291429BD4426C606843ABEB925268AD87767305C4AC8069D1191FFDE90A3499F_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____34A0AC4C4C065F0140B16ECC7E9690749B60C5C0EB2D6021CC75FEEBDCDCA61F_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____DF8E296768F9446BD84A1631B3922DAA86C5CC0EFB71B660BF0B6DF542707096_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral00DCAF10AB031EC7D7077B627288147A71E45F07;
IL2CPP_EXTERN_C String_t* _stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B;
IL2CPP_EXTERN_C String_t* _stringLiteral0A446C6F48B1189B2EBA5A31AA341FDB440088E9;
IL2CPP_EXTERN_C String_t* _stringLiteral11A4FE01BF2A9FE8159B9EA16D64D70159683C53;
IL2CPP_EXTERN_C String_t* _stringLiteral155B036AB9502432CB2CCD80790FF33D3227823D;
IL2CPP_EXTERN_C String_t* _stringLiteral1590B1DD196F96A11A36B50B360EB57178EEF954;
IL2CPP_EXTERN_C String_t* _stringLiteral1A5A4A501BAA6FD3ED4EBE9BFC926066FCBD5ABE;
IL2CPP_EXTERN_C String_t* _stringLiteral1C46D0AA262A0625365CD273F8B2BF1234988C04;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral41122A25B762B3B469C8461B4F6196CC75D3EF6A;
IL2CPP_EXTERN_C String_t* _stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB;
IL2CPP_EXTERN_C String_t* _stringLiteral48247C19229E69D84C5E6BDDE317DBE03A31CDD3;
IL2CPP_EXTERN_C String_t* _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral4B481BD414EE082CA5F33A7513CDB2D68ADAF594;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8;
IL2CPP_EXTERN_C String_t* _stringLiteral61DD0B794D236B1414F02F76E8AF03EDCDC5FD17;
IL2CPP_EXTERN_C String_t* _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7;
IL2CPP_EXTERN_C String_t* _stringLiteral8B63886015A4191332EA3F977B1146A0B78A6E82;
IL2CPP_EXTERN_C String_t* _stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3;
IL2CPP_EXTERN_C String_t* _stringLiteralA2135703B40B414C092DF068E8FAA55E46FFB30B;
IL2CPP_EXTERN_C String_t* _stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC444FDC3B86DC5349F7224E5C2605245C0859BA1;
IL2CPP_EXTERN_C String_t* _stringLiteralC5CF167CD5E0AB4195BC6B1A4DEDCCEEA1E9E954;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E079158CE53A6B1B96591E1222924C388B17C2;
IL2CPP_EXTERN_C String_t* _stringLiteralC7E3AEAEF7966AC50BEA811A1C12092709305E19;
IL2CPP_EXTERN_C String_t* _stringLiteralCA44DFF94D6AA7697C8ADB77FB3A367BA465B869;
IL2CPP_EXTERN_C String_t* _stringLiteralD3CF9BBC2C80F53F057554706A4681C9C5301858;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F8B953FE2D84FB48669F1FF532EB963C0006E0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125;
IL2CPP_EXTERN_C String_t* _stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__29_1_m1BCEBEB3A93822C03F9BFD601A7EBC1FB8CA6755_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__22_0_mD1B7C55840B8789E575D17F2E28BE41222F05C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__22_1_m839E6085723C13399E8AAFD10EFE88461E10F11D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_0_U3CInitU3Eb__0_m22F895CE0EE10591001E1596E6BFAC84B4668465_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tDCDD06645718B06856BC7DD0DCF0BC9A71625236 
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF  : public RuntimeObject
{
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject;
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass;
};
struct DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE  : public RuntimeObject
{
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};
struct GamepadRumbler_tCC2DEC7A0D857E5D8C9ED0EDFB779CA674DB3C9F  : public RuntimeObject
{
};
struct HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA  : public RuntimeObject
{
};
struct HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56  : public RuntimeObject
{
};
struct JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA  : public RuntimeObject
{
};
struct LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A  : public RuntimeObject
{
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes;
	String_t* ___positiveSign;
	String_t* ___negativeSign;
	String_t* ___numberDecimalSeparator;
	String_t* ___numberGroupSeparator;
	String_t* ___currencyGroupSeparator;
	String_t* ___currencyDecimalSeparator;
	String_t* ___currencySymbol;
	String_t* ___ansiCurrencySymbol;
	String_t* ___nanSymbol;
	String_t* ___positiveInfinitySymbol;
	String_t* ___negativeInfinitySymbol;
	String_t* ___percentDecimalSeparator;
	String_t* ___percentGroupSeparator;
	String_t* ___percentSymbol;
	String_t* ___perMilleSymbol;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits;
	int32_t ___m_dataItem;
	int32_t ___numberDecimalDigits;
	int32_t ___currencyDecimalDigits;
	int32_t ___currencyPositivePattern;
	int32_t ___currencyNegativePattern;
	int32_t ___numberNegativePattern;
	int32_t ___percentPositivePattern;
	int32_t ___percentNegativePattern;
	int32_t ___percentDecimalDigits;
	int32_t ___digitSubstitution;
	bool ___isReadOnly;
	bool ___m_useUserOverride;
	bool ___m_isInvariant;
	bool ___validForParseAsNumber;
	bool ___validForParseAsCurrency;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4  : public RuntimeObject
{
};
struct U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA  : public RuntimeObject
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___syncContext;
};
struct U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE  : public RuntimeObject
{
};
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	RuntimeObject* ___site;
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___durationsMs;
	int32_t ___totalDurationMs;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___lowFrequencyMotorSpeeds;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___highFrequencyMotorSpeeds;
};
struct GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_pinvoke
{
	Il2CppSafeArray* ___durationsMs;
	int32_t ___totalDurationMs;
	Il2CppSafeArray* ___lowFrequencyMotorSpeeds;
	Il2CppSafeArray* ___highFrequencyMotorSpeeds;
};
struct GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_com
{
	Il2CppSafeArray* ___durationsMs;
	int32_t ___totalDurationMs;
	Il2CppSafeArray* ___lowFrequencyMotorSpeeds;
	Il2CppSafeArray* ___highFrequencyMotorSpeeds;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_tA621D05C74A39B7C924F15177987D9C57DBCAC79 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tA621D05C74A39B7C924F15177987D9C57DBCAC79__padding[16];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_tD7D0F6EA57693B94EB4C3FF244A3B9D3BBF692B3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tD7D0F6EA57693B94EB4C3FF244A3B9D3BBF692B3__padding[32];
	};
};
#pragma pack(pop, tp)
struct Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___time;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___amplitude;
};
struct Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_pinvoke
{
	Il2CppSafeArray* ___time;
	Il2CppSafeArray* ___amplitude;
};
struct Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_com
{
	Il2CppSafeArray* ___time;
	Il2CppSafeArray* ___amplitude;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct ElapsedEventArgs_t74C1E2D692A82825805E5EC84EE73F5B053027C1  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E 
{
	int32_t ___value__;
};
struct SynchronizationContextProperties_t5ED82C778B4C396AD94A93CFBEF00022BDECF058 
{
	int32_t ___value__;
};
struct Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	double ___interval;
	bool ___enabled;
	bool ___initializing;
	bool ___delayedEnable;
	ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* ___onIntervalElapsed;
	bool ___autoReset;
	RuntimeObject* ___synchronizingObject;
	bool ___disposed;
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ___timer;
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___callback;
	RuntimeObject* ___cookie;
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			bool ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Il2CppChar ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_forAlignmentOnly;
		};
	};
};
struct PresetType_t6A329AECE5E2EA47D41612E49705A3DA98C57CF5 
{
	int32_t ___value__;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	int32_t ____props;
};
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 
{
	int32_t ___type;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___maximumAmplitudePattern;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___jsonClip;
};
struct Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_pinvoke
{
	int32_t ___type;
	Il2CppSafeArray* ___maximumAmplitudePattern;
	Il2CppSafeArray* ___jsonClip;
};
struct Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_com
{
	int32_t ___type;
	Il2CppSafeArray* ___maximumAmplitudePattern;
	Il2CppSafeArray* ___jsonClip;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51  : public MulticastDelegate_t
{
};
struct HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___json;
	GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 ___gamepadRumble;
};
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	float ____outputLevel;
	bool ____hapticsEnabled;
};
struct HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* ___clip;
	int32_t ___priority;
	float ___seekTime;
	int32_t ____fallbackPreset;
	bool ____loop;
	float ____level;
	float ____frequencyShift;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF_StaticFields
{
	__StaticArrayInitTypeSizeU3D32_tD7D0F6EA57693B94EB4C3FF244A3B9D3BBF692B3 ___291429BD4426C606843ABEB925268AD87767305C4AC8069D1191FFDE90A3499F;
	__StaticArrayInitTypeSizeU3D16_tA621D05C74A39B7C924F15177987D9C57DBCAC79 ___34A0AC4C4C065F0140B16ECC7E9690749B60C5C0EB2D6021CC75FEEBDCDCA61F;
	__StaticArrayInitTypeSizeU3D16_tA621D05C74A39B7C924F15177987D9C57DBCAC79 ___DF8E296768F9446BD84A1631B3922DAA86C5CC0EFB71B660BF0B6DF542707096;
	__StaticArrayInitTypeSizeU3D32_tD7D0F6EA57693B94EB4C3FF244A3B9D3BBF692B3 ___EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2;
};
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	bool ___enableDebugPrints;
};
struct DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields
{
	int32_t ___U3CplatformU3Ek__BackingField;
	int32_t ___U3CplatformVersionU3Ek__BackingField;
	bool ____meetsAdvancedRequirements;
	bool ___U3CisVersionSupportedU3Ek__BackingField;
	bool ____hasAmplitudeControl;
	bool ____hasAmplitudeModulation;
	bool ____hasFrequencyModulation;
	bool ____canEmulateEmphasis;
	bool ____canLoop;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields
{
	bool ___lofeltHapticsInitalized;
	Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* ___playbackFinishedTimer;
	float ___clipLoadedDurationSecs;
	bool ___clipLoaded;
	float ___lastSeekTime;
	bool ___deviceMeetsAdvancedRequirements;
	bool ___isLoopingEnabledByUser;
	bool ___isPlaybackLooping;
	int32_t ____fallbackPreset;
	bool ____hapticsEnabled;
	float ____outputLevel;
	float ____clipLevel;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___LoadedClipChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PlaybackStarted;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PlaybackStopped;
};
struct HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields
{
	String_t* ___emphasisTemplate;
	String_t* ___constantTemplate;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numberFormat;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___constantPatternTime;
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Selection;
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Light;
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Medium;
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Heavy;
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Rigid;
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Soft;
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Success;
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Failure;
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Warning;
};
struct JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields
{
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___jniArgs;
};
struct LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___lofeltHaptics;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___hapticPatterns;
	int64_t ___nativeController;
	intptr_t ___playMethodId;
	intptr_t ___stopMethodId;
	intptr_t ___seekMethodId;
	intptr_t ___loopMethodId;
	intptr_t ___setAmplitudeMultiplicationMethodId;
	intptr_t ___playMaximumAmplitudePattern;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields
{
	U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__29_1;
};
struct U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields
{
	U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* ___U3CU3E9;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_StaticFields
{
	String_t* ___clipJsonTemplate;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields
{
	HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* ___loadedHapticSource;
	HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* ___lastPlayedHapticSource;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		m_Items[index] = value;
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, String_t* ___1_methodName, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeviceCapabilities_get_platformVersion_m0A60F6AEB62C7F305D64E89587392EFDCE4E4186_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumble_IsValid_m77AAB239FF848FBF602F878764E3FA50B6A4BFB2 (GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ApplyLevelsToLofeltHaptics_m5ACDECB79785ED4783E5F97AF6DBD854F33A0726 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ApplyLevelsToGamepadRumbler_m9D1B96D0E2AE8863A88A3262E165398AB2FD9948 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetAmplitudeMultiplication_m21AF8A0DBE888DF4354815DC65FD3C5635AA6684 (float ___0_factor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mD835FCF0A9C4B2768A4B61013CBBD419DB8BD684 (U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElapsedEventHandler__ctor_mAB5D9F11BB0B719A17105C636543958CC6F78CBD (ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_add_Elapsed_mA30E2E614E703D6FD8260EB10575C0FB719C0B5D (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Initialize_m5A160C65E0C3709121B048C91AED126CE2C642E8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCapabilities_Init_m7AC099423DD92EFAC32183C356021EBC63C89C47 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_meetsAdvancedRequirements_m2501828C362AB5507BF4EE8BF1E9FCEE92CDDA46_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Init_m6C2B658F77FFBA6ABB7461D141E3E6A8463CF197 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Unload_mEC8030BBE6C2FD9FDB87B20469FEB4E70AB26564 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Load_mEDE5AABA9357F121B6B13D5EFABAD832DE2D9FDC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mB19C1D42F42F987DAF09066928F5FF3CE97440FA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_json, GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 ___1_rumble, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mE6AA251161ED4A27476BC30C51AD716D49B15573 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Load_m98F6602C87AD124ECDD629CD00D5EBEF8563345A (GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 ___0_rumble, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_Enabled_m96249C4F2CB558B6B65BBA006B55B4423830F38D (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_CanPlay_mFFF359E6E875933036961CAFC069B32989DA533F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Play_m43B8664528C63A77B17FF1027F72B5CF421AE3D2 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_canLoop_m69DF52370C735DBBD712DB92B96F8961B5A469CD_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Play_mD458011A67C0A99B637B629B2B805E1D919814C7 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HapticController_get_fallbackPreset_mFB148A0F3EAABF5B2B9B2EE591D70616B8E00548_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticPatterns_GetPresetDuration_m1BC31066EDB5BF1475BB55ABC4CADC5FD7CAE692 (int32_t ___0_presetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayPreset_m4BBC460337643C4051BA3AC077AAD1E2BB4B9B90 (int32_t ___0_presetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_Interval_m85B315A45E5CC4B9E5BA84891636B7F368A05536 (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_AutoReset_mCDD4362A339ADAA69BAB7FE596BE400C161C328D (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mE91A8FCA5AD81A52B0960D91A9A57E644B3A6D83 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* ___0_clip, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Stop_m1AC86C07B8885A42AB5D5988F5C6C3BC55FA642B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_StopPattern_mDA2719D6A8F90D32D956ED4E01401774F9B80AC5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Stop_m5CDA6A7D1F191046DEDF2AA37EFDD030A63920F9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Seek_m6F57DA36A2D3780A7CCDF9F2E3E0A14C1ED66D4E (float ___0_time, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetFrequencyShift_m58733F5BB1A11401DE5E843F34ADB79C318AD318 (float ___0_shift, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Loop_m37A6519C484CE0B973B41C0A4C2244A85D5D314B (bool ___0_enabled, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Seek_mF49BDF3CE3FE84E2412324A917067F7D37919D64 (float ___0_time, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipFrequencyShift_m46D7B83FD3D5FEFF6B9E039DA1685C58ECFE6612 (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA (bool ___0_enabled, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HapticController_set_fallbackPreset_m59C957576E33F13392F08310B4E5F8D610CA2EA1_inline (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_mB9CD175ABB2BB47E091B70C9E6A5CEB00D48A2B0 (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4BE54460DE9013F0322B55C7F93B41BB7F1B9479 (U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo__ctor_m94502038B1DB45D50D1331C312DDAD0D80CD608C (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo_set_NumberDecimalSeparator_mEC8D7493863AD768CF6107DE7617811E1105DF10 (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572 (Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828* __this, int32_t ___0_type, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_time, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_amplitude, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_IsConnected_mD3EA909001C5BB4BACA421C42FC7244BEC11CD15 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_PlayMaximumAmplitudePattern_m9750CD1982EA6A6D924C464F135250FB6569C1F7 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_timings, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 HapticPatterns_GetPresetForType_m9FC81F286C1CCB677B62EBE48CB2E930102AEB37 (int32_t ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Preset_GetDuration_mB77C3715AAA5BA8308AE5F760CDC922CFE2218A2 (Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pattern__ctor_m0381400DEF8AC63215B136B318282B8B39D7CE22 (Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_time, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_amplitude, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pattern_ToClip_mFD7C70C9687B1FAD4AB50B7D082C0C07F5754FBD (Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticController_get_outputLevel_mB9E570F29478F1DD5DCAF278000A0243D2884953_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_outputLevel_m259DA805820909202D9A3919CEDFFB7256B4BBCC (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_hapticsEnabled_m9A2E6CA744C9D85358114BEFE898155E0C958C2B (bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ProcessApplicationFocus_m161EAF2B8408B1AC9C74C9D2D41F637071C93C07 (bool ___0_hasFocus, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_CanPlay_m6573EFA48B841878DF318B0D14F0C1B0CC67C9CE (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_level_m7C663BF92A50D6DB6E85BCE06F43DB56819B3F10_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HapticSource_get_fallbackPreset_mEECE617416CB3FF45437D70015336FE602735397_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_IsPlaying_m2184DE06BA77A234A514D91B286CE8BF2FA27482 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Stop_m565E771BCE6FE1F62EE12F0267211C9CCAE3EC00 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5D6483E39A7DF2468D6200E50958D5AE115FF193 (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9 (String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB (intptr_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3 (intptr_t ___0_clazz, String_t* ___1_name, String_t* ___2_sig, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB (intptr_t ___0_clazz, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallVoidMethod_mFCFF6A5FF4A51305C3D2DBFB3A0699617EF40D48 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JNIHelpers_javaThrowableToString_m161BACA2F355C3D73F8AACD8C58C0DA6EC1E3117 (intptr_t ___0_throwable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_m9EB5BCDAE56AE45AE865173DAB134FB35C011C75 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, intptr_t ___1_methodId, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_jniArgs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___1_jniArgs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
inline int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared)(__this, ___0_methodName, ___1_args, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline bool JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, String_t* ___1_methodName, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5_gshared)(___0_obj, ___1_methodName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0 (int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_lofeltHapticsLoadDirect_m212DB3189B44BE54F822058250FAE6FFBB72500B (intptr_t ___0_controller, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_m4C7983BAB087B9A0C617F22D80760AC83698D7F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, intptr_t ___1_methodId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_mFEB7DB3EDB24CC2CB122A7F496F76E2A81DE6660 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, intptr_t ___1_methodId, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_mE02DC3C0B0732DF8C4144494DA6AAC36509D53AD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, intptr_t ___1_methodId, float ___2_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_mF7C012A9DDF145A65C9FCFCD82B612E6FBB4B9A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, intptr_t ___1_methodId, bool ___2_arg, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lofelt_sdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL lofeltHapticsLoadDirect(intptr_t, uint8_t*, int64_t);
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
// Method Definition Index: 78106
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeviceCapabilities_get_platformVersion_m0A60F6AEB62C7F305D64E89587392EFDCE4E4186 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:29>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CplatformVersionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78107
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_meetsAdvancedRequirements_m2501828C362AB5507BF4EE8BF1E9FCEE92CDDA46 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:56>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____meetsAdvancedRequirements;
		return L_0;
	}
}
// Method Definition Index: 78108
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:72>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CisVersionSupportedU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78109
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasAmplitudeModulation_mD3C8FD6CBAFB4A61328AB07465DD9067A8D3E0FB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:106>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____hasAmplitudeModulation;
		return L_0;
	}
}
// Method Definition Index: 78110
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasFrequencyModulation_m813D6D6F555A3FA62A94B55A937D654066B08237 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:118>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____hasFrequencyModulation;
		return L_0;
	}
}
// Method Definition Index: 78111
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_canLoop_m69DF52370C735DBBD712DB92B96F8961B5A469CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:154>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____canLoop;
		return L_0;
	}
}
// Method Definition Index: 78112
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCapabilities__cctor_mF71D011FD1233CAE59C93387DB7F4064B51DAA42 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:166>
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CplatformU3Ek__BackingField = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:167>
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CplatformVersionU3Ek__BackingField = 0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:168>
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CisVersionSupportedU3Ek__BackingField = (bool)0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:171>
		String_t* L_1;
		L_1 = SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D(NULL);
		String_t* L_2;
		L_2 = SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_2, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_1, ((int32_t)il2cpp_codegen_add(L_3, 1)), 3, NULL);
		int32_t L_5;
		L_5 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_4, NULL);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CplatformVersionU3Ek__BackingField = L_5;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:173>
		int32_t L_6;
		L_6 = DeviceCapabilities_get_platformVersion_m0A60F6AEB62C7F305D64E89587392EFDCE4E4186_inline(NULL);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CisVersionSupportedU3Ek__BackingField = (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:230>
		return;
	}
}
// Method Definition Index: 78113
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCapabilities_Init_m7AC099423DD92EFAC32183C356021EBC63C89C47 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:239>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3(NULL);
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____hasAmplitudeControl = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:240>
		bool L_1;
		L_1 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3(NULL);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____canEmulateEmphasis = L_1;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:241>
		bool L_2;
		L_2 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3(NULL);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____canLoop = L_2;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:250>
		bool L_3;
		L_3 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3(NULL);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____meetsAdvancedRequirements = L_3;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:251>
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
IL2CPP_EXTERN_C void GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshal_pinvoke(const GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240& unmarshaled, GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_pinvoke& marshaled)
{
	marshaled.___durationsMs = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___durationsMs);
	marshaled.___totalDurationMs = unmarshaled.___totalDurationMs;
	marshaled.___lowFrequencyMotorSpeeds = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___lowFrequencyMotorSpeeds);
	marshaled.___highFrequencyMotorSpeeds = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___highFrequencyMotorSpeeds);
}
IL2CPP_EXTERN_C void GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshal_pinvoke_back(const GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_pinvoke& marshaled, GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240& unmarshaled)
{
	unmarshaled.___durationsMs = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, il2cpp_defaults.int32_class, marshaled.___durationsMs);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___durationsMs), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, il2cpp_defaults.int32_class, marshaled.___durationsMs));
	int32_t unmarshaledtotalDurationMs_temp_1 = 0;
	unmarshaledtotalDurationMs_temp_1 = marshaled.___totalDurationMs;
	unmarshaled.___totalDurationMs = unmarshaledtotalDurationMs_temp_1;
	unmarshaled.___lowFrequencyMotorSpeeds = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___lowFrequencyMotorSpeeds);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___lowFrequencyMotorSpeeds), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___lowFrequencyMotorSpeeds));
	unmarshaled.___highFrequencyMotorSpeeds = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___highFrequencyMotorSpeeds);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___highFrequencyMotorSpeeds), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___highFrequencyMotorSpeeds));
}
IL2CPP_EXTERN_C void GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshal_pinvoke_cleanup(GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___durationsMs);
	marshaled.___durationsMs = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___lowFrequencyMotorSpeeds);
	marshaled.___lowFrequencyMotorSpeeds = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___highFrequencyMotorSpeeds);
	marshaled.___highFrequencyMotorSpeeds = NULL;
}
IL2CPP_EXTERN_C void GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshal_com(const GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240& unmarshaled, GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_com& marshaled)
{
	marshaled.___durationsMs = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___durationsMs);
	marshaled.___totalDurationMs = unmarshaled.___totalDurationMs;
	marshaled.___lowFrequencyMotorSpeeds = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___lowFrequencyMotorSpeeds);
	marshaled.___highFrequencyMotorSpeeds = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___highFrequencyMotorSpeeds);
}
IL2CPP_EXTERN_C void GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshal_com_back(const GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_com& marshaled, GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240& unmarshaled)
{
	unmarshaled.___durationsMs = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, il2cpp_defaults.int32_class, marshaled.___durationsMs);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___durationsMs), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, il2cpp_defaults.int32_class, marshaled.___durationsMs));
	int32_t unmarshaledtotalDurationMs_temp_1 = 0;
	unmarshaledtotalDurationMs_temp_1 = marshaled.___totalDurationMs;
	unmarshaled.___totalDurationMs = unmarshaledtotalDurationMs_temp_1;
	unmarshaled.___lowFrequencyMotorSpeeds = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___lowFrequencyMotorSpeeds);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___lowFrequencyMotorSpeeds), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___lowFrequencyMotorSpeeds));
	unmarshaled.___highFrequencyMotorSpeeds = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___highFrequencyMotorSpeeds);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___highFrequencyMotorSpeeds), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___highFrequencyMotorSpeeds));
}
IL2CPP_EXTERN_C void GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshal_com_cleanup(GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___durationsMs);
	marshaled.___durationsMs = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___lowFrequencyMotorSpeeds);
	marshaled.___lowFrequencyMotorSpeeds = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___highFrequencyMotorSpeeds);
	marshaled.___highFrequencyMotorSpeeds = NULL;
}
// Method Definition Index: 78114
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumble_IsValid_m77AAB239FF848FBF602F878764E3FA50B6A4BFB2 (GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:80>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:81>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:82>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:83>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:84>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:85>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___durationsMs;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___lowFrequencyMotorSpeeds;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___highFrequencyMotorSpeeds;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___durationsMs;
		NullCheck(L_3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___lowFrequencyMotorSpeeds;
		NullCheck(L_4);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___durationsMs;
		NullCheck(L_5);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___highFrequencyMotorSpeeds;
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___durationsMs;
		NullCheck(L_7);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_7)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool GamepadRumble_IsValid_m77AAB239FF848FBF602F878764E3FA50B6A4BFB2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240*>(__this + _offset);
	bool _returnValue;
	_returnValue = GamepadRumble_IsValid_m77AAB239FF848FBF602F878764E3FA50B6A4BFB2(_thisAdjusted, method);
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
// Method Definition Index: 78115
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Init_m6C2B658F77FFBA6ABB7461D141E3E6A8463CF197 (const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:170>
		return;
	}
}
// Method Definition Index: 78116
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_CanPlay_mFFF359E6E875933036961CAFC069B32989DA533F (const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:185>
		return (bool)0;
	}
}
// Method Definition Index: 78117
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_SetCurrentGamepad_m575002631169740B5FE069AABB0B027049205B3D (int32_t ___0_gamepadID, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:240>
		return;
	}
}
// Method Definition Index: 78118
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_IsConnected_mD3EA909001C5BB4BACA421C42FC7244BEC11CD15 (const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:258>
		return (bool)0;
	}
}
// Method Definition Index: 78119
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Load_m98F6602C87AD124ECDD629CD00D5EBEF8563345A (GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 ___0_rumble, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:282>
		return;
	}
}
// Method Definition Index: 78120
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Play_m43B8664528C63A77B17FF1027F72B5CF421AE3D2 (const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:301>
		return;
	}
}
// Method Definition Index: 78121
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Stop_m5CDA6A7D1F191046DEDF2AA37EFDD030A63920F9 (const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:318>
		return;
	}
}
// Method Definition Index: 78122
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Unload_mEC8030BBE6C2FD9FDB87B20469FEB4E70AB26564 (const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/Gamepad.cs:332>
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
// Method Definition Index: 78123
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticClip__ctor_mDB818615E9073D26B347B1E56B1F03731EEE47B6 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// Method Definition Index: 78124
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HapticController_get_fallbackPreset_mFB148A0F3EAABF5B2B9B2EE591D70616B8E00548 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:73>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____fallbackPreset;
		return L_0;
	}
}
// Method Definition Index: 78125
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_fallbackPreset_m59C957576E33F13392F08310B4E5F8D610CA2EA1 (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:74>
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____fallbackPreset = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:74>
		return;
	}
}
// Method Definition Index: 78126
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:84>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled;
		return L_0;
	}
}
// Method Definition Index: 78127
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_hapticsEnabled_m9A2E6CA744C9D85358114BEFE898155E0C958C2B (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:87>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:89>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5(NULL);
	}

IL_000c:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:91>
		bool L_1 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled = L_1;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:92>
		return;
	}
}
// Method Definition Index: 78128
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticController_get_outputLevel_mB9E570F29478F1DD5DCAF278000A0243D2884953 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:122>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel;
		return L_0;
	}
}
// Method Definition Index: 78129
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_outputLevel_m259DA805820909202D9A3919CEDFFB7256B4BBCC (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:125>
		float L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:127>
		HapticController_ApplyLevelsToLofeltHaptics_m5ACDECB79785ED4783E5F97AF6DBD854F33A0726(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:128>
		HapticController_ApplyLevelsToGamepadRumbler_m9D1B96D0E2AE8863A88A3262E165398AB2FD9948(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:129>
		return;
	}
}
// Method Definition Index: 78130
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:170>
		float L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____clipLevel = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:172>
		HapticController_ApplyLevelsToLofeltHaptics_m5ACDECB79785ED4783E5F97AF6DBD854F33A0726(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:173>
		HapticController_ApplyLevelsToGamepadRumbler_m9D1B96D0E2AE8863A88A3262E165398AB2FD9948(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:174>
		return;
	}
}
// Method Definition Index: 78131
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ApplyLevelsToLofeltHaptics_m5ACDECB79785ED4783E5F97AF6DBD854F33A0726 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:198>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:200>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_1 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel;
		float L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____clipLevel;
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_SetAmplitudeMultiplication_m21AF8A0DBE888DF4354815DC65FD3C5635AA6684(((float)il2cpp_codegen_multiply(L_1, L_2)), NULL);
	}

IL_0017:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:202>
		return;
	}
}
// Method Definition Index: 78132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ApplyLevelsToGamepadRumbler_m9D1B96D0E2AE8863A88A3262E165398AB2FD9948 (const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:212>
		return;
	}
}
// Method Definition Index: 78133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_U3CInitU3Eb__0_m22F895CE0EE10591001E1596E6BFAC84B4668465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* V_0 = NULL;
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:235>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lofeltHapticsInitalized;
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* L_1 = (U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass29_0__ctor_mD835FCF0A9C4B2768A4B61013CBBD419DB8BD684(L_1, NULL);
		V_0 = L_1;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:237>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lofeltHapticsInitalized = (bool)1;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:239>
		U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* L_2 = V_0;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3;
		L_3 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		NullCheck(L_2);
		L_2->___syncContext = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___syncContext), (void*)L_3);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:240>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:241>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:242>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:243>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:244>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:245>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:246>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:247>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:248>
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_4 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer;
		U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* L_5 = V_0;
		ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* L_6 = (ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51*)il2cpp_codegen_object_new(ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51_il2cpp_TypeInfo_var);
		ElapsedEventHandler__ctor_mAB5D9F11BB0B719A17105C636543958CC6F78CBD(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass29_0_U3CInitU3Eb__0_m22F895CE0EE10591001E1596E6BFAC84B4668465_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Timer_add_Elapsed_mA30E2E614E703D6FD8260EB10575C0FB719C0B5D(L_4, L_6, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:250>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline(NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:252>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_Initialize_m5A160C65E0C3709121B048C91AED126CE2C642E8(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:253>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		DeviceCapabilities_Init_m7AC099423DD92EFAC32183C356021EBC63C89C47(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:254>
		bool L_8;
		L_8 = DeviceCapabilities_get_meetsAdvancedRequirements_m2501828C362AB5507BF4EE8BF1E9FCEE92CDDA46_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___deviceMeetsAdvancedRequirements = L_8;
	}

IL_004f:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:257>
		GamepadRumbler_Init_m6C2B658F77FFBA6ABB7461D141E3E6A8463CF197(NULL);
	}

IL_0054:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:259>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_9 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___deviceMeetsAdvancedRequirements;
		return L_9;
	}
}
// Method Definition Index: 78134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mE6AA251161ED4A27476BC30C51AD716D49B15573 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:275>
		GamepadRumbler_Unload_mEC8030BBE6C2FD9FDB87B20469FEB4E70AB26564(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:276>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime = (0.0f);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:277>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoaded = (bool)1;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:278>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDurationSecs = (0.0f);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:279>
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:281>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_Load_mEDE5AABA9357F121B6B13D5EFABAD832DE2D9FDC(L_1, NULL);
	}

IL_002c:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:283>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF((1.0f), NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:284>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___LoadedClipChanged;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0040;
		}
		G_B3_0 = L_3;
	}
	{
		return;
	}

IL_0040:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:285>
		return;
	}
}
// Method Definition Index: 78135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mE91A8FCA5AD81A52B0960D91A9A57E644B3A6D83 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* ___0_clip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:299>
		HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* L_0 = ___0_clip;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___json;
		HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* L_2 = ___0_clip;
		NullCheck(L_2);
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_3 = L_2->___gamepadRumble;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mB19C1D42F42F987DAF09066928F5FF3CE97440FA(L_1, L_3, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:300>
		return;
	}
}
// Method Definition Index: 78136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mB19C1D42F42F987DAF09066928F5FF3CE97440FA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_json, GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 ___1_rumble, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:315>
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_json;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mE6AA251161ED4A27476BC30C51AD716D49B15573(L_0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:317>
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_1 = ___1_rumble;
		GamepadRumbler_Load_m98F6602C87AD124ECDD629CD00D5EBEF8563345A(L_1, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:320>
		HapticController_ApplyLevelsToGamepadRumbler_m9D1B96D0E2AE8863A88A3262E165398AB2FD9948(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:325>
		float L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDurationSecs;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		bool L_3;
		L_3 = GamepadRumble_IsValid_m77AAB239FF848FBF602F878764E3FA50B6A4BFB2((&___1_rumble), NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:327>
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_4 = ___1_rumble;
		int32_t L_5 = L_4.___totalDurationMs;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDurationSecs = ((float)(((float)L_5)/(1000.0f)));
	}

IL_0038:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:329>
		return;
	}
}
// Method Definition Index: 78137
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:333>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime = (0.0f);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:334>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping = (bool)0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:335>
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer;
		NullCheck(L_0);
		Timer_set_Enabled_m96249C4F2CB558B6B65BBA006B55B4423830F38D(L_0, (bool)0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:336>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStopped;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0025;
		}
		G_B1_0 = L_2;
	}
	{
		return;
	}

IL_0025:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:337>
		return;
	}
}
// Method Definition Index: 78138
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B10_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B9_0 = NULL;
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:352>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:354>
		return;
	}

IL_0008:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:357>
		V_0 = (0.0f);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:358>
		V_1 = (bool)0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:359>
		bool L_1;
		L_1 = GamepadRumbler_CanPlay_mFFF359E6E875933036961CAFC069B32989DA533F(NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:361>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDurationSecs;
		V_0 = L_2;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:362>
		GamepadRumbler_Play_m43B8664528C63A77B17FF1027F72B5CF421AE3D2(NULL);
		goto IL_006a;
	}

IL_0024:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:364>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:366>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_4 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDurationSecs;
		float L_5 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime;
		float L_6;
		L_6 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_4, L_5)), (0.0f), NULL);
		V_0 = L_6;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:367>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = DeviceCapabilities_get_canLoop_m69DF52370C735DBBD712DB92B96F8961B5A469CD_inline(NULL);
		V_1 = L_7;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:368>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_Play_mD458011A67C0A99B637B629B2B805E1D919814C7(NULL);
		goto IL_006a;
	}

IL_004e:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:370>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline(NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:372>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = HapticController_get_fallbackPreset_mFB148A0F3EAABF5B2B9B2EE591D70616B8E00548_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		float L_10;
		L_10 = HapticPatterns_GetPresetDuration_m1BC31066EDB5BF1475BB55ABC4CADC5FD7CAE692(L_9, NULL);
		V_0 = L_10;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:373>
		int32_t L_11;
		L_11 = HapticController_get_fallbackPreset_mFB148A0F3EAABF5B2B9B2EE591D70616B8E00548_inline(NULL);
		HapticPatterns_PlayPreset_m4BBC460337643C4051BA3AC077AAD1E2BB4B9B90(L_11, NULL);
	}

IL_006a:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:376>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_12 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isLoopingEnabledByUser;
		bool L_13 = V_1;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping = (bool)((int32_t)((int32_t)L_12&(int32_t)L_13));
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:377>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStarted;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = L_14;
		if (L_15)
		{
			G_B10_0 = L_15;
			goto IL_0081;
		}
		G_B9_0 = L_15;
	}
	{
		goto IL_0086;
	}

IL_0081:
	{
		NullCheck(G_B10_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B10_0, NULL);
	}

IL_0086:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:382>
		float L_16 = V_0;
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:384>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_17 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer;
		float L_18 = V_0;
		NullCheck(L_17);
		Timer_set_Interval_m85B315A45E5CC4B9E5BA84891636B7F368A05536(L_17, ((double)((float)il2cpp_codegen_multiply(L_18, (1000.0f)))), NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:385>
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_19 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer;
		NullCheck(L_19);
		Timer_set_AutoReset_mCDD4362A339ADAA69BAB7FE596BE400C161C328D(L_19, (bool)0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:386>
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_20 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer;
		bool L_21 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping;
		NullCheck(L_20);
		Timer_set_Enabled_m96249C4F2CB558B6B65BBA006B55B4423830F38D(L_20, (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}

IL_00be:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:396>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:398>
		return;
	}
}
// Method Definition Index: 78139
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_m94EADABB22195E52670B54015B577DB2F7071196 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* ___0_clip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:408>
		HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* L_0 = ___0_clip;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mE91A8FCA5AD81A52B0960D91A9A57E644B3A6D83(L_0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:409>
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:410>
		return;
	}
}
// Method Definition Index: 78140
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:419>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:421>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_Stop_m1AC86C07B8885A42AB5D5988F5C6C3BC55FA642B(NULL);
		goto IL_0013;
	}

IL_000e:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:425>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_StopPattern_mDA2719D6A8F90D32D956ED4E01401774F9B80AC5(NULL);
	}

IL_0013:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:427>
		GamepadRumbler_Stop_m5CDA6A7D1F191046DEDF2AA37EFDD030A63920F9(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:428>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:429>
		return;
	}
}
// Method Definition Index: 78141
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Seek_mF49BDF3CE3FE84E2412324A917067F7D37919D64 (float ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:446>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:448>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_Stop_m1AC86C07B8885A42AB5D5988F5C6C3BC55FA642B(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:449>
		float L_1 = ___0_time;
		LofeltHaptics_Seek_m6F57DA36A2D3780A7CCDF9F2E3E0A14C1ED66D4E(L_1, NULL);
	}

IL_0012:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:451>
		GamepadRumbler_Stop_m5CDA6A7D1F191046DEDF2AA37EFDD030A63920F9(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:452>
		float L_2 = ___0_time;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime = L_2;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:453>
		return;
	}
}
// Method Definition Index: 78142
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipFrequencyShift_m46D7B83FD3D5FEFF6B9E039DA1685C58ECFE6612 (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:478>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:480>
		float L_1 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_SetFrequencyShift_m58733F5BB1A11401DE5E843F34ADB79C318AD318(L_1, NULL);
	}

IL_000d:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:482>
		return;
	}
}
// Method Definition Index: 78143
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:501>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:503>
		bool L_1 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_Loop_m37A6519C484CE0B973B41C0A4C2244A85D5D314B(L_1, NULL);
	}

IL_000d:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:505>
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isLoopingEnabledByUser = L_2;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:506>
		return;
	}
}
// Method Definition Index: 78144
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_IsPlaying_m2184DE06BA77A234A514D91B286CE8BF2FA27482 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:515>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer;
		NullCheck(L_0);
		bool L_1;
		L_1 = Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:517>
		return (bool)1;
	}

IL_000e:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:521>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping;
		return L_2;
	}
}
// Method Definition Index: 78145
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Reset_m56A1A297436721691F696EFD3DB7D0B13FB41EF6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:535>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoaded;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:537>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Seek_mF49BDF3CE3FE84E2412324A917067F7D37919D64((0.0f), NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:538>
		HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:539>
		HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF((1.0f), NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:540>
		HapticController_set_clipFrequencyShift_m46D7B83FD3D5FEFF6B9E039DA1685C58ECFE6612((0.0f), NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:541>
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA((bool)0, NULL);
	}

IL_0030:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:543>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_fallbackPreset_m59C957576E33F13392F08310B4E5F8D610CA2EA1_inline((-1), NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:544>
		return;
	}
}
// Method Definition Index: 78146
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ProcessApplicationFocus_m161EAF2B8408B1AC9C74C9D2D41F637071C93C07 (bool ___0_hasFocus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:559>
		bool L_0 = ___0_hasFocus;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:564>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5(NULL);
	}

IL_0008:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:566>
		return;
	}
}
// Method Definition Index: 78147
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController__cctor_m40C60252FDF3595FE36B626765CC6535F8DE012B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:41>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lofeltHapticsInitalized = (bool)0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:44>
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_0 = (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B*)il2cpp_codegen_object_new(Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B_il2cpp_TypeInfo_var);
		Timer__ctor_mB9CD175ABB2BB47E091B70C9E6A5CEB00D48A2B0(L_0, NULL);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer), (void*)L_0);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:47>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDurationSecs = (0.0f);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:50>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoaded = (bool)0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:53>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime = (0.0f);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:56>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___deviceMeetsAdvancedRequirements = (bool)0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:61>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isLoopingEnabledByUser = (bool)0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:64>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping = (bool)0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:66>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____fallbackPreset = (-1);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:77>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled = (bool)1;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:95>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel = (1.0f);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:132>
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____clipLevel = (1.0f);
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
// Method Definition Index: 78148
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m58DA66EECA7FC11F5017378F195B53629FC6498E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* L_0 = (U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4*)il2cpp_codegen_object_new(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4BE54460DE9013F0322B55C7F93B41BB7F1B9479(L_0, NULL);
		((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
// Method Definition Index: 78149
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4BE54460DE9013F0322B55C7F93B41BB7F1B9479 (U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Method Definition Index: 78150
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitU3Eb__29_1_m1BCEBEB3A93822C03F9BFD601A7EBC1FB8CA6755 (U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* __this, RuntimeObject* ___0__, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:246>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:247>
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
// Method Definition Index: 78151
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mD835FCF0A9C4B2768A4B61013CBBD419DB8BD684 (U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Method Definition Index: 78152
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CInitU3Eb__0_m22F895CE0EE10591001E1596E6BFAC84B4668465 (U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* __this, RuntimeObject* ___0_obj, ElapsedEventArgs_t74C1E2D692A82825805E5EC84EE73F5B053027C1* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__29_1_m1BCEBEB3A93822C03F9BFD601A7EBC1FB8CA6755_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B2_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B2_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B1_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B1_1 = NULL;
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:244>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:245>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:246>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:247>
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = __this->___syncContext;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = ((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9__29_1;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
		G_B1_0 = L_2;
		G_B1_1 = L_0;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* L_3 = ((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_4 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CInitU3Eb__29_1_m1BCEBEB3A93822C03F9BFD601A7EBC1FB8CA6755_RuntimeMethod_var), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_5 = L_4;
		((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9__29_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9__29_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B2_1, G_B2_0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:248>
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
// Method Definition Index: 78153
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns__cctor_m5BBA1A97FFA4808B41A0ABBBE04029209BDC8C46 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____291429BD4426C606843ABEB925268AD87767305C4AC8069D1191FFDE90A3499F_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____34A0AC4C4C065F0140B16ECC7E9690749B60C5C0EB2D6021CC75FEEBDCDCA61F_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____DF8E296768F9446BD84A1631B3922DAA86C5CC0EFB71B660BF0B6DF542707096_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B63886015A4191332EA3F977B1146A0B78A6E82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC444FDC3B86DC5349F7224E5C2605245C0859BA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:28>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantPatternTime = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantPatternTime), (void*)L_0);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:221>
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteralC444FDC3B86DC5349F7224E5C2605245C0859BA1, NULL);
		NullCheck(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_1, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_1, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)), NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___emphasisTemplate = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___emphasisTemplate), (void*)L_2);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:222>
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteral8B63886015A4191332EA3F977B1146A0B78A6E82, NULL);
		NullCheck(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_3, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)));
		String_t* L_4;
		L_4 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_3, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)), NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantTemplate = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantTemplate), (void*)L_4);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:224>
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_5 = (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472*)il2cpp_codegen_object_new(NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		NumberFormatInfo__ctor_m94502038B1DB45D50D1331C312DDAD0D80CD608C(L_5, NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat), (void*)L_5);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:225>
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_6 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat;
		NullCheck(L_6);
		NumberFormatInfo_set_NumberDecimalSeparator_mEC8D7493863AD768CF6107DE7617811E1105DF10(L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:230>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:231>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0399999991f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.470999986f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.470999986f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_12), 0, L_8, L_11, NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Selection = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Selection))->___maximumAmplitudePattern), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Selection))->___jsonClip), (void*)NULL);
		#endif
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:233>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:234>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = L_13;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0399999991f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.156000003f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.156000003f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_18), 4, L_14, L_17, NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Light = L_18;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Light))->___maximumAmplitudePattern), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Light))->___jsonClip), (void*)NULL);
		#endif
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:236>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:237>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = L_19;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0799999982f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = L_21;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.470999986f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = L_22;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.470999986f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_24), 5, L_20, L_23, NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Medium = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Medium))->___maximumAmplitudePattern), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Medium))->___jsonClip), (void*)NULL);
		#endif
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:239>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:240>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = L_25;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.159999996f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_27;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = L_28;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(1.0f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_30), 6, L_26, L_29, NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Heavy = L_30;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Heavy))->___maximumAmplitudePattern), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Heavy))->___jsonClip), (void*)NULL);
		#endif
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:242>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:243>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_31;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0399999991f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = L_33;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = L_34;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(1.0f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_36), 7, L_32, L_35, NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Rigid = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Rigid))->___maximumAmplitudePattern), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Rigid))->___jsonClip), (void*)NULL);
		#endif
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:245>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:246>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = L_37;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.159999996f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = L_39;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.156000003f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = L_40;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.156000003f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_42), 8, L_38, L_41, NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Soft = L_42;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Soft))->___maximumAmplitudePattern), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Soft))->___jsonClip), (void*)NULL);
		#endif
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:248>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:249>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_43 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_44 = L_43;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_45 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____34A0AC4C4C065F0140B16ECC7E9690749B60C5C0EB2D6021CC75FEEBDCDCA61F_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_44, L_45, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47 = L_46;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.157000005f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = L_47;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)(1.0f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_49), 1, L_44, L_48, NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Success = L_49;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Success))->___maximumAmplitudePattern), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Success))->___jsonClip), (void*)NULL);
		#endif
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:251>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:252>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:253>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)8);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_51 = L_50;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_52 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____291429BD4426C606843ABEB925268AD87767305C4AC8069D1191FFDE90A3499F_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_51, L_52, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)8);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = L_53;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_55 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_54, L_55, NULL);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_56), 3, L_51, L_54, NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Failure = L_56;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Failure))->___maximumAmplitudePattern), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Failure))->___jsonClip), (void*)NULL);
		#endif
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:255>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:256>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_57 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = L_57;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_59 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____DF8E296768F9446BD84A1631B3922DAA86C5CC0EFB71B660BF0B6DF542707096_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_58, L_59, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_60 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = L_60;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(1.0f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_62 = L_61;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)(0.469999999f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_63), 2, L_58, L_62, NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Warning = L_63;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Warning))->___maximumAmplitudePattern), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Warning))->___jsonClip), (void*)NULL);
		#endif
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:257>
		return;
	}
}
// Method Definition Index: 78154
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayEmphasis_mADB063BD86C4E57BDABA6E4CBAD7490BF18C58D8 (float ___0_amplitude, float ___1_frequency, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A5A4A501BAA6FD3ED4EBE9BFC926066FCBD5ABE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DD0B794D236B1414F02F76E8AF03EDCDC5FD17);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	String_t* V_2 = NULL;
	GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:271>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		String_t* L_0 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___emphasisTemplate;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline(NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}

IL_000e:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:273>
		return;
	}

IL_000f:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:278>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		bool L_3;
		L_3 = GamepadRumbler_IsConnected_mD3EA909001C5BB4BACA421C42FC7244BEC11CD15(NULL);
		if (!L_3)
		{
			goto IL_00b6;
		}
	}

IL_0020:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:280>
		float L_4 = ___0_amplitude;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.0f), (1.0f), NULL);
		V_0 = L_5;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:281>
		float L_6 = ___1_frequency;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, (0.0f), (1.0f), NULL);
		V_1 = L_7;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:284>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:285>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:286>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:287>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		String_t* L_8 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___emphasisTemplate;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_9 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat;
		String_t* L_10;
		L_10 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_0), L_9, NULL);
		NullCheck(L_8);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_8, _stringLiteral61DD0B794D236B1414F02F76E8AF03EDCDC5FD17, L_10, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_12 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat;
		String_t* L_13;
		L_13 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_1), L_12, NULL);
		NullCheck(L_11);
		String_t* L_14;
		L_14 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_11, _stringLiteral1A5A4A501BAA6FD3ED4EBE9BFC926066FCBD5ABE, L_13, NULL);
		V_4 = (0.100000001f);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_15 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat;
		String_t* L_16;
		L_16 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_4), L_15, NULL);
		NullCheck(L_14);
		String_t* L_17;
		L_17 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_14, _stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B, L_16, NULL);
		V_2 = L_17;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:290>
		il2cpp_codegen_initobj((&V_3), sizeof(GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240));
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:297>
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_18;
		L_18 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_19 = V_2;
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_18, L_19);
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_21 = V_3;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mB19C1D42F42F987DAF09066928F5FF3CE97440FA(L_20, L_21, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:298>
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA((bool)0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:299>
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		return;
	}

IL_00b6:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:303>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline(NULL);
		if (!L_22)
		{
			goto IL_00d0;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:306>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = L_23;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0500000007f));
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_PlayMaximumAmplitudePattern_m9750CD1982EA6A6D924C464F135250FB6569C1F7(L_24, NULL);
	}

IL_00d0:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:312>
		return;
	}
}
// Method Definition Index: 78155
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayConstant_m3BA7755FE8E837E0B45A29FAD5D5784D0CC2E4BF (float ___0_amplitude, float ___1_frequency, float ___2_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	String_t* V_3 = NULL;
	GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:357>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		String_t* L_0 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantTemplate;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline(NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}

IL_000e:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:359>
		return;
	}

IL_000f:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:362>
		float L_2 = ___0_amplitude;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), (1.0f), NULL);
		V_0 = L_3;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:363>
		float L_4 = ___1_frequency;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.0f), (1.0f), NULL);
		V_1 = L_5;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:364>
		float L_6 = ___2_duration;
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_6, (0.0f), NULL);
		V_2 = L_7;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:366>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:367>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		String_t* L_8 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantTemplate;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_9 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat;
		String_t* L_10;
		L_10 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_2), L_9, NULL);
		NullCheck(L_8);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_8, _stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B, L_10, NULL);
		V_3 = L_11;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:370>
		il2cpp_codegen_initobj((&V_4), sizeof(GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240));
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:390>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (L_12)
		{
			goto IL_006f;
		}
	}
	{
		bool L_13;
		L_13 = GamepadRumbler_IsConnected_mD3EA909001C5BB4BACA421C42FC7244BEC11CD15(NULL);
		if (!L_13)
		{
			goto IL_0099;
		}
	}

IL_006f:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:392>
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
		L_14 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_15 = V_3;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_14, L_15);
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_17 = V_4;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mB19C1D42F42F987DAF09066928F5FF3CE97440FA(L_16, L_17, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:393>
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA((bool)0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:394>
		float L_18 = V_0;
		HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF(L_18, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:395>
		float L_19 = V_1;
		HapticController_set_clipFrequencyShift_m46D7B83FD3D5FEFF6B9E039DA1685C58ECFE6612(L_19, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:396>
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		return;
	}

IL_0099:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:398>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline(NULL);
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:401>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantPatternTime;
		float L_22 = ___2_duration;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_22);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:402>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantPatternTime;
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_PlayMaximumAmplitudePattern_m9750CD1982EA6A6D924C464F135250FB6569C1F7(L_23, NULL);
	}

IL_00b2:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:407>
		return;
	}
}
// Method Definition Index: 78156
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 HapticPatterns_GetPresetForType_m9FC81F286C1CCB677B62EBE48CB2E930102AEB37 (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_type;
		switch (L_0)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0032;
			}
			case 5:
			{
				goto IL_0038;
			}
			case 6:
			{
				goto IL_003e;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_002c:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:416>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_1 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Selection;
		return L_1;
	}

IL_0032:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:418>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_2 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Light;
		return L_2;
	}

IL_0038:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:420>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_3 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Medium;
		return L_3;
	}

IL_003e:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:422>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_4 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Heavy;
		return L_4;
	}

IL_0044:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:424>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_5 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Rigid;
		return L_5;
	}

IL_004a:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:426>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_6 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Soft;
		return L_6;
	}

IL_0050:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:428>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_7 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Success;
		return L_7;
	}

IL_0056:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:430>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_8 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Failure;
		return L_8;
	}

IL_005c:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:432>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_9 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Warning;
		return L_9;
	}

IL_0062:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:436>
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_10 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Medium;
		return L_10;
	}
}
// Method Definition Index: 78157
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayPreset_m4BBC460337643C4051BA3AC077AAD1E2BB4B9B90 (int32_t ___0_presetType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:461>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline(NULL);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_presetType;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:463>
		return;
	}

IL_000c:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:466>
		int32_t L_2 = ___0_presetType;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_3;
		L_3 = HapticPatterns_GetPresetForType_m9FC81F286C1CCB677B62EBE48CB2E930102AEB37(L_2, NULL);
		V_0 = L_3;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:472>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		bool L_5;
		L_5 = GamepadRumbler_IsConnected_mD3EA909001C5BB4BACA421C42FC7244BEC11CD15(NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}

IL_0021:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:477>
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6.___jsonClip;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mE6AA251161ED4A27476BC30C51AD716D49B15573(L_7, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:479>
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA((bool)0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:480>
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:481>
		return;
	}

IL_0038:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:484>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline(NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:487>
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_9 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = L_9.___maximumAmplitudePattern;
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_PlayMaximumAmplitudePattern_m9750CD1982EA6A6D924C464F135250FB6569C1F7(L_10, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:488>
		return;
	}

IL_004b:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:492>
		return;
	}
}
// Method Definition Index: 78158
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticPatterns_GetPresetDuration_m1BC31066EDB5BF1475BB55ABC4CADC5FD7CAE692 (int32_t ___0_presetType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:505>
		int32_t L_0 = ___0_presetType;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:507>
		return (0.0f);
	}

IL_000a:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:510>
		int32_t L_1 = ___0_presetType;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_2;
		L_2 = HapticPatterns_GetPresetForType_m9FC81F286C1CCB677B62EBE48CB2E930102AEB37(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Preset_GetDuration_mB77C3715AAA5BA8308AE5F760CDC922CFE2218A2((&V_0), NULL);
		return L_3;
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
IL2CPP_EXTERN_C void Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshal_pinvoke(const Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72& unmarshaled, Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_pinvoke& marshaled)
{
	marshaled.___time = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___time);
	marshaled.___amplitude = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___amplitude);
}
IL2CPP_EXTERN_C void Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshal_pinvoke_back(const Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_pinvoke& marshaled, Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72& unmarshaled)
{
	unmarshaled.___time = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___time);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___time), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___time));
	unmarshaled.___amplitude = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___amplitude);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___amplitude), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___amplitude));
}
IL2CPP_EXTERN_C void Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshal_pinvoke_cleanup(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___time);
	marshaled.___time = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___amplitude);
	marshaled.___amplitude = NULL;
}
IL2CPP_EXTERN_C void Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshal_com(const Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72& unmarshaled, Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_com& marshaled)
{
	marshaled.___time = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___time);
	marshaled.___amplitude = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___amplitude);
}
IL2CPP_EXTERN_C void Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshal_com_back(const Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_com& marshaled, Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72& unmarshaled)
{
	unmarshaled.___time = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___time);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___time), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___time));
	unmarshaled.___amplitude = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___amplitude);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___amplitude), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___amplitude));
}
IL2CPP_EXTERN_C void Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshal_com_cleanup(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___time);
	marshaled.___time = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___amplitude);
	marshaled.___amplitude = NULL;
}
// Method Definition Index: 78159
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pattern__cctor_mBAA5690044E47856D7F8A0B6748D07DC3B0A6B4D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2135703B40B414C092DF068E8FAA55E46FFB30B);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:61>
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteralA2135703B40B414C092DF068E8FAA55E46FFB30B, NULL);
		NullCheck(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_0, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)));
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_0, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)), NULL);
		((Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_StaticFields*)il2cpp_codegen_static_fields_for(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var))->___clipJsonTemplate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_StaticFields*)il2cpp_codegen_static_fields_for(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var))->___clipJsonTemplate), (void*)L_1);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:62>
		return;
	}
}
// Method Definition Index: 78160
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pattern__ctor_m0381400DEF8AC63215B136B318282B8B39D7CE22 (Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_time, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_amplitude, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:66>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_time;
		__this->___time = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___time), (void*)L_0);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:67>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___1_amplitude;
		__this->___amplitude = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___amplitude), (void*)L_1);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:68>
		return;
	}
}
IL2CPP_EXTERN_C  void Pattern__ctor_m0381400DEF8AC63215B136B318282B8B39D7CE22_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_time, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_amplitude, const RuntimeMethod* method)
{
	Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72*>(__this + _offset);
	Pattern__ctor_m0381400DEF8AC63215B136B318282B8B39D7CE22(_thisAdjusted, ___0_time, ___1_amplitude, method);
}
// Method Definition Index: 78161
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pattern_ToClip_mFD7C70C9687B1FAD4AB50B7D082C0C07F5754FBD (Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B481BD414EE082CA5F33A7513CDB2D68ADAF594);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CF167CD5E0AB4195BC6B1A4DEDCCEEA1E9E954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F8B953FE2D84FB48669F1FF532EB963C0006E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:105>
		il2cpp_codegen_runtime_class_init_inline(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_StaticFields*)il2cpp_codegen_static_fields_for(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var))->___clipJsonTemplate;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:107>
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000d:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:110>
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:111>
		V_1 = 0;
		goto IL_009f;
	}

IL_001a:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:113>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___amplitude;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.0f), (1.0f), NULL);
		V_2 = L_5;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:114>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:115>
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4B481BD414EE082CA5F33A7513CDB2D68ADAF594);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = __this->___time;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_13 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat;
		String_t* L_14;
		L_14 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), L_13, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_10;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD8F8B953FE2D84FB48669F1FF532EB963C0006E0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_17 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat;
		String_t* L_18;
		L_18 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_2), L_17, NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_16;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_20;
		L_20 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_19, NULL);
		V_0 = L_20;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:118>
		int32_t L_21 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___time;
		NullCheck(L_22);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_21, 1))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_009b;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:120>
		String_t* L_23 = V_0;
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_23, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		V_0 = L_24;
	}

IL_009b:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:111>
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_009f:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:111>
		int32_t L_26 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = __this->___time;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:124>
		il2cpp_codegen_runtime_class_init_inline(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var);
		String_t* L_28 = ((Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_StaticFields*)il2cpp_codegen_static_fields_for(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var))->___clipJsonTemplate;
		String_t* L_29 = V_0;
		NullCheck(L_28);
		String_t* L_30;
		L_30 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_28, _stringLiteralC5CF167CD5E0AB4195BC6B1A4DEDCCEEA1E9E954, L_29, NULL);
		return L_30;
	}
}
IL2CPP_EXTERN_C  String_t* Pattern_ToClip_mFD7C70C9687B1FAD4AB50B7D082C0C07F5754FBD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Pattern_ToClip_mFD7C70C9687B1FAD4AB50B7D082C0C07F5754FBD(_thisAdjusted, method);
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
IL2CPP_EXTERN_C void Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshal_pinvoke(const Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828& unmarshaled, Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_pinvoke& marshaled)
{
	marshaled.___type = unmarshaled.___type;
	marshaled.___maximumAmplitudePattern = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___maximumAmplitudePattern);
	marshaled.___jsonClip = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___jsonClip);
}
IL2CPP_EXTERN_C void Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshal_pinvoke_back(const Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_pinvoke& marshaled, Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828& unmarshaled)
{
	int32_t unmarshaledtype_temp_0 = 0;
	unmarshaledtype_temp_0 = marshaled.___type;
	unmarshaled.___type = unmarshaledtype_temp_0;
	unmarshaled.___maximumAmplitudePattern = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___maximumAmplitudePattern);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___maximumAmplitudePattern), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___maximumAmplitudePattern));
	unmarshaled.___jsonClip = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___jsonClip);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___jsonClip), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___jsonClip));
}
IL2CPP_EXTERN_C void Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshal_pinvoke_cleanup(Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___maximumAmplitudePattern);
	marshaled.___maximumAmplitudePattern = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___jsonClip);
	marshaled.___jsonClip = NULL;
}
IL2CPP_EXTERN_C void Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshal_com(const Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828& unmarshaled, Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_com& marshaled)
{
	marshaled.___type = unmarshaled.___type;
	marshaled.___maximumAmplitudePattern = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___maximumAmplitudePattern);
	marshaled.___jsonClip = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___jsonClip);
}
IL2CPP_EXTERN_C void Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshal_com_back(const Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_com& marshaled, Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828& unmarshaled)
{
	int32_t unmarshaledtype_temp_0 = 0;
	unmarshaledtype_temp_0 = marshaled.___type;
	unmarshaled.___type = unmarshaledtype_temp_0;
	unmarshaled.___maximumAmplitudePattern = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___maximumAmplitudePattern);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___maximumAmplitudePattern), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, il2cpp_defaults.single_class, marshaled.___maximumAmplitudePattern));
	unmarshaled.___jsonClip = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___jsonClip);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___jsonClip), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___jsonClip));
}
IL2CPP_EXTERN_C void Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshal_com_cleanup(Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___maximumAmplitudePattern);
	marshaled.___maximumAmplitudePattern = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___jsonClip);
	marshaled.___jsonClip = NULL;
}
// Method Definition Index: 78162
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572 (Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828* __this, int32_t ___0_type, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_time, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_amplitude, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:152>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___1_time;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___2_amplitude;
		il2cpp_codegen_runtime_class_init_inline(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var);
		Pattern__ctor_m0381400DEF8AC63215B136B318282B8B39D7CE22((&V_0), L_0, L_1, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:153>
		int32_t L_2 = ___0_type;
		__this->___type = L_2;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:154>
		Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72 L_3 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3.___time;
		__this->___maximumAmplitudePattern = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___maximumAmplitudePattern), (void*)L_4);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:158>
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_6;
		L_6 = Pattern_ToClip_mFD7C70C9687B1FAD4AB50B7D082C0C07F5754FBD((&V_0), NULL);
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17, L_5, L_6);
		__this->___jsonClip = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonClip), (void*)L_7);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:159>
		return;
	}
}
IL2CPP_EXTERN_C  void Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572_AdjustorThunk (RuntimeObject* __this, int32_t ___0_type, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_time, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_amplitude, const RuntimeMethod* method)
{
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828*>(__this + _offset);
	Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572(_thisAdjusted, ___0_type, ___1_time, ___2_amplitude, method);
}
// Method Definition Index: 78163
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Preset_GetDuration_mB77C3715AAA5BA8308AE5F760CDC922CFE2218A2 (Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:163>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___maximumAmplitudePattern;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:165>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___maximumAmplitudePattern;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___maximumAmplitudePattern;
		NullCheck(L_2);
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}

IL_001b:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticPatterns.cs:169>
		return (0.0f);
	}
}
IL2CPP_EXTERN_C  float Preset_GetDuration_mB77C3715AAA5BA8308AE5F760CDC922CFE2218A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828*>(__this + _offset);
	float _returnValue;
	_returnValue = Preset_GetDuration_mB77C3715AAA5BA8308AE5F760CDC922CFE2218A2(_thisAdjusted, method);
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
// Method Definition Index: 78164
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnBeforeSerialize_mAC3F0A794D3B3BB97A17630C16DE51AD67DA2320 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:46>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel;
		__this->____outputLevel = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:47>
		bool L_1 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled;
		__this->____hapticsEnabled = L_1;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:48>
		return;
	}
}
// Method Definition Index: 78165
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnAfterDeserialize_m10FDB611EB984973EB6A0358D5292351CE06CC62 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:55>
		float L_0 = __this->____outputLevel;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:56>
		bool L_1 = __this->____hapticsEnabled;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled = L_1;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:57>
		return;
	}
}
// Method Definition Index: 78166
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticReceiver_get_outputLevel_mC029EBAB921E8C7D447DCCC9FC3C45E2734F4150 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:65>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = HapticController_get_outputLevel_mB9E570F29478F1DD5DCAF278000A0243D2884953_inline(NULL);
		return L_0;
	}
}
// Method Definition Index: 78167
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_set_outputLevel_m22FCEED4A4B265D2ACCFA3816EF859FB775F5EB6 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:66>
		float L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_outputLevel_m259DA805820909202D9A3919CEDFFB7256B4BBCC(L_0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:66>
		return;
	}
}
// Method Definition Index: 78168
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticReceiver_get_hapticsEnabled_m5B81D63CED671A10B43781F8785B8F32CD635786 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:76>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline(NULL);
		return L_0;
	}
}
// Method Definition Index: 78169
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_set_hapticsEnabled_m7C35DD37097709CA60A8A6260173C712EC65F295 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:77>
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_hapticsEnabled_m9A2E6CA744C9D85358114BEFE898155E0C958C2B(L_0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:77>
		return;
	}
}
// Method Definition Index: 78170
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_Start_mC7A9F46B022D38A6256754E433666E4BA59DA06A (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:88>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:89>
		return;
	}
}
// Method Definition Index: 78171
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnApplicationFocus_m7D6CBD7E855F2DBB1AF9994DF36A16CD46BB9D22 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, bool ___0_hasFocus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:96>
		bool L_0 = ___0_hasFocus;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_ProcessApplicationFocus_m161EAF2B8408B1AC9C74C9D2D41F637071C93C07(L_0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:97>
		return;
	}
}
// Method Definition Index: 78172
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnDestroy_mA8F67FBFECC00C0DED192B6090AB23069AE532C0 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:105>
		GamepadRumbler_Stop_m5CDA6A7D1F191046DEDF2AA37EFDD030A63920F9(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:106>
		return;
	}
}
// Method Definition Index: 78173
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver__ctor_m44CDE6A5C3CEF92FF8F24700252218F271B3AB9D (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:37>
		__this->____outputLevel = (1.0f);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticReceiver.cs:39>
		__this->____hapticsEnabled = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Method Definition Index: 78174
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HapticSource_get_fallbackPreset_mEECE617416CB3FF45437D70015336FE602735397 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:66>
		int32_t L_0 = __this->____fallbackPreset;
		return L_0;
	}
}
// Method Definition Index: 78175
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_fallbackPreset_m6D5470B79AFFE3806503BE1C2860A90EDF58F05A (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:67>
		int32_t L_0 = ___0_value;
		__this->____fallbackPreset = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:67>
		return;
	}
}
// Method Definition Index: 78176
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:83>
		bool L_0 = __this->____loop;
		return L_0;
	}
}
// Method Definition Index: 78177
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_loop_m5A9856EDEDE05D7E78C6B6C17FE98EDBEC8E0D3E (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:84>
		bool L_0 = ___0_value;
		__this->____loop = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:84>
		return;
	}
}
// Method Definition Index: 78178
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticSource_get_level_m7C663BF92A50D6DB6E85BCE06F43DB56819B3F10 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:102>
		float L_0 = __this->____level;
		return L_0;
	}
}
// Method Definition Index: 78179
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_level_m1878F51C56E15FB35DE1F104AA07AC922EF97133 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:105>
		float L_0 = ___0_value;
		__this->____level = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:107>
		bool L_1;
		L_1 = HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9(__this, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:109>
		float L_2 = __this->____level;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF(L_2, NULL);
	}

IL_001a:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:111>
		return;
	}
}
// Method Definition Index: 78180
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:126>
		float L_0 = __this->____frequencyShift;
		return L_0;
	}
}
// Method Definition Index: 78181
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_frequencyShift_m0D869341950D6085920988E55EA2FAB5BA70B619 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:129>
		float L_0 = ___0_value;
		__this->____frequencyShift = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:131>
		bool L_1;
		L_1 = HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9(__this, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:133>
		float L_2 = __this->____frequencyShift;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_clipFrequencyShift_m46D7B83FD3D5FEFF6B9E039DA1685C58ECFE6612(L_2, NULL);
	}

IL_001a:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:135>
		return;
	}
}
// Method Definition Index: 78182
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource__cctor_m64699115A21D5F953360E19A122FC9D79A7805DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__22_0_mD1B7C55840B8789E575D17F2E28BE41222F05C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__22_1_m839E6085723C13399E8AAFD10EFE88461E10F11D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:155>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:156>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:157>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:158>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___LoadedClipChanged;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var);
		U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* L_1 = ((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, L_1, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__22_0_mD1B7C55840B8789E575D17F2E28BE41222F05C1A_RuntimeMethod_var), NULL);
		Delegate_t* L_3;
		L_3 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_2, NULL);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___LoadedClipChanged = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_3, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___LoadedClipChanged), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_3, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:159>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:160>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:161>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:162>
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStarted;
		U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* L_5 = ((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__22_1_m839E6085723C13399E8AAFD10EFE88461E10F11D_RuntimeMethod_var), NULL);
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_6, NULL);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStarted = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStarted), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:163>
		return;
	}
}
// Method Definition Index: 78183
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Play_mBE8536FBE9D12DBE92814A33C1930C5F9306D2A4 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:180>
		bool L_0;
		L_0 = HapticSource_CanPlay_m6573EFA48B841878DF318B0D14F0C1B0CC67C9CE(__this, NULL);
		if (!L_0)
		{
			goto IL_0070;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:185>
		HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* L_1 = __this->___clip;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mE91A8FCA5AD81A52B0960D91A9A57E644B3A6D83(L_1, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:186>
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource), (void*)__this);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:191>
		bool L_2;
		L_2 = HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937_inline(__this, NULL);
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA(L_2, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:193>
		float L_3;
		L_3 = HapticSource_get_level_m7C663BF92A50D6DB6E85BCE06F43DB56819B3F10_inline(__this, NULL);
		HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF(L_3, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:194>
		float L_4;
		L_4 = HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4_inline(__this, NULL);
		HapticController_set_clipFrequencyShift_m46D7B83FD3D5FEFF6B9E039DA1685C58ECFE6612(L_4, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:196>
		float L_5 = __this->___seekTime;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_005a;
		}
	}
	{
		bool L_6;
		L_6 = HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937_inline(__this, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:198>
		float L_7 = __this->___seekTime;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Seek_mF49BDF3CE3FE84E2412324A917067F7D37919D64(L_7, NULL);
	}

IL_005a:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:204>
		int32_t L_8;
		L_8 = HapticSource_get_fallbackPreset_mEECE617416CB3FF45437D70015336FE602735397_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_fallbackPreset_m59C957576E33F13392F08310B4E5F8D610CA2EA1_inline(L_8, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:205>
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:206>
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource), (void*)__this);
	}

IL_0070:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:208>
		return;
	}
}
// Method Definition Index: 78184
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_CanPlay_m6573EFA48B841878DF318B0D14F0C1B0CC67C9CE (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:212>
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:213>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_IsPlaying_m2184DE06BA77A234A514D91B286CE8BF2FA27482(NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* L_1 = ((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->___priority;
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* L_4 = ((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource;
		NullCheck(L_4);
		int32_t L_5 = L_4->___priority;
		return (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002a:
	{
		return (bool)0;
	}

IL_002c:
	{
		return (bool)1;
	}
}
// Method Definition Index: 78185
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:224>
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* L_0 = ((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource;
		return (bool)((((RuntimeObject*)(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)__this) == ((RuntimeObject*)(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)L_0))? 1 : 0);
	}
}
// Method Definition Index: 78186
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Stop_m565E771BCE6FE1F62EE12F0267211C9CCAE3EC00 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:232>
		bool L_0;
		L_0 = HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9(__this, NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:234>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5(NULL);
	}

IL_000d:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:236>
		return;
	}
}
// Method Definition Index: 78187
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Seek_m112488608ADFCCD47EF2DBE4E4EB28D43E01587E (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, float ___0_time, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:247>
		float L_0 = ___0_time;
		__this->___seekTime = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:248>
		return;
	}
}
// Method Definition Index: 78188
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_OnDisable_m8A98EDED152930790E5B539AD788E5B5381226E7 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:256>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_IsPlaying_m2184DE06BA77A234A514D91B286CE8BF2FA27482(NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:258>
		HapticSource_Stop_m565E771BCE6FE1F62EE12F0267211C9CCAE3EC00(__this, NULL);
	}

IL_0015:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:260>
		return;
	}
}
// Method Definition Index: 78189
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource__ctor_m5F9E6ECB9B30C268948DCE62F8A8CA604C9A6267 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:47>
		__this->___priority = ((int32_t)128);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:58>
		__this->____fallbackPreset = (-1);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:88>
		__this->____level = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Method Definition Index: 78190
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6088842D3BFC9959BCAA1DE2CD8CFC0B4983F111 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* L_0 = (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE*)il2cpp_codegen_object_new(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5D6483E39A7DF2468D6200E50958D5AE115FF193(L_0, NULL);
		((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
// Method Definition Index: 78191
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5D6483E39A7DF2468D6200E50958D5AE115FF193 (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Method Definition Index: 78192
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__22_0_mD1B7C55840B8789E575D17F2E28BE41222F05C1A (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:157>
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource = (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource), (void*)(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:158>
		return;
	}
}
// Method Definition Index: 78193
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__22_1_m839E6085723C13399E8AAFD10EFE88461E10F11D (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:161>
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource = (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource), (void*)(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:162>
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
// Method Definition Index: 78194
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JNIHelpers_javaThrowableToString_m161BACA2F355C3D73F8AACD8C58C0DA6EC1E3117 (intptr_t ___0_throwable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:38>
		intptr_t L_0;
		L_0 = AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9(_stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C, NULL);
		V_0 = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:39>
		intptr_t L_1;
		L_1 = AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9(_stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{
				{
					//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:51>
					intptr_t L_2 = ___0_throwable;
					bool L_3;
					L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_2, 0, NULL);
					if (!L_3)
					{
						goto IL_0087;
					}
				}
				{
					//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:52>
					intptr_t L_4 = ___0_throwable;
					AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB(L_4, NULL);
				}

IL_0087:
				{
					//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:53>
					intptr_t L_5 = V_0;
					bool L_6;
					L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_5, 0, NULL);
					if (!L_6)
					{
						goto IL_009a;
					}
				}
				{
					//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:54>
					intptr_t L_7 = V_0;
					AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB(L_7, NULL);
				}

IL_009a:
				{
					//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:55>
					intptr_t L_8 = V_1;
					bool L_9;
					L_9 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_8, 0, NULL);
					if (!L_9)
					{
						goto IL_00ad;
					}
				}
				{
					//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:56>
					intptr_t L_10 = V_1;
					AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB(L_10, NULL);
				}

IL_00ad:
				{
					//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:57>
					return;
				}
			}
		});
		try
		{
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:42>
			intptr_t L_11 = V_0;
			intptr_t L_12;
			L_12 = AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549(L_11, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, _stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56, NULL);
			V_2 = L_12;
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:43>
			intptr_t L_13 = V_1;
			intptr_t L_14;
			L_14 = AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3(L_13, _stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3, _stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB, NULL);
			V_3 = L_14;
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:44>
			intptr_t L_15 = ___0_throwable;
			intptr_t L_16 = V_2;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_17 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)0);
			String_t* L_18;
			L_18 = AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C(L_15, L_16, L_17, NULL);
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:45>
			il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_19 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs;
			NullCheck(L_19);
			intptr_t L_20 = ___0_throwable;
			((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l = L_20;
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:46>
			intptr_t L_21 = V_1;
			intptr_t L_22 = V_3;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_23 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs;
			String_t* L_24;
			L_24 = AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB(L_21, L_22, L_23, NULL);
			V_4 = L_24;
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:47>
			String_t* L_25 = V_4;
			String_t* L_26;
			L_26 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_18, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_25, NULL);
			V_5 = L_26;
			goto IL_00ae;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ae:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:58>
		String_t* L_27 = V_5;
		return L_27;
	}
}
// Method Definition Index: 78195
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_m9EB5BCDAE56AE45AE865173DAB134FB35C011C75 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, intptr_t ___1_methodId, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_jniArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:62>
		intptr_t L_0 = ___1_methodId;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:64>
		return;
	}

IL_000e:
	{
	}
	try
	{
		{
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:69>
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_obj;
			NullCheck(L_2);
			intptr_t L_3;
			L_3 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_2, NULL);
			intptr_t L_4 = ___1_methodId;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_5 = ___2_jniArgs;
			AndroidJNI_CallVoidMethod_mFCFF6A5FF4A51305C3D2DBFB3A0699617EF40D48(L_3, L_4, L_5, NULL);
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:70>
			intptr_t L_6;
			L_6 = AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C(NULL);
			V_0 = L_6;
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:71>
			intptr_t L_7 = V_0;
			bool L_8;
			L_8 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_7, 0, NULL);
			if (!L_8)
			{
				goto IL_003f_1;
			}
		}
		{
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:73>
			AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8(NULL);
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:74>
			intptr_t L_9 = V_0;
			il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
			String_t* L_10;
			L_10 = JNIHelpers_javaThrowableToString_m161BACA2F355C3D73F8AACD8C58C0DA6EC1E3117(L_9, NULL);
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:75>
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_10, NULL);
		}

IL_003f_1:
		{
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:77>
			goto IL_0048;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{
		Exception_t* L_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:80>
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_11, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:81>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0048;
	}

IL_0048:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:82>
		return;
	}
}
// Method Definition Index: 78196
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_m4C7983BAB087B9A0C617F22D80760AC83698D7F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, intptr_t ___1_methodId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:86>
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs;
		NullCheck(L_0);
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l = 0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:87>
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_obj;
		intptr_t L_2 = ___1_methodId;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs;
		JNIHelpers_Call_m9EB5BCDAE56AE45AE865173DAB134FB35C011C75(L_1, L_2, L_3, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:88>
		return;
	}
}
// Method Definition Index: 78197
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_mE02DC3C0B0732DF8C4144494DA6AAC36509D53AD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, intptr_t ___1_methodId, float ___2_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:92>
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs;
		NullCheck(L_0);
		float L_1 = ___2_arg;
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___f = L_1;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:93>
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_obj;
		intptr_t L_3 = ___1_methodId;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_4 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs;
		JNIHelpers_Call_m9EB5BCDAE56AE45AE865173DAB134FB35C011C75(L_2, L_3, L_4, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:94>
		return;
	}
}
// Method Definition Index: 78198
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_mF7C012A9DDF145A65C9FCFCD82B612E6FBB4B9A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, intptr_t ___1_methodId, bool ___2_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:98>
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs;
		NullCheck(L_0);
		bool L_1 = ___2_arg;
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___z = L_1;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:99>
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_obj;
		intptr_t L_3 = ___1_methodId;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_4 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs;
		JNIHelpers_Call_m9EB5BCDAE56AE45AE865173DAB134FB35C011C75(L_2, L_3, L_4, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:100>
		return;
	}
}
// Method Definition Index: 78199
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_mFEB7DB3EDB24CC2CB122A7F496F76E2A81DE6660 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_obj, intptr_t ___1_methodId, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:106>
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___2_arg;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		V_0 = L_1;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:107>
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_4;
		L_4 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001c:
			{
				//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:114>
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_5, L_6, NULL);
				//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:115>
				return;
			}
		});
		try
		{
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:110>
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ___0_obj;
			intptr_t L_8 = ___1_methodId;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9 = V_1;
			il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
			JNIHelpers_Call_m9EB5BCDAE56AE45AE865173DAB134FB35C011C75(L_7, L_8, L_9, NULL);
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:111>
			goto IL_0024;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:116>
		return;
	}
}
// Method Definition Index: 78201
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers__cctor_m0788E9C1F14716808C7F7719AAD8CE4BB9207FC1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/JNIHelpers.cs:33>
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)1);
		((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs), (void*)L_0);
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
// Method Definition Index: 78202
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_lofeltHapticsLoadDirect_m212DB3189B44BE54F822058250FAE6FFBB72500B (intptr_t ___0_controller, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, int64_t ___2_size, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lofelt_sdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lofelt_sdk"), "lofeltHapticsLoadDirect", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	uint8_t* ____1_bytes_marshaled = NULL;
	if (___1_bytes != NULL)
	{
		____1_bytes_marshaled = reinterpret_cast<uint8_t*>((___1_bytes)->GetAddressAtUnchecked(0));
	}

	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lofelt_sdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lofeltHapticsLoadDirect)(___0_controller, ____1_bytes_marshaled, ___2_size);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_controller, ____1_bytes_marshaled, ___2_size);
	#endif

	return static_cast<bool>(returnValue);
}
// Method Definition Index: 78203
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Initialize_m5A160C65E0C3709121B048C91AED126CE2C642E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00DCAF10AB031EC7D7077B627288147A71E45F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A446C6F48B1189B2EBA5A31AA341FDB440088E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11A4FE01BF2A9FE8159B9EA16D64D70159683C53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral155B036AB9502432CB2CCD80790FF33D3227823D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1590B1DD196F96A11A36B50B360EB57178EEF954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41122A25B762B3B469C8461B4F6196CC75D3EF6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48247C19229E69D84C5E6BDDE317DBE03A31CDD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E079158CE53A6B1B96591E1222924C388B17C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E3AEAEF7966AC50BEA811A1C12092709305E19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3CF9BBC2C80F53F057554706A4681C9C5301858);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:116>
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
			V_0 = L_0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_012a_1:
				{
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
						if (!L_1)
						{
							goto IL_0133_1;
						}
					}
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
						NullCheck(L_2);
						InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
					}

IL_0133_1:
					{
						return;
					}
				}
			});
			try
			{
				{
					//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:117>
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
					NullCheck(L_3);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
					L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
					V_1 = L_4;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_011e_2:
						{
							{
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
								if (!L_5)
								{
									goto IL_0127_2;
								}
							}
							{
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
								NullCheck(L_6);
								InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
							}

IL_0127_2:
							{
								return;
							}
						}
					});
					try
					{
						//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:119>
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_1;
						NullCheck(L_8);
						ArrayElementTypeCheck (L_8, L_9);
						(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
						AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_10, _stringLiteralC7E3AEAEF7966AC50BEA811A1C12092709305E19, L_8, NULL);
						il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics = L_10;
						Il2CppCodeGenWriteBarrier((void**)(&((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics), (void*)L_10);
						//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:120>
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
						L_12 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
						NullCheck(L_11);
						int64_t L_13;
						L_13 = AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9(L_11, _stringLiteral41122A25B762B3B469C8461B4F6196CC75D3EF6A, L_12, AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___nativeController = L_13;
						//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:121>
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_1;
						NullCheck(L_15);
						ArrayElementTypeCheck (L_15, L_16);
						(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
						AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_17, _stringLiteralD3CF9BBC2C80F53F057554706A4681C9C5301858, L_15, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns = L_17;
						Il2CppCodeGenWriteBarrier((void**)(&((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns), (void*)L_17);
						//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:123>
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
						NullCheck(L_18);
						intptr_t L_19;
						L_19 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_18, NULL);
						intptr_t L_20;
						L_20 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_19, _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8, _stringLiteral00DCAF10AB031EC7D7077B627288147A71E45F07, (bool)0, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___playMethodId = L_20;
						//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:124>
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
						NullCheck(L_21);
						intptr_t L_22;
						L_22 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_21, NULL);
						intptr_t L_23;
						L_23 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_22, _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7, _stringLiteral00DCAF10AB031EC7D7077B627288147A71E45F07, (bool)0, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___stopMethodId = L_23;
						//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:125>
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
						NullCheck(L_24);
						intptr_t L_25;
						L_25 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_24, NULL);
						intptr_t L_26;
						L_26 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_25, _stringLiteral11A4FE01BF2A9FE8159B9EA16D64D70159683C53, _stringLiteral48247C19229E69D84C5E6BDDE317DBE03A31CDD3, (bool)0, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___seekMethodId = L_26;
						//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:126>
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_27 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
						NullCheck(L_27);
						intptr_t L_28;
						L_28 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_27, NULL);
						intptr_t L_29;
						L_29 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_28, _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125, _stringLiteral155B036AB9502432CB2CCD80790FF33D3227823D, (bool)0, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___loopMethodId = L_29;
						//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:127>
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
						NullCheck(L_30);
						intptr_t L_31;
						L_31 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_30, NULL);
						intptr_t L_32;
						L_32 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_31, _stringLiteral1590B1DD196F96A11A36B50B360EB57178EEF954, _stringLiteral48247C19229E69D84C5E6BDDE317DBE03A31CDD3, (bool)0, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___setAmplitudeMultiplicationMethodId = L_32;
						//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:128>
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_33 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns;
						NullCheck(L_33);
						intptr_t L_34;
						L_34 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_33, NULL);
						intptr_t L_35;
						L_35 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_34, _stringLiteralC5E079158CE53A6B1B96591E1222924C388B17C2, _stringLiteral0A446C6F48B1189B2EBA5A31AA341FDB440088E9, (bool)0, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___playMaximumAmplitudePattern = L_35;
						//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:129>
						goto IL_0128_2;
					}
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0128_2:
				{
					goto IL_0134_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0134_1:
		{
			//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:130>
			goto IL_013d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0136;
		}
		throw e;
	}

CATCH_0136:
	{
		Exception_t* L_36 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:133>
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_36, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:134>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_013d;
	}

IL_013d:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:140>
		return;
	}
}
// Method Definition Index: 78204
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Release_m2BC88E4D61DCF47A38B87D8C2D8921846B08BA21 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:150>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
		NullCheck(L_0);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_0, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:151>
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics), (void*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:153>
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns;
		NullCheck(L_1);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_1, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:154>
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns), (void*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:155>
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{
		Exception_t* L_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:158>
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_2, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:159>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:169>
		return;
	}
}
// Method Definition Index: 78205
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA44DFF94D6AA7697C8ADB77FB3A367BA465B869);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:174>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5(L_0, _stringLiteralCA44DFF94D6AA7697C8ADB77FB3A367BA465B869, JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5_RuntimeMethod_var);
		return L_1;
	}
}
// Method Definition Index: 78206
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Load_mEDE5AABA9357F121B6B13D5EFABAD832DE2D9FDC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:192>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		int64_t L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___nativeController;
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_data;
		NullCheck(L_3);
		bool L_4;
		L_4 = LofeltHaptics_lofeltHapticsLoadDirect_m212DB3189B44BE54F822058250FAE6FFBB72500B(L_1, L_2, ((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:196>
		return;
	}
}
// Method Definition Index: 78207
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Play_mD458011A67C0A99B637B629B2B805E1D919814C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:213>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
		intptr_t L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___playMethodId;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		JNIHelpers_Call_m4C7983BAB087B9A0C617F22D80760AC83698D7F5(L_0, L_1, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:217>
		return;
	}
}
// Method Definition Index: 78208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_PlayMaximumAmplitudePattern_m9750CD1982EA6A6D924C464F135250FB6569C1F7 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_timings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:222>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns;
		intptr_t L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___playMaximumAmplitudePattern;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_timings;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		JNIHelpers_Call_mFEB7DB3EDB24CC2CB122A7F496F76E2A81DE6660(L_0, L_1, L_2, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:224>
		return;
	}
}
// Method Definition Index: 78209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Stop_m1AC86C07B8885A42AB5D5988F5C6C3BC55FA642B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:229>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
		intptr_t L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___stopMethodId;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		JNIHelpers_Call_m4C7983BAB087B9A0C617F22D80760AC83698D7F5(L_0, L_1, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:233>
		return;
	}
}
// Method Definition Index: 78210
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_StopPattern_mDA2719D6A8F90D32D956ED4E01401774F9B80AC5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C46D0AA262A0625365CD273F8B2BF1234988C04);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:240>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral1C46D0AA262A0625365CD273F8B2BF1234988C04, L_1, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:241>
		goto IL_001d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		Exception_t* L_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:244>
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_2, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:245>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001d;
	}

IL_001d:
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:247>
		return;
	}
}
// Method Definition Index: 78211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Seek_m6F57DA36A2D3780A7CCDF9F2E3E0A14C1ED66D4E (float ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:252>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
		intptr_t L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___seekMethodId;
		float L_2 = ___0_time;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		JNIHelpers_Call_mE02DC3C0B0732DF8C4144494DA6AAC36509D53AD(L_0, L_1, L_2, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:256>
		return;
	}
}
// Method Definition Index: 78212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetAmplitudeMultiplication_m21AF8A0DBE888DF4354815DC65FD3C5635AA6684 (float ___0_factor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:261>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
		intptr_t L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___setAmplitudeMultiplicationMethodId;
		float L_2 = ___0_factor;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		JNIHelpers_Call_mE02DC3C0B0732DF8C4144494DA6AAC36509D53AD(L_0, L_1, L_2, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:265>
		return;
	}
}
// Method Definition Index: 78213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetFrequencyShift_m58733F5BB1A11401DE5E843F34ADB79C318AD318 (float ___0_shift, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:272>
		return;
	}
}
// Method Definition Index: 78214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Loop_m37A6519C484CE0B973B41C0A4C2244A85D5D314B (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:277>
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics;
		intptr_t L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___loopMethodId;
		bool L_2 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		JNIHelpers_Call_mF7C012A9DDF145A65C9FCFCD82B612E6FBB4B9A6(L_0, L_1, L_2, NULL);
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:281>
		return;
	}
}
// Method Definition Index: 78215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics__cctor_m54B75BFF5FC94404F3D625D8B3A2E510DF415481 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:46>
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___playMethodId = 0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:47>
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___stopMethodId = 0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:48>
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___seekMethodId = 0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:49>
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___loopMethodId = 0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:50>
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___setAmplitudeMultiplicationMethodId = 0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/LofeltHaptics.cs:51>
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___playMaximumAmplitudePattern = 0;
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
// Method Definition Index: 78106
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeviceCapabilities_get_platformVersion_m0A60F6AEB62C7F305D64E89587392EFDCE4E4186_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:29>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CplatformVersionU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78108
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:72>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CisVersionSupportedU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 78107
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_meetsAdvancedRequirements_m2501828C362AB5507BF4EE8BF1E9FCEE92CDDA46_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:56>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____meetsAdvancedRequirements;
		return L_0;
	}
}
// Method Definition Index: 838
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 44289
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 78111
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_canLoop_m69DF52370C735DBBD712DB92B96F8961B5A469CD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/DeviceCapabilities.cs:154>
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____canLoop;
		return L_0;
	}
}
// Method Definition Index: 78124
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HapticController_get_fallbackPreset_mFB148A0F3EAABF5B2B9B2EE591D70616B8E00548_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:73>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____fallbackPreset;
		return L_0;
	}
}
// Method Definition Index: 38419
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___enabled;
		return L_0;
	}
}
// Method Definition Index: 78125
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HapticController_set_fallbackPreset_m59C957576E33F13392F08310B4E5F8D610CA2EA1_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:74>
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____fallbackPreset = L_0;
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:74>
		return;
	}
}
// Method Definition Index: 78126
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:84>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled;
		return L_0;
	}
}
// Method Definition Index: 44303
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 78128
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticController_get_outputLevel_mB9E570F29478F1DD5DCAF278000A0243D2884953_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticController.cs:122>
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel;
		return L_0;
	}
}
// Method Definition Index: 78176
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:83>
		bool L_0 = __this->____loop;
		return L_0;
	}
}
// Method Definition Index: 78178
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_level_m7C663BF92A50D6DB6E85BCE06F43DB56819B3F10_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:102>
		float L_0 = __this->____level;
		return L_0;
	}
}
// Method Definition Index: 78180
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:126>
		float L_0 = __this->____frequencyShift;
		return L_0;
	}
}
// Method Definition Index: 78174
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HapticSource_get_fallbackPreset_mEECE617416CB3FF45437D70015336FE602735397_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:F:/Juego edificios/Assets/Scenes/Feel/NiceVibrations/Scripts/Components/HapticSource.cs:66>
		int32_t L_0 = __this->____fallbackPreset;
		return L_0;
	}
}
// Method Definition Index: 3703
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 3702
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 3141
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
