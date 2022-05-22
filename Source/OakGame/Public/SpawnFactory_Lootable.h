#pragma once
#include "CoreMinimal.h"
#include "SpawnFactory_Oak.h"
#include "SpawnFactory_Lootable.generated.h"

class ALootableObject;
class UGbxCondition;
class ULootableBalanceData;

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API USpawnFactory_Lootable : public USpawnFactory_Oak {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ALootableObject> LootableActorClass;
    
    UPROPERTY(EditAnywhere)
    bool bLockOnSpawn;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* UnlockCondition;
    
    UPROPERTY(EditAnywhere)
    ULootableBalanceData* LootableBalanceDataOverride;
    
public:
    USpawnFactory_Lootable();
};

