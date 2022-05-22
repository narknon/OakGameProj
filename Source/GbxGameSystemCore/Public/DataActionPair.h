#pragma once
#include "CoreMinimal.h"
#include "DataActionPair_Base.h"
#include "GameplayTagContainer.h"
#include "DataActionPair.generated.h"

USTRUCT(BlueprintType)
struct FDataActionPair : public FDataActionPair_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ActionKey;
    
    GBXGAMESYSTEMCORE_API FDataActionPair();
};

