#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "EscortPathValidation.h"
#include "AIAspectSettings_VehicleEscortSpeed.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_VehicleEscortSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam NearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam FarDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxParam CatchUpSpeed;
    
    UPROPERTY(EditAnywhere)
    float GoalUpdateDistance;
    
    UPROPERTY(EditAnywhere)
    float AnticipationTime;
    
    UPROPERTY()
    bool bValidatePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEscortPathValidation EscortPathValidation;
    
    OAKGAME_API FAIAspectSettings_VehicleEscortSpeed();
};

