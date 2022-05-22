#pragma once
#include "CoreMinimal.h"
#include "DynamicRoomBaseData.h"
#include "UObject/NoExportTypes.h"
#include "DynamicRoomLevelData.generated.h"

UCLASS()
class GBXDYNAMICROOM_API UDynamicRoomLevelData : public UDynamicRoomBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSoftObjectPath DynamicRoomAssetName;
    
    UDynamicRoomLevelData();
};

