#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GFxModalTutorial.generated.h"

class UGbxGFxHintWidget;

UCLASS()
class OAKGAME_API UGFxModalTutorial : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText WaitString;
    
    UPROPERTY(EditAnywhere)
    FText ExitString;
    
    UPROPERTY(EditAnywhere)
    float TintScale;
    
    UPROPERTY(EditAnywhere)
    float TintOffset;
    
private:
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ExitHint;
    
    UPROPERTY(Transient)
    bool bAllowMenuAdvance;
    
    UPROPERTY(Transient)
    FString ImageFrameName;
    
public:
    UGFxModalTutorial();
    UFUNCTION()
    void OnNumPlayersChanged(int32 NewNumPlayers) const;
    
    UFUNCTION()
    void OnLockoutDelayComplete() const;
    
    UFUNCTION()
    void extOnIntroComplete() const;
    
};

