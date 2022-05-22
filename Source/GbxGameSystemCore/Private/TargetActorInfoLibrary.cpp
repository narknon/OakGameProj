#include "TargetActorInfoLibrary.h"
#include "Templates/SubclassOf.h"

class AActor;
class UTargetingComponent;
class UAISense;

bool UTargetActorInfoLibrary::IsSenseActive(const FTargetActorInfo& Info, TSubclassOf<UAISense> Sense) {
    return false;
}

bool UTargetActorInfoLibrary::IsExistingTarget(const FTargetActorInfo& Info) {
    return false;
}

bool UTargetActorInfoLibrary::IsDirectlySensed(const FTargetActorInfo& Info) {
    return false;
}

bool UTargetActorInfoLibrary::HasStimulusForSense(const FTargetActorInfo& Info, TSubclassOf<UAISense> Sense) {
    return false;
}

bool UTargetActorInfoLibrary::HasAnyKnownStimuli(const FTargetActorInfo& Info) {
    return false;
}

FVector UTargetActorInfoLibrary::GetStimulusLocation(const FTargetActorInfo& Info, TSubclassOf<UAISense> Sense) {
    return FVector{};
}

bool UTargetActorInfoLibrary::GetStimulusForSense(const FTargetActorInfo& Info, TSubclassOf<UAISense> Sense, FAIStimulus& Stimulus) {
    return false;
}

FVector UTargetActorInfoLibrary::GetReceiverLocation(const FTargetActorInfo& Info, TSubclassOf<UAISense> Sense) {
    return FVector{};
}

FVector UTargetActorInfoLibrary::GetBestStimulusLocation(const FTargetActorInfo& Info, float& Age) {
    return FVector{};
}

bool UTargetActorInfoLibrary::GetBestStimulus(const FTargetActorInfo& Info, FAIStimulus& Stimulus) {
    return false;
}

FVector UTargetActorInfoLibrary::GetBestAttackLocation(const FTargetActorInfo& Info, FVector& OutTargetVelocity) {
    return FVector{};
}

UTargetingComponent* UTargetActorInfoLibrary::FindActorTargetingComponent(AActor* Actor) {
    return NULL;
}

UTargetActorInfoLibrary::UTargetActorInfoLibrary() {
}

