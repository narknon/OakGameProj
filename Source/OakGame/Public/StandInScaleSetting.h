#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStandInAutoScaleMode.h"
#include "StandInScaleSetting.generated.h"

class UPlayerClassIdentifier;

USTRUCT(BlueprintType)
struct FStandInScaleSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    TMap<UPlayerClassIdentifier*, float> PlayerClassScale;
    
    UPROPERTY(EditAnywhere)
    EStandInAutoScaleMode AutoScaleMode;
    
    UPROPERTY(EditAnywhere)
    FVector AutoScaleExtent;
    
    OAKGAME_API FStandInScaleSetting();
};

