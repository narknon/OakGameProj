#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Perch.generated.h"

class UPerchComponent;

UCLASS()
class APerch : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    UPerchComponent* PerchComponent;
    
public:
    APerch();
};

