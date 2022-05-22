#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "AttributeInitializationData.h"
#include "UObject/NoExportTypes.h"
#include "ChallengeSystemSettings.generated.h"

class UChallengesComponent;

UCLASS(DefaultConfig, Config=Game)
class GBXGAMESYSTEMCORE_API UChallengeSystemSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    float MinimumGoalForChallengeNotification;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<float> ChallengeCompletionThresholdNotification;
    
    UPROPERTY(Config, EditAnywhere)
    FAttributeInitializationData ChallengeRanksForToken;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ChallengePointsPerRank;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoftObjectPath> ChallengeRewards;
    
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<UChallengesComponent> DefaultChallengeComponent;
    
public:
    UChallengeSystemSettings();
};

