#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvQueryTest_StandardCover.generated.h"

class UEnvQueryContext;

UCLASS(EditInlineNew)
class UEnvQueryTest_StandardCover : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> FriendliesContext;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> TargetContext;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> ExposureContext;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue TargetDistanceMinPriorToTakingCover;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue TargetDistanceMaxPriorToTakingCover;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetDistanceMinMultiplierAfterTakingCover;
    
    UPROPERTY(EditDefaultsOnly)
    float TargetDistanceMaxMultiplierAfterTakingCover;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue QuerierMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue DoViewTest;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderBoolValue DoExposureTest;
    
    UPROPERTY(EditDefaultsOnly)
    FAIDataProviderFloatValue FriendlyDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float ScoringWeight_AlreadyAtCover;
    
    UPROPERTY(EditDefaultsOnly)
    float ScoringWeight_DistanceToQuerier;
    
    UPROPERTY(EditDefaultsOnly)
    float ScoringWeight_DistanceToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float ScoringWeight_DistanceToFriendlies;
    
    UPROPERTY(EditDefaultsOnly)
    float ScoringWeight_CoverView;
    
    UPROPERTY(EditDefaultsOnly)
    float ScoringWeight_CoverExposure;
    
public:
    UEnvQueryTest_StandardCover();
};

