#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxFriendsInAreaListCell.generated.h"

class UGbxTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxFriendsInAreaListCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString PlayerName;
    
private:
    UPROPERTY(Transient)
    UGbxTextField* LevelText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PlayerIcon;
    
    UPROPERTY(Transient)
    UGbxTextField* FriendNameText;
    
    UPROPERTY(Transient)
    UGbxTextField* FriendInfoText;
    
    UPROPERTY(Transient)
    UGbxTextField* PartyInfoText;
    
public:
    UGFxFriendsInAreaListCell();
};

