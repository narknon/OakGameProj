#pragma once
#include "CoreMinimal.h"
#include "HitFriendlyEventDetails.generated.h"

class AActor;
class UDamageSource;
class UGbxDamageType;

USTRUCT(BlueprintType)
struct FHitFriendlyEventDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* HitTarget;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* HitInstigator;
    
    UPROPERTY(BlueprintReadOnly)
    UDamageSource* DamageSource;
    
    UPROPERTY(BlueprintReadOnly)
    UGbxDamageType* DamageType;
    
    GBXGAMESYSTEMCORE_API FHitFriendlyEventDetails();
};

