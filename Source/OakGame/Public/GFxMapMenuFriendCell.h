#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxMapMenuFriendCell.generated.h"

class UGbxTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxMapMenuFriendCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* FriendNameText;
    
    UPROPERTY(Transient)
    UGbxTextField* FriendInfoText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ItemIcon;
    
    UPROPERTY(Transient)
    FString IconPath;
    
public:
    UGFxMapMenuFriendCell();
};

