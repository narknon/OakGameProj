#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FeedbackTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct FFeedbackTableRowHandle : public FDataTableRowHandle {
    GENERATED_BODY()
public:
    GBXGAMESYSTEMCORE_API FFeedbackTableRowHandle();
};

