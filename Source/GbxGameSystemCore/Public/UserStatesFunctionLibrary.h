#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UserStatesFunctionLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UUserStatesFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUserStatesFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool HasEnableConditionsSetForSpecificUserState(UObject* Context, FName UserStateProperty);
    
};

