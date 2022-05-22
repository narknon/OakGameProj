#pragma once
#include "CoreMinimal.h"
#include "ImpactFXManagerTrackingData.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ImpactFXManagerComponent.generated.h"

class UImpactData;
class UParticleSystemComponent;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UImpactFXManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bScaleImpactDecalEffects;
    
    UPROPERTY(EditAnywhere)
    UImpactData* BounceEffect;
    
    UPROPERTY(EditAnywhere)
    float BounceEffectThreshold;
    
    UPROPERTY(EditAnywhere)
    float BounceEffectFrequency;
    
    UPROPERTY(EditAnywhere)
    bool bAlignBounceEffectToVelocity;
    
    UPROPERTY(EditAnywhere)
    UImpactData* SlideEffect;
    
    UPROPERTY(EditAnywhere)
    float SlideEffectThreshold;
    
    UPROPERTY(EditAnywhere)
    float SlideEffectStopThreshold;
    
    UPROPERTY(EditAnywhere)
    float SlideEffectFrequency;
    
    UPROPERTY(EditAnywhere)
    float StartSlideEffectDelay;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideSlideEffectOrigin;
    
    UPROPERTY(EditAnywhere)
    FName SlideEffectOriginSocket;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bEffectsEnabled;
    
    UPROPERTY(EditAnywhere)
    bool bAutoEnableCollisionNotifications;
    
    UPROPERTY(Transient)
    TArray<FImpactFXManagerTrackingData> ActiveSlideEffects;
    
public:
    UImpactFXManagerComponent();
    UFUNCTION(BlueprintCallable)
    void SetEffectsEnabled(bool bEnabled);
    
protected:
    UFUNCTION()
    void OnTrackedParticleSystemFinished(UParticleSystemComponent* PSC);
    
    UFUNCTION()
    void OnTrackedComponentDeactivated(UActorComponent* Component);
    
    UFUNCTION()
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
};

