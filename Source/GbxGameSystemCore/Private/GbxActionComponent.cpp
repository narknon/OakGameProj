#include "GbxActionComponent.h"
#include "Templates/SubclassOf.h"

class UGbxAction;
class UGbxAction_Loop;
class UActorComponent;
class USceneComponent;

void UGbxActionComponent::UpdateActionRemoteServer_Implementation(FActionState_Base ActionData) {
}
bool UGbxActionComponent::UpdateActionRemoteServer_Validate(FActionState_Base ActionData) {
    return true;
}

void UGbxActionComponent::StopOnRemoteServer_Implementation(int32 ManagerRepId, const EGbxActionEndState& EndState) {
}
bool UGbxActionComponent::StopOnRemoteServer_Validate(int32 ManagerRepId, const EGbxActionEndState& EndState) {
    return true;
}

void UGbxActionComponent::StopLoopingActionClass(TSubclassOf<UGbxAction_Loop> ActionClass) {
}

void UGbxActionComponent::StopActionSlot(const FName ActionSlotName) {
}

void UGbxActionComponent::StopActions() {
}

void UGbxActionComponent::StopActionClass(TSubclassOf<UGbxAction> ActionClass) {
}

void UGbxActionComponent::PlayOnRemoteServer_Implementation(TSubclassOf<UGbxAction> ActionClass, FActionState_Base ActionData) {
}
bool UGbxActionComponent::PlayOnRemoteServer_Validate(TSubclassOf<UGbxAction> ActionClass, FActionState_Base ActionData) {
    return true;
}

void UGbxActionComponent::OnComponentUnregistered(UActorComponent* ActorComponent) {
}

void UGbxActionComponent::OnComponentDetached(USceneComponent* SceneComponent) {
}

void UGbxActionComponent::OnComponentAttached(USceneComponent* SceneComponent) {
}

void UGbxActionComponent::NotifyInterruptRequest() {
}

UGbxAction* UGbxActionComponent::K2_Play(TSubclassOf<UGbxAction> ActionClass) {
    return NULL;
}

bool UGbxActionComponent::K2_IsPlayingObj(UGbxAction* Action) const {
    return false;
}

UGbxAction* UGbxActionComponent::K2_GetActionBySlot(const FName ActionSlotName) const {
    return NULL;
}

UGbxAction* UGbxActionComponent::K2_GetActionByClass(TSubclassOf<UGbxAction> ActionClass) const {
    return NULL;
}

bool UGbxActionComponent::IsPlayingSlot(const FName& ActionSlotName) const {
    return false;
}

bool UGbxActionComponent::IsPlayingClass(TSubclassOf<UGbxAction> ActionClass) const {
    return false;
}

UGbxActionComponent::UGbxActionComponent() {
}

