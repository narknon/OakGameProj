#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "LootableObjectDamageEventDetails.generated.h"

class AActor;
class UGbxDamageType;
class UDamageSource;

USTRUCT(BlueprintType)
struct FLootableObjectDamageEventDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitDirection;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitForce;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UDamageSource> DamageSource;
    
    OAKGAME_API FLootableObjectDamageEventDetails();
};

