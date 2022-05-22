#pragma once
#include "CoreMinimal.h"
#include "ChallengeCategoryProgressSaveData.generated.h"

USTRUCT(BlueprintType)
struct FChallengeCategoryProgressSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> CategoryProgress;
    
    OAKGAME_API FChallengeCategoryProgressSaveData();
};

