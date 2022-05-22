#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "WheelState.h"
#include "Engine/EngineTypes.h"
#include "CarnivoraTread.generated.h"

class UInstancedStaticMeshComponent;
class USplineComponent;
class UStaticMesh;
class USkeletalMeshComponent;
class UPrimitiveComponent;

UCLASS()
class OAKGAME_API ACarnivoraTread : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USplineComponent* TreadSpline;
    
    UPROPERTY(EditAnywhere)
    int32 NumberOfPlate;
    
    UPROPERTY(EditAnywhere)
    FWheelState TreadState;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* PlateMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USkeletalMeshComponent* TreadSKComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WheelRotationForward;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WheelRotationBackward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UInstancedStaticMeshComponent* InstancedPlates;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DotRatioCollision;
    
    UPROPERTY(EditAnywhere)
    int32 WheelSplineIndexKey[4];
    
    UPROPERTY(EditAnywhere)
    float SuspensionWheelRadius;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<float> SuspensionAngles;
    
    ACarnivoraTread();
    UFUNCTION()
    void OnComponentHitCallback(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

