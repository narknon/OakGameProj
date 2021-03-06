#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AutoplayCombatState.h"
#include "MissionObserverInterface.h"
#include "GbxNavPathingData.h"
#include "AutoplayMissionState.h"
#include "OakAutoplayComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakAutoplayComponent : public USceneComponent, public IMissionObserverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGbxNavPathingData PathingData;
    
    UPROPERTY()
    FAutoplayMissionState MissionState;
    
    UPROPERTY()
    FAutoplayCombatState CombatState;
    
    UOakAutoplayComponent();
    
    // Fix for true pure virtual functions not being implemented
};

