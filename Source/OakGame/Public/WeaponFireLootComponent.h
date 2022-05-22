#pragma once
#include "CoreMinimal.h"
#include "WeaponFireProjectileComponent.h"
#include "WeaponFireLootComponent.generated.h"

class UItemPoolData;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponFireLootComponent : public UWeaponFireProjectileComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSpawnLootAtInstigatorLevel;
    
    UPROPERTY(EditAnywhere)
    float BaseProjectileSpeed;
    
    UPROPERTY(EditAnywhere)
    UItemPoolData* ItemPool;
    
    UWeaponFireLootComponent();
};

