#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxMapMenuFastTravelCell.generated.h"

class UGbxGFxObject;
class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxMapMenuFastTravelCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* NewIndicator;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CurrentLocation;
    
    UPROPERTY(Transient)
    UGbxGFxObject* FriendWidget;
    
    UPROPERTY(Transient)
    UGbxTextField* FriendCount;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MissionIndicator;
    
public:
    UGFxMapMenuFastTravelCell();
};

