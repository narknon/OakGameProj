#pragma once
#include "CoreMinimal.h"
#include "MapIDData.generated.h"

USTRUCT(BlueprintType)
struct FMapIDData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 ZoneNameID;
    
    UPROPERTY(EditAnywhere)
    uint8 MapNameID;
    
    OAKGAME_API FMapIDData();
};

