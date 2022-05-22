#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MissionTracker.h"
#include "LevelSyncCompletedMission.h"
#include "MissionObserverInterface.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "OakMissionTracker.generated.h"

class UObject;
class UMissionGraph;
class UOutOfMapWaypointComponent;
class AOakCharacter;
class UMission;

UCLASS(NonTransient, Config=Game)
class OAKGAME_API AOakMissionTracker : public AMissionTracker, public IMissionObserverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FLevelSyncCompletedMission> CompletedMissionLevelSyncs;
    
    UPROPERTY(Transient)
    UMissionGraph* ActiveLeagueMissionGraph;
    
public:
    UPROPERTY(Config)
    FGameplayTag MissionNPCTag;
    
private:
    UPROPERTY(Export, Transient)
    TArray<UOutOfMapWaypointComponent*> CurrentOutOfMapWaypoints;
    
public:
    AOakMissionTracker();
    UFUNCTION()
    void OnTravelIDsChanged();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static AOakCharacter* GetMissionCharacterSoft(UObject* WorldContextObject, FSoftClassPath CharacterClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static AOakCharacter* GetMissionCharacter(UObject* WorldContextObject, TSubclassOf<AOakCharacter> CharacterClass);
    
    UFUNCTION()
    void EnumerateNPCCharactersSoft(TArray<FSoftClassPath>& CharacterClasses) const;
    
    UFUNCTION()
    void EnumerateNPCCharacters(TArray<TSubclassOf<AOakCharacter>>& CharacterClasses) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastFriendEventForCompletion(TSubclassOf<UMission> MissionClass);
    
    
    // Fix for true pure virtual functions not being implemented
};

