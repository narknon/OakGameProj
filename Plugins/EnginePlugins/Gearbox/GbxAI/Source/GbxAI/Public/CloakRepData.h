#pragma once
#include "CoreMinimal.h"
#include "CloakRepData.generated.h"

USTRUCT(BlueprintType)
struct FCloakRepData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCloaked;
    
    UPROPERTY()
    bool bCanPlayActions;
    
    GBXAI_API FCloakRepData();
};

