#include "CarnivoraTread.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SkeletalMeshComponent.h"

class UPrimitiveComponent;
class AActor;

void ACarnivoraTread::OnComponentHitCallback(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

ACarnivoraTread::ACarnivoraTread() {
    this->MinAngle = -30.00f;
    this->MaxAngle = 75.00f;
    this->TreadSpline = CreateDefaultSubobject<USplineComponent>(TEXT("TrackSpline"));
    this->NumberOfPlate = 30;
    this->PlateMesh = NULL;
    this->TreadSKComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TreadSKComponent"));
    this->WheelRotationForward = 0.00f;
    this->WheelRotationBackward = 0.00f;
    this->InstancedPlates = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedPlates"));
    this->DotRatioCollision = 0.95f;
    this->WheelSplineIndexKey[0] = 4;
    this->WheelSplineIndexKey[1] = 4;
    this->WheelSplineIndexKey[2] = 4;
    this->WheelSplineIndexKey[3] = 4;
    this->SuspensionWheelRadius = 240.00f;
}

