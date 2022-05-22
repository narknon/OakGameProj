#pragma once
#include "CoreMinimal.h"
#include "SmartActionUseInfo.h"
#include "UObject/NoExportTypes.h"
#include "SmartActionInfoContext.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GBXAI_API FSmartActionInfoContext {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> SmartObject;
    
    UPROPERTY()
    FSmartActionUseInfo UseInfo;
    
    UPROPERTY()
    FVector ContextLoc;
    
    FSmartActionInfoContext();
};

