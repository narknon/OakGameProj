#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "DialogContext.h"
#include "DialogActionBlueprintImplementation.generated.h"

UCLASS(Blueprintable)
class GBXDIALOG_API UDialogActionBlueprintImplementation : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UDialogActionBlueprintImplementation();
    UFUNCTION(BlueprintImplementableEvent)
    void Execute(const FDialogContext& Context);
    
};

