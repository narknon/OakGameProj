#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "AISense_GbxPrediction.generated.h"

UCLASS(Config=Game)
class GBXGAMESYSTEMCORE_API UAISense_GbxPrediction : public UAISense {
    GENERATED_BODY()
public:
    UAISense_GbxPrediction();
};

