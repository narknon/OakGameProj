#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "EVehicleEffectEvent.h"
#include "BaseVehicleEffectData.generated.h"

class UGbxCondition;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class UBaseVehicleEffectData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Event;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EVehicleEffectEvent EffectEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPlayerOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bExcludedInSplitScreen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGbxCondition* StartCondition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGbxCondition* StopCondition;
    
    UBaseVehicleEffectData();
};

