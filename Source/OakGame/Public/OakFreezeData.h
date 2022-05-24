#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeInitializationData.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ForceSelection.h"
#include "OakFreezeData.generated.h"

class UMaterialInterface;
class UStaticMesh;
class UDestructibleComponent;
class UGbxAction_CoordinatedEffect;
class UDestructibleMesh;
class UPhysicalMaterial;
class UGbxDamageType;
class UDamageSource;
class UImpactData;

UCLASS()
class UOakFreezeData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDestructibleComponent> DestructibleComponent;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction_CoordinatedEffect> FreezeCE;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction_CoordinatedEffect> ThawCE;
    
    UPROPERTY(EditDefaultsOnly)
    float FreezeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float ThawTime;
    
    UPROPERTY(EditDefaultsOnly)
    float ThawScaleDelay;
    
    UPROPERTY(EditDefaultsOnly)
    UPhysicalMaterial* ImpactPhysicalMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    UDestructibleMesh* DestructibleSupportMesh;
    
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* StaticSupportMesh;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform SupportMeshTransform;
    
    UPROPERTY(EditDefaultsOnly)
    float GroundSupportMaxOffset;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* GroundDecalMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    FVector GroundDecalSize;
    
    UPROPERTY(EditDefaultsOnly)
    float GroundDecalDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float GroundDecalFadeDuration;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxDamageType> FreezeFallingDamageType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageSource> FreezeFallingDamageSource;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData FreezeFallingDamageScale;
    
    UPROPERTY(EditDefaultsOnly)
    FForceSelection FreezeFallingForce;
    
    UPROPERTY(EditDefaultsOnly)
    UImpactData* FreezeFallingImpactData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBlockVehicle;
    
    UOakFreezeData();
};

