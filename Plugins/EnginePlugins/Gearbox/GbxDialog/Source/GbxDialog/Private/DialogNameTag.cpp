#include "DialogNameTag.h"

UDialogNameTag::UDialogNameTag() {
    this->NameTagEnumValue = NULL;
    this->ParentNameTag = NULL;
    this->VoGSpeaker = EVoiceOfGodSpeaker::INVALID;
    this->EchoData = NULL;
    this->bUsableForPureEchoes = true;
    this->bDistributedSpeaker = false;
    this->VoicePitchOffset = 0;
    this->CustomizationRTPC = NULL;
    this->CustomizationRTPCValue = 0.00f;
    this->MoodDataAsset = NULL;
}

