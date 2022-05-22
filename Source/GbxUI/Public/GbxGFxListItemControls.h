#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCellWithData.h"
#include "GbxGFxListItemControls.generated.h"

class UGbxTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class GBXUI_API UGbxGFxListItemControls : public UGbxGFxListCellWithData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* TitleItem;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BadBindingIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RebindButton;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LinkedRebindButton;
    
public:
    UGbxGFxListItemControls();
};

