#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGRMLNHardpointType.h"
#include "EGRMLNModType.h"
#include "AttributeInitializationData.h"
#include "GRMLNHardPointDamageData.h"
#include "GRMLNHardpointData.generated.h"

class UOakLightProjectileData;
class AOakDroneProjectile_GRMLN;

USTRUCT(BlueprintType)
struct FGRMLNHardpointData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    EGRMLNHardpointType Type;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsModUnlockedHardpoint;
    
    UPROPERTY(EditDefaultsOnly)
    EGRMLNModType ModUnlock;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData FireRate;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData Ammunition;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData BurstRefireRate;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData Damage;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UOakLightProjectileData> LightProjectileDataClass;
    
    UPROPERTY(EditDefaultsOnly)
    FGRMLNHardPointDamageData NormalDamageData;
    
    UPROPERTY(EditDefaultsOnly)
    FGRMLNHardPointDamageData CryoDamageData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> WeaponFireSockets;
    
    UPROPERTY(EditDefaultsOnly)
    float RandomRangeMin;
    
    UPROPERTY(EditDefaultsOnly)
    float RandomRangeMax;
    
    UPROPERTY(Transient)
    AOakDroneProjectile_GRMLN* Owner;
    
public:
    OAKGAME_API FGRMLNHardpointData();
};

