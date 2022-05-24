#pragma once
#include "CoreMinimal.h"
#include "InteractiveObject.h"
#include "MissionObjectiveReference.h"
#include "UserStateEnumValue.h"
#include "Mission_InteractiveObject.generated.h"

class UMissionObserverComponent;
class UMissionIconComponent;

UCLASS()
class AMission_InteractiveObject : public AInteractiveObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bAutomaticallyControlWaypoint;
    
    UPROPERTY(EditAnywhere)
    bool bUseComplexConditions;
    
    UPROPERTY(EditAnywhere)
    FMissionObjectiveReference ObjectiveToCareAbout;
    
    UPROPERTY(EditDefaultsOnly)
    FUserStateEnumValue ConditionActiveState;
    
    UPROPERTY(EditDefaultsOnly)
    FUserStateEnumValue ConditionCompleteState;
    
    UPROPERTY(Export, Transient)
    UMissionObserverComponent* ObserverComponent;
    
    UPROPERTY(Export, Transient)
    UMissionIconComponent* IconComponent;
    
public:
    AMission_InteractiveObject();
};

