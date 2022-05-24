#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxLobbyWidgetSettingsCell.generated.h"

UCLASS(NonTransient)
class UGFxLobbyWidgetSettingsCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bIsDisabledAppearance;
    
public:
    UGFxLobbyWidgetSettingsCell();
};

