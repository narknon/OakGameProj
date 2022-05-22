#pragma once
#include "CoreMinimal.h"
#include "GbxUmgMenu.h"
#include "UMGGameOverScreen.generated.h"

class AOakPlayerController;

UCLASS(EditInlineNew)
class OAKGAME_API UUMGGameOverScreen : public UGbxUmgMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AOakPlayerController* OakPlayerOwner;
    
public:
    UUMGGameOverScreen();
    UFUNCTION(BlueprintNativeEvent)
    void SetCountdownTimerText(const FText& CountdownText);
    
};

