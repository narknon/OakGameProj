#pragma once
#include "CoreMinimal.h"
#include "EPawnAttachStatus.h"
#include "PawnAttachSlotState.generated.h"

class UPawnAttachSlotComponent;
class AController;
class APawn;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPawnAttachSlotState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, NotReplicated, Transient)
    UPawnAttachSlotComponent* Owner;
    
    UPROPERTY(Transient)
    APawn* Pawn;
    
    UPROPERTY(NotReplicated, Transient)
    AController* Controller;
    
    UPROPERTY(Transient)
    EPawnAttachStatus Status;
    
    UPROPERTY(NotReplicated, Transient)
    bool bSkipDetachPlacement;
    
    UPROPERTY(NotReplicated, Transient)
    bool bSkipStopTransitionAction;
    
    UPROPERTY(NotReplicated, Transient)
    int32 DetachTransitionIndex;
    
public:
    FPawnAttachSlotState();
};

