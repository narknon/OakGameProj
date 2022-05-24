#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "PayloadInstanceData.h"
#include "GrenadeBehavior_PayloadSticky.generated.h"

class UPrimitiveComponent;
class UDamageData;
class UParticleSystem;
class UGbxCondition;
class AGrenadeMod;
class UWwiseEvent;
class AActor;
class AGrenade;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadSticky : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float StickyFuseTimer;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> MeshCollisionChannel;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ProximityTriggerParticleTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    FName TriggerParticleSizePropertyName;
    
    UPROPERTY(EditDefaultsOnly)
    float ProximityMaxDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float MinProximityRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxProximityRadius;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UGbxCondition* TriggerCondition;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageData> StuckDamageData;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StickToTargetAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StickToWorldAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StickyProximityTriggeredAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StuckIdleAudioEvent;
    
public:
    UGrenadeBehavior_PayloadSticky();
    UFUNCTION()
    void StuckGrenadeUnoverlappedActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) const;
    
    UFUNCTION()
    void StuckGrenadeOverlappedActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_StuckGrenadeOverlappedEnded(AGrenade* Grenade, AGrenadeMod* GrenadeMod, AActor* OverlappedActor) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_StuckGrenadeOverlapped(AGrenade* Grenade, AGrenadeMod* GrenadeMod, AActor* OverlappedActor) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeStuckTo(AGrenade* Grenade, AGrenadeMod* GrenadeMod, AActor* StickTarget, UPARAM(Ref) FPayloadInstanceData& InstanceData, const FHitResult& HitResult) const;
    
};

