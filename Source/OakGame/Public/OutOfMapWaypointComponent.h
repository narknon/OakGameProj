#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MissionIconComponent.h"
#include "UObject/NoExportTypes.h"
#include "OutOfMapWaypointComponent.generated.h"

class UInWorldIconData;
class UMission;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOutOfMapWaypointComponent : public UMissionIconComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* IconData;
    
    UPROPERTY(EditDefaultsOnly)
    float VisibleDistanceOverride;
    
    UPROPERTY(EditDefaultsOnly)
    float HiddenDistanceOverride;
    
private:
    UPROPERTY(Transient)
    TSubclassOf<UMission> MissionClass;
    
    UPROPERTY(Transient)
    FGuid IconGuid;
    
public:
    UOutOfMapWaypointComponent();
};

