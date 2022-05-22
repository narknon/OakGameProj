#pragma once
#include "CoreMinimal.h"
#include "ConditionalDamageModifier.h"
#include "ConditionalDamageHitRegionModifier.generated.h"

class UHitRegionData;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UConditionalDamageHitRegionModifier : public UConditionalDamageModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 Priority;
    
    UPROPERTY(EditAnywhere)
    UHitRegionData* OverrideHitRegion;
    
    UConditionalDamageHitRegionModifier();
};

