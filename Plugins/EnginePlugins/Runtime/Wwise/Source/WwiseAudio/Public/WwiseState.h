#pragma once
#include "CoreMinimal.h"
#include "WwiseObject.h"
#include "WwiseState.generated.h"

class UWwiseStateGroup;

UCLASS()
class WWISEAUDIO_API UWwiseState : public UWwiseObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UWwiseStateGroup* StateGroup;
    
    UWwiseState();
};

