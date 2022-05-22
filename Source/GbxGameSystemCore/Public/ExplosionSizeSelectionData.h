#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ExplosionSizeProperties.h"
#include "ExplosionSizeSelectionData.generated.h"

UCLASS(BlueprintType)
class UExplosionSizeSelectionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FExplosionSizeProperties> SizeProperties;
    
    UExplosionSizeSelectionData();
    UFUNCTION(BlueprintCallable)
    FExplosionSizeProperties GetExplosionPropertiesBySize(float Size);
    
};

