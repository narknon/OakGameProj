#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LookAtPoint.generated.h"

class ULookAtPointComponent;

UCLASS()
class ALookAtPoint : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    ULookAtPointComponent* LookAtPointComponent;
    
public:
    ALookAtPoint();
};

