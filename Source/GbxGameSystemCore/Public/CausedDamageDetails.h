#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HealthTypeDamageSummary.h"
#include "CausedDamageDetails.generated.h"

class AActor;
class UPrimitiveComponent;
class UHitRegionData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCausedDamageDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bWasCrit;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitDirection;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPrimitiveComponent* HitComponent;
    
    UPROPERTY(BlueprintReadOnly)
    UHitRegionData* HitRegion;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FHealthTypeDamageSummary> DamagePerHealthType;
    
    UPROPERTY(BlueprintReadOnly)
    FVector RadiusDamageOrigin;
    
    UPROPERTY(BlueprintReadOnly)
    float DamageRadius;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsDamageOverTime;
    
    FCausedDamageDetails();
};

