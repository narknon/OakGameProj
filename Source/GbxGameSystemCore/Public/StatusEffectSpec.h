#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectDurationType.h"
#include "StatusEffectSpec.generated.h"

class AActor;
class UStatusEffectData;
class UObject;
class AController;

USTRUCT(BlueprintType)
struct FStatusEffectSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UObject> EffectOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UObject> EffectOwnerContextOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStatusEffectDurationType DurationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AController* EffectInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamagePerSecond;
    
    GBXGAMESYSTEMCORE_API FStatusEffectSpec();
};

