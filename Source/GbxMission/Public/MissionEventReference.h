#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MissionEventReference.generated.h"

class UMission;

USTRUCT(BlueprintType)
struct GBXMISSION_API FMissionEventReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UMission> Mission;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EventName;
    
    FMissionEventReference();
};

