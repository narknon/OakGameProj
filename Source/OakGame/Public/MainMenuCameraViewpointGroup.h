#pragma once
#include "CoreMinimal.h"
#include "MainMenuCameraViewpoint.h"
#include "MainMenuCameraViewpointGroup.generated.h"

USTRUCT(BlueprintType)
struct FMainMenuCameraViewpointGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMainMenuCameraViewpoint PrimaryViewpoint;
    
    UPROPERTY(EditAnywhere)
    TArray<FMainMenuCameraViewpoint> SecondaryViewpoints;
    
    OAKGAME_API FMainMenuCameraViewpointGroup();
};

