#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxServerBrowserListItem.generated.h"

class UGbxTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class UGFxServerBrowserListItem : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGbxTextField* HostLevel;
    
    UPROPERTY()
    UGbxTextField* PlayThrough;
    
    UPROPERTY()
    UGbxTextField* Mission;
    
    UPROPERTY()
    UGbxTextField* NumOfPlayers;
    
    UPROPERTY()
    UGbxTextField* MaxPlayers;
    
    UPROPERTY()
    UGbxTextField* Latency;
    
    UPROPERTY()
    UGbxGFxObject* NetworkStrengthIcon;
    
public:
    UGFxServerBrowserListItem();
};

