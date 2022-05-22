#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_Delivery.h"
#include "Engine/EngineTypes.h"
#include "GrenadeBehavior_DeliveryBlueprint.generated.h"

class AGrenadeMod;
class AGrenade;

UCLASS(Blueprintable, Const, EditInlineNew)
class OAKGAME_API UGrenadeBehavior_DeliveryBlueprint : public UGrenadeBehavior_Delivery {
    GENERATED_BODY()
public:
    UGrenadeBehavior_DeliveryBlueprint();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDelay(AGrenade* Grenade, AGrenadeMod* GrenadeMod, float Delay, FName DelayName) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_StopBehaviorAudio(AGrenade* Grenade) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_NativeDelayCallback(AGrenade* Grenade, AGrenadeMod* GrenadeMod, FName DelayName) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeLastBounce(AGrenade* Grenade, AGrenadeMod* GrenadeMod) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeInitialized(AGrenade* Grenade, AGrenadeMod* GrenadeMod) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeImpact(AGrenade* Grenade, AGrenadeMod* GrenadeMod, const FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeExplode(AGrenade* Grenade, AGrenadeMod* GrenadeMod) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeEndPlay(AGrenade* Grenade, AGrenadeMod* GrenadeMod) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeBounce(AGrenade* Grenade, AGrenadeMod* GrenadeMod) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GrenadeBeginPlay(AGrenade* Grenade, AGrenadeMod* GrenadeMod) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_AttachedToGrenadeMod(AGrenadeMod* GrenadeMod) const;
    
};

