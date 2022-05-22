#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplicatedHoverComponentState.generated.h"

USTRUCT(BlueprintType)
struct GBXVEHICLE_API FReplicatedHoverComponentState {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsEnabled;
    
    UPROPERTY()
    float StrafeInput;
    
    UPROPERTY()
    float ForwardInput;
    
    UPROPERTY()
    FRotator TargetRotation;
    
    FReplicatedHoverComponentState();
};

