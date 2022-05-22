#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GbxMenuInputAxisBind.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxMenuInputAxisBind {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    FGbxMenuInputAxisBind();
};

