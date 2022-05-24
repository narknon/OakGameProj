#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OakCharacter_IronBear.h"
#include "EnvQueryParams.h"
#include "OakCharacter_IronCub.generated.h"

class AWeapon;

UCLASS()
class AOakCharacter_IronCub : public AOakCharacter_IronBear {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FEnvQueryParams IronCubSpawnLocationParams;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableOutline;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor OwnedOutlineColor;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor UnownedOutlineColor;
    
    UPROPERTY(EditDefaultsOnly)
    int32 OutlineThickness;
    
public:
    AOakCharacter_IronCub();
protected:
    UFUNCTION()
    void UpdateOutlineOnWeaponChange(AWeapon* Weapon, AWeapon* LastWeapon);
    
};

