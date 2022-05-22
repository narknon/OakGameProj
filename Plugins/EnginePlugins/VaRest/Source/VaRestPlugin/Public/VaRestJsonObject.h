#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VaRestJsonObject.generated.h"

class UVaRestJsonObject;
class UVaRestJsonValue;

UCLASS(BlueprintType)
class VARESTPLUGIN_API UVaRestJsonObject : public UObject {
    GENERATED_BODY()
public:
    UVaRestJsonObject();
    UFUNCTION(BlueprintCallable)
    void SetStringField(const FString& FieldName, const FString& StringValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStringArrayField(const FString& FieldName, const TArray<FString>& StringArray);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectField(const FString& FieldName, UVaRestJsonObject* JsonObject);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectArrayField(const FString& FieldName, const TArray<UVaRestJsonObject*>& ObjectArray);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberField(const FString& FieldName, float Number);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberArrayField(const FString& FieldName, const TArray<float>& NumberArray);
    
    UFUNCTION(BlueprintCallable)
    void SetField(const FString& FieldName, UVaRestJsonValue* JsonValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolField(const FString& FieldName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolArrayField(const FString& FieldName, const TArray<bool>& BoolArray);
    
    UFUNCTION(BlueprintCallable)
    void SetArrayField(const FString& FieldName, const TArray<UVaRestJsonValue*>& inArray);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RemoveField(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable)
    void MergeJsonObject(UVaRestJsonObject* InJsonObject, bool Overwrite);
    
    UFUNCTION(BlueprintPure)
    bool HasField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintPure)
    FString GetStringField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetStringArrayField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintPure)
    UVaRestJsonObject* GetObjectField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UVaRestJsonObject*> GetObjectArrayField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintPure)
    float GetNumberField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<float> GetNumberArrayField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetFieldNames();
    
    UFUNCTION(BlueprintPure)
    UVaRestJsonValue* GetField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintPure)
    bool GetBoolField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<bool> GetBoolArrayField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UVaRestJsonValue*> GetArrayField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintPure)
    FString EncodeJsonToSingleString() const;
    
    UFUNCTION(BlueprintPure)
    FString EncodeJson() const;
    
    UFUNCTION(BlueprintCallable)
    bool DecodeJson(const FString& JsonString);
    
    UFUNCTION(BlueprintPure)
    static UVaRestJsonObject* ConstructJsonObject(UObject* WorldContextObject);
    
};

