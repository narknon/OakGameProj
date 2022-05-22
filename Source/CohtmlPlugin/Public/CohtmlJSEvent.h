#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CohtmlJSEvent.generated.h"

class UStructProperty;
class UStruct;

UCLASS(BlueprintType, NotPlaceable)
class COHTMLPLUGIN_API UCohtmlJSEvent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UStruct*> StructTypes;
    
    UCohtmlJSEvent();
    UFUNCTION(BlueprintCallable)
    void AddText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void AddStructArg(const UStructProperty* Arg);
    
    UFUNCTION(BlueprintCallable)
    void AddString(const FString& str);
    
    UFUNCTION(BlueprintCallable)
    void AddObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void AddName(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    void AddInt32(int32 integer);
    
    UFUNCTION(BlueprintCallable)
    void AddFloat(float fl);
    
    UFUNCTION(BlueprintCallable)
    void AddByte(uint8 byte);
    
    UFUNCTION(BlueprintCallable)
    void AddBool(bool B);
    
    UFUNCTION(BlueprintCallable)
    void AddArray(const TArray<int32>& Array);
    
};

