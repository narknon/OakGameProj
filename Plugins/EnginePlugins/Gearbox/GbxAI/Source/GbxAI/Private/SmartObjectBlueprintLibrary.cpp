#include "SmartObjectBlueprintLibrary.h"

class AActor;

bool USmartObjectBlueprintLibrary::UseSmartObject(AActor* User, AActor* SmartObject, FGameplayTag ActionTag, bool bAbortExisting, bool bUntilInterrupted) {
    return false;
}

void USmartObjectBlueprintLibrary::AbortSmartObjectUse(AActor* User) {
}

USmartObjectBlueprintLibrary::USmartObjectBlueprintLibrary() {
}

