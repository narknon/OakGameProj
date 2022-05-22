#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RandomActionPair.generated.h"

class UGbxAction;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FRandomActionPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> ActionClass;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    FRandomActionPair();
};

