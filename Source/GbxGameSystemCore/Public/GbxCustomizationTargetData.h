#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxCustomizationTargetData.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxCustomizationTargetData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText DisplayName;
    
    UGbxCustomizationTargetData();
};

