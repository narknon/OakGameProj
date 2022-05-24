#include "GbxPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "ScreenParticleManagerComponent.h"
#include "RecentDamageTrackingComponent.h"

class UTeam;
class UGbxProfile;
class UTargetableComponent;
class APawn;
class UCinematicModeData;
class UTargetingComponent;
class UTeamComponent;
class AGbxCharacter;
class UGbxPerceptionComponent;
class UFeedbackData;
class UWwiseEvent;
class UObject;
class UDamageData;
class UGbxFeedbackData;

void AGbxPlayerController::SetTeam(UTeam* Team) const {
}

void AGbxPlayerController::ServerRequestPawnSlotDetach_Implementation(APawn* Occupant) {
}
bool AGbxPlayerController::ServerRequestPawnSlotDetach_Validate(APawn* Occupant) {
    return true;
}

void AGbxPlayerController::ServerCanSplitscreenJoin_Implementation(int32 ControllerId) {
}
bool AGbxPlayerController::ServerCanSplitscreenJoin_Validate(int32 ControllerId) {
    return true;
}

void AGbxPlayerController::PushCinematicMode(UCinematicModeData* InCinematicMode) {
}

void AGbxPlayerController::PopCinematicMode(UCinematicModeData* InCinematicMode) {
}

void AGbxPlayerController::OnRep_PrimaryCharacter() {
}

void AGbxPlayerController::OnRep_CinematicMode() {
}

bool AGbxPlayerController::IsUsingGamepad() const {
    return false;
}

UTeamComponent* AGbxPlayerController::GetTeamComponent() const {
    return NULL;
}

UTeam* AGbxPlayerController::GetTeam() const {
    return NULL;
}

UTargetingComponent* AGbxPlayerController::GetTargetingComponent() const {
    return NULL;
}

UTargetableComponent* AGbxPlayerController::GetTargetableComponent() const {
    return NULL;
}

AGbxCharacter* AGbxPlayerController::GetPrimaryCharacter() const {
    return NULL;
}

void AGbxPlayerController::GetPlayerViewportSize(int32& SizeX, int32& SizeY) const {
}

void AGbxPlayerController::GetPlayerViewportOffset(int32& OffsetX, int32& OffsetY) const {
}

UGbxProfile* AGbxPlayerController::GetPlayerProfile() const {
    return NULL;
}

UGbxPerceptionComponent* AGbxPlayerController::GetGbxPerceptionComponent() const {
    return NULL;
}

bool AGbxPlayerController::DeprojectViewportPositionToWorld(float ViewportX, float ViewportY, FVector& WorldLocation, FVector& WorldDirection, bool bUseForegroundProjection) const {
    return false;
}

void AGbxPlayerController::DebugCategory(FName CategoryName) {
}

void AGbxPlayerController::ClientStopFeedback_Implementation(UFeedbackData* Data) {
}

void AGbxPlayerController::ClientPlayWwiseEvent_Implementation(UWwiseEvent* Event) {
}

void AGbxPlayerController::ClientPlayFeedback_Implementation(UFeedbackData* Data, float Scale, bool bLoop, UObject* SourceContext) {
}

void AGbxPlayerController::ClientPerformFeedbackAtLocation_Implementation(UFeedbackData* FeedbackData, FVector SourceLocation, bool bLoop, UObject* SourceContext, FRangedDistanceOverrides RangedOverrides) {
}

void AGbxPlayerController::ClientPerformFeedback_Implementation(UFeedbackData* FeedbackData, UObject* SourceContext) {
}

void AGbxPlayerController::ClientNotifyActivateCheckpoint_Implementation() {
}

void AGbxPlayerController::ClientCanSplitscreenJoin_Implementation(int32 ControllerId, bool bCanJoin) {
}
bool AGbxPlayerController::ClientCanSplitscreenJoin_Validate(int32 ControllerId, bool bCanJoin) {
    return true;
}

void AGbxPlayerController::ClientApplyDamageDataPresentation_Implementation(const UDamageData* DamageData, const FPlayerDamageDataPresentation& PlayerPresentation) {
}

void AGbxPlayerController::Client_StopGbxFeedback_Implementation(const UGbxFeedbackData* Data, UObject* SourceContext) {
}

void AGbxPlayerController::Client_PlayGbxFeedback_Implementation(const UGbxFeedbackData* Data, bool bIs3D, bool bLoop, float Scale, UObject* SourceContext, FVector SourceLocation, float EffectFalloffMinDistance, float EffectFalloffMaxDistance) {
}

void AGbxPlayerController::ClearCinematicMode() {
}

void AGbxPlayerController::ClearAndSetCinematicMode(UCinematicModeData* InCinematicMode) {
}

void AGbxPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGbxPlayerController, PrimaryCharacter);
    DOREPLIFETIME(AGbxPlayerController, CinematicMode);
}

AGbxPlayerController::AGbxPlayerController() {
    this->GbxCharacter = NULL;
    this->PrimaryCharacter = NULL;
    this->RecentDamageTrackingComponent = CreateDefaultSubobject<URecentDamageTrackingComponent>(TEXT("DefaultRecentDamageTrackingComponent"));
    this->CurrentProfile = NULL;
    this->InputComponentClass = NULL;
    this->PlayerInputClass = NULL;
    this->AimAssistStrategyClass = NULL;
    this->CachedGlyphMode = EGbxGlyphSetOption::AutoDetect;
    this->TargetingComponent = NULL;
    this->TargetableComponent = NULL;
    this->TeamComponent = NULL;
    this->PerceptionComponent = NULL;
    this->FirstPersonComponent = NULL;
    this->AimAssistStrategy = NULL;
    this->WwiseListener = NULL;
    this->bUsingGamepad = false;
    this->CinematicMode = NULL;
    this->ScreenParticleManagerComponent = CreateDefaultSubobject<UScreenParticleManagerComponent>(TEXT("ScreenParticleManager"));
}

