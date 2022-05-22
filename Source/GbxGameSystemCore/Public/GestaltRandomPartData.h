#pragma once
#include "CoreMinimal.h"
#include "GestaltRandomPartData.generated.h"

class UGestaltPartData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGestaltRandomPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UGestaltPartData* GestaltPart;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
public:
    FGestaltRandomPartData();
};

