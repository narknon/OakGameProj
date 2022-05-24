#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GbxGFxDialogBoxChoiceInfo.h"
#include "GbxGFxDialogBoxOnChoiceMadeDelegate.h"
#include "GbxGFxDialogBoxInfo.h"
#include "EGbxGFxDialogBoxStyle.h"
#include "GbxGFxCoreDialogBoxHelpers.generated.h"

class UGbxGFxDialogBox;
class AGbxPlayerController;

UCLASS(BlueprintType)
class OAKGAME_API UGbxGFxCoreDialogBoxHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxGFxCoreDialogBoxHelpers();
    UFUNCTION(BlueprintCallable)
    static UGbxGFxDialogBox* ShowYesNoDialog(AGbxPlayerController* PC, const FText& HeaderText, const FText& MessageText, const FGbxGFxDialogBoxOnChoiceMade& OnChoiceMade, bool bAnyUserCanInteract, AGbxPlayerController* InTargetPC, const EGbxGFxDialogBoxStyle DialogBoxStyle, int32 InitialChoiceIndex, bool CanCancel);
    
    UFUNCTION(BlueprintCallable)
    static UGbxGFxDialogBox* ShowOkayDialog(AGbxPlayerController* PC, const FText& HeaderText, const FText& MessageText, const FGbxGFxDialogBoxOnChoiceMade& OnChoiceMade, bool bAnyUserCanInteract, AGbxPlayerController* InTargetPC, const EGbxGFxDialogBoxStyle DialogBoxStyle);
    
    UFUNCTION(BlueprintCallable)
    static UGbxGFxDialogBox* ShowDialog(AGbxPlayerController* PC, const FGbxGFxDialogBoxInfo& DialogBoxInfo);
    
    UFUNCTION(BlueprintCallable)
    static UGbxGFxDialogBox* ShowCustomDialog(AGbxPlayerController* PC, const FText& HeaderText, const FText& MessageText, const TArray<FGbxGFxDialogBoxChoiceInfo>& Choices, const FGbxGFxDialogBoxOnChoiceMade& OnChoiceMade, bool bAnyUserCanInteract, AGbxPlayerController* InTargetPC, const EGbxGFxDialogBoxStyle DialogBoxStyle, int32 InitialChoiceIndex, bool CanCancel);
    
    UFUNCTION(BlueprintCallable)
    static UGbxGFxDialogBox* ShowConfirmCancelDialog(AGbxPlayerController* PC, const FText& HeaderText, const FText& MessageText, const FGbxGFxDialogBoxOnChoiceMade& OnChoiceMade, bool bAnyUserCanInteract, AGbxPlayerController* InTargetPC, const EGbxGFxDialogBoxStyle DialogBoxStyle, bool CanCancel);
    
    UFUNCTION(BlueprintCallable)
    static UGbxGFxDialogBox* ShowBlockingDialog(AGbxPlayerController* PC, const FText& HeaderText, const FText& MessageText, bool bBlocksAllUsers, AGbxPlayerController* InTargetPC, bool bAllowedToDismiss);
    
};

