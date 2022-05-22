#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "UObject/NoExportTypes.h"
#include "GbxParam.h"
#include "AIAspectSettings_RotationChannel.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_RotationChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam MaxRotateAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseMaxRotateAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam ConditionalEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseConditionalEnable;
    
    FAIAspectSettings_RotationChannel();
};

