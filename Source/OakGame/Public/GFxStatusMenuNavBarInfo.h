#pragma once
#include "CoreMinimal.h"
#include "GFxStatusMenuNavBarInfo.generated.h"

USTRUCT(BlueprintType)
struct FGFxStatusMenuNavBarInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString IconFrameName;
    
    UPROPERTY(Transient)
    FName MenuID;
    
    OAKGAME_API FGFxStatusMenuNavBarInfo();
};

