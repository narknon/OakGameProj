#pragma once
#include "CoreMinimal.h"
#include "AIDodgeBasicData.h"
#include "GbxParam.h"
#include "AIDodgeData.generated.h"

USTRUCT(BlueprintType)
struct FAIDodgeData : public FAIDodgeBasicData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxParam Chance;
    
    UPROPERTY(EditAnywhere)
    FGbxParam Delay;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveAllDelay;
    
    UPROPERTY(EditAnywhere)
    float MaxAngle;
    
    UPROPERTY(EditAnywhere)
    bool bLimitAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(EditAnywhere)
    bool bLimitDistance;
    
    UPROPERTY(EditAnywhere)
    float MinShooterDistance;
    
    UPROPERTY(EditAnywhere)
    bool bLimitShooterDistance;
    
    GBXGAMESYSTEMCORE_API FAIDodgeData();
};

