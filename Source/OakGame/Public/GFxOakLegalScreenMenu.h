#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GFxOakLegalScreenMenu.generated.h"

class UGbxGFxObject;

UCLASS()
class UGFxOakLegalScreenMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeInputSkipScreen;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeAutoSkipScreen;
    
    UPROPERTY(EditDefaultsOnly)
    FText LegalText;
    
    UPROPERTY(EditDefaultsOnly)
    FText LegalTextPC;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LogosWrapper;
    
public:
    UGFxOakLegalScreenMenu();
private:
    UFUNCTION()
    void OnLegalScreenTimerExpired() const;
    
    UFUNCTION()
    void EnableInputToSkipScreen() const;
    
};

