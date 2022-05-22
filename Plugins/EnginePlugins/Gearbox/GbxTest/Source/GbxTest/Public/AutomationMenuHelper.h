#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAutomationUIAction.h"
#include "EAutomationUIDirection.h"
#include "AutomationMenuFocusInfo.h"
#include "AutomationMenuHelper.generated.h"

class UAutomationMenuHelper;
class AGbxPlayerController;

UCLASS(BlueprintType)
class UAutomationMenuHelper : public UObject {
    GENERATED_BODY()
public:
    UAutomationMenuHelper();
    UFUNCTION(BlueprintCallable)
    void PrevPage();
    
    UFUNCTION(BlueprintCallable)
    FName PageName();
    
    UFUNCTION(BlueprintCallable)
    int32 NumPages();
    
    UFUNCTION(BlueprintCallable)
    void NextPage();
    
    UFUNCTION(BlueprintCallable)
    void NextFocus(const EAutomationUIDirection Direction);
    
    UFUNCTION(BlueprintCallable)
    FName MenuName();
    
    UFUNCTION(BlueprintCallable)
    bool HasOpenMenu();
    
    UFUNCTION(BlueprintCallable)
    FName FocusName();
    
    UFUNCTION(BlueprintCallable)
    FAutomationMenuFocusInfo FocusInfo();
    
    UFUNCTION(BlueprintCallable)
    int32 CurrentDepth();
    
    UFUNCTION(BlueprintPure)
    static UAutomationMenuHelper* CreateAutomationMenuHelper(AGbxPlayerController* PlayerController, const bool SimulateAllInputs);
    
    UFUNCTION(BlueprintCallable)
    void BackOut();
    
    UFUNCTION(BlueprintCallable)
    void ActuateFocus(const EAutomationUIAction Action);
    
};

