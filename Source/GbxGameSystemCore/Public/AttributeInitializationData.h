#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DataTableValueHandle.h"
#include "AttributeInitializationData.generated.h"

class UGbxAttributeData;
class UAttributeInitializer;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FAttributeInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseValueConstant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableValueHandle DataTableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGbxAttributeData* BaseValueAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAttributeInitializer> AttributeInitializer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseValueScale;
    
    FAttributeInitializationData();
};

