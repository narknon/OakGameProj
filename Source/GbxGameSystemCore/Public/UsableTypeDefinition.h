#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "AttributeInitializationData.h"
#include "EUsableTypeCostContext.h"
#include "UsableTypeDefinition.generated.h"

class UGbxInventoryCategoryData;

UCLASS()
class GBXGAMESYSTEMCORE_API UUsableTypeDefinition : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText ActionText;
    
    UPROPERTY(EditDefaultsOnly)
    FName InputActionOverride;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDisplayLockedIcon;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHidePrompt;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCostsToUse;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxInventoryCategoryData* CurrencyType;
    
    UPROPERTY(EditDefaultsOnly)
    EUsableTypeCostContext CostContext;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData Cost;
    
    UUsableTypeDefinition();
};

