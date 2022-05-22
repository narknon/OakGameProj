#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "OakWeaponTriggerFeedbackDefinitionData.h"
#include "OakVehicleWeaponTriggerFeedbackDefinitionData.h"
#include "OakWeaponGlobalsData.generated.h"

UCLASS()
class OAKGAME_API UOakWeaponGlobalsData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FOakWeaponTriggerFeedbackDefinitionData> TriggerFeedback;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FOakWeaponTriggerFeedbackDefinitionData> ZoomFeedback;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FOakVehicleWeaponTriggerFeedbackDefinitionData> VehicleTriggerFeedback;
    
    UOakWeaponGlobalsData();
};

