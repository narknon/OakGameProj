#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VehicleSplineInterface.h"
#include "VehicleSpline.generated.h"

class AVehicleSpline;
class USplineComponent;
class AGbxSpawner;

UCLASS()
class AVehicleSpline : public AActor, public IVehicleSplineInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export)
    USplineComponent* SplineComponent;
    
    UPROPERTY(EditAnywhere)
    AGbxSpawner* DropOffSpawner;
    
    UPROPERTY(EditAnywhere)
    AVehicleSpline* PostDropOffExitSpline;
    
    UPROPERTY(EditAnywhere)
    float ExitSequenceLeadInDistance;
    
    UPROPERTY(EditAnywhere)
    float DescentLeadInDistance;
    
public:
    AVehicleSpline();
    
    // Fix for true pure virtual functions not being implemented
};

