#include "ExplosionBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UParticleSystemComponent;
class UExplosionData;
class UObject;
class UDamageType;

UParticleSystemComponent* UExplosionBlueprintLibrary::PlayExplosion(UExplosionData* ExplosionData, float Size, FVector ExplosionLocation, UObject* Context, TSubclassOf<UDamageType> DamageType) {
    return NULL;
}

UExplosionBlueprintLibrary::UExplosionBlueprintLibrary() {
}

