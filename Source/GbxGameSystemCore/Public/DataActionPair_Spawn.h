#pragma once
#include "CoreMinimal.h"
#include "DataActionPair_Base.h"
#include "GameplayTagContainer.h"
#include "DataActionPair_Spawn.generated.h"

USTRUCT(BlueprintType)
struct FDataActionPair_Spawn : public FDataActionPair_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ActionKey;
    
    GBXGAMESYSTEMCORE_API FDataActionPair_Spawn();
};

