#pragma once
#include "CoreMinimal.h"
#include "PlayerCharacterComponent.h"
#include "OakPlayerAbilityHUDItemValueProviderInterface.h"
#include "SirenArmAppearanceState.h"
#include "RushStackInstance.h"
#include "EPhaseTranceElementalType.h"
#include "SirenCharacterComponent.generated.h"

class UOakActionAbility_PhaseTrance;
class UGbxSkeletalMeshComponent;
class UOakPlayerAbilityHUDItemData;
class UFirstPersonComponent;
class AActor;
class USirenArmControllerInterface;
class ISirenArmControllerInterface;
class UMaterialInstance;
class UOakActionAbility;
class UGbxCustomizationData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API USirenCharacterComponent : public UPlayerCharacterComponent, public IOakPlayerAbilityHUDItemValueProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName GhostArms1PComponentName;
    
    UPROPERTY(EditAnywhere)
    FName GhostArms3PComponentName;
    
private:
    UPROPERTY(EditDefaultsOnly)
    UOakPlayerAbilityHUDItemData* RushHUDItemData;
    
    UPROPERTY(Export, Transient)
    UFirstPersonComponent* FirstPersonComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    UGbxSkeletalMeshComponent* GhostArms1P;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient, meta=(AllowPrivateAccess=true))
    UGbxSkeletalMeshComponent* GhostArms3P;
    
    UPROPERTY(Transient)
    TArray<FRushStackInstance> RushStackInstances;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ArmAppearanceState)
    FSirenArmAppearanceState ArmAppearanceState;
    
    UPROPERTY(Transient)
    int32 Rush;
    
    UPROPERTY(Transient)
    int32 ConsumedRush;
    
public:
    USirenCharacterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnlockSirenCastMeshes(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void StaticRemoveGhostArmController(AActor* Actor, TScriptInterface<ISirenArmControllerInterface> Controller);
    
    UFUNCTION(BlueprintCallable)
    static void StaticAddGhostArmController(AActor* Actor, TScriptInterface<ISirenArmControllerInterface> Controller);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StartTattoFade(bool bVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartArmMaterialInstanceFade(UMaterialInstance* NewInstance);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Start3rdPersonArmFade(bool bVisible, bool bInstant);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPhaseCastMeshActive(bool bActive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetArmElement(EPhaseTranceElementalType NewElement);
    
private:
    UFUNCTION()
    void OnRep_ArmAppearanceState();
    
    UFUNCTION()
    void OnPhaseTranceComboChanged(UOakActionAbility_PhaseTrance* ActionAbility);
    
    UFUNCTION()
    void OnPhaseTranceActivated(UOakActionAbility* InActionAbility);
    
    UFUNCTION()
    void OnLevelChanged(int32 OldLevel, int32 NewLevel);
    
    UFUNCTION()
    void OnFirstPersonCreated(bool bArmsCreated);
    
    UFUNCTION()
    void OnCustomizationApplied(UGbxCustomizationData* Customization);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockSirenCastMeshes(FName Reason);
    
    UFUNCTION(BlueprintPure)
    int32 GetRushCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxRushCount() const;
    
    UFUNCTION(BlueprintPure)
    EPhaseTranceElementalType GetActiveGhostArmElementalType() const;
    
    UFUNCTION(BlueprintCallable)
    int32 ConsumeRush();
    
    UFUNCTION(BlueprintPure)
    bool CanPlayPassiveGhostArmAction() const;
    
    UFUNCTION(BlueprintPure)
    bool AreGhostArmsVisible() const;
    
    UFUNCTION(BlueprintCallable)
    void AddRush(int32 Value);
    
    
    // Fix for true pure virtual functions not being implemented
};

