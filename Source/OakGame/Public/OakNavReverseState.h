#pragma once
#include "CoreMinimal.h"
#include "OakNavReverseState.generated.h"

class UWorld;
class UOakNavComponent;

USTRUCT(BlueprintType)
struct FOakNavReverseState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UWorld* World;
    
    UPROPERTY(Export, Transient)
    UOakNavComponent* NavComp;
    
public:
    OAKGAME_API FOakNavReverseState();
};

