#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "DamageInfo.h"
#include "OakProjectileVehicleData.generated.h"

class UStaticMesh;

UCLASS(BlueprintType)
class UOakProjectileVehicleData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDamageInfo DamageInfo;
    
    UOakProjectileVehicleData();
};

