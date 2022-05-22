#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelActorPersistenceManager.generated.h"

class ULevelActorPersistenceInterface;
class ILevelActorPersistenceInterface;

UCLASS(Transient)
class ULevelActorPersistenceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<TScriptInterface<ILevelActorPersistenceInterface>> AllCurrentMapActors;
    
public:
    ULevelActorPersistenceManager();
};

