#pragma once
#include "CoreMinimal.h"
#include "MusicLayerInfo.generated.h"

class UWwiseState;

USTRUCT(BlueprintType)
struct FMusicLayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseState* NoneState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseState* OnState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseState* OffState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseState* ExitCombatState;
    
    OAKGAME_API FMusicLayerInfo();
};

