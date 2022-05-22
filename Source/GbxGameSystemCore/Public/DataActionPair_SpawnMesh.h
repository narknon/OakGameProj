#pragma once
#include "CoreMinimal.h"
#include "DataActionPair_Base.h"
#include "GameplayTagContainer.h"
#include "DataActionPair_SpawnMesh.generated.h"

USTRUCT(BlueprintType)
struct FDataActionPair_SpawnMesh : public FDataActionPair_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ActionKey;
    
    GBXGAMESYSTEMCORE_API FDataActionPair_SpawnMesh();
};

