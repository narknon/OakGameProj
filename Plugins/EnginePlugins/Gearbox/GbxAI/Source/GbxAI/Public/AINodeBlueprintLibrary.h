#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "AINodeBlueprintLibrary.generated.h"

class AActor;
class UObject;

UCLASS(BlueprintType)
class GBXAI_API UAINodeBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAINodeBlueprintLibrary();
    UFUNCTION(BlueprintPure)
    static AActor* FindNearestNode(UObject* WorldContextObject, const FVector& Location, bool bIncludeDisabled);
    
    UFUNCTION(BlueprintPure)
    static void FindAllNodes(TArray<AActor*>& OutputNodes, UObject* WorldContextObject, bool bIncludeDisabled);
    
    UFUNCTION(BlueprintPure)
    static AActor* ChooseRandomNode(UObject* WorldContextObject, bool bIncludeDisabled);
    
};

