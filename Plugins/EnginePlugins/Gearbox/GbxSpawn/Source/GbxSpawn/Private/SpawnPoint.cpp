#include "SpawnPoint.h"
#include "Components/SceneComponent.h"
#include "SpawnPointComponent.h"

void ASpawnPoint::SetSpawnStyleTag(FGameplayTag NewTag) {
}

void ASpawnPoint::ResetStretchPoint() {
}

FGameplayTag ASpawnPoint::GetSpawnStyleTag() const {
    return FGameplayTag{};
}

void ASpawnPoint::EnableSpawnPoint() {
}

void ASpawnPoint::DisableSpawnPoint() {
}

ASpawnPoint::ASpawnPoint() {
    this->SpawnRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->SpawnPointComponent = CreateDefaultSubobject<USpawnPointComponent>(TEXT("SpawnPointComponent"));
    this->TempRootFix = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnRoot"));
}

