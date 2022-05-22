#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DataProviders/AIDataProvider.h"
#include "AIDataProvider_AttributeInitializer.generated.h"

class UAttributeInitializer;

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UAIDataProvider_AttributeInitializer : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAttributeInitializer> AttributeInitializer;
    
    UPROPERTY()
    float FloatValue;
    
    UPROPERTY()
    int32 IntValue;
    
    UPROPERTY()
    bool BoolValue;
    
    UAIDataProvider_AttributeInitializer();
};

