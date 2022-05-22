#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeInitializationData.h"
#include "LootAttachmentInfo.h"
#include "LootConfigurationInfo.generated.h"

class UAttributeInitializer;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FLootConfigurationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ConfigurationName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAttributeInitializer> LootGameStageVarianceFormula;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Weight;
    
    UPROPERTY(EditAnywhere)
    TArray<FLootAttachmentInfo> ItemAttachments;
    
    FLootConfigurationInfo();
};

