#pragma once
#include "CoreMinimal.h"
#include "GbxInputAxis.h"
#include "GbxInputRebind_Axis.generated.h"

class UGbxInputKeyRebindData_Axis;

USTRUCT(BlueprintType)
struct GBXINPUT_API FGbxInputRebind_Axis {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UGbxInputKeyRebindData_Axis* Binding;
    
    UPROPERTY(EditAnywhere)
    FGbxInputAxis AXIS;
    
public:
    FGbxInputRebind_Axis();
};

