#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "CustomizationList.generated.h"

class UGbxCustomizationData;

UCLASS()
class OAKGAME_API UCustomizationList : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UGbxCustomizationData*> CustomizationList;
    
    UCustomizationList();
};

