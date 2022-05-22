#include "Team.h"

class UTeam;

TEnumAsByte<ETeamAttitude::Type> UTeam::GetAttitudeToward(const UTeam* Team) const {
    return ETeamAttitude::Friendly;
}

UTeam::UTeam() {
    this->DisplayName = TEXT("Default__Team");
    this->SelfAttitude = ETeamAttitude::Friendly;
    this->DefaultAttitude = ETeamAttitude::Hostile;
    this->DefaultAttitudeFromTeams = ETeamAttitude::Neutral;
    this->bUseDefaultAttitudeFromTeams = false;
    this->bEnableTeamCollisionChannel = true;
    this->TeamCollisionChannel = ETeamCollisionChannel::One;
}

