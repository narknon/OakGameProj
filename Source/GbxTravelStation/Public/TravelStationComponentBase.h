#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TravelStationComponentBase.generated.h"

class UTravelStationData;
class UObject;
class APawn;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXTRAVELSTATION_API UTravelStationComponentBase : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FString TravelDataSelection;
    
    UPROPERTY()
    FName TravelDataClassName;
    
    UTravelStationComponentBase();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TravelToStation(UObject* WorldContextObject, UTravelStationData* DestinationStationData, bool bImmediate, APawn* ActivatingPawn, bool bDisallowLocalTravel);
    
    UFUNCTION(BlueprintCallable)
    bool GetAvailableSpawnLocation(AActor* ActorForSpawnLocation, FVector& SpawnLocation, FRotator& SpawnRotation, bool bTestOnly, bool bForVehicle);
    
    UFUNCTION()
    static void EnumerateValidTravelStation(UObject* TravelStationObject, TArray<FString>& OutItems);
    
};

