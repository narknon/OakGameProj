#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "Engine/Scene.h"
#include "CameraBehavior_ScriptedDOF.generated.h"

UCLASS(EditInlineNew)
class UCameraBehavior_ScriptedDOF : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendOutTime;
    
protected:
    UPROPERTY(Transient)
    FPostProcessSettings BlendOutPPSettings;
    
    UPROPERTY(Transient)
    FPostProcessSettings AppliedPPSettings;
    
public:
    UCameraBehavior_ScriptedDOF();
};

