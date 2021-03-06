#pragma once

#include "UIWindow.h"



class UIObjectView : public UIWindow {
public:
	DefineStaticMethod(FUBI_Inheritance, 0x442384, int, Params(UIWindow* unk1), Args(unk1));
	DefineMethod(AddElement, 0x772bd0, bool, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const gpbstring<char>& unk3, const vector_3& unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(CameraPosCenterOnElement, 0x771110, bool, Params(const gpbstring<char>& unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(CameraPosCenterOnElement, 0x4424e8, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(CameraPosZoomInOnTarget, 0x4424f9, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCameraUseGameAspectRatio, 0x44251d, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetCameraUserCanTargetBones, 0x442529, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetDownButtonState, 0x442535, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetElementScreenName, 0x772020, bool, Params(const gpbstring<char>& unk1, gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(GetFeetPlantWithScale, 0x442405, bool, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetIgnoreScale, 0x442442, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetUpdateObjectCenter, 0x4423e2, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(GetUpdateObjectOrient, 0x4423c2, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(HasElementTag, 0x770fe0, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(RemoveElement, 0x771890, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SelectElement, 0x771fd0, bool, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(SetElementData, 0x771300, bool, Params(const gpbstring<char>& unk1, unsigned long unk2), Args(unk1, unk2));
	DefineMethod(SetObjectId, 0x7704e0, bool, Params(unsigned long unk1), Args(unk1));
	DefineMethod(GetElementName, 0x7718e0, gpbstring<char>, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetElementWindow, 0x770fb0, UIWindow*, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(GetElementTagByIndex, 0x770b80, const gpbstring<char>&, Params(unsigned int unk1), Args(unk1));
	DefineConstMethod(GetElementTagByName, 0x771340, const gpbstring<char>&, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(GetSelectedElementTag, 0x76edb0, const gpbstring<char>&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetObjectOrientation, 0x442395, const Quat&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCameraPos, 0x44248c, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCameraPosCurrent, 0x4424a8, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCameraPosInitial, 0x4424af, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCameraPosLookAt, 0x4424cb, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCameraPosMax, 0x4424bd, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCameraPosMin, 0x4424b6, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCameraPosStep, 0x4424c4, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCameraPosZoomInTarget, 0x4424d2, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCameraPosZoomOutTarget, 0x4424d9, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineMethod(GetElementPos, 0x771050, const vector_3&, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineMethod(GetElementWorldPos, 0x771090, const vector_3&, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(GetObjectCenter, 0x44238e, const vector_3&, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCameraPosX, 0x442493, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCameraPosY, 0x44249a, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetCameraPosZ, 0x4424a1, float, NO_PARAMS, NO_ARGS);
	DefineConstMethod(GetNumElements, 0x76f250, int, NO_PARAMS, NO_ARGS);
	DefineMethod(GetElementData, 0x7710d0, unsigned long, Params(const gpbstring<char>& unk1), Args(unk1));
	DefineConstMethod(GetObjectId, 0x442387, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(GetSelectedObjectBone, 0x442421, unsigned long, NO_PARAMS, NO_ARGS);
	DefineMethod(CameraPosCenterOnObject, 0x4424e0, void, NO_PARAMS, NO_ARGS);
	DefineMethod(CameraPosCenterOnObject, 0x76f4d0, void, Params(bool unk1), Args(unk1));
	DefineMethod(CameraPosStepInZ, 0x770610, void, NO_PARAMS, NO_ARGS);
	DefineMethod(CameraPosStepOutZ, 0x770750, void, NO_PARAMS, NO_ARGS);
	DefineMethod(SendMessageToElementGroup, 0x772170, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2), Args(unk1, unk2));
	DefineMethod(SetAspectAnimChore, 0x771f40, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, unsigned long unk3, unsigned long unk4, bool unk5), Args(unk1, unk2, unk3, unk4, unk5));
	DefineMethod(SetCameraPos, 0x76f260, void, Params(const vector_3& unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(SetCameraPos, 0x44244d, void, Params(const vector_3& unk1), Args(unk1));
	DefineMethod(SetCameraPosX, 0x76f370, void, Params(float unk1), Args(unk1));
	DefineMethod(SetCameraPosY, 0x76f3f0, void, Params(float unk1), Args(unk1));
	DefineMethod(SetCameraPosZ, 0x76f470, void, Params(float unk1), Args(unk1));
	DefineMethod(SetCameraPosZoomInTarget, 0x44245e, void, Params(const vector_3& unk1), Args(unk1));
	DefineMethod(SetCameraPosZoomOutTarget, 0x442475, void, Params(const vector_3& unk1), Args(unk1));
	DefineMethod(SetCameraUseGameAspectRatio, 0x442503, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetElementGroupAlpha, 0x770ee0, void, Params(const gpbstring<char>& unk1, float unk2), Args(unk1, unk2));
	DefineMethod(SetFeetPlantWithScale, 0x4423eb, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetObjectCenter, 0x76ed90, void, Params(const vector_3& unk1), Args(unk1));
	DefineMethod(SetObjectHeight, 0x770570, void, Params(float unk1), Args(unk1));
	DefineMethod(SetObjectOrientation, 0x44239c, void, Params(const Quat& unk1), Args(unk1));
	DefineMethod(SetSelectedObjectBone, 0x442411, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(SetSmoothTightness, 0x76edc0, void, Params(const vector_3& unk1), Args(unk1));
	DefineMethod(SetUpdateAnimation, 0x442428, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetUpdateObjectCenter, 0x4423cb, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetUpdateObjectOrient, 0x4423ab, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetZoomSliderWindow, 0x770890, void, Params(UISlider* unk1), Args(unk1));
};
