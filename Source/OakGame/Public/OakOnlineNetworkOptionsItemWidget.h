#pragma once
#include "CoreMinimal.h"
#include "GbxListItem.h"
#include "OnlineNetworkOptionData.h"
#include "OakOnlineNetworkOptionsItemWidget.generated.h"

UCLASS(EditInlineNew)
class UOakOnlineNetworkOptionsItemWidget : public UGbxListItem {
    GENERATED_BODY()
public:
    UOakOnlineNetworkOptionsItemWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void HandleDataChanged(const FOnlineNetworkOptionData& Data);
    
};

