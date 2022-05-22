#pragma once
#include "CoreMinimal.h"
#include "DialogSelectorImplementation.h"
#include "DialogSelectorImplementation_CheckDistance.generated.h"

class UDialogParameter;

UCLASS(CollapseCategories, EditInlineNew)
class GBXDIALOG_API UDialogSelectorImplementation_CheckDistance : public UDialogSelectorImplementation {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* FromActorParam;
    
    UPROPERTY(EditInstanceOnly)
    UDialogParameter* ToActorParam;
    
    UPROPERTY()
    bool bUseCustomDistance;
    
    UPROPERTY(EditInstanceOnly)
    float CustomDistance;
    
    UPROPERTY(EditInstanceOnly)
    bool bTrueIfCloser;
    
    UDialogSelectorImplementation_CheckDistance();
};

