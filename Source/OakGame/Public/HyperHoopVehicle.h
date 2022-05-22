#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HyperHoopStateChangedDelegate.h"
#include "EHyperHoopState.h"
#include "HyperHoopVehicle.generated.h"

class AController;
class APawn;
class USplineFollowerComponent;
class UOakPawnAttachSlotComponent;

UCLASS()
class OAKGAME_API AHyperHoopVehicle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHyperHoopStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintReadOnly)
    EHyperHoopState State;
    
    UPROPERTY(EditDefaultsOnly)
    float DistanceFromEndDecelerate;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeMove;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayBeforeExitAnim;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineFollowerComponent* SplineFollowerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakPawnAttachSlotComponent* PawnAttachSlotComponent;
    
    AHyperHoopVehicle();
    UFUNCTION()
    void StartMovement();
    
    UFUNCTION()
    void StartDetatch();
    
    UFUNCTION(NetMulticast, Reliable)
    void SetupAndStart_Rep(APawn* Pawn, AActor* SplineCompToFollow, FName SplineComponentName, bool bIsReverse);
    
    UFUNCTION(BlueprintCallable)
    void SetupAndStart(AController* Cont, AActor* SplineActorToAttachTo, FName SplineComponentName, bool bIsReverse);
    
    UFUNCTION()
    void OnReachedEndOfSpline(USplineFollowerComponent* NewSplineFollowerComponent, AActor* SplineFollowerOwner);
    
    UFUNCTION()
    void OnReachedCallbackDistance(USplineFollowerComponent* NewSplineFollowerComponent, AActor* SplineFollowerOwner, const FString& CheckpointName);
    
    UFUNCTION()
    void OnDetachFinished(APawn* Pawn, AController* Controller);
    
    UFUNCTION()
    void OnAttachFinished(APawn* Pawn, AController* Controller);
    
};

