#pragma once
#include "CoreMinimal.h"
#include "PerPlayerCullable.h"
#include "UObject/Object.h"
#include "PerPlayerActorCullingManager.generated.h"

UCLASS(Transient)
class UPerPlayerActorCullingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FPerPlayerCullable> AllCullables;
    
public:
    UPerPlayerActorCullingManager();
};

