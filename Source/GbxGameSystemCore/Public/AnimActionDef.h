#pragma once
#include "CoreMinimal.h"
#include "EAnimActionDefInput.h"
#include "AnimActionDef.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FAnimActionDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAnimActionDefInput InputType;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* AnimAsset;
    
    UPROPERTY(EditAnywhere)
    FName AnimAssetName;
    
    FAnimActionDef();
};

