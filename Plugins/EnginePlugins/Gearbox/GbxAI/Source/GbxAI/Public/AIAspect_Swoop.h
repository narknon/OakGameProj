#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Navigation.h"
#include "AIAspectSettings_Swoop.h"
#include "AIActionBlueprintDelegateDelegate.h"
#include "AIAspect_Swoop.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_Swoop : public UAIAspect_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Swoop SwoopSettings;
    
private:
    UPROPERTY(BlueprintAssignable, Transient)
    FAIActionBlueprintDelegate OnReachedFarBP;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FAIActionBlueprintDelegate OnReachedNearBP;
    
public:
    UAIAspect_Swoop();
};

