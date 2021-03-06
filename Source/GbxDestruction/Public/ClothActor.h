#pragma once
#include "CoreMinimal.h"
#include "WindDirectionalSensitivity.h"
#include "GameFramework/Actor.h"
#include "ClothActor.generated.h"

UCLASS(Abstract)
class GBXDESTRUCTION_API AClothActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FWindDirectionalSensitivity WindSensitivity;
    
    AClothActor();
};

