#pragma once
#include "CoreMinimal.h"
#include "AIAspect_Navigation.h"
#include "AIAspectSettings_VehicleEscortSpeed.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspect_VehicleEscortSpeed.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAIAspect_VehicleEscortSpeed : public UAIAspect_Navigation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_VehicleEscortSpeed EscortSettings;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector FindComponentKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector LocationKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector EscortLocationReferenceKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector EscortLocationOffsetKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector IsEscortingTargetActorInfoKey;
    
    UPROPERTY(EditAnywhere)
    bool bDebugTestDirectPath;
    
    UAIAspect_VehicleEscortSpeed();
};

