#pragma once
#include "CoreMinimal.h"
#include "GbxAISightEvent.generated.h"

class AActor;

USTRUCT()
struct GBXGAMESYSTEMCORE_API FGbxAISightEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* SeenActor;
    
    UPROPERTY()
    AActor* Observer;
    
    FGbxAISightEvent();
};

