#pragma once
#include "CoreMinimal.h"
#include "EOakActionAbilityPetType.h"
#include "PlayerCharacterComponent.h"
#include "BeastmasterPetStencilData.h"
#include "EPetRespawnCooldownRefundType.h"
#include "BeastmasterPetAttackFailureSignatureDelegate.h"
#include "GameResourcePoolReference.h"
#include "EnvQueryParams.h"
#include "UObject/NoExportTypes.h"
#include "EPetReleaseReason.h"
#include "EOakActionAbilityPetEvolutionType.h"
#include "BeastmasterCharacterComponent.generated.h"

class UPlayerCharacterComponentSlotData;
class UOakPlayerCharacterAugmentData_Pet;
class AOakCharacter_Player;
class AOakCharacter;
class UGameResourcePoolData;
class AActor;
class UPawnAttachSlotComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UBeastmasterCharacterComponent : public UPlayerCharacterComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBeastmasterPetAttackFailureSignature OnPetAttackCommandFailed;
    
private:
    UPROPERTY(EditDefaultsOnly)
    UPlayerCharacterComponentSlotData* PetSlotData;
    
    UPROPERTY(EditDefaultsOnly)
    FEnvQueryParams PetSpawnLocationParams;
    
    UPROPERTY(EditDefaultsOnly)
    FBeastmasterPetStencilData OwnedPetStencilData;
    
    UPROPERTY(EditDefaultsOnly)
    FBeastmasterPetStencilData UnownedPetStencilData;
    
    UPROPERTY(EditDefaultsOnly)
    UGameResourcePoolData* PetCooldownPool;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameResourcePoolReference PetCooldownPoolRef;
    
    UPROPERTY(EditDefaultsOnly)
    UGameResourcePoolData* PetAttackCooldownPool;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameResourcePoolReference PetAttackCooldownPoolRef;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PetActor, meta=(AllowPrivateAccess=true))
    AOakCharacter* PetActor;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter_Player* OwnerPlayer;
    
    UPROPERTY(Replicated, Transient)
    UOakPlayerCharacterAugmentData_Pet* ActivePetAugment;
    
    UPROPERTY(Transient)
    UOakPlayerCharacterAugmentData_Pet* LocalPetAugment;
    
    UPROPERTY(Transient)
    TArray<UOakPlayerCharacterAugmentData_Pet*> LockedPetAugments;
    
public:
    UBeastmasterCharacterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool ValidateCurrentPetAugment(UOakPlayerCharacterAugmentData_Pet* PetAugment) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void TryOrderPetAttack();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartPetTargetSearch();
    
    UFUNCTION(BlueprintImplementableEvent)
    AOakCharacter* SpawnNewPet(UOakPlayerCharacterAugmentData_Pet* PetAugment, FVector SpawnLocation);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetActivePetAugment(UOakPlayerCharacterAugmentData_Pet* Augment);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerOrderPetAttack();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RestartPetAttackCooldown();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetPetAttackCooldown();
    
private:
    UFUNCTION()
    void OnRep_PetActor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReleasedPet(bool bForced, EPetReleaseReason ReleaseReason);
    
private:
    UFUNCTION()
    void OnPlayerLevelUp(const int32 OldExperienceLevel, const int32 NewExperieneLevel);
    
    UFUNCTION()
    void OnPlayerDied();
    
    UFUNCTION()
    void OnPetDied();
    
    UFUNCTION()
    void OnPetDestroyed(AActor* DestroyedActor);
    
    UFUNCTION()
    void OnPawnAttachSlotStarted(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnCharacterAugmentChanged(UPlayerCharacterComponentSlotData* SlotData);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    float GetPetCooldownRefundPercent(EPetRespawnCooldownRefundType RefundType) const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetPetAttackCooldownPercent() const;
    
    UFUNCTION(BlueprintCallable)
    bool ForcePetSpawnAtLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyPetAttackFailed();
    
    UFUNCTION(BlueprintPure)
    static void BreakPetAugment(UOakPlayerCharacterAugmentData_Pet* Augment, EOakActionAbilityPetType& PetType, EOakActionAbilityPetEvolutionType& EvolutionType, FString& FrameName);
    
};

