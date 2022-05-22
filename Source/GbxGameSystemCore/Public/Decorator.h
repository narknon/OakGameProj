#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Decorator.generated.h"

UCLASS(Abstract)
class GBXGAMESYSTEMCORE_API ADecorator : public AActor {
    GENERATED_BODY()
public:
    ADecorator();
};

