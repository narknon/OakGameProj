#pragma once
#include "CoreMinimal.h"
#include "GibData.generated.h"

class UObject;
class UMaterialInstanceConstant;

USTRUCT(BlueprintType)
struct FGibData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MaxCount;
    
    UPROPERTY(EditAnywhere)
    float SelectionWeight;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideGlobalScale;
    
    UPROPERTY(EditAnywhere)
    float MinScale;
    
    UPROPERTY(EditAnywhere)
    float MaxScale;
    
    UPROPERTY(EditAnywhere)
    UObject* Mesh;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstanceConstant* MaterialOverride;
    
    GBXGAMESYSTEMCORE_API FGibData();
};

