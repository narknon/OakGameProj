#pragma once
#include "CoreMinimal.h"
#include "OakCustomizationInfo.generated.h"

class UOakCustomizationData;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakCustomizationInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOakCustomizationData* Customization;
    
    UPROPERTY()
    bool IsNew;
    
    FOakCustomizationInfo();
};

