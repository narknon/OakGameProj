#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CinematicModeBlueprintLibrary.generated.h"

class UObject;
class UCinematicModeData;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UCinematicModeBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCinematicModeBlueprintLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void PushCinematicMode(UObject* WorldContextObject, UCinematicModeData* InCinematicMode);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void PopCinematicMode(UObject* WorldContextObject, UCinematicModeData* InCinematicMode);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ClearCinematicMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ClearAndSetCinematicMode(UObject* WorldContextObject, UCinematicModeData* InCinematicMode);
    
};

