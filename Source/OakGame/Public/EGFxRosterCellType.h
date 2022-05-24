#pragma once
#include "CoreMinimal.h"
#include "EGFxRosterCellType.generated.h"

UENUM()
enum class EGFxRosterCellType : int32 {
    EmptyCell,
    FindShiftFriendButton,
    ManageShiftFriendsButton,
    OnlineFriendInThisGame,
    OnlineFriend,
    OfflineFriend,
};

