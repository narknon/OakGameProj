#pragma once
#include "CoreMinimal.h"
#include "MissionDirectorComponent.h"
#include "OakMissionDirectorComponent.generated.h"

class AOakPlayerController;
class UInWorldIconData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakMissionDirectorComponent : public UMissionDirectorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInWorldIconData* IconData;
    
    UOakMissionDirectorComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TriggerMissionDeliveryPlacard(AOakPlayerController* InitiatingPlayer, bool& bMissionAvailable);
    
};

