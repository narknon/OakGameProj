#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "AttributeInitializationData.h"
#include "ResourceWeightAttributeValueResolver.generated.h"

class UGameResourceData;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UResourceWeightAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGameResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData ResourceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData AboveThresholdWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData NoPoolWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData MinBelowThresholdWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData MaxBelowThresholdWeight;
    
    UResourceWeightAttributeValueResolver();
};

