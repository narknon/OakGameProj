#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "Engine/EngineTypes.h"
#include "InputCoreTypes.h"
#include "GFxPCTextChatWidget.generated.h"

class UGbxInputKeyRebindData_Button;
class UGbxInputRebindCategory;
class UGFxPCTextChatBuffer;
class UGbxGFxObject;
class UGbxTextField;
class UObject;

UCLASS()
class UGFxPCTextChatWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString PlayerNameColor;
    
    UPROPERTY(EditAnywhere)
    int32 MaxLinesShown;
    
    UPROPERTY(EditAnywhere)
    float SecondsUntilHide;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGbxInputKeyRebindData_Button> RebindDataForOpenChatKey;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGbxInputRebindCategory> KeyBindCategory_Common;
    
    UPROPERTY(EditAnywhere)
    float PromptGlyphHeight;
    
private:
    UPROPERTY(Transient)
    FKey KeyToShowForOpenTextChat;
    
    UPROPERTY(Transient)
    bool bTextChatEnabled;
    
    UPROPERTY(Transient)
    UGbxGFxObject* TextChatFeedClip;
    
    UPROPERTY(Transient)
    UGbxTextField* TextChatLogClip;
    
    UPROPERTY(Transient)
    FTimerHandle HideTimerHandle;
    
    UPROPERTY(Transient)
    bool bNeedsToUpdateLogThisFrame;
    
public:
    UGFxPCTextChatWidget();
protected:
    UFUNCTION()
    void OnTextLogChanged(UGFxPCTextChatBuffer* TextChatBuffer) const;
    
    UFUNCTION()
    void OnTextChatOptionChanged(bool bIsActive) const;
    
    UFUNCTION()
    void OnMenuActivated(UObject* MenuObject) const;
    
};

