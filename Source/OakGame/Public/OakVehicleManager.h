#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OakVehicleManager.generated.h"

UCLASS(Transient, Config=Game)
class OAKGAME_API UOakVehicleManager : public UObject {
    GENERATED_BODY()
public:
    UOakVehicleManager();
};

