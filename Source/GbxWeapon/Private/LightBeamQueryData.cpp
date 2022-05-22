#include "LightBeamQueryData.h"

FLightBeamQueryData::FLightBeamQueryData() {
    this->Actor = NULL;
    this->ActorType = ELightBeamQueryActorType::Unfiltered;
    this->OtherActor = NULL;
    this->BeamClass = NULL;
}

