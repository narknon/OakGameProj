#pragma once
#include "CoreMinimal.h"
#include "ERecentDamageFlags.h"
#include "DamageAnimationPairing.generated.h"

class UWidgetAnimation;

USTRUCT(BlueprintType)
struct GBXUI_API FDamageAnimationPairing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERecentDamageFlags DamageTypeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UWidgetAnimation*> LeftAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UWidgetAnimation*> RightAnimations;
    
    FDamageAnimationPairing();
};

