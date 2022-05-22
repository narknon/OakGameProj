#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HealthTypeDamageSummary.h"
#include "ReceivedDamageDetails.generated.h"

class UPrimitiveComponent;
class UHitRegionData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FReceivedDamageDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool bWasCrit;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitDirection;
    
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
    bool bWasBulletReflected;
    
    FReceivedDamageDetails();
};

