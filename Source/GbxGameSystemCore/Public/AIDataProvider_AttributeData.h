#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "AIDataProvider_AttributeData.generated.h"

class UGbxAttributeData;

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UAIDataProvider_AttributeData : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* AttributeData;
    
    UPROPERTY()
    float FloatValue;
    
    UPROPERTY()
    int32 IntValue;
    
    UPROPERTY()
    bool BoolValue;
    
    UAIDataProvider_AttributeData();
};

