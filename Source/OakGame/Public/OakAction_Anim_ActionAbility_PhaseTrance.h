#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OakAction_Anim_ActionAbility.h"
#include "PhaseTranceActivationComboData.h"
#include "SirenArmControllerInterface.h"
#include "Engine/EngineTypes.h"
#include "OakAction_Anim_ActionAbility_PhaseTrance.generated.h"

class UOakActionAbility_PhaseTrance;
class UMaterialInstance;
class ACharacter;
class USkeletalMeshComponent;

UCLASS()
class UOakAction_Anim_ActionAbility_PhaseTrance : public UOakAction_Anim_ActionAbility, public ISirenArmControllerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bRegisterAsGhostArmController;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* GhostArmMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bFirstPersonGhostArmsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bThirdPersonGhostArmsVisible;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWantsCharacterLandedEvent;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility_PhaseTrance* OwnerActionAbility_PhaseTrance;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    FPhaseTranceActivationComboData ActivationCombo;
    
    UPROPERTY(EditDefaultsOnly)
    FName ArmsSkeletalMeshName;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* GhostArmsMesh_3rd;
    
public:
    UOakAction_Anim_ActionAbility_PhaseTrance();
private:
    UFUNCTION()
    void OnPlayerLanded(const FHitResult& HitResult);
    
    UFUNCTION()
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void JumpToMontageSection_SirenAndArms(FName SectionName);
    
    UFUNCTION(BlueprintCallable)
    void JumpToMontageSection_Arms(FName SectionName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandlePlayerLanded();
    
    UFUNCTION(BlueprintImplementableEvent)
    FPhaseTranceActivationComboData AssembleActivationCombo() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

