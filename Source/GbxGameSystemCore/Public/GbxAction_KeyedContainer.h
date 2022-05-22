#pragma once
#include "CoreMinimal.h"
#include "GbxAction.h"
#include "GameplayTagContainer.h"
#include "GbxAction_KeyedContainer.generated.h"

UCLASS()
class UGbxAction_KeyedContainer : public UGbxAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ActionKey;
    
    UGbxAction_KeyedContainer();
};

