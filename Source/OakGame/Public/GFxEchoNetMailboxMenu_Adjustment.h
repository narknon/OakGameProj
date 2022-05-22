#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GFxEchoNetMailboxMenu_Adjustment.generated.h"

USTRUCT(BlueprintType)
struct FGFxEchoNetMailboxMenu_Adjustment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingDown;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingUp;
    
    OAKGAME_API FGFxEchoNetMailboxMenu_Adjustment();
};

