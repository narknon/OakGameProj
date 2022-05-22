#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "AIAction_CompositeChild.generated.h"

UCLASS(CollapseCategories, EditInlineNew, HideDropdown, NotPlaceable, Within=AIAction_Composite)
class GBXAI_API UAIAction_CompositeChild : public UAIAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAIAction* Action;
    
    UPROPERTY(EditAnywhere)
    bool bCanCauseParentToStop;
    
    UAIAction_CompositeChild();
    UFUNCTION()
    UAIAction* CreateAction(UClass* ActionClass);
    
};

