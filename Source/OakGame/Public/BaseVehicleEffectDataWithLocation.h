#pragma once
#include "CoreMinimal.h"
#include "BaseVehicleEffectData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BaseVehicleEffectDataWithLocation.generated.h"

UCLASS(Abstract, EditInlineNew)
class UBaseVehicleEffectDataWithLocation : public UBaseVehicleEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Socket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ComponentTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RelativeScale;
    
    UBaseVehicleEffectDataWithLocation();
};

