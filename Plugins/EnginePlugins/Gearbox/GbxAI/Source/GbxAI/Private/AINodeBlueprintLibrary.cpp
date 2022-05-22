#include "AINodeBlueprintLibrary.h"

class UObject;
class AActor;

AActor* UAINodeBlueprintLibrary::FindNearestNode(UObject* WorldContextObject, const FVector& Location, bool bIncludeDisabled) {
    return NULL;
}

void UAINodeBlueprintLibrary::FindAllNodes(TArray<AActor*>& OutputNodes, UObject* WorldContextObject, bool bIncludeDisabled) {
}

AActor* UAINodeBlueprintLibrary::ChooseRandomNode(UObject* WorldContextObject, bool bIncludeDisabled) {
    return NULL;
}

UAINodeBlueprintLibrary::UAINodeBlueprintLibrary() {
}

