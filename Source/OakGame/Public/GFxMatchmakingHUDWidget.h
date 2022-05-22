#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxMatchmakingHUDWidget.generated.h"

class UGbxGFxObject;
class UGbxTextField;

UCLASS()
class OAKGAME_API UGFxMatchmakingHUDWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* MatchmakingWidgetObject;
    
    UPROPERTY(Transient)
    UGbxTextField* MatchMessageText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MatchTypeIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MatchStatusIcon;
    
    UPROPERTY(EditDefaultsOnly, Transient)
    float MessageShowDuration;
    
public:
    UGFxMatchmakingHUDWidget();
protected:
    UFUNCTION()
    void OnShrinkDelayExpired() const;
    
    UFUNCTION()
    void OnMatchmakingWidgetStateChanged() const;
    
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
    UFUNCTION()
    void OnHideDelayExpired() const;
    
};

