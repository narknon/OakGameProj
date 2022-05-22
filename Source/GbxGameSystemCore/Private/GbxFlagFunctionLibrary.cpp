#include "GbxFlagFunctionLibrary.h"

class UObject;
class UGbxFlagData;

void UGbxFlagFunctionLibrary::SetFlagValue(UObject* WorldContextObject, FGbxFlag& Flag, bool bNewValue) {
}

void UGbxFlagFunctionLibrary::SetFlagTrueTimed(UObject* WorldContextObject, FGbxFlag& Flag, float Duration) {
}

void UGbxFlagFunctionLibrary::SetFlagDataValue(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource, bool bNewValue) {
}

void UGbxFlagFunctionLibrary::SetFlagDataTrueTimed(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource, float Duration) {
}

bool UGbxFlagFunctionLibrary::GetFlagValue(UObject* WorldContextObject, const FGbxFlag& Flag) {
    return false;
}

bool UGbxFlagFunctionLibrary::GetFlagDataValue(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource) {
    return false;
}

bool UGbxFlagFunctionLibrary::FlagTrueWithin(UObject* WorldContextObject, const FGbxFlag& Flag, float CheckTime) {
    return false;
}

bool UGbxFlagFunctionLibrary::FlagTrueFor(UObject* WorldContextObject, const FGbxFlag& Flag, float CheckTime) {
    return false;
}

bool UGbxFlagFunctionLibrary::FlagFalseWithin(UObject* WorldContextObject, const FGbxFlag& Flag, float CheckTime) {
    return false;
}

bool UGbxFlagFunctionLibrary::FlagFalseFor(UObject* WorldContextObject, const FGbxFlag& Flag, float CheckTime) {
    return false;
}

bool UGbxFlagFunctionLibrary::FlagDataTrueWithin(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource, float CheckTime) {
    return false;
}

bool UGbxFlagFunctionLibrary::FlagDataTrueFor(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource, float CheckTime) {
    return false;
}

bool UGbxFlagFunctionLibrary::FlagDataFalseWithin(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource, float CheckTime) {
    return false;
}

bool UGbxFlagFunctionLibrary::FlagDataFalseFor(UObject* WorldContextObject, const UGbxFlagData* FlagData, UObject* ContextSource, float CheckTime) {
    return false;
}

UGbxFlagFunctionLibrary::UGbxFlagFunctionLibrary() {
}

