#pragma once
#include "CoreMinimal.h"
#include "GbxDialogBoxChoiceInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxDialogBoxChoiceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FText LabelText;
    
    UPROPERTY(BlueprintReadWrite)
    FName ChoiceNameId;
    
    UPROPERTY(BlueprintReadWrite)
    bool bCloseDialogOnSelection;
    
    FGbxDialogBoxChoiceInfo();
};

