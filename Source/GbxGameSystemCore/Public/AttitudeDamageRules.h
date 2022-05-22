#pragma once
#include "CoreMinimal.h"
#include "AttitudeDamageRules.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FAttitudeDamageRules {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bAllowHostileDamage: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowNeutralDamage: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowFriendlyDamage: 1;
    
    FAttitudeDamageRules();
};

