#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponEffectAttachment.generated.h"

class UParticleSystemComponent;
class UParticleSystem;
class UEffectCollectionData;

USTRUCT(BlueprintType)
struct FWeaponEffectAttachment {
    GENERATED_BODY()
public:
    UPROPERTY()
    UParticleSystem* Effect;
    
    UPROPERTY()
    TSubclassOf<UEffectCollectionData> ConditionalEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* PSC;
    
    GBXWEAPON_API FWeaponEffectAttachment();
};

