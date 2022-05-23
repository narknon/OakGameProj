#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "MissionIconObserverInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MissionObserverInterface.h"
#include "ChallengeObserverInterface.h"
#include "ZoneMapLevelMeshInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EZoneMapViewerState.h"
#include "ZoneMapDynamicPOIEntry.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ZoneMapIconInfo.h"
#include "ZoneMapMissionWaypointEntry.h"
#include "PlayerIconInfo.h"
#include "EGbxMenuInputDevice.h"
#include "EZoneMapMovementMode.h"
#include "ZoneMapPOIEntry.h"
#include "ZoneMapChallengeEntry.h"
#include "ZoneMapChallengeQuery.h"
#include "ZoneMapViewer.generated.h"

class UZoneMapMeshData;
class UObject;
class UTravelStationData;
class UPrimitiveComponent;
class AOakZoneMapIcon_POI;
class UStaticMeshComponent;
class UZoneMapInputData;
class UOakMinimapIconComponent;
class UMaterial;
class UStaticMesh;
class UMaterialInterface;
class USceneComponent;
class UTexture;
class USpringArmComponent;
class UFogOfDiscoveryComponent;
class UOakZoneMapIcon;
class UZoneMapData;
class AZoneMapPlanetViewer;
class UZoneMapPOITypeData;
class UPlanetData;
class UProceduralMeshComponent;
class UMaterialInstanceDynamic;
class USplineComponent;
class UTextureRenderTarget2D;
class USceneCaptureComponent2D;
class UOakProfile;
class UMapIconAnchor;
class AOakVehicle;
class UChallengeCategoryData;

UCLASS()
class AZoneMapViewer : public AActor, public IMissionIconObserverInterface, public IMissionObserverInterface, public IChallengeObserverInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FZoneMapFocusedPOIChanged, AActor*, NewlyFocusedPOI);
    
private:
    UPROPERTY()
    TArray<AOakZoneMapIcon_POI*> DLCGalaxyPOIs;
    
public:
    UPROPERTY(BlueprintAssignable)
    FZoneMapFocusedPOIChanged OnFocusedPOIChanged;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bEchoMenuOpen;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bShowingZoneMap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bShowingMiniMap;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D MousePanSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float MouseMaxPanSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D MouseRotateSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float MouseMaxRotateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MouseZoomSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MouseMaxZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName ZoneMapDecorationTag;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UZoneMapInputData* ZoneMapInputData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName MapCenterMaterialParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AOakZoneMapIcon_POI> MissionPOIActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UPrimitiveComponent> MissionPOIAreaComponentClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText MissionGiverPOIDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText MissionObjectivePOIDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AOakZoneMapIcon_POI> ChallengePOIActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* LocalPlayerIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* LocalPlayerIconMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseActorPOIs;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PlayerPositionMaterialParameter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName DisplayingLoadedLevelMaterialParameter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterial* DecorationMeshMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GPUMaterialParameter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* GridBaseMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterial* GridBaseMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GridMaterialParameter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterial* WaypointMeshMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float POITargetTraceLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D MainViewTargetSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ZoomSpeedModifierTuning;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName DistortionRadiusParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistortionRadiusMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName DistortionRadiusMaskParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistortionRadiusMaskMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName HologramDistortionParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HologramDistortionMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FZoneMapDynamicPOIEntry> DynamicMapPOITypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UPrimitiveComponent> DynamicPOIClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MiniMapScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MiniMapPitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector MiniMap2DScreenOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D MiniMapRenderCoordinatesOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MiniMapOcclusionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MiniMap2DOcclusionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIntPoint MiniMapTargetSize;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBlendMode> MiniMapBlendMode;
    
    UPROPERTY(EditAnywhere)
    FVector2D MiniMapHUDScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDeferLevelMapSetState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDeferMapListSetup;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* ZoneMapRootComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USpringArmComponent* MinimapSpringArm;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* PlanetRootComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* GalaxyRootComponent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakZoneMapIcon> MissionIconClass;
    
    UPROPERTY(EditAnywhere)
    bool bHideMissionAreaWaypoint;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TWeakObjectPtr<UZoneMapData> LevelData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UZoneMapMeshData* LevelMeshData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UZoneMapMeshData*> AdditionalLevelMeshData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<AZoneMapPlanetViewer> PlanetClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UPlanetData> PlanetData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UZoneMapData> PlayerLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UPlanetData> PlayerPlanet;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FZoneMapIconInfo> MapDynamicMissionIcons;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FZoneMapIconInfo> MapStaticMissionIcons;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FZoneMapIconInfo> MapDynamicChallengeIcons;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FZoneMapIconInfo> MapStaticChallengeIcons;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FZoneMapIconInfo> MapDynamicIcons;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FZoneMapIconInfo> MapStaticIcons;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FZoneMapIconInfo> MapPlayerIcons;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AOakZoneMapIcon_POI*> MapExternalPOIs;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EGbxMenuInputDevice InputDevice;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float POISelectionDistance;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* FocusedPOI;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FocusedPOIDistanceRatio;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EZoneMapMovementMode MovementMode;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bDisableMovementInput;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float ZoomInAxis;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float ZoomOutAxis;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float LeftStickAxisX;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float LeftStickAxisY;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float RightStickAxisX;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float RightStickAxisY;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float AxisDeadzone;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float POIMovementSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector TransformTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float RotationYawTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float RotationPitchTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float InterpolationAlpha;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float ScaleValue;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float ScaleValueTarget;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector TargetSpawnScaleValue;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector LastPlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool PlayerMoved;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FZoneMapLevelMeshInfo> LevelMapMeshs;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TArray<UStaticMeshComponent*> LevelMapMeshComponents;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FPlayerIconInfo> PlayerIconMeshs;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UStaticMeshComponent* GridMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UStaticMeshComponent* GalaxyMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UMaterialInstanceDynamic* GridDMI;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<UMaterialInstanceDynamic*> LevelMapDMIs;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 LastLevelMapMeshCount;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 LastLevelMapDMICount;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<UMaterialInstanceDynamic*> ZoneViewLevelMapDMIs;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 LastZoneViewLevelMapDMICount;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bLevelMeshDataLoaded;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UMaterialInstanceDynamic* PostProcessDMI;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UMaterialInstanceDynamic* WaypointPathDMI;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USplineComponent* WaypointSpline;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UProceduralMeshComponent* WaypointMesh;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UTextureRenderTarget2D* FogOfDiscoveryTexture;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UFogOfDiscoveryComponent* FogOfDiscoveryComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneCaptureComponent2D* SceneCapture_MainView;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneCaptureComponent2D* SceneCapture_MiniMap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UTextureRenderTarget2D* ZoneMapRenderTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UTextureRenderTarget2D* MinimapRenderTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMaterialInstanceDynamic* ZoneMapDisplayMaterialInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ZoneMapTraceLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool ZoneMapTraceHasHit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AOakZoneMapIcon_POI> CurrentWaypointPOI;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ZoneMapMeshOrigin;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FBox ZoneMapMeshExtent;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float MaxHeight;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float ZoomInputEased;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector ZoomPushTransformOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector CachedCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool AdjustPivotAndTargetLength;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bDisableMenuNotification;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bSanctuaryIsHighlighted;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UOakProfile* OakProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ZoneMapOffset_4way;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ZoneMapOffset_Vertical;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bDisableAutoPOI;
    
private:
    UPROPERTY(Transient)
    TSoftObjectPtr<AActor> TrackedTarget;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UTravelStationData> FocusedStation;
    
    UPROPERTY(Transient)
    FZoneMapIconInfo TargetInfo;
    
    UPROPERTY(Transient)
    TArray<FZoneMapIconInfo> CycledWaypoints;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> POIComponentPool;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<USceneComponent>> CurrentLevelMissionIcons;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<USceneComponent>> CurrentLevelChallengeIcons;
    
public:
    AZoneMapViewer();
    UFUNCTION(BlueprintCallable)
    void UpdateTransforms(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePOISphereRadii();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerIcons();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMiniMapTransforms(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGalaxyTransforms(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDMIs(bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCamera(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UnfogMapIconObject(const UObject* IconObject, float Radius, float Height);
    
    UFUNCTION(BlueprintCallable)
    void TraceForPOI(FVector StartPos, FVector Direction, FVector& OutZoneMapTraceLocation, bool& OutZoneMapTraceHasHit);
    
    UFUNCTION(BlueprintCallable)
    static AOakZoneMapIcon_POI* SpawnZoneMapIcon(USceneComponent* IconParentComponent, const FZoneMapIconInfo& IconInfo, UZoneMapPOITypeData* POIType);
    
    UFUNCTION(BlueprintCallable)
    UMapIconAnchor* SpawnZoneMapAnchorAndIcon(USceneComponent* IconParentComponent, UOakZoneMapIcon* NewZoneMapIcon, FZoneMapIconInfo& IconInfo, UZoneMapPOITypeData* POIType);
    
    UFUNCTION(BlueprintCallable)
    void ShowZoneMap();
    
    UFUNCTION(BlueprintCallable)
    void ShowMenuList(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetWaypoint();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleRadius(float Alpha, float RadiusAlpha, float Distortion);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPivotToActorWorldLocation(FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void ResetPropertiesForZoneChange();
    
    UFUNCTION(BlueprintCallable)
    void ResetMapOrientation(bool bInstant, bool bResetOrientation, bool bSnapToPlayer);
    
    UFUNCTION(BlueprintCallable)
    void ResetCycledWaypointIndex();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMapIconObject(const UObject* IconObject);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMapIcon(const FZoneMapIconInfo& IconInfo);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorsFromZoneMapView();
    
    UFUNCTION(BlueprintCallable)
    void RefreshMapIconObject(const UObject* IconObject);
    
    UFUNCTION()
    void OnZoneMapMeshDataLoaded();
    
private:
    UFUNCTION()
    void OnPlayerSaveGameLoaded();
    
    UFUNCTION()
    void OnPlayerProfileChanged();
    
public:
    UFUNCTION()
    void OnPlanetClassLoaded();
    
    UFUNCTION()
    void OnPlanetAddOnPOIsLoaded();
    
private:
    UFUNCTION()
    void OnMinimapIconComponentUpdateTracking(UOakMinimapIconComponent* MinimapIconComponent);
    
    UFUNCTION()
    void OnMinimapIconComponentEndTracking(UOakMinimapIconComponent* MinimapIconComponent);
    
    UFUNCTION()
    void OnMinimapIconComponentBeginTracking(UOakMinimapIconComponent* MinimapIconComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyTransitioning(bool bTransitioning);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPOIZoneHighlighted(const UObject* POIIcon, const UZoneMapData* POIZone, bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPOIPlanetHighlighted(const UObject* POIIcon, UPlanetData* POIPlanet, bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPOIIconHighlighted(const UObject* POIIcon, const FZoneMapPOIEntry& POIData, bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void NotifyMissionWaypointIconHighlighted(const UObject* WaypointIcon, const FZoneMapMissionWaypointEntry& WaypointData, bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void NotifyDeployedVehicleHighlighted(const UObject* POIIcon, AOakVehicle* TargetedVehicle, bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void NotifyChallengeIconHighlighted(const UObject* ChallengeIcon, const FZoneMapChallengeEntry& ChallengeData, bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void LoadPlanetForLevel(UPlanetData* PlanetToLoad);
    
    UFUNCTION(BlueprintCallable)
    void LoadMapForLevel(UZoneMapData* ZoneMapToLoad, bool bSetAsCurrent);
    
    UFUNCTION(BlueprintNativeEvent)
    bool K2_UpdateTransforms(float DeltaSeconds);
    
    UFUNCTION(BlueprintNativeEvent)
    bool K2_UpdatePOISphereRadii();
    
    UFUNCTION(BlueprintNativeEvent)
    bool K2_UpdateMiniMapTransforms(float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_SetCustomWaypoint();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_ResetAxisInput();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_PostLoadedPlanetClass();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_PostLoadedMapMesh();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnZoneMapShown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnZoneMapHidden();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnRemoveIcon(const AOakZoneMapIcon_POI* IconActor, const FZoneMapIconInfo& IconInfo);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnMiniMapShown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnMiniMapHidden();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnEchoOpened();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnEchoClosed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnAddIcon(const AOakZoneMapIcon_POI* SpawnedIcon, FZoneMapIconInfo& IconInfo);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_HandleVisibilityChanged(bool bVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool K2_HandleInputAction(const FName& InputAction);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool K2_HandleAxisInput(const FName& InputAction, const float AxisValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GotoPlanetMap(UPlanetData* InPlanetData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GotoParentMap();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_GotoLevelMap(UZoneMapData* InLevelData);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool K2_GetRotationYawTarget(float DeltaSeconds, float YawMin, float YawMax);
    
    UFUNCTION(BlueprintNativeEvent)
    bool K2_GetRotationPitchTarget(float DeltaSeconds);
    
    UFUNCTION(BlueprintNativeEvent)
    bool K2_GetNewTransformTarget(float DeltaSeconds, FVector TransformMin, FVector TransformMax, float TransformBuffer, float GlobalTransformScale, float ZoomDelta);
    
    UFUNCTION(BlueprintNativeEvent)
    bool K2_GetNewScaleTarget(float DeltaSeconds, float& ZoomDelta);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_FocusOnTransform(const FTransform& Transform);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_FocusOnPlanet(UPlanetData* Planet);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_FocusOnLevel(UZoneMapData* Level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_CenterOnPlayer();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsViewingCurrentLevel() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void InitializeZoneMapMesh();
    
    UFUNCTION(BlueprintCallable)
    void InitializeZoneMapForLevel();
    
    UFUNCTION(BlueprintCallable)
    void InitializeGalaxyMapMesh();
    
    UFUNCTION(BlueprintCallable)
    void InitializeCompassAndGrid();
    
    UFUNCTION(BlueprintCallable)
    void HideZoneMap();
    
    UFUNCTION(BlueprintCallable)
    UZoneMapMeshData* GetZoneMeshData();
    
    UFUNCTION(BlueprintCallable)
    void GetZoneChallenges(UChallengeCategoryData* ChallengeCategory, TArray<FZoneMapChallengeQuery>& ZoneChallenges);
    
    UFUNCTION(BlueprintCallable)
    FZoneMapIconInfo GetTargetInfo();
    
    UFUNCTION(BlueprintCallable)
    void GetNewTransformTargetNative(float DeltaSeconds, FVector TransformMin, FVector TransformMax, float TransformBuffer, float GlobalTransformScale, float ZoomDelta);
    
    UFUNCTION(BlueprintCallable)
    void GetNewScaleTargetNative(float DeltaSeconds, float& ZoomDelta, float ScaleMin, float ScaleMax, float ScaleRate);
    
    UFUNCTION(BlueprintCallable)
    void GetNewRotationYawTargetNative(float DeltaSeconds, float YawMin, float YawMax);
    
    UFUNCTION(BlueprintCallable)
    void GetNewRotationPitchTargetNative(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetMiniMapTexture();
    
    UFUNCTION(BlueprintPure)
    EZoneMapViewerState GetMapState() const;
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetMainViewTexture();
    
    UFUNCTION(BlueprintPure)
    void GatherZoneMapDecorationActors(TArray<AActor*>& Actors) const;
    
    UFUNCTION(BlueprintCallable)
    void EchoDeviceOpened();
    
    UFUNCTION(BlueprintCallable)
    void EchoDeviceClosed();
    
    UFUNCTION(BlueprintCallable)
    void DeferredSetStatePlanet();
    
    UFUNCTION(BlueprintCallable)
    void DeferredSetStateLevel();
    
private:
    UFUNCTION()
    void DeferredRegistrationWithMissionTracker();
    
    UFUNCTION()
    void DeferredRegistrationWithIconTracker();
    
    UFUNCTION()
    void DeferredRegistrationWithFriendStatusSystem();
    
    UFUNCTION()
    void DeferredRegistrationWithChallengeManager();
    
    UFUNCTION()
    void CheckAndAdjustCaptureTextureSize();
    
public:
    UFUNCTION()
    void ChallengesRegistered();
    
    UFUNCTION(BlueprintCallable)
    void AddPOIIcons();
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerIcons(bool AllPlayers);
    
    UFUNCTION(BlueprintCallable)
    UMapIconAnchor* AddMapIcon(FZoneMapIconInfo& IconInfo, UOakZoneMapIcon* NewZoneMapIcon, UZoneMapPOITypeData* POIType);
    
    UFUNCTION(BlueprintCallable)
    void AddFriendIcons();
    
    UFUNCTION(BlueprintCallable)
    void AddDecorationMeshs();
    
    UFUNCTION(BlueprintCallable)
    void AddChallengeIcons();
    
    UFUNCTION(BlueprintCallable)
    void AddActorToZoneMapView(AActor* NewViewActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

