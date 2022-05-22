#pragma once
#include "CoreMinimal.h"
#include "EContextualMenuEntryType.generated.h"

UENUM(BlueprintType)
enum class EContextualMenuEntryType : uint8 {
    Invite,
    Join,
    SendItem,
    Favorite,
    Unfavorite,
    Mute,
    Unmute,
    Delete,
    KickOut,
    Inspect,
    ViewProfile,
    AddFriend,
    RemoveFriend,
    NetworkOption_Anyone,
    NetworkOption_FriendsOnly,
    NetworkOption_InviteOnly,
    LootMode_Classic,
    LootMode_Shared,
    Shift_SecondaryIdentity,
    Shift_AddFriend,
    Shift_RemoveFriend,
    Shift_Block,
    Shift_Unblock,
    Shift_Report,
    None,
    Count,
};

