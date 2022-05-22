#pragma once
#include "CoreMinimal.h"
#include "TextElementCondition.h"
#include "AdvancedInteractiveObject.h"
#include "ConditionalFlavorTextIO.generated.h"

class UGbxMenuData;

UCLASS()
class OAKGAME_API AConditionalFlavorTextIO : public AAdvancedInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTextElementCondition> FlavorTextElements;
    
    UPROPERTY(EditAnywhere)
    FText TitleText;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* MenuData;
    
    AConditionalFlavorTextIO();
};

