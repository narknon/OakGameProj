#pragma once
#include "CoreMinimal.h"
#include "DynamicRoomReplicationInfo.generated.h"

class UDynamicRoomBaseData;

USTRUCT(BlueprintType)
struct GBXDYNAMICROOM_API FDynamicRoomReplicationInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDynamicRoomBaseData* RoomToLoad;
    
    UPROPERTY()
    int32 RoomUniqueIndex;
    
    UPROPERTY()
    bool RoomLoadedOnHost;
    
    FDynamicRoomReplicationInfo();
};

