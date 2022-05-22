#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ExplosionBlueprintLibrary.generated.h"

class UDamageType;
class UExplosionData;
class UParticleSystemComponent;
class UObject;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UExplosionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UExplosionBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static UParticleSystemComponent* PlayExplosion(UExplosionData* ExplosionData, float Size, FVector ExplosionLocation, UObject* Context, TSubclassOf<UDamageType> DamageType);
    
};

