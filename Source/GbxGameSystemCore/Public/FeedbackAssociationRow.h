#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FeedbackAssociationRow.generated.h"

class UFeedbackData;

USTRUCT()
struct FFeedbackAssociationRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UFeedbackData* Feedback;
    
    GBXGAMESYSTEMCORE_API FFeedbackAssociationRow();
};

