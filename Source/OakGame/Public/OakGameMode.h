#pragma once
#include "CoreMinimal.h"
#include "GbxGameMode.h"
#include "OakGameMode.generated.h"

class UTravelStationData;
class AController;
class APawn;
class UItemPoolData;
class AActor;
class ATravelStationTracker;
class AOakPlayerController;

UCLASS(NonTransient)
class OAKGAME_API AOakGameMode : public AGbxGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UItemPoolData* DefaultPlayerWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPreventFightForYourLifeInRespawnRestrictedVolumes;
    
    AOakGameMode();
    UFUNCTION()
    void TravelToStationInterrupted(UTravelStationData* TravelStation);
    
    UFUNCTION()
    bool RespawnPlayer(AOakPlayerController* OakPlayerController);
    
    UFUNCTION()
    void PrepareToTravelToStation(UTravelStationData* TravelStation, APawn* ActivatingPawn);
    
    UFUNCTION()
    ATravelStationTracker* GetTravelStationTracker();
    
    UFUNCTION(BlueprintCallable)
    AActor* FindPlayerStation(AController* Player, const FString& IncomingName);
    
    UFUNCTION()
    bool CanTravelToStation(UTravelStationData* TravelStation, AController* OptionalInstigator);
    
    UFUNCTION()
    bool CanTravelThroughStations(AController* OptionalInstigator);
    
};

