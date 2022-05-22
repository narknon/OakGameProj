#pragma once
#include "CoreMinimal.h"
#include "ActorPartList.generated.h"

class UActorPartData;

USTRUCT(BlueprintType)
struct FActorPartList {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UActorPartData*> Parts;
    
    GBXGAMESYSTEMCORE_API FActorPartList();
};

