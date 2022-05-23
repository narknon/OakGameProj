#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GFxEchoNetRosterMenu_Adjustment.generated.h"

USTRUCT(BlueprintType)
struct FGFxEchoNetRosterMenu_Adjustment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingDown;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingUp;
    
    OAKGAME_API FGFxEchoNetRosterMenu_Adjustment();
};

