#pragma once
#include "CoreMinimal.h"
#include "GFxInventoryItemWidget.h"
#include "GFxCrewQuartersPlaceObjectsItemWidget.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UGFxCrewQuartersPlaceObjectsItemWidget : public UGFxInventoryItemWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FText ItemNameText;
    
public:
    UGFxCrewQuartersPlaceObjectsItemWidget();
};

