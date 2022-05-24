#pragma once
#include "CoreMinimal.h"
#include "ZoneMapLevelMeshInfo.generated.h"

class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class UGbxCondition;

USTRUCT(BlueprintType)
struct FZoneMapLevelMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UStaticMeshComponent* MapMesh;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInstanceDynamic* MapMeshDMI;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UStaticMeshComponent* MapTranslucentMesh;
    
    UPROPERTY(BlueprintReadOnly)
    UMaterialInstanceDynamic* MapTranslucentMeshDMI;
    
    UPROPERTY(Transient)
    UGbxCondition* MeshDisplayCondition;
    
    OAKGAME_API FZoneMapLevelMeshInfo();
};

