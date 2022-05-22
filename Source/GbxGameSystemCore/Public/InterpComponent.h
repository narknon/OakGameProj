#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EInterpMode.h"
#include "InterpComponent.generated.h"

class UPawnMovementComponent;
class AActor;
class AController;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UInterpComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bRemoveOnCompletion;
    
    UPROPERTY(Transient)
    bool bUpdateVelocity;
    
    UPROPERTY(Transient)
    bool bClearVelocity;
    
    UPROPERTY(Transient)
    bool bManualTick;
    
    UPROPERTY(Transient)
    bool bInterpYawOnly;
    
    UPROPERTY(Transient)
    bool bBallistics;
    
    UPROPERTY(Transient)
    bool bMatchRotationToVelocity;
    
    UPROPERTY(Transient)
    bool bSetToInitialWhenFinished;
    
    UPROPERTY(Transient)
    bool bRelative;
    
    UPROPERTY(Transient)
    AActor* InterpActor;
    
    UPROPERTY(Transient)
    AController* InterpController;
    
    UPROPERTY(Export, Transient)
    UPawnMovementComponent* InterpMoveComp;
    
    UPROPERTY(Transient)
    EInterpMode InterpLocMode;
    
    UPROPERTY(Transient)
    float InterpLocTime;
    
    UPROPERTY(Transient)
    float InterpLocElapsedTime;
    
    UPROPERTY(Transient)
    FVector InterpLocDiff;
    
    UPROPERTY(Transient)
    FVector InterpLocPrev;
    
    UPROPERTY(Transient)
    EInterpMode InterpRotMode;
    
    UPROPERTY(Transient)
    float InterpRotTime;
    
    UPROPERTY(Transient)
    float InterpRotElapsedTime;
    
    UPROPERTY(Transient)
    FRotator InterpRotDiff;
    
    UPROPERTY(Transient)
    FRotator InterpRotPrev;
    
    UPROPERTY(Transient)
    FRotator InitialRotation;
    
    UPROPERTY(Transient)
    FVector BallisticsStartLoc;
    
    UPROPERTY(Transient)
    FVector BallisticsStartVelocity;
    
    UPROPERTY(Transient)
    float BallisticsGravity;
    
    UPROPERTY(Transient)
    float BallisticsStartTime;
    
    UPROPERTY(Transient)
    float BallisticsTotalTime;
    
public:
    UInterpComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateVelocity(bool bNewUpdateVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetRemoveOnCompletion(bool bRemove);
    
    UFUNCTION(BlueprintCallable)
    void SetManualTick(bool bManual);
    
    UFUNCTION(BlueprintCallable)
    void SetClearVelocity(bool bNewClearVelocity);
    
    UFUNCTION(BlueprintCallable)
    void MatchRotationToVelocity(bool bInSetToInitialWhenFinished);
    
    UFUNCTION(BlueprintCallable)
    void ManualTick(float DeltaTime);
    
    UFUNCTION(BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable)
    void InterpRotation(FRotator NewRot, float InterpTime, bool bLinear, bool bYawOnly, bool bInRelative);
    
    UFUNCTION(BlueprintCallable)
    void InterpLocation(FVector NewLoc, float InterpTime, bool bLinear, bool bNoZ, bool bInRelative);
    
    UFUNCTION(BlueprintCallable)
    void InterpDeltaRotation(FRotator DeltaRot, float InterpTime, bool bLinear, bool bYawOnly, bool bInRelative);
    
    UFUNCTION(BlueprintCallable)
    void InterpDeltaLocation(FVector DeltaLoc, float InterpTime, bool bLinear, bool bNoZ, bool bInRelative);
    
    UFUNCTION(BlueprintCallable)
    FVector InterpBallisticsByTime(FVector StartLoc, FVector EndLoc, float LeapTime, float LeapGravity);
    
    UFUNCTION(BlueprintCallable)
    float InterpBallistics(FVector StartLoc, FVector EndLoc, float LeapSpeed, float LeapAngle);
    
};

