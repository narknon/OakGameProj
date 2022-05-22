#pragma once
#include "CoreMinimal.h"
#include "AIAction_WeaponAtPoint.h"
#include "GbxParam.h"
#include "UObject/NoExportTypes.h"
#include "AIAction_SimpleWeapon.generated.h"

class UGbxWeaponSlotData;
class UEnvQueryTestAsset;
class UEnvQuery;
class UAITicketDataAsset;

UCLASS(CollapseCategories, EditInlineNew, Config=Game)
class GBXAI_API UAIAction_SimpleWeapon : public UAIAction_WeaponAtPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxParam CanUseWeaponWhileMoving;
    
    UPROPERTY(EditAnywhere)
    bool bTakeRangesFromWeapon;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MinRange;
    
    UPROPERTY(EditAnywhere)
    FGbxParam IdealRange;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MaxRange;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnvQueryTestAsset*> AdditionalTests;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxWeaponSlotData*> WeaponSlots;
    
    UPROPERTY(EditAnywhere)
    FGbxParam WeaponUseModeIndex;
    
    UPROPERTY(EditAnywhere)
    FGbxParam BurstCountOverride;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideBurstCount;
    
    UPROPERTY(EditAnywhere)
    FGbxParam BurstDelayOverride;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideBurstDelay;
    
    UPROPERTY(EditAnywhere)
    FGbxParam AccuracyOverride;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideAccuracy;
    
    UPROPERTY(EditAnywhere)
    FGbxParam SuppressingFireTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseSuppressingFireTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseRepositionTicket;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MinRepositionDistance;
    
    UPROPERTY(EditAnywhere)
    UAITicketDataAsset* RepositionTicket;
    
    UPROPERTY(EditAnywhere)
    FGbxParam TimeToStayAtSpotWhileShooting;
    
    UPROPERTY(EditAnywhere)
    bool bDistanceToTargetTestShouldFilterOnly;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultEnvQuery;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultRepositionTicket;
    
    UPROPERTY()
    UEnvQuery* DefaultEnvQueryAsset;
    
    UPROPERTY()
    UAITicketDataAsset* DefaultRepositionTicketAsset;
    
    UPROPERTY()
    uint8 SimpleWeaponVersion;
    
public:
    UAIAction_SimpleWeapon();
};

