#include "LightProjectileAudioProperties.h"

FLightProjectileAudioProperties::FLightProjectileAudioProperties() {
    this->BulletByEntrance = NULL;
    this->BulletByBody = NULL;
    this->BulletByExit = NULL;
    this->BulletByMaxDistance = 0.00f;
    this->BulletByChance = 0.00f;
    this->TravellingAudioFxCollection = NULL;
    this->TravellingAudio = NULL;
    this->TravellingAudioComponentSize = 0.00f;
    this->ListenerApproachSpeedRtpc = NULL;
}

