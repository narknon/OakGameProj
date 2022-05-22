#pragma once
#include "CoreMinimal.h"
#include "GbxListItem.h"
#include "GbxDialogBoxChoiceWidget.generated.h"

UCLASS(EditInlineNew)
class UGbxDialogBoxChoiceWidget : public UGbxListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName ChoiceNameId;
    
    UGbxDialogBoxChoiceWidget();
};

