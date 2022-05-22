#pragma once
#include "CoreMinimal.h"
#include "ERequestVerb.h"
#include "ERequestStatus.h"
#include "ERequestContentType.h"
#include "UObject/Object.h"
#include "OnRequestCompleteDelegate.h"
#include "OnRequestFailDelegate.h"
#include "Engine/LatentActionManager.h"
#include "VaRestRequestJSON.generated.h"

class UVaRestJsonObject;
class UVaRestRequestJSON;

UCLASS(BlueprintType)
class VARESTPLUGIN_API UVaRestRequestJSON : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnRequestComplete OnRequestComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnRequestFail OnRequestFail;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString ResponseContent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsValidJsonResponse;
    
protected:
    UPROPERTY()
    UVaRestJsonObject* RequestJsonObj;
    
    UPROPERTY()
    UVaRestJsonObject* ResponseJsonObj;
    
public:
    UVaRestRequestJSON();
    UFUNCTION(BlueprintCallable)
    void SetVerb(ERequestVerb Verb);
    
    UFUNCTION(BlueprintCallable)
    void SetStringRequestContent(const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    void SetResponseObject(UVaRestJsonObject* JsonObject);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestObject(UVaRestJsonObject* JsonObject);
    
    UFUNCTION(BlueprintCallable)
    void SetHeader(const FString& HeaderName, const FString& HeaderValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomVerb(const FString& Verb);
    
    UFUNCTION(BlueprintCallable)
    void SetContentType(ERequestContentType ContentType);
    
    UFUNCTION(BlueprintCallable)
    void SetBinaryRequestContent(const TArray<uint8>& Content);
    
    UFUNCTION(BlueprintCallable)
    void SetBinaryContentType(const FString& ContentType);
    
    UFUNCTION(BlueprintCallable)
    void ResetResponseData();
    
    UFUNCTION(BlueprintCallable)
    void ResetRequestData();
    
    UFUNCTION(BlueprintCallable)
    void ResetData();
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveTag(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void ProcessURL(const FString& URL);
    
    UFUNCTION(BlueprintPure)
    bool HasTag(FName Tag) const;
    
    UFUNCTION(BlueprintCallable)
    FString GetUrl();
    
    UFUNCTION(BlueprintCallable)
    ERequestStatus GetStatus();
    
    UFUNCTION(BlueprintCallable)
    UVaRestJsonObject* GetResponseObject();
    
    UFUNCTION(BlueprintCallable)
    FString GetResponseHeader(const FString& HeaderName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetResponseCode();
    
    UFUNCTION(BlueprintCallable)
    UVaRestJsonObject* GetRequestObject();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetAllResponseHeaders();
    
    UFUNCTION(BlueprintPure)
    static UVaRestRequestJSON* ConstructRequestExt(UObject* WorldContextObject, ERequestVerb Verb, ERequestContentType ContentType);
    
    UFUNCTION(BlueprintPure)
    static UVaRestRequestJSON* ConstructRequest(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
    UFUNCTION(BlueprintCallable)
    void ApplyURL(const FString& URL, UVaRestJsonObject*& Result, UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddTag(FName Tag);
    
};

