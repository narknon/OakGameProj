#include "NumericRangeExt.h"

FString UNumericRangeExt::ToValueVarianceString(const FNumericRange& Range) {
    return TEXT("");
}

FString UNumericRangeExt::ToValueString(const FNumericRange& Range) {
    return TEXT("");
}

FString UNumericRangeExt::ToString(const FNumericRange& Range) {
    return TEXT("");
}

FString UNumericRangeExt::ToMinMaxString(const FNumericRange& Range) {
    return TEXT("");
}

void UNumericRangeExt::SetMinimum(FNumericRange& Range, float Minimum) {
}

void UNumericRangeExt::SetMaximum(FNumericRange& Range, float Maximum) {
}

bool UNumericRangeExt::IsWithin(const FNumericRange& Range, float Value) {
    return false;
}

float UNumericRangeExt::GetMinimum(const FNumericRange& Range) {
    return 0.0f;
}

float UNumericRangeExt::GetMaximum(const FNumericRange& Range) {
    return 0.0f;
}

float UNumericRangeExt::GenerateRandomNumber(const FNumericRange& Range) {
    return 0.0f;
}

FNumericRange UNumericRangeExt::CreateNumericRangeMinMax(float Minimum, float Maximum) {
    return FNumericRange{};
}

FNumericRange UNumericRangeExt::CreateNumericRange(float Value, float Variance) {
    return FNumericRange{};
}

UNumericRangeExt::UNumericRangeExt() {
}

