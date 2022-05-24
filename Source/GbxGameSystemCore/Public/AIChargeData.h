#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "ERelativeSizeCharge.h"
#include "ForceSelection.h"
#include "EChargeCurveType.h"
#include "Curves/CurveFloat.h"
#include "AIChargeData.generated.h"

class UGbxAction;
class UStanceDataProvider;
class UGbxAction_AICharge;
class UHitReactionTag;
class UCurveFloat;

UCLASS()
class GBXGAMESYSTEMCORE_API UAIChargeData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> StartAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> MissAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> StrikeAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> HitWallAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> ReachCliffAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> StopForFriendlyAction;
    
    UPROPERTY(EditAnywhere)
    bool bUseAnims;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_AICharge> ChargeAction;
    
    UPROPERTY(EditAnywhere)
    float StrikeAngle;
    
    UPROPERTY(EditAnywhere)
    float StrikeDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxTravelDistance;
    
    UPROPERTY(EditAnywhere)
    float MissDistance;
    
    UPROPERTY(EditAnywhere)
    float HitWallRadiusPct;
    
    UPROPERTY(EditAnywhere)
    float SlowStopTime;
    
    UPROPERTY(EditAnywhere)
    float SlowStopSpeedPercent;
    
    UPROPERTY(EditAnywhere)
    FForceSelection HitReactionForceSelection;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* HitReactionFriendly;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* HitReactionUnfriendly;
    
    UPROPERTY(EditAnywhere)
    bool bCauseHitReaction;
    
    UPROPERTY(EditAnywhere)
    ERelativeSizeCharge StopForFriendlyOfRelativeSize;
    
    UPROPERTY(EditAnywhere)
    float StopForFriendlyDistance;
    
    UPROPERTY(EditAnywhere)
    UStanceDataProvider* ChargeStance;
    
    UPROPERTY(EditAnywhere)
    EChargeCurveType SpeedOverrideType;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SpeedOverTime;
    
    UPROPERTY(EditAnywhere)
    EChargeCurveType RotationOverrideType;
    
    UPROPERTY(EditAnywhere)
    bool bRotationOverTime;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RotationOverTime;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RotationByDistance;
    
    UPROPERTY()
    UCurveFloat* SpeedCurve;
    
    UPROPERTY()
    UCurveFloat* RotationCurve;
    
    UPROPERTY()
    float HitReactionForce;
    
    UAIChargeData();
};

