#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeleportDestinationActor.generated.h"

class UTravelStationResurrectComponent;
class UObject;
class ATeleportDestinationActor;

UCLASS(Abstract)
class GBXTRAVELSTATION_API ATeleportDestinationActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UTravelStationResurrectComponent* ResurrectComponent;
    
public:
    ATeleportDestinationActor();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void TeleportPlayersToDestination(UObject* WorldContextObject, ATeleportDestinationActor* Destination);
    
};

