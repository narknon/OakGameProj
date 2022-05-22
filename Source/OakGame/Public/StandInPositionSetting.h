#pragma once
#include "CoreMinimal.h"
#include "StandInPlayerClassSpecificPositionSetting.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "StandInPositionSetting.generated.h"

class UPlayerClassIdentifier;

USTRUCT(BlueprintType)
struct FStandInPositionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D ScreenPosition;
    
    UPROPERTY(EditAnywhere)
    FRotator DefaultRotation;
    
    UPROPERTY(EditAnywhere)
    float Depth;
    
    UPROPERTY(EditAnywhere)
    bool bOrientProjectionFX;
    
    UPROPERTY(EditAnywhere)
    FVector2D ProjectionFXOffset;
    
    UPROPERTY(EditAnywhere)
    float ProjectionFXDepthOffset;
    
    UPROPERTY(EditAnywhere)
    TMap<UPlayerClassIdentifier*, FStandInPlayerClassSpecificPositionSetting> PlayerClassPosition;
    
    OAKGAME_API FStandInPositionSetting();
};

