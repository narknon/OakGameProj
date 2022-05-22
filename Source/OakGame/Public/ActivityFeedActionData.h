#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ActivityFeedActionData.generated.h"

UCLASS(Abstract, BlueprintType)
class UActivityFeedActionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString CaptionString;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString ButtonImageURL;
    
    UActivityFeedActionData();
};

