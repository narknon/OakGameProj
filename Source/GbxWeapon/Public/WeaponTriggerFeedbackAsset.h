#pragma once
#include "CoreMinimal.h"
#include "WeaponTriggerFireThreasholdData.h"
#include "WeaponTriggerFeedbackData.h"
#include "GbxDataAsset.h"
#include "WeaponTriggerVibrationData.h"
#include "EWeaponTriggerFeedbackMode.h"
#include "WeaponTriggerWeaponData.h"
#include "WeaponTriggerFeedbackAsset.generated.h"

UCLASS()
class GBXWEAPON_API UWeaponTriggerFeedbackAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EWeaponTriggerFeedbackMode Mode;
    
    UPROPERTY(EditAnywhere)
    FWeaponTriggerFeedbackData Feedback;
    
    UPROPERTY(EditAnywhere)
    FWeaponTriggerWeaponData Weapon;
    
    UPROPERTY(EditAnywhere)
    FWeaponTriggerVibrationData Vibration;
    
    UPROPERTY(EditAnywhere)
    FWeaponTriggerFireThreasholdData FireThreshold;
    
    UWeaponTriggerFeedbackAsset();
};

