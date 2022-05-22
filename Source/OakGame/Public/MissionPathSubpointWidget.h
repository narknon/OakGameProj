#pragma once
#include "CoreMinimal.h"
#include "HUDInWorldIcon.h"
#include "MissionPathSubpointWidget.generated.h"

class UWidgetAnimation;

UCLASS(EditInlineNew)
class UMissionPathSubpointWidget : public UHUDInWorldIcon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    UWidgetAnimation* PathActiveAnimation;
    
    UPROPERTY(EditAnywhere, Export)
    UWidgetAnimation* PathSpawnAnimation;
    
    UMissionPathSubpointWidget();
};

