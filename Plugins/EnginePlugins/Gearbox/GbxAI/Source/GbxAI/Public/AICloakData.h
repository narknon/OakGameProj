#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CloakCondition.h"
#include "AICloakData.generated.h"

UCLASS()
class GBXAI_API UAICloakData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FCloakCondition> CloakPriorities;
    
    UPROPERTY(EditAnywhere)
    bool bDefaultCloaked;
    
    UAICloakData();
};

