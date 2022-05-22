#pragma once
#include "CoreMinimal.h"
#include "GbxUIFormattedText.generated.h"

class UGbxUIFormattableParameter;
class IGbxUIFormattableParameter;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxUIFormattedText {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText FormatText;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, TScriptInterface<IGbxUIFormattableParameter>> FormatParams;
    
    FGbxUIFormattedText();
};

