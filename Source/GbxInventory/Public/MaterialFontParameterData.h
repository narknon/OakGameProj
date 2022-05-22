#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterData.h"
#include "MaterialFontParameterData.generated.h"

class UFont;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FMaterialFontParameterData : public FMaterialParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UFont* Font;
    
    UPROPERTY(EditAnywhere)
    int32 FontPage;
    
    FMaterialFontParameterData();
};

