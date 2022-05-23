#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "UObject/NoExportTypes.h"
#include "VectorWaveform.h"
#include "CameraBehavior_Sway.generated.h"

UCLASS(EditInlineNew)
class UCameraBehavior_Sway : public UCameraBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FVector LocationWaveformScale;
    
    UPROPERTY(EditAnywhere)
    TArray<FVectorWaveform> LocationWaveforms;
    
    UPROPERTY(EditAnywhere)
    FVector RotationWaveformScale;
    
    UPROPERTY(EditAnywhere)
    TArray<FVectorWaveform> RotationWaveforms;
    
public:
    UCameraBehavior_Sway();
};

