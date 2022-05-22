#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxInputActionEventInterpreter.generated.h"

class UGbxInputActionEventInterpreter;

UCLASS(Abstract, Config=Input)
class GBXINPUT_API UGbxInputActionEventInterpreter : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(GlobalConfig)
    TSoftClassPtr<UGbxInputActionEventInterpreter> InterpreterClass;
    
public:
    UGbxInputActionEventInterpreter();
};

