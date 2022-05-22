#pragma once
#include "CoreMinimal.h"
#include "DuelingNumParticipantsInfo.generated.h"

USTRUCT(BlueprintType)
struct FDuelingNumParticipantsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 NumPlayers;
    
    UPROPERTY(EditAnywhere)
    float MaxArenaSize;
    
    UPROPERTY(EditAnywhere)
    float DuelLength;
    
    OAKGAME_API FDuelingNumParticipantsInfo();
};

