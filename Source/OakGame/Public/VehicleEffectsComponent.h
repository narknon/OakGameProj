#pragma once
#include "CoreMinimal.h"
#include "VehicleComponent.h"
#include "OnEffectEventSimpleDelegate.h"
#include "OnRestartEffectsAfterTravelDelegate.h"
#include "OnOverspinStartedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "OnImpactDetectedSignatureDelegate.h"
#include "VehicleImpactEffectData.h"
#include "UObject/NoExportTypes.h"
#include "OnGrindingStoppedDelegate.h"
#include "EFreezeType.h"
#include "VehicleEffect.h"
#include "EVehicleEffectEvent.h"
#include "VehicleEffectQueryData.h"
#include "UObject/NoExportTypes.h"
#include "StatusEffectSpec.h"
#include "EOakElementalType.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "OnAnimateEndedDelegate.h"
#include "VehicleEffectsComponent.generated.h"

class UParticleSystem;
class UCurveFloat;
class UOakVehicleEffectAspectDataCollection;
class AActor;
class UScreenParticleManagerComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVehicleEffectsComponent : public UVehicleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnEffectEventSimple OnEngineStart;
    
    UPROPERTY(BlueprintAssignable)
    FOnEffectEventSimple OnEngineStop;
    
    UPROPERTY(BlueprintAssignable)
    FOnEffectEventSimple OnBrakesStart;
    
    UPROPERTY(BlueprintAssignable)
    FOnEffectEventSimple OnBrakesStop;
    
    UPROPERTY(BlueprintAssignable)
    FOnRestartEffectsAfterTravel OnRestartEffectsAfterTravel;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<EPhysicalSurface>, UParticleSystem*> JumpParticleSystemPerSurfaceType;
    
    UPROPERTY(EditAnywhere)
    float MinJumpVelocity;
    
    UPROPERTY(EditAnywhere)
    FVector BigLandingMinVelocity;
    
    UPROPERTY(EditAnywhere)
    FVector LandingFXLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FVector BigLandingFXLocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve WheelAddCurve;
    
    UPROPERTY(EditAnywhere)
    float WheelAddStrength;
    
    UPROPERTY(BlueprintReadOnly)
    float WheelOverspin;
    
    UPROPERTY(BlueprintAssignable)
    FOnOverspinStarted OnOverspinStarted;
    
    UPROPERTY(BlueprintAssignable)
    FOnEffectEventSimple OnOverspinEnded;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* SpeedLinesPS;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* SpeedLineCurve;
    
    UPROPERTY(EditAnywhere)
    float ImpactThrottleThreshold;
    
    UPROPERTY(EditAnywhere)
    float GrindingInPlaceMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsGrindingInPlace;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<UOakVehicleEffectAspectDataCollection*> DefaultEffectsAspectDataCollections;
    
private:
    UPROPERTY(Export, Transient)
    UScreenParticleManagerComponent* ScreenParticleMgrComp;
    
    UPROPERTY(EditAnywhere)
    float ImpactCooldownTime;
    
    UPROPERTY(EditAnywhere)
    float LastActorHitResetTime;
    
    UPROPERTY(EditAnywhere)
    float ImpactVelocityThresholdsInKPH[6];
    
    UPROPERTY(EditAnywhere, EditFixedSize, NoClear)
    TArray<FVehicleImpactEffectData> ImpactEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> ExcludedGearsForBackfire;
    
    UPROPERTY(EditAnywhere)
    FFloatRange MaxRPMBackfireFrequencyRange;
    
    UPROPERTY(EditAnywhere)
    bool bTriggerBackfireInBoost;
    
    UPROPERTY(EditAnywhere)
    float EndBoostBackfireDelay;
    
    UPROPERTY(BlueprintAssignable)
    FOnImpactDetectedSignature OnImpactDetected;
    
    UPROPERTY(BlueprintAssignable)
    FOnGrindingStopped OnGrindingStopped;
    
    UPROPERTY(BlueprintAssignable)
    FOnImpactDetectedSignature OnHitVehicle;
    
    UPROPERTY(BlueprintAssignable)
    FOnImpactDetectedSignature OnHitEnvironment;
    
    UPROPERTY(BlueprintAssignable)
    FOnImpactDetectedSignature OnHitCharacter;
    
    UPROPERTY(BlueprintAssignable)
    FOnImpactDetectedSignature OnHitDestructible;
    
    UPROPERTY(BlueprintAssignable)
    FOnImpactDetectedSignature OnHitOther;
    
    UPROPERTY(Transient)
    AActor* LastHitActor;
    
public:
    UPROPERTY(Transient)
    TArray<FVehicleEffect> VehicleEffects;
    
    UVehicleEffectsComponent();
    UFUNCTION(BlueprintCallable)
    void StopEffects(EVehicleEffectEvent Event);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectVectorParameter(const FName& ParamName, const FVector& ParamValue, const FVehicleEffectQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectMaterialParameter(const FName& ParamName, UMaterialInterface* ParamValue, const FVehicleEffectQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectFloatParameter(const FName& ParamName, float ParamValue, const FVehicleEffectQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectColorParameter(const FName& ParamName, const FLinearColor& ParamValue, const FVehicleEffectQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    void PlayEffects(EVehicleEffectEvent Event);
    
protected:
    UFUNCTION()
    void OnStopHorn();
    
    UFUNCTION()
    void OnStatusEffectStarted(AActor* Receiver, const FStatusEffectSpec& Spec, EOakElementalType ElementalType);
    
    UFUNCTION()
    void OnStatusEffectEnded(AActor* Receiver, const FStatusEffectSpec& Spec, EOakElementalType ElementalType);
    
    UFUNCTION()
    void OnStartHorn();
    
    UFUNCTION()
    void OnPrimarySeatStatusChanged();
    
    UFUNCTION()
    void OnPreBeginFreeze(EFreezeType FreezeType);
    
    UFUNCTION()
    void OnHoverStart();
    
    UFUNCTION()
    void OnHoverEnd();
    
    UFUNCTION()
    void OnHealthy();
    
    UFUNCTION()
    void OnHealthVeryLow();
    
    UFUNCTION()
    void OnHealthLow();
    
    UFUNCTION()
    void OnGearShift(int32 Gear, bool bIsShiftingUp);
    
    UFUNCTION()
    void OnDigitrustStart();
    
    UFUNCTION()
    void OnDigitrustEnd();
    
    UFUNCTION()
    void OnDead();
    
    UFUNCTION()
    void OnCryoThawing();
    
    UFUNCTION()
    void OnCryoThawed();
    
    UFUNCTION()
    void OnCryoFrozen();
    
    UFUNCTION()
    void OnCryoFreezing();
    
    UFUNCTION()
    void OnBoostEnd();
    
private:
    UFUNCTION()
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void AnimateScalarParameterValueWithCallback(UMaterialInstanceDynamic* MaterialInstanceDynamic, FName ParameterName, FVector2D ValueRange, float Time, const FOnAnimateEnded& OnAnimateEnded);
    
    UFUNCTION(BlueprintCallable)
    void AnimateScalarParameterValue(UMaterialInstanceDynamic* MaterialInstanceDynamic, FName ParameterName, FVector2D ValueRange, float Time);
    
};

