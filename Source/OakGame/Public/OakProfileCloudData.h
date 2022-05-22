#pragma once
#include "CoreMinimal.h"
#include "InventorySaveGameData.h"
#include "GameStatSaveGameData.h"
#include "OakMailItem.h"
#include "CrewQuartersDecorationItemSaveGameData.h"
#include "OakSDUSaveGameData.h"
#include "CrewQuartersRoomItemSaveGameData.h"
#include "OakCustomizationSaveGameData.h"
#include "OakInventoryCustomizationPartInfo.h"
#include "OakChallengeSaveGameData.h"
#include "VaultCardRewardList.h"
#include "OakVaultCardPreviousChallengeData.h"
#include "OakProfileCloudData.generated.h"

USTRUCT()
struct FOakProfileCloudData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGameStatSaveGameData> ProfileStatsData;
    
    UPROPERTY()
    TArray<FInventorySaveGameData> BankInventoryList;
    
    UPROPERTY()
    TArray<FInventorySaveGameData> LostLootInventoryList;
    
    UPROPERTY()
    TArray<FOakMailItem> NPCMailItems;
    
    UPROPERTY()
    TArray<FString> MailGuids;
    
    UPROPERTY()
    TArray<FOakSDUSaveGameData> ProfileSDUList;
    
    UPROPERTY()
    TArray<FOakCustomizationSaveGameData> UnlockedCustomizations;
    
    UPROPERTY()
    TArray<FOakInventoryCustomizationPartInfo> UnlockedInventoryCustomizationParts;
    
    UPROPERTY()
    int64 GuardianExperience;
    
    UPROPERTY()
    TArray<FCrewQuartersDecorationItemSaveGameData> UnlockedCrewQuartersDecorations;
    
    UPROPERTY()
    TArray<FCrewQuartersRoomItemSaveGameData> UnlockedCrewQuartersRooms;
    
    UPROPERTY()
    TArray<FOakChallengeSaveGameData> OakProfileChallengeData;
    
    UPROPERTY()
    TArray<int32> CitizenScienceLevelProgression;
    
    UPROPERTY()
    int32 CitizenScienceCSBucksAmount;
    
    UPROPERTY()
    bool bCitizenScienceHasSeenIntroVideo;
    
    UPROPERTY()
    bool bCitizenScienceTutorialDone;
    
    UPROPERTY()
    uint32 LastActiveVaultCardID;
    
    UPROPERTY()
    int32 CurrentVaultCardDaySeed;
    
    UPROPERTY()
    int32 CurrentVaultCardWeekSeed;
    
    UPROPERTY()
    TArray<FVaultCardRewardList> VaultCardRewards;
    
    UPROPERTY()
    TArray<FOakVaultCardPreviousChallengeData> VaultCardPreviousChallenges;
    
    OAKGAME_API FOakProfileCloudData();
};

