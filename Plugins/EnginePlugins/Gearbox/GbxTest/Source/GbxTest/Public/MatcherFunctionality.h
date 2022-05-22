#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MatcherFunctionality.generated.h"

UCLASS(BlueprintType)
class GBXTEST_API UMatcherFunctionality : public UObject {
    GENERATED_BODY()
public:
    UMatcherFunctionality();
    UFUNCTION(BlueprintCallable)
    int32 Size();
    
    UFUNCTION(BlueprintCallable)
    bool Ready();
    
    UFUNCTION(BlueprintCallable)
    FString GetSuffix();
    
    UFUNCTION(BlueprintCallable)
    FString GetPrefix();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPosition(int32 Start);
    
    UFUNCTION(BlueprintCallable)
    FString GetMatch(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLength();
    
    UFUNCTION(BlueprintCallable)
    FString GetAtIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool Empty();
    
};

