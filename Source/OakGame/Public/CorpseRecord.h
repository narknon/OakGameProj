#pragma once
#include "CoreMinimal.h"
#include "CorpseRecord.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCorpseRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Actor;
    
    UPROPERTY()
    float CorpseStartTime;
    
    OAKGAME_API FCorpseRecord();
};

