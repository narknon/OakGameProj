#pragma once
#include "CoreMinimal.h"
#include "ECoverUserState.h"
#include "CoverClientData.generated.h"

class UCoverStyleData;
class UCoverSlotComponent;

USTRUCT(BlueprintType)
struct FCoverClientData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCoverStyleData* Style;
    
    UPROPERTY(Export)
    UCoverSlotComponent* Slot;
    
    UPROPERTY()
    ECoverUserState DesiredState;
    
    UPROPERTY()
    FName TransitionName;
    
    UPROPERTY()
    bool bFlanked;
    
    GBXAI_API FCoverClientData();
};

