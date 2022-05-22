#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterData.h"
#include "SkinParameterData.generated.h"

USTRUCT(BlueprintType)
struct FSkinParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FMaterialParameterData> Color1;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaterialParameterData> Color2;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaterialParameterData> Color3;
    
    OAKGAME_API FSkinParameterData();
};

