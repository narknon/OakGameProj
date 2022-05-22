#pragma once
#include "CoreMinimal.h"
#include "ActivityFeedActionData.h"
#include "ActivityFeedStartGameActionData.generated.h"

UCLASS()
class UActivityFeedStartGameActionData : public UActivityFeedActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString CommandLineArgumentsString;
    
    UActivityFeedStartGameActionData();
};

