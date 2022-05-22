#pragma once
#include "CoreMinimal.h"
#include "ECoverFaceDirection.h"
#include "CoverFaceDirections.generated.h"

USTRUCT(BlueprintType)
struct FCoverFaceDirections {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECoverFaceDirection Low;
    
    UPROPERTY(EditAnywhere)
    ECoverFaceDirection HighLeft;
    
    UPROPERTY(EditAnywhere)
    ECoverFaceDirection HighRight;
    
    GBXAI_API FCoverFaceDirections();
};

