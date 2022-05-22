#pragma once
#include "CoreMinimal.h"
#include "InteractiveObject.h"
#include "DecorationActorUsedEventDelegate.h"
#include "UseDefSelection.h"
#include "CrewQuartersDecorationDisplayActor.generated.h"

UCLASS()
class OAKGAME_API ACrewQuartersDecorationDisplayActor : public AInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDecorationActorUsedEvent OnDecorationPrimaryUse;
    
    UPROPERTY(BlueprintAssignable)
    FDecorationActorUsedEvent OnDecorationSecondaryUse;
    
    UPROPERTY(EditAnywhere)
    bool bSecondaryUseEnabled;
    
    UPROPERTY(EditAnywhere)
    FUseDefSelection SecondaryUseDef;
    
    ACrewQuartersDecorationDisplayActor();
};

