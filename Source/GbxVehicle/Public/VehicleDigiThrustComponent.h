#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "GameResourcePoolReference.h"
#include "UObject/NoExportTypes.h"
#include "VehicleDigiThrustComponent.generated.h"

class AVehicle;
class UGbxCondition;
class UGameResourcePoolData;
class UGbxAction;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, Config=GbxVehicle, meta=(BlueprintSpawnableComponent))
class GBXVEHICLE_API UVehicleDigiThrustComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDigiThrustEvent);
    
    UPROPERTY(BlueprintAssignable)
    FDigiThrustEvent OnDigiThrustStarted;
    
    UPROPERTY(BlueprintAssignable)
    FDigiThrustEvent OnDigiThrustCollision;
    
    UPROPERTY(BlueprintAssignable)
    FDigiThrustEvent OnDigiThrustEnd;
    
    UPROPERTY(BlueprintAssignable)
    FDigiThrustEvent OnDigiThrustEndFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportMaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseTeleportDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReorientOnTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReorientationRatio;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* TeleportCondition;
    
    UPROPERTY(EditAnywhere)
    UGameResourcePoolData* BoostPoolData;
    
    UPROPERTY(EditAnywhere)
    int32 NumChargesOnFullResource;
    
private:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float TraceStepLength;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float GroundDetectionTraceLength;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float GroundTraceRadius;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float PathPtGroundHeight;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float ValidFloorAngle;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float FloorMaxAngleDiffBetweenGroundTraces;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float FloorMaxHeightDiffBetweenGroundTraces;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float RefUpBlendWeight;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bKeepLastValidGroundUpWhenInAir;
    
    UPROPERTY(Transient)
    AVehicle* Vehicle;
    
    UPROPERTY(Replicated, Transient)
    FGameResourcePoolReference BoostPool;
    
    UPROPERTY(Replicated, Transient)
    bool bTeleportRequested;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> DigithrustInAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> DigithrustOutAction;
    
    UPROPERTY(EditAnywhere)
    float DigithrustOutActionDuration;
    
public:
    UVehicleDigiThrustComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SetTeleportDirection(const FVector& WantedDirection);
    
    UFUNCTION(BlueprintCallable)
    void RequestTeleport();
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_OnDigiThrustStarted();
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_OnDigiThrustEndFinished();
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_OnDigiThrustEnd();
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_OnDigiThrustCollision();
    
    UFUNCTION(BlueprintPure)
    bool IsTeleporting() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxBoostPoolValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentBoostPoolValue() const;
    
};

