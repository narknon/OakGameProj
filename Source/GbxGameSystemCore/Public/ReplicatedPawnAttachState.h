#pragma once
#include "CoreMinimal.h"
#include "EPawnAttachStatus.h"
#include "ReplicatedPawnAttachState.generated.h"

class UPawnAttachSlotComponent;

USTRUCT(BlueprintType)
struct FReplicatedPawnAttachState {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UPawnAttachSlotComponent* Slot;
    
    UPROPERTY()
    EPawnAttachStatus Status;
    
    UPROPERTY()
    uint16 StatusFlag;
    
    GBXGAMESYSTEMCORE_API FReplicatedPawnAttachState();
};

