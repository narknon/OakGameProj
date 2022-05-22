#pragma once
#include "CoreMinimal.h"
#include "OakTriggerBox.h"
#include "MissionEventReference.h"
#include "OakMissionWaypointBox.generated.h"

class UOakMissionIconComponent;
class AActor;
class UActorComponent;

UCLASS()
class OAKGAME_API AOakMissionWaypointBox : public AOakTriggerBox {
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
    
    AOakMissionWaypointBox();
    UFUNCTION()
    void WaypointTriggerTouched(AActor* OtherActor, bool bIsPlayer, UActorComponent* ComponentTouched);
    
};

