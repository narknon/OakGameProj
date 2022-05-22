#pragma once
#include "CoreMinimal.h"
#include "OakVehicleManagerSettings.generated.h"

USTRUCT(BlueprintType)
struct FOakVehicleManagerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float OakVehicleManagerUpdateTime;
    
    UPROPERTY(EditAnywhere)
    float TimeBeforeStartDamaging;
    
    UPROPERTY(EditAnywhere)
    float DamagePercentBySecond;
    
    UPROPERTY(EditAnywhere)
    float TimeBeforeDigistructOut;
    
    UPROPERTY(EditAnywhere)
    float TimeBeforeExplode;
    
    UPROPERTY(EditAnywhere)
    float DistanceToDigistruct;
    
    UPROPERTY(EditAnywhere)
    float NavCorrecterSearchRadius;
    
    UPROPERTY(EditAnywhere)
    float NavCorrecterDestroyDelay;
    
    OAKGAME_API FOakVehicleManagerSettings();
};

