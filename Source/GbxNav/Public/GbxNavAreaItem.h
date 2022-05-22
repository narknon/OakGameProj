#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxNavAreaItem.generated.h"

class UGbxNavArea;
class UNavArea;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxNavAreaItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxNavArea* ;
    
    UPROPERTY(EditAnywhere)
    float CostScale;
    
    UPROPERTY()
    TSubclassOf<UNavArea> NavArea;
    
    FGbxNavAreaItem();
};

