#pragma once
#include "CoreMinimal.h"
#include "CustomizationAssetInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CustomizationAssetEntry.generated.h"

class UGbxCustomizationTargetData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCustomizationAssetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxCustomizationTargetData* CustomizationTarget;
    
    UPROPERTY()
    TArray<FSoftObjectPath> CustomizationAssetReferences;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCustomizationAssetInfo> CustomizationAssetInfoReferences;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSoftClassPath> CustomizationClassReferences;
    
    UPROPERTY(EditDefaultsOnly)
    bool LoadForPreview;
    
    FCustomizationAssetEntry();
};

