#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "AITicketUseData.generated.h"

class UAITicketDataAsset;

USTRUCT(BlueprintType)
struct FAITicketUseData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxParam Value;
    
    UPROPERTY(EditAnywhere)
    FGbxParam HoldDuration;
    
    UPROPERTY(EditAnywhere)
    UAITicketDataAsset* Ticket;
    
    GBXAI_API FAITicketUseData();
};

