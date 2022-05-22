#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LightProjectileMoveModifier.generated.h"

UCLASS(Abstract, EditInlineNew, MinimalAPI)
class ULightProjectileMoveModifier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 FiringPatternID;
    
    UPROPERTY()
    bool bRestrictFiringPattern;
    
    ULightProjectileMoveModifier();
};

