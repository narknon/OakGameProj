#pragma once
#include "CoreMinimal.h"
#include "EAIAspectSettingsDefaults_Rotation.h"
#include "EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset.h"
#include "AIAspectSettings_RotationChannel.h"
#include "AIAspectSettings_Rotation.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Rotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTrackTargetOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAIAspectSettingsDefaults_Rotation_BodyHeadingOffset BodyHeadingOffsetPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BodyHeadingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAIAspectSettingsDefaults_Rotation PremadeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_RotationChannel Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_RotationChannel Aim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIAspectSettings_RotationChannel Look;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bKeepFacingTargetOnStop;
    
    FAIAspectSettings_Rotation();
};

