#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "GrenadeOverrideMeshAspectData.generated.h"

class UStaticMesh;

UCLASS(EditInlineNew)
class UGrenadeOverrideMeshAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* OverrideMesh;
    
public:
    UGrenadeOverrideMeshAspectData();
};

