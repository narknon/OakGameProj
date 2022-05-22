#pragma once
#include "CoreMinimal.h"
#include "AIAction.h"
#include "AIAction_Composite.generated.h"

class UAIAction_CompositeChild;

UCLASS(CollapseCategories, EditInlineNew, HideDropdown, NotPlaceable)
class GBXAI_API UAIAction_Composite : public UAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TArray<UAIAction_CompositeChild*> Children;
    
private:
    UPROPERTY()
    uint8 CompositeVersion;
    
public:
    UAIAction_Composite();
    UFUNCTION()
    UAIAction_CompositeChild* CreateChild(FName ChildName);
    
};

