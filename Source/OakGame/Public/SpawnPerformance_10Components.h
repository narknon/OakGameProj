#pragma once
#include "CoreMinimal.h"
#include "PrototypeActor.h"
#include "SpawnPerformance_10Components.generated.h"

class UOakMissionIconComponent;
class UBalanceStateComponent;
class URotatingMovementComponent;
class UOakDamageComponent;
class UElementalInteractionComponent;
class UParticleSystemComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UUsableComponent;
class UWwiseAudioComponent;

UCLASS()
class ASpawnPerformance_10Components : public APrototypeActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UBalanceStateComponent* BalanceStateComponent;
    
    UPROPERTY(Export)
    UOakDamageComponent* DamageReceiverComponent;
    
    UPROPERTY(Export)
    UElementalInteractionComponent* ElementalInteractionComponent;
    
    UPROPERTY(Export)
    UOakMissionIconComponent* OakMissionIconComponent;
    
    UPROPERTY(Export)
    UParticleSystemComponent* ParticleSystemComponent;
    
    UPROPERTY(Export)
    URotatingMovementComponent* RotatingMovementComponent;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(Export)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(Export)
    UUsableComponent* UsableComponent;
    
    UPROPERTY(Export)
    UWwiseAudioComponent* WwiseAudioComponent;
    
    ASpawnPerformance_10Components();
};

