#pragma once
#include "CoreMinimal.h"
#include "MayhemDebugOverrides.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPOIActivationResult.h"
#include "MayhemModeFunctionLibrary.generated.h"

class UObject;
class AOakPlayerController;

UCLASS(BlueprintType)
class UMayhemModeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMayhemModeFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static EPOIActivationResult TryMapReloadForMayhemActivityOrLevelChange(const UObject* WorldContextObject, AOakPlayerController* OptionalInstigator, int32 MayhemLevel, int32 RandomSeed);
    
    UFUNCTION(BlueprintCallable)
    static void RerollNonCurrent(const UObject* WorldContextObject);
    
    UFUNCTION()
    static void MutateRandomSeed(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMayhemModeAvailable(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsMayhemModeActive(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetRandomSeed(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMayhemLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMaxMayhemLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetConditionallyOverriddenMayhemLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivateMayhemMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AssignOptionalOverrides(const UObject* WorldContextObject, const FMayhemDebugOverrides& OptionalOverrides);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateMayhemMode(const UObject* WorldContextObject, int32 MayhemLevel, int32 RandomSeed);
    
};

