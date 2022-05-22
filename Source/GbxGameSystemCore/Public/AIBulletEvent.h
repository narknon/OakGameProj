#pragma once
#include "CoreMinimal.h"
#include "AIBulletEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FAIBulletEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Instigator;
    
    FAIBulletEvent();
};

