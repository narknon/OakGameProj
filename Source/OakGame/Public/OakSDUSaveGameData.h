#pragma once
#include "CoreMinimal.h"
#include "OakSDUSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FOakSDUSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SDULevel;
    
private:
    UPROPERTY()
    FString SDUDataPath;
    
public:
    FOakSDUSaveGameData();
};

