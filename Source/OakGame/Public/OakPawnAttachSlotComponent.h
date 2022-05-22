#pragma once
#include "CoreMinimal.h"
#include "PawnAttachSlotComponent.h"
#include "PawnAttachCameraModeOptions.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OakPawnAttachSlotComponent.generated.h"

class APawn;
class AController;
class UCameraModeSetData;
class UOakPawnAttachSlotComponent;
class UWwiseEvent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakPawnAttachSlotComponent : public UPawnAttachSlotComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bLockInputDuringAttach: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockInputDuringDetach: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTransferInventory: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanUseWhileNotPossessingPrimaryCharacter: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bModifyHUD: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHideHUDWhileAttaching: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHideHUDWhileDetaching: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bClearSelfElementalEffectsOnAttach: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bClearPawnElementalEffectsOnAttach: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bBlockPawnElementalEffectsWhileAttached: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowPetsWhileAttached: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowEchoDeviceEquipping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bHidePrimaryWeaponWhileAttached: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bHideHolsteredWeaponWhileAttached: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bMustMatchDuelTeamOfInstigator: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseStatusMenuCameraMode: 1;
    
    UPROPERTY(EditAnywhere)
    FPawnAttachCameraModeOptions CameraModeOptions;
    
    UPROPERTY(EditAnywhere)
    UCameraModeSetData* CameraModesSet;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideCrosshairScreenPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D CrosshairScreenPosition;
    
    UPROPERTY(EditAnywhere)
    bool bPlayOccupiedIdleAudioOnLocalPlayerOnly;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* OccupiedIdleAudioEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* OccupiedIdleStopAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTransitionIsHijacked;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AController* HijackerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsAllowedToDetachWhenHiJack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsLeapOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSeatSwap;
    
    UPROPERTY(Export)
    UOakPawnAttachSlotComponent* HijackAttachSlot;
    
    UOakPawnAttachSlotComponent();
    UFUNCTION(BlueprintPure)
    FRotator GetWeaponRotation(bool bWorldSpace) const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetHijackedOccupant() const;
    
};

