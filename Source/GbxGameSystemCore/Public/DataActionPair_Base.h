#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DataActionPair_Base.generated.h"

class UGbxAction;

USTRUCT()
struct GBXGAMESYSTEMCORE_API FDataActionPair_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> ActionValue;
    
    FDataActionPair_Base();
};

