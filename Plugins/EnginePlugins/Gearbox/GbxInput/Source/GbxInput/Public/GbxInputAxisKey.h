#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "GbxInputAxisKey.generated.h"

USTRUCT(BlueprintType)
struct GBXINPUT_API FGbxInputAxisKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    FVector Scale3D;
    
    FGbxInputAxisKey();
};

