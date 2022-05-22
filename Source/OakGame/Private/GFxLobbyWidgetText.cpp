#include "GFxLobbyWidgetText.h"

UGFxLobbyWidgetText::UGFxLobbyWidgetText() {
    this->FriendsOnlyText = FText::FromString(TEXT("Friends Only"));
    this->InviteOnlyText = FText::FromString(TEXT("Invite Only"));
    this->OpenToPublicText = FText::FromString(TEXT("Open to Public"));
    this->LANText = FText::FromString(TEXT("LAN Play"));
    this->OfflineText = FText::FromString(TEXT("Local Only"));
    this->GroupModeText = FText::FromString(TEXT("Group Mode"));
    this->ClassicModeText = FText::FromString(TEXT("Coopetition"));
    this->SharedModeText = FText::FromString(TEXT("Cooperation"));
    this->ClassicModeTooltipText = FText::FromString(TEXT("Classic Borderlands\x00AE rules. Discuss who gets loot ahead of time, <i>or don't</i>. Just vacuum all that loot and deny it existed in the first place. We don't judge.\n\nWe also don't level balance in this mode. If you are level 20 and your level 5 friend joins your game, you better protect them, <i>or don't</i>."));
    this->SharedModeTooltipText = FText::FromString(TEXT("Every bit of loot you find is dropped for you and unique to you (Instanced). Your teammates can't take your loot.\n\nYou can play with anyone of any level at any time."));
    this->LootModeLockedText = FText::FromString(TEXT("The group mode can only be changed from the main menu."));
    this->FriendsOnlyTooltipText = FText::FromString(TEXT("Friends can join your group at any time."));
    this->InviteOnlyTooltipText = FText::FromString(TEXT("Only players you specifically invite can join your group.\n\nAccess your list of friends and recently met players in the Roster."));
    this->PublicTooltipText = FText::FromString(TEXT("Opens your group up for anyone to join at any time."));
    this->LANTooltipText = FText::FromString(TEXT("Sets you to a Local Network game.\n\nBrowse for other games in the LAN Browser."));
    this->OfflineTooltipText = FText::FromString(TEXT("Sets your game to be local only. Group functionality will be disabled."));
    this->OfflinePCTooltipText = FText::FromString(TEXT("Sets your game to be local only. Group functionality will be disabled."));
    this->LeaveGroupDialogTitleText = FText::FromString(TEXT("Leave Group?"));
    this->LeaveGroupDialogBodyText = FText::FromString(TEXT("Are you sure you want to leave {0}'s group?"));
    this->LeaveGroupDialogAdditionalBodyText = FText::FromString(TEXT("Doing so will return you to the Main Menu."));
    this->GoOnline = FText::FromString(TEXT("GO ONLINE"));
    this->ConnectToLan = FText::FromString(TEXT("CONNECT TO LAN"));
    this->OfflineConnectionHeader = FText::FromString(TEXT("OFFLINE CONNECTION"));
    this->OfflineConnectionInformation = FText::FromString(TEXT("Your current connection status is offline. Your online connection is preventing the use of the features of this screen.\n\nBorderlands\x00AE 3's recommended play experience is with other players. Get online now."));
    this->NotLanConnectionHeader = FText::FromString(TEXT("LAN CONNECTION REQUIRED"));
    this->NotLanConnectionInformation = FText::FromString(TEXT("Your current connection status is not LAN. Your connection must be LAN mode to use the features of this screen.\n\nBorderlands\x00AE 3's recommended play experience is with other players. Go to LAN mode now."));
    this->InGameConnectionHeader = FText::FromString(TEXT("AVAILABLE IN-GAME ONLY"));
    this->InGameConnectionInformation = FText::FromString(TEXT("The mailbox is only available while in the game."));
}

