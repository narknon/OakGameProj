#pragma once
#include "CoreMinimal.h"
#include "ProjectileHomingComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "GrenadeHomingComponent.generated.h"

class UWwiseEvent;
class AGrenade;
class ATedioreProjectile;
class UParticleSystemComponent;
class UParticleSystem;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UGrenadeHomingComponent : public UProjectileHomingComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AGrenade* OwnerGrenade;
    
    UPROPERTY(Transient)
    ATedioreProjectile* OwnerTedioreProjectile;
    
    UPROPERTY(Transient)
    FTimerHandle HomingResetTimerHandle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* HomingTrailTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    float TrailRelativeScale;
    
    UPROPERTY(EditDefaultsOnly)
    FVector HomingTrailOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FName TargetLockedParameterName;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetLockedOffValue;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetLockedOnValue;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* SearchingForTargetEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* TargetFoundEvent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* HomingTrail;
    
public:
    UPROPERTY()
    float LastEQSTime;
    
    UPROPERTY()
    FTimerHandle EQSRetriggerHandle;
    
    UGrenadeHomingComponent();
protected:
    UFUNCTION()
    void ResetHoming();
    
    UFUNCTION()
    void OnHomingTargetDestroyed(AActor* Actor);
    
};

