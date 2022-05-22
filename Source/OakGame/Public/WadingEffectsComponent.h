#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WadingEffectsComponent.generated.h"

class ALargeLiquidBody;
class UPrimitiveComponent;
class UElementalInteractionData;
class UParticleSystemComponent;
class UParticleSystem;
class UPhysicalMaterial;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UWadingEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<UElementalInteractionData*, UParticleSystem*> WakeParticleSystems;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* WakePSC;
    
    UPROPERTY(Transient)
    ALargeLiquidBody* CurrentOverlappingLLB;
    
    UPROPERTY(Transient)
    int32 CurrentOverlappingLLBSectionIndex;
    
    UPROPERTY(Transient)
    UElementalInteractionData* CurrentLiquidElement;
    
    UPROPERTY(Transient)
    UPhysicalMaterial* CurrentLiquidPhysMat;
    
    UPROPERTY(Transient)
    float CurrentLiquidZ;
    
    UPROPERTY(Transient)
    bool bIsAttachedToPlayer;
    
private:
    UPROPERTY(Transient)
    TMap<UPrimitiveComponent*, int32> OverlappingRivers;
    
public:
    UWadingEffectsComponent();
    UFUNCTION(BlueprintCallable)
    static void NotifyEndRiverOverlap(UPrimitiveComponent* RiverMesh, UPrimitiveComponent* OtherComponent);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyBeginRiverOverlap(UPrimitiveComponent* RiverMesh, UPrimitiveComponent* OtherComponent);
    
};

