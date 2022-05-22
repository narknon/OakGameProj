#include "OakZoneMapChallengeIcon.h"

class UTexture2D;


TEnumAsByte<EZoneMapChallengeStatus> AOakZoneMapChallengeIcon::GetChallengeStatus() {
    return ZMC_AvailableChallenge;
}

UTexture2D* AOakZoneMapChallengeIcon::GetChallengeIconTexture() {
    return NULL;
}

AOakZoneMapChallengeIcon::AOakZoneMapChallengeIcon() {
}

