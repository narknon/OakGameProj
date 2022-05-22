#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "DisplayedNotificationWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class UDisplayedNotificationWidget : public UGbxUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHideComplete);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHidden);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisplayed);
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UTextBlock* MessageText;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOnDisplayed OnDisplayedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnHidden OnHiddenEvent;
    
    UPROPERTY(BlueprintCallable)
    FOnHideComplete HideCompleteEvent;
    
public:
    UDisplayedNotificationWidget();
    UFUNCTION(BlueprintCallable)
    void SetMessageText(FText& Text);
    
    UFUNCTION()
    void Hidden();
    
    UFUNCTION()
    void Displayed();
    
};

