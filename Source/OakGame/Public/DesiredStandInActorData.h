#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DesiredStandInActorData.generated.h"

class AActor;
class UGbxDataAsset;

USTRUCT(BlueprintType)
struct FDesiredStandInActorData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TSubclassOf<AActor> CustomStandInClass;
    
    UPROPERTY(Transient)
    UGbxDataAsset* DataAsset;
    
    OAKGAME_API FDesiredStandInActorData();
};

