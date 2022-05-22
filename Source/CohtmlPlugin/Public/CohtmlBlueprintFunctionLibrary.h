#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CohtmlBlueprintFunctionLibrary.generated.h"

class UCohtmlJSEvent;
class UCohtmlBaseComponent;
class UStructProperty;
class UObject;

UCLASS(BlueprintType)
class COHTMLPLUGIN_API UCohtmlBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCohtmlBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void TriggerJSEvent(UCohtmlBaseComponent* Component, const FString& EventName, UCohtmlJSEvent* JSEvent);
    
    UFUNCTION(BlueprintCallable)
    static UCohtmlJSEvent* CreateJSEvent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddStructArg(UCohtmlJSEvent* JSEvent, const UStructProperty* Arg);
    
    UFUNCTION(BlueprintCallable)
    static void AddString(UCohtmlJSEvent* JSEvent, const FString& Arg);
    
    UFUNCTION(BlueprintCallable)
    static void AddObject(UCohtmlJSEvent* JSEvent, UObject* Arg);
    
    UFUNCTION(BlueprintCallable)
    static void AddInt32(UCohtmlJSEvent* JSEvent, int32 Arg);
    
    UFUNCTION(BlueprintCallable)
    static void AddFloat(UCohtmlJSEvent* JSEvent, float Arg);
    
    UFUNCTION(BlueprintCallable)
    static void AddByte(UCohtmlJSEvent* JSEvent, uint8 Arg);
    
    UFUNCTION(BlueprintCallable)
    static void AddBool(UCohtmlJSEvent* JSEvent, bool Arg);
    
    UFUNCTION(BlueprintCallable)
    static void AddArrayOfStructs(UCohtmlJSEvent* JSEvent, const TArray<int32>& Arg);
    
    UFUNCTION(BlueprintCallable)
    static void AddArray(UCohtmlJSEvent* JSEvent, const TArray<int32>& Arg, int32 ArrayType);
    
};

