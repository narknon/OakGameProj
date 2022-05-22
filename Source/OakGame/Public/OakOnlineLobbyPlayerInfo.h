#pragma once
#include "CoreMinimal.h"
#include "EOakOnlineLobbyConnectivityState.h"
#include "EOakOnlineLobbyPlayerPlateState.h"
#include "EOakOnlineLobbyTalkingState.h"
#include "OakOnlineLobbyPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FOakOnlineLobbyPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EOakOnlineLobbyPlayerPlateState PlateState;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsLobbyLead;
    
    UPROPERTY(BlueprintReadWrite)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite)
    FText MissionDisplayName;
    
    UPROPERTY(BlueprintReadWrite)
    FText MapDisplayName;
    
    UPROPERTY(BlueprintReadWrite)
    FText PlayerClassDisplayName;
    
    UPROPERTY(BlueprintReadWrite)
    int32 CharacterLevel;
    
    UPROPERTY(BlueprintReadWrite)
    EOakOnlineLobbyConnectivityState ConnectivityState;
    
    UPROPERTY(BlueprintReadWrite)
    EOakOnlineLobbyTalkingState TalkingState;
    
    OAKGAME_API FOakOnlineLobbyPlayerInfo();
};

