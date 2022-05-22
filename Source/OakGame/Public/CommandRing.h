#pragma once
#include "CoreMinimal.h"
#include "ECommandRingLocationType.h"
#include "CommandRingTarget.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "ECommandRingReferenceActorType.h"
#include "ECommandRingAlignmentType.h"
#include "UObject/NoExportTypes.h"
#include "CommandRing.generated.h"

class USceneComponent;

UCLASS()
class ACommandRing : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommandRingReleasedTargetEvent, const FCommandRingTarget&, TargetInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommandRingAcquiredTargetEvent, const FCommandRingTarget&, TargetInfo);
    
    UPROPERTY(BlueprintAssignable)
    FCommandRingAcquiredTargetEvent OnAcquiredTarget;
    
    UPROPERTY(BlueprintAssignable)
    FCommandRingReleasedTargetEvent OnReleasedTarget;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 bOnlyVisibleToOwner: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ECommandRingReferenceActorType RelativeActorType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ECommandRingLocationType RelativeLocationType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RelativeLocationSearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ECommandRingAlignmentType RelativeAlignmentType;
    
    UPROPERTY(Transient)
    FCommandRingTarget TargetInfo;
    
public:
    ACommandRing();
    UFUNCTION(BlueprintCallable)
    void UpdateTarget(AActor* Target, FVector Location, FRotator Rotation, USceneComponent* Base, FVector SurfaceNormal);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bIsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseTarget();
    
    UFUNCTION(BlueprintPure)
    bool IsTargetValid() const;
    
    UFUNCTION(BlueprintPure)
    FCommandRingTarget GetTarget() const;
    
    UFUNCTION(BlueprintPure)
    static FVector GetCommandRingTargetWorldLocation(const FCommandRingTarget& NewTargetInfo);
    
    UFUNCTION(BlueprintPure)
    FRotator ComputeRotation(ECommandRingAlignmentType Type, AActor* RefActor, FRotator RefRotation, FVector SurfaceNormal) const;
    
    UFUNCTION(BlueprintPure)
    FVector ComputeLocation(ECommandRingLocationType Type, AActor* RefActor, FVector RefLocation, float SearchDistance, FVector& SurfaceNormal) const;
    
};

