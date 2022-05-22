#pragma once
#include "CoreMinimal.h"
#include "OakMission.h"
#include "OakMissionCircleOfSlaughter.generated.h"

UCLASS()
class OAKGAME_API UOakMissionCircleOfSlaughter : public UOakMission {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ActivityDisplayName;
    
    UOakMissionCircleOfSlaughter();
};

