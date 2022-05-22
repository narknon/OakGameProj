#include "DamageInfoFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UGbxDamageType;
class UDamageModifierComponent;
class UDamageSource;
class AActor;

void UDamageInfoFunctionLibrary::SetImpactForce(FDamageInfo& DamageInfo, float InImpactForce) {
}

void UDamageInfoFunctionLibrary::SetDamageType(FDamageInfo& DamageInfo, TSubclassOf<UGbxDamageType> InDamageType) {
}

void UDamageInfoFunctionLibrary::SetDamageSource(FDamageInfo& DamageInfo, TSubclassOf<UDamageSource> InDamageSource) {
}

void UDamageInfoFunctionLibrary::SetDamageRadius(FDamageInfo& DamageInfo, float InDamageRadius) {
}

void UDamageInfoFunctionLibrary::SetDamageModifierComponent(FDamageInfo& DamageInfo, UDamageModifierComponent* InModifierComponent) {
}

void UDamageInfoFunctionLibrary::SetDamageCauser(FDamageInfo& DamageInfo, AActor* InDamageCauser) {
}

void UDamageInfoFunctionLibrary::SetDamage(FDamageInfo& DamageInfo, float InDamage) {
}

void UDamageInfoFunctionLibrary::SetCriticalHitDamageOverrides(FDamageInfo& DamageInfo, const FCriticalHitDamageOverrides& Overrides) {
}

void UDamageInfoFunctionLibrary::SetApplyCriticalHitModsToAoEDamage(FDamageInfo& DamageInfo, bool bApplyCriticalHitModsToAoEDamage) {
}

float UDamageInfoFunctionLibrary::GetImpactForce(const FDamageInfo& DamageInfo) {
    return 0.0f;
}

TSubclassOf<UGbxDamageType> UDamageInfoFunctionLibrary::GetDamageType(const FDamageInfo& DamageInfo) {
    return NULL;
}

TSubclassOf<UDamageSource> UDamageInfoFunctionLibrary::GetDamageSource(const FDamageInfo& DamageInfo) {
    return NULL;
}

float UDamageInfoFunctionLibrary::GetDamageRadius(const FDamageInfo& DamageInfo) {
    return 0.0f;
}

UDamageModifierComponent* UDamageInfoFunctionLibrary::GetDamageModifierComponent(const FDamageInfo& DamageInfo) {
    return NULL;
}

AActor* UDamageInfoFunctionLibrary::GetDamageCauser(const FDamageInfo& DamageInfo) {
    return NULL;
}

float UDamageInfoFunctionLibrary::GetDamage(const FDamageInfo& DamageInfo) {
    return 0.0f;
}

FCriticalHitDamageOverrides UDamageInfoFunctionLibrary::GetCriticalHitDamageOverrides(const FDamageInfo& DamageInfo) {
    return FCriticalHitDamageOverrides{};
}

bool UDamageInfoFunctionLibrary::GetApplyCriticalHitModsToAoEDamage(const FDamageInfo& DamageInfo) {
    return false;
}

UDamageInfoFunctionLibrary::UDamageInfoFunctionLibrary() {
}

