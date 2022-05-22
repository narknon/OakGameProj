#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxGFxAnchor.generated.h"

USTRUCT(BlueprintType)
struct FGbxGFxAnchor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D NormalizedPosition;
    
    UPROPERTY(EditAnywhere)
    FVector2D Offset;
    
    UPROPERTY(EditAnywhere)
    FVector2D Scale;
    
    GBXUI_API FGbxGFxAnchor();
};

