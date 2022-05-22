#pragma once
#include "CoreMinimal.h"
#include "EActorTagQueryMode.h"
#include "ActorTagQuery.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FActorTagQuery {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIncludeComponents;
    
    UPROPERTY(EditAnywhere)
    EActorTagQueryMode Mode;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Tags;
    
    FActorTagQuery();
};

