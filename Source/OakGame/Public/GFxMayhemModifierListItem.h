#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxMayhemModifierListItem.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxMayhemModifierListItem : public UGbxGFxListCell {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxTextField* HeaderText;
    
    UPROPERTY(Transient)
    UGbxTextField* BodyText;
    
    UGFxMayhemModifierListItem();
};

