#include "OakVehicleProjectile.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GbxProjectileMovementComponent.h"

class UPrimitiveComponent;
class AActor;

void AOakVehicleProjectile::ProximityDetectorOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AOakVehicleProjectile::ProximityDetectorHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AOakVehicleProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

AOakVehicleProjectile::AOakVehicleProjectile() {
    this->FuseTime = 2.00f;
    this->InitOverlapTime = 0.20f;
    this->Vehicle = NULL;
    this->MeshProjectile = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh3P"));
    this->ProjectileMovement = CreateDefaultSubobject<UGbxProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    this->ProximityDetector = CreateDefaultSubobject<USphereComponent>(TEXT("ProximityDetector"));
    this->MainCollision = CreateDefaultSubobject<USphereComponent>(TEXT("MainCollision"));
    this->ProjectileData = NULL;
}

