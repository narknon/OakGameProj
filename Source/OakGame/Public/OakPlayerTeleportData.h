#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Curves/CurveFloat.h"
#include "Engine/DataAsset.h"
#include "AttributeInitializationData.h"
#include "OakPlayerTeleportData.generated.h"

class UGbxAction;

UCLASS()
class UOakPlayerTeleportData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData TransitionDurationData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTriggerOakTriggersAlongTeleport;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve HorizontalCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve VerticalCurve;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction> AnimationClass;
    
public:
    UOakPlayerTeleportData();
};

