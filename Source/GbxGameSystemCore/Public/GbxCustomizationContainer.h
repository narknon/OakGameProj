#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GbxCustomizationContainerEntry.h"
#include "GbxCustomizationCacheEntry.h"
#include "GbxCustomizationContainer.generated.h"

class UGbxCustomizationComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxCustomizationContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGbxCustomizationContainerEntry> Customizations;
    
    UPROPERTY(NotReplicated)
    TArray<FGbxCustomizationCacheEntry> CustomizationCache;
    
    UPROPERTY(Export, NotReplicated)
    UGbxCustomizationComponent* Owner;
    
    FGbxCustomizationContainer();
};

