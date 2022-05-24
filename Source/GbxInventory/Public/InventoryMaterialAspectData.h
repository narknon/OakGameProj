#pragma once
#include "CoreMinimal.h"
#include "RarityMaterialData.h"
#include "InventoryAspectData.h"
#include "MaterialVectorParameterData.h"
#include "MaterialScalarParameterData.h"
#include "MaterialTextureParameterData.h"
#include "MaterialTextureAssetParameterData.h"
#include "MaterialFontParameterData.h"
#include "InventoryMaterialAspectData.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class GBXINVENTORY_API UInventoryMaterialAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName PrimitiveComponentName;
    
    UPROPERTY(EditAnywhere)
    FName PrimitiveComponentTag;
    
    UPROPERTY(EditAnywhere)
    int32 SectionIndex;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(EditAnywhere)
    TArray<FRarityMaterialData> RaritySpecificMaterials;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaterialVectorParameterData> VectorParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaterialScalarParameterData> ScalarParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaterialTextureParameterData> TextureParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaterialTextureAssetParameterData> TextureAssetParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaterialFontParameterData> FontParameters;
    
public:
    UInventoryMaterialAspectData();
};

