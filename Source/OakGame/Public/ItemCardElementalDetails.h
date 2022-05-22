#pragma once
#include "CoreMinimal.h"
#include "ItemCardElementalDetails.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FItemCardElementalDetails {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FText EffectText;
    
    UPROPERTY(Transient)
    FText ProcChanceText;
    
    UPROPERTY(Transient)
    FString IconFrame;
    
    FItemCardElementalDetails();
};

