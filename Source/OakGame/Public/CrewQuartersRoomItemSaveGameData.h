#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersRoomItemSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FCrewQuartersRoomItemSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsNew;
    
private:
    UPROPERTY()
    FString RoomItemAssetPath;
    
public:
    FCrewQuartersRoomItemSaveGameData();
};

