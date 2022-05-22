#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AnimActionDef.h"
#include "GbxAnimTableRow.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FGbxAnimTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimActionDef Animation;
    
    FGbxAnimTableRow();
};

