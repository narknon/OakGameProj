#pragma once
#include "CoreMinimal.h"
#include "OakTriggerSphere.h"
#include "MissionEventReference.h"
#include "OakMissionWaypoint.generated.h"

class UOakMissionIconComponent;
class AActor;
class UActorComponent;

UCLASS()
class OAKGAME_API AOakMissionWaypoint : public AOakTriggerSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakMissionIconComponent* MissionIconComponent;
    
    UPROPERTY()
    FMissionEventReference MissionEventReference;
    
    UPROPERTY(EditAnywhere)
    TArray<FMissionEventReference> MissionEventReferences;
    
    UPROPERTY(EditAnywhere)
    bool bUsePlayerAsContext;
    
    AOakMissionWaypoint();
    UFUNCTION()
    void WaypointTriggerTouched(AActor* OtherActor, bool bIsPlayer, UActorComponent* ComponentTouched);
    
};

