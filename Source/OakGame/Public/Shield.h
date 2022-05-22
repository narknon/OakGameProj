#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakInventoryEquippableItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "AugmentData.h"
#include "TrackedShieldAttributeData.h"
#include "ShieldDamageModifierData.h"
#include "GameResourcePoolReference.h"
#include "EShieldState.h"
#include "Engine/EngineTypes.h"
#include "EOakElementalType.h"
#include "EShieldAttributeModificationSource.h"
#include "WeaponShotModifierData.h"
#include "EHealthState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxAttributeModifierType -FallbackName=EGbxAttributeModifierType
#include "Shield.generated.h"

class UViewAttachmentComponent;
class UGameResourceData;
class USkeletalMeshComponent;
class UGbxAttributeData;
class UShieldAugment;
class UShieldBalanceStateComponent;
class AOakCharacter_Player;
class AOakCharacter;
class UWeaponShotModifier;
class UFeedbackData;
class UWwiseAudioComponent;
class AWeapon;
class UDamageSource;
class UGbxDamageType;
class UParticleSystemComponent;
class UPawnAttachSlotComponent;
class UObject;

UCLASS()
class AShield : public AOakInventoryEquippableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxAttributeFloat ShieldAttribute_Capacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxAttributeFloat ShieldAttribute_RegenRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxAttributeFloat ShieldAttribute_RegenDelay;
    
private:
    UPROPERTY(EditDefaultsOnly, Export)
    USkeletalMeshComponent* ShieldMesh;
    
    UPROPERTY(EditDefaultsOnly)
    UGameResourceData* ShieldResource;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* ShieldDamageAttributeData;
    
    UPROPERTY(Export, Transient, VisibleAnywhere)
    UShieldBalanceStateComponent* BalanceStateComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    AOakCharacter_Player* OwningPlayer;
    
    UPROPERTY(Transient)
    TMap<UShieldAugment*, FAugmentData> ShieldAugments;
    
    UPROPERTY(Transient)
    TArray<FTrackedShieldAttributeData> AppliedAttributes;
    
    UPROPERTY(Transient)
    TArray<AOakCharacter*> CharactersWithAppliedShotModifiers;
    
    UPROPERTY(Transient)
    TArray<FShieldDamageModifierData> DamageModifiers;
    
    UPROPERTY(Transient)
    UWeaponShotModifier* ShotModifier;
    
    UPROPERTY(Transient)
    EShieldState ShieldState;
    
    UPROPERTY()
    UFeedbackData* ShieldBreakFeedback;
    
    UPROPERTY(Transient)
    FTimerHandle AdaptiveTimer;
    
    UPROPERTY(Transient)
    EOakElementalType AdaptiveType;
    
public:
    UPROPERTY(Replicated, Transient)
    bool bIsBarrierShield;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UWwiseAudioComponent* AudioComponent;
    
private:
    UPROPERTY(Export, Transient)
    UViewAttachmentComponent* ProjectedShield;
    
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* ProjectedAudioComponent;
    
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* AmpAudioComponent;
    
public:
    AShield();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RemoveModifierFromAttribute(UGbxAttributeData* Attribute, UClass* AugmentClass, EShieldAttributeModificationSource Source);
    
    UFUNCTION()
    void OnWeaponShotModified(AWeapon* Weapon, const FWeaponShotModifierData& Data);
    
    UFUNCTION()
    void OnWeaponChanged(AWeapon* Weapon, AWeapon* LastWeapon);
    
    UFUNCTION()
    void OnShieldUnequipped(AOakCharacter* Equipper);
    
    UFUNCTION()
    void OnShieldNotFilled(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnShieldNotDepleted(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnShieldFilled(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnShieldEquipped(AOakCharacter* Equipper);
    
    UFUNCTION()
    void OnShieldDepleted(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnShieldAbsorbedDamage(const UDamageSource* DamageSource, const UGbxDamageType* InDamageType);
    
    UFUNCTION()
    void OnProjectedShieldParticleSystemFinished(UParticleSystemComponent* PSC);
    
    UFUNCTION()
    void OnOwnerUncrouched();
    
    UFUNCTION()
    void OnOwnerHealthStateChanged(EHealthState HealthState);
    
    UFUNCTION()
    void OnOwnerEnteredVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnOwnerCrouched();
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_PlayEffectsOnAugment(TSubclassOf<UShieldAugment> AugmentClass, FName AugmentName, UObject* AdditionalContext);
    
    UFUNCTION(BlueprintPure)
    bool IsProjectedShield() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPendingDestroyFromBarrier() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBarrierShield() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UGbxDamageType> GetDamageType() const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseShieldDamage();
    
    UFUNCTION(BlueprintCallable)
    void AddModifierToAttribute(UGbxAttributeData* Attribute, UObject* Context, float Modifier, EGbxAttributeModifierType Type, UClass* AugmentClass, EShieldAttributeModificationSource Source);
    
};

