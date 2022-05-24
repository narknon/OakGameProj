#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractiveObject.h"
#include "ZoneMapPOIInterface.h"
#include "UseEvent.h"
#include "TravelStationObject.generated.h"

class UFastTravelStationComponent;
class UGFxFriendsInArea;
class UGbxGFxMenuData;
class UUsableComponent;
class USkeletalMeshComponent;
class ULevelTravelStationComponent;
class UGbxAreaComponent;
class UGFxBillboardComponent;
class UOutOfMapWaypointComponent;
class AGbxPlayerController;
class AController;
class UPrimitiveComponent;
class AActor;

UCLASS(Abstract)
class OAKGAME_API ATravelStationObject : public AInteractiveObject, public IZoneMapPOIInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGFxFriendsInArea> DefaultFriendsInArea;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxGFxMenuData* FriendsInAreaListMenuData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResurrectionProximityDetection;
    
    UPROPERTY(EditAnywhere)
    int32 DebugFriendsCount;
    
private:
    UPROPERTY(Export, Transient)
    UUsableComponent* UsableComponent;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(Export, Transient)
    UGbxAreaComponent* AreaComponent;
    
    UPROPERTY(Export, Transient)
    UFastTravelStationComponent* FastTravelStationComponent;
    
    UPROPERTY(Export, Transient)
    ULevelTravelStationComponent* LevelTravelStationComponent;
    
    UPROPERTY(Export, Transient)
    UGFxBillboardComponent* FriendsInNextAreaBillboard;
    
    UPROPERTY(Transient)
    UGFxFriendsInArea* CachedFriendsInNextArea;
    
    UPROPERTY(Export, Transient)
    UOutOfMapWaypointComponent* OutOfMapWaypoint;
    
public:
    ATravelStationObject();
    UFUNCTION(BlueprintCallable)
    void SetStationResurrectActive(bool bResurrectionActive);
    
private:
    UFUNCTION()
    void PlayerExitedArea(AGbxPlayerController* GbxPC);
    
    UFUNCTION()
    void PlayerEnteredArea(AGbxPlayerController* GbxPC);
    
    UFUNCTION()
    void OnUsedSecondaryBy(AController* UserController, UPrimitiveComponent* UsedComponent);
    
    UFUNCTION()
    void OnUsedBy(const FUseEvent& UseEvent);
    
    UFUNCTION()
    void OnTravelStationActivated(AActor* OtherStation);
    
    UFUNCTION()
    void OnFastTravelStationDiscovered(bool bNoActivationSequence);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsDestinationInstalled();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool HasNearbyFriends(AGbxPlayerController* GbxPC);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetStationResurrectActive();
    
    UFUNCTION(BlueprintCallable)
    FString GetNameOfNextLevel();
    
    UFUNCTION(BlueprintCallable)
    void CheckTravelDependencies();
    
    
    // Fix for true pure virtual functions not being implemented
};

