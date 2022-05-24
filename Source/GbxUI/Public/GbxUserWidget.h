#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxUserWidgetDelegateDelegate.h"
#include "Blueprint/UserWidget.h"
#include "GbxFocusableWidget.h"
#include "EGbxFocusableWidgetMouseBehavior.h"
#include "EGbxFocusableWidgetState.h"
#include "UObject/NoExportTypes.h"
#include "GbxUserWidget.generated.h"

class UTextBlock;
class UGbxFocusableWidgetStyleData;
class UImage;
class UBUTTON;
class UGbxUmgMenu;
class UDataTable;
class UWidgetAnimation;
class UWidget;

UCLASS(EditInlineNew)
class GBXUI_API UGbxUserWidget : public UUserWidget, public IGbxFocusableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UTextBlock* LabelTextBlock;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UTextBlock* ValueTextBlock;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UImage* SelectedImage;
    
    UPROPERTY(EditInstanceOnly)
    bool bRegisterAsFocusableWidget;
    
    UPROPERTY(EditAnywhere)
    EGbxFocusableWidgetMouseBehavior MouseFocusBehavior;
    
    UPROPERTY(EditAnywhere)
    UGbxFocusableWidgetStyleData* FocusableWidgetStyleData;
    
    UPROPERTY(EditAnywhere)
    FName OnFocusedAudioEventName;
    
    UPROPERTY(EditAnywhere)
    FName OnClickedAudioEventName;
    
    UPROPERTY(EditAnywhere)
    bool bNeverCreateMouseFocusButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBUTTON* MouseFocusButton;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxUserWidgetDelegate OnWidgetClicked;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxUserWidgetDelegate OnWidgetFocused;
    
    UPROPERTY(EditInstanceOnly)
    FName FocusableWidgetNavUp;
    
    UPROPERTY(EditInstanceOnly)
    FName FocusableWidgetNavDown;
    
    UPROPERTY(EditInstanceOnly)
    FName FocusableWidgetNavLeft;
    
    UPROPERTY(EditInstanceOnly)
    FName FocusableWidgetNavRight;
    
    UPROPERTY(EditInstanceOnly)
    bool bFocusOnMenuCreation;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UGbxUmgMenu> MenuThatOwnsFocus;
    
    UPROPERTY(EditAnywhere)
    UDataTable* AudioDataTable;
    
    UGbxUserWidget();
    UFUNCTION(BlueprintCallable)
    void SetLabelText(FText LabelText);
    
    UFUNCTION()
    void OnFocusableWidgetUnhovered();
    
    UFUNCTION()
    void OnFocusableWidgetReleased();
    
    UFUNCTION()
    void OnFocusableWidgetPressed();
    
    UFUNCTION()
    void OnFocusableWidgetHovered();
    
    UFUNCTION()
    void OnFocusableWidgetClicked();
    
    UFUNCTION(BlueprintPure)
    bool IsRegisteredAsFocusableWidget() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsFocusableWidgetStateHovered(EGbxFocusableWidgetState State);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFocusableWidgetStateFocused(EGbxFocusableWidgetState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleFocusableWidgetStateChanged(EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void GotoAndStop(const FFrameTime StopTime, const UWidgetAnimation* InAnimation);
    
    UFUNCTION(BlueprintCallable)
    void GetAllChildWidgetsOfClass(TSubclassOf<UWidget> TargetClass, UPARAM(Ref) TArray<UWidget*>& OutputArray);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetFocusableWidgetEnabled(bool bEnabled) override PURE_VIRTUAL(SetFocusableWidgetEnabled,);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusableWidgetFocused() const override PURE_VIRTUAL(IsFocusableWidgetFocused, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusableWidgetEnabled() const override PURE_VIRTUAL(IsFocusableWidgetEnabled, return false;);
    
    UFUNCTION(BlueprintCallable)
    EGbxFocusableWidgetState GetFocusableWidgetState() const override PURE_VIRTUAL(GetFocusableWidgetState, return EGbxFocusableWidgetState::Unknown;);
    
};

