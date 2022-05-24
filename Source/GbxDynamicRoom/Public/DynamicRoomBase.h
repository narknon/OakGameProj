#pragma once
#include "CoreMinimal.h"
#include "DynamicRoomReplicationInfo.h"
#include "GameFramework/Actor.h"
#include "DynamicRoomBaseEventDelegate.h"
#include "DynamicRoomInstanceInfo.h"
#include "DynamicRoomBase.generated.h"

class AGbxCharacter;
class UBillboardComponent;
class UDynamicRoomBaseData;

UCLASS()
class GBXDYNAMICROOM_API ADynamicRoomBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UDynamicRoomBaseData*> SelectableLevels;
    
    UPROPERTY(EditAnywhere)
    bool bShowRandomRoomOnStartup;
    
    UPROPERTY(BlueprintAssignable)
    FDynamicRoomBaseEvent OnRoomLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FDynamicRoomBaseEvent OnRoomUnloaded;
    
    UPROPERTY(BlueprintAssignable)
    FDynamicRoomBaseEvent OnRoomVisible;
    
    UPROPERTY(BlueprintAssignable)
    FDynamicRoomBaseEvent OnRoomVisibleForAllPlayers;
    
    UPROPERTY(ReplicatedUsing=OnRep_RoomInfoToLoad)
    FDynamicRoomReplicationInfo RoomInfoToLoad;
    
    UPROPERTY()
    FDynamicRoomInstanceInfo InstanceInfo;
    
private:
    UPROPERTY(Export)
    UBillboardComponent* SpriteComponent;
    
    UPROPERTY()
    UDynamicRoomBaseData* CachedRoomDataReference;
    
public:
    ADynamicRoomBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool VisibleForAllPlayers();
    
    UFUNCTION(BlueprintCallable)
    void UnloadRoom();
    
    UFUNCTION()
    void SelectedRoomVisible();
    
    UFUNCTION()
    void SelectedRoomLoaded();
    
    UFUNCTION()
    void SelectedRoomClassLoaded();
    
private:
    UFUNCTION()
    void OnRep_RoomInfoToLoad(FDynamicRoomReplicationInfo& OldRoomInfoToLoad);
    
public:
    UFUNCTION(BlueprintCallable)
    void InstanceRoom(UDynamicRoomBaseData* RoomToLoad);
    
    UFUNCTION(BlueprintCallable)
    void InstanceRandomRoom();
    
    UFUNCTION(BlueprintCallable)
    void GetPlayersInLevel(TArray<AGbxCharacter*>& Players);
    
    UFUNCTION(BlueprintCallable)
    UDynamicRoomBaseData* GetCurrentRoomData();
    
    UFUNCTION(BlueprintCallable)
    void GetAvailableRoomData(TArray<UDynamicRoomBaseData*>& AvailableRooms);
    
private:
    UFUNCTION()
    void AllPlayerVisibilityTest();
    
};

