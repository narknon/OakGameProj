#pragma once
#include "CoreMinimal.h"
#include "GbxInputEventExecOutput.h"
#include "GbxInputEvent.generated.h"

class UGbxInputComponent;
class UGbxInputActionData_Discrete;

USTRUCT()
struct GBXINPUT_API FGbxInputEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGbxInputEventExecOutput> ExecOutputs;
    
    UPROPERTY(Transient)
    UClass* SelfClass;
    
    UPROPERTY(Export, Transient)
    UGbxInputComponent* Component;
    
    UPROPERTY(Transient)
    TArray<UGbxInputActionData_Discrete*> PendingDiscreteActions;
    
    UPROPERTY(EditAnywhere)
    bool bBlockParentClassEvent;
    
public:
    FGbxInputEvent();
};

