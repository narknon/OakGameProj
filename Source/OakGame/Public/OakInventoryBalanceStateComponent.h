#pragma once
#include "CoreMinimal.h"
#include "InventoryBalanceStateComponent.h"
#include "OakInventoryBalanceStateComponent.generated.h"

class UInventoryAbilityAspectData;
class AActor;
class UInventoryMeshAttachmentAspectData;
class UWeaponBonusAspectData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakInventoryBalanceStateComponent : public UInventoryBalanceStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    bool bIsInstanced;
    
    UPROPERTY(Transient)
    TArray<UInventoryAbilityAspectData*> AbilityAspects;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UWeaponBonusAspectData*> BonusAspectList;
    
    UPROPERTY(Transient)
    TArray<UInventoryMeshAttachmentAspectData*> AttachmentAspects;
    
public:
    UOakInventoryBalanceStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void HandleActorDestroyed(AActor* Actor);
    
};

