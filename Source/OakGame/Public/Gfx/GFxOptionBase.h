#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxMenuInputEvent.h"
#include "GFxOptionBase.generated.h"

class UGbxGFxGridScrollingList;
class UGbxGFxButton;

UCLASS()
class UGFxOptionBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ContentPanel;
    
public:
    UGFxOptionBase();
protected:
    UFUNCTION()
    void OnUnimplementedOptionClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
};

