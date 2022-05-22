#pragma once
#include "CoreMinimal.h"
#include "OakMission.h"
#include "OakMissionProvingGrounds.generated.h"

UCLASS()
class OAKGAME_API UOakMissionProvingGrounds : public UOakMission {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ActivityDisplayName;
    
    UOakMissionProvingGrounds();
};

