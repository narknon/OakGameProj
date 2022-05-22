#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxNewDLCCell.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxNewDLCCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* ItemLabel;
    
public:
    UGFxNewDLCCell();
};

