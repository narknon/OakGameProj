#include "TwitchStreamsRequest.h"

FTwitchStreamsRequest::FTwitchStreamsRequest() {
    this->bResponseReceived = false;
    this->bGameNameResolved = false;
    this->bUserNameResolved = false;
    this->MaxNbStreams = 0;
}

