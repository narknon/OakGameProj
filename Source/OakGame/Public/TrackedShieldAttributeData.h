#pragma once
#include "CoreMinimal.h"
#include "GbxAttributeModifierHandle.h"
#include "TrackedShieldAttributeData.generated.h"

class UGbxAttributeData;

USTRUCT(BlueprintType)
struct FTrackedShieldAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxAttributeData* Data;
    
    UPROPERTY(Transient)
    FGbxAttributeModifierHandle ModifierHandle;
    
    UPROPERTY(Transient)
    UClass* ShieldAugmentClass;
    
    OAKGAME_API FTrackedShieldAttributeData();
};

