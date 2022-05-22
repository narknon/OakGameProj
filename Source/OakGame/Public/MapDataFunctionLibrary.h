#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MapDataFunctionLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class UMapDataFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMapDataFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static uint8 GetZoneNameEnumValue(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FName GetZoneName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static uint8 GetMapNameEnumValue(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FName GetMapName(UObject* WorldContextObject);
    
};

