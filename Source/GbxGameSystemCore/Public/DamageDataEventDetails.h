#pragma once
#include "CoreMinimal.h"
#include "HealthTypeDamageSummary.h"
#include "UObject/NoExportTypes.h"
#include "DamageDataEventDetails.generated.h"

class UGbxDamageType;
class UDamageSource;

USTRUCT(BlueprintType)
struct FDamageDataEventDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float DamageDealt;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FHealthTypeDamageSummary> DamagePerHealthType;
    
    UPROPERTY(BlueprintReadOnly)
    UGbxDamageType* DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    UDamageSource* DamageSource;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitDirection;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWasCrit;
    
    GBXGAMESYSTEMCORE_API FDamageDataEventDetails();
};

