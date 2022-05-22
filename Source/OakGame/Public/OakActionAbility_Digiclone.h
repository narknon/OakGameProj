#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakActionAbility.h"
#include "EnvQueryParams.h"
#include "GameResourcePoolReference.h"
#include "AttributeInitializationData.h"
#include "OakActionAbilityEnumMaskHelper.h"
#include "UObject/NoExportTypes.h"
#include "ECloneSwapReason.h"
#include "EDigiCloneModType.h"
#include "OakActionAbility_Digiclone.generated.h"

class UGameResourcePoolData;
class APawn;
class UOakActionAbilityAugmentData_Digiclone;
class UDamageSource;
class AOakCharacter;
class AActor;

UCLASS()
class UOakActionAbility_Digiclone : public UOakActionAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameResourcePoolData* DigicloneCooldownPoolData;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameResourcePoolReference DigicloneCooldownPoolRef;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameResourcePoolData* SwapPlacesCooldownPoolData;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameResourcePoolReference SwapPlacesCooldownPoolRef;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FEnvQueryParams FindNewSpawnLocationQueryParams;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UOakActionAbilityAugmentData_Digiclone*> PassiveMods;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DigicloneSwapRetryCount;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData JustAcceptCooldownData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UDamageSource>> JustAcceptDamageSources;
    
    UPROPERTY(Replicated, Transient)
    FOakActionAbilityEnumMaskHelper RuntimeMods;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CurrentDigiclone, meta=(AllowPrivateAccess=true))
    AOakCharacter* CurrentDigiclone;
    
public:
    UOakActionAbility_Digiclone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool TryJustAcceptRefund(float Damage, FVector HitLocation, FVector HitDirection);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SwapPlaces(ECloneSwapReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void StartDigicloneSwapCooldown();
    
    UFUNCTION(BlueprintImplementableEvent)
    AOakCharacter* SpawnNewDigiclone(const FVector& Location);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnDigiclone(const FVector& Location);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSwapPlaces();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDetonateClone();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelDetonateClone();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerBeginDetonateClone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseDigiclone(AOakCharacter* Digiclone);
    
private:
    UFUNCTION()
    void OnRep_CurrentDigiclone();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerSwapSucceeded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerSwapStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerSwapFailed();
    
private:
    UFUNCTION()
    void OnDigicloneRespawnCooldownFilled(FGameResourcePoolReference ResourcePool);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDigicloneDied();
    
private:
    UFUNCTION()
    void OnDigicloneDestroyed(AActor* Digiclone);
    
    UFUNCTION()
    void OnDigicloneDead();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCorsicanDamage(float Damage, APawn* DamageSource);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCloneSwapSucceeded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCloneSwapStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCloneSwapFailed();
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsSafeToSwapPlayerWithClone() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool HasDigicloneMod(EDigiCloneModType InModType) const;
    
    UFUNCTION(BlueprintPure)
    float GetSwapCooldownPercent() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void GetQueryParamsForCloneSwapLocationAttempt(int32 Attempt, FEnvQueryParams& Params, AActor*& QueryContext);
    
public:
    UFUNCTION(BlueprintPure)
    float GetCloneRespawnCooldownPercent() const;
    
    UFUNCTION(BlueprintCallable)
    void DoCloneSwap();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DetonateClone();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CancelDetonateClone();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BeginDetonateClone();
    
};

