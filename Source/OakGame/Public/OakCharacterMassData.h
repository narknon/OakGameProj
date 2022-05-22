#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OakCharacterMassData.generated.h"

USTRUCT()
struct FOakCharacterMassData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Mass;
    
    UPROPERTY(EditAnywhere)
    float FlinchThreshold;
    
    UPROPERTY(EditAnywhere)
    float StaggerThreshold;
    
    UPROPERTY(EditAnywhere)
    float LaunchThreshold;
    
    OAKGAME_API FOakCharacterMassData();
};

