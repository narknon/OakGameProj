#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "Engine/EngineTypes.h"
#include "AttributeInitializationData.h"
#include "ForceSelection.h"
#include "ManufacturerWeaponSightData.h"
#include "UObject/NoExportTypes.h"
#include "OakWeaponNamedNamingAttribute.h"
#include "VendingMachineRefillAmmoData.h"
#include "AttributeEffectData.h"
#include "InventoryGlobals.generated.h"

class UInventorySlotData;
class UParticleSystem;
class UGbxInventoryCategoryData;
class UExplosionData;
class UDamageData;
class UGbxDamageType;
class AGrenade;
class UGbxAttributeData;
class UDataTable;
class UFeedbackData;
class USkeletalMesh;
class UGameResourceData;

UCLASS(BlueprintType)
class OAKGAME_API UInventoryGlobals : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxDamageType> DefaultDamageType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageData> GrenadeDamageData;
    
    UPROPERTY(EditDefaultsOnly)
    UInventorySlotData* GrenadeModSlot;
    
    UPROPERTY(EditDefaultsOnly)
    UExplosionData* DefaultGrenadeExplosionData;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> GrenadeCollisionChannel;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AGrenade> ThrownGrenadeClass;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* GrenadeFuseWarningEmitter;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData DefaultDamage;
    
    UPROPERTY(EditDefaultsOnly)
    FForceSelection DefaultForce;
    
    UPROPERTY(EditDefaultsOnly)
    UInventorySlotData* WeaponSlot1;
    
    UPROPERTY(EditDefaultsOnly)
    UInventorySlotData* WeaponSlot2;
    
    UPROPERTY(EditDefaultsOnly)
    UInventorySlotData* WeaponSlot3;
    
    UPROPERTY(EditDefaultsOnly)
    UInventorySlotData* WeaponSlot4;
    
    UPROPERTY(EditDefaultsOnly)
    UInventorySlotData* ShieldSlot;
    
    UPROPERTY(EditDefaultsOnly)
    UInventorySlotData* ClassItemSlot;
    
    UPROPERTY(EditDefaultsOnly)
    UInventorySlotData* ArtifactSlot;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FManufacturerWeaponSightData> ManufacturerWeaponSightData;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* CustomWeaponSightTable;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor SightTargetCrosshairColors[7];
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FOakWeaponNamedNamingAttribute> WeaponNamingAttributes;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData EridiumCostFormula;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* ShieldSkeletalMesh;
    
    UPROPERTY(EditAnywhere)
    UGameResourceData* ShieldResource;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* ShieldDamageAttribute;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* ShieldBreakFeedback;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> RandomDateBasedVendingMachineStrings;
    
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FVendingMachineRefillAmmoData> VendingMachineRefillAmmoData;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* VendingMachineMarkupAttribute;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGbxInventoryCategoryData* PartReRollCurrency;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAttributeInitializationData PartReRollCostFormula;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FAttributeEffectData> PartReRollAttributeEffects;
    
    UInventoryGlobals();
};

