#include "StanceBlueprintLibrary.h"

class AAIController;
class UStanceDataProvider;
class UStanceComponent;
class AActor;
class UAnimInstance;
class UStanceData;
class UStanceType;

UStanceComponent* UStanceBlueprintLibrary::TryGetStanceComponent(AAIController* AIController) {
    return NULL;
}

void UStanceBlueprintLibrary::SetStance(AActor* Target, UStanceDataProvider* Stance) {
}

bool UStanceBlueprintLibrary::IsStanceComponentInStance(UStanceComponent* StanceComponent, UStanceDataProvider* Stance) {
    return false;
}

bool UStanceBlueprintLibrary::IsInStance(UAnimInstance* AnimInstance, UStanceDataProvider* Stance) {
    return false;
}

bool UStanceBlueprintLibrary::EqualEqual_StanceTypeStanceType(UStanceType* A, UStanceType* B) {
    return false;
}

bool UStanceBlueprintLibrary::EqualEqual_StanceDataStanceData(UStanceData* A, UStanceData* B) {
    return false;
}

void UStanceBlueprintLibrary::ClearStance(AActor* Target) {
}

UStanceBlueprintLibrary::UStanceBlueprintLibrary() {
}

