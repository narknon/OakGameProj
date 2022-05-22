#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "AttributeInitializationData.h"
#include "AIDataProvider_AttributeInitializationData.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UAIDataProvider_AttributeInitializationData : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData AttributeInitializationData;
    
    UPROPERTY()
    float FloatValue;
    
    UPROPERTY()
    int32 IntValue;
    
    UPROPERTY()
    bool BoolValue;
    
    UAIDataProvider_AttributeInitializationData();
};

