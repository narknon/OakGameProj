#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "ESmartObjectTaskState.h"
#include "AITask_UseLookAtPoint.generated.h"

class UAITask_MoveTo;
class ULookAtPointComponent;
class ULookAtPointTag;

UCLASS()
class GBXAI_API UAITask_UseLookAtPoint : public UAITask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    ULookAtPointComponent* LookAtPointComponent;
    
    UPROPERTY(Transient)
    ULookAtPointTag* Tag;
    
    UPROPERTY(Transient)
    UAITask_MoveTo* MoveToTask;
    
    UPROPERTY(Transient)
    ESmartObjectTaskState State;
    
public:
    UAITask_UseLookAtPoint();
};

