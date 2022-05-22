#pragma once
#include "CoreMinimal.h"
#include "HealthTypeDamageSummary.h"
#include "UObject/NoExportTypes.h"
#include "CausedDeathDetails.generated.h"

class UDamageSource;
class UGbxDamageType;
class APawn;
class AActor;

USTRUCT(BlueprintType)
struct FCausedDeathDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UDamageSource* DamageSource;
    
    UPROPERTY(BlueprintReadOnly)
    UGbxDamageType* DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    APawn* DamageInstigator;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadOnly)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly)
    float OverkillDamage;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWasCrit;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWasAwareOfKiller;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWasFullyHealthy;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitDirection;
    
    UPROPERTY(BlueprintReadOnly)
    FVector RadiusDamageOrigin;
    
    UPROPERTY(BlueprintReadOnly)
    float DamageRadius;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FHealthTypeDamageSummary> DamagePerHealthType;
    
    GBXGAMESYSTEMCORE_API FCausedDeathDetails();
};

