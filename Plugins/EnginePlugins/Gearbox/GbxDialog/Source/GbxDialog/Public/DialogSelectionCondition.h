#pragma once
#include "CoreMinimal.h"
#include "DialogConditionRequirement.h"
#include "DialogSelectionCondition.generated.h"

USTRUCT(BlueprintType)
struct FDialogSelectionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDialogConditionRequirement> Requirements;
    
    GBXDIALOG_API FDialogSelectionCondition();
};

