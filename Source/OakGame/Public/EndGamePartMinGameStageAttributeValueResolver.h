#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "AttributeInitializationData.h"
#include "EndGamePartMinGameStageAttributeValueResolver.generated.h"

class UGbxCondition;

UCLASS(EditInlineNew)
class OAKGAME_API UEndGamePartMinGameStageAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData GameStageToReturnWhenEndGamePartsAreAllowed;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData GameStageToReturnWhenEndGamePartsAreNotAllowed;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* OverrideEnableCondition;
    
public:
    UEndGamePartMinGameStageAttributeValueResolver();
};

