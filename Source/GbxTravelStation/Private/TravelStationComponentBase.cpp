#include "TravelStationComponentBase.h"

class UTravelStationData;
class UObject;
class APawn;
class AActor;

bool UTravelStationComponentBase::TravelToStation(UObject* WorldContextObject, UTravelStationData* DestinationStationData, bool bImmediate, APawn* ActivatingPawn, bool bDisallowLocalTravel) {
    return false;
}

bool UTravelStationComponentBase::GetAvailableSpawnLocation(AActor* ActorForSpawnLocation, FVector& SpawnLocation, FRotator& SpawnRotation, bool bTestOnly, bool bForVehicle) {
    return false;
}

void UTravelStationComponentBase::EnumerateValidTravelStation(UObject* TravelStationObject, TArray<FString>& OutItems) {
}

UTravelStationComponentBase::UTravelStationComponentBase() {
}

