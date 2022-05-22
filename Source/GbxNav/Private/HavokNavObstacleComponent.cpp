#include "HavokNavObstacleComponent.h"
#include "HavokNavObstacle.h"

void UHavokNavObstacleComponent::UnlockObstacle(FName Reason) {
}

void UHavokNavObstacleComponent::LockObstacle(FName Reason) {
}

UHavokNavObstacleComponent::UHavokNavObstacleComponent() {
    this->Obstacle = CreateDefaultSubobject<UHavokNavObstacle>(TEXT("Obstacle"));
}

