#include "LingeringDamageTypeInfo.h"

FLingeringDamageTypeInfo::FLingeringDamageTypeInfo() {
    this->DamageStyle = ELingeringDamageStyle::DamageStyle_Burst;
    this->ElementalEmitter = NULL;
    this->LightBeam = NULL;
    this->DamageData = NULL;
    this->DamageScale = 0.00f;
    this->LingeringRadius = 0.00f;
    this->MirvChildLingeringRadius = 0.00f;
    this->RainChildLingeringRadius = 0.00f;
}

