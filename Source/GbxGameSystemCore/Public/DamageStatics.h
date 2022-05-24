#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "PipelineDamageInput.h"
#include "UObject/NoExportTypes.h"
#include "ForceSelection.h"
#include "Engine/EngineTypes.h"
#include "DamageStatics.generated.h"

class UDamageSource;
class UDamageData;
class AActor;
class UGbxDamageType;
class UObject;
class AController;
class UDamageModifierComponent;
class UFeedbackData;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UDamageStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDamageStatics();
    UFUNCTION(BlueprintCallable)
    static void StopCausingDamageToTarget(AActor* DamageCauser, AActor* DamageTarget, TSubclassOf<UDamageData> DamageData);
    
    UFUNCTION(BlueprintCallable)
    static void StopCausingDamage(AActor* DamageCauser, TSubclassOf<UDamageData> DamageData);
    
    UFUNCTION(BlueprintCallable)
    static void StopCausingAllDamage(AActor* DamageCauser);
    
    UFUNCTION(BlueprintPure)
    static FPipelineDamageInput MakePipelineDamageInput(AActor* DamageCauser, AActor* DamageReceiver, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, const FHitResult& HitInfo, FVector HitLocation, FVector HitDirection, FVector HitForceDirection, FForceSelection HitForceMagnitude);
    
    UFUNCTION(BlueprintPure)
    static FString GetSummary_ForceSelection(const FForceSelection& ForceSelection);
    
    UFUNCTION(BlueprintPure)
    static UGbxDamageType* GetDamageTypeFromClass(TSubclassOf<UGbxDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintPure)
    static UDamageSource* GetDamageSourceFromClass(TSubclassOf<UDamageSource> DamageSourceClass);
    
    UFUNCTION(BlueprintPure)
    static float Conv_ForceSelectionToFloat(const FForceSelection& ForceSelection);
    
    UFUNCTION(BlueprintPure)
    static FForceSelection Conv_FloatToForceSelection(float ForceSelection);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ApplyDamageInRadius(UObject* WorldContextObject, float BaseDamage, const FVector& Origin, float Radius, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, const TArray<AActor*>& IgnoreActors, AActor* DamageCauser, AController* EventInstigator, FForceSelection BaseImpactForce, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bDamageFalloff, UDamageModifierComponent* DamageModifierComponent, UFeedbackData* InstigatorFeedback, bool bUseInstigatorRadiusDamageScale);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ApplyDamageEx(FPipelineDamageInput PipelineInput, float BaseDamage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ApplyDamage(AActor* DamageReceiver, float BaseDamage, TSubclassOf<UGbxDamageType> DamageType, TSubclassOf<UDamageSource> DamageSource, AController* EventInstigator, AActor* DamageCauser);
    
};

