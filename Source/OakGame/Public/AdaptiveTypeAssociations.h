#pragma once
#include "CoreMinimal.h"
#include "EOakElementalType.h"
#include "AdaptiveTypeAssociations.generated.h"

class UGbxAttributeData;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FAdaptiveTypeAssociations {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EOakElementalType DamageType;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* ResistanceAttribute;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* TriggerAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* HitByTypeAudioEvent;
    
    OAKGAME_API FAdaptiveTypeAssociations();
};

