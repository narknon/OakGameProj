#include "UIStatData.h"

class UObject;
class UGbxAttributeData;

bool UUIStatData::K2_ShouldDisplayStat_Implementation(UObject* Context) const {
    return false;
}

FText UUIStatData::K2_GetValueText_Implementation(UObject* Context, const FUIStatCollector& Collector) const {
    return FText::GetEmpty();
}

float UUIStatData::K2_GetComparisonValue_Implementation(UObject* Context, const FUIStatCollector& Collector) const {
    return 0.0f;
}

void UUIStatData::EnumerateSectionNames(TArray<FName>& OutSectionNameList) const {
}

float UUIStatData::ComputeAttributeModification(UGbxAttributeData* Attribute, const bool bScale, const FUIStatCollector& Collector) const {
    return 0.0f;
}

UUIStatData::UUIStatData() {
    this->bCanDisplayMultipleTimes = false;
    this->bBiggerIsBetter = false;
    this->BasePriority = 0.00f;
}

