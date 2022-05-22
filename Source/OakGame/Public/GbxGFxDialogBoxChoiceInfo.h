#pragma once
#include "CoreMinimal.h"
#include "GbxGFxDialogBoxChoiceInfo.generated.h"

USTRUCT(BlueprintType)
struct FGbxGFxDialogBoxChoiceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText LabelText;
    
    UPROPERTY(EditAnywhere)
    FName ActionName;
    
    UPROPERTY(EditAnywhere)
    FName InputAction;
    
    UPROPERTY(EditAnywhere)
    bool bCloseDialogOnSelection;
    
    UPROPERTY(EditAnywhere)
    bool bPressToHoldChoice;
    
    OAKGAME_API FGbxGFxDialogBoxChoiceInfo();
};

