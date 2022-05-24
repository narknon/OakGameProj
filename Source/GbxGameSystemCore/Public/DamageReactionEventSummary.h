#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "HitRegionInfo.h"
#include "DamageReactionEventSummary.generated.h"

class APawn;
class UGbxDamageType;
class UPrimitiveComponent;
class UDamageSource;

USTRUCT(BlueprintType)
struct FDamageReactionEventSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    APawn* DamageCauser;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitDirection;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UPrimitiveComponent* HitComponent;
    
    UPROPERTY(BlueprintReadOnly)
    FHitRegionInfo HitRegion;
    
    UPROPERTY(BlueprintReadOnly)
    FVector Origin;
    
    UPROPERTY(BlueprintReadOnly)
    float Radius;
    
    UPROPERTY()
    int32 EventIndex;
    
    GBXGAMESYSTEMCORE_API FDamageReactionEventSummary();
};

