#include "ZoneMapPOITypeData.h"

UZoneMapPOITypeData::UZoneMapPOITypeData() {
    this->POISprite = NULL;
    this->bDisplayInFastTravelList = false;
    this->POICategory = EZoneMapTargetType::POI;
    this->POIIconClass = NULL;
    this->bShowInMiniMap = true;
    this->bShowInZoneMap = true;
    this->TranslucencySortPriority = 0;
    this->SizeMultiplier = 1.00f;
    this->IconZOffset = 0.00f;
    this->DontUseScaleformIcon = false;
}

