#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "CosmeticDamageEventDetails.generated.h"

class UGbxDamageType;
class AActor;
class UDamageSource;

USTRUCT(BlueprintType)
struct FCosmeticDamageEventDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitDirection;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UDamageSource> DamageSource;
    
    OAKGAME_API FCosmeticDamageEventDetails();
};

