#pragma once
#include "CoreMinimal.h"
#include "GbxSignificanceEvent.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxSignificanceEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Event;
    
    FGbxSignificanceEvent();
};

