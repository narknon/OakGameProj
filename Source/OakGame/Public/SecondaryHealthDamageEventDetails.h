#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SecondaryHealthDamageEventDetails.generated.h"

class UDamageSource;
class UGbxDamageType;
class APawn;

USTRUCT(BlueprintType)
struct FSecondaryHealthDamageEventDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UDamageSource* DamageSource;
    
    UPROPERTY(BlueprintReadOnly)
    UGbxDamageType* DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    APawn* InstigatorPawn;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWasCrit;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitDirection;
    
    OAKGAME_API FSecondaryHealthDamageEventDetails();
};

