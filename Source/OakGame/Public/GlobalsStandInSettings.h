#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GlobalsStandInSettings.generated.h"

class UPlayerClassIdentifier;

USTRUCT(BlueprintType)
struct FGlobalsStandInSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BaseStandInDepth_EchoRelative;
    
    UPROPERTY(EditAnywhere)
    FVector2D BaseStandInPosition_EchoRelative;
    
    UPROPERTY(EditAnywhere)
    FRotator BaseStandInRotation_EchoRelative;
    
    UPROPERTY(EditAnywhere)
    float BaseEchoProjectionFXDepth_UIObject;
    
    UPROPERTY(EditAnywhere)
    TMap<UPlayerClassIdentifier*, float> BasePlayerClassScale;
    
    OAKGAME_API FGlobalsStandInSettings();
};

