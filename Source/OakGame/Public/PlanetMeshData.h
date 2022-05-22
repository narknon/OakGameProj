#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ZoneMapPOIMeshListEntry.h"
#include "PlanetMeshData.generated.h"

class UMaterialInterface;
class UStaticMesh;
class UTexture2D;

UCLASS(BlueprintType)
class UPlanetMeshData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UStaticMesh* PlanetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UStaticMesh* DecoMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UStaticMesh* RingDecoMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UStaticMesh* GalaxyTable_PlanetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FZoneMapPOIMeshListEntry> ZoneMapPOIMeshs;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UMaterialInterface* PlanetMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UMaterialInterface* GalaxyTable_PlanetShader;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UMaterialInterface* GalaxyTable_AtmosphereShader;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UTexture2D* LandTexture;
    
    UPlanetMeshData();
};

