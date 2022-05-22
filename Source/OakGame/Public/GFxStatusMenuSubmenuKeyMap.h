#pragma once
#include "CoreMinimal.h"
#include "GFxStatusMenuSubmenuKeyMap.generated.h"

USTRUCT(BlueprintType)
struct FGFxStatusMenuSubmenuKeyMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName InputAction;
    
    UPROPERTY(EditAnywhere)
    FName SubMenuId;
    
    OAKGAME_API FGFxStatusMenuSubmenuKeyMap();
};

