#pragma once
#include "CoreMinimal.h"
#include "RecentDialogPerformanceInfo.generated.h"

class UGbxDialogComponent;
class UDialogPerformanceData;

USTRUCT(BlueprintType)
struct FRecentDialogPerformanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    double ExpirationTime;
    
    UPROPERTY()
    int32 SequenceID;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UGbxDialogComponent> Speaker;
    
    UPROPERTY()
    TWeakObjectPtr<UDialogPerformanceData> Performance;
    
    GBXDIALOG_API FRecentDialogPerformanceInfo();
};

