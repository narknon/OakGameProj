#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakMissionSpawner.h"
#include "OakMissionRareSpawner_WantedPoster.generated.h"

class UMission;
class UGameStatData;
class AActor;

UCLASS()
class OAKGAME_API AOakMissionRareSpawner_WantedPoster : public AOakMissionSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UMission> MissionClass;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* StatData;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UMission>> PrerequisiteMissions;
    
    AOakMissionRareSpawner_WantedPoster();
    UFUNCTION()
    void OnStatChanged(AActor* StatContext, UGameStatData* InStatData, int32 Amount);
    
};

