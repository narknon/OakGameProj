#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GFxFriendsInAreaListMenu_Adjustment.generated.h"

USTRUCT(BlueprintType)
struct FGFxFriendsInAreaListMenu_Adjustment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingDown;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingUp;
    
    OAKGAME_API FGFxFriendsInAreaListMenu_Adjustment();
};

