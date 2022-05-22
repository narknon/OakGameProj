#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "ELightBeamLock.h"
#include "Curves/CurveFloat.h"
#include "Vector2DWaveform.h"
#include "LightBeamData.generated.h"

class ULightBeam;
class UExplosionData;
class UParticleSystem;
class UWwiseEvent;
class UEffectCollectionData;
class UImpactData;
class UDamageData;
class UConditionalDamageModifier;
class ULightBeamData;
class UEnvQuery;
class AActor;

UCLASS(Blueprintable, Const)
class GBXWEAPON_API ULightBeamData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ULightBeam> BeamClass;
    
    UPROPERTY(EditAnywhere)
    float LifeTime;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* BeamFX;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEffectCollectionData> BeamFXCollection;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ViewerBeamFX;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEffectCollectionData> ViewerBeamFXCollection;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* LoopingImpactAudio;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEffectCollectionData> AudioFXCollection;
    
    UPROPERTY(EditAnywhere)
    float SourceTangentStrengthOverDistance;
    
    UPROPERTY(EditAnywhere)
    float TargetTangentStrengthOverDistance;
    
    UPROPERTY(EditAnywhere)
    FName BeamEmitterName;
    
    UPROPERTY(EditAnywhere)
    UExplosionData* ExplosionData;
    
    UPROPERTY(EditAnywhere)
    UImpactData* ImpactData;
    
    UPROPERTY(EditAnywhere)
    float ImpactFXFrequency;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowPenetrationImpacts: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bNoImpactDecals: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(EditAnywhere)
    float CollisionRadius;
    
    UPROPERTY(EditAnywhere)
    float TraceInterval;
    
    UPROPERTY(EditAnywhere)
    int32 NumTraceSteps;
    
    UPROPERTY(EditAnywhere)
    float MaxLength;
    
    UPROPERTY(EditAnywhere)
    float StartLength;
    
    UPROPERTY(EditAnywhere)
    float GrowSpeed;
    
    UPROPERTY(EditAnywhere)
    uint8 bGrowOverTime: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSetTeamCollision: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreCollisionWithInstigatorTeam: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPenetratesTargetables: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPenetratesWorld: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanTriggerBulletDodges: 1;
    
    UPROPERTY(EditAnywhere)
    ELightBeamLock LockType;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanAcquireLock: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAlignToLockedTarget: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanLockOntoFriendlies: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bWorldCollisionBreaksLock: 1;
    
    UPROPERTY(EditAnywhere)
    float DamageInterval;
    
    UPROPERTY(EditAnywhere)
    uint8 bDamageDirectTargetOnce: 1;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageData> DamageData;
    
    UPROPERTY(EditAnywhere)
    TArray<UConditionalDamageModifier*> ConditionalDamageModifiers;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableDamageProxy: 1;
    
    UPROPERTY(EditAnywhere)
    float DamageProxyRadius;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> DamageProxyTraceChannel;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve DamageProxyRadiusCurve;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleDamageProxyRadiusByCurve: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableDragWhenLocked: 1;
    
    UPROPERTY(EditAnywhere)
    float DragSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxDragRadius;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector2DWaveform> SpreadWaveforms;
    
    UPROPERTY(EditAnywhere)
    uint8 bSpreadWaveformIsAngle: 1;
    
    UPROPERTY(EditAnywhere)
    float SpreadWaveformTimeScale;
    
    UPROPERTY(EditAnywhere)
    float LockOnSpreadScale;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyAccuracyToSpread: 1;
    
    UPROPERTY(EditAnywhere)
    int32 MaxChains;
    
    UPROPERTY(EditAnywhere)
    int32 MaxChainDepth;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ULightBeamData> ChainBeamData;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* ChainTargetsQuery;
    
    UPROPERTY(EditAnywhere)
    FName ChainTargetsQueryMaxRangeParam;
    
    UPROPERTY(EditAnywhere)
    float ChainDelay;
    
    UPROPERTY(EditAnywhere)
    float ChainInterval;
    
    UPROPERTY(EditAnywhere)
    float MaxChainDistance;
    
    UPROPERTY(EditAnywhere)
    float ChainBreakDistance;
    
    UPROPERTY(EditAnywhere)
    float NetUpdateTime;
    
    ULightBeamData();
    UFUNCTION(BlueprintNativeEvent)
    float UpdateTarget(ULightBeam* Beam) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanLockOn(ULightBeam* Beam, AActor* TargetActor) const;
    
};

