#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakAction_Anim.h"
#include "OakActionAbilityOwnedResourceInterface.h"
#include "OakAnimActionAbilityEndAction.h"
#include "EOakAnimActionAbilityEndAction.h"
#include "UObject/NoExportTypes.h"
#include "OakAction_Anim_ActionAbility.generated.h"

class UOakActionAbility;
class AOakCharacter_Player;
class UOakControlledMove_ActionAbility;
class AOakPlayerController;
class AActor;

UCLASS()
class UOakAction_Anim_ActionAbility : public UOakAction_Anim, public IOakActionAbilityOwnedResourceInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FOakAnimActionAbilityEndAction> ConditionalEndActions;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    EOakAnimActionAbilityEndAction UnconditionalEndAction;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter_Player* OwnerPlayer;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakPlayerController* OwnerPlayerController;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility* OwnerActionAbility;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bIsShuttingDown;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBlocksActionAbilityShutdown;
    
    UPROPERTY(EditDefaultsOnly)
    bool bLockMantling;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBlockPlayerLandingNotification;
    
    UPROPERTY(EditDefaultsOnly, Transient)
    bool bActionSucceeded;
    
public:
    UOakAction_Anim_ActionAbility();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool StartedOwnedControlledMove(TSubclassOf<UOakControlledMove_ActionAbility> ControlledMoveClass, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, AActor* TargetActor, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetActionSucceeded(bool bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseActionLock();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOwnedControlledMoveEnded(UOakControlledMove_ActionAbility* ControlledMove);
    
    UFUNCTION(BlueprintCallable)
    void JumpToMontageSection(FName SectionName);
    
    UFUNCTION(BlueprintPure)
    bool IsLocallyControlled() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

