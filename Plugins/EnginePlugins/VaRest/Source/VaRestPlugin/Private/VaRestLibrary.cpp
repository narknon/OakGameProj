#include "VaRestLibrary.h"

class UObject;
class UVaRestJsonObject;

FString UVaRestLibrary::PercentEncode(const FString& Source) {
    return TEXT("");
}

void UVaRestLibrary::CallURL(UObject* WorldContextObject, const FString& URL, ERequestVerb Verb, ERequestContentType ContentType, UVaRestJsonObject* VaRestJson, const FVaRestCallDelegate& Callback) {
}

bool UVaRestLibrary::Base64EncodeData(const TArray<uint8>& Data, FString& Dest) {
    return false;
}

FString UVaRestLibrary::Base64Encode(const FString& Source) {
    return TEXT("");
}

bool UVaRestLibrary::Base64DecodeData(const FString& Source, TArray<uint8>& Dest) {
    return false;
}

bool UVaRestLibrary::Base64Decode(const FString& Source, FString& Dest) {
    return false;
}

UVaRestLibrary::UVaRestLibrary() {
}

