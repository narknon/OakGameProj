#pragma once
#include "CoreMinimal.h"
#include "MissionObserverInterface.h"
#include "ReplicatedMissionData.h"
#include "MissionObserverPlayerInterface.generated.h"

UINTERFACE()
class GBXMISSION_API UMissionObserverPlayerInterface : public UMissionObserverInterface {
    GENERATED_BODY()
};

class GBXMISSION_API IMissionObserverPlayerInterface : public IMissionObserverInterface {
    GENERATED_BODY()
public:
    UFUNCTION(Client, Reliable)
    virtual void ClientReceiveMissionData(const FReplicatedMissionData& MissionData) PURE_VIRTUAL(ClientReceiveMissionData,);
    
};

