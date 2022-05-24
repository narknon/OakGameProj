#include "VaRestJsonValue.h"

class UObject;
class UVaRestJsonValue;
class UVaRestJsonObject;

bool UVaRestJsonValue::IsNull() const {
    return false;
}

FString UVaRestJsonValue::GetTypeString() const {
    return TEXT("");
}

TEnumAsByte<EVaJson::Type> UVaRestJsonValue::GetType() const {
    return EVaJson::None;
}

UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueString(UObject* WorldContextObject, const FString& StringValue) {
    return NULL;
}

UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueObject(UObject* WorldContextObject, UVaRestJsonObject* JsonObject) {
    return NULL;
}

UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueNumber(UObject* WorldContextObject, float Number) {
    return NULL;
}

UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueBool(UObject* WorldContextObject, bool InValue) {
    return NULL;
}

UVaRestJsonValue* UVaRestJsonValue::ConstructJsonValueArray(UObject* WorldContextObject, const TArray<UVaRestJsonValue*>& inArray) {
    return NULL;
}

FString UVaRestJsonValue::AsString() const {
    return TEXT("");
}

UVaRestJsonObject* UVaRestJsonValue::AsObject() {
    return NULL;
}

float UVaRestJsonValue::AsNumber() const {
    return 0.0f;
}

bool UVaRestJsonValue::AsBool() const {
    return false;
}

TArray<UVaRestJsonValue*> UVaRestJsonValue::AsArray() const {
    return TArray<UVaRestJsonValue*>();
}

UVaRestJsonValue::UVaRestJsonValue() {
}

