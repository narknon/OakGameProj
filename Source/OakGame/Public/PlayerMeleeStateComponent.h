#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "MeleeWeaponAttachmentData.h"
#include "ReplicatedMeleeActionData.h"
#include "EGbxActionEndState.h"
#include "PlayerMeleeStateComponent.generated.h"

class UPlayerMeleeData;
class AActor;
class UGbxDamageType;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerMeleeStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMeleeStatePerformMelee, UPlayerMeleeData*, MeleeData, bool, bSuccess, AActor*, MeleeTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMeleeStateChangeEvent, bool, bCanMelee);
    
protected:
    UPROPERTY()
    UPlayerMeleeData* PlayerMeleeData;
    
    UPROPERTY(EditAnywhere)
    TArray<UPlayerMeleeData*> PlayerMeleeDataList;
    
    UPROPERTY(EditAnywhere)
    FMeleeWeaponAttachmentData FirstPersonMeleeWeapon;
    
    UPROPERTY(EditAnywhere)
    FMeleeWeaponAttachmentData ThirdPersonMeleeWeapon;
    
    UPROPERTY(EditAnywhere)
    FName MeleeWeaponBoneModifyStateName;
    
    UPROPERTY(EditAnywhere)
    float MeleeWeaponBoneModifyBlendTime;
    
private:
    UPROPERTY(Transient)
    UPlayerMeleeData* ActivePlayerMeleeData;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedMeleeData)
    FReplicatedMeleeActionData ReplicatedMeleeData;
    
    UPROPERTY(Transient)
    float MeleeHitTime;
    
    UPROPERTY(Transient)
    float EndMeleeDuration;
    
    UPROPERTY(Transient)
    float MeleeCooldownEndTime;
    
    UPROPERTY(Transient)
    AActor* CurrentMeleeTarget;
    
    UPROPERTY(Transient)
    FName CurrentTargetSocket;
    
    UPROPERTY(Transient)
    UGbxDamageType* DamageTypeOverride;
    
public:
    UPROPERTY(BlueprintAssignable)
    FMeleeStatePerformMelee OnPerformMelee;
    
    UPlayerMeleeStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetMeleeDamageType(TSubclassOf<UGbxDamageType> InDamageType);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableMeleeWeaponCFX(bool bEnableEffect);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_PerformSirenOverrunMelee(AActor* Target);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_PerformPlayerMelee();
    
public:
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockPlayerMeleeWeaponVisible(AActor* PlayerActor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockPlayerMeleeWeaponVisible(AActor* PlayerActor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    bool PerformPlayerMelee();
    
private:
    UFUNCTION()
    void OnRep_ReplicatedMeleeData();
    
    UFUNCTION()
    void OnMeleeActionEnd(EGbxActionEndState EndState);
    
    UFUNCTION(BlueprintCallable)
    bool IsPerformingMelee();
    
    UFUNCTION()
    void HandleFirstPersonCreated(bool bArmsCreated);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearMeleeDamageType();
    
private:
    UFUNCTION()
    void CharacterTransported();
    
};

