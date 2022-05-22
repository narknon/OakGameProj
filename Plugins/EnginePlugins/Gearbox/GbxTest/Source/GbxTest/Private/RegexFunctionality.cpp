#include "RegexFunctionality.h"

class UMatcherFunctionality;

bool URegexFunctionality::RegexSearch(const FRegex& NewRegex, UMatcherFunctionality* Matcher, const FString& Input) {
    return false;
}

FString URegexFunctionality::RegexRepleace(const FRegex& NewRegex, const FString& Input, const FString& Repleacement) {
    return TEXT("");
}

bool URegexFunctionality::RegexMatch2(const FRegex& NewRegex, UMatcherFunctionality* Matcher, const FString& Input) {
    return false;
}

bool URegexFunctionality::RegexMatch(const FRegex& NewRegex, const FString& Input) {
    return false;
}

void URegexFunctionality::FindAll(FRegex NewRegex, const FString& String, TArray<FString>& Return) {
}

void URegexFunctionality::Assign2(const FRegex& NewRegex, const FString& Pattern, ESyntaxOption Flags) {
}

void URegexFunctionality::Assign(const FRegex& NewRegex, const FString& Pattern) {
}

URegexFunctionality::URegexFunctionality() {
}

