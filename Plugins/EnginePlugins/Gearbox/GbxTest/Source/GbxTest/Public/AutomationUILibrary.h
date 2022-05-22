#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AutomationUILibrary.generated.h"

UCLASS(BlueprintType)
class UAutomationUILibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAutomationUILibrary();
    UFUNCTION(BlueprintCallable)
    static void ForceDisableTutorials(const bool ForceDisable);
    
};

