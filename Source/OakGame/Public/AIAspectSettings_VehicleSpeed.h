#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "RubberbandSpeed.h"
#include "AIAspectSettings_VehicleSpeed.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_VehicleSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam WantedSpeed;
    
    UPROPERTY()
    bool bUseWantedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam WantedSteering;
    
    UPROPERTY()
    bool bUseWantedSteering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam UseBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam ForceReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam GoBackward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam ForceHandbrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam SpeedHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRubberbandSpeed RubberbandSpeed;
    
    UPROPERTY()
    bool bUseRubberbandSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam Duration;
    
    UPROPERTY()
    bool bUseDuration;
    
    OAKGAME_API FAIAspectSettings_VehicleSpeed();
};

