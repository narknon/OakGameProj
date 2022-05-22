#include "OakOnlineLobbyPlayerInfo.h"

FOakOnlineLobbyPlayerInfo::FOakOnlineLobbyPlayerInfo() {
    this->PlateState = EOakOnlineLobbyPlayerPlateState::Offline;
    this->bIsLobbyLead = false;
    this->CharacterLevel = 0;
    this->ConnectivityState = EOakOnlineLobbyConnectivityState::Unknown;
    this->TalkingState = EOakOnlineLobbyTalkingState::NotTalking;
}

