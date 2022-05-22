#pragma once
#include "CoreMinimal.h"
#include "GbxAction_Anim.h"
#include "AnimActionDef.h"
#include "OakAction_Anim.generated.h"

class UAnimationAsset;
class AWeapon;
class AActor;

UCLASS()
class OAKGAME_API UOakAction_Anim : public UGbxAction_Anim {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bBlockWeaponActions;
    
    UPROPERTY(EditAnywhere)
    bool bInterruptWeaponActions;
    
    UPROPERTY(EditAnywhere)
    int32 WeaponActions;
    
    UPROPERTY(EditAnywhere)
    bool bHideWeapons;
    
    UPROPERTY(EditAnywhere)
    bool bHideWeaponSlot;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FName AnimSlotWeap;
    
    UPROPERTY(EditAnywhere)
    bool bHasAnimSlotWeapValue;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float BlendInWeap;
    
    UPROPERTY(EditAnywhere)
    bool bHasBlendInWeapValue;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DefaultBlendOutWeap;
    
    UPROPERTY(EditAnywhere)
    bool bHasBlendOutWeapValue;
    
    UPROPERTY(EditAnywhere)
    bool bBlockSprinting;
    
    UPROPERTY(EditAnywhere)
    bool bPauseSprinting;
    
    UPROPERTY(EditAnywhere)
    bool bBlockJumping;
    
    UPROPERTY(EditAnywhere)
    bool bBlockECHOMenu;
    
    UPROPERTY(EditAnywhere)
    bool bLockInput;
    
    UPROPERTY(EditAnywhere)
    bool bLockUsingObjects;
    
    UPROPERTY(EditAnywhere)
    bool bUseActionSkillCrosshair;
    
    UPROPERTY(EditAnywhere)
    bool bShowPlayerMeleeWeapon;
    
    UPROPERTY(EditAnywhere)
    bool bEquipEchoDevice;
    
    UPROPERTY(EditAnywhere)
    bool bInterruptWhenZoomed;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideBlendOutWhenInterrupted;
    
    UPROPERTY(EditAnywhere)
    bool bHideFirstPersonLegs;
    
    UPROPERTY(EditAnywhere)
    bool bBringUpWeaponAtEnd;
    
    UPROPERTY(EditAnywhere)
    float BringUpWeaponBlendInTime;
    
    UPROPERTY(EditAnywhere)
    bool bInterruptBringUpWeaponWhenZoomed;
    
    UPROPERTY(EditAnywhere)
    bool bPlayBringUpWeaponOnSameSlot;
    
    UPROPERTY(EditAnywhere)
    bool bBlockEquipAnimation;
    
    UPROPERTY(EditAnywhere)
    bool bCheckFootDownWhenFreezing;
    
    UPROPERTY(EditAnywhere)
    FName CameraMode;
    
    UPROPERTY(EditAnywhere)
    float CameraModeBlendInTimeOverride;
    
    UPROPERTY(EditAnywhere)
    float CameraModeBlendOutTimeOverride;
    
private:
    UPROPERTY()
    FAnimActionDef AnimDefWeap;
    
    UPROPERTY()
    UAnimationAsset* AnimationWeap;
    
public:
    UOakAction_Anim();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginBringUpWeapon(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetWeaponSlotHidden(bool bHidden) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetWeaponsHidden(bool bHidden) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetUseActionSkillCrosshair(bool bNewUseActionSkillCrosshair) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetPlayerMeleeWeaponVisible(bool bVisible) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetPauseSprinting(bool bPaused) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetLockObjectUse(bool bLocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetLockInput(bool bLocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetFirstPersonLegsHidden(bool bHidden) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetEchoDeviceEquipped(bool bEquipped) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetCameraMode(FName NewCameraMode, float BlendTimeOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetBlockSprinting(bool bBlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetBlockJumping(bool bBlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetBlockEquipAnimation(bool bBlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetBlockedWeaponActions(bool bBlocked, int32 WeaponActionsMask) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetBlockEchoMenu(bool bBlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_RestoreCameraMode(float BlendTimeOverride) const;
    
    UFUNCTION(BlueprintPure)
    AWeapon* K2_GetWeapon() const;
    
};

