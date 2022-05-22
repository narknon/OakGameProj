#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersChangeCountdownEventDelegate.h"
#include "GameFramework/Actor.h"
#include "CrewQuartersActorInterface.h"
#include "CrewQuartersChangedEventDelegate.h"
#include "CrewQuartersCountdownActor.generated.h"

class ACrewQuartersRoom;
class ADynamicRoomBase;

UCLASS()
class ACrewQuartersCountdownActor : public AActor, public ICrewQuartersActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCrewQuartersChangeCountdownEvent OnCountdownTimeUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FCrewQuartersChangedEvent OnCrewQuartersChanging;
    
    UPROPERTY(BlueprintReadOnly)
    ACrewQuartersRoom* OwningRoom;
    
    ACrewQuartersCountdownActor();
    UFUNCTION()
    void OnRoomChanging(ADynamicRoomBase* ChangingRoom);
    
    UFUNCTION()
    void OnRoomChangeCountdown(float CountdownTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

