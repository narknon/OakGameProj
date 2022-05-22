#pragma once
#include "CoreMinimal.h"
#include "EchoInfo.h"
#include "UObject/Object.h"
#include "DialogSystemEchoManagerInterface.h"
#include "EchoManager.generated.h"

UCLASS()
class UEchoManager : public UObject, public IDialogSystemEchoManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FEchoInfo> CurrentEchoInfoStack;
    
public:
    UEchoManager();
    
    // Fix for true pure virtual functions not being implemented
};

