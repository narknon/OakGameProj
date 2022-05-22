#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspectSettings_Ticket.generated.h"

class UAITicketDataAsset;

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Ticket {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPriority;
    
    UPROPERTY(EditAnywhere)
    bool bInterruptible;
    
    UPROPERTY(EditAnywhere)
    FGbxParam Value;
    
    UPROPERTY(EditAnywhere)
    FGbxParam HoldDuration;
    
    UPROPERTY(EditAnywhere)
    UAITicketDataAsset* AITicket;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector ActorBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideActorBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    bool bApplyHoldOnSuccess;
    
    UPROPERTY(EditAnywhere)
    bool bApplyHoldOnFailure;
    
    UPROPERTY(EditAnywhere)
    bool bApplyHoldOnAbort;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAcquireTicket;
    
    FAIAspectSettings_Ticket();
};

