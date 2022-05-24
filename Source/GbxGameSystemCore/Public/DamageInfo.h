#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CriticalHitDamageOverrides.h"
#include "DamageInfo.generated.h"

class UFeedbackData;
class UGbxDamageType;
class UDamageModifierComponent;
class UDamageSource;
class AActor;

USTRUCT(BlueprintType)
struct FDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated)
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated)
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpactForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated)
    UFeedbackData* InstigatorFeedback;
    
    UPROPERTY(BlueprintReadWrite, Export, NotReplicated, VisibleAnywhere)
    UDamageModifierComponent* DamageModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, VisibleAnywhere)
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, VisibleAnywhere)
    TArray<AActor*> ActorsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated)
    bool bApplyCriticalHitModsToAoEDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated)
    FCriticalHitDamageOverrides CriticalHitOverrides;
    
    GBXGAMESYSTEMCORE_API FDamageInfo();
};

