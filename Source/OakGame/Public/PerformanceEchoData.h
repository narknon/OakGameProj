#pragma once
#include "CoreMinimal.h"
#include "PerformanceEchoDataBase.h"
#include "EEchoPerformanceMode.h"
#include "PerformanceEchoData.generated.h"

UCLASS(EditInlineNew)
class UPerformanceEchoData : public UPerformanceEchoDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EEchoPerformanceMode Mode;
    
    UPerformanceEchoData();
};

