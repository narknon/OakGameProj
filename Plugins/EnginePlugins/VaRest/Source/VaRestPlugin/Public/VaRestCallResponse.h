#pragma once
#include "CoreMinimal.h"
#include "VaRestCallDelegateDelegate.h"
#include "VaRestCallResponse.generated.h"

class UVaRestRequestJSON;
class UObject;

USTRUCT()
struct FVaRestCallResponse {
    GENERATED_BODY()
public:
    UPROPERTY()
    UVaRestRequestJSON* Request;
    
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY()
    FVaRestCallDelegate Callback;
    
    VARESTPLUGIN_API FVaRestCallResponse();
};

