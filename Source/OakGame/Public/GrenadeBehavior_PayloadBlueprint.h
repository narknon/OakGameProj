#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GrenadeBehavior_Payload.h"
#include "UObject/NoExportTypes.h"
#include "PayloadInstanceData.h"
#include "GrenadeChildGenerationData.h"
#include "DamageDataEventDetails.h"
#include "GrenadeBehavior_PayloadBlueprint.generated.h"

class AGrenadeMod;
class AGrenade;
class AOakCharacter;

UCLASS(Blueprintable, Const, EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadBlueprint : public UGrenadeBehavior_Payload {
    GENERATED_BODY()
public:
    UGrenadeBehavior_PayloadBlueprint();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    AGrenade* SpawnChildGrenade(AGrenade* ParentGrenade, FTransform SpawnTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDelay(AGrenade* Grenade, AGrenadeMod* GrenadeMod, UPARAM(Ref) FPayloadInstanceData& InstanceData, float Delay, FName DelayName) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_UpdateChildGeneration(const FGrenadeChildGenerationData& InGenerationData, FGrenadeChildGenerationData& GenerationData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_StopBehaviorAudio(AGrenade* Grenade) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_NativeDelayCallback(AGrenade* Grenade, AGrenadeMod* GrenadeMod, UPARAM(Ref) FPayloadInstanceData& InstanceData, FName DelayName) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeLastBounce(AGrenade* Grenade, AGrenadeMod* GrenadeMod, UPARAM(Ref) FPayloadInstanceData& InstanceData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeInitialized(AGrenade* Grenade, AGrenadeMod* GrenadeMod, UPARAM(Ref) FPayloadInstanceData& InstanceData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeImpact(AGrenade* Grenade, AGrenadeMod* GrenadeMod, const FHitResult& HitResult, UPARAM(Ref) FPayloadInstanceData& InstanceData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeExplode(AGrenade* Grenade, AGrenadeMod* GrenadeMod, UPARAM(Ref) FPayloadInstanceData& InstanceData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeEndPlay(AGrenade* Grenade, AGrenadeMod* GrenadeMod, UPARAM(Ref) FPayloadInstanceData& InstanceData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeDamageDealt(AGrenade* Grenade, AGrenadeMod* GrenadeMod, UPARAM(Ref) FPayloadInstanceData& InstanceData, AOakCharacter* Character, const FDamageDataEventDetails& DamageEvent) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeBounce(AGrenade* Grenade, AGrenadeMod* GrenadeMod, UPARAM(Ref) FPayloadInstanceData& InstanceData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeBeginPlay(AGrenade* Grenade, AGrenadeMod* GrenadeMod, UPARAM(Ref) FPayloadInstanceData& InstanceData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_AttachedToGrenadeMod(AGrenadeMod* GrenadeMod, UPARAM(Ref) FPayloadInstanceData& InstanceData) const;
    
};

