#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "AISense_Proximity.generated.h"

UCLASS(Config=Game)
class GBXAI_API UAISense_Proximity : public UAISense {
    GENERATED_BODY()
public:
    UAISense_Proximity();
};

