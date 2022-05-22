#include "EchoInfo.h"

FEchoInfo::FEchoInfo() {
    this->DialogPlayingID = 0;
    this->Caller = NULL;
    this->CharacterData = NULL;
    this->PerformanceData = NULL;
    this->VoGSpeakerID = EVoiceOfGodSpeaker::INVALID;
    this->bForceEchoOnly = false;
}

