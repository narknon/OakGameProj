#include "CameraModesFunctionLibrary.h"

class APlayerController;
class UCameraModeSetData;

void UCameraModesFunctionLibrary::SetCameraMode(APlayerController* Controller, FName ModeName, float BlendTimeOverride, bool bTeleport, bool bForceResetMode) {
}

void UCameraModesFunctionLibrary::ResetCameraRotation(APlayerController* Controller, const FRotator& NewRotation) {
}

void UCameraModesFunctionLibrary::RemoveCameraModeSet(APlayerController* Controller, UCameraModeSetData* ModeSet) {
}

void UCameraModesFunctionLibrary::PushCameraMode(APlayerController* Controller, FName ModeName, float BlendTimeOverride, bool bTeleport) {
}

void UCameraModesFunctionLibrary::PopCameraMode(APlayerController* Controller, FName ModeName, float BlendTimeOverride, bool bTeleport) {
}

void UCameraModesFunctionLibrary::ApplyCameraRotation(APlayerController* Controller, const FRotator& DeltaRotation) {
}

void UCameraModesFunctionLibrary::AddCameraModeSet(APlayerController* Controller, UCameraModeSetData* ModeSet) {
}

UCameraModesFunctionLibrary::UCameraModesFunctionLibrary() {
}

