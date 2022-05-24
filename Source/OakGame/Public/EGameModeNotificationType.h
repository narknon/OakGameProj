#pragma once
#include "CoreMinimal.h"
#include "EGameModeNotificationType.generated.h"

UENUM(BlueprintType)
enum class EGameModeNotificationType : uint8 {
    None,
    Raid_RaidSurvived,
    Raid_TeleporterActivated,
    Raid_Defeat,
    Raid_PlayerIsOut,
    Raid_Start,
    Raid_CountDown,
    COS_Victory,
    COS_Defeat,
    COS_Wave,
    COS_NotAllPlayersAssembled,
    GearUp_Victory,
    GearUp_Defeat,
    GearUp_Respawn,
    GearUp_Start,
    GearUp_Countdown,
    GearUp_SupplyDrop,
    GearUp_CircleClosing,
    GearUp_NewCircle,
    Off,
};

