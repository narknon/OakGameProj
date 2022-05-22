#include "GbxTelemetryBlueprintLibrary.h"

class UObject;

FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryVector(FK2TelemetryValues& StatArray, const FString& Key, const FVector& Value, ESetTelemetryValue Opt) {
    return FK2TelemetryValues{};
}

FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryString(FK2TelemetryValues& StatArray, const FString& Key, const FString& Value, ESetTelemetryValue Opt) {
    return FK2TelemetryValues{};
}

FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryRotator(FK2TelemetryValues& StatArray, const FString& Key, const FRotator& Value, ESetTelemetryValue Opt) {
    return FK2TelemetryValues{};
}

FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryInt(FK2TelemetryValues& StatArray, const FString& Key, const int32 Value, ESetTelemetryValue Opt) {
    return FK2TelemetryValues{};
}

FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryFloat(FK2TelemetryValues& StatArray, const FString& Key, const float Value, ESetTelemetryValue Opt) {
    return FK2TelemetryValues{};
}

FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryByte(FK2TelemetryValues& StatArray, const FString& Key, const uint8 Value, ESetTelemetryValue Opt) {
    return FK2TelemetryValues{};
}

FK2TelemetryValues UGbxTelemetryBlueprintLibrary::SetNamedTelemetryBool(FK2TelemetryValues& StatArray, const FString& Key, const bool Value, ESetTelemetryValue Opt) {
    return FK2TelemetryValues{};
}

FK2EventRef UGbxTelemetryBlueprintLibrary::MakeTelemetryEventRef(const FString& EventName) {
    return FK2EventRef{};
}

bool UGbxTelemetryBlueprintLibrary::IsValid(const FK2EventRef& EventRef) {
    return false;
}

bool UGbxTelemetryBlueprintLibrary::EmitTelemetryValues(const FString& EventContext, const FK2TelemetryValues& Values, UObject* WorldContextObject, FGuid Guid, bool bRunOnClient) {
    return false;
}

bool UGbxTelemetryBlueprintLibrary::EmitTelemetryEvent(FK2EventRef Event, const FString& EventContext, UObject* EventContextObject, UObject* EventInstigatorObject, UObject* WorldContextObject, FGuid Guid, bool bRunOnClient) {
    return false;
}

FK2EventRef UGbxTelemetryBlueprintLibrary::DefineTelemetryEventRef(const FString& EventName, const FString& TableDesc) {
    return FK2EventRef{};
}

UGbxTelemetryBlueprintLibrary::UGbxTelemetryBlueprintLibrary() {
}

