#pragma once
#include "CoreMinimal.h"
#include "VaRestCallDelegateDelegate.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERequestContentType.h"
#include "ERequestVerb.h"
#include "VaRestLibrary.generated.h"

class UObject;
class UVaRestJsonObject;

UCLASS(BlueprintType)
class UVaRestLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVaRestLibrary();
    UFUNCTION(BlueprintCallable)
    static FString PercentEncode(const FString& Source);
    
    UFUNCTION(BlueprintCallable)
    static void CallURL(UObject* WorldContextObject, const FString& URL, ERequestVerb Verb, ERequestContentType ContentType, UVaRestJsonObject* VaRestJson, const FVaRestCallDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool Base64EncodeData(const TArray<uint8>& Data, FString& Dest);
    
    UFUNCTION(BlueprintCallable)
    static FString Base64Encode(const FString& Source);
    
    UFUNCTION(BlueprintCallable)
    static bool Base64DecodeData(const FString& Source, TArray<uint8>& Dest);
    
    UFUNCTION(BlueprintCallable)
    static bool Base64Decode(const FString& Source, FString& Dest);
    
};

