#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCellWithData.h"
#include "GbxGFxListItemSpinner.generated.h"

class UGbxSpinner;

UCLASS(NonTransient)
class GBXUI_API UGbxGFxListItemSpinner : public UGbxGFxListCellWithData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxSpinner* SpinnerItem;
    
public:
    UGbxGFxListItemSpinner();
private:
    UFUNCTION()
    void OnSpinnerValueUpdated();
    
};

