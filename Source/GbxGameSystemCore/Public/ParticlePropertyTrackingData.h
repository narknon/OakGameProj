#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ParticlePropertyTrackingData.generated.h"

UCLASS()
class UParticlePropertyTrackingData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float MinValue;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    bool bStopTrackingWhenMinReached;
    
    UPROPERTY(EditDefaultsOnly)
    bool bStopTrackingWhenMaxReached;
    
    UPROPERTY(EditDefaultsOnly)
    bool bStopTrackingWhenPrimaryCharacterIsDeadOrNone;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDestroyParticleWhenTrackingStopped;
    
    UPROPERTY(EditDefaultsOnly)
    bool bChangeValueOverTime;
    
    UPROPERTY(EditDefaultsOnly)
    float ValueChangePerSecond;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPauseChangeOnUpdate;
    
    UPROPERTY(EditDefaultsOnly)
    float PauseDuration;
    
    UParticlePropertyTrackingData();
};

