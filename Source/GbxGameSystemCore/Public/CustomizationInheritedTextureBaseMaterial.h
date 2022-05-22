#pragma once
#include "CoreMinimal.h"
#include "CustomizationInheritedTextureBaseMaterial.generated.h"

class UGbxCustomizationTargetData;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCustomizationInheritedTextureBaseMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxCustomizationTargetData* Target;
    
    UPROPERTY(EditAnywhere)
    int32 MaterialIndex;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* BaseMaterial;
    
    GBXGAMESYSTEMCORE_API FCustomizationInheritedTextureBaseMaterial();
};

