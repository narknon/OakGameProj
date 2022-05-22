#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FXVolumeManager.generated.h"

class AActor;

UCLASS()
class GBXGAMESYSTEMCORE_API UFXVolumeManager : public UObject {
    GENERATED_BODY()
public:
    UFXVolumeManager();
    UFUNCTION()
    void OnVolumeDestroyed(AActor* DestroyedActor);
    
    UFUNCTION()
    void OnPlayerDestroyed(AActor* DestroyedActor);
    
};

