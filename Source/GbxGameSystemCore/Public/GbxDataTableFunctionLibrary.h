#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataTableValueHandle.h"
#include "GbxDataTableFunctionLibrary.generated.h"

class UDataTable;
class UObject;
class UScriptStruct;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxDataTableFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxDataTableFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static float GetDataTableValueFromHandle(const FDataTableValueHandle& ValueHandle, UObject* ContextSource, float DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDataTableValue(UDataTable* Table, FName RowName, FName ValueName, UScriptStruct* ValueInStructType, int32& OutValue);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_DataTableValueHandleToString(const FDataTableValueHandle& ValueHandle);
    
};

