#pragma once
#include "CoreMinimal.h"
#include "HitByFriendlyEventDetails.generated.h"

class AActor;
class UGbxDamageType;
class UDamageSource;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FHitByFriendlyEventDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* DamageInstigator;
    
    UPROPERTY(BlueprintReadOnly)
    UGbxDamageType* DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    UDamageSource* DamageSource;
    
    FHitByFriendlyEventDetails();
};

