#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LightBeamAttachment.h"
#include "ClientLightBeamState.generated.h"

class UParticleSystem;
class ULightBeamData;
class UWwiseEvent;
class APawn;
class AActor;
class UImpactData;
class UGbxDamageType;
class UDamageSource;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FClientLightBeamState {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 CreationID;
    
    UPROPERTY()
    TSubclassOf<ULightBeamData> DataBlueprint;
    
    UPROPERTY()
    FLightBeamAttachment Source;
    
    UPROPERTY()
    FLightBeamAttachment Target;
    
    UPROPERTY()
    APawn* Instigator;
    
    UPROPERTY()
    AActor* DamageCauser;
    
    UPROPERTY()
    UImpactData* ImpactDataOverride;
    
    UPROPERTY()
    float Spread;
    
    UPROPERTY()
    uint16 Flags;
    
    UPROPERTY()
    UParticleSystem* BeamFXOverride;
    
    UPROPERTY()
    UParticleSystem* ViewerBeamFXOverride;
    
    UPROPERTY()
    UWwiseEvent* BeamImpactAudioOverride;
    
    UPROPERTY()
    float LifetimeOverride;
    
    UPROPERTY()
    float Damage;
    
    UPROPERTY()
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY()
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY()
    float DamageRadius;
    
    UPROPERTY()
    UCurveFloat* DamageRampCurve;
    
    UPROPERTY()
    float DamageRampScale;
    
    UPROPERTY()
    float ImpactForce;
    
    GBXWEAPON_API FClientLightBeamState();
};

