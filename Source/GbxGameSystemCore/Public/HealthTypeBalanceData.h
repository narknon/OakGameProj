#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HealthTypeBalanceData.generated.h"

USTRUCT()
struct FHealthTypeBalanceData : public FTableRowBase {
    GENERATED_BODY()
public:
    GBXGAMESYSTEMCORE_API FHealthTypeBalanceData();
};

