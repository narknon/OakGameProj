#pragma once
#include "CoreMinimal.h"
#include "WwiseBankEfficiencyReportDatum.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FWwiseBankEfficiencyReportDatum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString BankName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 TotalEvents;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSet<UWwiseEvent*> LoadedEvents;
    
    WWISEAUDIO_API FWwiseBankEfficiencyReportDatum();
};

