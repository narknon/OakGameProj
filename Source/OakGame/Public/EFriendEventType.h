#pragma once
#include "CoreMinimal.h"
#include "EFriendEventType.generated.h"

UENUM(BlueprintType)
enum class EFriendEventType : uint8 {
    None,
    LevelUp,
    GearSold,
    GearReceived,
    PlotMissionCompletion,
    SideMissionCompletion,
    PropagateRareSpawnMission,
    KilledEnemy,
    KilledNamedEnemy,
    KilledBoss,
    GuardianRankMilestone,
    ChallengeUpdate,
    ChallengeCompletion,
    ProvingGroundCompletion,
    CircleOfSlaughterCompletion,
    RaidCompletion,
    UnlockedTrueVaultHunterMode,
    SlotMachineJackpot,
    OpenedGoldenChest,
    SentMail,
    FriendGearPurchased,
    LookingForHelp,
    AchievementUnlocked,
    ChallengeUpdatesMerged,
    LikedEvent,
    CustomizationAcquired,
    Max,
};

