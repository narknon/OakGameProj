#pragma once
#include "CoreMinimal.h"
#include "AITicketHandle.generated.h"

class UAITicketDataAsset;
class AGbxAIController;

USTRUCT(BlueprintType)
struct FAITicketHandle {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAITicketDataAsset* Ticket;
    
    UPROPERTY()
    AGbxAIController* AIController;
    
    GBXAI_API FAITicketHandle();
};

