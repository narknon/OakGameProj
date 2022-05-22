#pragma once
#include "CoreMinimal.h"
#include "GbxEasingFunc.h"
#include "MainMenuCameraBlendParams.generated.h"

USTRUCT(BlueprintType)
struct FMainMenuCameraBlendParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BlendTime;
    
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc BlendEasing;
    
    OAKGAME_API FMainMenuCameraBlendParams();
};

