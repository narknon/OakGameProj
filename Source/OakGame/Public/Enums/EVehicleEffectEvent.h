#pragma once
#include "CoreMinimal.h"
#include "EVehicleEffectEvent.generated.h"

UENUM(BlueprintType)
enum class EVehicleEffectEvent : uint8 {
    None,
    Boost,
    BoostChargeCountChanged,
    BoostPoolEmpty,
    BoostPoolFull,
    StartEngine,
    Braking,
    Hover,
    Horn,
    Digithrust,
    ShieldBreak,
    ShieldHealthEvent_Normal,
    ShieldHealthEvent_Low,
    ShieldHealthEvent_VeryLow,
    ShieldFullHealth,
    Backfire,
    MaxRPMBackfire,
    HealthEvent_Healthy,
    HealthEvent_Low,
    HealthEvent_VeryLow,
    HealthEvent_Dead,
    StatusEffect_CryoFrozen,
    StatusEffect_CryoThawing,
    StatusEffect_Cryo,
    StatusEffect_Corrosive,
    StatusEffect_Shock,
    StatusEffect_Fire,
    StatusEffect_Radiation,
};

