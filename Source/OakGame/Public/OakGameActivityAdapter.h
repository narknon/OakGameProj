#pragma once
#include "CoreMinimal.h"
#include "MissionObserverInterface.h"
#include "UObject/Object.h"
#include "OakGameActivityAdapter.generated.h"

UCLASS()
class UOakGameActivityAdapter : public UObject, public IMissionObserverInterface {
    GENERATED_BODY()
public:
    UOakGameActivityAdapter();
    
    // Fix for true pure virtual functions not being implemented
};

