#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GlobalsStandInSettings.h"
#include "NumericRange.h"
#include "FrontendStandInSlotSettings.h"
#include "StandInGlobals.generated.h"

class UDataTable;
class UGbxAction_CoordinatedEffect;
class UInventoryBalanceData;

UCLASS()
class UStandInGlobals : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDataTable* StandInDataTable;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> StandInOnCE;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> StandInQuickOnCE;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> StandInOffCE;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> StandInQuickOffCE;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> ProjectedStandInLoopCE;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> StandInOffCE_Head;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> StandInOnCE_Head;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> StandInOffCE_Head_Vertical;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> StandInOnCE_Head_Vertical;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> StandInOffCE_Body;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> StandInOnCE_Body;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> StandInOffCE_InnerOutline;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> StandInOnCE_InnerOutline;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UInventoryBalanceData> DefaultWeaponSkinWeaponData;
    
    UPROPERTY(EditAnywhere)
    FGlobalsStandInSettings FullScreenSettings;
    
    UPROPERTY(EditAnywhere)
    FGlobalsStandInSettings SplitScreenSettings;
    
    UPROPERTY(EditAnywhere)
    FGlobalsStandInSettings VerticalSplitScreenSettings;
    
    UPROPERTY(EditAnywhere)
    FGlobalsStandInSettings QuadSplitScreenSettings;
    
    UPROPERTY(EditAnywhere)
    FNumericRange RoomDecorationRotationYawLimits;
    
    UPROPERTY(EditAnywhere)
    int32 PlayerLevelToShowActionSkillsOnStandIns;
    
    UPROPERTY(EditAnywhere)
    float StandingStandinDelayAfterFrontendEmote;
    
    UPROPERTY(EditAnywhere)
    float StandingStandinDelayAfterFrontendInspect;
    
    UPROPERTY(EditAnywhere)
    float StandInReturnToInspectRotationInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float StandInListSelectionChangeDelay;
    
    UPROPERTY(EditAnywhere)
    FFrontendStandInSlotSettings FrontendSlotSettings[4];
    
    UStandInGlobals();
};

