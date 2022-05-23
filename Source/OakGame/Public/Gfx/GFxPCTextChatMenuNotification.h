#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxPCTextChatMenuNotification.generated.h"

class UGbxGFxButton;

UCLASS()
class UGFxPCTextChatMenuNotification : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float NotificationDuration;
    
private:
    UPROPERTY(Transient)
    UGbxGFxButton* ChatButtonClip;
    
    UPROPERTY(Transient)
    float Duration;
    
    UPROPERTY(Transient)
    bool bChatMenuIsOpen;
    
public:
    UGFxPCTextChatMenuNotification();
private:
    UFUNCTION()
    void OnMenuStackEmptied() const;
    
    UFUNCTION()
    void OnChatButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
};

