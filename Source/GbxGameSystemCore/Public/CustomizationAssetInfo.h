#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizationAssetInfo.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationAssetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName AssetReferenceTargetName;
    
    UPROPERTY(EditDefaultsOnly)
    FSoftObjectPath AssetReference;
    
    GBXGAMESYSTEMCORE_API FCustomizationAssetInfo();
};

