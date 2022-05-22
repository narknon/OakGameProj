#pragma once
#include "CoreMinimal.h"
#include "AIAction_ActionAtPoint.h"
#include "GbxParam.h"
#include "EMeleeRotationOption.h"
#include "UObject/NoExportTypes.h"
#include "AIAction_SimpleRangedAttack.generated.h"

class UEnvQueryTestAsset;
class UEnvQueryTest_Trace;
class UEnvQuery;

UCLASS(CollapseCategories, EditInlineNew, Config=Game)
class GBXAI_API UAIAction_SimpleRangedAttack : public UAIAction_ActionAtPoint {
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
    FGbxParam MinRepositionDistance;
    
    UPROPERTY(EditAnywhere)
    TArray<UEnvQueryTestAsset*> AdditionalTests;
    
    UPROPERTY(EditAnywhere)
    float SphereTraceExtent;
    
    UPROPERTY(EditAnywhere)
    bool bDoArcTrace;
    
    UPROPERTY(EditAnywhere)
    FGbxParam ArcSpeed;
    
    UPROPERTY(EditAnywhere)
    FGbxParam ArcAnglePercent;
    
    UPROPERTY(EditAnywhere)
    FGbxParam OverrideAngle;
    
    UPROPERTY(EditAnywhere)
    bool bUseOverrideAngle;
    
    UPROPERTY(EditAnywhere)
    EMeleeRotationOption FacingPolicyDuringAction;
    
    UPROPERTY(EditAnywhere)
    bool bAlignBodyWithTarget;
    
    UPROPERTY(EditAnywhere)
    bool bKeepFacingTargetOnStop;
    
    UPROPERTY(EditAnywhere)
    bool bDistanceToTargetTestShouldFilterOnly;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultEnvQuery;
    
    UPROPERTY(GlobalConfig)
    FSoftObjectPath DefaultTraceTests;
    
    UPROPERTY()
    UEnvQuery* DefaultEnvQueryAsset;
    
    UPROPERTY()
    UEnvQuery* DefaultTraceTestsAsset;
    
    UPROPERTY()
    UEnvQueryTest_Trace* TraceTestInstance;
    
    UPROPERTY()
    uint8 SimpleRangedAttackVersion;
    
public:
    UAIAction_SimpleRangedAttack();
};

