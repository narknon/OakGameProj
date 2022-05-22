#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "GbxEasingFunc.generated.h"

USTRUCT(BlueprintType)
struct FGbxEasingFunc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> Func;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Steps;
    
    GBXGAMESYSTEMCORE_API FGbxEasingFunc();
};

