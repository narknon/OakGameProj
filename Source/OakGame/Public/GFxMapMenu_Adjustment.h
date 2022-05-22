#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GFxMapMenu_Adjustment.generated.h"

USTRUCT(BlueprintType)
struct FGFxMapMenu_Adjustment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingDown;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingUp;
    
    OAKGAME_API FGFxMapMenu_Adjustment();
};

