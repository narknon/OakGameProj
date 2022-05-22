#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MatchmakingTest.generated.h"

UCLASS(Blueprintable)
class UMatchmakingTest : public UObject {
    GENERATED_BODY()
public:
    UMatchmakingTest();
    UFUNCTION(BlueprintCallable)
    void StartMatchmaking();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMatchmakingUpdated(int32 NumPlayers);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMatchmakingStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMatchmakingError(const FString& Error);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMatchmakingCompleted(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void CancelMatchmaking();
    
};

