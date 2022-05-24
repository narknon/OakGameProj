#pragma once
#include "CoreMinimal.h"
#include "RegisteredWeaponShotModifier.generated.h"

class UObject;
class UWeaponShotModifier;

USTRUCT(BlueprintType)
struct FRegisteredWeaponShotModifier {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWeaponShotModifier* Modifier;
    
    UPROPERTY()
    UObject* Owner;
    
    UPROPERTY()
    UObject* ContextOverride;
    
    OAKGAME_API FRegisteredWeaponShotModifier();
};

