#pragma once
#include "CoreMinimal.h"
#include "BalanceStateComponent.h"
#include "AnointedDeathStateEventDelegate.h"
#include "AIPlayThroughData.h"
#include "EBalanceValueType.h"
#include "AttributeInitializationData.h"
#include "ItemPoolCollection.h"
#include "AILootDropOverride.h"
#include "AttributeEffectData.h"
#include "AnointedEnemyData.h"
#include "EItemDropOnDeathType.h"
#include "EAnointedDeathState.h"
#include "AIBalanceStateComponent.generated.h"

class UItemPoolListInterface;
class ULootSpawnPatternData;
class UUsableComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UAIBalanceStateComponent : public UBalanceStateComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAnointedDeathStateEvent OnAnointedDeathStateChanged;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<FAIPlayThroughData> PlayThroughs;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ExperienceLevelFormula;
    
    UPROPERTY(EditAnywhere)
    bool bUseExperienceLevelFormula;
    
    UPROPERTY(EditAnywhere)
    EBalanceValueType BaseItemGameStageSource;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ItemGameStageOffset;
    
    UPROPERTY(EditAnywhere)
    FItemPoolCollection DropOnDeathItemPools;
    
    UPROPERTY(Transient)
    FItemPoolCollection CharacterExpansionDropOnDeathItemPools;
    
    UPROPERTY(EditAnywhere)
    FName DropLootSocketName;
    
    UPROPERTY(EditAnywhere)
    ULootSpawnPatternData* DropLootPattern;
    
    UPROPERTY(EditAnywhere)
    TArray<FAILootDropOverride> ExtraDropLootSockets;
    
    UPROPERTY(EditAnywhere)
    uint8 bWaitForNotifyToSpawnLoot: 1;
    
    UPROPERTY(EditAnywhere)
    float DelayedSpawnLootFailSafeTimer;
    
    UPROPERTY(EditAnywhere)
    float TimeToSpawnLootOver;
    
    UPROPERTY(EditAnywhere)
    TArray<FAttributeEffectData> DropLootAttributeEffects;
    
    UPROPERTY(EditAnywhere)
    bool bIsAnointed;
    
    UPROPERTY(EditAnywhere)
    FAnointedEnemyData AnointedData;
    
    UPROPERTY(Transient)
    UItemPoolListInterface* ExtraItemPoolToDropOnDeath;
    
    UPROPERTY(Transient)
    EItemDropOnDeathType ExtraItemPoolDropRule;
    
    UPROPERTY(Transient)
    uint8 bSuppressDropOnDeathItemPools: 1;
    
    UPROPERTY(Export, Transient)
    UUsableComponent* AnointedUsableComponent;
    
    UPROPERTY(Transient)
    EAnointedDeathState AnointedDeathState;
    
public:
    UAIBalanceStateComponent();
    UFUNCTION(BlueprintCallable)
    void SuppressDropOnDeathItemPools(bool bSuppress);
    
    UFUNCTION(BlueprintCallable)
    void ShatterFrozenAnointed();
    
    UFUNCTION(BlueprintCallable)
    void SetCustomDropsOnDeath(UItemPoolListInterface* ExtraPoolToDropOnDeath, bool AddedToBalanceDropItems, EItemDropOnDeathType ItemPoolDropRule);
    
    UFUNCTION(BlueprintCallable)
    void ManuallyTriggerAnointedDeath();
    
    UFUNCTION(BlueprintCallable)
    void ForceDropLoot();
    
    UFUNCTION(BlueprintCallable)
    void FinalizeAnointedFreeze();
    
    UFUNCTION(BlueprintCallable)
    void EnableDropLootSocket(FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void ApplyNameForCurrentPlayThrough();
    
};

