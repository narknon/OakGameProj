#pragma once
#include "CoreMinimal.h"
#include "CausedHealingDetails.generated.h"

class AActor;
class UDamageSource;
class UGbxDamageType;

USTRUCT(BlueprintType)
struct FCausedHealingDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* HealTarget;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* HealInstigator;
    
    UPROPERTY(BlueprintReadOnly)
    float Healing;
    
    UPROPERTY(BlueprintReadOnly)
    UDamageSource* DamageSource;
    
    UPROPERTY(BlueprintReadOnly)
    UGbxDamageType* DamageType;
    
    GBXGAMESYSTEMCORE_API FCausedHealingDetails();
};

