#pragma once
#include "CoreMinimal.h"
#include "DynamicRoomBase.h"
#include "DynamicRoomBaseEventDelegate.h"
#include "CrewQuartersRoomCountdownEventDelegate.h"
#include "CrewQuartersRoom.generated.h"

class UGbxAreaComponent;
class UCrewQuartersGlobalData;
class AOakCharacter_Player;
class AActor;
class UDynamicRoomBaseData;

UCLASS()
class ACrewQuartersRoom : public ADynamicRoomBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCrewQuartersGlobalData* CrewQuartersGlobals;
    
    UPROPERTY(EditAnywhere)
    int32 RoomAssignmentIndex;
    
    UPROPERTY(EditAnywhere)
    float RoomChangeCountdownTime;
    
    UPROPERTY(EditAnywhere)
    float RoomChangeCountdownIncrement;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_OwningPlayer)
    AOakCharacter_Player* OwningPlayer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AActor*> RoomAwareActors;
    
    UPROPERTY(BlueprintAssignable)
    FDynamicRoomBaseEvent OnRoomOwnerAssigned;
    
    UPROPERTY(BlueprintAssignable)
    FDynamicRoomBaseEvent OnRoomChanging;
    
    UPROPERTY(BlueprintAssignable)
    FCrewQuartersRoomCountdownEvent OnRoomChangeCountdown;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_RoomChangeCountdown)
    int32 RoomChangeCountdown;
    
    UPROPERTY(Transient)
    AOakCharacter_Player* QueuedPlayer;
    
    UPROPERTY(Transient)
    UDynamicRoomBaseData* QueuedRoom;
    
    UPROPERTY(Export, Transient)
    UGbxAreaComponent* AreaComponent;
    
public:
    ACrewQuartersRoom();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRoomChangeCountdownTimer();
    
    UFUNCTION()
    void OnRep_RoomChangeCountdown();
    
    UFUNCTION()
    void OnRep_OwningPlayer();
    
    UFUNCTION()
    void OnDeferredRoomSpawn();
    
public:
    UFUNCTION(BlueprintCallable)
    void InstanceRoomForPlayer(AOakCharacter_Player* NewOwningPlayer, UDynamicRoomBaseData* RoomToLoad);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRoomMood(AOakCharacter_Player* NewOwningPlayer, UDynamicRoomBaseData* RoomToLoad);
    
};

