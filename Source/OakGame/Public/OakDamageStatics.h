#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OakPipelineDamageInput.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ForceSelection.h"
#include "EOakElementalType.h"
#include "DamageGoreModifiers.h"
#include "CauseDamageStatusEffectOverrides.h"
#include "CriticalHitDamageOverrides.h"
#include "Engine/EngineTypes.h"
#include "AmputateLimbData.h"
#include "OakDamageStatics.generated.h"

class UDamageSource;
class AActor;
class AWeapon;
class UGameStatData;
class UGbxDamageType;
class UDamageType;
class UImpactData;
class UDamageData;
class AController;
class APawn;
class UExplosionData;
class UObject;
class UParticleSystem;
class UDamageModifierComponent;
class UFeedbackData;

UCLASS(BlueprintType)
class OAKGAME_API UOakDamageStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOakDamageStatics();
    UFUNCTION(BlueprintPure)
    static AWeapon* ResolveDamagingWeapon(AActor* DamageCauser);
    
    UFUNCTION(BlueprintPure)
    static FOakPipelineDamageInput MakeOakPipelineDamageInput(AActor* DamageCauser, AActor* DamageReceiver, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, const FHitResult& HitInfo, FVector HitLocation, FVector HitDirection, FVector HitForceDirection, FForceSelection HitForceMagnitude, float BaseStatusEffectChance, float BaseStatusEffectDamage, float BaseStatusEffectDuration, float GoreModifier, float GibModifier);
    
    UFUNCTION(BlueprintPure)
    static bool IsElementalType(const UDamageType* DamageType, EOakElementalType ElementalType);
    
    UFUNCTION(BlueprintPure)
    static bool IsClassElementalType(TSubclassOf<UDamageType> DamageTypeClass, EOakElementalType ElementalType);
    
    UFUNCTION(BlueprintPure)
    static bool IsAffectedByElementalType(AActor* Actor, EOakElementalType Type, float Threshold);
    
    UFUNCTION(BlueprintPure)
    static EOakElementalType GetElementalType(const UDamageType* DamageType);
    
    UFUNCTION(BlueprintPure)
    static EOakElementalType GetClassElementalType(TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintCallable)
    static void CauseDamage(AActor* DamageCauser, TSubclassOf<UDamageData> DamageData, AActor* DamageTarget, float DamageOverride, const FHitResult& TargetedHitInfo, FVector TargetedHitDirection, TSubclassOf<UGbxDamageType> DamageTypeOverride, TSubclassOf<UDamageSource> DamageSourceOverride, APawn* AdditionalEventListener, AActor* SourceActorOverride, FName SourceSocketOverride, FVector SourceLocationOverride, FVector HitLocationOverride, FRotator HitStartRotationOffsetOverride, FRotator HitRotationOffsetOverride, float DamageAreaRadiusOverride, FVector DamageAreaBoxExtentOverride, FForceSelection ImpactForceOverride, UExplosionData* ExplosionDataOverride, UImpactData* ImpactDataOverride, FCauseDamageStatusEffectOverrides StatusEffectOverrides, FCriticalHitDamageOverrides CriticalHitOverrides, FDamageGoreModifiers GoreModifiers, UParticleSystem* ScreenParticleOverride, bool bRunRadiusDamageOnClient);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ApplyDamageInRadius(UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float Radius, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* EventInstigator, FForceSelection BaseImpactForce, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, float BaseStatusEffectChance, float BaseStatusEffectDamage, float BaseStatusEffectDuration, bool bDamageFalloff, UDamageModifierComponent* DamageModifierComponent, UFeedbackData* InstigatorFeedback, bool bUseInstigatorRadiusScale, float GoreModifier, float GibModifier, UGameStatData* KillStat);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ApplyDamageEx(FOakPipelineDamageInput PipelineInput, float BaseDamage);
    
    UFUNCTION(BlueprintCallable)
    static AActor* AmputateLimb(AActor* Actor, const FAmputateLimbData& Data, FVector HitDirection, float HitForce);
    
};

