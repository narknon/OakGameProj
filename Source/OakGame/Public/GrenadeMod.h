#pragma once
#include "CoreMinimal.h"
#include "OakInventoryEquippableItem.h"
#include "CauseDamageStatusEffectOverrides.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "PayloadInstanceData.h"
#include "GrenadeMod.generated.h"

class UGrenadeBehavior_Payload;
class UGrenadeBehavior_Delivery;
class UGrenadeModBalanceStateComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UExplosionData;
class AActor;

UCLASS()
class OAKGAME_API AGrenadeMod : public AOakInventoryEquippableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UGrenadeModBalanceStateComponent* BalanceStateComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh3P;
    
    UPROPERTY(Export)
    UStaticMeshComponent* MeshOverride;
    
    UPROPERTY(Transient)
    FCauseDamageStatusEffectOverrides StatusEffectOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxAttributeFloat GrenadeMod_StatusEffectDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxAttributeFloat GrenadeMod_StatusEffectChance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UGrenadeBehavior_Delivery* GrenadeDelivery;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<UGrenadeBehavior_Payload*, FPayloadInstanceData> PayloadBehaviorStacks;
    
    UPROPERTY()
    UExplosionData* ExplosionDataOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxAttributeFloat GrenadeMod_Damage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxAttributeFloat GrenadeMod_ExplosionRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxAttributeFloat GrenadeMod_ImpactFuseTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultGrenadeForce;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxAttributeFloat GrenadeMod_Force;
    
    UPROPERTY(Transient)
    TArray<AActor*> HomingTargets;
    
    UPROPERTY(Transient)
    int32 GrenadeThrowAnimationOverride;
    
public:
    AGrenadeMod();
};

