#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SimpleActionSkillDelegateSignatureDelegate.h"
#include "OakCharacterAbilityManagerComponent.h"
#include "OakActionAbilityAugmentChangedSignatureDelegate.h"
#include "SimplePlayerAbilitySlotDelegateSignatureDelegate.h"
#include "OnActionAbilityFailedActivationDelegate.h"
#include "OakPlayerAbilitySlotList.h"
#include "OakActionAbilityAugmentSlotList.h"
#include "OakPlayerAbilityHUDItemList.h"
#include "OakActionAbilityAugmentSlotConfigurationList.h"
#include "OakPlayerAbilitySaveGameData.h"
#include "OakPlayerAbilityManagerComponent.generated.h"

class UOakPlayerAbilityData;
class UOakPlayerAbilityTree;
class UOakActionAbility;
class UOakPlayerAbilityEventHub;
class UOakPlayerAbilityTreeItemData;
class UOakPlayerAbilityTreeBranchData;
class UOakActionAbilityAugmentSlotData;
class UOakActionAbilityAugmentData;
class UOakPlayerAbilitySlotData;
class UOakPlayerAbility;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakPlayerAbilityManagerComponent : public UOakCharacterAbilityManagerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSimpleActionSkillDelegateSignature OnActionSkillReady;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleActionSkillDelegateSignature OnActionSkillCoolingDown;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleActionSkillDelegateSignature OnActionSkillActivated;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleActionSkillDelegateSignature OnActionSkillActivating;
    
    UPROPERTY(BlueprintAssignable)
    FOakActionAbilityAugmentChangedSignature OnActionAbilityAugmentChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSimplePlayerAbilitySlotDelegateSignature OnPlayerAbilitySlotChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleActionSkillDelegateSignature OnActionSkillChargeCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnActionAbilityFailedActivation OnActionSkillActivationFailed;
    
private:
    UPROPERTY(EditDefaultsOnly)
    UOakPlayerAbilityData* BaseOakPlayerAbilities;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UOakPlayerAbilityEventHub> PlayerAbilityEventHubClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 FirstAbilityPointLevel;
    
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UOakPlayerAbilityTree* PlayerAbilityTree;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakPlayerAbilityEventHub* PlayerAbilityEventHub;
    
    UPROPERTY(Replicated, Transient)
    FOakPlayerAbilitySlotList AbilitySlotList;
    
    UPROPERTY(Replicated, Transient)
    FOakActionAbilityAugmentSlotList AugmentSlotList;
    
    UPROPERTY(Transient)
    TArray<UOakActionAbility*> ActionAbilities;
    
    UPROPERTY(Replicated, Transient)
    FOakPlayerAbilityHUDItemList PlayerAbilityHUDItemList;
    
    UPROPERTY(Transient)
    FOakActionAbilityAugmentSlotConfigurationList SlotConfigurationList;
    
    UPROPERTY(Transient)
    TArray<UOakPlayerAbilityTreeBranchData*> LockedSkillBranches;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AbilityDataForSaveGameSet)
    bool bAbilityDataForSaveGameSet;
    
    UPROPERTY(Transient)
    FOakPlayerAbilitySaveGameData AbilityDataForSaveGame;
    
    UPROPERTY(Transient)
    int32 OriginalSavedGrade;
    
    UPROPERTY(Transient)
    int32 OriginalSavedAbilityPoints;
    
public:
    UOakPlayerAbilityManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetSlotAugment(TSubclassOf<UOakActionAbility> AbilityClass, UOakActionAbilityAugmentSlotData* AugmentSlot, UOakActionAbilityAugmentData* Augment);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetSlotAbilityClass(UOakPlayerAbilitySlotData* AbilitySlot, TSubclassOf<UOakPlayerAbility> AbilityClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void PurchaseAbilityRespec();
    
private:
    UFUNCTION()
    void OnRep_AbilityDataForSaveGameSet();
    
    UFUNCTION()
    void OnPlayerLevelUp(const int32 OldExperienceLevel, const int32 NewExperienceLevel);
    
    UFUNCTION()
    void OnPlayerAbilityTreeReset();
    
    UFUNCTION()
    void OnPlayerAbilityTreePointsChanged(int32 NewPoints);
    
    UFUNCTION()
    void OnPlayerAbilityTreeGradeChanged(int32 NewGrade);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAbilitySlotted(TSubclassOf<UOakPlayerAbility> AbilityClass) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAbilityAugmentSlotted(TSubclassOf<UOakActionAbility> AbilityClass, UOakActionAbilityAugmentData* Augment) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAbilityAugmentInSlot(TSubclassOf<UOakActionAbility> AbilityClass, UOakActionAbilityAugmentData* Augment, UOakActionAbilityAugmentSlotData* AugmentSlot) const;
    
    UFUNCTION(BlueprintPure)
    bool HasPurchasedPlayerAbility(TSubclassOf<UOakPlayerAbility> AbilityClass) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UOakPlayerAbility> GetSlotAbilityClass(UOakPlayerAbilitySlotData* AbilitySlot) const;
    
    UFUNCTION(BlueprintPure)
    UOakPlayerAbility* GetSlotAbility(UOakPlayerAbilitySlotData* AbilitySlot) const;
    
    UFUNCTION(BlueprintPure)
    UOakPlayerAbilitySlotData* GetAbilitySlot(TSubclassOf<UOakPlayerAbility> AbilityClass) const;
    
    UFUNCTION(BlueprintPure)
    UOakActionAbilityAugmentData* GetAbilityAugmentInSlot(TSubclassOf<UOakActionAbility> AbilityClass, UOakActionAbilityAugmentSlotData* AugmentSlot) const;
    
    UFUNCTION(BlueprintPure)
    UOakActionAbility* FindActionAbility(TSubclassOf<UOakActionAbility> ActionAbilityClass) const;
    
private:
    UFUNCTION(Client, Reliable)
    void ClientUpgradeAbilityTreeItem(UOakPlayerAbilityTreeItemData* ItemData);
    
    UFUNCTION(Client, Reliable)
    void ClientResetAbilities();
    
public:
    UFUNCTION(Client, Reliable)
    void ClientRecordModSlotChange(TSubclassOf<UOakActionAbility> AbilityClass, UOakActionAbilityAugmentSlotData* ModSlotData, UOakActionAbilityAugmentData* ModAugmentData, UOakActionAbilityAugmentData* AugmentData);
    
    UFUNCTION(BlueprintPure)
    bool CanAugmentBeUsed(UOakActionAbilityAugmentData* InAugmentData) const;
    
};

