#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAspectData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VehicleAttachSlotBlueprintAspectData.generated.h"

class AActor;

UCLASS(EditInlineNew)
class UVehicleAttachSlotBlueprintAspectData : public UOakVehicleAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TSoftClassPtr<AActor> ActorToCopy;
    
    UPROPERTY(EditInstanceOnly)
    FName SocketName;
    
    UPROPERTY(EditInstanceOnly)
    FVector LocalOffset;
    
    UPROPERTY(EditInstanceOnly)
    FRotator LocalRotationOffset;
    
    UPROPERTY(EditInstanceOnly)
    bool bWeldSimulatedBodies;
    
    UPROPERTY(EditInstanceOnly)
    bool bWeldedBodiesShouldModifyPhysicalProperties;
    
    UPROPERTY(EditInstanceOnly)
    bool bForwardDamageToParent;
    
    UPROPERTY(EditInstanceOnly)
    bool bAttachToActor;
    
    UVehicleAttachSlotBlueprintAspectData();
};

