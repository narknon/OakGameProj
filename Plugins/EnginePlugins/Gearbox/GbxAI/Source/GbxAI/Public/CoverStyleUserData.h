#pragma once
#include "CoreMinimal.h"
#include "AITicketUseData.h"
#include "GbxParam.h"
#include "CoverStyleUserData.generated.h"

class UCoverStyleData;
class UGbxCondition;

USTRUCT(BlueprintType)
struct GBXAI_API FCoverStyleUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCoverStyleData* Style;
    
    UPROPERTY(EditAnywhere)
    FGbxParam Weight;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideIdleTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam IdleTimeOverride;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideFireTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam FireTimeOverride;
    
    UPROPERTY(EditAnywhere)
    FAITicketUseData TicketData;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* ForceUseCondition;
    
    FCoverStyleUserData();
};

