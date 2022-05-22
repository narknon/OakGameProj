#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TritonZone.generated.h"

class UTritonAcousticDataComponent;

UCLASS(MinimalAPI)
class ATritonZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UTritonAcousticDataComponent* TritonDataComponent;
    
    ATritonZone();
};

