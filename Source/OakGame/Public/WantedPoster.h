#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractiveObject.h"
#include "Engine/EngineTypes.h"
#include "WantedPoster.generated.h"

class AActor;
class UWantedPosterDefinition;
class UGbxSkeletalMeshComponent;
class UPrimitiveComponent;
class UMissionDirectorComponent;
class UMissionObserverComponent;
class UMission;

UCLASS()
class AWantedPoster : public AInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWantedPosterDefinition* NativeDefinition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName CharacterMeshComponentName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PosterMeshComponentName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NearbyPlayerOverlapComponentName;
    
protected:
    UPROPERTY(Export, Transient)
    UGbxSkeletalMeshComponent* PosterMeshComponent;
    
    UPROPERTY(Export, Transient)
    UGbxSkeletalMeshComponent* CharacterMeshComponent;
    
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* NearbyPlayerOverlapComponent;
    
    UPROPERTY(Export, Transient)
    UMissionDirectorComponent* MissionDirectorComponent;
    
    UPROPERTY(Export, Transient)
    UMissionObserverComponent* MissionObserverComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_bHologramActive)
    bool bHologramActive;
    
    UPROPERTY(Transient)
    TArray<AActor*> RegisteredNearbyPlayers;
    
public:
    AWantedPoster();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_bHologramActive();
    
    UFUNCTION()
    void OnNearbyPlayerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnNearbyPlayerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHologramActiveChanged();
    
private:
    UFUNCTION()
    void HandlePlayerActorDestroyed(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintPure)
    TSubclassOf<UMission> GetWantedPosterMission() const;
    
};

