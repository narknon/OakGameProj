#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakSpawnPoint.h"
#include "VehicleSpawnPointEventDelegate.h"
#include "RubberbandSpeedData.h"
#include "OakVehicleSpawnPoint.generated.h"

class AActor;
class USpawnPointComponent;
class UAIAction;

UCLASS()
class AOakVehicleSpawnPoint : public AOakSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FVehicleSpawnPointEvent OnVehicleSpawned;
    
    UPROPERTY(EditAnywhere)
    bool bDigistructOnSpawn;
    
    UPROPERTY(EditAnywhere)
    bool bSpawnAttached;
    
    UPROPERTY(EditAnywhere)
    bool bAllowInterpolationToGround;
    
protected:
    UPROPERTY(EditAnywhere)
    AActor* IntroSpline;
    
    UPROPERTY(EditAnywhere)
    float IntroSplineOffset;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> IntroSplineAIAction;
    
    UPROPERTY(EditAnywhere)
    AActor* PatrolSpline;
    
    UPROPERTY(EditAnywhere)
    float PatrolSplineOffset;
    
    UPROPERTY(EditAnywhere)
    bool bPatrolSpline;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> PatrolSplineAIAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAction> ReplaceDefaultAITree;
    
    UPROPERTY(EditAnywhere)
    float RubberbandWantedSpeed;
    
    UPROPERTY(EditAnywhere)
    FRubberbandSpeedData RubberbandSpeedData;
    
    UPROPERTY(EditAnywhere)
    bool bApplyRubberbandOnIntro;
    
public:
    AOakVehicleSpawnPoint();
private:
    UFUNCTION()
    void TriggerOnVehicleSpawned(USpawnPointComponent* SpawnerComponent, AActor* Actor);
    
protected:
    UFUNCTION()
    void PostSpawnIntro(AActor* Actor);
    
};

