#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "CameraIntroBlend.generated.h"

USTRUCT(BlueprintType)
struct FCameraIntroBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeBeforeAllowingMovingCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EndBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseACurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve BlendByCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DampingLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DampingRotation;
    
    OAKGAME_API FCameraIntroBlend();
};

