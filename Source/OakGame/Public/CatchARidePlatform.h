#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "CatchARidePlatform.generated.h"

class AOakVehicle;
class USocketComponent;
class UBoxComponent;
class UStaticMeshComponent;
class UPrimitiveComponent;

UCLASS()
class ACatchARidePlatform : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UStaticMeshComponent* PlatformMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UBoxComponent* PlatformSafeZone;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UBoxComponent* PlatformSmallVehicleSafeZone1;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USocketComponent* SmallVehicleSpawnSocket1;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UBoxComponent* PlatformSmallVehicleSafeZone2;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USocketComponent* SmallVehicleSpawnSocket2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScanDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EjectStartDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsSupportScanning;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinSpeedForScan;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTimerHandle WaitTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTimerHandle EjectTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTimerHandle UpdateTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AOakVehicle* VehicleInScan;
    
public:
    ACatchARidePlatform();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopScanFeedback();
    
protected:
    UFUNCTION()
    void OnSafeZoneEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnSafeZoneBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetPlatformBlocked(AActor* ActorToIgnore, bool bForSmallVehicle);
    
    UFUNCTION(BlueprintCallable)
    AOakVehicle* GetOwnedVehicleOnPlatform(AActor* TestOwner, bool bOnlySpawnedByCAR);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DigistructOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DigistructIn(bool bIsScanning);
    
};

