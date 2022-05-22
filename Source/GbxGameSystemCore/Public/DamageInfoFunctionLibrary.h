#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DamageInfo.h"
#include "CriticalHitDamageOverrides.h"
#include "DamageInfoFunctionLibrary.generated.h"

class UDamageModifierComponent;
class UDamageSource;
class UGbxDamageType;
class AActor;

UCLASS(BlueprintType)
class UDamageInfoFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDamageInfoFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetImpactForce(UPARAM(Ref) FDamageInfo& DamageInfo, float InImpactForce);
    
    UFUNCTION(BlueprintCallable)
    static void SetDamageType(UPARAM(Ref) FDamageInfo& DamageInfo, TSubclassOf<UGbxDamageType> InDamageType);
    
    UFUNCTION(BlueprintCallable)
    static void SetDamageSource(UPARAM(Ref) FDamageInfo& DamageInfo, TSubclassOf<UDamageSource> InDamageSource);
    
    UFUNCTION(BlueprintCallable)
    static void SetDamageRadius(UPARAM(Ref) FDamageInfo& DamageInfo, float InDamageRadius);
    
    UFUNCTION(BlueprintCallable)
    static void SetDamageModifierComponent(UPARAM(Ref) FDamageInfo& DamageInfo, UDamageModifierComponent* InModifierComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetDamageCauser(UPARAM(Ref) FDamageInfo& DamageInfo, AActor* InDamageCauser);
    
    UFUNCTION(BlueprintCallable)
    static void SetDamage(UPARAM(Ref) FDamageInfo& DamageInfo, float InDamage);
    
    UFUNCTION(BlueprintCallable)
    static void SetCriticalHitDamageOverrides(UPARAM(Ref) FDamageInfo& DamageInfo, const FCriticalHitDamageOverrides& Overrides);
    
    UFUNCTION(BlueprintCallable)
    static void SetApplyCriticalHitModsToAoEDamage(UPARAM(Ref) FDamageInfo& DamageInfo, bool bApplyCriticalHitModsToAoEDamage);
    
    UFUNCTION(BlueprintPure)
    static float GetImpactForce(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<UGbxDamageType> GetDamageType(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<UDamageSource> GetDamageSource(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintPure)
    static float GetDamageRadius(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintPure)
    static UDamageModifierComponent* GetDamageModifierComponent(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetDamageCauser(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintPure)
    static float GetDamage(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintPure)
    static FCriticalHitDamageOverrides GetCriticalHitDamageOverrides(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintPure)
    static bool GetApplyCriticalHitModsToAoEDamage(const FDamageInfo& DamageInfo);
    
};

