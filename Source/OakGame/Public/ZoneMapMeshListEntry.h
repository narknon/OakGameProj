#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ZoneMapMeshListEntry.generated.h"

class UStaticMesh;
class UGbxCondition;

USTRUCT(BlueprintType)
struct OAKGAME_API FZoneMapMeshListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UStaticMesh* ZoneMapMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBox ZoneMapVisibilityExtents;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UGbxCondition* MeshDisplayCondition;
    
    UPROPERTY(EditDefaultsOnly)
    bool bConditionalMeshDisplay;
    
    FZoneMapMeshListEntry();
};

