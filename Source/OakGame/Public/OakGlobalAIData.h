#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "GameplayTagContainer.h"
#include "GlobalAIData.h"
#include "OakGlobalAIData.generated.h"

UCLASS()
class OAKGAME_API UOakGlobalAIData : public UGlobalAIData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DownerDistance;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag DownerDisabledTag;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData AIAccuracyMaxScalePT1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData AIAccuracyMinScalePT1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData AIAccuracyMinScalePT2;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData AIAccuracyMaxScalePT2;
    
    UOakGlobalAIData();
};

