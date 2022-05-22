#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UseSystemFunctionLibrary.generated.h"

class AActor;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UUseSystemFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUseSystemFunctionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetIsUsable(AActor* Actor, bool bNewIsUsable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ResetUseCount(AActor* Actor);
    
};

