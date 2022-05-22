#pragma once
#include "CoreMinimal.h"
#include "OakInventoryItem.h"
#include "ShieldBoosterNonAugment.generated.h"

class AOakCharacter;
class UOakManagedActorDefinition;
class UStaticMeshComponent;
class UWwiseEvent;
class UParticleSystem;

UCLASS()
class AShieldBoosterNonAugment : public AOakInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UOakManagedActorDefinition* ManagedActorDef;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ModifierValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UWwiseEvent* PickupAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UWwiseEvent* CollisionAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* ScreenEffect;
    
public:
    AShieldBoosterNonAugment();
    UFUNCTION(BlueprintNativeEvent)
    void OnShieldChargePickedUp(AOakCharacter* PickupInstigator);
    
};

