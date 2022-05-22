#pragma once
#include "CoreMinimal.h"
#include "WeaponUserInterface.h"
#include "GbxWeaponUserInterface.generated.h"

UINTERFACE()
class GBXWEAPON_API UGbxWeaponUserInterface : public UWeaponUserInterface {
    GENERATED_BODY()
};

class GBXWEAPON_API IGbxWeaponUserInterface : public IWeaponUserInterface {
    GENERATED_BODY()
public:
};

