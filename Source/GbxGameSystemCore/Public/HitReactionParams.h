#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HitReactionParams.generated.h"

class UDamageComponent;
class UGbxDamageType;
class UDamageCauserComponent;
class UDamageSource;
class UHitRegionData;

USTRUCT()
struct GBXGAMESYSTEMCORE_API FHitReactionParams {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UDamageComponent* Receiver;
    
    UPROPERTY(Export)
    UDamageCauserComponent* Causer;
    
    UPROPERTY()
    float DamageAmount;
    
    UPROPERTY()
    UGbxDamageType* DamageType;
    
    UPROPERTY()
    UDamageSource* DamageSource;
    
    UPROPERTY()
    FVector Direction;
    
    UPROPERTY()
    float Force;
    
    UPROPERTY()
    UHitRegionData* HitRegion;
    
    UPROPERTY()
    int32 HitBoneIndex;
    
    UPROPERTY()
    FVector HitLocation;
    
    UPROPERTY()
    bool bIgnoreCooldowns;
    
    UPROPERTY()
    bool bForceInterruptSelf;
    
    FHitReactionParams();
};

