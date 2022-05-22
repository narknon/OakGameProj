#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "SmartObjectBlueprintLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class USmartObjectBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USmartObjectBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static bool UseSmartObject(AActor* User, AActor* SmartObject, FGameplayTag ActionTag, bool bAbortExisting, bool bUntilInterrupted);
    
    UFUNCTION(BlueprintCallable)
    static void AbortSmartObjectUse(AActor* User);
    
};

