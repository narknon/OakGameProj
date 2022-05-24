#include "VaRestRequestJSON.h"

class UVaRestRequestJSON;
class UVaRestJsonObject;
class UObject;

void UVaRestRequestJSON::SetVerb(ERequestVerb Verb) {
}

void UVaRestRequestJSON::SetStringRequestContent(const FString& Content) {
}

void UVaRestRequestJSON::SetResponseObject(UVaRestJsonObject* JsonObject) {
}

void UVaRestRequestJSON::SetRequestObject(UVaRestJsonObject* JsonObject) {
}

void UVaRestRequestJSON::SetHeader(const FString& HeaderName, const FString& HeaderValue) {
}

void UVaRestRequestJSON::SetCustomVerb(const FString& Verb) {
}

void UVaRestRequestJSON::SetContentType(ERequestContentType ContentType) {
}

void UVaRestRequestJSON::SetBinaryRequestContent(const TArray<uint8>& Content) {
}

void UVaRestRequestJSON::SetBinaryContentType(const FString& ContentType) {
}

void UVaRestRequestJSON::ResetResponseData() {
}

void UVaRestRequestJSON::ResetRequestData() {
}

void UVaRestRequestJSON::ResetData() {
}

int32 UVaRestRequestJSON::RemoveTag(FName Tag) {
    return 0;
}

void UVaRestRequestJSON::ProcessURL(const FString& URL) {
}

bool UVaRestRequestJSON::HasTag(FName Tag) const {
    return false;
}

FString UVaRestRequestJSON::GetUrl() {
    return TEXT("");
}

ERequestStatus UVaRestRequestJSON::GetStatus() {
    return ERequestStatus::NotStarted;
}

UVaRestJsonObject* UVaRestRequestJSON::GetResponseObject() {
    return NULL;
}

FString UVaRestRequestJSON::GetResponseHeader(const FString& HeaderName) {
    return TEXT("");
}

int32 UVaRestRequestJSON::GetResponseCode() {
    return 0;
}

UVaRestJsonObject* UVaRestRequestJSON::GetRequestObject() {
    return NULL;
}

TArray<FString> UVaRestRequestJSON::GetAllResponseHeaders() {
    return TArray<FString>();
}

UVaRestRequestJSON* UVaRestRequestJSON::ConstructRequestExt(UObject* WorldContextObject, ERequestVerb Verb, ERequestContentType ContentType) {
    return NULL;
}

UVaRestRequestJSON* UVaRestRequestJSON::ConstructRequest(UObject* WorldContextObject) {
    return NULL;
}

void UVaRestRequestJSON::Cancel() {
}

void UVaRestRequestJSON::ApplyURL(const FString& URL, UVaRestJsonObject*& Result, UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UVaRestRequestJSON::AddTag(FName Tag) {
}

UVaRestRequestJSON::UVaRestRequestJSON() {
    this->bIsValidJsonResponse = false;
}

