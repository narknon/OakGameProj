#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "AIAspectSettings_Crouch.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_Crouch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam CanCrouchWhileIdle;
    
    UPROPERTY(EditAnywhere)
    bool bUseCanCrouchWhileMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam CanCrouchWhileMoving;
    
    GBXAI_API FAIAspectSettings_Crouch();
};

