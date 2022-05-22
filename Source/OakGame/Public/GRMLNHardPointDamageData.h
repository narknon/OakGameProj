#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GRMLNHardPointDamageData.generated.h"

class UGbxDamageType;
class UWwiseEvent;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FGRMLNHardPointDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxDamageType> DamageTypeClass;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* WeaponFireEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* MuzzleFlash;
    
    OAKGAME_API FGRMLNHardPointDamageData();
};

