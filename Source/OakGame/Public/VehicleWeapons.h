#pragma once
#include "CoreMinimal.h"
#include "VehicleWeapons.generated.h"

UENUM(BlueprintType)
enum class VehicleWeapons : uint8 {
    Technical_BarrelLauncher,
    Technical_StickyBombs,
    Technical_TireBombs,
    Outrunner_HeavyMissile,
    Outrunner_SwarmerMissile,
    Outrunner_ShotgunMissile,
    Emperor_Entropy,
    Emperor_Hellfire,
    Outrunner_FlameThrower,
    Outrunner_TeslaCoil,
    Technical_MachineGun,
    Technical_FlakCannon,
    Revolver_SpikeLauncher,
    Revolver_SawBladeLauncher,
    Revolver_GrenadeLauncher,
    Emperor_PulseRifle,
    Emperor_BouncingLaser,
};

