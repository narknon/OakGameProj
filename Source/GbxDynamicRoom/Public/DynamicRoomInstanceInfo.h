#pragma once
#include "CoreMinimal.h"
#include "DynamicRoomInstanceInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GBXDYNAMICROOM_API FDynamicRoomInstanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName RoomUniqueName;
    
    UPROPERTY()
    UObject* LoadingData;
    
    UPROPERTY()
    UObject* RoomInstance;
    
    FDynamicRoomInstanceInfo();
};

