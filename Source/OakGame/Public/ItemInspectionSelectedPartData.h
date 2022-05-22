#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemInspectionSelectedPartData.generated.h"

class UGbxAction_CoordinatedEffect;

USTRUCT(BlueprintType)
struct FItemInspectionSelectedPartData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_CoordinatedEffect> SelectedPartCE;
    
    OAKGAME_API FItemInspectionSelectedPartData();
};

