#include "MotionControlLibrary.h"

float UMotionControlLibrary::UpdateSpeed(float CurrentSpeed, float TargetSpeed, float Acceleration, float DeltaTime) {
    return 0.0f;
}

FRotator UMotionControlLibrary::Spin(const FRotator& CurrentRotation, float RotationRate, FVector RotationAxis, float DeltaTime) {
    return FRotator{};
}

UMotionControlLibrary::UMotionControlLibrary() {
}

