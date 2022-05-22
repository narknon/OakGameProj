#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxAmmoTypeData.generated.h"

class UTexture2D;
class UGameResourceData;

UCLASS()
class GBXWEAPON_API UGbxAmmoTypeData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture2D* DisplayIcon;
    
    UPROPERTY(EditDefaultsOnly)
    FString ScaleformDisplayFrameID;
    
    UPROPERTY(EditDefaultsOnly)
    UGameResourceData* ResourceData;
    
    UPROPERTY(EditDefaultsOnly)
    float RegenerationRate;
    
    UGbxAmmoTypeData();
};

