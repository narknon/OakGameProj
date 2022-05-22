#include "MissionIconComponent.h"
#include "Net/UnrealNetwork.h"

class UGbxCondition;

void UMissionIconComponent::SetIconState(TEnumAsByte<EMissionIconState> InState) {
}

bool UMissionIconComponent::SetIconEnabledCondition(UGbxCondition* EnabledCondition) {
    return false;
}

void UMissionIconComponent::SetDisabledState(bool bDisabled) {
}

void UMissionIconComponent::OnRep_Enabled(bool bPreviouslyEnabled) {
}

bool UMissionIconComponent::IsIconEnabled() {
    return false;
}

UClass* UMissionIconComponent::GetRequiredInterface() {
    return NULL;
}

bool UMissionIconComponent::EnabledConditionRequiresNativeClass() {
    return false;
}

void UMissionIconComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMissionIconComponent, bEnabled);
}

UMissionIconComponent::UMissionIconComponent() {
    this->IconEnabledCondition = NULL;
    this->WaypointRadius = 0;
    this->bHideAreaWaypoint = false;
    this->AreaComponentClassOverride = NULL;
    this->DrawStyle = EIconRadiusDrawStyle::Wire;
    this->AttractParticleTemplate = NULL;
    this->bSyncAttachedParticles = false;
    this->bAttachToWaypointSocket = true;
    this->bEnabled = false;
}

