#pragma once
#include "CoreMinimal.h"
#include "GFxItemInspectionPageBase.generated.h"

class UGbxGFxObject;

USTRUCT()
struct OAKGAME_API FGFxItemInspectionPageBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* PageWrapper;
    
public:
    FGFxItemInspectionPageBase();
};

