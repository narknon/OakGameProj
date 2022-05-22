#pragma once
#include "CoreMinimal.h"
#include "OakInventoryBalanceStateComponent.h"
#include "OakPassiveAbilityBuffProviderInterface.h"
#include "OakClassModInventoryBalanceStateComponent.generated.h"

class UUIStatData_Ability;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakClassModInventoryBalanceStateComponent : public UOakInventoryBalanceStateComponent, public IOakPassiveAbilityBuffProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName GeneratedStatsSection;
    
    UPROPERTY(EditAnywhere)
    float GeneratedStatPriority;
    
private:
    UPROPERTY(Transient)
    TArray<UUIStatData_Ability*> CachedUIAbilityStats;
    
public:
    UOakClassModInventoryBalanceStateComponent();
    
    // Fix for true pure virtual functions not being implemented
};

