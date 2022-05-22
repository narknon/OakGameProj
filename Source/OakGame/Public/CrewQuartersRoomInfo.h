#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersRoomInfo.generated.h"

class UCrewQuartersRoomItemData;

USTRUCT(BlueprintType)
struct OAKGAME_API FCrewQuartersRoomInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCrewQuartersRoomItemData* RoomItemData;
    
    UPROPERTY()
    bool IsNew;
    
    FCrewQuartersRoomInfo();
};

