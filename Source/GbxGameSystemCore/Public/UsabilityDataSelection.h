#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UseDefSelection.h"
#include "UsabilityDataSelection.generated.h"

class UGbxCondition;

UCLASS()
class GBXGAMESYSTEMCORE_API UUsabilityDataSelection : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* EnabledCondition;
    
    UPROPERTY(EditAnywhere)
    FUseDefSelection PrimaryUseDefSelection;
    
    UPROPERTY(EditAnywhere)
    FUseDefSelection PrimaryHoldUseDefSelection;
    
    UPROPERTY(EditAnywhere)
    FUseDefSelection SecondaryUseDefSelection;
    
    UPROPERTY(EditAnywhere)
    FUseDefSelection SecondaryHoldUseDefSelection;
    
    UUsabilityDataSelection();
};

