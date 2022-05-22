#pragma once
#include "CoreMinimal.h"
#include "OakVehicleWeaponTriggerFeedbackDefinitionData.generated.h"

class UWeaponTriggerFeedbackAsset;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakVehicleWeaponTriggerFeedbackDefinitionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWeaponTriggerFeedbackAsset* Feedback;
    
    UPROPERTY(VisibleAnywhere)
    FString WeaponAssetPath;
    
    FOakVehicleWeaponTriggerFeedbackDefinitionData();
};

