#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIManagerMessage.h"
#include "MessageStackManager.generated.h"

class UGFxRolloutMessage;
class AOakPlayerController;
class UUIManager;

UCLASS()
class UMessageStackManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FUIManagerMessage> MessageStack;
    
    UPROPERTY(Transient)
    UGFxRolloutMessage* MessageMovie;
    
    UPROPERTY(Transient)
    AOakPlayerController* PlayerOwner;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UUIManager> UiManagerOwner;
    
public:
    UMessageStackManager();
    UFUNCTION()
    void HandleCompleteAnimation(const UGFxRolloutMessage* GFxWidget);
    
};

