#include "ControlledMoveFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UControlledMove;
class AActor;

void UControlledMoveFunctionLibrary::StopControlledMove(AActor* Actor, TSubclassOf<UControlledMove> ControlledMove, bool bZeroVelocity, bool bInterrupted) {
}

bool UControlledMoveFunctionLibrary::StartControlledMove(AActor* Actor, TSubclassOf<UControlledMove> ControlledMove, AActor* Instigator, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, AActor* TargetActor, FVector TargetLocation) {
    return false;
}

bool UControlledMoveFunctionLibrary::IsPerformingSpecificControlledMove(AActor* Actor, TSubclassOf<UControlledMove> ControlledMove) {
    return false;
}

bool UControlledMoveFunctionLibrary::IsPerformingControlledMove(AActor* Actor) {
    return false;
}

UControlledMoveFunctionLibrary::UControlledMoveFunctionLibrary() {
}

