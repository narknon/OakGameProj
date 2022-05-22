#pragma once
#include "CoreMinimal.h"
#include "OakMissionSpawner.h"
#include "AttributeInitializationData.h"
#include "SpawnerEnabledEventDelegate.h"
#include "OakMissionRareSpawner.generated.h"

class UGameStatData;
class ASpawner;

UCLASS()
class OAKGAME_API AOakMissionRareSpawner : public AOakMissionSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGameStatData* StatData;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData PercentChanceToSpawn;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnerEnabledEvent OnEnabled;
    
    AOakMissionRareSpawner();
private:
    UFUNCTION()
    void DoRareSpawnSocialLogic(ASpawner* Spawner);
    
};

