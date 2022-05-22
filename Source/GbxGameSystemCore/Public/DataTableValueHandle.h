#pragma once
#include "CoreMinimal.h"
#include "DataTableValueHandle.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FDataTableValueHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ValueName;
    
    FDataTableValueHandle();
};

