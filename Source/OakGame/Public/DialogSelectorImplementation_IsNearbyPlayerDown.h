#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_IsNearbyPlayerDown.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class UDialogSelectorImplementation_IsNearbyPlayerDown : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* ObserverParam;
    
    UPROPERTY()
    bool bUseCustomDistance;
    
    UPROPERTY(EditInstanceOnly)
    float CustomDistance;
    
    UDialogSelectorImplementation_IsNearbyPlayerDown();
};

