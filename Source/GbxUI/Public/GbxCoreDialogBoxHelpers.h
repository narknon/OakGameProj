#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GbxDialogBoxInfo.h"
#include "EGbxDialogBoxHelpersDialogTemplate.h"
#include "GbxCoreDialogBoxHelpers.generated.h"

class UGbxDialogBox;
class AGbxPlayerController;

UCLASS(BlueprintType)
class GBXUI_API UGbxCoreDialogBoxHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxCoreDialogBoxHelpers();
    UFUNCTION(BlueprintCallable)
    static UGbxDialogBox* ShowYesNoDialog(AGbxPlayerController* PC, const FText HeaderText, const FText MessageText, bool bAnyUserCanInteract);
    
    UFUNCTION(BlueprintCallable)
    static UGbxDialogBox* ShowOkayDialog(AGbxPlayerController* PC, const FText HeaderText, const FText MessageText, bool bAnyUserCanInteract, EGbxDialogBoxHelpersDialogTemplate Template);
    
    UFUNCTION(BlueprintCallable)
    static UGbxDialogBox* ShowDialog(AGbxPlayerController* PC, const FGbxDialogBoxInfo& DialogBoxInfo);
    
    UFUNCTION(BlueprintCallable)
    static UGbxDialogBox* ShowConfirmCancelDialog(AGbxPlayerController* PC, const FText HeaderText, const FText MessageText, bool bAnyUserCanInteract);
    
    UFUNCTION(BlueprintCallable)
    static UGbxDialogBox* ShowBlockingDialog(AGbxPlayerController* PC, const FText HeaderText, const FText MessageText, bool bBlocksAllUsers);
    
};

