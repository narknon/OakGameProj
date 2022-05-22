#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxLoadGameListItem.generated.h"

class UGbxGFxObject;

UCLASS(NonTransient)
class UGFxLoadGameListItem : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* CharacterClassIcon;
    
public:
    UGFxLoadGameListItem();
};

