#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "ESmartObjectTaskState.h"
#include "AITask_UsePerch.generated.h"

class UAITask_MoveTo;
class UPerchComponent;
class UPerchTag;

UCLASS()
class GBXAI_API UAITask_UsePerch : public UAITask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UPerchComponent* PerchComponent;
    
    UPROPERTY(Transient)
    UPerchTag* Tag;
    
    UPROPERTY(Transient)
    UAITask_MoveTo* MoveToTask;
    
    UPROPERTY(Transient)
    ESmartObjectTaskState State;
    
public:
    UAITask_UsePerch();
};

