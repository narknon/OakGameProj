#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GenericStandInActor.generated.h"

class UGbxActionComponent;

UCLASS()
class AGenericStandInActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGbxActionComponent* ActionComponent;
    
public:
    AGenericStandInActor();
};

