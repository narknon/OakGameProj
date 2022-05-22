#pragma once
#include "CoreMinimal.h"
#include "DialogContext.h"
#include "DialogThread.generated.h"

class UGbxDialogComponent;
class UDialogPerformanceData;
class UObject;

USTRUCT(BlueprintType)
struct GBXDIALOG_API FDialogThread {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDialogContext Context;
    
    UPROPERTY(Export)
    UGbxDialogComponent* Speaker;
    
    UPROPERTY()
    UDialogPerformanceData* Performance;
    
    UPROPERTY()
    UObject* QuietTimeKey;
    
    UPROPERTY()
    UObject* GameCustomizationObject;
    
    FDialogThread();
};

