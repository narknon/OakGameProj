#include "MainMenuCameraController.h"

class AActor;
class ACameraActor;

void AMainMenuCameraController::Setup(AActor* InLookAtActor, AActor* InSubjectActor, ACameraActor* InCameraActor) {
}

AMainMenuCameraController::AMainMenuCameraController() {
    this->MinZoomDistance = 200.00f;
    this->MaxZoomDistance = 1500.00f;
    this->ZoomSpeed = 200.00f;
    this->MinOffsetDistance = 25.00f;
    this->MaxOffsetDistance = 200.00f;
    this->MinFocusDistance = 200.00f;
    this->MaxFocusDistance = 1500.00f;
    this->MinFocalDistance = 40.00f;
    this->MaxFocalDistance = 30.00f;
    this->MaxPitchAngle = 40.00f;
    this->MinPitchAngle = 0.00f;
    this->RotationSpeed = 30.00f;
    this->LookAtActor = NULL;
    this->SubjectActor = NULL;
    this->CameraActor = NULL;
}

