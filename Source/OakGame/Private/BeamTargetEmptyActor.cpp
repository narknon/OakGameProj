#include "BeamTargetEmptyActor.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"

class AActor;

void ABeamTargetEmptyActor::SetBeamTarget(AActor* NewBeamTarget, float NewFollowLerpSpeed) {
}

void ABeamTargetEmptyActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABeamTargetEmptyActor, BeamTarget);
    DOREPLIFETIME(ABeamTargetEmptyActor, FollowLerpSpeed);
}

ABeamTargetEmptyActor::ABeamTargetEmptyActor() {
    this->SceneRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComp"));
    this->BeamTarget = NULL;
    this->FollowLerpSpeed = 0.00f;
}

