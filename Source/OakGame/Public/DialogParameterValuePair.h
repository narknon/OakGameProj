#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "DialogParameterValuePair.generated.h"

class UDialogParameter;

USTRUCT()
struct FDialogParameterValuePair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogParameter* Parameter;
    
    UPROPERTY(EditAnywhere)
    FGbxParam Value;
    
    OAKGAME_API FDialogParameterValuePair();
};

