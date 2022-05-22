#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "StandInPlayerClassSpecificPositionSettingContextOverride.generated.h"

USTRUCT(BlueprintType)
struct FStandInPlayerClassSpecificPositionSettingContextOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D ScreenPosition;
    
    UPROPERTY(EditAnywhere)
    FRotator DefaultRotation;
    
    UPROPERTY(EditAnywhere)
    float Depth;
    
    OAKGAME_API FStandInPlayerClassSpecificPositionSettingContextOverride();
};

