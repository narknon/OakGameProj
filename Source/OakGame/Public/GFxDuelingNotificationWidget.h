#pragma once
#include "CoreMinimal.h"
#include "GFxDuelingWidget.h"
#include "GFxDuelingNotificationWidget.generated.h"

class UGFxDuelingNotificationObject;
class AOakCharacter_Player;

UCLASS()
class UGFxDuelingNotificationWidget : public UGFxDuelingWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxDuelingNotificationObject* NotificationClip;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakCharacter_Player> OtherPlayer;
    
    UPROPERTY(Transient)
    bool bNotificationPlaying;
    
    UPROPERTY(Transient)
    bool bCountingDown;
    
    UPROPERTY(Transient)
    int32 LastCountdownSecond;
    
public:
    UGFxDuelingNotificationWidget();
    UFUNCTION()
    void extOnDuelNotificationAnimationEnded() const;
    
};

