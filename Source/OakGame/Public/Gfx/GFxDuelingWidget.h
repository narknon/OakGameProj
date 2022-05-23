#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "EDuelClassification.h"
#include "EDuelLoseReason.h"
#include "GFxDuelingWidget.generated.h"

class AOakCharacter_Player;
class ADuelManager;

UCLASS(Abstract)
class UGFxDuelingWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<ADuelManager> DuelManager;
    
public:
    UGFxDuelingWidget();
protected:
    UFUNCTION()
    void OnWonDuel(EDuelClassification Classification) const;
    
    UFUNCTION()
    void OnUnacceptedCompetitorDuel(AOakCharacter_Player* Other) const;
    
    UFUNCTION()
    void OnTimerElapsed() const;
    
    UFUNCTION()
    void OnStartedDuelSetup() const;
    
    UFUNCTION()
    void OnStartedDuel() const;
    
    UFUNCTION()
    void OnLostDuel(EDuelLoseReason LoseReason, EDuelClassification Classification) const;
    
    UFUNCTION()
    void OnDuelTimedOut() const;
    
    UFUNCTION()
    void OnDuelInitated() const;
    
    UFUNCTION()
    void OnDuelCanceled() const;
    
    UFUNCTION()
    void OnCompetitorUnacceptedDuel(AOakCharacter_Player* Other) const;
    
    UFUNCTION()
    void OnCompetitorAcceptedDuel(AOakCharacter_Player* Other) const;
    
    UFUNCTION()
    void OnAcceptedCompetitorDuel(AOakCharacter_Player* Other) const;
    
};

