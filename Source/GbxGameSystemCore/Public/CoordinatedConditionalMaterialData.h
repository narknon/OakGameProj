#pragma once
#include "CoreMinimal.h"
#include "CoordinatedConditionalMaterialData.generated.h"

class UMaterialInterface;
class UMaterial;

USTRUCT(BlueprintType)
struct FCoordinatedConditionalMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UMaterial* BaseMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MeshElementIndex;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bMatchMaterialStaticParameters: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bUseGlobalInheritedMaterialParameters: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bInheritAllMaterialParameters: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> InheritedMaterialParameters;
    
    GBXGAMESYSTEMCORE_API FCoordinatedConditionalMaterialData();
};

