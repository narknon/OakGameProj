#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GFxChallengeProgressItem.generated.h"

class UChallenge;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxChallengeProgressItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FText FirstChallengeName;
    
    UPROPERTY(Transient)
    FText SecondChallengeName;
    
    UPROPERTY(Transient)
    bool bHasNameTransitioned;
    
    UPROPERTY(Transient)
    FText FirstDescription;
    
    UPROPERTY(Transient)
    FText SecondDescription;
    
    UPROPERTY(Transient)
    bool bHasDescriptionTransitioned;
    
    UPROPERTY(Transient)
    FString FirstTypeIconFrame;
    
    UPROPERTY(Transient)
    FString SecondTypeIconFrame;
    
    UPROPERTY(Transient)
    bool bHasIconTransitioned;
    
    UPROPERTY(Transient)
    bool bViewAsPercent;
    
    UPROPERTY(Transient)
    bool bViewOneOffCompletionNotProgress;
    
    UPROPERTY(Transient)
    float ProgressPctToStartAnimFrom;
    
    UPROPERTY(Transient)
    int32 ProgressOutOfValue;
    
    UPROPERTY(Transient)
    int32 ProgressOutOfMax;
    
    UPROPERTY(Transient)
    bool bChallengeWasCompleted;
    
    UPROPERTY(Transient)
    bool bHasPercentCompleteTransitioned;
    
    UPROPERTY(Transient)
    TSubclassOf<UChallenge> ChallengeClass;
    
    UPROPERTY(Transient)
    bool bAddedAsProgressOfChildChallenge;
    
    UPROPERTY(Transient)
    int32 ParentRanking;
    
    FGFxChallengeProgressItem();
};

