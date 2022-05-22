#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxLevelSequenceBoundActorSlot.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GBXLEVELSEQUENCE_API FGbxLevelSequenceBoundActorSlot {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid BindingID;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> BoundActor;
    
    FGbxLevelSequenceBoundActorSlot();
};

