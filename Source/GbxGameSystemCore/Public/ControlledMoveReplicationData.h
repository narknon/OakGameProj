#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ControlledMoveParameters.h"
#include "UObject/NoExportTypes.h"
#include "ControlledMoveReplicationData.generated.h"

class UControlledMove;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FControlledMoveReplicationData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    uint8 DirtyCounter;
    
    UPROPERTY(Transient)
    TSubclassOf<UControlledMove> ControlledMove;
    
    UPROPERTY(Transient)
    FControlledMoveParameters Parameters;
    
    UPROPERTY(Transient)
    FVector PackedDirection;
    
    UPROPERTY(Transient)
    uint8 bZeroVelocity: 1;
    
    UPROPERTY(Transient)
    uint8 bInterrupted: 1;
    
public:
    FControlledMoveReplicationData();
};

