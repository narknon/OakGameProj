#pragma once
#include "CoreMinimal.h"
#include "DialogContext.h"
#include "UObject/Interface.h"
#include "GlobalDialogParametersProviderInterface.generated.h"

UINTERFACE(Blueprintable)
class UGlobalDialogParametersProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IGlobalDialogParametersProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void InitDialogContext(UPARAM(Ref) FDialogContext& Parameters) const;
    
};

