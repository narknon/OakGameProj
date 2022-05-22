#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FrontendStandInSpecialAnimationData.generated.h"

class UGbxAction;

USTRUCT(BlueprintType)
struct FFrontendStandInSpecialAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> Animation;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> AuxiliaryAnimation;
    
    UPROPERTY(EditAnywhere)
    float InitialDelay;
    
    OAKGAME_API FFrontendStandInSpecialAnimationData();
};

