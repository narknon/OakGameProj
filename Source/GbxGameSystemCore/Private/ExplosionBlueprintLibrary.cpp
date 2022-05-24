#include "ExplosionBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UParticleSystemComponent;
class UDamageType;
class UExplosionData;
class UObject;

UParticleSystemComponent* UExplosionBlueprintLibrary::PlayExplosion(UExplosionData* ExplosionData, float Size, FVector ExplosionLocation, UObject* Context, TSubclassOf<UDamageType> DamageType) {
    return NULL;
}

UExplosionBlueprintLibrary::UExplosionBlueprintLibrary() {
}

