#include "RecoilControlComponent.h"

void URecoilControlComponent::ServerApplyInput_Implementation(uint32 CompressedInputRot) {
}
bool URecoilControlComponent::ServerApplyInput_Validate(uint32 CompressedInputRot) {
    return true;
}

URecoilControlComponent::URecoilControlComponent() {
    this->bServerSimulatesRecoil = false;
}

