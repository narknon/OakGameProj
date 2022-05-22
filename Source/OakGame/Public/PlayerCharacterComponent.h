#pragma once
#include "CoreMinimal.h"
#include "OakPlayerCharacterSlotItemList.h"
#include "Components/ActorComponent.h"
#include "PlayerCharacterComponent.generated.h"

class UPlayerCharacterComponentSlotData;
class AOakCharacter_Player;
class UPlayerCharacterComponentAugmentData;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<UPlayerCharacterComponentSlotData*> CharacterSlots;
    
    UPROPERTY(Replicated, Transient)
    FOakPlayerCharacterSlotItemList SlotItemList;
    
    UPROPERTY(Transient)
    AOakCharacter_Player* CachedPlayer;
    
public:
    UPlayerCharacterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void SetSlotAugment(UPlayerCharacterComponentSlotData* Slot, UPlayerCharacterComponentAugmentData* Augment);
    
    UFUNCTION(BlueprintPure)
    bool HasAnySlotAugment(UPlayerCharacterComponentSlotData* Slot) const;
    
    UFUNCTION(BlueprintCallable)
    void HandlePreInputActivation();
    
    UFUNCTION(BlueprintCallable)
    void HandleInputActivationEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleInputActivationBegin();
    
    UFUNCTION(BlueprintPure)
    UPlayerCharacterComponentAugmentData* GetSlotAugment(UPlayerCharacterComponentSlotData* Slot) const;
    
};

