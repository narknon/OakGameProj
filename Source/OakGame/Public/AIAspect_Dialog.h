#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Dialog.h"
#include "AIAspectSettings_DialogCondition.h"
#include "AIAspect_Dialog.generated.h"

class UProperty;

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API UAIAspect_Dialog : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Dialog Settings;
    
    UAIAspect_Dialog();
    UFUNCTION()
    static FString GetDialogSettingsDescription(const FAIAspectSettings_Dialog& DialogSettings, UProperty* Property);
    
    UFUNCTION()
    static FString GetDialogConditionSettingsDescription(const FAIAspectSettings_DialogCondition& DialogSettings, UProperty* Property);
    
};

