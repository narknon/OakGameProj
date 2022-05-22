#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MissionObjectiveSetReference.generated.h"

class UMissionObjectiveSet;
class UMission;

USTRUCT(BlueprintType)
struct GBXMISSION_API FMissionObjectiveSetReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMission> Mission;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ObjectiveSetName;
    
    UPROPERTY(EditAnywhere)
    FGuid ObjectiveSetGuid;
    
private:
    UPROPERTY(SkipSerialization, Transient)
    TWeakObjectPtr<UMissionObjectiveSet> ObjectiveSet;
    
public:
    FMissionObjectiveSetReference();
};

