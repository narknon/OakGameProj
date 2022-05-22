#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OakManagedActorManager.generated.h"

class AActor;

UCLASS()
class OAKGAME_API UOakManagedActorManager : public UObject {
    GENERATED_BODY()
public:
    UOakManagedActorManager();
    UFUNCTION()
    void NotifyActorDestroyed(AActor* TheActor);
    
};

