#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Splat.generated.h"

class UWwiseAudioComponent;
class UElementalInteractionComponent;
class UMaterialInstanceDynamic;
class USplatData;
class UGbxConvexComponent;
class UDecalComponent;
class UParticleSystemComponent;

UCLASS(NotPlaceable)
class ASplat : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=InitializeSplat)
    USplatData* SplatDataAsset;
    
    UPROPERTY(Export)
    UDecalComponent* SplatDecal;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* SplatDecalMID;
    
    UPROPERTY(Export, Transient)
    UDecalComponent* GroundingDecal;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* GroundingDecalMID;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* ParticleSystem;
    
    UPROPERTY(Export, Transient)
    UGbxConvexComponent* OverlapCollision;
    
    UPROPERTY(Export, Transient)
    UElementalInteractionComponent* ElementalInteraction;
    
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* Audio;
    
public:
    ASplat();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void InitializeSplat();
    
};

