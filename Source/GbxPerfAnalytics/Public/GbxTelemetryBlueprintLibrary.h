#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "K2TelemetryValues.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESetTelemetryValue.h"
#include "K2EventRef.h"
#include "UObject/NoExportTypes.h"
#include "GbxTelemetryBlueprintLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class UGbxTelemetryBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxTelemetryBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static FK2TelemetryValues SetNamedTelemetryVector(UPARAM(Ref) FK2TelemetryValues& StatArray, const FString& Key, const FVector& Value, ESetTelemetryValue Opt);
    
    UFUNCTION(BlueprintCallable)
    static FK2TelemetryValues SetNamedTelemetryString(UPARAM(Ref) FK2TelemetryValues& StatArray, const FString& Key, const FString& Value, ESetTelemetryValue Opt);
    
    UFUNCTION(BlueprintCallable)
    static FK2TelemetryValues SetNamedTelemetryRotator(UPARAM(Ref) FK2TelemetryValues& StatArray, const FString& Key, const FRotator& Value, ESetTelemetryValue Opt);
    
    UFUNCTION(BlueprintCallable)
    static FK2TelemetryValues SetNamedTelemetryInt(UPARAM(Ref) FK2TelemetryValues& StatArray, const FString& Key, const int32 Value, ESetTelemetryValue Opt);
    
    UFUNCTION(BlueprintCallable)
    static FK2TelemetryValues SetNamedTelemetryFloat(UPARAM(Ref) FK2TelemetryValues& StatArray, const FString& Key, const float Value, ESetTelemetryValue Opt);
    
    UFUNCTION(BlueprintCallable)
    static FK2TelemetryValues SetNamedTelemetryByte(UPARAM(Ref) FK2TelemetryValues& StatArray, const FString& Key, const uint8 Value, ESetTelemetryValue Opt);
    
    UFUNCTION(BlueprintCallable)
    static FK2TelemetryValues SetNamedTelemetryBool(UPARAM(Ref) FK2TelemetryValues& StatArray, const FString& Key, const bool Value, ESetTelemetryValue Opt);
    
    UFUNCTION(BlueprintPure)
    static FK2EventRef MakeTelemetryEventRef(const FString& EventName);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid(const FK2EventRef& EventRef);
    
    UFUNCTION(BlueprintCallable)
    static bool EmitTelemetryValues(const FString& EventContext, const FK2TelemetryValues& Values, UObject* WorldContextObject, FGuid Guid, bool bRunOnClient);
    
    UFUNCTION(BlueprintCallable)
    static bool EmitTelemetryEvent(FK2EventRef Event, const FString& EventContext, UObject* EventContextObject, UObject* EventInstigatorObject, UObject* WorldContextObject, FGuid Guid, bool bRunOnClient);
    
    UFUNCTION(BlueprintPure)
    static FK2EventRef DefineTelemetryEventRef(const FString& EventName, const FString& TableDesc);
    
};

