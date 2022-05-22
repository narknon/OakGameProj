#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "OakPhaseWebSphereLinkedTargetItem.h"
#include "OakPhaseWebSphereLinkedTargetList.generated.h"

class AOakPhaseWebSphere;

USTRUCT(BlueprintType)
struct FOakPhaseWebSphereLinkedTargetList : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AOakPhaseWebSphere* Owner;
    
    UPROPERTY()
    TArray<FOakPhaseWebSphereLinkedTargetItem> Items;
    
public:
    OAKGAME_API FOakPhaseWebSphereLinkedTargetList();
};

