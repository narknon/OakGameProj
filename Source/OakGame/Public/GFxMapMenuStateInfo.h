#pragma once
#include "CoreMinimal.h"
#include "GFxMapMenuStateInfo.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxMapMenuStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText StateName;
    
    UPROPERTY(EditAnywhere)
    FString StateFrame;
    
    FGFxMapMenuStateInfo();
};

