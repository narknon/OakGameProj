#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "StandInPlayerClassSpecificPositionSettingContextOverride.h"
#include "StandInPlayerClassSpecificPositionSetting.generated.h"

USTRUCT(BlueprintType)
struct FStandInPlayerClassSpecificPositionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D ScreenPosition;
    
    UPROPERTY(EditAnywhere)
    FRotator DefaultRotation;
    
    UPROPERTY(EditAnywhere)
    float Depth;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FStandInPlayerClassSpecificPositionSettingContextOverride> ContextOverrides;
    
    OAKGAME_API FStandInPlayerClassSpecificPositionSetting();
};

