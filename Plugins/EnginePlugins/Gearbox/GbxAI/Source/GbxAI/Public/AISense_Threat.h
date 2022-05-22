#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "AISense_Threat.generated.h"

class UTargetingComponent;

UCLASS(Config=Game)
class GBXAI_API UAISense_Threat : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TArray<UTargetingComponent*> TargetingComponents;
    
    UPROPERTY(Config, EditDefaultsOnly)
    float UpdatePeriod;
    
public:
    UAISense_Threat();
};

