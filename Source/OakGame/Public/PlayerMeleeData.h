#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "AttributeInitializationData.h"
#include "MeleeReverseImpactEntry.h"
#include "Engine/EngineTypes.h"
#include "PlayerMeleeData.generated.h"

class UImpactData;
class UDamageData;
class UGbxCondition;
class UFeedbackData;
class UGbxAction;

UCLASS()
class UPlayerMeleeData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* OverrideCondition;
    
    UPROPERTY(EditAnywhere)
    int32 OverridePriority;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyOverrideOnSuccess;
    
    UPROPERTY(EditAnywhere)
    bool bCanHitUntargetables;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetHoming;
    
    UPROPERTY(EditAnywhere)
    float TargetMaxDistance;
    
    UPROPERTY(EditAnywhere)
    float ImpactDistance;
    
    UPROPERTY(EditAnywhere)
    float TargetMaxAngleYaw;
    
    UPROPERTY(EditAnywhere)
    float TargetMaxAngleUpPitch;
    
    UPROPERTY(EditAnywhere)
    float TargetMaxAngleDownPitch;
    
    UPROPERTY(EditAnywhere)
    float MaxPitchUpAngle;
    
    UPROPERTY(EditAnywhere)
    float RotateInterpSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxYawRate;
    
    UPROPERTY(EditAnywhere)
    float MaxPitchRate;
    
    UPROPERTY(EditAnywhere)
    float SocketProxomity;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DistanceFormula;
    
    UPROPERTY(EditAnywhere)
    float MaxSuccessMeleeHeightOffsetWhenEnemyBelow;
    
    UPROPERTY(EditAnywhere)
    float MaxSuccessMeleeHeightOffsetWhenEnemyAbove;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> SuccessAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> FailureAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageData> DamageData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDamageData> SuccessDamageData;
    
    UPROPERTY(EditAnywhere)
    float MeleeCooldown;
    
    UPROPERTY(EditAnywhere)
    float MeleeMissCooldown;
    
    UPROPERTY(EditAnywhere)
    UImpactData* MeleeImpact;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* SuccessMeleeFeedback;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* FailMeleeFeedback;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ImpactRange;
    
    UPROPERTY(EditAnywhere)
    bool bReverseImpact;
    
    UPROPERTY(EditAnywhere)
    float DefaultReverseImpactForce;
    
    UPROPERTY(EditAnywhere)
    TArray<FMeleeReverseImpactEntry> Thresholds;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> UntargetableTraceChannel;
    
    UPROPERTY(EditAnywhere)
    float UntargetableTraceRadius;
    
    UPlayerMeleeData();
};

