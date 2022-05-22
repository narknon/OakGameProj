#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EVaJson.h"
#include "VaRestJsonValue.generated.h"

class UVaRestJsonValue;
class UVaRestJsonObject;

UCLASS(BlueprintType)
class VARESTPLUGIN_API UVaRestJsonValue : public UObject {
    GENERATED_BODY()
public:
    UVaRestJsonValue();
    UFUNCTION(BlueprintPure)
    bool IsNull() const;
    
    UFUNCTION(BlueprintPure)
    FString GetTypeString() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EVaJson::Type> GetType() const;
    
    UFUNCTION(BlueprintPure)
    static UVaRestJsonValue* ConstructJsonValueString(UObject* WorldContextObject, const FString& StringValue);
    
    UFUNCTION(BlueprintPure)
    static UVaRestJsonValue* ConstructJsonValueObject(UObject* WorldContextObject, UVaRestJsonObject* JsonObject);
    
    UFUNCTION(BlueprintPure)
    static UVaRestJsonValue* ConstructJsonValueNumber(UObject* WorldContextObject, float Number);
    
    UFUNCTION(BlueprintPure)
    static UVaRestJsonValue* ConstructJsonValueBool(UObject* WorldContextObject, bool InValue);
    
    UFUNCTION(BlueprintPure)
    static UVaRestJsonValue* ConstructJsonValueArray(UObject* WorldContextObject, const TArray<UVaRestJsonValue*>& inArray);
    
    UFUNCTION(BlueprintPure)
    FString AsString() const;
    
    UFUNCTION(BlueprintCallable)
    UVaRestJsonObject* AsObject();
    
    UFUNCTION(BlueprintPure)
    float AsNumber() const;
    
    UFUNCTION(BlueprintPure)
    bool AsBool() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UVaRestJsonValue*> AsArray() const;
    
};

