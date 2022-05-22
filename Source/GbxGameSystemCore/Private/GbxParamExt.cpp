#include "GbxParamExt.h"

class UProperty;
class UObject;

bool UGbxParamExt::IsValueInRangePure(const FGbxParam& Param, float Value, UObject* Context) {
    return false;
}

bool UGbxParamExt::IsValueInRange(const FGbxParam& Param, float Value, UObject* Context) {
    return false;
}

FString UGbxParamExt::GetParamPropertyDescription(const FGbxParam& Param, UProperty* Property) {
    return TEXT("");
}

FText UGbxParamExt::GetParamDescriptionText(const FGbxParam& Param) {
    return FText::GetEmpty();
}

FString UGbxParamExt::GetParamDescription(const FGbxParam& Param) {
    return TEXT("");
}

FText UGbxParamExt::GetNamedParamDescriptionText(const FGbxNamedParam& Param) {
    return FText::GetEmpty();
}

FString UGbxParamExt::GetNamedParamDescription(const FGbxNamedParam& Param) {
    return TEXT("");
}

float UGbxParamExt::EvaluatePure(const FGbxParam& Param, UObject* Context) {
    return 0.0f;
}

float UGbxParamExt::EvaluateIntPure(const FGbxParam& Param, UObject* Context) {
    return 0.0f;
}

float UGbxParamExt::EvaluateInt(const FGbxParam& Param, UObject* Context) {
    return 0.0f;
}

bool UGbxParamExt::EvaluateBoolPure(const FGbxParam& Param, UObject* Context) {
    return false;
}

bool UGbxParamExt::EvaluateBool(const FGbxParam& Param, UObject* Context) {
    return false;
}

float UGbxParamExt::Evaluate(const FGbxParam& Param, UObject* Context) {
    return 0.0f;
}

UGbxParamExt::UGbxParamExt() {
}

