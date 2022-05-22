#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SeatPawn.h"
#include "GenericTeamAgentInterface.h"
#include "DamageCauserInterface.h"
#include "PlayerAlertableInterface.h"
#include "EGroundTurretType.h"
#include "SpawnCostSelection.h"
#include "EPlayerAlertType.h"
#include "TurretSeatPawn.generated.h"

class UOakPawnAttachSlotComponent;
class UAIAction;
class UTeamComponent;
class AOakCharacter;
class UMeshComponent;

UCLASS()
class ATurretSeatPawn : public ASeatPawn, public IGenericTeamAgentInterface, public IDamageCauserInterface, public IPlayerAlertableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGroundTurretType TurretType;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UTeamComponent* TeamComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAIAction> DefaultTurretAction;
    
    UPROPERTY(Export, Transient)
    UOakPawnAttachSlotComponent* OakPawnAttachSlotComponent;
    
    UPROPERTY(Export, Transient)
    UOakPawnAttachSlotComponent* OakHijackSlotComponent;
    
    UPROPERTY(Transient)
    AOakCharacter* LastCharacterAttached;
    
    UPROPERTY(Transient)
    AOakCharacter* LastHijackCharacterAttached;
    
private:
    UPROPERTY(EditAnywhere)
    FSpawnCostSelection SpawnCostSelection;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName LeftHandIKSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName RightHandIKSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName LeftFootIKSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName RightFootIKSocket;
    
    UPROPERTY(Export, Transient)
    UMeshComponent* MeshComponent;
    
    UPROPERTY(EditAnywhere)
    EPlayerAlertType PlayerAlertType;
    
    ATurretSeatPawn();
protected:
    UFUNCTION()
    void HijackStateChanged();
    
public:
    UFUNCTION()
    void GetAvailableIKSocketNames(TArray<FName>& SocketNames) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableTransitionControl(bool bEnable);
    
protected:
    UFUNCTION()
    void AttachStateChanged();
    
    
    // Fix for true pure virtual functions not being implemented
};

