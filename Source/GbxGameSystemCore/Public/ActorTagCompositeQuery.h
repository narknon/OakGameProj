#pragma once
#include "CoreMinimal.h"
#include "ActorTagQuery.h"
#include "ActorTagCompositeQuery.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FActorTagCompositeQuery {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FActorTagQuery> Queries;
    
    FActorTagCompositeQuery();
};

