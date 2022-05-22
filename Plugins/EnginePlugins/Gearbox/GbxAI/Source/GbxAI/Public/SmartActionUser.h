#pragma once
#include "CoreMinimal.h"
#include "ESmartObjectTaskState.h"
#include "SmartActionUser.generated.h"

class AController;

USTRUCT(BlueprintType)
struct FSmartActionUser {
    GENERATED_BODY()
public:
    UPROPERTY()
    AController* Controller;
    
    UPROPERTY()
    float UseDuration;
    
    UPROPERTY()
    ESmartObjectTaskState State;
    
    GBXAI_API FSmartActionUser();
};

