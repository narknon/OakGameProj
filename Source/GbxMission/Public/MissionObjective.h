#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxUIFormattedText.h"
#include "UObject/NoExportTypes.h"
#include "MissionObjective.generated.h"

class UGameStatData;
class UMissionRewardData;

UCLASS(BlueprintType)
class GBXMISSION_API UMissionObjective : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    uint8 ObjectiveCount;
    
    UPROPERTY(BlueprintReadOnly)
    UGameStatData* GameStat;
    
    UPROPERTY(BlueprintReadOnly)
    FGbxUIFormattedText FormattedProgressMessage;
    
    UPROPERTY(BlueprintReadOnly)
    bool bRememberIndividualState;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAllOrNothing;
    
    UPROPERTY()
    bool bClearIfActiveSetNotComplete;
    
    UPROPERTY()
    bool bAutoUpdateIfActivatedInMissionLevel;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInvisible;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBreadcrumb;
    
    UPROPERTY()
    bool bBreadcrumbNoClear;
    
    UPROPERTY(BlueprintReadOnly)
    bool bBreadcrumbLinked;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOptional;
    
    UPROPERTY(BlueprintReadOnly)
    bool bPauseObjectiveChain;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAdvanceChainOnLevelLoad;
    
    UPROPERTY(BlueprintReadOnly)
    bool bWantsPlanetTravel;
    
    UPROPERTY(BlueprintReadOnly)
    bool bGrantsStarterGear;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOnlyActiveIfAnyPlayerInVehicle;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOnlyActiveIfNoPlayersInVehicle;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOnlyActiveIfMissionVehicleNotSpawned;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOnlyActiveIfTravelIdActive;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOnlyActiveIfTravelIdNotActive;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOnlyActiveIfMissionWeaponWielded;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOnlyActiveIfMissionWeaponNotWielded;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOnlyActiveIfStateStable;
    
    UPROPERTY(BlueprintReadOnly)
    bool bOnlyActiveIfStateTransitioning;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAutoClearWhenNoLongerDormant;
    
    UPROPERTY()
    bool bObjectiveChainHead;
    
    UPROPERTY()
    bool bObjectiveChainMember;
    
    UPROPERTY()
    bool bRequiredForObjectiveSetAdvance;
    
    UPROPERTY()
    bool bSuppressEmptyCheckbox;
    
    UPROPERTY(BlueprintReadOnly)
    UMissionRewardData* OptionalRewardData;
    
    UPROPERTY()
    FGuid ObjectiveGuid;
    
    UMissionObjective();
};

