#pragma once
#include "CoreMinimal.h"
#include "EStandInActorType.h"
#include "MissionLogEchoDeviceSettings.generated.h"

class AGenericStandInActor;

USTRUCT(BlueprintType)
struct FMissionLogEchoDeviceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EStandInActorType StandInType;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AGenericStandInActor> StandInActorClass;
    
    UPROPERTY(EditAnywhere)
    FName StandInConfigName;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceIdleScreenName;
    
    OAKGAME_API FMissionLogEchoDeviceSettings();
};

