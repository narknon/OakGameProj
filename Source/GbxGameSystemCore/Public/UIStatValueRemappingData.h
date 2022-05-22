#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "UIStatValueRemappingData.generated.h"

USTRUCT(BlueprintType)
struct FUIStatValueRemappingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseContextOverride: 1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData InputValueMin;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData InputValueMax;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OutputValueMin;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OutputValueMax;
    
    GBXGAMESYSTEMCORE_API FUIStatValueRemappingData();
};

