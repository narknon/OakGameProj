#pragma once
#include "CoreMinimal.h"
#include "OakMission.h"
#include "OakMissionRareSpawn.generated.h"

class UGameStatData;

UCLASS()
class OAKGAME_API UOakMissionRareSpawn : public UOakMission {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGameStatData* StatData;
    
    UPROPERTY(EditAnywhere)
    FText EnemyDisplayName;
    
    UOakMissionRareSpawn();
};

