#pragma once
#include "CoreMinimal.h"
#include "Mission.h"
#include "EOakMissionType.h"
#include "EOakLeague.h"
#include "MissionStarterGear.h"
#include "OakMission.generated.h"

class AOakGameMode;
class UDialogEnumValue;
class AOakVehicle;
class UInventoryBalanceData;
class UVehiclePartData;
class AOakSpawner;
class UMissionObjective;

UCLASS()
class OAKGAME_API UOakMission : public UMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AOakVehicle> VehicleClass;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UVehiclePartData> VehiclePart;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AOakSpawner> VehicleSpawner;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UInventoryBalanceData> MissionWeaponBalanceData;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOakLeague> MissionLeague;
    
    UPROPERTY(EditAnywhere)
    bool bAutoActivateLeagueMission;
    
public:
    UPROPERTY(EditAnywhere)
    uint8 MapTravelID;
    
    UPROPERTY(EditAnywhere)
    TArray<FMissionStarterGear> StarterGear;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOakMissionType MissionType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionObjective* GiveWeaponObjective;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionObjective*> MissionWeaponObjectives;
    
    UPROPERTY(EditAnywhere)
    bool bRequireMissionSpawnerActor;
    
    UPROPERTY(EditAnywhere)
    bool bBroadcastMissionCompletionFriendEvent;
    
    UPROPERTY(EditAnywhere)
    UDialogEnumValue* MissionDialogEnumValue;
    
    UPROPERTY(EditAnywhere)
    bool bSuppressDiscoveryAfterFailure;
    
    UOakMission();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    int32 GetNumberOfCompletedMissionChallenges() const;
    
    UFUNCTION(BlueprintCallable)
    AOakGameMode* GetCurrentGameMode();
    
};

