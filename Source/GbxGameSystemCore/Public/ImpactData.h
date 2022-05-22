#pragma once
#include "CoreMinimal.h"
#include "ImpactTriggerInfo.h"
#include "GbxDataAsset.h"
#include "EImpactUsage.h"
#include "ImpactResponseEffect.h"
#include "ImpactResponseInfo.h"
#include "GbxSignificanceEvent.h"
#include "ImpactData.generated.h"

class UImpactData;
class UWwiseEvent;

UCLASS()
class GBXGAMESYSTEMCORE_API UImpactData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UImpactData* ParentImpact;
    
    UPROPERTY(EditAnywhere)
    EImpactUsage Usage;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideParentUnconditionalResponse;
    
    UPROPERTY(EditAnywhere)
    FImpactResponseEffect UnconditionalResponse;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideParentDefaultResponse;
    
    UPROPERTY(EditAnywhere)
    FImpactResponseEffect DefaultResponse;
    
    UPROPERTY(EditAnywhere)
    TArray<FImpactResponseInfo> ImpactResponses;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* DefaultImpactWwiseEvent;
    
    UPROPERTY(EditAnywhere)
    FImpactTriggerInfo TriggerInfo;
    
    UPROPERTY(EditAnywhere)
    FGbxSignificanceEvent DefaultSignificanceEvent;
    
    UPROPERTY(EditAnywhere)
    int32 LayeredPhysicalResponseQuality;
    
    UPROPERTY(EditAnywhere)
    int32 LayeredParentPhysicalResponseQuality;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideParentProximityThrottling;
    
    UPROPERTY(EditAnywhere)
    bool bEnableProximityThrottling;
    
public:
    UPROPERTY()
    int16 FrameLimit;
    
    UPROPERTY(EditAnywhere)
    bool bUseMassWwiseParameter;
    
    UImpactData();
};

