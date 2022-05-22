#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_DeliveryBlueprint.h"
#include "EnvQueryParams.h"
#include "GrenadeBehavior_DeliveryHoming.generated.h"

class UGrenadeHomingComponent;
class AGrenadeMod;
class AGrenade;
class AActor;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_DeliveryHoming : public UGrenadeBehavior_DeliveryBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float HomingStartDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingRetryDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingHitTargetDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingBounceDelay;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UGrenadeHomingComponent* HomingTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingFriction;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingBounciness;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvQueryParams InitialSearchQuery;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvQueryParams RetrySearchQuery;
    
    UPROPERTY(EditDefaultsOnly)
    float EQSRetriggerDelay;
    
    UGrenadeBehavior_DeliveryHoming();
    UFUNCTION(BlueprintImplementableEvent)
    void K2_HomingTargetLost(AGrenade* Grenade, AGrenadeMod* GrenadeMod) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_FoundHomingTarget(AGrenade* Grenade, AGrenadeMod* GrenadeMod, AActor* HomingTarget) const;
    
};

