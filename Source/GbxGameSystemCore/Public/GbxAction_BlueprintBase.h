#pragma once
#include "CoreMinimal.h"
#include "GbxAction.h"
#include "GbxAction_BlueprintBase.generated.h"

UCLASS()
class UGbxAction_BlueprintBase : public UGbxAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAutoCompleted;
    
    UGbxAction_BlueprintBase();
};

