#pragma once
#include "CoreMinimal.h"
#include "GbxUmgMenu.h"
#include "GbxMenuSwitcher.generated.h"

UCLASS(EditInlineNew)
class GBXUI_API UGbxMenuSwitcher : public UGbxUmgMenu {
    GENERATED_BODY()
public:
    UGbxMenuSwitcher();
    UFUNCTION(BlueprintCallable)
    void SwitchToPage(FName SubMenuId);
    
    UFUNCTION(BlueprintCallable)
    void PrevPage();
    
    UFUNCTION(BlueprintCallable)
    void NextPage();
    
    UFUNCTION(BlueprintPure)
    FName GetCurrentSubmenuId() const;
    
};

