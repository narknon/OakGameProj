#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GFxLobbyWidgetText.generated.h"

UCLASS(Config=GbxUI)
class UGFxLobbyWidgetText : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, Transient)
    FText FriendsOnlyText;
    
    UPROPERTY(Config, Transient)
    FText InviteOnlyText;
    
    UPROPERTY(Config, Transient)
    FText OpenToPublicText;
    
    UPROPERTY(Config, Transient)
    FText LANText;
    
    UPROPERTY(Config, Transient)
    FText OfflineText;
    
    UPROPERTY(Config, Transient)
    FText GroupModeText;
    
    UPROPERTY(Config, Transient)
    FText ClassicModeText;
    
    UPROPERTY(Config, Transient)
    FText SharedModeText;
    
    UPROPERTY(Config, Transient)
    FText ClassicModeTooltipText;
    
    UPROPERTY(Config, Transient)
    FText SharedModeTooltipText;
    
    UPROPERTY(Config, Transient)
    FText LootModeLockedText;
    
    UPROPERTY(Config, Transient)
    FText FriendsOnlyTooltipText;
    
    UPROPERTY(Config, Transient)
    FText InviteOnlyTooltipText;
    
    UPROPERTY(Config, Transient)
    FText PublicTooltipText;
    
    UPROPERTY(Config, Transient)
    FText LANTooltipText;
    
    UPROPERTY(Config, Transient)
    FText OfflineTooltipText;
    
    UPROPERTY(Config, Transient)
    FText OfflinePCTooltipText;
    
    UPROPERTY(Config, Transient)
    FText LeaveGroupDialogTitleText;
    
    UPROPERTY(Config, Transient)
    FText LeaveGroupDialogBodyText;
    
    UPROPERTY(Config, Transient)
    FText LeaveGroupDialogAdditionalBodyText;
    
    UPROPERTY(Config, Transient)
    FText GoOnline;
    
    UPROPERTY(Config, Transient)
    FText ConnectToLan;
    
    UPROPERTY(Config, Transient)
    FText OfflineConnectionHeader;
    
    UPROPERTY(Config, Transient)
    FText OfflineConnectionInformation;
    
    UPROPERTY(Config, Transient)
    FText NotLanConnectionHeader;
    
    UPROPERTY(Config, Transient)
    FText NotLanConnectionInformation;
    
    UPROPERTY(Config, Transient)
    FText InGameConnectionHeader;
    
    UPROPERTY(Config, Transient)
    FText InGameConnectionInformation;
    
    UGFxLobbyWidgetText();
};

