#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "PhotoModeState.generated.h"

USTRUCT(BlueprintType)
struct FPhotoModeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bPhotoModeUIVisible;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bHUDVisible;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bGamePausedState;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bAutoFocusState;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Contrast;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float DOFIntensity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FOV;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bFilmToneMapperState;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 FilterIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FilterIntensity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FocalDistance;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FocalRegion;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FringeIntensity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Gain;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Gamma;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float GrainIntensity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bHidePlayerState;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Quality;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Saturation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Shoulder;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Slope;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bSuperSharpModeState;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Toe;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float ViewRoll;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float VignetteIntensity;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float VignetteFeathering;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bPausable;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bHideDamageNumbersState;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bOverrideFocusState;
    
    UPROPERTY()
    bool bMatchGameState;
    
    OAKGAME_API FPhotoModeState();
};

