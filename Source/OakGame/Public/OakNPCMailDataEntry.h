#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OakNPCMailDataEntry.generated.h"

class UItemPoolData;

USTRUCT(BlueprintType)
struct FOakNPCMailDataEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText SenderDisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Subject;
    
    UPROPERTY(EditAnywhere)
    FText Body;
    
    UPROPERTY(EditDefaultsOnly)
    UItemPoolData* ItemPoolReward;
    
    OAKGAME_API FOakNPCMailDataEntry();
};

