#pragma once
#include "CoreMinimal.h"
#include "InteractiveObject.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoundaryTurret.generated.h"

class AOakVehicle;
class UFeedbackData;
class UWwiseEvent;
class UBoxComponent;
class USkeletalMeshComponent;
class UPrimitiveComponent;
class AOakCharacter_Player;
class AActor;

UCLASS()
class OAKGAME_API ABoundaryTurret : public AInteractiveObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 StartingDistance;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 WarningZoneDistance;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 WarningZoneWidth;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 ZoneHeight;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 KillExtent;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    int32 ZoneVerticalOffset;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool bShowDebugZones;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFeedbackData* WarningFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* WarningStartAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* WarningStopAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWwiseEvent* KillAudioEvent;
    
    UPROPERTY(Export, Transient)
    UBoxComponent* WarningTriggerComponent;
    
    UPROPERTY(Export, Transient)
    UBoxComponent* KillTriggerComponent;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* TurretMeshComponent;
    
    UPROPERTY(Transient)
    TArray<AOakCharacter_Player*> AllTrackedTargets;
    
    UPROPERTY(Transient)
    TArray<AOakVehicle*> OverlappedVehicles;
    
    UPROPERTY(Replicated, Transient)
    AOakCharacter_Player* PriorityTrackedTarget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName WarningTriggerName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName KillTriggerName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName TurretMeshName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName FXSwitchName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LaserSwitchName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName FXStateName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LaserStateName;
    
public:
    ABoundaryTurret();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void WarningTrigger_OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void WarningTrigger_OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayKillEffects(const FVector& TargetLocation);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_PlayKillEffects(const FVector& TargetLocation);
    
    UFUNCTION()
    void KillTrigger_OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void KillTrigger_OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    AOakCharacter_Player* GetTrackedTarget() const;
    
};

