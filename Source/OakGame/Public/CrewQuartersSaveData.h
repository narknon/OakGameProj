#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersDecorationSaveData.h"
#include "CrewQuartersSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCrewQuartersSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 PreferredRoomAssignment;
    
    UPROPERTY(EditAnywhere)
    TArray<FCrewQuartersDecorationSaveData> Decorations;
    
private:
    UPROPERTY(EditAnywhere)
    FString RoomDataPath;
    
public:
    OAKGAME_API FCrewQuartersSaveData();
};

