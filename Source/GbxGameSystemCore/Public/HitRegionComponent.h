#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InspectionInfoProvider.h"
#include "HitRegionState.h"
#include "DamageReactionEventSummary.h"
#include "HitRegionComponent.generated.h"

class UDamageComponent;
class UHitRegionData;
class USkeletalMeshComponent;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UHitRegionComponent : public UActorComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UHitRegionData* DefaultHitRegion;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FHitRegionState> HitRegions;
    
private:
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* CachedMesh;
    
    UPROPERTY(Export, Transient)
    UDamageComponent* CachedDamageComponent;
    
public:
    UHitRegionComponent();
protected:
    UFUNCTION(NetMulticast, Reliable)
    void TriggerClientEvent(const FDamageReactionEventSummary& EventSummary);
    
    UFUNCTION()
    void GetValidDamageEventFunctionNames(TArray<FName>& Array) const;
    
    UFUNCTION()
    void GetValidAssociatedComponentNames(TArray<FName>& Array) const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetHitRegionPercentHealth(UHitRegionData* HitRegion, UPrimitiveComponent* AssociatedComponent) const;
    
    UFUNCTION(BlueprintPure)
    float GetHitRegionMaxHealth(UHitRegionData* HitRegion, UPrimitiveComponent* AssociatedComponent) const;
    
    UFUNCTION(BlueprintPure)
    float GetHitRegionCurrentHealth(UHitRegionData* HitRegion, UPrimitiveComponent* AssociatedComponent) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

