#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxPCTextChatMenu.generated.h"

class UGbxGFxButton;
class UGbxGFxSlider;
class UGbxTextField;
class UGFxPCTextChatBuffer;
class UGbxGFxEditableTextField;
class UGbxGFxObject;

UCLASS()
class OAKGAME_API UGFxPCTextChatMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MaxLinesShown;
    
    UPROPERTY(EditAnywhere)
    float ScrollThumbTrackMinSize;
    
    UPROPERTY(EditAnywhere)
    FString PlayerNameColor;
    
    UPROPERTY(EditAnywhere)
    bool bCloseInMenuChatWhenSubmitting;
    
private:
    UPROPERTY(Transient)
    UGbxTextField* TextChatLogClip;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* ScrollBarClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* TextInputMCClip;
    
    UPROPERTY(Transient)
    UGbxGFxEditableTextField* TextInputClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PlaceholderTextMCClip;
    
    UPROPERTY(Transient)
    UGbxTextField* PlaceholderTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* ButtonCloseClip;
    
    UPROPERTY(Transient)
    int32 ScrollPosition;
    
    UPROPERTY(Transient)
    int32 NumScrollEntries;
    
    UPROPERTY(Transient)
    bool bNeedsToUpdateLogThisFrame;
    
    UPROPERTY(Transient)
    bool bDefaultMessageShowing;
    
public:
    UGFxPCTextChatMenu();
private:
    UFUNCTION()
    void OnTextLogChanged(UGFxPCTextChatBuffer* TextChatBuffer) const;
    
    UFUNCTION()
    void OnTextChanged(UGbxGFxEditableTextField* EditableTextField, const FString& Text) const;
    
    UFUNCTION()
    void OnSubmit(UGbxGFxEditableTextField* EditableTextField, const FString& Text) const;
    
    UFUNCTION()
    void OnScrollBarUpdated(float SliderPercent) const;
    
    UFUNCTION()
    void OnPrePushMenu() const;
    
    UFUNCTION()
    void OnCloseButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
};

