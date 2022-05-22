#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "OakPublicAPIUpdater.generated.h"

class UChallenge;
class UChallengesComponent;
class UOakGameInstance;

UCLASS()
class OAKGAME_API UOakPublicAPIUpdater : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<TSubclassOf<UChallenge>> ModifiedChallengeClasses;
    
    UPROPERTY(Transient)
    UOakGameInstance* GameInstanceRef;
    
public:
    UOakPublicAPIUpdater();
    UFUNCTION()
    void OnChallengeUpdated(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass, int32 NewValue, bool bDisplayNotification, bool bCompleted);
    
    UFUNCTION()
    void OnChallengeCompleted(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass);
    
    UFUNCTION()
    void OnChallengeActivated(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass);
    
};

