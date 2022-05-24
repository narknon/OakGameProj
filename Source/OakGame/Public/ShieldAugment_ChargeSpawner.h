#pragma once
#include "CoreMinimal.h"
#include "ShieldAugment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxAttributeModifierType -FallbackName=EGbxAttributeModifierType
#include "ShieldAugment_ChargeSpawner.generated.h"

class ULootSpawnPatternData;
class UMaterialInterface;
class UStaticMesh;
class UGbxAttributeData;
class UWwiseEvent;
class UItemPoolListData;

UCLASS(EditInlineNew)
class UShieldAugment_ChargeSpawner : public UShieldAugment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float SpawnCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* AttributeToModify;
    
    UPROPERTY(EditDefaultsOnly)
    EGbxAttributeModifierType ModifierType;
    
    UPROPERTY(EditDefaultsOnly)
    float ModifierDuration;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* PickupMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UMaterialInterface*> PickupMeshMaterials;
    
    UPROPERTY(EditDefaultsOnly)
    float MeshScalar;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* SpawnAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* PickupAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UItemPoolListData* ItemPoolList;
    
    UPROPERTY(EditDefaultsOnly)
    ULootSpawnPatternData* SpawnPattern;
    
public:
    UShieldAugment_ChargeSpawner();
};

