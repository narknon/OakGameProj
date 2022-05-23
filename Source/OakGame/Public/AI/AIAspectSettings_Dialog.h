#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_DialogCondition.h"
#include "GbxNamedParam.h"
#include "GbxParam.h"
#include "AIAspectSettings_Dialog.generated.h"

class UDialogEvent;
class UDialogParameter;

USTRUCT(BlueprintType)
struct OAKGAME_API FAIAspectSettings_Dialog {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FAIAspectSettings_DialogCondition> ConditionalDialogEvents;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* DialogEvent;
    
    UPROPERTY(EditAnywhere, EditFixedSize, NoClear)
    TArray<FGbxNamedParam> DialogParams;
    
    UPROPERTY()
    TArray<UDialogParameter*> DialogParamAssets;
    
    UPROPERTY(EditAnywhere)
    FGbxParam DialogStartDelay;
    
    UPROPERTY(EditAnywhere)
    FGbxParam DialogCooldownTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseDialogCooldownTime;
    
    UPROPERTY(EditAnywhere)
    bool bPlayOnStop;
    
    FAIAspectSettings_Dialog();
};

