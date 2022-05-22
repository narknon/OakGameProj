#pragma once
#include "CoreMinimal.h"
#include "GesaltOptionalPartData.generated.h"

class UGestaltPartData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGesaltOptionalPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UGestaltPartData* GestaltPart;
    
    UPROPERTY(EditAnywhere)
    float Probability;
    
    UPROPERTY(EditAnywhere)
    bool bSuppressChildParts;
    
public:
    FGesaltOptionalPartData();
};

