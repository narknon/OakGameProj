#pragma once
#include "CoreMinimal.h"
#include "WwiseObject.h"
#include "WwiseStateGroup.generated.h"

class UWwiseState;

UCLASS()
class WWISEAUDIO_API UWwiseStateGroup : public UWwiseObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<UWwiseState*> ChildStates;
    
    UPROPERTY(VisibleAnywhere)
    UWwiseState* NoneState;
    
    UWwiseStateGroup();
};

