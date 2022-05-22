#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObjectProxy.h"
#include "CSConsoleProxy.generated.h"

class UGbxMenuData;

UCLASS(NonTransient)
class ACSConsoleProxy : public AAdvancedInteractiveObjectProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CurrentOpponent;
    
private:
    UPROPERTY()
    TSoftObjectPtr<UGbxMenuData> CSMenuData;
    
public:
    ACSConsoleProxy();
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnderParScoreReached();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSumbitPuzzleSolution(bool bIsOptimal);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnQuitCitizenScienceArcade();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnParScoreReached();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOptimalScoreReached();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFirstPuzzleOfCurrentDifficulty();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnterPuzzle();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDifficultyLevelCompleted();
    
};

