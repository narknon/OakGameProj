#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OakLevelMinimapDataAsset.generated.h"

class UTexture2D;

UCLASS()
class OAKGAME_API UOakLevelMinimapDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UTexture2D* MinimapImage;
    
    UPROPERTY(EditAnywhere)
    float AppearanceScale;
    
public:
    UOakLevelMinimapDataAsset();
};

