#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxRaidSpectatorWidget.generated.h"

class UGbxTextField;
class UGbxHintBar;
class UGbxGFxHintBarContainer;

UCLASS()
class OAKGAME_API UGFxRaidSpectatorWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxHintBar* HintBar;
    
    UPROPERTY(Transient)
    UGbxGFxHintBarContainer* HintBarContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* TargetPlayerName;
    
public:
    UGFxRaidSpectatorWidget();
private:
    UFUNCTION()
    void OnRaidSpectatorTargetChanged(FText& NewSpectatorTargetName) const;
    
    UFUNCTION()
    void OnNumSpectatablePlayersChanged(int32 NewNumSpectatablePlayers) const;
    
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
};

