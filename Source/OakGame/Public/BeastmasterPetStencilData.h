#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BeastmasterPetStencilData.generated.h"

USTRUCT(BlueprintType)
struct FBeastmasterPetStencilData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FLinearColor OutlineColor;
    
    UPROPERTY(EditDefaultsOnly)
    int32 OutlineThickness;
    
    OAKGAME_API FBeastmasterPetStencilData();
};

