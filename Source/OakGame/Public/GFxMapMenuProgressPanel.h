#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxMapMenuProgressPanel.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxMapMenuProgressPanel : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* ProgressHeader;
    
    UPROPERTY(Transient)
    UGbxTextField* ProgressPercentText;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxObject*> ProgressLines;
    
    UPROPERTY(Transient)
    TArray<FText> CachedProgressTextLines;
    
    UPROPERTY(Transient)
    TArray<FText> CachedProgressFractionLines;
    
public:
    UGFxMapMenuProgressPanel();
};

