#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ChallengeCategoryData.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UChallengeCategoryData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText CategoryName;
    
    UPROPERTY(EditAnywhere)
    float ProgressWeight;
    
    UChallengeCategoryData();
};

