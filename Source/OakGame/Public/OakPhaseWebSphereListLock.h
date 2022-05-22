#pragma once
#include "CoreMinimal.h"
#include "OakPhaseWebSphereListLock.generated.h"

class AOakPhaseWebSphere;
class AOakCharacter;

USTRUCT(BlueprintType)
struct FOakPhaseWebSphereListLock {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AOakPhaseWebSphere* Owner;
    
    UPROPERTY()
    TArray<AOakCharacter*> PendingRemoves;
    
public:
    OAKGAME_API FOakPhaseWebSphereListLock();
};

