#include "OakDamageStatics.h"
#include "Templates/SubclassOf.h"

class AWeapon;
class AActor;
class UGbxDamageType;
class UParticleSystem;
class UDamageSource;
class UDamageType;
class UDamageData;
class AController;
class APawn;
class UDamageModifierComponent;
class UExplosionData;
class UImpactData;
class UObject;
class UFeedbackData;
class UGameStatData;

AWeapon* UOakDamageStatics::ResolveDamagingWeapon(AActor* DamageCauser) {
    return NULL;
}

FOakPipelineDamageInput UOakDamageStatics::MakeOakPipelineDamageInput(AActor* DamageCauser, AActor* DamageReceiver, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, const FHitResult& HitInfo, FVector HitLocation, FVector HitDirection, FVector HitForceDirection, FForceSelection HitForceMagnitude, float BaseStatusEffectChance, float BaseStatusEffectDamage, float BaseStatusEffectDuration, float GoreModifier, float GibModifier) {
    return FOakPipelineDamageInput{};
}

bool UOakDamageStatics::IsElementalType(const UDamageType* DamageType, EOakElementalType ElementalType) {
    return false;
}

bool UOakDamageStatics::IsClassElementalType(TSubclassOf<UDamageType> DamageTypeClass, EOakElementalType ElementalType) {
    return false;
}

bool UOakDamageStatics::IsAffectedByElementalType(AActor* Actor, EOakElementalType Type, float Threshold) {
    return false;
}

EOakElementalType UOakDamageStatics::GetElementalType(const UDamageType* DamageType) {
    return EOakElementalType::None;
}

EOakElementalType UOakDamageStatics::GetClassElementalType(TSubclassOf<UDamageType> DamageTypeClass) {
    return EOakElementalType::None;
}

void UOakDamageStatics::CauseDamage(AActor* DamageCauser, TSubclassOf<UDamageData> DamageData, AActor* DamageTarget, float DamageOverride, const FHitResult& TargetedHitInfo, FVector TargetedHitDirection, TSubclassOf<UGbxDamageType> DamageTypeOverride, TSubclassOf<UDamageSource> DamageSourceOverride, APawn* AdditionalEventListener, AActor* SourceActorOverride, FName SourceSocketOverride, FVector SourceLocationOverride, FVector HitLocationOverride, FRotator HitStartRotationOffsetOverride, FRotator HitRotationOffsetOverride, float DamageAreaRadiusOverride, FVector DamageAreaBoxExtentOverride, FForceSelection ImpactForceOverride, UExplosionData* ExplosionDataOverride, UImpactData* ImpactDataOverride, FCauseDamageStatusEffectOverrides StatusEffectOverrides, FCriticalHitDamageOverrides CriticalHitOverrides, FDamageGoreModifiers GoreModifiers, UParticleSystem* ScreenParticleOverride, bool bRunRadiusDamageOnClient) {
}

void UOakDamageStatics::ApplyDamageInRadius(UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float Radius, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* EventInstigator, FForceSelection BaseImpactForce, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, float BaseStatusEffectChance, float BaseStatusEffectDamage, float BaseStatusEffectDuration, bool bDamageFalloff, UDamageModifierComponent* DamageModifierComponent, UFeedbackData* InstigatorFeedback, bool bUseInstigatorRadiusScale, float GoreModifier, float GibModifier, UGameStatData* KillStat) {
}

void UOakDamageStatics::ApplyDamageEx(FOakPipelineDamageInput PipelineInput, float BaseDamage) {
}

AActor* UOakDamageStatics::AmputateLimb(AActor* Actor, const FAmputateLimbData& Data, FVector HitDirection, float HitForce) {
    return NULL;
}

UOakDamageStatics::UOakDamageStatics() {
}

