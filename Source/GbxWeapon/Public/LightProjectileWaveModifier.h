#pragma once
#include "CoreMinimal.h"
#include "LightProjectileMoveModifier.h"
#include "Vector2DWaveform.h"
#include "GbxEasingFunc.h"
#include "VectorWaveform.h"
#include "LightProjectileWaveModifier.generated.h"

UCLASS(EditInlineNew)
class ULightProjectileWaveModifier : public ULightProjectileMoveModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FVector2DWaveform> Waveforms;
    
    UPROPERTY(EditAnywhere)
    float GlobalWaveformScale;
    
    UPROPERTY()
    FVectorWaveform Waveform;
    
    UPROPERTY(EditAnywhere)
    float EaseInTime;
    
    UPROPERTY(EditAnywhere)
    bool bNormalizedEaseTime;
    
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc EaseInFunc;
    
    UPROPERTY(EditAnywhere)
    bool bRandomize;
    
    ULightProjectileWaveModifier();
};

