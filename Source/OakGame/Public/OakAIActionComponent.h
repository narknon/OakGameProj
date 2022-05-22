#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIActionComponent.h"
#include "OakAIActionComponent.generated.h"

class UAIAction;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakAIActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAIAction> VehicleDriverAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAIAction> VehicleTurretAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAIAction> VehiclePassengerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAIAction> VehicleScriptedLeadAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAIAction> TurretAction;
    
    UOakAIActionComponent();
};

