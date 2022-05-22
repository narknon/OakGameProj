#pragma once
#include "CoreMinimal.h"
#include "ClaptrapSkitSublevel.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FClaptrapSkitSublevel {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FName SublevelName;
    
    UPROPERTY(EditInstanceOnly, Instanced)
    UGbxCondition* LoadCondition;
    
    OAKGAME_API FClaptrapSkitSublevel();
};

