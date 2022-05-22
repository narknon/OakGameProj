#include "ZoneMapViewer.h"
#include "Components/SceneCaptureComponent2D.h"
#include "GameFramework/SpringArmComponent.h"

class UObject;
class AOakZoneMapIcon_POI;
class UPlanetData;
class UZoneMapPOITypeData;
class UOakMinimapIconComponent;
class UOakZoneMapIcon;
class USceneComponent;
class UMapIconAnchor;
class UZoneMapData;
class AOakVehicle;
class UZoneMapMeshData;
class UChallengeCategoryData;
class UTexture;
class AActor;

void AZoneMapViewer::UpdateTransforms(float DeltaSeconds) {
}

void AZoneMapViewer::UpdatePOISphereRadii() {
}

void AZoneMapViewer::UpdatePlayerIcons() {
}

void AZoneMapViewer::UpdateMiniMapTransforms(float DeltaSeconds) {
}

void AZoneMapViewer::UpdateGalaxyTransforms(float DeltaSeconds) {
}

void AZoneMapViewer::UpdateDMIs(bool bForceUpdate) {
}

void AZoneMapViewer::UpdateCamera(float DeltaSeconds) {
}

void AZoneMapViewer::UnfogMapIconObject(const UObject* IconObject, float Radius, float Height) {
}

void AZoneMapViewer::TraceForPOI(FVector StartPos, FVector Direction, FVector& OutZoneMapTraceLocation, bool& OutZoneMapTraceHasHit) {
}

AOakZoneMapIcon_POI* AZoneMapViewer::SpawnZoneMapIcon(USceneComponent* IconParentComponent, const FZoneMapIconInfo& IconInfo, UZoneMapPOITypeData* POIType) {
    return NULL;
}

UMapIconAnchor* AZoneMapViewer::SpawnZoneMapAnchorAndIcon(USceneComponent* IconParentComponent, UOakZoneMapIcon* NewZoneMapIcon, FZoneMapIconInfo& IconInfo, UZoneMapPOITypeData* POIType) {
    return NULL;
}

void AZoneMapViewer::ShowZoneMap() {
}

void AZoneMapViewer::ShowMenuList(bool bShow) {
}

void AZoneMapViewer::SetWaypoint() {
}

void AZoneMapViewer::SetVisibleRadius(float Alpha, float RadiusAlpha, float Distortion) {
}

void AZoneMapViewer::SetVisible(bool bVisible) {
}

void AZoneMapViewer::SetPivotToActorWorldLocation(FVector WorldLocation) {
}

void AZoneMapViewer::ResetPropertiesForZoneChange() {
}

void AZoneMapViewer::ResetMapOrientation(bool bInstant, bool bResetOrientation, bool bSnapToPlayer) {
}

void AZoneMapViewer::ResetCycledWaypointIndex() {
}

void AZoneMapViewer::RemoveMapIconObject(const UObject* IconObject) {
}

void AZoneMapViewer::RemoveMapIcon(const FZoneMapIconInfo& IconInfo) {
}

void AZoneMapViewer::RemoveActorsFromZoneMapView() {
}

void AZoneMapViewer::RefreshMapIconObject(const UObject* IconObject) {
}

void AZoneMapViewer::OnZoneMapMeshDataLoaded() {
}

void AZoneMapViewer::OnPlayerSaveGameLoaded() {
}

void AZoneMapViewer::OnPlayerProfileChanged() {
}

void AZoneMapViewer::OnPlanetClassLoaded() {
}

void AZoneMapViewer::OnPlanetAddOnPOIsLoaded() {
}

void AZoneMapViewer::OnMinimapIconComponentUpdateTracking(UOakMinimapIconComponent* MinimapIconComponent) {
}

void AZoneMapViewer::OnMinimapIconComponentEndTracking(UOakMinimapIconComponent* MinimapIconComponent) {
}

void AZoneMapViewer::OnMinimapIconComponentBeginTracking(UOakMinimapIconComponent* MinimapIconComponent) {
}

void AZoneMapViewer::NotifyTransitioning(bool bTransitioning) {
}

void AZoneMapViewer::NotifyPOIZoneHighlighted(const UObject* POIIcon, const UZoneMapData* POIZone, bool bSelected) {
}

void AZoneMapViewer::NotifyPOIPlanetHighlighted(const UObject* POIIcon, UPlanetData* POIPlanet, bool bSelected) {
}

void AZoneMapViewer::NotifyPOIIconHighlighted(const UObject* POIIcon, const FZoneMapPOIEntry& POIData, bool bSelected) {
}

void AZoneMapViewer::NotifyMissionWaypointIconHighlighted(const UObject* WaypointIcon, const FZoneMapMissionWaypointEntry& WaypointData, bool bSelected) {
}

void AZoneMapViewer::NotifyDeployedVehicleHighlighted(const UObject* POIIcon, AOakVehicle* TargetedVehicle, bool bSelected) {
}

void AZoneMapViewer::NotifyChallengeIconHighlighted(const UObject* ChallengeIcon, const FZoneMapChallengeEntry& ChallengeData, bool bSelected) {
}

void AZoneMapViewer::LoadPlanetForLevel(UPlanetData* PlanetToLoad) {
}

void AZoneMapViewer::LoadMapForLevel(UZoneMapData* ZoneMapToLoad, bool bSetAsCurrent) {
}

bool AZoneMapViewer::K2_UpdateTransforms_Implementation(float DeltaSeconds) {
    return false;
}

bool AZoneMapViewer::K2_UpdatePOISphereRadii_Implementation() {
    return false;
}

bool AZoneMapViewer::K2_UpdateMiniMapTransforms_Implementation(float DeltaSeconds) {
    return false;
}



















bool AZoneMapViewer::K2_GetRotationYawTarget_Implementation(float DeltaSeconds, float YawMin, float YawMax) {
    return false;
}

bool AZoneMapViewer::K2_GetRotationPitchTarget_Implementation(float DeltaSeconds) {
    return false;
}

bool AZoneMapViewer::K2_GetNewTransformTarget_Implementation(float DeltaSeconds, FVector TransformMin, FVector TransformMax, float TransformBuffer, float GlobalTransformScale, float ZoomDelta) {
    return false;
}

bool AZoneMapViewer::K2_GetNewScaleTarget_Implementation(float DeltaSeconds, float& ZoomDelta) {
    return false;
}





bool AZoneMapViewer::IsVisible() const {
    return false;
}

bool AZoneMapViewer::IsViewingCurrentLevel() const {
    return false;
}

bool AZoneMapViewer::IsCurrentLevelLoaded() {
    return false;
}

void AZoneMapViewer::InitializeZoneMapMesh() {
}

void AZoneMapViewer::InitializeZoneMapForLevel() {
}

void AZoneMapViewer::InitializeGalaxyMapMesh() {
}

void AZoneMapViewer::InitializeCompassAndGrid() {
}

void AZoneMapViewer::HideZoneMap() {
}

UZoneMapMeshData* AZoneMapViewer::GetZoneMeshData() {
    return NULL;
}

void AZoneMapViewer::GetZoneChallenges(UChallengeCategoryData* ChallengeCategory, TArray<FZoneMapChallengeQuery>& ZoneChallenges) {
}

FZoneMapIconInfo AZoneMapViewer::GetTargetInfo() {
    return FZoneMapIconInfo{};
}

void AZoneMapViewer::GetNewTransformTargetNative(float DeltaSeconds, FVector TransformMin, FVector TransformMax, float TransformBuffer, float GlobalTransformScale, float ZoomDelta) {
}

void AZoneMapViewer::GetNewScaleTargetNative(float DeltaSeconds, float& ZoomDelta, float ScaleMin, float ScaleMax, float ScaleRate) {
}

void AZoneMapViewer::GetNewRotationYawTargetNative(float DeltaSeconds, float YawMin, float YawMax) {
}

void AZoneMapViewer::GetNewRotationPitchTargetNative(float DeltaSeconds) {
}

UTexture* AZoneMapViewer::GetMiniMapTexture() {
    return NULL;
}

EZoneMapViewerState AZoneMapViewer::GetMapState() const {
    return EZoneMapViewerState::Level;
}

UTexture* AZoneMapViewer::GetMainViewTexture() {
    return NULL;
}

void AZoneMapViewer::GatherZoneMapDecorationActors(TArray<AActor*>& Actors) const {
}

void AZoneMapViewer::EchoDeviceOpened() {
}

void AZoneMapViewer::EchoDeviceClosed() {
}

void AZoneMapViewer::DeferredSetStatePlanet() {
}

void AZoneMapViewer::DeferredSetStateLevel() {
}

void AZoneMapViewer::DeferredRegistrationWithMissionTracker() {
}

void AZoneMapViewer::DeferredRegistrationWithIconTracker() {
}

void AZoneMapViewer::DeferredRegistrationWithFriendStatusSystem() {
}

void AZoneMapViewer::DeferredRegistrationWithChallengeManager() {
}

void AZoneMapViewer::CheckAndAdjustCaptureTextureSize() {
}

void AZoneMapViewer::ChallengesRegistered() {
}

void AZoneMapViewer::AddPOIIcons() {
}

void AZoneMapViewer::AddPlayerIcons(bool AllPlayers) {
}

UMapIconAnchor* AZoneMapViewer::AddMapIcon(FZoneMapIconInfo& IconInfo, UOakZoneMapIcon* NewZoneMapIcon, UZoneMapPOITypeData* POIType) {
    return NULL;
}

void AZoneMapViewer::AddFriendIcons() {
}

void AZoneMapViewer::AddDecorationMeshs() {
}

void AZoneMapViewer::AddChallengeIcons() {
}

void AZoneMapViewer::AddActorToZoneMapView(AActor* NewViewActor) {
}

AZoneMapViewer::AZoneMapViewer() {
    this->bEchoMenuOpen = false;
    this->bShowingZoneMap = false;
    this->bShowingMiniMap = false;
    this->MouseMaxPanSpeed = 10.00f;
    this->MouseMaxRotateSpeed = 10.00f;
    this->MouseZoomSpeed = 10.00f;
    this->MouseMaxZoomSpeed = 4.00f;
    this->ZoneMapDecorationTag = TEXT("ZoneMap");
    this->ZoneMapInputData = NULL;
    this->MissionPOIActorClass = NULL;
    this->MissionPOIAreaComponentClass = NULL;
    this->ChallengePOIActorClass = NULL;
    this->LocalPlayerIcon = NULL;
    this->LocalPlayerIconMaterial = NULL;
    this->bUseActorPOIs = false;
    this->DecorationMeshMaterial = NULL;
    this->GridBaseMesh = NULL;
    this->GridBaseMaterial = NULL;
    this->WaypointMeshMaterial = NULL;
    this->POITargetTraceLength = 1000000.00f;
    this->ZoomSpeedModifierTuning = 3.00f;
    this->DistortionRadiusMultiplier = 0.00f;
    this->DistortionRadiusMaskMultiplier = 0.00f;
    this->HologramDistortionMultiplier = 0.00f;
    this->DynamicPOIClass = NULL;
    this->MiniMapScale = 1.00f;
    this->MiniMapPitch = 30.00f;
    this->MiniMapOcclusionScale = 0.00f;
    this->MiniMap2DOcclusionScale = 0.00f;
    this->MiniMapBlendMode = BLEND_Opaque;
    this->bDeferLevelMapSetState = false;
    this->bDeferMapListSetup = false;
    this->ZoneMapRootComponent = NULL;
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    this->MinimapSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("MinimapSpringArm"));
    this->PlanetRootComponent = NULL;
    this->GalaxyRootComponent = NULL;
    this->MissionIconClass = NULL;
    this->bHideMissionAreaWaypoint = false;
    this->LevelMeshData = NULL;
    this->PlanetClass = NULL;
    this->InputDevice = EGbxMenuInputDevice::Gamepad;
    this->POISelectionDistance = 0.00f;
    this->FocusedPOI = NULL;
    this->FocusedPOIDistanceRatio = 0.00f;
    this->MovementMode = EZoneMapMovementMode::Direct;
    this->bDisableMovementInput = false;
    this->ZoomInAxis = 0.00f;
    this->ZoomOutAxis = 0.00f;
    this->LeftStickAxisX = 0.00f;
    this->LeftStickAxisY = 0.00f;
    this->RightStickAxisX = 0.00f;
    this->RightStickAxisY = 0.00f;
    this->AxisDeadzone = 0.10f;
    this->POIMovementSpeedScale = 1.00f;
    this->RotationYawTarget = 0.00f;
    this->RotationPitchTarget = 30.00f;
    this->InterpolationAlpha = 0.00f;
    this->ScaleValue = 0.00f;
    this->ScaleValueTarget = 2.50f;
    this->PlayerMoved = true;
    this->GridMeshComponent = NULL;
    this->GalaxyMeshComponent = NULL;
    this->GridDMI = NULL;
    this->LastLevelMapMeshCount = 0;
    this->LastLevelMapDMICount = 0;
    this->LastZoneViewLevelMapDMICount = 0;
    this->bLevelMeshDataLoaded = false;
    this->PostProcessDMI = NULL;
    this->WaypointPathDMI = NULL;
    this->WaypointSpline = NULL;
    this->WaypointMesh = NULL;
    this->FogOfDiscoveryTexture = NULL;
    this->FogOfDiscoveryComponent = NULL;
    this->SceneCapture_MainView = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture_MainView"));
    this->SceneCapture_MiniMap = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCapture_MiniMap"));
    this->ZoneMapRenderTarget = NULL;
    this->MinimapRenderTarget = NULL;
    this->ZoneMapDisplayMaterialInstance = NULL;
    this->ZoneMapTraceHasHit = false;
    this->MaxHeight = 0.00f;
    this->ZoomInputEased = 0.00f;
    this->AdjustPivotAndTargetLength = false;
    this->bDisableMenuNotification = false;
    this->bSanctuaryIsHighlighted = false;
    this->OakProfile = NULL;
    this->bDisableAutoPOI = false;
}

