#include "OakSDUData.h"

class UInventoryCategoryData;

bool UOakSDUData::GetSDULevelInfo(int32 SDULevel, int32& OutSDUPrice, UInventoryCategoryData*& OutPriceCurrenty, FAttributeEffectData& OutAttributeModifyInfo) {
    return false;
}

UOakSDUData::UOakSDUData() {
    this->SDUBonusTable = NULL;
    this->bProfileSDU = false;
    this->bClientSDU = false;
    this->bGrenadeSDU = false;
    this->UIVendorContextData = NULL;
    this->ManufacturerData = NULL;
}

