#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ETimeOfDayState.h"
#include "TimeOfDayBlueprintLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class GBXTIMEOFDAY_API UTimeOfDayBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTimeOfDayBlueprintLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void TransitionUpOneLayer(UObject* WorldContextObject, float TransitionDuration);
    
    UFUNCTION(BlueprintCallable)
    static void TransitionToLayer(UObject* WorldContextObject, const FString& ToLayer, float TransitionDuration);
    
    UFUNCTION(BlueprintCallable)
    static void TransitionDownOneLayer(UObject* WorldContextObject, float TransitionDuration);
    
    UFUNCTION(BlueprintCallable)
    static void StartTimeOfDay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimeOfDay(UObject* WorldContextObject, float NewTimeOfDay);
    
    UFUNCTION(BlueprintCallable)
    static void PauseTimeOfDay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static ETimeOfDayState GetTimeOfDayState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetTimeOfDay(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddTimeOfDayListener(UObject* WorldContextObject, UObject* InListener);
    
};

