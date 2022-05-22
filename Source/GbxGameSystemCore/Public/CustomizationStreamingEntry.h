#pragma once
#include "CoreMinimal.h"
#include "CustomizationStreamingEntry.generated.h"

class UGbxCustomizationData;
class UGbxCustomizationComponent;

USTRUCT(BlueprintType)
struct FCustomizationStreamingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxCustomizationData* CustomizationData;
    
    UPROPERTY(Export, Transient)
    TArray<UGbxCustomizationComponent*> WaitingComponents;
    
    GBXGAMESYSTEMCORE_API FCustomizationStreamingEntry();
};

