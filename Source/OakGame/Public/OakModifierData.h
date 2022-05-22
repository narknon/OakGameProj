#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "OakModifierData.generated.h"

USTRUCT(BlueprintType)
struct FOakModifierData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle TargetResolver;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle Effect;
    
    UPROPERTY(EditAnywhere)
    float MinValue;
    
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    OAKGAME_API FOakModifierData();
};

