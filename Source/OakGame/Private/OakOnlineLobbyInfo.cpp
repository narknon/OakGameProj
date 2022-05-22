#include "OakOnlineLobbyInfo.h"

FOakOnlineLobbyInfo::FOakOnlineLobbyInfo() {
    this->NetworkType = ENetworkType::Offline;
    this->InviteType = EInviteType::Public;
    this->ConnectivityState = EOakOnlineLobbyConnectivityState::Unknown;
    this->CurrentConnectedPlayerCount = 0;
    this->MaxConnectedPlayerCount = 0;
}

