#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxCSProgressBar.generated.h"

UCLASS(NonTransient)
class OAKCS_API UGFxCSProgressBar : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* MaskObj;
    
    UPROPERTY(Transient)
    UGbxGFxObject* Marker;
    
public:
    UGFxCSProgressBar();
};

