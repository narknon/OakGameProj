#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Regex.h"
#include "ESyntaxOption.h"
#include "RegexFunctionality.generated.h"

class UMatcherFunctionality;

UCLASS(BlueprintType)
class GBXTEST_API URegexFunctionality : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRegex Regex;
    
    URegexFunctionality();
    UFUNCTION(BlueprintCallable)
    static bool RegexSearch(const FRegex& NewRegex, UMatcherFunctionality* Matcher, const FString& Input);
    
    UFUNCTION(BlueprintCallable)
    static FString RegexRepleace(const FRegex& NewRegex, const FString& Input, const FString& Repleacement);
    
    UFUNCTION(BlueprintCallable)
    static bool RegexMatch2(const FRegex& NewRegex, UMatcherFunctionality* Matcher, const FString& Input);
    
    UFUNCTION(BlueprintCallable)
    static bool RegexMatch(const FRegex& NewRegex, const FString& Input);
    
    UFUNCTION(BlueprintCallable)
    static void FindAll(FRegex NewRegex, const FString& String, TArray<FString>& Return);
    
    UFUNCTION(BlueprintCallable)
    static void Assign2(const FRegex& NewRegex, const FString& Pattern, ESyntaxOption Flags);
    
    UFUNCTION(BlueprintCallable)
    static void Assign(const FRegex& NewRegex, const FString& Pattern);
    
};

