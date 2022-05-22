#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "LandingInfo.h"
#include "LandingData.generated.h"

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API ULandingData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FLandingInfo> LandingData;
    
    ULandingData();
};

