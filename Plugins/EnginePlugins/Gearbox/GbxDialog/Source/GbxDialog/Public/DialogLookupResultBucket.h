#pragma once
#include "CoreMinimal.h"
#include "DialogLookupResult.h"
#include "DialogLookupResultBucket.generated.h"

USTRUCT(BlueprintType)
struct FDialogLookupResultBucket {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDialogLookupResult> Results;
    
    GBXDIALOG_API FDialogLookupResultBucket();
};

