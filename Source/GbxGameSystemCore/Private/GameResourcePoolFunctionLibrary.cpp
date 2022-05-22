#include "GameResourcePoolFunctionLibrary.h"

class AActor;
class UGameResourceData;
class UGameResourcePoolData;

void UGameResourcePoolFunctionLibrary::SetResourcePoolValue(FGameResourcePoolReference InPool, float InValue) {
}

void UGameResourcePoolFunctionLibrary::ResetResourcePoolRegenDelayByGameResourceData(AActor* Actor, UGameResourceData* Resource) {
}

void UGameResourcePoolFunctionLibrary::ResetResourcePoolRegenDelay(FGameResourcePoolReference InPool) {
}

void UGameResourcePoolFunctionLibrary::RefillResourcePoolByPercentage(FGameResourcePoolReference InPool, float Percentage, float MaxPercentage) {
}

bool UGameResourcePoolFunctionLibrary::IsResourcePoolInState(FGameResourcePoolReference InPool, EGameResourcePoolState InState) {
    return false;
}

FName UGameResourcePoolFunctionLibrary::GetDelegatePrefixForResourceEvent(FGameResourceUserEvent& InResourceUserEvent) {
    return NAME_None;
}

bool UGameResourcePoolFunctionLibrary::EqualEqual_ResourcePoolReference(FGameResourcePoolReference A, FGameResourcePoolReference B) {
    return false;
}

bool UGameResourcePoolFunctionLibrary::EqualEqual_ResourcePoolData(FGameResourcePoolReference ResourcePoolReference, UGameResourcePoolData* ResourcePoolData) {
    return false;
}

bool UGameResourcePoolFunctionLibrary::EqualEqual_ResourceData(FGameResourcePoolReference ResourcePoolReference, UGameResourceData* ResourceData) {
    return false;
}

void UGameResourcePoolFunctionLibrary::DrainResourcePoolByPercentage(FGameResourcePoolReference InPool, float Percentage, float MinPercentage) {
}

void UGameResourcePoolFunctionLibrary::DeleteResourcePool(FGameResourcePoolReference& InPool) {
}

void UGameResourcePoolFunctionLibrary::ClearResourcePoolRegenDelayByGameResourceData(AActor* Actor, UGameResourceData* Resource) {
}

void UGameResourcePoolFunctionLibrary::ClearResourcePoolRegenDelay(FGameResourcePoolReference InPool) {
}

void UGameResourcePoolFunctionLibrary::BreakResourcePoolReference(FGameResourcePoolReference InPool, bool& bValid, float& CurrentValue, float& MinValue, float& MaxValue) {
}

void UGameResourcePoolFunctionLibrary::AdjustResourcePoolValue(FGameResourcePoolReference InPool, float InValue) {
}

UGameResourcePoolFunctionLibrary::UGameResourcePoolFunctionLibrary() {
}

