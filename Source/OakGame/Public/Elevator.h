#pragma once
#include "CoreMinimal.h"
#include "InteractiveObject.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ElevatorEventDelegate.h"
#include "Elevator.generated.h"

class UFeedbackData;
class UBoxComponent;
class USplineComponent;
class UStaticMeshComponent;
class UWwiseEvent;
class UTimelineComponent;
class UCurveFloat;
class UGbxNavMeshSectionComponent;
class AOakCharacter;
class UPrimitiveComponent;
class AActor;

UCLASS()
class AElevator : public AInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* ElevatorMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* Floor1Position;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UStaticMeshComponent* Floor2Position;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTimelineComponent* ElevatorMovementTimeline;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UGbxNavMeshSectionComponent* NavMeshSection;
    
    UPROPERTY(Export, Transient)
    USplineComponent* ElevatorMovementSpline;
    
    UPROPERTY(EditAnywhere)
    bool bForceBaseBoundedCharacters;
    
    UPROPERTY(EditAnywhere)
    bool bCylindricalElevatorBounds;
    
    UPROPERTY(EditAnywhere)
    bool bFastAttachedMoveBasedCharacters;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UBoxComponent* ElevatorBounds;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UBoxComponent* ElevatorMovementBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SwitchDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStartAtFloor2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseTimeForTravel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElevatorSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ElevatorTravelTime;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<AInteractiveObject*> InternalButtons;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<AInteractiveObject*> Floor1RecallButtons;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<AInteractiveObject*> Floor2RecallButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* StartedMovingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* StoppedMovingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFeedbackData* StartMovingFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFeedbackData* StopMovingFeedback;
    
    UPROPERTY(EditAnywhere)
    bool bCrushPlayers;
    
protected:
    UPROPERTY(Replicated)
    float TimelinePlayRate;
    
    UPROPERTY(Replicated)
    float RepOverrideTimelinePlayRate;
    
    UPROPERTY(ReplicatedUsing=OnRep_Floor1Location)
    FVector Floor1Location;
    
    UPROPERTY(ReplicatedUsing=OnRep_Floor2Location)
    FVector Floor2Location;
    
    UPROPERTY(ReplicatedUsing=OnRep_Floor1Rotation)
    FQuat Floor1Rotation;
    
    UPROPERTY(ReplicatedUsing=OnRep_Floor2Rotation)
    FQuat Floor2Rotation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_DesiredFloor)
    int32 DesiredFloor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_StoppedBetweenFloor)
    bool bStoppedBetweenFloor;
    
    UPROPERTY(ReplicatedUsing=OnRep_CurrentPercentage)
    float CurrentPercentage;
    
    UPROPERTY(Replicated)
    bool bHasEverMoved;
    
    UPROPERTY(BlueprintAssignable)
    FElevatorEvent OnElevatorStartsMoving;
    
    UPROPERTY(BlueprintAssignable)
    FElevatorEvent OnElevatorReachedFloor;
    
    UPROPERTY(BlueprintAssignable)
    FElevatorEvent OnElevatorReachedFloor1;
    
    UPROPERTY(BlueprintAssignable)
    FElevatorEvent OnElevatorReachedFloor2;
    
    UPROPERTY(Transient)
    TArray<AOakCharacter*> OverlappingCharacters;
    
    UPROPERTY(Transient)
    TArray<AOakCharacter*> LastUpdateBoundedCharacters;
    
public:
    AElevator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void TimelineFinishedCallback();
    
    UFUNCTION()
    void TimelineCallback(float Val);
    
public:
    UFUNCTION(BlueprintCallable)
    void TeleportFloor2(FVector NewLocation, FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void TeleportFloor1(FVector NewLocation, FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetFloor2Rotation(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetFloor2Location(FVector NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetFloor1Rotation(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetFloor1Location(FVector NewLocation);
    
protected:
    UFUNCTION()
    void OnRep_StoppedBetweenFloor();
    
    UFUNCTION()
    void OnRep_Floor2Rotation();
    
    UFUNCTION()
    void OnRep_Floor2Location();
    
    UFUNCTION()
    void OnRep_Floor1Rotation();
    
    UFUNCTION()
    void OnRep_Floor1Location();
    
    UFUNCTION()
    void OnRep_DesiredFloor();
    
    UFUNCTION()
    void OnRep_CurrentPercentage();
    
    UFUNCTION()
    void OnEndBoundsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnBeginBoundsOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetFloor2Location();
    
    UFUNCTION(BlueprintCallable)
    FVector GetFloor1Location();
    
    UFUNCTION()
    void ElevatorTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void ElevatorStopMovement();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void ElevatorStartsMoving();
    
    UFUNCTION(BlueprintNativeEvent)
    void ElevatorReachedFloor2();
    
    UFUNCTION(BlueprintNativeEvent)
    void ElevatorReachedFloor1();
    
    UFUNCTION(BlueprintNativeEvent)
    void ElevatorReachedFloor();
    
public:
    UFUNCTION(BlueprintCallable)
    void ElevatorMoveToFloor2(float OverrideSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ElevatorMoveToFloor1(float OverrideSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ElevatorInternalButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void ElevatorFloor2RecallPressed();
    
    UFUNCTION(BlueprintCallable)
    void ElevatorFloor1RecallPressed();
    
    UFUNCTION(BlueprintCallable)
    void ElevatorButtonPressed(AInteractiveObject* PressedButton);
    
    UFUNCTION(BlueprintCallable)
    void ChangeElevatorTravelTime(float NewTime);
    
    UFUNCTION(BlueprintCallable)
    void ChangeElevatorSpeed(float NewSpeed);
    
};

