#pragma once
#include "CoreMinimal.h"
#include "OakInventoryBalanceStateComponent.h"
#include "WeaponDebugInterface.h"
#include "WeaponUseModeAspectSetData.h"
#include "WeaponBalanceStateComponent.generated.h"

class UWeaponMaterialWearAspectData;
class UWeaponAudioStreamingAspectData;
class UWeaponSkinPartData;
class UWeaponEffectBaseAspectData;
class UWeaponFoleyAspectData;
class UWeaponTrinketPartData;
class AOakWeapon;
class UWeaponAudioAspectData;
class UWeaponPlayerMeleeOverrideAspectData;
class UGbxCustomizationComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UWeaponBalanceStateComponent : public UOakInventoryBalanceStateComponent, public IWeaponDebugInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<FWeaponUseModeAspectSetData> UseModeAspectSetList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UWeaponAudioAspectData*> AudioAspectList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UWeaponFoleyAspectData*> FoleyAspectList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UWeaponAudioStreamingAspectData*> AudioStreamingAspectList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UWeaponEffectBaseAspectData*> EffectAspectList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UWeaponMaterialWearAspectData* MaterialWearAspect;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UWeaponPlayerMeleeOverrideAspectData* PlayerMeleeOverrideAspect;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UWeaponTrinketPartData* CurrentTrinketPart;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UWeaponSkinPartData* CurrentSkinPart;
    
    UPROPERTY(Export, Transient)
    UGbxCustomizationComponent* CachedCustomizationComponent;
    
private:
    UPROPERTY(Transient)
    AOakWeapon* WeaponPrivate;
    
public:
    UWeaponBalanceStateComponent();
private:
    UFUNCTION()
    void NotifyWeaponPutDown();
    
    UFUNCTION()
    void NotifyWeaponEquipped();
    
    UFUNCTION()
    void NotifyWeaponAttached();
    
    UFUNCTION()
    void NotifyFirstPersonCreated();
    
    
    // Fix for true pure virtual functions not being implemented
};

