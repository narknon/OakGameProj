#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "EGbxMenuParentType.h"
#include "EGbxMenuInputMode.h"
#include "GbxMenuData.generated.h"

class UDialogEvent;
class UDialogParameter;

UCLASS()
class GBXUI_API UGbxMenuData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bHideMenusBeneath;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShowsMouse;
    
    UPROPERTY(EditDefaultsOnly)
    EGbxMenuInputMode InputMode;
    
    UPROPERTY(EditDefaultsOnly)
    EGbxMenuParentType ParentType;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutoAttemptPop;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseMenuStashing;
    
    UPROPERTY(EditDefaultsOnly)
    bool bActivateIfPoppedTo;
    
    UPROPERTY(EditAnywhere)
    UDialogEvent* IdleDialogEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogParameter* IdleDialogTargetParamater;
    
    UGbxMenuData();
};

