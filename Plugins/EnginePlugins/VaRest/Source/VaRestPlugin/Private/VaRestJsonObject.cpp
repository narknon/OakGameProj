#include "VaRestJsonObject.h"

class UVaRestJsonObject;
class UVaRestJsonValue;
class UObject;

void UVaRestJsonObject::SetStringField(const FString& FieldName, const FString& StringValue) {
}

void UVaRestJsonObject::SetStringArrayField(const FString& FieldName, const TArray<FString>& StringArray) {
}

void UVaRestJsonObject::SetObjectField(const FString& FieldName, UVaRestJsonObject* JsonObject) {
}

void UVaRestJsonObject::SetObjectArrayField(const FString& FieldName, const TArray<UVaRestJsonObject*>& ObjectArray) {
}

void UVaRestJsonObject::SetNumberField(const FString& FieldName, float Number) {
}

void UVaRestJsonObject::SetNumberArrayField(const FString& FieldName, const TArray<float>& NumberArray) {
}

void UVaRestJsonObject::SetField(const FString& FieldName, UVaRestJsonValue* JsonValue) {
}

void UVaRestJsonObject::SetBoolField(const FString& FieldName, bool InValue) {
}

void UVaRestJsonObject::SetBoolArrayField(const FString& FieldName, const TArray<bool>& BoolArray) {
}

void UVaRestJsonObject::SetArrayField(const FString& FieldName, const TArray<UVaRestJsonValue*>& inArray) {
}

void UVaRestJsonObject::Reset() {
}

void UVaRestJsonObject::RemoveField(const FString& FieldName) {
}

void UVaRestJsonObject::MergeJsonObject(UVaRestJsonObject* InJsonObject, bool Overwrite) {
}

bool UVaRestJsonObject::HasField(const FString& FieldName) const {
    return false;
}

FString UVaRestJsonObject::GetStringField(const FString& FieldName) const {
    return TEXT("");
}

TArray<FString> UVaRestJsonObject::GetStringArrayField(const FString& FieldName) const {
    return TArray<FString>();
}

UVaRestJsonObject* UVaRestJsonObject::GetObjectField(const FString& FieldName) const {
    return NULL;
}

TArray<UVaRestJsonObject*> UVaRestJsonObject::GetObjectArrayField(const FString& FieldName) const {
    return TArray<UVaRestJsonObject*>();
}

float UVaRestJsonObject::GetNumberField(const FString& FieldName) const {
    return 0.0f;
}

TArray<float> UVaRestJsonObject::GetNumberArrayField(const FString& FieldName) const {
    return TArray<float>();
}

TArray<FString> UVaRestJsonObject::GetFieldNames() {
    return TArray<FString>();
}

UVaRestJsonValue* UVaRestJsonObject::GetField(const FString& FieldName) const {
    return NULL;
}

bool UVaRestJsonObject::GetBoolField(const FString& FieldName) const {
    return false;
}

TArray<bool> UVaRestJsonObject::GetBoolArrayField(const FString& FieldName) const {
    return TArray<bool>();
}

TArray<UVaRestJsonValue*> UVaRestJsonObject::GetArrayField(const FString& FieldName) const {
    return TArray<UVaRestJsonValue*>();
}

FString UVaRestJsonObject::EncodeJsonToSingleString() const {
    return TEXT("");
}

FString UVaRestJsonObject::EncodeJson() const {
    return TEXT("");
}

bool UVaRestJsonObject::DecodeJson(const FString& JsonString) {
    return false;
}

UVaRestJsonObject* UVaRestJsonObject::ConstructJsonObject(UObject* WorldContextObject) {
    return NULL;
}

UVaRestJsonObject::UVaRestJsonObject() {
}

