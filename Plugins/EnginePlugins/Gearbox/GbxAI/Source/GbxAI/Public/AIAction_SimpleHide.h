#pragma once
#include "CoreMinimal.h"
#include "AIAction_WeaponAtPoint.h"
#include "GbxParam.h"
#include "AIAspectSettings_GbxAction.h"
#include "UObject/NoExportTypes.h"
#include "AIAction_SimpleHide.generated.h"

class UGbxWeaponSlotData;
class UEnvQuery;

UCLASS(CollapseCategories, EditInlineNew, Config=Game)
class GBXAI_API UAIAction_SimpleHide : public UAIAction_WeaponAtPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxParam MinRange;
    
    UPROPERTY(EditAnywhere)
    FGbxParam IdealRange;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MaxRange;
    
    UPROPERTY(EditAnywhere)
    FGbxParam FaceTarget;
    
    UPROPERTY(EditAnywhere)
    FGbxParam CanUseWeaponWhileMoving;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxWeaponSlotData*> WeaponSlots;
    
    UPROPERTY(EditAnywhere)
    FGbxParam WeaponUseModeIndex;
    
    UPROPERTY(EditAnywhere)
    FGbxParam HideDuration;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_GbxAction HideActionSettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseHideAction;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultEnvQuery;
    
    UPROPERTY()
    UEnvQuery* DefaultEnvQueryAsset;
    
    UPROPERTY()
    uint8 SimpleHideVersion;
    
public:
    UAIAction_SimpleHide();
};

