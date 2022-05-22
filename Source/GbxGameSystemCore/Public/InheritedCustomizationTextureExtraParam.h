#pragma once
#include "CoreMinimal.h"
#include "InheritedCustomizationTextureExtraParam.generated.h"

class UGbxCustomizationTargetData;
class UTexture;

USTRUCT(BlueprintType)
struct FInheritedCustomizationTextureExtraParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxCustomizationTargetData* Target;
    
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    UTexture* Texture;
    
    GBXGAMESYSTEMCORE_API FInheritedCustomizationTextureExtraParam();
};

