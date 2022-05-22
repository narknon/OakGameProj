#pragma once
#include "CoreMinimal.h"
#include "OakInventoryItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxAttributeModifierType -FallbackName=EGbxAttributeModifierType
#include "ShieldChargeInventoryPickup.generated.h"

class UOakManagedActorDefinition;
class UShieldAugment_ChargeSpawner;
class UParticleSystem;
class UGbxAttributeData;
class UStaticMeshComponent;
class UWwiseEvent;
class AOakCharacter;

UCLASS()
class AShieldChargeInventoryPickup : public AOakInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UOakManagedActorDefinition* ManagedActorDef;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ModifierValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGbxAttributeData* AttributeToModify;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EGbxAttributeModifierType ModifierType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ModifierDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UWwiseEvent* PickupAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UWwiseEvent* CollisionAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ContextAugment)
    UShieldAugment_ChargeSpawner* ContextAugment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* ScreenEffect;
    
public:
    AShieldChargeInventoryPickup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintNativeEvent)
    void OnShieldChargePickedUp(AOakCharacter* PickupInstigator);
    
protected:
    UFUNCTION()
    void OnRep_ContextAugment();
    
};

