#pragma once
#include "CoreMinimal.h"
#include "SmartActionUseInfo.h"
#include "ESmartObjectTaskState.h"
#include "ActionUseState.generated.h"

class AGbxAIController;
class USmartObjectComponent;
class UAIUseSlotComponent;

USTRUCT(BlueprintType)
struct FActionUseState {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AGbxAIController* Controller;
    
    UPROPERTY(Export)
    USmartObjectComponent* SmartObjectComponent;
    
    UPROPERTY(Export)
    UAIUseSlotComponent* AIUseSlotComponent;
    
    UPROPERTY()
    FSmartActionUseInfo UseInfo;
    
    UPROPERTY()
    ESmartObjectTaskState State;
    
public:
    GBXAI_API FActionUseState();
};

