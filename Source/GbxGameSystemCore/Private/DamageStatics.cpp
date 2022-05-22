#include "DamageStatics.h"
#include "Templates/SubclassOf.h"

class AActor;
class UDamageSource;
class UDamageData;
class UGbxDamageType;
class UObject;
class AController;
class UDamageModifierComponent;
class UFeedbackData;

void UDamageStatics::StopCausingDamageToTarget(AActor* DamageCauser, AActor* DamageTarget, TSubclassOf<UDamageData> DamageData) {
}

void UDamageStatics::StopCausingDamage(AActor* DamageCauser, TSubclassOf<UDamageData> DamageData) {
}

void UDamageStatics::StopCausingAllDamage(AActor* DamageCauser) {
}

FPipelineDamageInput UDamageStatics::MakePipelineDamageInput(AActor* DamageCauser, AActor* DamageReceiver, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, const FHitResult& HitInfo, FVector HitLocation, FVector HitDirection, FVector HitForceDirection, FForceSelection HitForceMagnitude) {
    return FPipelineDamageInput{};
}

FString UDamageStatics::GetSummary_ForceSelection(const FForceSelection& ForceSelection) {
    return TEXT("");
}

UGbxDamageType* UDamageStatics::GetDamageTypeFromClass(TSubclassOf<UGbxDamageType> DamageTypeClass) {
    return NULL;
}

UDamageSource* UDamageStatics::GetDamageSourceFromClass(TSubclassOf<UDamageSource> DamageSourceClass) {
    return NULL;
}

float UDamageStatics::Conv_ForceSelectionToFloat(const FForceSelection& ForceSelection) {
    return 0.0f;
}

FForceSelection UDamageStatics::Conv_FloatToForceSelection(float ForceSelection) {
    return FForceSelection{};
}

void UDamageStatics::ApplyDamageInRadius(UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float Radius, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* EventInstigator, FForceSelection BaseImpactForce, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bDamageFalloff, UDamageModifierComponent* DamageModifierComponent, UFeedbackData* InstigatorFeedback, bool bUseInstigatorRadiusDamageScale) {
}

void UDamageStatics::ApplyDamageEx(FPipelineDamageInput PipelineInput, float BaseDamage) {
}

void UDamageStatics::ApplyDamage(AActor* DamageReceiver, float BaseDamage, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, AController* EventInstigator, AActor* DamageCauser) {
}

UDamageStatics::UDamageStatics() {
}

