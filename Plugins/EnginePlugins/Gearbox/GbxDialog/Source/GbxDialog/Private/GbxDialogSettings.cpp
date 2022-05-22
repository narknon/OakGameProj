#include "GbxDialogSettings.h"
#include "DialogBlackboard.h"

UGbxDialogSettings::UGbxDialogSettings() {
    this->PureEchoSpeakerActorClass = NULL;
    this->GameGlobalParametersProviderClass = NULL;
    this->BlackboardClass = UDialogBlackboard::StaticClass();
    this->ConfigurePureEchoTalkerEvent = NULL;
    this->EchoControlWwiseParameter = NULL;
    this->PureEchoSpeakerWwiseParameter = NULL;
    this->VoicePitchParameter = NULL;
    this->ConversationExpirationDuration = 10.00f;
    this->RecentPerformancesExpirationDuration = 0.50f;
    this->EmoteWeightBlendDuration = 0.25f;
    this->SmallCooldownRadius = 1000.00f;
    this->NearRadius = 1024.00f;
    this->QuietTimeMergeRadius = 1024.00f;
    this->RegionRadius = 8192.00f;
    this->EnableEchoBelowVolume = -16.00f;
    this->DisableEchoAboveVolume = -14.00f;
    this->EchoTransitionReqiredVolumeChange = 3.00f;
    this->InterConversationDelay = 0.30f;
    this->EventParameter = NULL;
    this->SelfParameter = NULL;
    this->GlobalContextParameter = NULL;
    this->ScriptContextParameter = NULL;
    this->ConversationContextParameter = NULL;
    this->LineContextParameter = NULL;
    this->CountersEnum = NULL;
    this->FlagsEnum = NULL;
}

