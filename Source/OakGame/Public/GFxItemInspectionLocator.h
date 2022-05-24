#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GFxItemInspectionLocator.generated.h"

class UGFxItemInspectionMenu;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxItemInspectionLocator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RotateFactor;
    
    UPROPERTY(EditAnywhere)
    float PanFactor;
    
    UPROPERTY(EditAnywhere)
    float ZoomFactor;
    
    UPROPERTY(EditAnywhere)
    float ItemFOV;
    
    UPROPERTY(EditAnywhere)
    float ReferenceItemScale;
    
    UPROPERTY(EditAnywhere)
    FVector2D ScaleRange;
    
    UPROPERTY(EditAnywhere)
    float MouseToPanFactor;
    
    UPROPERTY(EditAnywhere)
    float MouseToRotateFactor;
    
    UPROPERTY(EditAnywhere)
    float MouseWheelFactor;
    
    UPROPERTY(EditAnywhere)
    float KeyboardZoomFactor;
    
    UPROPERTY(EditAnywhere)
    float HeightThreshold;
    
    UPROPERTY(EditAnywhere)
    float IntroDuration;
    
    UPROPERTY(EditAnywhere)
    FRotator IntroRotation;
    
    UPROPERTY(EditAnywhere)
    FRotator IntroRotationRandomness;
    
    UPROPERTY(EditAnywhere)
    float IntroRotationAlphaPowerRandomness;
    
    UPROPERTY(Transient)
    UGFxItemInspectionMenu* MenuOuter;
    
    FGFxItemInspectionLocator();
};

