#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_MoveToComponent.generated.h"

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_MoveToComponent : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float AcceptableRadius;
    
    UPROPERTY(EditAnywhere)
    bool bAllowStrafe;
    
    UPROPERTY(EditAnywhere)
    bool bStopOnOverlap;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAllowPartialPath;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bProjectGoalLocation;
    
public:
    UBTTask_MoveToComponent();
};

