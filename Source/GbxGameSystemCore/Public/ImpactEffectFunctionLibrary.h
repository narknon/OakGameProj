#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ImpactEffectFunctionLibrary.generated.h"

class UParticleSystemComponent;
class UImpactData;
class AActor;

UCLASS(BlueprintType)
class UImpactEffectFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UImpactEffectFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void PlayTraceImpactAndGetParticleSystemComponents(UImpactData* ImpactData, AActor* Instigator, const FVector& TraceStart, const FVector& TraceEnd, TArray<UParticleSystemComponent*>& SpawnedParticleSystemComponents, TEnumAsByte<ECollisionChannel> TraceChannel);
    
    UFUNCTION(BlueprintCallable)
    static void PlayTraceImpact(UImpactData* ImpactData, AActor* Instigator, const FVector& TraceStart, const FVector& TraceEnd, TEnumAsByte<ECollisionChannel> TraceChannel, bool bReplicated);
    
    UFUNCTION(BlueprintCallable)
    static void PlayHitResultImpactGetParticleSystemComponents(UImpactData* ImpactData, AActor* Instigator, const FHitResult& HitInfo, TArray<UParticleSystemComponent*>& SpawnedParticleSystemComponents);
    
    UFUNCTION(BlueprintCallable)
    static void PlayHitResultImpact(UImpactData* ImpactData, AActor* Instigator, const FHitResult& HitInfo, bool bReplicated);
    
};

