#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "ZoneMapGlobalsData.generated.h"

class UTextureRenderTarget2D;
class UMaterialInterface;
class UZoneMapPOITypeData;
class AZoneMapViewer;
class AFogOfDiscoveryCapture;

UCLASS(BlueprintType)
class UZoneMapGlobalsData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UZoneMapPOITypeData>> ZoneMapPOITypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UZoneMapPOITypeData> MissionGiverPOIType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UZoneMapPOITypeData> MissionGiverDLCPOIType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UZoneMapPOITypeData> MissionObjectivePOIType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UZoneMapPOITypeData> MissionObjectiveOptionalPOIType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UZoneMapPOITypeData* FriendPOIType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UZoneMapPOITypeData* CustomWaypointPOIType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* ZoneMeshMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* ZoneMapDisplayMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ZoneMapDisplayTextureParameter;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AZoneMapViewer> ZoneMapBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UZoneMapPOITypeData> PlayerPOIData;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AFogOfDiscoveryCapture> FoDCaptureBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float POIZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BasePOISelectionDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CustomWaypointRemoveDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* FoDWorldPositionTransformMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D FoDRenderTargetSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* FoDMasterMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* FoDTranslucentMasterMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FoDMasterMaterialParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* FODMeshMaterialExternal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* FODMeshTranslucentMaterialExternal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FODMeshMatExtTextureParam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FODMeshMatExtTextureSizeParam;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* FoDSolverMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FoDSolverMaterialParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* FoDLoaderMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FoDLoaderMaterialParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FoDMoveDistanceTestSquared;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FoDPlayerPositionMaterialParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FoDRadiusMaterialParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTextureRenderTarget2D* TestFoDRenderTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerUnfogRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VehicleUnfogRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultUnfogHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultVehicleUnfogHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D IconClampTransitionBounds;
    
    UZoneMapGlobalsData();
};

