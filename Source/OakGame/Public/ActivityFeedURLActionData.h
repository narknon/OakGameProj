#pragma once
#include "CoreMinimal.h"
#include "ActivityFeedActionData.h"
#include "ActivityFeedURLActionData.generated.h"

UCLASS()
class UActivityFeedURLActionData : public UActivityFeedActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString URLString;
    
    UActivityFeedURLActionData();
};

