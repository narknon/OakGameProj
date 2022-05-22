#pragma once
#include "CoreMinimal.h"
#include "CARSkinMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct OAKGAME_API FCARSkinMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> Materials;
    
    UPROPERTY(EditAnywhere)
    FName ComponentName;
    
    UPROPERTY(EditAnywhere)
    int32 SectionIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Color1Params;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Color2Params;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Color3Params;
    
    FCARSkinMaterials();
};

