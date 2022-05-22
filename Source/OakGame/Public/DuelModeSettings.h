#pragma once
#include "CoreMinimal.h"
#include "DuelingNumParticipantsInfo.h"
#include "DuelModeSettings.generated.h"

USTRUCT(BlueprintType)
struct FDuelModeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DuelArenaTimeout;
    
    UPROPERTY(EditAnywhere)
    float DuelChallengeTimeout;
    
    UPROPERTY(EditAnywhere)
    bool bUseDuelStartDelay;
    
    UPROPERTY(EditAnywhere)
    float DuelStartDelay;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FDuelingNumParticipantsInfo> NumParticipantsInfo;
    
    UPROPERTY(EditAnywhere)
    float DuelTotemSpawnTraceVertOffset;
    
    UPROPERTY(EditAnywhere)
    float DuelTotemSpawnInFrontDistance;
    
    UPROPERTY(EditAnywhere)
    float DuelTotemSpawnFindGroundDistance;
    
    OAKGAME_API FDuelModeSettings();
};

