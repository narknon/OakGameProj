#pragma once
#include "CoreMinimal.h"
#include "GFxCrewQuartersMoodMenuMoodInfo.generated.h"

class UDynamicRoomBaseData;

USTRUCT(BlueprintType)
struct FGFxCrewQuartersMoodMenuMoodInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<UDynamicRoomBaseData> RoomBaseData;
    
    UPROPERTY(Transient)
    bool bIsLocked;
    
    UPROPERTY(Transient)
    bool bIsNew;
    
    OAKGAME_API FGFxCrewQuartersMoodMenuMoodInfo();
};

