#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GoreAoEDamageData.generated.h"

class UDamageFilter;
class UCurveFloat;

UCLASS()
class UGoreAoEDamageData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 MaxBones;
    
    UPROPERTY(EditAnywhere)
    float Chance;
    
    UPROPERTY(EditAnywhere)
    float CumulativeChanceModifier;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* RadiusChanceCurve;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDamageFilter* DamageFilter;
    
    UGoreAoEDamageData();
};

