#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "SimpleActionSkillTreeTierSignatureDelegate.h"
#include "SimpleActionSkillTreeItemSignatureDelegate.h"
#include "ActionSkillTreeAbilityPointsChangedDelegate.h"
#include "SimpleAbilityTreeSignatureDelegate.h"
#include "AbilityTreeTier.h"
#include "AbilityTreeBranch.h"
#include "AbilityTreeItem.h"
#include "OakPlayerAbilityTree.generated.h"

class UOakPlayerAbilityManagerComponent;
class UOakPlayerAbilityTreeData;
class UOakActionAbility;
class UOakPlayerAbilityTreeItemData;
class UOakPlayerAbility;
class UOakPlayerAbilityTreeItemData_Ability;
class UGbxDataAsset;
class UOakPlayerAbilityTreeItemData_GbxDataAsset;
class UOakPassiveAbilityBuffProviderInterface;
class IOakPassiveAbilityBuffProviderInterface;

UCLASS(BlueprintType, DefaultToInstanced, Within=OakPlayerAbilityManagerComponent)
class UOakPlayerAbilityTree : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSimpleActionSkillTreeTierSignature OnPlayerAbilityTreeTierChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleActionSkillTreeItemSignature OnPlayerAbilityTreeItemChanged;
    
    UPROPERTY(BlueprintAssignable)
    FActionSkillTreeAbilityPointsChanged OnPlayerAbilityPointsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FActionSkillTreeAbilityPointsChanged OnTreeGradePointsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleAbilityTreeSignature OnPlayerAbilityTreeReset;
    
private:
    UPROPERTY(Export, Transient)
    UOakPlayerAbilityManagerComponent* Owner;
    
    UPROPERTY(Transient)
    TSubclassOf<UOakActionAbility> TreeActionAbilityClass;
    
    UPROPERTY(Transient)
    UOakPlayerAbilityTreeData* TreeData;
    
    UPROPERTY(Transient)
    TArray<FAbilityTreeBranch> Branches;
    
    UPROPERTY(Transient)
    TArray<FAbilityTreeTier> Tiers;
    
    UPROPERTY(Transient)
    TArray<FAbilityTreeItem> Items;
    
    UPROPERTY(Transient)
    TMap<TSubclassOf<UOakPlayerAbility>, UOakPlayerAbilityTreeItemData_Ability*> AbilityClassToTreeItemData;
    
    UPROPERTY(Transient)
    TMap<UGbxDataAsset*, UOakPlayerAbilityTreeItemData_GbxDataAsset*> DataAssetToTreeItemData;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_AbilityPoints)
    int32 AbilityPoints;
    
    UPROPERTY(Transient)
    TScriptInterface<IOakPassiveAbilityBuffProviderInterface> BuffProvider;
    
public:
    UOakPlayerAbilityTree();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_AbilityPoints();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void GiveAbilityPoints(int32 Points);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void DEBUG_AddPointToAbilityTreeItem(UOakPlayerAbilityTreeItemData* ItemData);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientSetTreeGrade(int32 NewTreeGrade);
    
    UFUNCTION(Client, Reliable)
    void ClientAddItemPoint(UOakPlayerAbilityTreeItemData* ItemData);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AddPointToAbilityTreeItem(UOakPlayerAbilityTreeItemData* ItemData);
    
};

