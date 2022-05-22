#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior.h"
#include "GrenadeBehavior_Delivery.generated.h"

class UWwiseEvent;

UCLASS(Abstract)
class UGrenadeBehavior_Delivery : public UGrenadeBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* GrenadeThrownEvent;
    
public:
    UGrenadeBehavior_Delivery();
};

