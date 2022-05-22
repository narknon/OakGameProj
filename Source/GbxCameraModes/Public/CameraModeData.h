#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ECameraModeTransitionBlendType.h"
#include "EViewTargetRotationUpdateMethod.h"
#include "CameraModeData.generated.h"

class UCameraBehavior;

UCLASS()
class GBXCAMERAMODES_API UCameraModeData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ModeName;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    uint8 bBlendOut: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsFirstPerson: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowViewModel: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowPitchInversion: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAutoPerspectiveOverride: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bResetCameraRollOnStart: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowIntentionalClipping: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bInterruptTransitionWhenClipping: 1;
    
    UPROPERTY(DuplicateTransient, EditAnywhere)
    uint8 bIncludeInDebugRotation: 1;
    
    UPROPERTY(EditAnywhere)
    EViewTargetRotationUpdateMethod ViewTargetRotationUpdateMethod;
    
    UPROPERTY(EditAnywhere)
    ECameraModeTransitionBlendType FirstPersonBlendType;
    
    UPROPERTY(EditAnywhere)
    ECameraModeTransitionBlendType ThirdPersonBlendType;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UCameraBehavior*> Behaviors;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisableSeparateTranslucency: 1;
    
    UCameraModeData();
};

