#pragma once
#include "CoreMinimal.h"
#include "EWeaponActionType.generated.h"

UENUM(BlueprintType)
enum EWeaponActionType {
    EWAT_Default,
    EWAT_Use,
    EWAT_Reload,
    EWAT_Equip,
    EWAT_PutDown,
    EWAT_UseModeSwitch,
    EWAT_Charge,
    EWAT_Charged,
    EWAT_Overcharged,
    EWAT_ResetFireSequence,
    EWAT_Discharge,
    EWAT_EngineWeaponActionType6,
    EWAT_EngineWeaponActionType7,
    EWAT_EngineWeaponActionType8,
    EWAT_GameWeaponActionType1,
    EWAT_GameWeaponActionType2,
    EWAT_GameWeaponActionType3,
    EWAT_GameWeaponActionType4,
    EWAT_GameWeaponActionType5,
    EWAT_GameWeaponActionType6,
    EWAT_GameWeaponActionType7,
    EWAT_GameWeaponActionType8,
    EWAT_MAX UMETA(Hidden),
};

