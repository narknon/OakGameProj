#include "MineCart.h"
#include "HavokNavObstacleComponent.h"
#include "SplineMovementComponentDoubleLinked.h"

class UPrimitiveComponent;
class AActor;

void AMineCart::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

AMineCart::AMineCart() {
    this->SplineMovementComponent = CreateDefaultSubobject<USplineMovementComponentDoubleLinked>(TEXT("SplineMovementComponent"));
    this->HavokNavObstacleComponent = CreateDefaultSubobject<UHavokNavObstacleComponent>(TEXT("HavokNavObstacle"));
    this->PrimitiveComponent = NULL;
    this->CharacterImpulse = 1.00f;
    this->bCanBePushedByPlayer = true;
    this->bShouldCheckCollision = true;
}

