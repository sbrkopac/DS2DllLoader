#pragma once

class FuelSys {
public:
	DefineSingleton(FuelSys, 0x40a63d);

	DefineMethod(DebugShowHandleAccess, 0x409714, bool, NO_PARAMS, NO_ARGS);
	DefineMethod(DebugSetShowHandleAccess, 0x409707, void, Params(bool unk1), Args(unk1));
	DefineMethod(SetUncachingEnabled, 0x640c04, void, Params(bool unk1), Args(unk1));
	DefineMethod(Unload, 0x640b84, void, NO_PARAMS, NO_ARGS);
};
