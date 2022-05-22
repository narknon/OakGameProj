#include "GbxHUDStateData.h"

UGbxHUDStateData::UGbxHUDStateData() {
    this->InitializationAnimSet = EHUDInitializationAnimationSet::None;
    this->ListType = EGbxHUDStateListType::WhiteList;
    this->StayOnTopOfStack = false;
}

