#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIDodgeInstance.generated.h"

class UGbxAction;
class AActor;

USTRUCT(BlueprintType)
struct FAIDodgeInstance {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TSubclassOf<UGbxAction> Action;
    
    UPROPERTY(Transient)
    AActor* SourceActor;
    
    GBXGAMESYSTEMCORE_API FAIDodgeInstance();
};

