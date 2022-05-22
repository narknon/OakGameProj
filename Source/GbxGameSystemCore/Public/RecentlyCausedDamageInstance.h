#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ERecentDamageFlags.h"
#include "Engine/NetSerialization.h"
#include "RecentlyCausedDamageInstance.generated.h"

class UGbxDamageType;
class UDamageSource;
class AActor;
class UHitRegionData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FRecentlyCausedDamageInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY()
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY()
    FVector_NetQuantize DamageLocation;
    
    UPROPERTY()
    float TotalDamage;
    
    UPROPERTY()
    uint8 DirtyCounter;
    
    UPROPERTY()
    UHitRegionData* HitRegion;
    
private:
    UPROPERTY()
    ERecentDamageFlags DamageFlags;
    
public:
    UPROPERTY()
    AActor* DamagedActor;
    
    FRecentlyCausedDamageInstance();
};

