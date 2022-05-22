#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGbxProjectileManager.generated.h"

UCLASS(Abstract, NotPlaceable)
class GBXGAMESYSTEMCORE_API UIGbxProjectileManager : public UObject {
    GENERATED_BODY()
public:
    UIGbxProjectileManager();
};

