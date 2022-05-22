#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "GbxTestInputAction.generated.h"

USTRUCT(BlueprintType)
struct FGbxTestInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EInputEvent> InputEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey InputKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LifeTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float AmountDepressed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float AmountDelta;
    
    GBXTEST_API FGbxTestInputAction();
};

