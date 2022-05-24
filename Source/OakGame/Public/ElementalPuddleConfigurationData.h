#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ElementalPuddleTransitionConfigurationData.h"
#include "UObject/NoExportTypes.h"
#include "ElementalPuddleConfigurationData.generated.h"

class UParticleSystem;
class UMaterialInterface;
class UElementalInteractionConfigurationData;
class UElementalInteractionData;
class UPhysicalMaterial;
class UWwiseEvent;

UCLASS()
class OAKGAME_API UElementalPuddleConfigurationData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UElementalInteractionConfigurationData* ElementalInteractionConfiguration;
    
    UPROPERTY(EditAnywhere)
    float ElementalEffectSizeScale;
    
    UPROPERTY(EditAnywhere)
    TMap<UElementalInteractionData*, FElementalPuddleTransitionConfigurationData> ElementalInteractionTransitionConfigurations;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* PuddleDecalMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* PuddleDecalMaterial_Ripples;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* PuddleMeshMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* PuddleMeshMaterial_Ripples;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* LargeLiquidBodySurfaceMaterial;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ColorHighlights;
    
    UPROPERTY(EditAnywhere)
    float NormalStrength;
    
    UPROPERTY(EditAnywhere)
    float MovementSpeed;
    
    UPROPERTY(EditAnywhere)
    float DepthFade;
    
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* NaturalStateAudioLoop;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(EditAnywhere)
    float ParticleSystemSurfaceAreaScalar;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> NaturalStateEmitterNames;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* NaturalStatePhysMat;
    
    UElementalPuddleConfigurationData();
};

