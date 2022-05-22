#pragma once
#include "CoreMinimal.h"
#include "EMissionDebugStatus.generated.h"

UENUM(BlueprintType)
enum EMissionDebugStatus {
    MDS_Ineligible,
    MDS_Eligible,
    MDS_DevMission,
    MDS_Active,
    MDS_Complete,
    MDS_Failed,
    MDS_MAX UMETA(Hidden),
};

