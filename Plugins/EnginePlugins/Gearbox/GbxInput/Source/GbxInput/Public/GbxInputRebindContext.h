#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GbxInputRebind_Button.h"
#include "GbxInputRebind_Axis.h"
#include "GbxInputRebindContext.generated.h"

class UGbxInputRebindContext;

UCLASS(EditInlineNew)
class GBXINPUT_API UGbxInputRebindContext : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UGbxInputRebindContext* ParentContext;
    
    UPROPERTY(EditAnywhere)
    TArray<FGbxInputRebind_Button> ButtonBindings;
    
    UPROPERTY(EditAnywhere)
    TArray<FGbxInputRebind_Axis> AxisBindings;
    
    UPROPERTY(Transient)
    UGbxInputRebindContext* DefaultContext;
    
public:
    UGbxInputRebindContext();
};

