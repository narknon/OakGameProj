#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "MissionTrackerTitle.generated.h"

UCLASS(EditInlineNew)
class UMissionTrackerTitle : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UMissionTrackerTitle();
    UFUNCTION(BlueprintImplementableEvent)
    void SetMultipleMissionIconVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetMissionName(const FText& MissionText);
    
};

