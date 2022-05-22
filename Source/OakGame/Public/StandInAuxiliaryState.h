#pragma once
#include "CoreMinimal.h"
#include "FrontendStandInAuxiliaryActorData.h"
#include "StandInAuxiliaryState.generated.h"

class AStandInAuxiliaryActor;

USTRUCT(BlueprintType)
struct FStandInAuxiliaryState {
    GENERATED_BODY()
public:
    UPROPERTY()
    AStandInAuxiliaryActor* Actor;
    
    UPROPERTY()
    FFrontendStandInAuxiliaryActorData TemplateData;
    
    OAKGAME_API FStandInAuxiliaryState();
};

