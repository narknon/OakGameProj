#include "GbxAnimStateManager_AINav.h"

void UGbxAnimStateManager_AINav::Owner_PostBeginPlay() {
}

UGbxAnimStateManager_AINav::UGbxAnimStateManager_AINav() {
    this->Type = ENavAnimState::None;
    this->AnimTable = NULL;
    this->GbxCharAnimInstance = NULL;
    this->GbxCharMoveComponent = NULL;
    this->ResolvedBlendSpace = NULL;
    this->ResolvedBlendSpaceYawMin = 340282346638528859811704183484516925440.00f;
    this->ResolvedBlendSpaceYawMax = -340282346638528859811704183484516925440.00f;
    this->BlendSpace = NULL;
}

