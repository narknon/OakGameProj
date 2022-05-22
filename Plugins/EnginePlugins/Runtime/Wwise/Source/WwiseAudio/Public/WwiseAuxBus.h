#pragma once
#include "CoreMinimal.h"
#include "WwiseObject.h"
#include "WwiseAuxBus.generated.h"

class UWwiseBank;

UCLASS(BlueprintType)
class WWISEAUDIO_API UWwiseAuxBus : public UWwiseObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseBank* RequiredBank;
    
    UWwiseAuxBus();
};

