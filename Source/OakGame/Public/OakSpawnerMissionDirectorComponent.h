#pragma once
#include "CoreMinimal.h"
#include "OakMissionDirectorComponent.h"
#include "OakSpawnerMissionDirectorComponent.generated.h"

class USpawnerComponent;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakSpawnerMissionDirectorComponent : public UOakMissionDirectorComponent {
    GENERATED_BODY()
public:
    UOakSpawnerMissionDirectorComponent();
    UFUNCTION()
    void OnSpawnerEnabled();
    
    UFUNCTION()
    void OnSpawnerDisabled();
    
    UFUNCTION()
    void OnSpawnedActorDiedOrSuspend(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
    UFUNCTION()
    void OnActorSpawnedOrUnsuspend(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
};

