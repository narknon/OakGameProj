#include "OakPlayerState.h"
#include "Net/UnrealNetwork.h"
#include "OakLevelSyncMessage.h"

class UPlayerClassIdentifier;

void AOakPlayerState::ServerSetShiftUniqueId_Implementation(const FUniqueNetIdRepl& InShiftUniqueId) {
}
bool AOakPlayerState::ServerSetShiftUniqueId_Validate(const FUniqueNetIdRepl& InShiftUniqueId) {
    return true;
}

void AOakPlayerState::ServerSetPlayerClass_Implementation(UPlayerClassIdentifier* InPlayerClass) {
}
bool AOakPlayerState::ServerSetPlayerClass_Validate(UPlayerClassIdentifier* InPlayerClass) {
    return true;
}

void AOakPlayerState::ServerSetIsHeadsetPresent_Implementation(bool InHeadsetPresent) {
}
bool AOakPlayerState::ServerSetIsHeadsetPresent_Validate(bool InHeadsetPresent) {
    return true;
}

void AOakPlayerState::ServerReportClientMatchmakingError_Implementation(EMatchmakingError Error) {
}
bool AOakPlayerState::ServerReportClientMatchmakingError_Validate(EMatchmakingError Error) {
    return true;
}

void AOakPlayerState::ServerPlayerDisplayDataChanged_Implementation() {
}
bool AOakPlayerState::ServerPlayerDisplayDataChanged_Validate() {
    return true;
}

void AOakPlayerState::OnRep_ShiftUniqueId() {
}

void AOakPlayerState::OnRep_PlayerLocation() {
}

void AOakPlayerState::OnRep_PlayerLevel() {
}

void AOakPlayerState::OnRep_PlayerHeadsetPresent() {
}

void AOakPlayerState::OnRep_PlayerDownStateExitReason() {
}

void AOakPlayerState::OnRep_PlayerClass() {
}

void AOakPlayerState::OnRep_IsRaidSpectating() {
}

FRotator AOakPlayerState::GetTargetActorRotation() const {
    return FRotator{};
}

FVector AOakPlayerState::GetTargetActorLocation() const {
    return FVector{};
}

void AOakPlayerState::ClientMatchmakingConfirmPendingReservation_Implementation(FName NewBeaconName, const FString& NewBeaconURL, const FString& ActivityGuid, bool bBackfillOnly) {
}

void AOakPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakPlayerState, ShiftUniqueId);
    DOREPLIFETIME(AOakPlayerState, HealthInformation);
    DOREPLIFETIME(AOakPlayerState, Level);
    DOREPLIFETIME(AOakPlayerState, PlayerClass);
    DOREPLIFETIME(AOakPlayerState, bIsRaidSpectating);
    DOREPLIFETIME(AOakPlayerState, HealthState);
    DOREPLIFETIME(AOakPlayerState, bHasShieldEquipped);
    DOREPLIFETIME(AOakPlayerState, MusicThreatLevel);
    DOREPLIFETIME(AOakPlayerState, bDuelingEnabled);
    DOREPLIFETIME(AOakPlayerState, TradeRequestReceptionType);
    DOREPLIFETIME(AOakPlayerState, bHasPossessionOfPawn);
    DOREPLIFETIME(AOakPlayerState, bHasFullControlOfPawn_ForSonyRTMP);
    DOREPLIFETIME(AOakPlayerState, bPhotoModeActive);
    DOREPLIFETIME(AOakPlayerState, PlayerCharacterGuid);
    DOREPLIFETIME(AOakPlayerState, bIsHeadsetPresent);
    DOREPLIFETIME(AOakPlayerState, PlayerLocation);
    DOREPLIFETIME(AOakPlayerState, PlayerRotation);
}

AOakPlayerState::AOakPlayerState() {
    this->Level = 0;
    this->PlayerClass = NULL;
    this->bIsRaidSpectating = false;
    this->HealthState = EHealthState::Healthy;
    this->bHasShieldEquipped = false;
    this->MusicThreatLevel = 0.00f;
    this->bDuelingEnabled = true;
    this->TradeRequestReceptionType = ETradeRequestReceptionType::All;
    this->bHasPossessionOfPawn = false;
    this->bHasFullControlOfPawn_ForSonyRTMP = false;
    this->LevelSyncMessageClass = UOakLevelSyncMessage::StaticClass();
    this->bPhotoModeActive = false;
    this->bIsHeadsetPresent = false;
}

