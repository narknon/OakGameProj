#pragma once
#include "CoreMinimal.h"
#include "ZoneMapDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FZoneMapDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName LevelName;
    
    UPROPERTY(BlueprintReadOnly)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FText Description;
    
    OAKGAME_API FZoneMapDisplayInfo();
};

