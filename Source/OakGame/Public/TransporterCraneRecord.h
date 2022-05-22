#pragma once
#include "CoreMinimal.h"
#include "ETransporterCraneState.h"
#include "TransporterCraneRecord.generated.h"

USTRUCT(BlueprintType)
struct FTransporterCraneRecord {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ETransporterCraneState> CraneState;
    
    UPROPERTY()
    float MoveSpeed;
    
    UPROPERTY()
    float MoveStartPosition;
    
    UPROPERTY()
    float MoveStartTime;
    
    OAKGAME_API FTransporterCraneRecord();
};

