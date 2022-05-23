#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "EGFxGrenadeIndicatorMode.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GFxGrenadeIndicatorClip.generated.h"

class AOakProjectile;

UCLASS(NonTransient)
class UGFxGrenadeIndicatorClip : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    float IndicatorSpread;
    
    UPROPERTY(Transient)
    float DangerRadiusScalar;
    
    UPROPERTY(Transient)
    float GrenadeDangerMinimumRadius;
    
    UPROPERTY(Transient)
    EGFxGrenadeIndicatorMode IndicatorMode;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakProjectile> TrackedGrenade;
    
    UPROPERTY(Transient)
    FVector PlayerLocation;
    
    UPROPERTY(Transient)
    FRotator PlayerRotation;
    
public:
    UGFxGrenadeIndicatorClip();
};

