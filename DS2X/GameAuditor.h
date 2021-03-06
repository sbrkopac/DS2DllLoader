#pragma once

#include "AuditorDb.h"

class GameAuditor : public AuditorDb {
public:
	DefineSingleton(GameAuditor, 0x414146);

	DefineStaticMethod(FUBI_Inheritance, 0x411771, int, Params(AuditorDb* unk1), Args(unk1));
	DefineMethod(AddDb, 0x85f599, AuditorDb*, Params(const char* unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(FindDb, 0x85e576, AuditorDb*, Params(const char* unk1), Args(unk1));
	DefineMethod(GetDb, 0x411718, AuditorDb*, NO_PARAMS, NO_ARGS);
	DefineMethod(RCSet, 0x85ff4d, void, Params(const char* unk1, int unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSet, 0x41171b, void, Params(const char* unk1, int unk2), Args(unk1, unk2));
	DefineMethod(RCSet, 0x860039, void, Params(int unk1, const char* unk2, int unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RCSet, 0x41172f, void, Params(int unk1, const char* unk2, int unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSetBool, 0x860128, void, Params(const char* unk1, bool unk2, unsigned long unk3), Args(unk1, unk2, unk3));
	DefineMethod(RCSetBool, 0x411746, void, Params(const char* unk1, bool unk2), Args(unk1, unk2));
	DefineMethod(RCSetBool, 0x860214, void, Params(int unk1, const char* unk2, bool unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RCSetBool, 0x41175a, void, Params(int unk1, const char* unk2, bool unk3), Args(unk1, unk2, unk3));

	// 0x00
	// AuditorDb;
};
