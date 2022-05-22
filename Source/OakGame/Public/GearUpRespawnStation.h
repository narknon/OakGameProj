#pragma once
#include "CoreMinimal.h"
#include "CheckpointTravelStationObject.h"
#include "GearUpRespawnStation.generated.h"

UCLASS()
class OAKGAME_API AGearUpRespawnStation : public ACheckpointTravelStationObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Replicated)
    bool bAlreadyUsed;
    
    AGearUpRespawnStation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

