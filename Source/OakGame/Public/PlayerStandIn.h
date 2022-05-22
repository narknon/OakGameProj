#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EPlayerStandInType.h"
#include "GameFramework/Actor.h"
#include "PlayerStandInInitData.h"
#include "OnCharacterSpawnedDelegate.h"
#include "OakPlayerAbilitySaveGameData.h"
#include "OnCharacterDestroyedDelegate.h"
#include "LobbyPlayerStandInLoadOutInfo.h"
#include "OakPlayerCharacterSlotSaveGameData.h"
#include "StandInAuxiliaryState.h"
#include "PlayerStandIn.generated.h"

class UPlayerStandInData;
class UGbxCustomizationData;
class UGbxAction_CoordinatedEffect;
class AOakCharacter_StandIn;
class UGbxAction;

UCLASS()
class APlayerStandIn : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnCharacterSpawned OnCharacterSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FOnCharacterDestroyed OnCharacterDestroyed;
    
private:
    UPROPERTY(EditInstanceOnly)
    EPlayerStandInType StandInType;
    
    UPROPERTY(Transient)
    FPlayerStandInInitData InitData;
    
    UPROPERTY(Transient)
    UPlayerStandInData* StandInData;
    
    UPROPERTY(Transient)
    FLobbyPlayerStandInLoadOutInfo LoadOutInfo;
    
    UPROPERTY(Transient)
    FLobbyPlayerStandInLoadOutInfo PendingLoadOut;
    
    UPROPERTY(Transient)
    FOakPlayerAbilitySaveGameData PendingAbilityData;
    
    UPROPERTY(Transient)
    FOakPlayerCharacterSlotSaveGameData PendingCharacterData;
    
    UPROPERTY(Transient)
    TArray<UGbxCustomizationData*> CustomizationsAwaitingApplication;
    
    UPROPERTY(Transient)
    TSubclassOf<UGbxAction_CoordinatedEffect> PendingCoordinatedEffect;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter_StandIn* CharacterInstance;
    
    UPROPERTY(Transient)
    TArray<FStandInAuxiliaryState> AuxiliaryActors;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_CoordinatedEffect> PlayerStandInDigistructEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_CoordinatedEffect> PlayerStandInDigistructOutEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction_CoordinatedEffect> FrontendStandInHoloEffect;
    
public:
    APlayerStandIn();
    UFUNCTION(BlueprintCallable)
    void PlayGbxAction(TSubclassOf<UGbxAction> Action);
    
private:
    UFUNCTION()
    void HandleCustomizationApplied(UGbxCustomizationData* Customization);
    
};

