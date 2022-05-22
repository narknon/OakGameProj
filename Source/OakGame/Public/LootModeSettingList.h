#pragma once
#include "CoreMinimal.h"
#include "GFxLobbyWidgetSettingList.h"
#include "EOakGameStateUIGroupMode.h"
#include "LootModeSettingList.generated.h"

UCLASS(NonTransient)
class ULootModeSettingList : public UGFxLobbyWidgetSettingList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<EOakGameStateUIGroupMode> LootModeListOrder;
    
public:
    ULootModeSettingList();
};

