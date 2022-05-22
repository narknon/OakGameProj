#include "GbxMenuInputSettings.h"

UGbxMenuInputSettings::UGbxMenuInputSettings() {
    this->AxisAsButtonThreshold = 0.75f;
    this->AxisThreshold = 0.20f;
    this->ActionMappings.AddDefaulted(107);
    this->AxisMappings.AddDefaulted(20);
}

