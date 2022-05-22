#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense_Sight.h"
#include "AISense_GbxSight.generated.h"

class UObject;
class AActor;

UCLASS()
class GBXGAMESYSTEMCORE_API UAISense_GbxSight : public UAISense_Sight {
    GENERATED_BODY()
public:
    UAISense_GbxSight();
    UFUNCTION(BlueprintCallable)
    static void ForceSightEvent(UObject* WorldContext, AActor* SeenActor, AActor* LookingActor);
    
};

