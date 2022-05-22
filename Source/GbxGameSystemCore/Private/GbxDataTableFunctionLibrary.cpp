#include "GbxDataTableFunctionLibrary.h"

class UDataTable;
class UObject;
class UScriptStruct;

float UGbxDataTableFunctionLibrary::GetDataTableValueFromHandle(const FDataTableValueHandle& ValueHandle, UObject* ContextSource, float DefaultValue) {
    return 0.0f;
}

bool UGbxDataTableFunctionLibrary::GetDataTableValue(UDataTable* Table, FName RowName, FName ValueName, UScriptStruct* ValueInStructType, int32& OutValue) {
    return false;
}

FString UGbxDataTableFunctionLibrary::Conv_DataTableValueHandleToString(const FDataTableValueHandle& ValueHandle) {
    return TEXT("");
}

UGbxDataTableFunctionLibrary::UGbxDataTableFunctionLibrary() {
}

