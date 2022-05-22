#pragma once
#include "CoreMinimal.h"
#include "DialogLookupResult.generated.h"

class UDialogLineData;

USTRUCT(BlueprintType)
struct FDialogLookupResult {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogLineData* Line;
    
    UPROPERTY(EditAnywhere)
    int32 Quality;
    
    GBXDIALOG_API FDialogLookupResult();
};

