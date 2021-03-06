#pragma once

class GoHire {
public:
	DefineStaticMethod(FUBI_NetToInstance, 0x4cfe90, GoHire*, Params(unsigned long unk1, FuBi::Cookie__** unk2), Args(unk1, unk2));
	DefineStaticMethod(FUBI_InstanceToNet, 0x4cfe87, unsigned long, Params(GoHire* unk1), Args(unk1));
	DefineMethod(RCCreateCharacter, 0x95c814, void, Params(const gpbstring<char>& unk1, const CharacterStats& unk2, const Goid_* unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RCGenerateHires, 0x95d73b, void, Params(unsigned long unk1), Args(unk1));
	DefineMethod(RCSetCharacterStats, 0x95e138, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const CharacterStats& unk3, unsigned long unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSCompletePurchase, 0x95c38d, void, Params(const Goid_* unk1, const Goid_* unk2), Args(unk1, unk2));
	DefineMethod(RSCreateCharacter, 0x95cc0c, void, Params(const gpbstring<char>& unk1, const gpbstring<char>& unk2, const CharacterStats& unk3, int unk4), Args(unk1, unk2, unk3, unk4));
	DefineMethod(RSGenerateHires, 0x95e561, void, Params(const Goid_* unk1), Args(unk1));
};
