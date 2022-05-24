#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GbxParam.h"
#include "GbxTriggerProperty.h"
#include "BTService_TriggerDialog.generated.h"

class UDialogParameter;
class UDialogEvent;

UCLASS(Const, EditInlineNew)
class UBTService_TriggerDialog : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogEvent* DialogEvent;
    
    UPROPERTY(EditAnywhere)
    FGbxTriggerProperty RefreshParamsProperty;
    
    UPROPERTY(EditAnywhere)
    TMap<UDialogParameter*, FGbxParam> ParameterValues;
    
    UBTService_TriggerDialog();
private:
    UFUNCTION()
    void RefreshParams() const;
    
};

