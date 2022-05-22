#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GbxNavAreaItem.h"
#include "GbxNavAreaData.generated.h"

UCLASS()
class GBXNAV_API UGbxNavAreaData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGbxNavAreaItem> NavAreas;
    
    UGbxNavAreaData();
};

