#include "AdvancedInteractiveObject.h"
#include "Net/UnrealNetwork.h"
#include "UsableComponent.h"

class APlayerController;
class AActor;

void AAdvancedInteractiveObject::OnRep_bIsAnyoneInteracting() {
}






void AAdvancedInteractiveObject::OnLookedAwayFromByPlayer() {
}

void AAdvancedInteractiveObject::OnLookedAtByPlayer(APlayerController* InstigatingPlayer, bool bCanInteractWith, FVector NewUsableComponentImpactPoint, float NewUsableDistanceAway) {
}


void AAdvancedInteractiveObject::NotifyUsed(const FUseEvent& UseEvent) {
}

void AAdvancedInteractiveObject::HandleActorDestroyed(AActor* Actor) {
}

void AAdvancedInteractiveObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAdvancedInteractiveObject, bIsAnyoneInteracting);
}

AAdvancedInteractiveObject::AAdvancedInteractiveObject() {
    this->CameraData = NULL;
    this->CameraBlendInTime = 0.00f;
    this->CameraBlendOutTime = 0.00f;
    this->CameraExitTransitionDuration = 0.20f;
    this->DelayBeforeCameraExitTransitionStarts = 0.10f;
    this->bBringUpEchoDevice = true;
    this->OverrideEchoDeviceEquipDelay = -1.00f;
    this->bLockPlayerMovement = true;
    this->bLockPlayerWeaponUsage = true;
    this->bTrackNearbyPlayers = false;
    this->bHideHUDInstantly = true;
    this->ProxyActorClass = NULL;
    this->bEnableActorCulling = true;
    this->bIgnoreAssociatedNPCForCulling = false;
    this->UsableComponent = CreateDefaultSubobject<UUsableComponent>(TEXT("DefaultUsableComponent"));
    this->AIOMenuData = NULL;
    this->bUseParticleBackdrop = false;
    this->bUseDefaultParticleBackdrop = false;
    this->BackdropParticleSystem = NULL;
    this->BackdropParticleSystemOff = NULL;
    this->bIsAnyoneInInteractRange = false;
    this->bIsAnyoneInteracting = false;
    this->LookedAtByController = NULL;
    this->bUseProxyForPlayerAlert = true;
}

