#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FogOfDiscoveryComponent.generated.h"

class UMaterialInstanceDynamic;
class UZoneMapData;
class UPawnAttachSlotComponent;
class APawn;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UFogOfDiscoveryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* FogOfDiscoveryMID;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UZoneMapData> CurrentLevelZoneMap;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UZoneMapData> PendingLevelZoneMap;
    
    UFogOfDiscoveryComponent();
    UFUNCTION(BlueprintCallable)
    void SaveFODTexture(bool bFast);
    
    UFUNCTION()
    void OnZoneMapMeshDataLoaded();
    
    UFUNCTION()
    void OnPlayerExitedVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnPlayerEnteringVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent);
    
    UFUNCTION()
    void OnCharacterChanged(APawn* NewPawn, APawn* OldPawn);
    
private:
    UFUNCTION()
    void DeferredInitializeZoneMapMesh();
    
};

