#pragma once
#include "CoreMinimal.h"
#include "GbxListItem.h"
#include "GbxMenuInputEvent.h"
#include "GbxListItemBoolean.generated.h"

class UCheckBox;

UCLASS(EditInlineNew)
class GBXUI_API UGbxListItemBoolean : public UGbxListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UCheckBox* ValueCheckBox;
    
    UGbxListItemBoolean();
    UFUNCTION(BlueprintCallable)
    void SetChecked(bool bChecked);
    
    UFUNCTION(BlueprintPure)
    bool IsChecked() const;
    
protected:
    UFUNCTION()
    void HandleFocusableWidgetPressed(const FGbxMenuInputEvent& InputInfo);
    
};

