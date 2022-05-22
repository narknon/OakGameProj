#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DialogMoodInfo.generated.h"

class UGbxAction;

USTRUCT(BlueprintType)
struct FDialogMoodInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> Action;
    
    GBXDIALOG_API FDialogMoodInfo();
};

