#pragma once
#include "CoreMinimal.h"
#include "CustomizationInheritedTextureBaseMaterial.h"
#include "InheritedCustomizationTextureExtraParam.h"
#include "CustomizationTextureInheritanceSettings.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCustomizationTextureInheritanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> OnlyInheritCustomizationTextureParameters;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* BaseMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<FCustomizationInheritedTextureBaseMaterial> CustomizationTargetSpecificBaseMaterials;
    
    UPROPERTY(EditAnywhere)
    TArray<FInheritedCustomizationTextureExtraParam> ExtraParams;
    
    GBXGAMESYSTEMCORE_API FCustomizationTextureInheritanceSettings();
};

