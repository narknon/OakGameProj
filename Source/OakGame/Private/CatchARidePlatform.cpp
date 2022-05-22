#include "CatchARidePlatform.h"
#include "SocketComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

class UPrimitiveComponent;
class AOakVehicle;
class AActor;


void ACatchARidePlatform::OnSafeZoneEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACatchARidePlatform::OnSafeZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ACatchARidePlatform::GetPlatformBlocked(AActor* ActorToIgnore, bool bForSmallVehicle) {
    return false;
}

AOakVehicle* ACatchARidePlatform::GetOwnedVehicleOnPlatform(AActor* TestOwner, bool bOnlySpawnedByCAR) {
    return NULL;
}



ACatchARidePlatform::ACatchARidePlatform() {
    this->PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
    this->PlatformSafeZone = CreateDefaultSubobject<UBoxComponent>(TEXT("PlatformSafeZone"));
    this->PlatformSmallVehicleSafeZone1 = CreateDefaultSubobject<UBoxComponent>(TEXT("SmallVehicleSafeZone1"));
    this->SmallVehicleSpawnSocket1 = CreateDefaultSubobject<USocketComponent>(TEXT("SmallVehicleSocket1"));
    this->PlatformSmallVehicleSafeZone2 = CreateDefaultSubobject<UBoxComponent>(TEXT("SmallVehicleSafeZone2"));
    this->SmallVehicleSpawnSocket2 = CreateDefaultSubobject<USocketComponent>(TEXT("SmallVehicleSocket2"));
    this->ScanDuration = 2.00f;
    this->EjectStartDuration = 0.50f;
    this->IsSupportScanning = true;
    this->MinSpeedForScan = 10.00f;
    this->VehicleInScan = NULL;
}

