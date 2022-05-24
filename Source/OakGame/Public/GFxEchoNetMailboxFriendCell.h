#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxEchoNetMailboxFriendCell.generated.h"

class UGbxTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxEchoNetMailboxFriendCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* PlayerName;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PlayerIcon;
    
    UPROPERTY(Transient)
    UGbxTextField* PlayerStatus;
    
public:
    UGFxEchoNetMailboxFriendCell();
};

