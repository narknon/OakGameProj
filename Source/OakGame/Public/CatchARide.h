#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObject.h"
#include "OakCARMenuInteractionInterface.h"
#include "ECARRestrictionType.h"
#include "OnVehicleSpawnedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECARPartType.h"
#include "OakCARMenuVehicleConfig.h"
#include "CatchARide.generated.h"

class ACatchARidePlatform;
class UOakCARVehiclePartData;
class UGFxCARMenu;
class AOakCharacter_Player;
class AOakPlayerController;
class UOakCARVehicleData;
class AController;
class UPrimitiveComponent;

UCLASS()
class ACatchARide : public AAdvancedInteractiveObject, public IOakCARMenuInteractionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnVehicleSpawned OnVehicleSpawned;
    
    UPROPERTY(EditAnywhere)
    TArray<FColor> AllColors;
    
    UPROPERTY(EditDefaultsOnly)
    ECARRestrictionType RestrictionType;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    ACatchARidePlatform* CatchARide_Platform1;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    ACatchARidePlatform* CatchARide_Platform2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsDeploymentAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsTeleportToDeployedAllowed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector DeploymentLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText StationName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CannotSpawnText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CatchARideLockedText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CatchARideDisabledText;
    
    UPROPERTY(Transient)
    UGFxCARMenu* AssociatedMenu;
    
    UPROPERTY(Transient)
    TArray<AOakCharacter_Player*> OverlappingPlayers;
    
public:
    ACatchARide();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDeployedNonInteractiveState(bool bForceDeployed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnVehicleDeployedFromMenu();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewPartEquipped(ECARPartType PartType, UOakCARVehiclePartData* PartData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewBodyEquipped(UOakCARVehicleData* VehicleData);
    
protected:
    UFUNCTION()
    void HandleSecondaryUse(AController* UserController, UPrimitiveComponent* UsedComponent);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanRespawnVehicle(AOakPlayerController* PC, const FOakCARMenuVehicleConfig& VehicleConfig) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

