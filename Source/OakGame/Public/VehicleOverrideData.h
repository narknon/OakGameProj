#pragma once
#include "CoreMinimal.h"
#include "VehicleOverrideData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct OAKGAME_API FVehicleOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> PartSelections;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> Property;
    
    UPROPERTY(EditAnywhere, Instanced)
    UObject* Data;
    
    UPROPERTY(EditAnywhere, Transient)
    UClass* DataType;
    
    FVehicleOverrideData();
};

