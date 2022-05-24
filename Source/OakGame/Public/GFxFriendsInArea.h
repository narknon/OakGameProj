#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMovie.h"
#include "GFxFriendsInArea.generated.h"

class UGbxTextField;

UCLASS()
class OAKGAME_API UGFxFriendsInArea : public UGbxGFxMovie {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxTextField* FriendCount;
    
public:
    UGFxFriendsInArea();
};

