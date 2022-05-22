#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxUIFormattedText.h"
#include "UObject/NoExportTypes.h"
#include "MissionObjectiveSet.generated.h"

class UMissionObjective;
class UMissionObjectiveSet;
class UTravelLocationData;

UCLASS(BlueprintType)
class GBXMISSION_API UMissionObjectiveSet : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TArray<UMissionObjective*> Objectives;
    
    UPROPERTY()
    TSoftObjectPtr<UTravelLocationData> StationOverride;
    
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMissionObjective* BreadcrumbLinkedObjective;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UMissionObjective* DisplayedBreadcrumbLinkedObjective;
    
    UPROPERTY(BlueprintReadOnly)
    UMissionObjectiveSet* NextSet;
    
    UPROPERTY(BlueprintReadOnly)
    bool bCanCompleteMission;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAutoAdvanceToNextSet;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOutOfMapWaypoints;
    
    UPROPERTY()
    bool bContainsRequiredObjectives;
    
    UPROPERTY()
    bool bContainsClearIfNotCompleteObjectives;
    
    UPROPERTY(BlueprintReadOnly)
    FGbxUIFormattedText DescriptionOverride;
    
    UPROPERTY(BlueprintReadOnly)
    FGbxUIFormattedText PreAcceptanceSummaryOverride;
    
    UPROPERTY()
    FGuid ObjectiveSetGuid;
    
    UPROPERTY()
    TArray<int32> ObjOrderPos;
    
    UMissionObjectiveSet();
};

