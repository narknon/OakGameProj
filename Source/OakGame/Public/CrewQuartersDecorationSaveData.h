#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersDecorationSaveData.generated.h"

USTRUCT()
struct FCrewQuartersDecorationSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 DecorationIndex;
    
private:
    UPROPERTY(EditAnywhere)
    FString DecorationDataPath;
    
public:
    OAKGAME_API FCrewQuartersDecorationSaveData();
};

