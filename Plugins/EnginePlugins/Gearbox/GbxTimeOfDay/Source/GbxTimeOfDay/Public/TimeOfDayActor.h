#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ControlledLight.h"
#include "TimeOfDayActor.generated.h"

class UExponentialHeightFogComponent;
class UPostProcessComponent;
class USkyLightComponent;
class UTimeOfDayComponent;
class UDirectionalLightComponent;
class UAtmosphericFogComponent;
class UStaticMeshComponent;
class ALight;
class UObject;

UCLASS()
class GBXTIMEOFDAY_API ATimeOfDayActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTimeOfDayComponent* TimeOfDayComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDirectionalLightComponent* DirectionalLightComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkyLightComponent* SkyLightComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAtmosphericFogComponent* AtmosphericFogComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UExponentialHeightFogComponent* ExponentialHeightFogComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY()
    TArray<ALight*> ControlledLightActors;
    
    UPROPERTY(EditAnywhere)
    TArray<FControlledLight> ControlledLights;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StartLayer;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<UObject>> EventListeners;
    
    ATimeOfDayActor();
    UFUNCTION(BlueprintPure)
    UDirectionalLightComponent* GetDirectionalLightComponent();
    
    UFUNCTION()
    void EnumerateLayerNames(TArray<FName>& OutLayerNames) const;
    
    UFUNCTION(BlueprintCallable)
    void AddEventListener(UObject* InListener);
    
};

