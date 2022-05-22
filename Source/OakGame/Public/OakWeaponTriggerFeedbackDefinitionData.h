#pragma once
#include "CoreMinimal.h"
#include "EOakWeaponPartType.h"
#include "OakWeaponTriggerFeedbackDefinitionData.generated.h"

class UWeaponTriggerFeedbackAsset;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakWeaponTriggerFeedbackDefinitionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWeaponTriggerFeedbackAsset* Feedback;
    
    UPROPERTY(VisibleAnywhere)
    FString WeaponClassPath;
    
    UPROPERTY(EditAnywhere)
    EOakWeaponPartType PartType;
    
    UPROPERTY(EditAnywhere)
    uint8 PartTypeValue;
    
    FOakWeaponTriggerFeedbackDefinitionData();
};

