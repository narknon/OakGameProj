#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DynamicRoomModuleSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class GBXDYNAMICROOM_API UDynamicRoomModuleSettings : public UObject {
    GENERATED_BODY()
public:
    UDynamicRoomModuleSettings();
};

