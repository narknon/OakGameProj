#pragma once
#include "CoreMinimal.h"
#include "OakMission.h"
#include "OakMissionRaid.generated.h"

UCLASS()
class OAKGAME_API UOakMissionRaid : public UOakMission {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ActivityDisplayName;
    
    UOakMissionRaid();
};

