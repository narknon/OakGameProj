#pragma once
#include "CoreMinimal.h"
#include "GFxMenuTutorialTintClipData.generated.h"

class UGbxGFxObject;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxMenuTutorialTintClipData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TintClipName;
    
    UPROPERTY(EditAnywhere)
    FString TintClipPath;
    
    UPROPERTY(Transient)
    UGbxGFxObject* TintClip;
    
    FGFxMenuTutorialTintClipData();
};

