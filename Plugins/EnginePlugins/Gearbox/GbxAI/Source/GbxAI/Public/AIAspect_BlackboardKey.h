#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_BlackboardKey.h"
#include "AIAspect_BlackboardKey.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_BlackboardKey : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_BlackboardKey Settings;
    
    UAIAspect_BlackboardKey();
    UFUNCTION()
    static FString GetSettingsDescription(const FAIAspectSettings_BlackboardKey& BBKeySettings);
    
};

