#include "GbxGameStatsBlueprintLibrary.h"

class UObject;
class UGameStatData;
class AActor;

void UGbxGameStatsBlueprintLibrary::UpdateStatForParty(UObject* WorldContextObject, UGameStatData* StatData, int32 NewValue) {
}

void UGbxGameStatsBlueprintLibrary::UpdateStat(AActor* ContextActor, UGameStatData* StatData, int32 NewValue) {
}

void UGbxGameStatsBlueprintLibrary::IncrementStatForParty(UObject* WorldContextObject, UGameStatData* StatData, int32 Amount) {
}

void UGbxGameStatsBlueprintLibrary::IncrementStat(AActor* ContextActor, UGameStatData* StatData, int32 Amount) {
}

int32 UGbxGameStatsBlueprintLibrary::GetStatValue(AActor* ContextActor, UGameStatData* StatData) {
    return 0;
}

void UGbxGameStatsBlueprintLibrary::DecrementStatForParty(UObject* WorldContextObject, UGameStatData* StatData, int32 Amount) {
}

void UGbxGameStatsBlueprintLibrary::DecrementStat(AActor* ContextActor, UGameStatData* StatData, int32 Amount) {
}

UGbxGameStatsBlueprintLibrary::UGbxGameStatsBlueprintLibrary() {
}

