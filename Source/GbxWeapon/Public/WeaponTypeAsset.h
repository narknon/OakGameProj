#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "WeaponTypeAsset.generated.h"

UCLASS()
class GBXWEAPON_API UWeaponTypeAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(EditDefaultsOnly)
    FString ScaleformDisplayFrameID;
    
    UPROPERTY(EditAnywhere)
    FName EquipAudioEventName;
    
    UWeaponTypeAsset();
};

