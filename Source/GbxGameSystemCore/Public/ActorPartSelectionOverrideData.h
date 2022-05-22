#pragma once
#include "CoreMinimal.h"
#include "ActorPartList.h"
#include "ActorPartSelectionOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FActorPartSelectionOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FActorPartList> PreferredParts;
    
    GBXGAMESYSTEMCORE_API FActorPartSelectionOverrideData();
};

