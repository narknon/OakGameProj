#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "Agonizer9kFollowSpot.generated.h"

class USceneComponent;
class USpotLightComponent;
class UStaticMeshComponent;

UCLASS()
class OAKGAME_API AAgonizer9kFollowSpot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    USceneComponent* SceneRootComp;
    
    UPROPERTY(EditAnywhere, Export)
    UStaticMeshComponent* LightConeComp;
    
    UPROPERTY(EditAnywhere, Export)
    USpotLightComponent* SpotLightComp;
    
    AAgonizer9kFollowSpot();
    UFUNCTION(BlueprintCallable)
    void TurnOn();
    
    UFUNCTION(BlueprintCallable)
    void TurnOff();
    
    UFUNCTION(BlueprintCallable)
    void StartRotating(float RotationTime, FRotator RotationDelta);
    
    UFUNCTION(BlueprintCallable)
    void LookAtTarget(float RotationTime, AActor* Target);
    
};

