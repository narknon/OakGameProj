#pragma once
#include "CoreMinimal.h"
#include "GbxAction.h"
#include "RandomActionPair.h"
#include "GbxAction_RandomContainer.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_RandomContainer : public UGbxAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FRandomActionPair> ActionList;
    
    UGbxAction_RandomContainer();
};

