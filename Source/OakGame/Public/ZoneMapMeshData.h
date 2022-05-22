#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ZoneMapMeshListEntry.h"
#include "ZoneMapGPUPointCloudData.h"
#include "ZoneMapMeshData.generated.h"

class UStaticMeshComponent;
class UTexture2D;
class AFogOfDiscoveryCapture;

UCLASS(BlueprintType)
class UZoneMapMeshData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FZoneMapMeshListEntry> ZoneMapMeshs;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FZoneMapGPUPointCloudData> GPUPointCloudList;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* FogOfDiscoveryTexture;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ZoneMapMeshVersion;
    
private:
    UPROPERTY(Transient)
    AFogOfDiscoveryCapture* FoDCapture;
    
public:
    UZoneMapMeshData();
    UFUNCTION(BlueprintCallable)
    void SetupStaticMeshComponent(int32 Index, UStaticMeshComponent* InStaticMeshComponent);
    
};

