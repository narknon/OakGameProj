#pragma once
#include "CoreMinimal.h"
#include "WeaponVisibleAmmoEffectData.h"
#include "EWeaponVisibleAmmoState.h"
#include "Components/ActorComponent.h"
#include "WeaponDebugInterface.h"
#include "EWeaponAttachmentVisibilityType.h"
#include "EWeaponVisibleAmmoUpdateMethod.h"
#include "WeaponVisibleAmmoComponent.generated.h"

class UWeaponAmmoComponent;
class AWeapon;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponVisibleAmmoComponent : public UActorComponent, public IWeaponDebugInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FName> AmmoBoneNames;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EWeaponAttachmentVisibilityType> MeshType;
    
    UPROPERTY(EditAnywhere)
    EWeaponVisibleAmmoState InitialState;
    
    UPROPERTY(EditAnywhere)
    EWeaponVisibleAmmoUpdateMethod UpdateMethod;
    
    UPROPERTY(EditAnywhere)
    FWeaponVisibleAmmoEffectData HideAmmoEffect;
    
    UPROPERTY(EditAnywhere)
    FWeaponVisibleAmmoEffectData ShowAmmoEffect;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EWeaponVisibleAmmoState VisibleAmmoState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ServerAmmoCount)
    int32 ServerAmmoCount;
    
    UPROPERTY(Export, Transient)
    UWeaponAmmoComponent* CachedAmmoComponent;
    
private:
    UPROPERTY(Transient)
    AWeapon* WeaponPrivate;
    
public:
    UWeaponVisibleAmmoComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateBoneVisibility(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleAmmoUpdateMethod(EWeaponVisibleAmmoUpdateMethod NewUpdateMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleAmmoState(EWeaponVisibleAmmoState NewState);
    
    UFUNCTION(BlueprintCallable)
    void ResetVisibleAmmoState();
    
protected:
    UFUNCTION()
    void OnRep_ServerAmmoCount();
    
    UFUNCTION()
    void OnDetached();
    
    UFUNCTION()
    void OnAttached();
    
    UFUNCTION()
    void OnAmmoChanged();
    
    
    // Fix for true pure virtual functions not being implemented
};

