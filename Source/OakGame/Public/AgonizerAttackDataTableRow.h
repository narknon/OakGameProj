#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AgonizerAttackDataTableRow.generated.h"

USTRUCT()
struct FAgonizerAttackDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CooldownMin;
    
    UPROPERTY(EditAnywhere)
    float CooldownMax;
    
    OAKGAME_API FAgonizerAttackDataTableRow();
};

