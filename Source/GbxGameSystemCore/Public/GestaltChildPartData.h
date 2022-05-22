#pragma once
#include "CoreMinimal.h"
#include "GestaltChildPartData.generated.h"

class UGestaltPartData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGestaltChildPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UGestaltPartData* GestaltPart;
    
    UPROPERTY(EditAnywhere)
    float Probability;
    
public:
    FGestaltChildPartData();
};

