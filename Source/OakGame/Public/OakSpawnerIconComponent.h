#pragma once
#include "CoreMinimal.h"
#include "OakMissionIconComponent.h"
#include "SpawnerActorData.h"
#include "OakSpawnerIconComponent.generated.h"

class USpawnerComponent;
class ASpawner;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakSpawnerIconComponent : public UOakMissionIconComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAddMissionIconToSpawnedActors;
    
    UPROPERTY(EditAnywhere)
    bool bDisplayIconWhenActorsSuspended;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysDisplayIcon;
    
    UOakSpawnerIconComponent();
    UFUNCTION()
    void OnVehicleActorSpawnedEvent(ASpawner* Spawner, const FSpawnerActorData& ActorData);
    
    UFUNCTION()
    void OnSpawnedActorDiedOrSuspend(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
    UFUNCTION()
    void OnActorSpawnedOrUnsuspend(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
private:
    UFUNCTION()
    USpawnerComponent* GetMySpawnerComponent();
    
    UFUNCTION()
    void AddMissionIconComponentToActor(AActor* Actor);
    
};

