#pragma once
#include "CoreMinimal.h"
#include "EShiftReportReason.h"
#include "ReportReason.generated.h"

USTRUCT(BlueprintType)
struct FReportReason {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    EShiftReportReason Code;
    
    OAKGAME_API FReportReason();
};

