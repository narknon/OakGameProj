#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChallengeInstanceData.h"
#include "OakUIChallengeListData.generated.h"

class UChallengeCategoryData;
class UZoneMapData;
class UChallenge;
class UOakUIChallengeDataProvider;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakUIChallengeListData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UChallengeCategoryData* HeaderCategory;
    
    UPROPERTY(Transient)
    int32 NumHeaderChildren;
    
    UPROPERTY(Transient)
    int32 NumHeaderChildrenCompleted;
    
    UPROPERTY(Transient)
    FChallengeInstanceData ChallengeInstanceData;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UZoneMapData> ZoneMapData;
    
    UPROPERTY(Transient)
    int32 NumChildren;
    
    UPROPERTY(Transient)
    int32 NumChildrenComplete;
    
    UPROPERTY(Transient)
    bool bIsUndiscovered;
    
    UPROPERTY(Transient)
    TSubclassOf<UChallenge> ChallengeClass;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UOakUIChallengeDataProvider> OwnerDataProvider;
    
    UPROPERTY(Transient)
    bool bShowAllChallenges;
    
    FOakUIChallengeListData();
};

