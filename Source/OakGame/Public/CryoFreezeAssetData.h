#pragma once
#include "CoreMinimal.h"
#include "CryoFreezeAssetData.generated.h"

class UDestructibleMesh;

USTRUCT(BlueprintType)
struct FCryoFreezeAssetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDestructibleMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    FName AssociatedComponentName;
    
    OAKGAME_API FCryoFreezeAssetData();
};

