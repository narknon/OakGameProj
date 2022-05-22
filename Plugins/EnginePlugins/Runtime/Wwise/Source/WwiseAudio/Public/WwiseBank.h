#pragma once
#include "CoreMinimal.h"
#include "WwiseObject.h"
#include "WwiseBank.generated.h"

class UWwiseBank;

UCLASS(BlueprintType)
class WWISEAUDIO_API UWwiseBank : public UWwiseObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoLoad;
    
    UPROPERTY(EditAnywhere)
    TArray<UWwiseBank*> MediaSourceBanks;
    
    UPROPERTY(VisibleAnywhere)
    uint16 IncludedEventCount;
    
    UPROPERTY(EditAnywhere)
    bool bUsesPrepareEvent;
    
    UPROPERTY(EditAnywhere)
    bool bAutoPrepareEvents;
    
    UWwiseBank();
};

