#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WwiseObject.generated.h"

UCLASS()
class WWISEAUDIO_API UWwiseObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 ShortID;
    
    UWwiseObject();
};

