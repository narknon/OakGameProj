#pragma once
#include "CoreMinimal.h"
#include "GbxGFxDialogBoxOnChoiceMadeDelegate.h"
#include "GbxGFxDialogBoxChoiceInfo.h"
#include "EGbxGFxDialogBoxStyle.h"
#include "EGbxGFxDialogBoxButtonType.h"
#include "GbxGFxDialogBoxInfo.generated.h"

class AGbxPlayerController;
class UGbxGFxDialogBoxData;

USTRUCT(BlueprintType)
struct FGbxGFxDialogBoxInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText HeaderText;
    
    UPROPERTY(EditAnywhere)
    FText BodyText;
    
    UPROPERTY(EditAnywhere)
    TArray<FGbxGFxDialogBoxChoiceInfo> Choices;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxGFxDialogBoxOnChoiceMade OnChoiceMade;
    
    UPROPERTY(EditAnywhere)
    bool bKeybindingAllowGamepadInputs;
    
    UPROPERTY(EditAnywhere)
    bool bKeybindingAllowMouseKeyboardInputs;
    
    UPROPERTY(EditAnywhere)
    EGbxGFxDialogBoxStyle DialogBoxStyle;
    
    UPROPERTY(EditAnywhere)
    FText InputText;
    
    UPROPERTY(EditAnywhere)
    bool bCanCloseWhenChoicesArrayIsEmpty;
    
    UPROPERTY(EditAnywhere)
    bool bInputTextField;
    
    UPROPERTY(EditAnywhere)
    bool bPasswordTextField;
    
    UPROPERTY(EditAnywhere)
    bool bAnyUserCanInteract;
    
    UPROPERTY(BlueprintReadWrite)
    bool bCanCancel;
    
    UPROPERTY(BlueprintReadWrite)
    bool bSuppressSpawnSound;
    
    UPROPERTY(EditAnywhere)
    FName InitialChoice;
    
    UPROPERTY(EditAnywhere)
    int32 InitialChoiceIndex;
    
    UPROPERTY(EditAnywhere)
    EGbxGFxDialogBoxButtonType ButtonType;
    
    UPROPERTY(Transient)
    AGbxPlayerController* TargetPC;
    
    UPROPERTY(Transient)
    bool bAllowCloseWhenAnotherLocalPlayerLeaves;
    
    UPROPERTY(Transient)
    UGbxGFxDialogBoxData* OverrideDefaultTemplate;
    
    OAKGAME_API FGbxGFxDialogBoxInfo();
};

