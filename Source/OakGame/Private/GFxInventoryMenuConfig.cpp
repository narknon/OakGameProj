#include "GFxInventoryMenuConfig.h"

FGFxInventoryMenuConfig::FGFxInventoryMenuConfig() {
    this->WeaponCategory = NULL;
    this->GrenadeCategory = NULL;
    this->ShieldCategory = NULL;
    this->GoldenKeyResourceData = NULL;
    this->ErediumResourceData = NULL;
    this->MoneyResourceData = NULL;
    this->VaultCoinResourceData = NULL;
    this->bReturnToBackpackWhenEquippingFromIt = false;
    this->bClearAllNewnessWhenLeavingMenu = false;
    this->bEnableInspect = false;
    this->ItemCardLineThickness = 0.00f;
    this->GrenadeAmmoType = NULL;
    this->ItemInspectionMenuData = NULL;
    this->ItemCardMovie = NULL;
    this->ItemCardScale = 0.00f;
    this->CompareItemCardScale = 0.00f;
    this->TrinketIconsReserveCount = 0;
    this->TotalCurrencySpinnerHeightOverride = 0.00f;
    this->CurrencyWidgetPauseOnNewValueTime = 0.00f;
    this->CurrencyWidgetCostSpinTime = 0.00f;
    this->LargeBackpackVisibleCells = 0;
    this->SmallBackpackVisibleCells = 0;
    this->bResortBackpackWhenAddingAndRemovingItems = false;
    this->DelayBeforeDragStart = 0.00f;
}

