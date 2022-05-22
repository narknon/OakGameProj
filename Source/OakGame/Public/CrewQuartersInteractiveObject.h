#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObject.h"
#include "CrewQuartersActorInterface.h"
#include "OnNonOwnerAttemptUseDelegate.h"
#include "CrewQuartersInteractiveObject.generated.h"

class AOakPlayerController;
class UGbxMenuData;
class ACrewQuartersRoom;
class UGbxGFxMenu;

UCLASS()
class ACrewQuartersInteractiveObject : public AAdvancedInteractiveObject, public ICrewQuartersActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxMenuData* CrewQuartersIOMenuData;
    
    UPROPERTY(Transient)
    TSoftClassPtr<UGbxGFxMenu> CrewQuartersPreLoadMenuClass;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_OwningRoom)
    ACrewQuartersRoom* OwningRoom;
    
    UPROPERTY(BlueprintAssignable)
    FOnNonOwnerAttemptUse OnNonOwnerAttemptUse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRestrictUseToOwningPlayer;
    
public:
    ACrewQuartersInteractiveObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_OwningRoom();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsInteractiveObjectOwnedBy(AOakPlayerController* User);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientOpenMenu(AOakPlayerController* OakPC);
    
    
    // Fix for true pure virtual functions not being implemented
};

